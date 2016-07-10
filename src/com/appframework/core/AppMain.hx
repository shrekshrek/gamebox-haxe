package com.appframework.core;
import com.appframework.api.App;
import com.appframework.events.AppEvent;
import nme.display.Sprite;
import nme.events.Event;
import nme.Lib;

/**
 * ...
 * @author shrek
 */

class AppMain extends Sprite
{
	private var model:AppModel;
	private var controller:AppController;
	private var view:AppView;
	
	public var alignCount:Int = 0;
	public var __WIDTH:Int = 0;
	public var __HEIGHT:Int = 0;
	
	private var appXML:String;
	
	private static var _instance:AppMain;
	
	public function new() 
	{
		super();
		_instance = this;
		
		#if iphone
		Lib.current.stage.addEventListener(Event.RESIZE, onAddedToStage);
		#else
		this.addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
		#end
	}
	
	public static var instance(get_instance,null):AppMain;
	private static function get_instance():AppMain
	{
		return _instance;
	}
	
	private function onAddedToStage(event:Event):Void
	{
		#if iphone
		Lib.current.stage.removeEventListener(Event.RESIZE, onAddedToStage);
		#else
		this.removeEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
		#end
		
		startApp();
	}
	
	private function startApp():Void
	{
		__WIDTH = Lib.current.stage.stageWidth;
		__HEIGHT = Lib.current.stage.stageHeight;
		model = new AppModel();
		view = new AppView();
		App.impl = AppImpl.birth();
		model.addEventListener(Event.COMPLETE, onAppModelComplete);
		loadSiteXML();
	}
	
	private function loadSiteXML():Void
	{
		model.load(appXML);
	}
	private function onAppModelComplete(event:Event):Void
	{
		addChild(view);
		controller = new AppController(view);
		AppHQ.birth();
		AppHQ.instance.addEventListener(AppEvent.GOTO, controller.onGoto);
		AppHQ.instance.addEventListener(AppHQ.TRANSITION_OUT, controller.onTransitionOut);
		AppHQ.instance.addEventListener(AppHQ.TRANSITION_IN, controller.onTransitionIn);
		AppHQ.instance.addEventListener(AppHQ.PRELOAD, controller.onPreload);
		AppHQ.instance.addEventListener(AppHQ.COMPLETE, controller.onComplete);
		
		init();
	}
	
	private function initComplete():Void
	{
		AppHQ.instance.goto(AppModel.indexID);
	}
	// override for custom initialization
	private function init():Void
	{
		initComplete();
	}
	// site centering code
	private function alignSite(w:Int, h:Int):Void
	{
		__WIDTH = w;
		__HEIGHT = h;
		stage.addEventListener(Event.RESIZE, onResize);
		addEventListener(Event.ENTER_FRAME, alignEnterFrame, false, 0, true);
	}
	private function alignEnterFrame(event:Event):Void
	{
		if (view != null)
		{
			onResize(new Event(Event.RESIZE));
			if (alignCount++ > 2) removeEventListener(Event.ENTER_FRAME, alignEnterFrame);
		}
	}
	private function onResize(event:Event):Void {}
}