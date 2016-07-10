package com.appframework.core;
import com.appframework.assets.PageAsset;
import com.appframework.events.AppEvent;
import com.appframework.flow.FlowManager;
import nme.events.Event;
import nme.events.EventDispatcher;

/**
 * ...
 * @author shrek
 */

class AppHQ extends EventDispatcher
{
	public static var TRANSITION_OUT:String = "transitionOut";
	public static var TRANSITION_IN:String = "transitionIn";
	public static var PRELOAD:String = "preload";
	public static var COMPLETE:String = "complete";
	
	private var listeners:Hash<Hash<AppHQListener>>;
	private var uniqueID:Int = 0;		
	private var gotoEventObj:Hash<String>;
	
	private static var _instance:AppHQ;
	
	public function new() 
	{
		super();
		listeners = new Hash<Hash<AppHQListener>>();
		listeners.set("beforeGoto", new Hash<AppHQListener>());
		listeners.set("afterGoto", new Hash<AppHQListener>());
		listeners.set("beforeTransitionOut", new Hash<AppHQListener>());
		listeners.set("afterTransitionOut", new Hash<AppHQListener>());
		listeners.set("beforePreload", new Hash<AppHQListener>());
		listeners.set("afterPreload", new Hash<AppHQListener>());
		listeners.set("beforeTransitionIn", new Hash<AppHQListener>());
		listeners.set("afterTransitionIn", new Hash<AppHQListener>());
		listeners.set("afterComplete",new Hash<AppHQListener>());
	}
	
	public static function birth():Void
	{
		if (_instance == null) _instance = new AppHQ();
	}
	
	public static var instance(get_instance,null):AppHQ;
	private static function get_instance():AppHQ
	{
		return _instance;
	}
	
	public function addListener(eventName:String, target:Dynamic, onlyOnce:Bool):Dynamic
	{
		if (listeners.get(eventName) != null) 
		{
			var listener:AppHQListener = generateListener(eventName, target);
			listener.onlyOnce = onlyOnce;
			addEventListener(eventName, listener.target);
		}
		return null;
	}
	public function removeListener(eventName:String, target:Dynamic):Void
	{
		if (listeners.get(eventName) != null) 
		{
			for (id in listeners.get(eventName).keys())
			{
				if (listeners.get(eventName).get(id).target == target) 
				{
					removeListenerByID(eventName, id);
					break;
				}
			}
		}
	}
	
	public function goto(branch:String, flow:String = null):Void
	{
		if (branch == null) branch = "index";
		if (branch.substr(0, AppModel.indexID.length) != AppModel.indexID) branch = AppModel.indexID + "/" + branch;
		gotoEventObj = new Hash<String>();
		gotoEventObj.set("validBranch", BranchTools.getValidBranch(branch)); 
		gotoEventObj.set("fullBranch", BranchTools.getFullBranch(branch)); 
		var page:PageAsset = BranchTools.getPage(gotoEventObj.get("validBranch")); 
		gotoEventObj.set("src", page.src);
		gotoEventObj.set("flow", flow); 
		beforeGoto();
	}
	
	// GOTO BEFORE / AFTER
	public function beforeGoto():Void
	{
		onEvent(AppEvent.BEFORE_GOTO);
	}
	public function beforeGotoDone():Void
	{
		gotoEventObj.set("type",AppEvent.GOTO);
		dispatchAppEvent();
	}
	public function afterGoto():Void
	{
		onEvent(AppEvent.AFTER_GOTO);
	}
	public function afterGotoDone():Void
	{
		FlowManager.afterGoto();
	}
	
	// TRANSITION OUT BEFORE / AFTER
	public function beforeTransitionOut():Void
	{
		onEvent(AppEvent.BEFORE_TRANSITION_OUT);
	}
	public function beforeTransitionOutDone():Void
	{
		dispatchEvent(new Event(TRANSITION_OUT));
	}
	public function afterTransitionOut():Void
	{
		onEvent(AppEvent.AFTER_TRANSITION_OUT);
	}
	public function afterTransitionOutDone():Void
	{
		FlowManager.afterTransitionOutDone();
	}
	
	// PRELOAD BEFORE / AFTER
	public function beforePreload():Void
	{
		onEvent(AppEvent.BEFORE_PRELOAD);
	}
	public function beforePreloadDone():Void
	{
		dispatchEvent(new Event(PRELOAD));
	}
	public function afterPreload():Void
	{
		onEvent(AppEvent.AFTER_PRELOAD);
	}
	public function afterPreloadDone():Void
	{
		FlowManager.afterPreloadDone();
	}
	
	// TRANSITION IN BEFORE / AFTER
	public function beforeTransitionIn():Void
	{
		onEvent(AppEvent.BEFORE_TRANSITION_IN);
	}
	public function beforeTransitionInDone():Void
	{
		dispatchEvent(new Event(TRANSITION_IN));
	}
	public function afterTransitionIn():Void
	{
		onEvent(AppEvent.AFTER_TRANSITION_IN);
	}
	public function afterTransitionInDone():Void
	{
		FlowManager.afterTransitionInDone();
	}
	
	// AFTER COMPLETE
	public function afterComplete():Void
	{
		dispatchEvent(new Event(COMPLETE));
		onEvent(AppEvent.AFTER_COMPLETE);
	}
	public function afterCompleteDone():Void
	{
		// we're done
	}
	
	private function onEvent(eventName:String):Void
	{
		var eventHasListeners:Bool = false;
		for (id in listeners.get(eventName))
		{
			if (id != null) 
			{
				eventHasListeners = true;
				var listener:AppHQListener = id;
				if (listener.onlyOnce) listener.dispatched = true;
			}
		}
		gotoEventObj.set("type", eventName); 
		if (eventHasListeners) dispatchAppEvent();
		Reflect.field(this,eventName + "Done")();
		removeOnlyOnceListeners(eventName);
	}
	
	private function generateListener(eventName:String, target:Dynamic):AppHQListener
	{
		// prevent duplicate listeners
		for (id in listeners.get(eventName))
		{
			if (id.target == target) 
			{
				removeEventListener(eventName, target);
				return id;
			}
		}
		// new listener
		var listener:AppHQListener = new AppHQListener();
		listener.event = eventName;
		listener.target = target;
		listeners.get(eventName).set(Std.string(++uniqueID),listener);
		return listener;
	}
	// REMOVES EVENT LISTENERS BY THEIR UNIQUE ID
	private function removeListenerByID(eventName:String, id:String):Void
	{
		removeEventListener(eventName, listeners.get(eventName).get(id).target);
		listeners.get(eventName).remove(id);
	}
	// REMOVES EVENT LISTENERS THAT ONLY LISTEN ONCE
	private function removeOnlyOnceListeners(eventName:String):Void
	{
		for (id in listeners.get(eventName).keys())
		{
			var listener:AppHQListener = listeners.get(eventName).get(id);
			if (listener.onlyOnce && listener.dispatched) removeListenerByID(eventName, id);
		}
	}
	private function dispatchAppEvent():Void
	{
		dispatchEvent(new AppEvent(gotoEventObj.get("type"), false, false, gotoEventObj.get("validBranch"), gotoEventObj.get("fullBranch"), gotoEventObj.get("src"), gotoEventObj.get("flow")));
	}
	
}