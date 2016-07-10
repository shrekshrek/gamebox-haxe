package com.appframework.flow;

/**
 * ...
 * @author shrek
 */

class ReverseFlow 
{
	public static function start():Void
	{
		FlowManager.preload();
	}		
	public static function afterPreloadDone():Void
	{
		FlowManager.transitionIn();
	}
	public static function afterTransitionInDone():Void
	{
		FlowManager.transitionOut();
	}		
	public static function afterTransitionOutDone():Void
	{
		FlowManager.complete();
	}
}