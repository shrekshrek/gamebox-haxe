#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_events_PageEvent
#include <com/appframework/events/PageEvent.h>
#endif
#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
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
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace com{
namespace appframework{
namespace templates{

Void AbstractPage_obj::__construct()
{
HX_STACK_PUSH("AbstractPage::new","com/appframework/templates/AbstractPage.hx",11);
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

AbstractPage_obj::~AbstractPage_obj() { }

Dynamic AbstractPage_obj::__CreateEmpty() { return  new AbstractPage_obj; }
hx::ObjectPtr< AbstractPage_obj > AbstractPage_obj::__new()
{  hx::ObjectPtr< AbstractPage_obj > result = new AbstractPage_obj();
	result->__construct();
	return result;}

Dynamic AbstractPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractPage_obj > result = new AbstractPage_obj();
	result->__construct();
	return result;}

Void AbstractPage_obj::transitionOutComplete( ){
{
		HX_STACK_PUSH("AbstractPage::transitionOutComplete","com/appframework/templates/AbstractPage.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractPage_obj,transitionOutComplete,(void))

Void AbstractPage_obj::transitionInComplete( ){
{
		HX_STACK_PUSH("AbstractPage::transitionInComplete","com/appframework/templates/AbstractPage.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(32)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractPage_obj,transitionInComplete,(void))

Void AbstractPage_obj::transitionOut( ){
{
		HX_STACK_PUSH("AbstractPage::transitionOut","com/appframework/templates/AbstractPage.hx",28);
		HX_STACK_THIS(this);
		HX_STACK_LINE(28)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_OUT,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractPage_obj,transitionOut,(void))

Void AbstractPage_obj::transitionIn( ){
{
		HX_STACK_PUSH("AbstractPage::transitionIn","com/appframework/templates/AbstractPage.hx",24);
		HX_STACK_THIS(this);
		HX_STACK_LINE(24)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_IN,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractPage_obj,transitionIn,(void))

::com::appframework::assets::PageAsset AbstractPage_obj::set_page( ::com::appframework::assets::PageAsset value){
	HX_STACK_PUSH("AbstractPage::set_page","com/appframework/templates/AbstractPage.hx",19);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(20)
	if (((this->get_page() == null()))){
		HX_STACK_LINE(20)
		this->page = value;
	}
	HX_STACK_LINE(21)
	return this->get_page();
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractPage_obj,set_page,return )

::com::appframework::assets::PageAsset AbstractPage_obj::get_page( ){
	HX_STACK_PUSH("AbstractPage::get_page","com/appframework/templates/AbstractPage.hx",15);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15)
	return this->page;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractPage_obj,get_page,return )


AbstractPage_obj::AbstractPage_obj()
{
}

void AbstractPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractPage);
	HX_MARK_MEMBER_NAME(page,"page");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AbstractPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(page,"page");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AbstractPage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { return inCallProp ? get_page() : page; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_page") ) { return set_page_dyn(); }
		if (HX_FIELD_EQ(inName,"get_page") ) { return get_page_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"transitionInComplete") ) { return transitionInComplete_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transitionOutComplete") ) { return transitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AbstractPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { if (inCallProp) return set_page(inValue);page=inValue.Cast< ::com::appframework::assets::PageAsset >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AbstractPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("page"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("transitionOutComplete"),
	HX_CSTRING("transitionInComplete"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("set_page"),
	HX_CSTRING("get_page"),
	HX_CSTRING("page"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractPage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractPage_obj::__mClass,"__mClass");
};

Class AbstractPage_obj::__mClass;

void AbstractPage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.templates.AbstractPage"), hx::TCanCast< AbstractPage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AbstractPage_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace templates
