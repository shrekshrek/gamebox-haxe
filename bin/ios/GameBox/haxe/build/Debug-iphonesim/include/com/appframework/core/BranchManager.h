#ifndef INCLUDED_com_appframework_core_BranchManager
#define INCLUDED_com_appframework_core_BranchManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,BranchManager)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class BranchManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BranchManager_obj OBJ_;
		BranchManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BranchManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BranchManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BranchManager"); }

		static ::Hash activePages; /* REM */ 
		static Void addPage( ::com::appframework::assets::PageAsset page);
		static Dynamic addPage_dyn();

		static Array< ::com::appframework::assets::PageAsset > getTransitionOutArray( ::String newBranch);
		static Dynamic getTransitionOutArray_dyn();

		static Void cleanup( );
		static Dynamic cleanup_dyn();

		static int sortByBranchDepth( ::com::appframework::assets::PageAsset a,::com::appframework::assets::PageAsset b);
		static Dynamic sortByBranchDepth_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_BranchManager */ 
