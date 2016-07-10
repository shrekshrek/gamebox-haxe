package com.appframework.core;
import nme.events.Event;
import nme.events.EventDispatcher;

/**
 * ...
 * @author shrek
 */

class AppHQListener extends EventDispatcher
{
	public var event:String;
	public var target:Dynamic;
	public var onlyOnce:Bool;
	public var completed:Bool;
	public var dispatched:Bool;
	
	public function new() 
	{
		super();
	}
	
	public function completeCallback(destroy:Bool = false):Void
	{
		completed = true;
		if (destroy) onlyOnce = true;
		dispatchEvent(new Event(Event.COMPLETE));
	}
	
	
}