package com.shrek.gamebox.pages.game1;
import com.shrek.gamebox.support.CompLib;
import nme.Assets;
import nme.display.Bitmap;
import nme.display.Sprite;

/**
 * ...
 * @author shrek
 */

class Bullet extends Sprite
{

	public function new() 
	{
		super();
		var _sp:Sprite = CompLib.getBmpToSprite("images/game1/bullet.png");
		this.addChild(_sp);
		
		hit = CompLib.getCircleHit(10);
		this.addChild(hit);
	}
	
	public var vx:Float = 0;
	public var vy:Float = 0;
	public var hit:Sprite;
}