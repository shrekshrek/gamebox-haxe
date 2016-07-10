#ifndef INCLUDED_com_appframework_core_AppView
#define INCLUDED_com_appframework_core_AppView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,AppView)
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
namespace core{


class AppView_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef AppView_obj OBJ_;
		AppView_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppView"); }

		virtual Void addPage( ::com::appframework::assets::PageAsset page);
		Dynamic addPage_dyn();

		virtual Void onAddedToStage( ::native::events::Event event);
		Dynamic onAddedToStage_dyn();

		::native::display::Sprite TOP; /* REM */ 
		::native::display::Sprite MIDDLE; /* REM */ 
		::native::display::Sprite BOTTOM; /* REM */ 
		static ::Hash depths; /* REM */ 
		static ::com::appframework::core::AppView _instance; /* REM */ 
		static ::com::appframework::core::AppView instance( );
		static Dynamic instance_dyn();

		static ::native::display::Sprite getDepthContainer( ::String name);
		static Dynamic getDepthContainer_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppView */ 
