package com.shrek.gamebox.model;

/**
 * ...
 * @author shrek
 */

class Model 
{
	public function new() 
	{
		
	}
	
	private static var _instance:Model;
	
	public static var instance(get_instance,null):Model;
	private static function get_instance():Model
	{
		if (_instance == null) _instance = new Model();
		return _instance;
	}
	
	public var originWidth:Int = 480;
	public var originHeight:Int = 760;
	public var stageScale:Float = 0;
	
}