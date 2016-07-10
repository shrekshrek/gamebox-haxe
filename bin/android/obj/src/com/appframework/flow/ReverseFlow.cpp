#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
#endif
#ifndef INCLUDED_com_appframework_flow_ReverseFlow
#include <com/appframework/flow/ReverseFlow.h>
#endif
namespace com{
namespace appframework{
namespace flow{

Void ReverseFlow_obj::__construct()
{
	return null();
}

ReverseFlow_obj::~ReverseFlow_obj() { }

Dynamic ReverseFlow_obj::__CreateEmpty() { return  new ReverseFlow_obj; }
hx::ObjectPtr< ReverseFlow_obj > ReverseFlow_obj::__new()
{  hx::ObjectPtr< ReverseFlow_obj > result = new ReverseFlow_obj();
	result->__construct();
	return result;}

Dynamic ReverseFlow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReverseFlow_obj > result = new ReverseFlow_obj();
	result->__construct();
	return result;}

Void ReverseFlow_obj::start( ){
{
		HX_STACK_PUSH("ReverseFlow::start","com/appframework/flow/ReverseFlow.hx",11);
		HX_STACK_LINE(11)
		::com::appframework::flow::FlowManager_obj::preload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ReverseFlow_obj,start,(void))

Void ReverseFlow_obj::afterPreloadDone( ){
{
		HX_STACK_PUSH("ReverseFlow::afterPreloadDone","com/appframework/flow/ReverseFlow.hx",15);
		HX_STACK_LINE(15)
		::com::appframework::flow::FlowManager_obj::transitionIn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ReverseFlow_obj,afterPreloadDone,(void))

Void ReverseFlow_obj::afterTransitionInDone( ){
{
		HX_STACK_PUSH("ReverseFlow::afterTransitionInDone","com/appframework/flow/ReverseFlow.hx",19);
		HX_STACK_LINE(19)
		::com::appframework::flow::FlowManager_obj::transitionOut();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ReverseFlow_obj,afterTransitionInDone,(void))

Void ReverseFlow_obj::afterTransitionOutDone( ){
{
		HX_STACK_PUSH("ReverseFlow::afterTransitionOutDone","com/appframework/flow/ReverseFlow.hx",23);
		HX_STACK_LINE(23)
		::com::appframework::flow::FlowManager_obj::complete();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ReverseFlow_obj,afterTransitionOutDone,(void))


ReverseFlow_obj::ReverseFlow_obj()
{
}

void ReverseFlow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReverseFlow);
	HX_MARK_END_CLASS();
}

void ReverseFlow_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ReverseFlow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"afterPreloadDone") ) { return afterPreloadDone_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"afterTransitionInDone") ) { return afterTransitionInDone_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterTransitionOutDone") ) { return afterTransitionOutDone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ReverseFlow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ReverseFlow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("start"),
	HX_CSTRING("afterPreloadDone"),
	HX_CSTRING("afterTransitionInDone"),
	HX_CSTRING("afterTransitionOutDone"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReverseFlow_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReverseFlow_obj::__mClass,"__mClass");
};

Class ReverseFlow_obj::__mClass;

void ReverseFlow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.flow.ReverseFlow"), hx::TCanCast< ReverseFlow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ReverseFlow_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace flow
