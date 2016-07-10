#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
#endif
#ifndef INCLUDED_com_appframework_flow_NormalFlow
#include <com/appframework/flow/NormalFlow.h>
#endif
namespace com{
namespace appframework{
namespace flow{

Void NormalFlow_obj::__construct()
{
	return null();
}

NormalFlow_obj::~NormalFlow_obj() { }

Dynamic NormalFlow_obj::__CreateEmpty() { return  new NormalFlow_obj; }
hx::ObjectPtr< NormalFlow_obj > NormalFlow_obj::__new()
{  hx::ObjectPtr< NormalFlow_obj > result = new NormalFlow_obj();
	result->__construct();
	return result;}

Dynamic NormalFlow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NormalFlow_obj > result = new NormalFlow_obj();
	result->__construct();
	return result;}

Void NormalFlow_obj::start( ){
{
		HX_STACK_PUSH("NormalFlow::start","com/appframework/flow/NormalFlow.hx",11);
		HX_STACK_LINE(11)
		::com::appframework::flow::FlowManager_obj::transitionOut();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NormalFlow_obj,start,(void))

Void NormalFlow_obj::afterTransitionOutDone( ){
{
		HX_STACK_PUSH("NormalFlow::afterTransitionOutDone","com/appframework/flow/NormalFlow.hx",15);
		HX_STACK_LINE(15)
		::com::appframework::flow::FlowManager_obj::preload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NormalFlow_obj,afterTransitionOutDone,(void))

Void NormalFlow_obj::afterPreloadDone( ){
{
		HX_STACK_PUSH("NormalFlow::afterPreloadDone","com/appframework/flow/NormalFlow.hx",19);
		HX_STACK_LINE(19)
		::com::appframework::flow::FlowManager_obj::transitionIn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NormalFlow_obj,afterPreloadDone,(void))

Void NormalFlow_obj::afterTransitionInDone( ){
{
		HX_STACK_PUSH("NormalFlow::afterTransitionInDone","com/appframework/flow/NormalFlow.hx",23);
		HX_STACK_LINE(23)
		::com::appframework::flow::FlowManager_obj::complete();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(NormalFlow_obj,afterTransitionInDone,(void))


NormalFlow_obj::NormalFlow_obj()
{
}

void NormalFlow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NormalFlow);
	HX_MARK_END_CLASS();
}

void NormalFlow_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic NormalFlow_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic NormalFlow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NormalFlow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("start"),
	HX_CSTRING("afterTransitionOutDone"),
	HX_CSTRING("afterPreloadDone"),
	HX_CSTRING("afterTransitionInDone"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NormalFlow_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NormalFlow_obj::__mClass,"__mClass");
};

Class NormalFlow_obj::__mClass;

void NormalFlow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.flow.NormalFlow"), hx::TCanCast< NormalFlow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NormalFlow_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace flow
