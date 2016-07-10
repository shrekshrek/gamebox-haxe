#ifndef INCLUDED_com_shrek_gamebox_pages_HomePage
#define INCLUDED_com_shrek_gamebox_pages_HomePage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/appframework/templates/AbstractPage.h>
HX_DECLARE_CLASS3(com,appframework,templates,AbstractPage)
HX_DECLARE_CLASS4(com,shrek,gamebox,pages,HomePage)
HX_DECLARE_CLASS2(native,display,Bitmap)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{


class HomePage_obj : public ::com::appframework::templates::AbstractPage_obj{
	public:
		typedef ::com::appframework::templates::AbstractPage_obj super;
		typedef HomePage_obj OBJ_;
		HomePage_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HomePage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HomePage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HomePage"); }

		virtual Void onMenuClickHandler( ::native::events::Event event);
		Dynamic onMenuClickHandler_dyn();

		virtual Void clearMenu( );
		Dynamic clearMenu_dyn();

		virtual Void initMenu( );
		Dynamic initMenu_dyn();

		virtual Void clearBg( );
		Dynamic clearBg_dyn();

		virtual Void initBg( );
		Dynamic initBg_dyn();

		virtual Void onResizeHandler( ::native::events::Event event);
		Dynamic onResizeHandler_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		bool isMultiTouch; /* REM */ 
		::native::display::Bitmap bg; /* REM */ 
		int originH; /* REM */ 
		int originW; /* REM */ 
		Float stageScale; /* REM */ 
		int menuFontSize; /* REM */ 
		int menuH; /* REM */ 
		int menuW; /* REM */ 
		Array< ::String > menuLabels; /* REM */ 
		virtual Void transitionOut( );

		virtual Void transitionIn( );

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages

#endif /* INCLUDED_com_shrek_gamebox_pages_HomePage */ 
