#ifndef INCLUDED_com_appframework_core_AppMain
#define INCLUDED_com_appframework_core_AppMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS3(com,appframework,core,AppController)
HX_DECLARE_CLASS3(com,appframework,core,AppMain)
HX_DECLARE_CLASS3(com,appframework,core,AppModel)
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


class AppMain_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef AppMain_obj OBJ_;
		AppMain_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppMain_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppMain"); }

		virtual Void onResize( ::native::events::Event event);
		Dynamic onResize_dyn();

		virtual Void alignEnterFrame( ::native::events::Event event);
		Dynamic alignEnterFrame_dyn();

		virtual Void alignSite( int w,int h);
		Dynamic alignSite_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void initComplete( );
		Dynamic initComplete_dyn();

		virtual Void onAppModelComplete( ::native::events::Event event);
		Dynamic onAppModelComplete_dyn();

		virtual Void loadSiteXML( );
		Dynamic loadSiteXML_dyn();

		virtual Void startApp( );
		Dynamic startApp_dyn();

		virtual Void onAddedToStage( ::native::events::Event event);
		Dynamic onAddedToStage_dyn();

		::String appXML; /* REM */ 
		int __HEIGHT; /* REM */ 
		int __WIDTH; /* REM */ 
		int alignCount; /* REM */ 
		::com::appframework::core::AppView view; /* REM */ 
		::com::appframework::core::AppController controller; /* REM */ 
		::com::appframework::core::AppModel model; /* REM */ 
		static ::com::appframework::core::AppMain _instance; /* REM */ 
		static ::com::appframework::core::AppMain instance; /* REM */ 
		static ::com::appframework::core::AppMain get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppMain */ 
