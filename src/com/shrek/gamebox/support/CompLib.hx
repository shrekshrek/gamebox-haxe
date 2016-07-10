package com.shrek.gamebox.support;
import nme.Assets;
import nme.display.Bitmap;
import nme.display.Sprite;
import nme.text.TextField;
import nme.text.TextFieldAutoSize;
import nme.text.TextFormat;
import nme.text.TextFormatAlign;

/**
 * ...
 * @author shrek
 */

class CompLib 
{
	public static function createButton(inLabel:String, inW:Int, inH:Int, inColor:Int, inSize:Int = 16):Sprite
	{
		var _sp:Sprite = new Sprite();
		_sp.graphics.beginFill(0xffffff, 0);
		_sp.graphics.drawRect(0, 0, inW, inH);
		_sp.graphics.endFill();
		
		var _txt:TextField = createTextField(inColor, inSize);
		_txt.autoSize = TextFieldAutoSize.LEFT;
		_txt.text = inLabel.toUpperCase();
		//_txt.x = inH - _txt.height;
		_txt.x = _txt.y = (inH - _txt.height) / 2;
		_sp.addChild(_txt);
		return _sp;
	}
	
	public static function createTextBox(inLabel:String, inW:Int, inH:Int, inColor:Int, inSize:Int = 16):Sprite 
	{
		var _sp:Sprite = new Sprite();
		_sp.graphics.lineStyle(1, 0xffffff, 0.5);
		_sp.graphics.beginFill(0xffffff, 0.2);
		_sp.graphics.drawRect(0, 0, inW, inH);
		_sp.graphics.endFill();
		
		var _txt:TextField = createTextField(inColor, inSize);
		_txt.width = inW;
		_txt.text = inLabel.toUpperCase();
		_txt.wordWrap = true;
		_txt.multiline = true;
		_txt.x = (inW - _txt.width) / 2;
		_txt.y = (inH - _txt.height) / 2;
		_sp.addChild(_txt);
		return _sp;
	}
	
	public static function createTextField(inColor:Int, inSize:Int = 16):TextField 
	{
		var _font = ApplicationMain.getAsset("fonts/nokiafc22.ttf");        
		var _txt:TextField = new TextField();
		var _tf:TextFormat = new TextFormat();
		_tf.font = _font.fontName;
		_tf.color = inColor;
		_tf.size = inSize;
		_tf.align = TextFormatAlign.CENTER;
		_txt.defaultTextFormat = _tf;
		_txt.embedFonts = true;
		_txt.selectable = false;
		return _txt;
	}
	
	public static function getBmpToSprite(inPath:String):Sprite
	{
		var _sp:Sprite = new Sprite();
		var _bmp:Bitmap = new Bitmap(Assets.getBitmapData(inPath));
		_bmp.x = -_bmp.width / 2;
		_bmp.y = -_bmp.height / 2;
		_sp.addChild(_bmp);
		return _sp;
	}
	
	public static function getCircleHit(inR:Int):Sprite
	{
		var _sp:Sprite = new Sprite();
		_sp.graphics.beginFill(0xffffff, 0);
		_sp.graphics.drawCircle( -inR/2, -inR/2, inR);
		_sp.graphics.endFill();
		return _sp;
	}
	
	
}