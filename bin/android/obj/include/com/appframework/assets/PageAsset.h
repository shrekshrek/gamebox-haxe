#ifndef INCLUDED_com_appframework_assets_PageAsset
#define INCLUDED_com_appframework_assets_PageAsset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,templates,AbstractPage)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace assets{


class PageAsset_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef PageAsset_obj OBJ_;
		PageAsset_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PageAsset_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PageAsset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PageAsset"); }

		virtual ::String toString( );

		virtual Void parseNode( ::com::appframework::assets::PageAsset page);
		Dynamic parseNode_dyn();

		virtual Void load( );
		Dynamic load_dyn();

		virtual Void preload( );
		Dynamic preload_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual ::String get_branch( );
		Dynamic get_branch_dyn();

		::String branch; /* REM */ 
		virtual bool set_landing( bool value);
		Dynamic set_landing_dyn();

		virtual bool get_landing( );
		Dynamic get_landing_dyn();

		bool landing; /* REM */ 
		virtual ::String set_flow( ::String value);
		Dynamic set_flow_dyn();

		virtual ::String get_flow( );
		Dynamic get_flow_dyn();

		::String flow; /* REM */ 
		virtual ::String set_defaultChild( ::String value);
		Dynamic set_defaultChild_dyn();

		virtual ::String get_defaultChild( );
		Dynamic get_defaultChild_dyn();

		::String defaultChild; /* REM */ 
		virtual ::Hash set_children( ::Hash value);
		Dynamic set_children_dyn();

		virtual ::Hash get_children( );
		Dynamic get_children_dyn();

		::Hash children; /* REM */ 
		virtual Void setParent( ::com::appframework::assets::PageAsset value);
		Dynamic setParent_dyn();

		virtual ::com::appframework::assets::PageAsset getParent( );
		Dynamic getParent_dyn();

		::com::appframework::assets::PageAsset _parent; /* REM */ 
		virtual bool get_active( );
		Dynamic get_active_dyn();

		bool active; /* REM */ 
		virtual ::String set_depth( ::String value);
		Dynamic set_depth_dyn();

		virtual ::String get_depth( );
		Dynamic get_depth_dyn();

		::String depth; /* REM */ 
		virtual ::Xml set_node( ::Xml value);
		Dynamic set_node_dyn();

		virtual ::Xml get_node( );
		Dynamic get_node_dyn();

		::Xml node; /* REM */ 
		virtual ::String set_src( ::String value);
		Dynamic set_src_dyn();

		virtual ::String get_src( );
		Dynamic get_src_dyn();

		::String src; /* REM */ 
		virtual ::String set_id( ::String value);
		Dynamic set_id_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

		::String id; /* REM */ 
		virtual Void onComplete( ::native::events::Event event);
		Dynamic onComplete_dyn();

		virtual Void onTransitionOutComplete( ::native::events::Event event);
		Dynamic onTransitionOutComplete_dyn();

		virtual Void onTransitionInComplete( ::native::events::Event event);
		Dynamic onTransitionInComplete_dyn();

		virtual Void decorate( );
		Dynamic decorate_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void transitionOut( );
		Dynamic transitionOut_dyn();

		virtual Void transitionIn( );
		Dynamic transitionIn_dyn();

		virtual ::com::appframework::templates::AbstractPage set_page( ::com::appframework::templates::AbstractPage value);
		Dynamic set_page_dyn();

		virtual ::com::appframework::templates::AbstractPage get_page( );
		Dynamic get_page_dyn();

		::com::appframework::templates::AbstractPage page; /* REM */ 
		bool isActive; /* REM */ 
		bool isTransitionedIn; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace assets

#endif /* INCLUDED_com_appframework_assets_PageAsset */ 
