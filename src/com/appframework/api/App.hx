package com.appframework.api;
import com.appframework.core.AppImpl;

/**
 * ...
 * @author shrek
 */

class App 
{
	public static var impl:AppImpl;
	
	public static var TOP:String = "top";
	public static var MIDDLE:String = "middle";
	public static var BOTTOM:String = "bottom";
	
	public static var NORMAL:String = "normal";
	public static var REVERSE:String = "reverse";
	public static var CROSS:String = "cross";
	
	public static var api(get_api,null):AppImpl;
	private static function get_api():AppImpl
	{
		return impl;
	}
	
}