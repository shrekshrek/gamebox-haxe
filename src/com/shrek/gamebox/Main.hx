package com.shrek.gamebox;

import com.appframework.core.AppMain;
import nme.Lib;
//import org.flashdevelop.utils.FlashConnect;

import com.shrek.gamebox.pages.IndexPage;
import com.shrek.gamebox.pages.NavPage;
import com.shrek.gamebox.pages.HomePage;
import com.shrek.gamebox.pages.Game1Page;
import com.shrek.gamebox.pages.Game2Page;
import com.shrek.gamebox.pages.ConfigPage;
import com.shrek.gamebox.pages.AboutPage;

/**
 * ...
 * @author shrek
 */

class Main extends AppMain 
{
	
	public function new() 
	{
		appXML = "xml/app.xml";
		super();
		
	}
	
	static public function main() 
	{
		//FlashConnect.redirect();
		
		var stage = Lib.current.stage;
		stage.scaleMode = nme.display.StageScaleMode.NO_SCALE;
		stage.align = nme.display.StageAlign.TOP_LEFT;
		
		
		Lib.current.addChild(new Main());
	}
	
	//--------------------------------------------------------------------------------------------------------------------
	
	
	
}
