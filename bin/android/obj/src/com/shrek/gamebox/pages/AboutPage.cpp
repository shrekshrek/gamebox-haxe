#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_AboutPage
#include <com/shrek/gamebox/pages/AboutPage.h>
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

Void AboutPage_obj::__construct()
{
HX_STACK_PUSH("AboutPage::new","com/shrek/gamebox/pages/AboutPage.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

AboutPage_obj::~AboutPage_obj() { }

Dynamic AboutPage_obj::__CreateEmpty() { return  new AboutPage_obj; }
hx::ObjectPtr< AboutPage_obj > AboutPage_obj::__new()
{  hx::ObjectPtr< AboutPage_obj > result = new AboutPage_obj();
	result->__construct();
	return result;}

Dynamic AboutPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AboutPage_obj > result = new AboutPage_obj();
	result->__construct();
	return result;}

Void AboutPage_obj::transitionOut( ){
{
		HX_STACK_PUSH("AboutPage::transitionOut","com/shrek/gamebox/pages/AboutPage.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		this->super::transitionOut();
		HX_STACK_LINE(27)
		this->transitionOutComplete();
	}
return null();
}


Void AboutPage_obj::transitionIn( ){
{
		HX_STACK_PUSH("AboutPage::transitionIn","com/shrek/gamebox/pages/AboutPage.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->super::transitionIn();
		HX_STACK_LINE(22)
		this->transitionInComplete();
	}
return null();
}



AboutPage_obj::AboutPage_obj()
{
}

void AboutPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AboutPage);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AboutPage_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AboutPage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AboutPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AboutPage_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AboutPage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AboutPage_obj::__mClass,"__mClass");
};

Class AboutPage_obj::__mClass;

void AboutPage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.AboutPage"), hx::TCanCast< AboutPage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AboutPage_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
