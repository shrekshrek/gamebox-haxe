#ifndef INCLUDED_com_shrek_gamebox_pages_ConfigPage
#define INCLUDED_com_shrek_gamebox_pages_ConfigPage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/appframework/templates/AbstractPage.h>
HX_DECLARE_CLASS3(com,appframework,templates,AbstractPage)
HX_DECLARE_CLASS4(com,shrek,gamebox,pages,ConfigPage)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{


class ConfigPage_obj : public ::com::appframework::templates::AbstractPage_obj{
	public:
		typedef ::com::appframework::templates::AbstractPage_obj super;
		typedef ConfigPage_obj OBJ_;
		ConfigPage_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ConfigPage_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ConfigPage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConfigPage"); }

		virtual Void transitionOut( );

		virtual Void transitionIn( );

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages

#endif /* INCLUDED_com_shrek_gamebox_pages_ConfigPage */ 
