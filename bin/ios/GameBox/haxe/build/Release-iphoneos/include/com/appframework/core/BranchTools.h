#ifndef INCLUDED_com_appframework_core_BranchTools
#define INCLUDED_com_appframework_core_BranchTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,BranchTools)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class BranchTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BranchTools_obj OBJ_;
		BranchTools_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BranchTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BranchTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BranchTools"); }

		static ::com::appframework::assets::PageAsset getPage( ::String branch);
		static Dynamic getPage_dyn();

		static ::String getValidBranch( ::String branch);
		static Dynamic getValidBranch_dyn();

		static ::String getFullBranch( ::String branch);
		static Dynamic getFullBranch_dyn();

		static Array< ::com::appframework::assets::PageAsset > getPagesOfBranch( ::String branch);
		static Dynamic getPagesOfBranch_dyn();

		static ::String getDefaultChildBranch( ::String branch);
		static Dynamic getDefaultChildBranch_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_BranchTools */ 
