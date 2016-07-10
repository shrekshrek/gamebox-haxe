#ifndef INCLUDED_com_appframework_core_AppModel
#define INCLUDED_com_appframework_core_AppModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,AppModel)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class AppModel_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef AppModel_obj OBJ_;
		AppModel_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppModel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppModel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppModel"); }

		virtual ::com::appframework::assets::PageAsset parsePage( ::Xml node,::com::appframework::assets::PageAsset parent);
		Dynamic parsePage_dyn();

		virtual ::Hash parseChildren( ::com::appframework::assets::PageAsset parent,Dynamic childNodes);
		Dynamic parseChildren_dyn();

		virtual Void parseTree( );
		Dynamic parseTree_dyn();

		virtual Void parseSite( );
		Dynamic parseSite_dyn();

		virtual Void load( ::String path);
		Dynamic load_dyn();

		static ::Xml xml; /* REM */ 
		static ::Xml get_xml( );
		static Dynamic get_xml_dyn();

		static ::com::appframework::assets::PageAsset tree; /* REM */ 
		static ::com::appframework::assets::PageAsset get_tree( );
		static Dynamic get_tree_dyn();

		static ::String title; /* REM */ 
		static ::String get_title( );
		static Dynamic get_title_dyn();

		static ::String set_title( ::String value);
		static Dynamic set_title_dyn();

		static ::String defaultFlow; /* REM */ 
		static ::String get_defaultFlow( );
		static Dynamic get_defaultFlow_dyn();

		static ::String set_defaultFlow( ::String value);
		static Dynamic set_defaultFlow_dyn();

		static ::String indexID; /* REM */ 
		static ::String get_indexID( );
		static Dynamic get_indexID_dyn();

		static Void validateNode( ::Xml node);
		static Dynamic validateNode_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppModel */ 
