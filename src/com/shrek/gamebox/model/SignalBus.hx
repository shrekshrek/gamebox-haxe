package com.shrek.gamebox.model;

/**
 * ...
 * @author shrek
 */

class SignalBus 
{
	public function new() 
	{
		
	}
	
	private static var _instance:SignalBus;
	
	public static var instance(get_instance,null):SignalBus;
	private static function get_instance():SignalBus
	{
		if (_instance == null) _instance = new SignalBus();
		return _instance;
	}
	
	
	
}