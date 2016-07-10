#ifndef INCLUDED_com_appframework_core_BranchIterator
#define INCLUDED_com_appframework_core_BranchIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,BranchIterator)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class BranchIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BranchIterator_obj OBJ_;
		BranchIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BranchIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BranchIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BranchIterator"); }

		static Array< ::com::appframework::assets::PageAsset > items; /* REM */ 
		static int index; /* REM */ 
		static int init( ::String branch);
		static Dynamic init_dyn();

		static ::com::appframework::assets::PageAsset next( );
		static Dynamic next_dyn();

		static Void addPage( ::com::appframework::assets::PageAsset page);
		static Dynamic addPage_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_BranchIterator */ 
