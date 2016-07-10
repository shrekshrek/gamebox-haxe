package com.appframework.templates;
import com.appframework.assets.PageAsset;
import com.appframework.events.PageEvent;
import nme.display.Sprite;

/**
 * ...
 * @author shrek
 */

class AbstractPage extends Sprite 
{
	public var page(get_page,set_page):PageAsset;
	private function get_page():PageAsset
	{
		return page;
	}
	private function set_page(value:PageAsset):PageAsset
	{
		if (page == null) page = value;
		return page;
	}
	public function transitionIn():Void
	{
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_IN));
	}
	public function transitionOut():Void
	{
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_OUT));
	}
	public function transitionInComplete():Void
	{
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_IN_COMPLETE));
	}
	public function transitionOutComplete():Void
	{
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_OUT_COMPLETE));
	}
	
}