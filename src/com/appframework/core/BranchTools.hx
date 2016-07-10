package com.appframework.core;
import com.appframework.assets.PageAsset;

/**
 * ...
 * @author shrek
 */

class BranchTools 
{
	public static function getPage(branch:String):PageAsset
	{
		var branchArray:Array<String> = branch.split("/");
		var page:PageAsset = AppModel.tree;
		for (i in 1...branchArray.length)
		{
			page = page.children.get(branchArray[i]);
		}
		return page;
	}
	
	// get valid branch returns a branch that is defined in the site.xml
	public static function getValidBranch(branch:String):String
	{
		var branchArray:Array<String> = branch.split("/"); 
		var page:PageAsset = AppModel.tree;
		var validBranch:Array<String> = [];
		if (branchArray[0] != AppModel.indexID) branchArray.unshift(AppModel.indexID);
		validBranch.push(branchArray[0]);
		for (i in 1...branchArray.length)
		{
			if (page.children != null && page.children.get(branchArray[i]) != null) 
			{
				page = page.children.get(branchArray[i]);
				validBranch.push(branchArray[i]);
			} 
			else 
			{
				break;
			}
		}
		var returnBranch:String = validBranch.join("/");
		return getDefaultChildBranch(returnBranch);
	}
	public static function getFullBranch(branch:String):String
	{
		var validBranch:String = getValidBranch(branch);
		if (branch.indexOf(validBranch) > -1) return branch;
		return validBranch;
	}
	public static function getPagesOfBranch(branch:String):Array<PageAsset>
	{
		var branchArray:Array<String> = branch.split("/");
		var pageArray:Array<PageAsset> = [];
		var page:PageAsset = AppModel.tree;
		pageArray.push(page);
		for (i in 1...branchArray.length)
		{
			pageArray.push(page = page.children.get(branchArray[i]));
		}
		return pageArray;
	}
	private static function getDefaultChildBranch(branch:String):String
	{
		var page:PageAsset = getPage(branch);
		if (page.landing || page.defaultChild == null) return branch;
		return getDefaultChildBranch(page.children.get(page.defaultChild).branch);
	}
	
	
}