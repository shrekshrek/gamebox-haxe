#ifndef INCLUDED_com_shrek_gamebox_pages_Game2Page
#define INCLUDED_com_shrek_gamebox_pages_Game2Page

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/appframework/templates/AbstractPage.h>
HX_DECLARE_CLASS3(com,appframework,templates,AbstractPage)
HX_DECLARE_CLASS4(com,shrek,gamebox,pages,Game2Page)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,AccelerometerEvent)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,sensors,Accelerometer)
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{


class Game2Page_obj : public ::com::appframework::templates::AbstractPage_obj{
	public:
		typedef ::com::appframework::templates::AbstractPage_obj super;
		typedef Game2Page_obj OBJ_;
		Game2Page_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Game2Page_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Game2Page_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Game2Page"); }

		virtual Void onUpdateHandler( ::native::events::AccelerometerEvent event);
		Dynamic onUpdateHandler_dyn();

		virtual Void onEnterFrameHandler( ::native::events::Event event);
		Dynamic onEnterFrameHandler_dyn();

		virtual Void onResizeHandler( ::native::events::Event event);
		Dynamic onResizeHandler_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		::nape::util::Debug debug; /* REM */ 
		::nape::space::Space space; /* REM */ 
		::native::sensors::Accelerometer accelerometer; /* REM */ 
		virtual Void transitionOut( );

		virtual Void transitionIn( );

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages

#endif /* INCLUDED_com_shrek_gamebox_pages_Game2Page */ 
