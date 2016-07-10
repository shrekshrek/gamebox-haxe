#ifndef INCLUDED_com_shrek_gamebox_Main
#define INCLUDED_com_shrek_gamebox_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/appframework/core/AppMain.h>
HX_DECLARE_CLASS3(com,appframework,core,AppMain)
HX_DECLARE_CLASS3(com,shrek,gamebox,Main)
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


class Main_obj : public ::com::appframework::core::AppMain_obj{
	public:
		typedef ::com::appframework::core::AppMain_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox

#endif /* INCLUDED_com_shrek_gamebox_Main */ 
