package com.appframework.core;
import com.appframework.assets.PageAsset;
import com.appframework.events.AppEvent;
import com.appframework.events.BranchLoaderEvent;
import com.appframework.events.PageEvent;
import com.appframework.flow.FlowManager;
import nme.events.Event;
import nme.events.EventDispatcher;

/**
 * ...
 * @author shrek
 */

class AppController extends EventDispatcher
{
	private static var currentBranch:String = "";
	
	private static var isTransitioning:Bool = false;
	private static var isLoading:Bool = false;
	
	private var transitionController:TransitionController;
	private var branchLoader:BranchLoader;
	private var appView:AppView;
	
	private var queuedBranch:String = "";
	private var queuedFlow:String = "";
	
	public function new(av:AppView) 
	{
		super();
		appView = av;
		transitionController = new TransitionController();
		branchLoader = new BranchLoader();
		branchLoader.addEventListener(BranchLoaderEvent.LOAD_PAGE, onLoadPage);
		branchLoader.addEventListener(BranchLoaderEvent.COMPLETE, onPreloadComplete);
		transitionController.addEventListener(PageEvent.TRANSITION_OUT_COMPLETE, onTransitionOutComplete);
		transitionController.addEventListener(PageEvent.TRANSITION_IN_COMPLETE, onTransitionInComplete);
	}
	
	public static function getCurrentBranch():String
	{
		return currentBranch;
	}
	
	public static var busy(get_busy, null):Bool;
	private static function get_busy():Bool
	{
		return isTransitioning || isLoading;
	}
	
	public function onGoto(event:AppEvent):Void
	{
		BranchManager.cleanup();
		var validBranch:String = event.validBranch;
		
		if (validBranch != currentBranch)
		{
			if (!isTransitioning && !isLoading) 
			{
				queuedBranch = "";
				queuedFlow = "";
				var flow:String;
				if (event.flow == null)
				{
					// need to get the branch root page that will transition in to determine flow
					var prevArray:Array<PageAsset> = BranchTools.getPagesOfBranch(currentBranch); 
					var newArray:Array<PageAsset> = BranchTools.getPagesOfBranch(validBranch); 
					var i:Int = 0;
					for (i in 0...newArray.length)
					{
						if (newArray[i] != prevArray[i]) break;
					}
					if (newArray[i] == null || newArray[i] == null)
					{
						flow = AppModel.defaultFlow;
					}
					else
					{
						flow = newArray[i].flow;
					}
					currentBranch = validBranch;
				}
				else
				{
					flow = event.flow;
					currentBranch = validBranch;
				}
				FlowManager.init(flow);
				FlowManager.start();
			}
			else 
			{
				queuedBranch = event.fullBranch;	
				queuedFlow = event.flow;
				if (!isLoading) 
				{
					transitionController.interrupt();
				}
				else
				{
					branchLoader.interrupt();
				}
			}
		}
	}
	
	// BRANCH LOADER EVENT LISTENERS
	public function onLoadPage(event:BranchLoaderEvent):Void
	{
		isLoading = true;
		var page:PageAsset = event.asset;
		BranchManager.addPage(page);
		appView.addPage(page);
		page.preload();
	}
	
	// APPHQ EVENT LISTENERS
	private function onTransitionOutComplete(event:PageEvent):Void
	{
		BranchManager.cleanup();
		FlowManager.transitionOutComplete();
	}
	private function onTransitionInComplete(event:PageEvent):Void
	{
		BranchManager.cleanup();
		FlowManager.transitionInComplete();
	}
	
	public function onTransitionOut(event:Event):Void
	{
		if (!checkQueuedBranch()) 
		{
			isTransitioning = true; 
			transitionController.transitionOut(BranchManager.getTransitionOutArray(currentBranch));
		}
	}
	public function onTransitionIn(event:Event):Void
	{
		if (!checkQueuedBranch()) 
		{
			isTransitioning = true;
			transitionController.transitionIn(BranchTools.getPagesOfBranch(currentBranch));
		}
	}
	public function onPreload(event:Event):Void
	{
		if (!checkQueuedBranch()) 
		{
			isLoading = true; 
			branchLoader.loadBranch(currentBranch);
		}
	}
	public function onComplete(event:Event):Void
	{
		checkQueuedBranch();
	}
	
	public function onPreloadComplete(event:Event):Void
	{
		isLoading = false;
		FlowManager.preloadComplete();
	}
	
	private function checkQueuedBranch():Bool
	{
		isLoading = isTransitioning = false;
		if (queuedBranch.length > 0)
		{
			redirect();
			return true;
		}
		return false;
	}
	
	private function redirect():Void
	{
		AppHQ.instance.goto(queuedBranch, queuedFlow);
	}
	
}