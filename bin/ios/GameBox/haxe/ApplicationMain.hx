class ApplicationMain
{
	
	public static function main()
	{
		nme.Lib.setPackage("shrek", "GameBox", "com.shrek.gamebox.GameBox", "1.0.0");
		
		
		nme.display.Stage.shouldRotateInterface = function(orientation:Int):Bool
		{
			
			if (orientation == nme.display.Stage.OrientationPortrait || orientation == nme.display.Stage.OrientationPortraitUpsideDown)
			{
				return true;
			}
			return false;
			
		}
		
		nme.Lib.create(function()
			{
				if (0 == 0 && 0 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
				//nme.Lib.current.stage.addEventListener (nme.events.Event.RESIZE, initialize);
				initialize ();
			},
			0, 0,
			30,
			0,
			(true ? nme.Lib.HARDWARE : 0) |
			(false ? nme.Lib.ALLOW_SHADERS : 0) |
			(false ? nme.Lib.REQUIRE_SHADERS : 0) |
			(false ? nme.Lib.DEPTH_BUFFER : 0) |
			(false ? nme.Lib.STENCIL_BUFFER : 0) |
			(true ? nme.Lib.RESIZABLE : 0) |
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"GameBox"
		);
		
	}
	
	
	private static function initialize ():Void
	{
		//nme.Lib.current.stage.removeEventListener (nme.events.Event.RESIZE, initialize);
		
		var hasMain = false;
				
		for (methodName in Type.getClassFields(com.shrek.gamebox.Main))
		{
			if (methodName == "main")
			{
				hasMain = true;
				break;
			}
		}
		
		if (hasMain)
		{
			Reflect.callMethod (com.shrek.gamebox.Main, Reflect.field (com.shrek.gamebox.Main, "main"), []);
		}
		else
		{
			nme.Lib.current.addChild(cast (Type.createInstance(com.shrek.gamebox.Main, []), nme.display.DisplayObject));	
		}
	}
	
	
	public static function getAsset(inName:String):Dynamic
	{
		
		if (inName == "images/nav/bg.jpg")
		{
			
			return nme.Assets.getBitmapData ("images/nav/bg.jpg");
			
		}
		
		if (inName == "xml/app.xml")
		{
			
			return nme.Assets.getText ("xml/app.xml");
			
		}
		
		if (inName == "fonts/nokiafc22.ttf")
		{
			
			return nme.Assets.getFont ("fonts/nokiafc22.ttf");
			
		}
		
		if (inName == "nokia")
		{
			
			return nme.Assets.getFont ("nokia");
			
		}
		
		return null;
	}
	
}
