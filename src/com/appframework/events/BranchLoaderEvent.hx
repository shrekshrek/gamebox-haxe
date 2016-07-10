package com.appframework.events;
import com.appframework.assets.PageAsset;
import nme.events.Event;

/**
 * ...
 * @author shrek
 */

class BranchLoaderEvent extends Event
{
	public static var LOAD_PAGE:String = "loadPage";
	public static var START:String = "start";
	public static var COMPLETE:String = "complete";
	
	public var asset:PageAsset;
	
	public function new(type:String, bubbles:Bool = false, cancelable:Bool = false, asset:PageAsset = null)
	{
		super(type, bubbles, cancelable);
		this.asset = asset;
	}
	public override function clone():Event
	{
		return new BranchLoaderEvent(type, bubbles, cancelable);
	}
}