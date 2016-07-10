#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_ConfigPage
#include <com/shrek/gamebox/pages/ConfigPage.h>
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

Void ConfigPage_obj::__construct()
{
HX_STACK_PUSH("ConfigPage::new","com/shrek/gamebox/pages/ConfigPage.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

ConfigPage_obj::~ConfigPage_obj() { }

Dynamic ConfigPage_obj::__CreateEmpty() { return  new ConfigPage_obj; }
hx::ObjectPtr< ConfigPage_obj > ConfigPage_obj::__new()
{  hx::ObjectPtr< ConfigPage_obj > result = new ConfigPage_obj();
	result->__construct();
	return result;}

Dynamic ConfigPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConfigPage_obj > result = new ConfigPage_obj();
	result->__construct();
	return result;}

Void ConfigPage_obj::transitionOut( ){
{
		HX_STACK_PUSH("ConfigPage::transitionOut","com/shrek/gamebox/pages/ConfigPage.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		this->super::transitionOut();
		HX_STACK_LINE(27)
		this->transitionOutComplete();
	}
return null();
}


Void ConfigPage_obj::transitionIn( ){
{
		HX_STACK_PUSH("ConfigPage::transitionIn","com/shrek/gamebox/pages/ConfigPage.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->super::transitionIn();
		HX_STACK_LINE(22)
		this->transitionInComplete();
	}
return null();
}



ConfigPage_obj::ConfigPage_obj()
{
}

void ConfigPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConfigPage);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConfigPage_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ConfigPage_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ConfigPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConfigPage_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ConfigPage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConfigPage_obj::__mClass,"__mClass");
};

Class ConfigPage_obj::__mClass;

void ConfigPage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.ConfigPage"), hx::TCanCast< ConfigPage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ConfigPage_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
