package com.appframework.core;
import com.appframework.assets.PageAsset;
import nme.errors.Error;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.Assets;
import com.appframework.api.App;

/**
 * ...
 * @author shrek
 */

class AppModel extends EventDispatcher
{
	public function new() 
	{
		super();
	}
	
	public function load(path:String):Void
	{
		if (path == null) path = "xml/app.xml";
		xml = Xml.parse(Assets.getText(path)).firstElement();
		parseSite();
		parseTree();
		dispatchEvent(new Event(Event.COMPLETE));
	}
	
	public static var xml(get_xml,null):Xml;
	private static function get_xml():Xml
	{
		return xml;
	}
	
	public static var tree(get_tree,null):PageAsset;
	private static function get_tree():PageAsset
	{
		return tree;
	}
	
	public static var title(get_title,set_title):String;
	private static function get_title():String
	{
		return title;
	}
	private static function set_title(value:String):String
	{
		title = value;
		return title;
	}
	
	public static var defaultFlow(get_defaultFlow,set_defaultFlow):String;
	private static function get_defaultFlow():String
	{
		return defaultFlow;
	}
	private static function set_defaultFlow(value:String):String
	{
		if (value == App.NORMAL || value == App.REVERSE || value == App.CROSS) defaultFlow = value;
		return defaultFlow;
	}
	
	public static var indexID(get_indexID,null):String;
	private static function get_indexID():String 
	{ 
		return indexID; 
	}
	
	private function parseSite():Void
	{
		title = (xml.get("title") != null)?xml.get("title"):"";
		var flow:String = Std.string(xml.get("flow")).toLowerCase(); 
		if (flow == App.REVERSE || flow == App.CROSS) defaultFlow = flow;
		else defaultFlow = App.NORMAL;
	}
	private function parseTree():Void
	{
		var node:Xml = xml.elementsNamed("page").next();
		if (node.get("id") != null) indexID = node.get("id");
		tree = parsePage(node);
	}
	
	private function parseChildren(parent:PageAsset, childNodes:Iterator<Xml>):Hash<PageAsset>
	{
		var children:Hash<PageAsset> = new Hash<PageAsset>();
		for (i in childNodes) 
		{
			var node:Xml = i;
			var page:PageAsset = parsePage(i, parent);
			children.set(page.id, page);
		}
		return children;
	}
	private function parsePage(node:Xml, parent:PageAsset = null):PageAsset
	{
		validateNode(node);
		var isIndex:Bool = (node.get("id") == indexID);
		var page:PageAsset = new PageAsset();
		page.node = node;
		page.id = node.get("id");
		page.src = node.get("src"); 
		page.landing = (node.get("landing") == "true");
		// depth
		var depth:String = Std.string(node.get("depth")).toLowerCase();
		if (!isIndex)
		{
			page.setParent(parent);
			if (depth == App.TOP || depth == App.BOTTOM) page.depth = depth;
			else page.depth = App.MIDDLE;
		}
		else
		{
			if (depth == App.TOP || depth == App.MIDDLE) page.depth = depth;
			else page.depth = App.BOTTOM;
		}
		// flow
		var flow:String = Std.string(node.get("flow")).toLowerCase();
		if (flow == App.NORMAL || flow == App.REVERSE || flow == App.CROSS) page.flow = flow;
		// child pages
		var nodes:Iterator<Xml> = node.elements(); 
		if (nodes.hasNext())
		{
			page.defaultChild = node.get("defaultChild");
			page.children = parseChildren(page, nodes);
			if (!page.children.exists(page.defaultChild)) page.defaultChild = node.firstElement().get("id");
		}else
		{
			page.landing = true;
		}
		
		return page;
	}
	// Site XML Validation
	public static function validateNode(node:Xml):Void
	{
		var error:String = "*Invalid Site XML* Page ";
		if (node.get("id") == null) 
		{
			throw new Error(error + "node missing required attribute 'id'");
		}
		else if (node.get("src") == null)
		{
			throw new Error(error + "node missing required attribute 'src'");
		}
	}
	
}