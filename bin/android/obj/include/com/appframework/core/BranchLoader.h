#ifndef INCLUDED_com_appframework_core_BranchLoader
#define INCLUDED_com_appframework_core_BranchLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,BranchLoader)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class BranchLoader_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef BranchLoader_obj OBJ_;
		BranchLoader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BranchLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BranchLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BranchLoader"); }

		virtual Void dispatchComplete( );
		Dynamic dispatchComplete_dyn();

		virtual Void next( hx::Null< bool >  skip);
		Dynamic next_dyn();

		virtual Void loadNext( );
		Dynamic loadNext_dyn();

		virtual Void interrupt( );
		Dynamic interrupt_dyn();

		virtual Void loadBranch( ::String branch);
		Dynamic loadBranch_dyn();

		::com::appframework::assets::PageAsset _currentAsset; /* REM */ 
		int current; /* REM */ 
		int totalFiles; /* REM */ 
		int loadedFiles; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_BranchLoader */ 
