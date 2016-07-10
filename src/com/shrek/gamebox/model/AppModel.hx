package com.shrek.gamebox.model;

/**
 * ...
 * @author shrek
 */

class AppModel 
{
	private static var _instance:AppModel;
	
	public static var instance(get_instance,null):AppModel;
	private static function get_instance():AppModel
	{
		if (_instance == null) _instance = new AppModel();
		return _instance;
	}
	
	
}