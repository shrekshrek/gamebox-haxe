#include <hxcpp.h>

#ifndef INCLUDED_com_shrek_gamebox_pages_game1_Bullet
#include <com/shrek/gamebox/pages/game1/Bullet.h>
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
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{
namespace game1{

Void Bullet_obj::__construct()
{
HX_STACK_PUSH("Bullet::new","com/shrek/gamebox/pages/game1/Bullet.hx",12);
{
	HX_STACK_LINE(26)
	this->vy = (int)0;
	HX_STACK_LINE(25)
	this->vx = (int)0;
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	::native::display::Sprite _sp = ::com::shrek::gamebox::support::CompLib_obj::getBmpToSprite(HX_CSTRING("images/game1/bullet.png"));		HX_STACK_VAR(_sp,"_sp");
	HX_STACK_LINE(19)
	this->addChild(_sp);
	HX_STACK_LINE(21)
	this->hit = ::com::shrek::gamebox::support::CompLib_obj::getCircleHit((int)10);
	HX_STACK_LINE(22)
	this->addChild(this->hit);
}
;
	return null();
}

Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new()
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct();
	return result;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > result = new Bullet_obj();
	result->__construct();
	return result;}


Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(hit,"hit");
	HX_MARK_MEMBER_NAME(vy,"vy");
	HX_MARK_MEMBER_NAME(vx,"vx");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hit,"hit");
	HX_VISIT_MEMBER_NAME(vy,"vy");
	HX_VISIT_MEMBER_NAME(vx,"vx");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vy") ) { return vy; }
		if (HX_FIELD_EQ(inName,"vx") ) { return vx; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"vy") ) { vy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vx") ) { vx=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { hit=inValue.Cast< ::native::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hit"));
	outFields->push(HX_CSTRING("vy"));
	outFields->push(HX_CSTRING("vx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hit"),
	HX_CSTRING("vy"),
	HX_CSTRING("vx"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.game1.Bullet"), hx::TCanCast< Bullet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bullet_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
} // end namespace game1
