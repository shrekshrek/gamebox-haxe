package com.shrek.gamebox.pages;
import com.appframework.api.App;
import com.appframework.templates.AbstractPage;
import com.shrek.gamebox.model.Model;
import nme.events.Event;
import nme.events.MouseEvent;

/**
 * ...
 * @author shrek
 */

class IndexPage extends AbstractPage
{

	public function new() 
	{
		super();
	}
	
	override public function transitionIn():Void 
	{
		init();
		super.transitionIn();
		transitionInComplete();
	}
	override public function transitionOut():Void 
	{
		clear();
		super.transitionOut();
		transitionOutComplete();
	}
	
	//------------------------------------------------------------------------------------
	private function init():Void
	{
		stage.addEventListener(Event.RESIZE, onResizeHandler);
		onResizeHandler(null);
	}
	
	private function clear():Void
	{
		stage.removeEventListener(Event.RESIZE, onResizeHandler);
	}
	
	private function onResizeHandler(event:Event):Void
	{
		Model.instance.stageScale = Math.max(stage.stageWidth / Model.instance.originWidth, stage.stageHeight / Model.instance.originHeight); 
	}
	
	
}