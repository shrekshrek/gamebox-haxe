package com.appframework.core;
import com.appframework.assets.PageAsset;
import com.appframework.events.AppEvent;
import nme.display.Sprite;

/**
 * ...
 * @author shrek
 */

class AppImpl 
{
	public function new():Void
	{
		
	}
	
	private static var _instance:AppImpl;
	
	public static function birth():AppImpl
	{
		if (_instance == null) _instance = new AppImpl();
		return _instance;
	}
	
	public static var instance(get_instance,null):AppImpl;
	private static function get_instance():AppImpl
	{
		return _instance;
	}
	public function goto(branch:String, flow:String = null):Void
	{
		AppHQ.instance.goto(branch, flow);
	}
	public function getAppTree():PageAsset
	{
		return AppModel.tree;
	}
	public function getSiteXML():Xml
	{
		return AppModel.xml;
	}
	public function getPage(branch:String):PageAsset
	{
		return BranchTools.getPage(branch);
	}
	public function getDepthContainer(name:String):Sprite
	{
		return AppView.getDepthContainer(name);
	}
	public function getValidBranch(branch:String):String
	{
		return BranchTools.getValidBranch(branch);
	}
	public function getCurrentBranch():String
	{
		return AppController.getCurrentBranch();
	}
	public function getDefaultFlow():String
	{
		return AppModel.defaultFlow;
	}
	public function setDefaultFlow(flow:String):Void
	{
		AppModel.defaultFlow = flow;
	}
	public function getWidth():Int
	{
		return AppMain.instance.__WIDTH;
	}
	public function getHeight():Int
	{
		return AppMain.instance.__HEIGHT;
	}
	
	// hijack Events
	public function beforeGoto(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.BEFORE_GOTO, target, onlyOnce);
	}
	public function afterGoto(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.AFTER_GOTO, target, onlyOnce);
	}
	
	public function beforeTransitionOut(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.BEFORE_TRANSITION_OUT, target, onlyOnce);
	}
	public function afterTransitionOut(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.AFTER_TRANSITION_OUT, target, onlyOnce);
	}
	
	public function beforePreload(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.BEFORE_PRELOAD, target, onlyOnce);
	}
	public function afterPreload(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.AFTER_PRELOAD, target, onlyOnce);
	}
	
	public function beforeTransitionIn(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.BEFORE_TRANSITION_IN, target, onlyOnce);
	}
	public function afterTransitionIn(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.AFTER_TRANSITION_IN, target, onlyOnce);
	}
	
	public function afterComplete(target:Dynamic, onlyOnce:Bool = false):Dynamic
	{
		return AppHQ.instance.addListener(AppEvent.AFTER_COMPLETE, target, onlyOnce);
	}
	
	// Remove hijack Events (just in case you need to manually)
	public function removeBeforeGoto(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.BEFORE_GOTO, target);
	}
	public function removeAfterGoto(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.AFTER_GOTO, target);
	}
	
	public function removeBeforeTransitionOut(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.BEFORE_TRANSITION_OUT, target);
	}
	public function removeAfterTransitionOut(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.AFTER_TRANSITION_OUT, target);
	}
	
	public function removeBeforePreload(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.BEFORE_PRELOAD, target);
	}
	public function removeAfterPreload(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.AFTER_PRELOAD, target);
	}
	
	public function removeBeforeTransitionIn(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.BEFORE_TRANSITION_IN, target);
	}
	public function removeAfterTransitionIn(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.AFTER_TRANSITION_IN, target);
	}
	
	public function removeAfterComplete(target:Dynamic):Void
	{
		AppHQ.instance.removeListener(AppEvent.AFTER_COMPLETE, target);
	}
	
}