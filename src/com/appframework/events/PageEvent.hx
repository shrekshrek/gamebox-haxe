package com.appframework.events;
import nme.events.Event;

/**
 * ...
 * @author shrek
 */

class PageEvent extends Event
{
	public static var TRANSITION_OUT:String = "transitionOut";
	public static var TRANSITION_IN:String = "transitionIn";
	public static var TRANSITION_OUT_COMPLETE:String = "transitionOutComplete";
	public static var TRANSITION_IN_COMPLETE:String = "transitionInComplete";
	
	public function new(type : String, bubbles : Bool = false, cancelable : Bool = false) 
	{
		super(type, bubbles, cancelable);
	}
	public override function clone():Event
	{
		return new PageEvent(type, bubbles, cancelable);
	}
}