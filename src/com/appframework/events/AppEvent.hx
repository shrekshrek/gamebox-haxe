package com.appframework.events;
import nme.events.Event;

/**
 * ...
 * @author shrek
 */

class AppEvent extends Event
{
	public static var GOTO:String = "goto";
	public static var BEFORE_GOTO:String = "beforeGoto";
	public static var AFTER_GOTO:String = "afterGoto";
	public static var BEFORE_TRANSITION_OUT:String = "beforeTransitionOut";
	public static var AFTER_TRANSITION_OUT:String = "afterTransitionOut";
	public static var BEFORE_PRELOAD:String = "beforePreload";
	public static var AFTER_PRELOAD:String = "afterPreload";
	public static var BEFORE_TRANSITION_IN:String = "beforeTransitionIn";
	public static var AFTER_TRANSITION_IN:String = "afterTransitionIn";
	public static var AFTER_COMPLETE:String = "afterComplete";
	
	public var validBranch:String;
	public var fullBranch:String;
	public var src:String;
	public var flow:String;
	
	public function new(type:String, bubbles:Bool, cancelable:Bool, validBranch:String, fullBranch:String, src:String, flow:String = null)
	{
		super(type, bubbles, cancelable);
		this.validBranch = validBranch;
		this.fullBranch = fullBranch;
		this.src = src;
		this.flow = flow;
	}
	public override function clone():Event
	{
		return new AppEvent(type, bubbles, cancelable, validBranch, fullBranch, src, flow);
	}
}