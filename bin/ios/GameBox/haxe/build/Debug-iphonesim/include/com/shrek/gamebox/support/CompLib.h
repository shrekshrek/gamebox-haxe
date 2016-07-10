#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#define INCLUDED_com_shrek_gamebox_support_CompLib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,shrek,gamebox,support,CompLib)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,text,TextField)
namespace com{
namespace shrek{
namespace gamebox{
namespace support{


class CompLib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CompLib_obj OBJ_;
		CompLib_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CompLib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CompLib_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CompLib"); }

		static ::native::display::Sprite createButton( ::String inLabel,int inW,int inH,int inColor,hx::Null< int >  inSize);
		static Dynamic createButton_dyn();

		static ::native::text::TextField createTextField( int inColor,hx::Null< int >  inSize);
		static Dynamic createTextField_dyn();

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace support

#endif /* INCLUDED_com_shrek_gamebox_support_CompLib */ 
