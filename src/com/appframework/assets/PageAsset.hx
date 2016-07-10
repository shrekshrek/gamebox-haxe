package com.appframework.assets;
import com.appframework.templates.AbstractPage;
import com.appframework.api.App;
import com.appframework.events.PageEvent;
import nme.events.Event;
import nme.events.EventDispatcher;

/**
 * ...
 * @author shrek
 */

class PageAsset extends EventDispatcher
{
	private var isTransitionedIn:Bool;
	private var isActive:Bool;
	
	//private var request:URLRequest;
	
	public function new() 
	{
		super();
		isTransitionedIn = false;
	}
	
	public var page(get_page,set_page):AbstractPage;
	private function get_page():AbstractPage
	{
		return page;
	}
	private function set_page(value:AbstractPage):AbstractPage
	{
		page = value;
		return page;
	}
	
	public function transitionIn():Void
	{
		if (!isTransitionedIn) page.transitionIn();
		else onTransitionInComplete();
	}
	public function transitionOut():Void
	{
		if (isTransitionedIn) page.transitionOut();
		else onTransitionOutComplete();
	}
	public function destroy():Void
	{
		isActive = false;
		isTransitionedIn = false;
		if (page != null)
		{
			page.removeEventListener(PageEvent.TRANSITION_IN_COMPLETE, onTransitionInComplete);
			page.removeEventListener(PageEvent.TRANSITION_OUT_COMPLETE, onTransitionOutComplete);
			page.page = null;
			
			if (page.parent != null) page.parent.removeChild(page);
			page = null;
		}
	}
	private function decorate():Void
	{
		page.addEventListener(PageEvent.TRANSITION_IN_COMPLETE, onTransitionInComplete);
		page.addEventListener(PageEvent.TRANSITION_OUT_COMPLETE, onTransitionOutComplete);
		page.page = this;
	}
	// EVENT LISTENERS
	private function onTransitionInComplete(event:Event = null):Void
	{
		isTransitionedIn = true;
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_IN_COMPLETE));
	}
	private function onTransitionOutComplete(event:Event = null):Void
	{
		destroy();
		dispatchEvent(new PageEvent(PageEvent.TRANSITION_OUT_COMPLETE));
	}
	// decorate and make visible (MovieClipAsset_default is false)
	private function onComplete(event:Event = null):Void
	{
		decorate();
		isTransitionedIn = false;
	}
	
	public var id(get_id,set_id):String;
	private function get_id():String
	{
		return id;
	}
	private function set_id(value:String):String
	{
		if (id == null) id = value;
		return id;
	}
	
	public var src(get_src,set_src):String;
	private function get_src():String
	{
		return src;
	}
	private function set_src(value:String):String
	{
		src = value;
		return src;
	}
	
	public var node(get_node,set_node):Xml;
	private function get_node():Xml
	{
		return node;
	}
	private function set_node(value:Xml):Xml
	{
		if (node == null) node = value;
		return node;
	}
	
	public var depth(get_depth,set_depth):String;		
	private function get_depth():String
	{
		return depth;
	}
	private function set_depth(value:String):String
	{
		depth = value;
		return depth;
	}
		
	public var active(get_active,null):Bool;
	private function get_active():Bool
	{
		return isActive;
	}
	
	private var _parent:PageAsset;
	public function getParent():PageAsset
	{
		return _parent;
	}
	public function setParent(value:PageAsset):Void
	{
		if (_parent == null) _parent = value;
	}
	
	public var children(get_children, set_children):Hash<PageAsset>;
	private function get_children():Hash<PageAsset>
	{
		return children;
	}
	private function set_children(value:Hash<PageAsset>):Hash<PageAsset>
	{
		if (children == null) children = value;
		return children;
	}
	
	public var defaultChild(get_defaultChild,set_defaultChild):String;
	public function get_defaultChild():String
	{
		return defaultChild;
	}
	public function set_defaultChild(value:String):String
	{
		defaultChild = value;
		return defaultChild;
	}
		
	public var flow(get_flow,set_flow):String;
	private function get_flow():String
	{
		return flow;
	}
	private function set_flow(value:String):String
	{
		flow = value;
		return flow;
	}
	
	public var landing:Bool;
	private function get_landing():Bool
	{
		return landing;
	}
	private function set_landing(value:Bool):Bool
	{
		landing = value;
		return landing;
	}
	
	public var branch(get_branch,null):String;
	private function get_branch():String
	{
		if (_parent != null) return _parent.branch + "/" + id;
		return id;
	}
	
	
	public function init():Void 
	{
		var _type = Type.resolveClass(src);
		page = Type.createInstance(_type, []);
	}
	
	public function preload():Void
	{
		load();
	}
	
	public function load():Void
	{
		isActive = true;
		onComplete();
	}
	
	public function parseNode(page:PageAsset):Void
	{
		id = node.get("id");
		src = node.get("src");
		
		var d:String = Std.string(node.get("depth")).toLowerCase();
		if (d == App.TOP || d == App.BOTTOM || d == App.MIDDLE) depth = d;
		else depth = page.depth;
	}
	
	override public function toString():String
	{
		return "[PageAsset] " + id;
	}
	
}