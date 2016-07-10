#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_events_PageEvent
#include <com/appframework/events/PageEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
namespace com{
namespace appframework{
namespace events{

Void PageEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_PUSH("PageEvent::new","com/appframework/events/PageEvent.hx",17);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(17)
	super::__construct(type,bubbles,cancelable);
}
;
	return null();
}

PageEvent_obj::~PageEvent_obj() { }

Dynamic PageEvent_obj::__CreateEmpty() { return  new PageEvent_obj; }
hx::ObjectPtr< PageEvent_obj > PageEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< PageEvent_obj > result = new PageEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic PageEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PageEvent_obj > result = new PageEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::native::events::Event PageEvent_obj::clone( ){
	HX_STACK_PUSH("PageEvent::clone","com/appframework/events/PageEvent.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_LINE(21)
	return ::com::appframework::events::PageEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable());
}


::String PageEvent_obj::TRANSITION_OUT;

::String PageEvent_obj::TRANSITION_IN;

::String PageEvent_obj::TRANSITION_OUT_COMPLETE;

::String PageEvent_obj::TRANSITION_IN_COMPLETE;


PageEvent_obj::PageEvent_obj()
{
}

void PageEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PageEvent);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PageEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PageEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { return TRANSITION_IN; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { return TRANSITION_OUT; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN_COMPLETE") ) { return TRANSITION_IN_COMPLETE; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT_COMPLETE") ) { return TRANSITION_OUT_COMPLETE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PageEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { TRANSITION_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { TRANSITION_OUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN_COMPLETE") ) { TRANSITION_IN_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT_COMPLETE") ) { TRANSITION_OUT_COMPLETE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PageEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRANSITION_OUT"),
	HX_CSTRING("TRANSITION_IN"),
	HX_CSTRING("TRANSITION_OUT_COMPLETE"),
	HX_CSTRING("TRANSITION_IN_COMPLETE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PageEvent_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(PageEvent_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_MARK_MEMBER_NAME(PageEvent_obj::TRANSITION_OUT_COMPLETE,"TRANSITION_OUT_COMPLETE");
	HX_MARK_MEMBER_NAME(PageEvent_obj::TRANSITION_IN_COMPLETE,"TRANSITION_IN_COMPLETE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PageEvent_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(PageEvent_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_VISIT_MEMBER_NAME(PageEvent_obj::TRANSITION_OUT_COMPLETE,"TRANSITION_OUT_COMPLETE");
	HX_VISIT_MEMBER_NAME(PageEvent_obj::TRANSITION_IN_COMPLETE,"TRANSITION_IN_COMPLETE");
};

Class PageEvent_obj::__mClass;

void PageEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.events.PageEvent"), hx::TCanCast< PageEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PageEvent_obj::__boot()
{
	TRANSITION_OUT= HX_CSTRING("transitionOut");
	TRANSITION_IN= HX_CSTRING("transitionIn");
	TRANSITION_OUT_COMPLETE= HX_CSTRING("transitionOutComplete");
	TRANSITION_IN_COMPLETE= HX_CSTRING("transitionInComplete");
}

} // end namespace com
} // end namespace appframework
} // end namespace events
