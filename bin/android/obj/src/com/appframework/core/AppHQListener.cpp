#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_core_AppHQListener
#include <com/appframework/core/AppHQListener.h>
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
namespace core{

Void AppHQListener_obj::__construct()
{
HX_STACK_PUSH("AppHQListener::new","com/appframework/core/AppHQListener.hx",19);
{
	HX_STACK_LINE(19)
	super::__construct(null());
}
;
	return null();
}

AppHQListener_obj::~AppHQListener_obj() { }

Dynamic AppHQListener_obj::__CreateEmpty() { return  new AppHQListener_obj; }
hx::ObjectPtr< AppHQListener_obj > AppHQListener_obj::__new()
{  hx::ObjectPtr< AppHQListener_obj > result = new AppHQListener_obj();
	result->__construct();
	return result;}

Dynamic AppHQListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppHQListener_obj > result = new AppHQListener_obj();
	result->__construct();
	return result;}

Void AppHQListener_obj::completeCallback( hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(false);
	HX_STACK_PUSH("AppHQListener::completeCallback","com/appframework/core/AppHQListener.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_ARG(destroy,"destroy");
{
		HX_STACK_LINE(25)
		this->completed = true;
		HX_STACK_LINE(26)
		if ((destroy)){
			HX_STACK_LINE(26)
			this->onlyOnce = true;
		}
		HX_STACK_LINE(27)
		this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppHQListener_obj,completeCallback,(void))


AppHQListener_obj::AppHQListener_obj()
{
}

void AppHQListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppHQListener);
	HX_MARK_MEMBER_NAME(dispatched,"dispatched");
	HX_MARK_MEMBER_NAME(completed,"completed");
	HX_MARK_MEMBER_NAME(onlyOnce,"onlyOnce");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(event,"event");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppHQListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatched,"dispatched");
	HX_VISIT_MEMBER_NAME(completed,"completed");
	HX_VISIT_MEMBER_NAME(onlyOnce,"onlyOnce");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(event,"event");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppHQListener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onlyOnce") ) { return onlyOnce; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { return completed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatched") ) { return dispatched; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"completeCallback") ) { return completeCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppHQListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { event=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onlyOnce") ) { onlyOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"completed") ) { completed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatched") ) { dispatched=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppHQListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dispatched"));
	outFields->push(HX_CSTRING("completed"));
	outFields->push(HX_CSTRING("onlyOnce"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("event"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("completeCallback"),
	HX_CSTRING("dispatched"),
	HX_CSTRING("completed"),
	HX_CSTRING("onlyOnce"),
	HX_CSTRING("target"),
	HX_CSTRING("event"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppHQListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppHQListener_obj::__mClass,"__mClass");
};

Class AppHQListener_obj::__mClass;

void AppHQListener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppHQListener"), hx::TCanCast< AppHQListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppHQListener_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
