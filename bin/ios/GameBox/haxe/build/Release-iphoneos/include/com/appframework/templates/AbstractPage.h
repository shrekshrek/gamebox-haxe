#ifndef INCLUDED_com_appframework_templates_AbstractPage
#define INCLUDED_com_appframework_templates_AbstractPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,templates,AbstractPage)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace templates{


class AbstractPage_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef AbstractPage_obj OBJ_;
		AbstractPage_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AbstractPage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AbstractPage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AbstractPage"); }

		virtual Void transitionOutComplete( );
		Dynamic transitionOutComplete_dyn();

		virtual Void transitionInComplete( );
		Dynamic transitionInComplete_dyn();

		virtual Void transitionOut( );
		Dynamic transitionOut_dyn();

		virtual Void transitionIn( );
		Dynamic transitionIn_dyn();

		virtual ::com::appframework::assets::PageAsset set_page( ::com::appframework::assets::PageAsset value);
		Dynamic set_page_dyn();

		virtual ::com::appframework::assets::PageAsset get_page( );
		Dynamic get_page_dyn();

		::com::appframework::assets::PageAsset page; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace templates

#endif /* INCLUDED_com_appframework_templates_AbstractPage */ 
