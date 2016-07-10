package com.appframework.flow;

/**
 * ...
 * @author shrek
 */

class CrossFlow 
{

	private static var isInDone:Bool;
	private static var isOutDone:Bool;

	public static function start():Void
	{
		isInDone = isOutDone = false;
		FlowManager.preload();
	}		
	public static function afterPreloadDone():Void
	{
		FlowManager.transitionOut();
		FlowManager.transitionIn();
	}
	public static function afterTransitionInDone():Void
	{
		isInDone = true;
		checkBothDone();
	}		
	public static function afterTransitionOutDone():Void
	{
		isOutDone = true;
		checkBothDone();
	}
	private static function checkBothDone():Void
	{
		if (isInDone && isOutDone)
		{
			isInDone = isOutDone = false;
			FlowManager.complete();
		}
	}
	
}