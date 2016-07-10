package com.shrek.gamebox.pages;
import com.appframework.templates.AbstractPage;
import com.eclecticdesignstudio.motion.Actuate;
import com.shrek.gamebox.model.Model;
import com.shrek.gamebox.pages.game1.Bullet;
import com.shrek.gamebox.support.CompLib;
import nme.display.Sprite;
import nme.events.Event;
import nme.events.MouseEvent;
import nme.geom.Point;

/**
 * ...
 * @author shrek
 */

class Game1Page extends AbstractPage
{

	public function new() 
	{
		super();
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
	private var bullets:Sprite;
	private var plane:Sprite;
	private var planeHit:Sprite;
	
	private var flyV:Int = 0;
	private var bulletVMax:Int = 0;
	private var bulletVMin:Int = 0;
	private var bulletStep:Int = 4;
	
	private var isMouseDown:Bool = false;
	private var aimPos:Point;
	private var frame:Int = 0;
	
	private var messageBox:Sprite;
	
	private function init():Void
	{
		flyV = 10;
		bulletVMax = Std.int(flyV * 0.8);
		bulletVMin = Std.int(flyV * 0.2);
		aimPos = new Point(0,0);
		frame = 1;
		isMouseDown = false;
		
		plane = CompLib.getBmpToSprite("images/game1/plane.png");
		planeHit = CompLib.getCircleHit(10);
		plane.addChild(planeHit);
		plane.x = aimPos.x = Model.instance.originWidth / 2;
		aimPos.y = Model.instance.originHeight / 2;
		plane.y = Model.instance.originHeight;
		this.addChild(plane);
		
		bullets = new Sprite();
		this.addChild(bullets);
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		stage.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDownHandler);
		stage.addEventListener(MouseEvent.MOUSE_UP, onMouseUpHandler);
		
		stage.addEventListener(Event.RESIZE, onResizeHandler);
		onResizeHandler(null);
	}
	
	private function clear():Void
	{
		this.removeEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		stage.removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDownHandler);
		stage.removeEventListener(MouseEvent.MOUSE_UP, onMouseUpHandler);
		
		if(messageBox != null) messageBox.removeEventListener(MouseEvent.CLICK, onBoxClickHandler);
		
		stage.removeEventListener(Event.RESIZE, onResizeHandler);
	}
	
	private function onMouseDownHandler(event:MouseEvent):Void
	{
		isMouseDown = true;
	}
	
	private function onMouseUpHandler(event:MouseEvent):Void
	{
		isMouseDown = false;
	}
	
	private function onResizeHandler(event:Event):Void
	{
		this.scaleX = this.scaleY = Model.instance.stageScale;
	}
	
	private function onEnterFrameHandler(event:Event):Void
	{
		frame++;
		if (isMouseDown)
		{
			aimPos.x = this.mouseX;
			aimPos.y = this.mouseY;
		}
		
		var _r:Float = Math.atan2((aimPos.y - plane.y), (aimPos.x - plane.x));
		
		var _dx:Float = flyV * Math.cos(_r);
		if (Math.abs(aimPos.x - plane.x) < Math.abs(_dx))
		{
			plane.x = aimPos.x;
		}else
		{
			plane.x += _dx;
		}
		
		var _dy:Float = flyV * Math.sin(_r);
		if (Math.abs(aimPos.y - plane.y) < Math.abs(_dy))
		{
			plane.y = aimPos.y;
		}else
		{
			plane.y += _dy;
		}
		
		var _len:Int = bullets.numChildren; 
		for (i in 0..._len)
		{
			var _bullet:Bullet = cast(bullets.getChildAt(_len-1-i), Bullet);
			_bullet.x += _bullet.vx;
			_bullet.y += _bullet.vy;
			if (_bullet.hit.hitTestObject(planeHit)) gameOver();
			if (_bullet.x<0 || _bullet.x>Model.instance.originWidth || _bullet.y<0 || _bullet.y>Model.instance.originHeight) bullets.removeChild(_bullet);
		}
		
		if (frame % bulletStep == 0) addBullet();
	}
	
	private function addBullet():Void
	{
		var _bullet:Bullet = new Bullet();
		if (Math.random() < 0.5)
		{
			_bullet.x = Math.random() * Model.instance.originWidth;
			_bullet.y = (Math.random() < 0.5)? 0:Model.instance.originHeight;
		}else
		{
			_bullet.x = (Math.random() < 0.5)? 0:Model.instance.originWidth;
			_bullet.y = Math.random() * Model.instance.originHeight;
		}
		
		var _r:Float = Math.atan2((plane.y - _bullet.y), (plane.x - _bullet.x));
		var _d:Float = Math.random() * (bulletVMax - bulletVMin) + bulletVMin;
		_bullet.vx = Math.cos(_r)*_d;
		_bullet.vy = Math.sin(_r) * _d;
		bullets.addChild(_bullet);
	}
	
	private function gameRestart():Void
	{
		frame = 1;
		isMouseDown = false;
		plane.x = aimPos.x = Model.instance.originWidth / 2;
		aimPos.y = Model.instance.originHeight / 2;
		plane.y = Model.instance.originHeight;
		
		var _len:Int = bullets.numChildren; 
		for (i in 0..._len)
		{
			var _bullet:Bullet = cast(bullets.getChildAt(_len-1-i), Bullet);
			bullets.removeChild(_bullet);
		}
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		stage.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDownHandler);
		stage.addEventListener(MouseEvent.MOUSE_UP, onMouseUpHandler);
	}
	
	private function gameOver():Void
	{
		this.removeEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		stage.removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDownHandler);
		stage.removeEventListener(MouseEvent.MOUSE_UP, onMouseUpHandler);
		
		var _s:Float = Math.floor((frame / stage.frameRate) * 10) / 10;
		messageBox = CompLib.createTextBox("your score:\n" + _s + "s", 400, 200, 0xffffff, 36);
		messageBox.x = (Model.instance.originWidth - messageBox.width) / 2;
		messageBox.y = (Model.instance.originHeight - messageBox.height) / 2;
		messageBox.alpha = 0;
		this.addChild(messageBox);
		messageBox.addEventListener(MouseEvent.CLICK, onBoxClickHandler);
		Actuate.tween(messageBox, 0.3, { alpha:1 } );
	}
	
	private function onBoxClickHandler(event:MouseEvent):Void
	{
		messageBox.removeEventListener(MouseEvent.CLICK, onBoxClickHandler);
		Actuate.tween(messageBox, 0.3, { alpha:0 } ).onComplete(function():Void {
			this.removeChild(messageBox);
			messageBox = null;
		});
		gameRestart();
	}
	
	
	
}