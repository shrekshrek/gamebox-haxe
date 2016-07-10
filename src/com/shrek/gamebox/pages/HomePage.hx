package com.shrek.gamebox.pages;
import com.appframework.api.App;
import com.appframework.templates.AbstractPage;
import com.eclecticdesignstudio.motion.Actuate;
import com.eclecticdesignstudio.motion.easing.Quart;
import com.shrek.gamebox.model.Model;
import com.shrek.gamebox.support.CompLib;
import nme.Assets;
import nme.display.Bitmap;
import nme.display.DisplayObject;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.MouseEvent;
import nme.events.TouchEvent;
import nme.text.TextField;

/**
 * ...
 * @author shrek
 */

class HomePage extends AbstractPage
{

	public function new() 
	{
		super();
		
		this.alpha = 0;
	}
	
	override public function transitionIn():Void 
	{
		init();
		super.transitionIn();
		Actuate.tween(this, 0.3, { alpha:1 } ).onComplete(transitionInComplete);
	}
	override public function transitionOut():Void 
	{
		clear();
		super.transitionOut();
		Actuate.tween(this, 0.3, { alpha:0 } ).onComplete(transitionOutComplete);
	}
	
	//-----------------------------------------------------------------------------------
	private var menuLabels:Array<String>;
	private var menuW:Int = 400;
	private var menuH:Int = 64;
	private var menuFontSize:Int = 24;
	
	private var bg:Bitmap;
	
	private function init():Void
	{
		initBg();
		initMenu();
		
		stage.addEventListener(Event.RESIZE, onResizeHandler);
		onResizeHandler(null);
	}
	
	private function clear():Void
	{
		clearBg();
		clearMenu();
		
		stage.removeEventListener(Event.RESIZE, onResizeHandler);
	}
	
	private function onResizeHandler(event:Event):Void
	{
		this.scaleX = this.scaleY = Model.instance.stageScale;
	}
	
	private function initBg():Void
	{
		bg = new Bitmap(Assets.getBitmapData("images/nav/bg.jpg"));
		this.addChild(bg);
	}
	
	private function clearBg():Void
	{
		
	}
	
	private function initMenu():Void
	{
		menuLabels = ["are you man?", "are you man too?", "Salamander", "Contra", "Tower Defense", "config", "about"];
		
		var _len:Int = menuLabels.length;
		for (i in 0..._len)
		{
			var _btn:Sprite;
			if (i >= 2) _btn = CompLib.createButton(menuLabels[i], menuW, menuH, 0xaaaaaa, menuFontSize);
			else _btn = CompLib.createButton(menuLabels[i], menuW, menuH, 0xffffff, menuFontSize);
			_btn.name = menuLabels[i];
			_btn.x = stage.stageWidth;
			_btn.y = menuH/2 + menuH * i;
			_btn.mouseChildren = false;
			_btn.addEventListener(MouseEvent.CLICK, onMenuClickHandler);
			
			this.addChild(_btn);
			Actuate.tween(_btn, 0.3, {x:0}).ease(Quart.easeOut).delay(i*0.05);
		}
	}
	
	private function clearMenu():Void
	{
		for (i in 0...menuLabels.length)
		{
			var _btn:DisplayObject = this.getChildByName(menuLabels[i]);
			_btn.removeEventListener(MouseEvent.CLICK, onMenuClickHandler);
		}
	}
	
	private function onMenuClickHandler(event:Event):Void
	{
		var _btn:Sprite = event.target;
		switch(_btn.name)
		{
			case menuLabels[0]:
				App.api.goto(Pages.GAME1);
			case menuLabels[1]:
				App.api.goto(Pages.GAME2);
		}
	}
	
}