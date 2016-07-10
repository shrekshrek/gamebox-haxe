package com.shrek.gamebox.pages;
import com.eclecticdesignstudio.motion.Actuate;
import com.eclecticdesignstudio.motion.easing.Quart;
import com.shrek.gamebox.model.Model;
import com.shrek.gamebox.support.CompLib;
import nme.display.Sprite;
import com.appframework.api.App;
import com.appframework.templates.AbstractPage;
import nme.events.Event;
import nme.events.MouseEvent;
import nme.events.TouchEvent;

/**
 * ...
 * @author shrek
 */

class NavPage extends AbstractPage
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
	
	//------------------------------------------------------------------------------------
	private var backBtn:Sprite;
	private var menuW:Int = 400;
	private var menuH:Int = 64;
	private var menuFontSize:Int = 24;
	
	private function init():Void
	{
		backBtn = CompLib.createButton("back", menuW, menuH, 0xffffff, menuFontSize);
		backBtn.addEventListener(MouseEvent.CLICK, onBackClickHandler);
		backBtn.y = -menuH;
		this.addChild(backBtn);
		Actuate.tween (backBtn, 0.3, { y:0 } ).ease (Quart.easeOut);
		
		stage.addEventListener(Event.RESIZE, onResizeHandler);
		onResizeHandler(null);
	}
	
	private function clear():Void
	{
		backBtn.removeEventListener(MouseEvent.CLICK, onBackClickHandler);
		Actuate.tween (backBtn, 0.3, { y: -menuH } ).ease (Quart.easeOut);
		
		stage.removeEventListener(Event.RESIZE, onResizeHandler);
	}
	
	private function onResizeHandler(event:Event):Void
	{
		this.scaleX = this.scaleY = Model.instance.stageScale;
	}
	
	private function onBackClickHandler(event:Event):Void
	{
		App.api.goto(Pages.HOME);
	}
	
	
	
}