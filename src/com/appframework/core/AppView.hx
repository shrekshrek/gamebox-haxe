package com.appframework.core;
import com.appframework.api.App;
import com.appframework.assets.PageAsset;
import nme.display.Sprite;
import nme.events.Event;

/**
 * ...
 * @author shrek
 */

class AppView extends Sprite
{
	private var BOTTOM:Sprite;
	private var MIDDLE:Sprite;
	private var TOP:Sprite;
	
	private static var depths:Hash<Sprite>;
	
	private static var _instance:AppView;
	
	public function new() 
	{
		super();
		BOTTOM = new Sprite();
		MIDDLE = new Sprite();
		TOP = new Sprite();
		
		depths = new Hash<Sprite>();
		depths.set(App.BOTTOM, BOTTOM);
		depths.set(App.MIDDLE, MIDDLE);
		depths.set(App.TOP,TOP);
		
		BOTTOM.name = "BOTTOM";
		MIDDLE.name = "MIDDLE";
		TOP.name = "TOP";
		
		name = "[AppView]";
		addEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
		mouseEnabled = BOTTOM.mouseEnabled = MIDDLE.mouseEnabled = TOP.mouseEnabled = false;
		
		_instance = this;
	}
	
	public static function instance():AppView
	{
		return _instance;
	}
	
	private function onAddedToStage(event:Event):Void
	{
		removeEventListener(Event.ADDED_TO_STAGE, onAddedToStage);
		addChild(BOTTOM);
		addChild(MIDDLE);
		addChild(TOP);
	}
	public static function getDepthContainer(name:String):Sprite
	{
		return depths.get(name);
	}
	public function addPage(page:PageAsset):Void
	{
		var _depth:Sprite = depths.get(page.depth);
		if (_depth == null)
		{
			MIDDLE.addChild(page.page);
		}else
		{
			_depth.addChild(page.page);
		}
	}
}