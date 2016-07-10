package com.appframework.core;
import com.appframework.assets.PageAsset;
import com.appframework.events.BranchLoaderEvent;
import nme.events.Event;
import nme.events.EventDispatcher;
import nme.utils.Timer;

/**
 * ...
 * @author shrek
 */

class BranchLoader extends EventDispatcher
{
	private var loadedFiles:Int;
	private var totalFiles:Int;
	private var current:Int;
		
	private var _currentAsset:PageAsset;
	
	public function new()
	{
		super();
	}
	public function loadBranch(branch:String):Void
	{
		loadedFiles = totalFiles = 0;
		totalFiles = BranchIterator.init(branch);
		current = -1;
		loadNext();
	}
	public function interrupt():Void
	{
		_currentAsset.destroy();
		totalFiles = loadedFiles;
		dispatchComplete();
	}
	
	private function loadNext():Void
	{
		_currentAsset = BranchIterator.next(); 
		if (_currentAsset != null && !_currentAsset.active) {
			_currentAsset.init();
			dispatchEvent(new BranchLoaderEvent(BranchLoaderEvent.LOAD_PAGE, false, false, _currentAsset));
		}
		next();
	}
	private function next(skip:Bool = false):Void
	{
		++loadedFiles;
		if (loadedFiles < totalFiles) 
		{
			loadNext();
		}
		else 
		{
			totalFiles = loadedFiles;
			dispatchComplete();
		}
	}
	private function dispatchComplete():Void
	{
		dispatchEvent(new Event(Event.COMPLETE));
	}
}