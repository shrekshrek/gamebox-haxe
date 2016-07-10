#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#include <com/shrek/gamebox/support/CompLib.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_text_TextField
#include <native/text/TextField.h>
#endif
#ifndef INCLUDED_native_text_TextFieldAutoSize
#include <native/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_native_text_TextFormat
#include <native/text/TextFormat.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace support{

Void CompLib_obj::__construct()
{
	return null();
}

CompLib_obj::~CompLib_obj() { }

Dynamic CompLib_obj::__CreateEmpty() { return  new CompLib_obj; }
hx::ObjectPtr< CompLib_obj > CompLib_obj::__new()
{  hx::ObjectPtr< CompLib_obj > result = new CompLib_obj();
	result->__construct();
	return result;}

Dynamic CompLib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompLib_obj > result = new CompLib_obj();
	result->__construct();
	return result;}

::native::display::Sprite CompLib_obj::createButton( ::String inLabel,int inW,int inH,int inColor,hx::Null< int >  __o_inSize){
int inSize = __o_inSize.Default(16);
	HX_STACK_PUSH("CompLib::createButton","com/shrek/gamebox/support/CompLib.hx",15);
	HX_STACK_ARG(inLabel,"inLabel");
	HX_STACK_ARG(inW,"inW");
	HX_STACK_ARG(inH,"inH");
	HX_STACK_ARG(inColor,"inColor");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(16)
		::native::display::Sprite _sp = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(_sp,"_sp");
		HX_STACK_LINE(17)
		_sp->get_graphics()->beginFill((int)16777215,(int)0);
		HX_STACK_LINE(18)
		_sp->get_graphics()->drawRect((int)0,(int)0,inW,inH);
		HX_STACK_LINE(19)
		_sp->get_graphics()->endFill();
		HX_STACK_LINE(21)
		::native::text::TextField _txt = ::com::shrek::gamebox::support::CompLib_obj::createTextField(inColor,inSize);		HX_STACK_VAR(_txt,"_txt");
		HX_STACK_LINE(22)
		_txt->set_text(inLabel.toUpperCase());
		HX_STACK_LINE(23)
		_txt->set_x(_txt->set_y((Float(((inH - _txt->get_height()))) / Float((int)2))));
		HX_STACK_LINE(24)
		_sp->addChild(_txt);
		HX_STACK_LINE(25)
		return _sp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CompLib_obj,createButton,return )

::native::text::TextField CompLib_obj::createTextField( int inColor,hx::Null< int >  __o_inSize){
int inSize = __o_inSize.Default(16);
	HX_STACK_PUSH("CompLib::createTextField","com/shrek/gamebox/support/CompLib.hx",28);
	HX_STACK_ARG(inColor,"inColor");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(29)
		Dynamic _font = ::ApplicationMain_obj::getAsset(HX_CSTRING("fonts/nokiafc22.ttf"));		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(30)
		::native::text::TextField _txt = ::native::text::TextField_obj::__new();		HX_STACK_VAR(_txt,"_txt");
		HX_STACK_LINE(31)
		::native::text::TextFormat _tf = ::native::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_tf,"_tf");
		HX_STACK_LINE(32)
		_tf->font = _font->__Field(HX_CSTRING("fontName"),true);
		HX_STACK_LINE(33)
		_tf->color = inColor;
		HX_STACK_LINE(34)
		_tf->size = inSize;
		HX_STACK_LINE(35)
		_txt->set_defaultTextFormat(_tf);
		HX_STACK_LINE(36)
		_txt->set_embedFonts(true);
		HX_STACK_LINE(37)
		_txt->set_selectable(false);
		HX_STACK_LINE(38)
		_txt->set_autoSize(::native::text::TextFieldAutoSize_obj::LEFT_dyn());
		HX_STACK_LINE(39)
		return _txt;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CompLib_obj,createTextField,return )


CompLib_obj::CompLib_obj()
{
}

void CompLib_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CompLib);
	HX_MARK_END_CLASS();
}

void CompLib_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CompLib_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return createButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { return createTextField_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CompLib_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CompLib_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createButton"),
	HX_CSTRING("createTextField"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompLib_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompLib_obj::__mClass,"__mClass");
};

Class CompLib_obj::__mClass;

void CompLib_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.support.CompLib"), hx::TCanCast< CompLib_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CompLib_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace support
