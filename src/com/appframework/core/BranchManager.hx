package com.appframework.core;
import com.appframework.assets.PageAsset;

/**
 * ...
 * @author shrek
 */

class BranchManager 
{
	private static var activePages:Hash<PageAsset> = new Hash<PageAsset>();
	
	public static function addPage(page:PageAsset):Void
	{
		activePages.set(page.branch,page);
	}
	public static function getTransitionOutArray(newBranch:String):Array<PageAsset>
	{
		cleanup();
		newBranch += "/";
		var transitionOutArray:Array<PageAsset> = []; 
		for (a in activePages.keys())
		{
			if (newBranch.indexOf(a + "/") == -1) transitionOutArray.push(activePages.get(a));
		}
		transitionOutArray.sort(sortByBranchDepth);
		
		return transitionOutArray;
	}
	public static function cleanup():Void
	{
		for (a in activePages.keys())
		{
			if (!activePages.get(a).active) activePages.remove(a);
		}
	}
	private static function sortByBranchDepth(a:PageAsset, b:PageAsset):Int
	{
		var aLen:Int = a.branch.split("/").length;
		var bLen:Int = b.branch.split("/").length;
		if (aLen < bLen)return -1;
		else if (aLen > bLen) return 1;
		else return 0;
	}
	
}