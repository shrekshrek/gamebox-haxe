#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_events_AppEvent
#include <com/appframework/events/AppEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
namespace com{
namespace appframework{
namespace events{

Void AppEvent_obj::__construct(::String type,bool bubbles,bool cancelable,::String validBranch,::String fullBranch,::String src,::String flow)
{
HX_STACK_PUSH("AppEvent::new","com/appframework/events/AppEvent.hx",28);
{
	HX_STACK_LINE(29)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(30)
	this->validBranch = validBranch;
	HX_STACK_LINE(31)
	this->fullBranch = fullBranch;
	HX_STACK_LINE(32)
	this->src = src;
	HX_STACK_LINE(33)
	this->flow = flow;
}
;
	return null();
}

AppEvent_obj::~AppEvent_obj() { }

Dynamic AppEvent_obj::__CreateEmpty() { return  new AppEvent_obj; }
hx::ObjectPtr< AppEvent_obj > AppEvent_obj::__new(::String type,bool bubbles,bool cancelable,::String validBranch,::String fullBranch,::String src,::String flow)
{  hx::ObjectPtr< AppEvent_obj > result = new AppEvent_obj();
	result->__construct(type,bubbles,cancelable,validBranch,fullBranch,src,flow);
	return result;}

Dynamic AppEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppEvent_obj > result = new AppEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::native::events::Event AppEvent_obj::clone( ){
	HX_STACK_PUSH("AppEvent::clone","com/appframework/events/AppEvent.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return ::com::appframework::events::AppEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),this->validBranch,this->fullBranch,this->src,this->flow);
}


::String AppEvent_obj::GOTO;

::String AppEvent_obj::BEFORE_GOTO;

::String AppEvent_obj::AFTER_GOTO;

::String AppEvent_obj::BEFORE_TRANSITION_OUT;

::String AppEvent_obj::AFTER_TRANSITION_OUT;

::String AppEvent_obj::BEFORE_PRELOAD;

::String AppEvent_obj::AFTER_PRELOAD;

::String AppEvent_obj::BEFORE_TRANSITION_IN;

::String AppEvent_obj::AFTER_TRANSITION_IN;

::String AppEvent_obj::AFTER_COMPLETE;


AppEvent_obj::AppEvent_obj()
{
}

void AppEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppEvent);
	HX_MARK_MEMBER_NAME(flow,"flow");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(fullBranch,"fullBranch");
	HX_MARK_MEMBER_NAME(validBranch,"validBranch");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(flow,"flow");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(fullBranch,"fullBranch");
	HX_VISIT_MEMBER_NAME(validBranch,"validBranch");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GOTO") ) { return GOTO; }
		if (HX_FIELD_EQ(inName,"flow") ) { return flow; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"AFTER_GOTO") ) { return AFTER_GOTO; }
		if (HX_FIELD_EQ(inName,"fullBranch") ) { return fullBranch; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BEFORE_GOTO") ) { return BEFORE_GOTO; }
		if (HX_FIELD_EQ(inName,"validBranch") ) { return validBranch; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AFTER_PRELOAD") ) { return AFTER_PRELOAD; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BEFORE_PRELOAD") ) { return BEFORE_PRELOAD; }
		if (HX_FIELD_EQ(inName,"AFTER_COMPLETE") ) { return AFTER_COMPLETE; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AFTER_TRANSITION_IN") ) { return AFTER_TRANSITION_IN; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"AFTER_TRANSITION_OUT") ) { return AFTER_TRANSITION_OUT; }
		if (HX_FIELD_EQ(inName,"BEFORE_TRANSITION_IN") ) { return BEFORE_TRANSITION_IN; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BEFORE_TRANSITION_OUT") ) { return BEFORE_TRANSITION_OUT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"GOTO") ) { GOTO=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flow") ) { flow=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"AFTER_GOTO") ) { AFTER_GOTO=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullBranch") ) { fullBranch=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BEFORE_GOTO") ) { BEFORE_GOTO=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"validBranch") ) { validBranch=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"AFTER_PRELOAD") ) { AFTER_PRELOAD=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BEFORE_PRELOAD") ) { BEFORE_PRELOAD=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"AFTER_COMPLETE") ) { AFTER_COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AFTER_TRANSITION_IN") ) { AFTER_TRANSITION_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"AFTER_TRANSITION_OUT") ) { AFTER_TRANSITION_OUT=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BEFORE_TRANSITION_IN") ) { BEFORE_TRANSITION_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BEFORE_TRANSITION_OUT") ) { BEFORE_TRANSITION_OUT=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("flow"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("fullBranch"));
	outFields->push(HX_CSTRING("validBranch"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GOTO"),
	HX_CSTRING("BEFORE_GOTO"),
	HX_CSTRING("AFTER_GOTO"),
	HX_CSTRING("BEFORE_TRANSITION_OUT"),
	HX_CSTRING("AFTER_TRANSITION_OUT"),
	HX_CSTRING("BEFORE_PRELOAD"),
	HX_CSTRING("AFTER_PRELOAD"),
	HX_CSTRING("BEFORE_TRANSITION_IN"),
	HX_CSTRING("AFTER_TRANSITION_IN"),
	HX_CSTRING("AFTER_COMPLETE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("flow"),
	HX_CSTRING("src"),
	HX_CSTRING("fullBranch"),
	HX_CSTRING("validBranch"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppEvent_obj::GOTO,"GOTO");
	HX_MARK_MEMBER_NAME(AppEvent_obj::BEFORE_GOTO,"BEFORE_GOTO");
	HX_MARK_MEMBER_NAME(AppEvent_obj::AFTER_GOTO,"AFTER_GOTO");
	HX_MARK_MEMBER_NAME(AppEvent_obj::BEFORE_TRANSITION_OUT,"BEFORE_TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(AppEvent_obj::AFTER_TRANSITION_OUT,"AFTER_TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(AppEvent_obj::BEFORE_PRELOAD,"BEFORE_PRELOAD");
	HX_MARK_MEMBER_NAME(AppEvent_obj::AFTER_PRELOAD,"AFTER_PRELOAD");
	HX_MARK_MEMBER_NAME(AppEvent_obj::BEFORE_TRANSITION_IN,"BEFORE_TRANSITION_IN");
	HX_MARK_MEMBER_NAME(AppEvent_obj::AFTER_TRANSITION_IN,"AFTER_TRANSITION_IN");
	HX_MARK_MEMBER_NAME(AppEvent_obj::AFTER_COMPLETE,"AFTER_COMPLETE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::GOTO,"GOTO");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::BEFORE_GOTO,"BEFORE_GOTO");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::AFTER_GOTO,"AFTER_GOTO");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::BEFORE_TRANSITION_OUT,"BEFORE_TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::AFTER_TRANSITION_OUT,"AFTER_TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::BEFORE_PRELOAD,"BEFORE_PRELOAD");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::AFTER_PRELOAD,"AFTER_PRELOAD");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::BEFORE_TRANSITION_IN,"BEFORE_TRANSITION_IN");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::AFTER_TRANSITION_IN,"AFTER_TRANSITION_IN");
	HX_VISIT_MEMBER_NAME(AppEvent_obj::AFTER_COMPLETE,"AFTER_COMPLETE");
};

Class AppEvent_obj::__mClass;

void AppEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.events.AppEvent"), hx::TCanCast< AppEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppEvent_obj::__boot()
{
	GOTO= HX_CSTRING("goto");
	BEFORE_GOTO= HX_CSTRING("beforeGoto");
	AFTER_GOTO= HX_CSTRING("afterGoto");
	BEFORE_TRANSITION_OUT= HX_CSTRING("beforeTransitionOut");
	AFTER_TRANSITION_OUT= HX_CSTRING("afterTransitionOut");
	BEFORE_PRELOAD= HX_CSTRING("beforePreload");
	AFTER_PRELOAD= HX_CSTRING("afterPreload");
	BEFORE_TRANSITION_IN= HX_CSTRING("beforeTransitionIn");
	AFTER_TRANSITION_IN= HX_CSTRING("afterTransitionIn");
	AFTER_COMPLETE= HX_CSTRING("afterComplete");
}

} // end namespace com
} // end namespace appframework
} // end namespace events
