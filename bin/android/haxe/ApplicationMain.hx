class ApplicationMain
{

	#if waxe
	static public var frame : wx.Frame;
	static public var autoShowFrame : Bool = true;
	#if nme
	static public var nmeStage : wx.NMEStage;
	#end
	#end
	
	public static function main()
	{
		#if nme
		nme.Lib.setPackage("shrek", "GameBox", "com.shrek.gamebox.GameBox", "1.0.0");
		
		#end
		
		#if waxe
		wx.App.boot(function()
		{
			
			frame = wx.Frame.create(null, null, "GameBox", null, { width: 0, height: 0 });
			
			#if nme
			var stage = wx.NMEStage.create(frame, null, null, { width: 0, height: 0 });
			#end
			
			com.shrek.gamebox.Main.main();
			
			if (autoShowFrame)
			{
				wx.App.setTopWindow(frame);
				frame.shown = true;
			}
		});
		#else
		
		nme.Lib.create(function()
			{ 
				if (0 == 0 && 0 == 0)
				{
					nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
					nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
				}
				
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
					var instance = Type.createInstance(com.shrek.gamebox.Main, []);
					#if nme
					if (Std.is (instance, nme.display.DisplayObject)) {
						nme.Lib.current.addChild(cast instance);
					}
					#end
				}
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
			(false ? nme.Lib.BORDERLESS : 0) |
			(true ? nme.Lib.VSYNC : 0) |
			(true ? nme.Lib.FULLSCREEN : 0) |
			(0 == 4 ? nme.Lib.HW_AA_HIRES : 0) |
			(0 == 2 ? nme.Lib.HW_AA : 0),
			"GameBox"
			
		);
		#end
		
	}
	
	
	#if neko
	public static function __init__ () {
		
		untyped $loader.path = $array ("@executable_path/", $loader.path);
		
	}
	#end
	
	
	public static function getAsset(inName:String):Dynamic
	{
		#if nme
		
		if (inName == "images/game1/bullet.png")
		{
			
			return nme.Assets.getBitmapData ("images/game1/bullet.png");
			
		}
		
		if (inName == "images/game1/plane.png")
		{
			
			return nme.Assets.getBitmapData ("images/game1/plane.png");
			
		}
		
		if (inName == "images/game2/iceman/iceman.png")
		{
			
			return nme.Assets.getBitmapData ("images/game2/iceman/iceman.png");
			
		}
		
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
		
		#end
		return null;
	}
	
	
}
