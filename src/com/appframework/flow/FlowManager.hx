package com.appframework.flow;
import com.appframework.api.App;
import com.appframework.core.AppHQ;
import com.appframework.core.AppModel;

/**
 * ...
 * @author shrek
 */

class FlowManager 
{
	private static var flow:Dynamic;
	
	public static function init(type:String):Void
	{
		if (type == App.NORMAL)
		{
			flow = NormalFlow;
		}
		else if (type == App.REVERSE)
		{
			flow = ReverseFlow;
		}
		else if (type == App.CROSS)
		{
			flow = CrossFlow;
		}
		else
		{
			init((AppModel.defaultFlow != null)?AppModel.defaultFlow:App.NORMAL );
		}
	}
	
	// from SiteController
	public static function start():Void
	{
		AppHQ.instance.afterGoto();
	}
	public static function transitionOutComplete():Void
	{
		AppHQ.instance.afterTransitionOut();
	}
	public static function preloadComplete():Void
	{
		AppHQ.instance.afterPreload();
	}
	public static function transitionInComplete():Void
	{
		AppHQ.instance.afterTransitionIn();
	}
	
	// from AppHQ
	public static function afterGoto():Void
	{
		flow.start();
	}
	public static function afterTransitionOutDone():Void
	{
		flow.afterTransitionOutDone();
	}
	public static function afterPreloadDone():Void
	{
		flow.afterPreloadDone();
	}
	public static function afterTransitionInDone():Void
	{
		flow.afterTransitionInDone();
	}
	
	// from flow
	public static function transitionOut():Void
	{
		AppHQ.instance.beforeTransitionOut();
	}
	public static function preload():Void
	{
		AppHQ.instance.beforePreload();
	}
	public static function transitionIn():Void
	{
		AppHQ.instance.beforeTransitionIn();
	}
	public static function complete():Void
	{
		AppHQ.instance.afterComplete();
	}
	
}