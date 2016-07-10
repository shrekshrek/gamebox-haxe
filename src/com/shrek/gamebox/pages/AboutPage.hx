package com.shrek.gamebox.pages;
import com.appframework.api.App;
import com.appframework.templates.AbstractPage;
import nme.events.MouseEvent;

/**
 * ...
 * @author shrek
 */

class AboutPage extends AbstractPage
{

	public function new() 
	{
		super();
	}
	
	override public function transitionIn():Void 
	{
		super.transitionIn();
		transitionInComplete();
	}
	override public function transitionOut():Void 
	{
		super.transitionOut();
		transitionOutComplete();
	}
	
	//------------------------------------------------------------------------------------
}