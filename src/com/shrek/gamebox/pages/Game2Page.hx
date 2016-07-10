package com.shrek.gamebox.pages;
import com.appframework.api.App;
import com.appframework.templates.AbstractPage;
import com.eclecticdesignstudio.motion.Actuate;
import com.shrek.gamebox.model.Model;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Circle;
import nape.shape.Polygon;
import nape.space.Space;
import nape.util.Debug;
import nape.util.ShapeDebug;
import nme.events.AccelerometerEvent;
import nme.events.Event;
import nme.sensors.Accelerometer;

/**
 * ...
 * @author shrek
 */

class Game2Page extends AbstractPage
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
	
	//-----------------------------------------------------------------------------------
	private var accelerometer:Accelerometer;
	
	private var space:Space;
	private var debug:Debug;
	
	private function init():Void
	{
		if (Accelerometer.isSupported)
		{
			accelerometer = new Accelerometer();
			accelerometer.addEventListener(AccelerometerEvent.UPDATE, onUpdateHandler);
		}
		
		var _gravity = Vec2.weak(0, 300);
		space = new Space(_gravity);
		debug = new ShapeDebug(Model.instance.originWidth, Model.instance.originHeight, 0x000000);
		this.addChild(debug.display);
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		
		var _floor = new Body(BodyType.STATIC);
		for (i in 1...3)
		{
			var _polygon:Polygon = new Polygon(Polygon.box(Model.instance.originWidth, 1));
			_polygon.rotate(i*Math.PI/3+Math.PI/2);
			_polygon.material.elasticity = 0;
			_floor.shapes.add(_polygon);
		}
		_floor.position.setxy(Model.instance.originWidth / 2, Model.instance.originHeight-100);
		_floor.space = space;
		
		for (i in 0...6)
		{
			var _box = new Body(BodyType.DYNAMIC);
			var _circle:Circle = new Circle(10);
			_circle.material.elasticity = 1;
			_box.shapes.add(_circle);
			//_box.applyAngularImpulse(5,true);
			_box.position.setxy((i%2==0)?Model.instance.originWidth*0.2:Model.instance.originWidth*0.8, (50 + 40 * i));
			_box.space = space;
		}
		
		stage.addEventListener(Event.RESIZE, onResizeHandler);
		onResizeHandler(null);
	}
	
	private function clear():Void
	{
		if (Accelerometer.isSupported)
		{
			accelerometer.removeEventListener(AccelerometerEvent.UPDATE, onUpdateHandler);
		}
		
		this.removeEventListener(Event.ENTER_FRAME, onEnterFrameHandler);
		
		stage.removeEventListener(Event.RESIZE, onResizeHandler);
	}
	
	private function onResizeHandler(event:Event):Void
	{
		debug.display.scaleX = debug.display.scaleY = Model.instance.stageScale;
	}
	
	private function onEnterFrameHandler(event:Event):Void
	{
		space.step(1 / stage.frameRate);
		debug.clear();
		debug.draw(space);
		debug.flush();
		
	}
	
	private function onUpdateHandler(event:AccelerometerEvent):Void
	{
		trace("x:"+event.accelerationX+" y:"+event.accelerationY+" z:"+event.accelerationZ);
	}
	
}