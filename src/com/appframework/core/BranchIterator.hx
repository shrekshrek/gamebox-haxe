package com.appframework.core;
import com.appframework.assets.PageAsset;

/**
 * ...
 * @author shrek
 */

class BranchIterator 
{
	private static var items:Array<PageAsset>;
	private static var index:Int;
	
	public static function init(branch:String):Int
	{
		var branchArray:Array<String> = branch.split("/");
		items = [];
		index = -1;
		var page:PageAsset = AppModel.tree;
		addPage(page);
		for (i in 1...branchArray.length)
		{
			page = page.children.get(branchArray[i]);
			addPage(page);
		}
		return items.length;
	}
	public static function next():PageAsset
	{
		if (++index < items.length) return items[index];
		return null;
	}
	private static function addPage(page:PageAsset):Void
	{
		items.push(page);
	}
}