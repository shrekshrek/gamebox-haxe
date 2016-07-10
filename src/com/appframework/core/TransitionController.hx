package com.appframework.core;
import com.appframework.assets.PageAsset;
import com.appframework.events.PageEvent;
import nme.events.EventDispatcher;

/**
 * ...
 * @author shrek
 */

class TransitionController extends EventDispatcher
{
	private var isInterrupted:Bool;
	private var transitionState:Int;
	private var outPages:Array<PageAsset>;
	private var inPages:Array<PageAsset>;
	private var outIndex:Int;
	private var inIndex:Int;
	
	public function new() 
	{
		super();
	}
	
	public function transitionOut(pages:Array<PageAsset>):Void
	{
		transitionState |= 2;
		isInterrupted = false;
		if (pages.length > 0) 
		{
			outPages = pages;
			outIndex = pages.length - 1;
			pageOut();				
		}
		else
		{
			dispatchEvent(new PageEvent(PageEvent.TRANSITION_OUT_COMPLETE));				
		}
	}
	
	public function transitionIn(pages:Array<PageAsset>):Void
	{
		transitionState |= 1;
		isInterrupted = false;	
		if (pages.length > 0)
		{
			inPages = pages;
			inIndex = 0;
			pageIn();
		}
		else
		{
			dispatchEvent(new PageEvent(PageEvent.TRANSITION_IN_COMPLETE));
		}
	}
	private function onTransitionOutComplete(event:PageEvent):Void
	{
		event.target.removeEventListener(PageEvent.TRANSITION_OUT_COMPLETE, onTransitionOutComplete);
		if (!isInterrupted && (--outIndex > -1)) 
		{
			pageOut();
			return;
		} 
		transitionState &= 1;
		isInterrupted = false;
		dispatchEvent(event.clone());
	}
	private function onTransitionInComplete(event:PageEvent):Void
	{
		event.target.removeEventListener(PageEvent.TRANSITION_IN_COMPLETE, onTransitionInComplete);
		if (!isInterrupted && (++inIndex < inPages.length))
		{			
			pageIn();
			return;
		}
		transitionState &= 2;
		isInterrupted = false;
		dispatchEvent(event.clone());
	}
	private function pageOut():Void
	{
		outPages[outIndex].addEventListener(PageEvent.TRANSITION_OUT_COMPLETE, onTransitionOutComplete);
		outPages[outIndex].transitionOut();
	}
	private function pageIn():Void
	{
		inPages[inIndex].addEventListener(PageEvent.TRANSITION_IN_COMPLETE, onTransitionInComplete);
		inPages[inIndex].transitionIn();
	}
	public function interrupt():Void
	{
		if (!isInterrupted && transitionState > 0) 
		{
			isInterrupted = true;
			var transitionDirection:String = "";
			if ((transitionState & 1) != 0) transitionDirection = "IN";
			if ((transitionState & 2) != 0) transitionDirection += "OUT";
			if (transitionDirection == "INOUT") transitionDirection = "CROSS";
		}
	}
	
}