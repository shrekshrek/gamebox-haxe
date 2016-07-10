#if nme

import com.shrek.gamebox.Main;
import nme.Assets;
import nme.events.Event;


class ApplicationMain {
	
	static var mPreloader:NMEPreloader;

	public static function main () {
		
		var call_real = true;
		
		
		var loaded:Int = nme.Lib.current.loaderInfo.bytesLoaded;
		var total:Int = nme.Lib.current.loaderInfo.bytesTotal;
		
		nme.Lib.current.stage.align = nme.display.StageAlign.TOP_LEFT;
		nme.Lib.current.stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		
		if (loaded < total || true) /* Always wait for event */ {
			
			call_real = false;
			mPreloader = new NMEPreloader();
			nme.Lib.current.addChild(mPreloader);
			mPreloader.onInit();
			mPreloader.onUpdate(loaded,total);
			nme.Lib.current.addEventListener (nme.events.Event.ENTER_FRAME, onEnter);
			
		}
		
		
		
		#if web
		haxe.Log.trace = flashTrace; // null
		#end
		

		if (call_real)
			begin ();
	}

	#if web
	private static function flashTrace( v : Dynamic, ?pos : haxe.PosInfos ) {
		var className = pos.className.substr(pos.className.lastIndexOf('.') + 1);
		var message = className+"::"+pos.methodName+":"+pos.lineNumber+": " + v;

        if (flash.external.ExternalInterface.available)
			flash.external.ExternalInterface.call("console.log", message);
		else untyped flash.Boot.__trace(v, pos);
    }
	#end
	
	private static function begin () {
		
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
			if (Std.is (instance, nme.display.DisplayObject)) {
				nme.Lib.current.addChild(cast instance);
			}	
		}
		
	}

	static function onEnter (_) {
		
		var loaded = nme.Lib.current.loaderInfo.bytesLoaded;
		var total = nme.Lib.current.loaderInfo.bytesTotal;
		mPreloader.onUpdate(loaded,total);
		
		if (loaded >= total) {
			
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME, onEnter);
			mPreloader.addEventListener (Event.COMPLETE, preloader_onComplete);
			mPreloader.onLoaded();
			
		}
		
	}

	public static function getAsset (inName:String):Dynamic {
		
		
		if (inName=="images/game1/bullet.png")
			 
            return Assets.getBitmapData ("images/game1/bullet.png");
         
		
		if (inName=="images/game1/plane.png")
			 
            return Assets.getBitmapData ("images/game1/plane.png");
         
		
		if (inName=="images/nav/bg.jpg")
			 
            return Assets.getBitmapData ("images/nav/bg.jpg");
         
		
		if (inName=="xml/app.xml")
			 
			 return Assets.getText ("xml/app.xml");
         
		
		if (inName=="fonts/nokiafc22.ttf")
			 
			 return Assets.getFont ("fonts/nokiafc22.ttf");
		 
		
		if (inName=="nokia")
			 
			 return Assets.getFont ("nokia");
		 
		
		
		return null;
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		mPreloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		
		nme.Lib.current.removeChild(mPreloader);
		mPreloader = null;
		
		begin ();
		
	}
	
}

class NME_images_game1_bullet_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_images_game1_plane_png extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_images_nav_bg_jpg extends nme.display.BitmapData { public function new () { super (0, 0); } }
class NME_xml_app_xml extends nme.utils.ByteArray { }
class NME_fonts_nokiafc22_ttf extends nme.text.Font { }
class NME_assets_fonts_nokiafc22_ttf extends nme.text.Font { }


#else

import com.shrek.gamebox.Main;

class ApplicationMain {
	
	public static function main () {
		
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
			if (Std.is (instance, flash.display.DisplayObject)) {
				flash.Lib.current.addChild(cast instance);
			}
		}
		
	}

}

#end
