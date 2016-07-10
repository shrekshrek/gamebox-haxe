package com.appframework.flow;

/**
 * ...
 * @author shrek
 */

class NormalFlow 
{
	public static function start():Void
	{
		FlowManager.transitionOut();
	}			
	public static function afterTransitionOutDone():Void
	{
		FlowManager.preload();
	}		
	public static function afterPreloadDone():Void
	{
		FlowManager.transitionIn();
	}		
	public static function afterTransitionInDone():Void
	{
		FlowManager.complete();
	}
	
}