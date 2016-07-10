#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#include <com/shrek/gamebox/support/CompLib.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
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
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
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
#ifndef INCLUDED_native_text_TextFormatAlign
#include <native/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
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
	HX_STACK_PUSH("CompLib::createButton","com/shrek/gamebox/support/CompLib.hx",18);
	HX_STACK_ARG(inLabel,"inLabel");
	HX_STACK_ARG(inW,"inW");
	HX_STACK_ARG(inH,"inH");
	HX_STACK_ARG(inColor,"inColor");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(19)
		::native::display::Sprite _sp = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(_sp,"_sp");
		HX_STACK_LINE(20)
		_sp->get_graphics()->beginFill((int)16777215,(int)0);
		HX_STACK_LINE(21)
		_sp->get_graphics()->drawRect((int)0,(int)0,inW,inH);
		HX_STACK_LINE(22)
		_sp->get_graphics()->endFill();
		HX_STACK_LINE(24)
		::native::text::TextField _txt = ::com::shrek::gamebox::support::CompLib_obj::createTextField(inColor,inSize);		HX_STACK_VAR(_txt,"_txt");
		HX_STACK_LINE(25)
		_txt->set_autoSize(::native::text::TextFieldAutoSize_obj::LEFT_dyn());
		HX_STACK_LINE(26)
		_txt->set_text(inLabel.toUpperCase());
		HX_STACK_LINE(28)
		_txt->set_x(_txt->set_y((Float(((inH - _txt->get_height()))) / Float((int)2))));
		HX_STACK_LINE(29)
		_sp->addChild(_txt);
		HX_STACK_LINE(30)
		return _sp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CompLib_obj,createButton,return )

::native::display::Sprite CompLib_obj::createTextBox( ::String inLabel,int inW,int inH,int inColor,hx::Null< int >  __o_inSize){
int inSize = __o_inSize.Default(16);
	HX_STACK_PUSH("CompLib::createTextBox","com/shrek/gamebox/support/CompLib.hx",34);
	HX_STACK_ARG(inLabel,"inLabel");
	HX_STACK_ARG(inW,"inW");
	HX_STACK_ARG(inH,"inH");
	HX_STACK_ARG(inColor,"inColor");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(35)
		::native::display::Sprite _sp = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(_sp,"_sp");
		HX_STACK_LINE(36)
		_sp->get_graphics()->lineStyle((int)1,(int)16777215,0.5,null(),null(),null(),null(),null());
		HX_STACK_LINE(37)
		_sp->get_graphics()->beginFill((int)16777215,0.2);
		HX_STACK_LINE(38)
		_sp->get_graphics()->drawRect((int)0,(int)0,inW,inH);
		HX_STACK_LINE(39)
		_sp->get_graphics()->endFill();
		HX_STACK_LINE(41)
		::native::text::TextField _txt = ::com::shrek::gamebox::support::CompLib_obj::createTextField(inColor,inSize);		HX_STACK_VAR(_txt,"_txt");
		HX_STACK_LINE(42)
		_txt->set_width(inW);
		HX_STACK_LINE(43)
		_txt->set_text(inLabel.toUpperCase());
		HX_STACK_LINE(44)
		_txt->set_wordWrap(true);
		HX_STACK_LINE(45)
		_txt->set_multiline(true);
		HX_STACK_LINE(46)
		_txt->set_x((Float(((inW - _txt->get_width()))) / Float((int)2)));
		HX_STACK_LINE(47)
		_txt->set_y((Float(((inH - _txt->get_height()))) / Float((int)2)));
		HX_STACK_LINE(48)
		_sp->addChild(_txt);
		HX_STACK_LINE(49)
		return _sp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(CompLib_obj,createTextBox,return )

::native::text::TextField CompLib_obj::createTextField( int inColor,hx::Null< int >  __o_inSize){
int inSize = __o_inSize.Default(16);
	HX_STACK_PUSH("CompLib::createTextField","com/shrek/gamebox/support/CompLib.hx",53);
	HX_STACK_ARG(inColor,"inColor");
	HX_STACK_ARG(inSize,"inSize");
{
		HX_STACK_LINE(54)
		Dynamic _font = ::ApplicationMain_obj::getAsset(HX_CSTRING("fonts/nokiafc22.ttf"));		HX_STACK_VAR(_font,"_font");
		HX_STACK_LINE(55)
		::native::text::TextField _txt = ::native::text::TextField_obj::__new();		HX_STACK_VAR(_txt,"_txt");
		HX_STACK_LINE(56)
		::native::text::TextFormat _tf = ::native::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_tf,"_tf");
		HX_STACK_LINE(57)
		_tf->font = _font->__Field(HX_CSTRING("fontName"),true);
		HX_STACK_LINE(58)
		_tf->color = inColor;
		HX_STACK_LINE(59)
		_tf->size = inSize;
		HX_STACK_LINE(60)
		_tf->align = ::native::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(61)
		_txt->set_defaultTextFormat(_tf);
		HX_STACK_LINE(62)
		_txt->set_embedFonts(true);
		HX_STACK_LINE(63)
		_txt->set_selectable(false);
		HX_STACK_LINE(64)
		return _txt;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CompLib_obj,createTextField,return )

::native::display::Sprite CompLib_obj::getBmpToSprite( ::String inPath){
	HX_STACK_PUSH("CompLib::getBmpToSprite","com/shrek/gamebox/support/CompLib.hx",68);
	HX_STACK_ARG(inPath,"inPath");
	HX_STACK_LINE(69)
	::native::display::Sprite _sp = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(_sp,"_sp");
	HX_STACK_LINE(70)
	::native::display::Bitmap _bmp = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(inPath,null()),null(),null());		HX_STACK_VAR(_bmp,"_bmp");
	HX_STACK_LINE(71)
	_bmp->set_x((Float(-(_bmp->get_width())) / Float((int)2)));
	HX_STACK_LINE(72)
	_bmp->set_y((Float(-(_bmp->get_height())) / Float((int)2)));
	HX_STACK_LINE(73)
	_sp->addChild(_bmp);
	HX_STACK_LINE(74)
	return _sp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompLib_obj,getBmpToSprite,return )

::native::display::Sprite CompLib_obj::getCircleHit( int inR){
	HX_STACK_PUSH("CompLib::getCircleHit","com/shrek/gamebox/support/CompLib.hx",78);
	HX_STACK_ARG(inR,"inR");
	HX_STACK_LINE(79)
	::native::display::Sprite _sp = ::native::display::Sprite_obj::__new();		HX_STACK_VAR(_sp,"_sp");
	HX_STACK_LINE(80)
	_sp->get_graphics()->beginFill((int)16777215,(int)0);
	HX_STACK_LINE(81)
	_sp->get_graphics()->drawCircle((Float(-(inR)) / Float((int)2)),(Float(-(inR)) / Float((int)2)),inR);
	HX_STACK_LINE(82)
	_sp->get_graphics()->endFill();
	HX_STACK_LINE(83)
	return _sp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompLib_obj,getCircleHit,return )


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
		if (HX_FIELD_EQ(inName,"getCircleHit") ) { return getCircleHit_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTextBox") ) { return createTextBox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBmpToSprite") ) { return getBmpToSprite_dyn(); }
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
	HX_CSTRING("createTextBox"),
	HX_CSTRING("createTextField"),
	HX_CSTRING("getBmpToSprite"),
	HX_CSTRING("getCircleHit"),
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
