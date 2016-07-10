#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_events_BranchLoaderEvent
#include <com/appframework/events/BranchLoaderEvent.h>
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
namespace events{

Void BranchLoaderEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::com::appframework::assets::PageAsset asset)
{
HX_STACK_PUSH("BranchLoaderEvent::new","com/appframework/events/BranchLoaderEvent.hx",19);
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(20)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(21)
	this->asset = asset;
}
;
	return null();
}

BranchLoaderEvent_obj::~BranchLoaderEvent_obj() { }

Dynamic BranchLoaderEvent_obj::__CreateEmpty() { return  new BranchLoaderEvent_obj; }
hx::ObjectPtr< BranchLoaderEvent_obj > BranchLoaderEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::com::appframework::assets::PageAsset asset)
{  hx::ObjectPtr< BranchLoaderEvent_obj > result = new BranchLoaderEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable,asset);
	return result;}

Dynamic BranchLoaderEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BranchLoaderEvent_obj > result = new BranchLoaderEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::native::events::Event BranchLoaderEvent_obj::clone( ){
	HX_STACK_PUSH("BranchLoaderEvent::clone","com/appframework/events/BranchLoaderEvent.hx",24);
	HX_STACK_THIS(this);
	HX_STACK_LINE(24)
	return ::com::appframework::events::BranchLoaderEvent_obj::__new(this->get_type(),this->get_bubbles(),this->get_cancelable(),null());
}


::String BranchLoaderEvent_obj::LOAD_PAGE;

::String BranchLoaderEvent_obj::START;

::String BranchLoaderEvent_obj::COMPLETE;


BranchLoaderEvent_obj::BranchLoaderEvent_obj()
{
}

void BranchLoaderEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BranchLoaderEvent);
	HX_MARK_MEMBER_NAME(asset,"asset");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BranchLoaderEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(asset,"asset");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BranchLoaderEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"START") ) { return START; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"asset") ) { return asset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LOAD_PAGE") ) { return LOAD_PAGE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BranchLoaderEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"START") ) { START=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asset") ) { asset=inValue.Cast< ::com::appframework::assets::PageAsset >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LOAD_PAGE") ) { LOAD_PAGE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BranchLoaderEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("asset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LOAD_PAGE"),
	HX_CSTRING("START"),
	HX_CSTRING("COMPLETE"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("asset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchLoaderEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BranchLoaderEvent_obj::LOAD_PAGE,"LOAD_PAGE");
	HX_MARK_MEMBER_NAME(BranchLoaderEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(BranchLoaderEvent_obj::COMPLETE,"COMPLETE");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchLoaderEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BranchLoaderEvent_obj::LOAD_PAGE,"LOAD_PAGE");
	HX_VISIT_MEMBER_NAME(BranchLoaderEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(BranchLoaderEvent_obj::COMPLETE,"COMPLETE");
};

Class BranchLoaderEvent_obj::__mClass;

void BranchLoaderEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.events.BranchLoaderEvent"), hx::TCanCast< BranchLoaderEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BranchLoaderEvent_obj::__boot()
{
	LOAD_PAGE= HX_CSTRING("loadPage");
	START= HX_CSTRING("start");
	COMPLETE= HX_CSTRING("complete");
}

} // end namespace com
} // end namespace appframework
} // end namespace events
