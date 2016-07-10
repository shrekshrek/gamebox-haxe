#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_IndexPage
#include <com/shrek/gamebox/pages/IndexPage.h>
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

Void IndexPage_obj::__construct()
{
HX_STACK_PUSH("IndexPage::new","com/shrek/gamebox/pages/IndexPage.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

IndexPage_obj::~IndexPage_obj() { }

Dynamic IndexPage_obj::__CreateEmpty() { return  new IndexPage_obj; }
hx::ObjectPtr< IndexPage_obj > IndexPage_obj::__new()
{  hx::ObjectPtr< IndexPage_obj > result = new IndexPage_obj();
	result->__construct();
	return result;}

Dynamic IndexPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexPage_obj > result = new IndexPage_obj();
	result->__construct();
	return result;}

Void IndexPage_obj::transitionOut( ){
{
		HX_STACK_PUSH("IndexPage::transitionOut","com/shrek/gamebox/pages/IndexPage.hx",25);
		HX_STACK_THIS(this);
		HX_STACK_LINE(26)
		this->super::transitionOut();
		HX_STACK_LINE(27)
		this->transitionOutComplete();
	}
return null();
}


Void IndexPage_obj::transitionIn( ){
{
		HX_STACK_PUSH("IndexPage::transitionIn","com/shrek/gamebox/pages/IndexPage.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->super::transitionIn();
		HX_STACK_LINE(22)
		this->transitionInComplete();
	}
return null();
}



IndexPage_obj::IndexPage_obj()
{
}

void IndexPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexPage);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IndexPage_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic IndexPage_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic IndexPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexPage_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(IndexPage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexPage_obj::__mClass,"__mClass");
};

Class IndexPage_obj::__mClass;

void IndexPage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.IndexPage"), hx::TCanCast< IndexPage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void IndexPage_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
