#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_flow_CrossFlow
#include <com/appframework/flow/CrossFlow.h>
#endif
#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
#endif
namespace com{
namespace appframework{
namespace flow{

Void CrossFlow_obj::__construct()
{
	return null();
}

CrossFlow_obj::~CrossFlow_obj() { }

Dynamic CrossFlow_obj::__CreateEmpty() { return  new CrossFlow_obj; }
hx::ObjectPtr< CrossFlow_obj > CrossFlow_obj::__new()
{  hx::ObjectPtr< CrossFlow_obj > result = new CrossFlow_obj();
	result->__construct();
	return result;}

Dynamic CrossFlow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CrossFlow_obj > result = new CrossFlow_obj();
	result->__construct();
	return result;}

bool CrossFlow_obj::isInDone;

bool CrossFlow_obj::isOutDone;

Void CrossFlow_obj::start( ){
{
		HX_STACK_PUSH("CrossFlow::start","com/appframework/flow/CrossFlow.hx",15);
		HX_STACK_LINE(16)
		::com::appframework::flow::CrossFlow_obj::isInDone = ::com::appframework::flow::CrossFlow_obj::isOutDone = false;
		HX_STACK_LINE(17)
		::com::appframework::flow::FlowManager_obj::preload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CrossFlow_obj,start,(void))

Void CrossFlow_obj::afterPreloadDone( ){
{
		HX_STACK_PUSH("CrossFlow::afterPreloadDone","com/appframework/flow/CrossFlow.hx",20);
		HX_STACK_LINE(21)
		::com::appframework::flow::FlowManager_obj::transitionOut();
		HX_STACK_LINE(22)
		::com::appframework::flow::FlowManager_obj::transitionIn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CrossFlow_obj,afterPreloadDone,(void))

Void CrossFlow_obj::afterTransitionInDone( ){
{
		HX_STACK_PUSH("CrossFlow::afterTransitionInDone","com/appframework/flow/CrossFlow.hx",25);
		HX_STACK_LINE(26)
		::com::appframework::flow::CrossFlow_obj::isInDone = true;
		HX_STACK_LINE(27)
		::com::appframework::flow::CrossFlow_obj::checkBothDone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CrossFlow_obj,afterTransitionInDone,(void))

Void CrossFlow_obj::afterTransitionOutDone( ){
{
		HX_STACK_PUSH("CrossFlow::afterTransitionOutDone","com/appframework/flow/CrossFlow.hx",30);
		HX_STACK_LINE(31)
		::com::appframework::flow::CrossFlow_obj::isOutDone = true;
		HX_STACK_LINE(32)
		::com::appframework::flow::CrossFlow_obj::checkBothDone();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CrossFlow_obj,afterTransitionOutDone,(void))

Void CrossFlow_obj::checkBothDone( ){
{
		HX_STACK_PUSH("CrossFlow::checkBothDone","com/appframework/flow/CrossFlow.hx",35);
		HX_STACK_LINE(35)
		if (((bool(::com::appframework::flow::CrossFlow_obj::isInDone) && bool(::com::appframework::flow::CrossFlow_obj::isOutDone)))){
			HX_STACK_LINE(38)
			::com::appframework::flow::CrossFlow_obj::isInDone = ::com::appframework::flow::CrossFlow_obj::isOutDone = false;
			HX_STACK_LINE(39)
			::com::appframework::flow::FlowManager_obj::complete();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CrossFlow_obj,checkBothDone,(void))


CrossFlow_obj::CrossFlow_obj()
{
}

void CrossFlow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CrossFlow);
	HX_MARK_END_CLASS();
}

void CrossFlow_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic CrossFlow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isInDone") ) { return isInDone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOutDone") ) { return isOutDone; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkBothDone") ) { return checkBothDone_dyn(); }
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

Dynamic CrossFlow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isInDone") ) { isInDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOutDone") ) { isOutDone=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CrossFlow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isInDone"),
	HX_CSTRING("isOutDone"),
	HX_CSTRING("start"),
	HX_CSTRING("afterPreloadDone"),
	HX_CSTRING("afterTransitionInDone"),
	HX_CSTRING("afterTransitionOutDone"),
	HX_CSTRING("checkBothDone"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CrossFlow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CrossFlow_obj::isInDone,"isInDone");
	HX_MARK_MEMBER_NAME(CrossFlow_obj::isOutDone,"isOutDone");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CrossFlow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CrossFlow_obj::isInDone,"isInDone");
	HX_VISIT_MEMBER_NAME(CrossFlow_obj::isOutDone,"isOutDone");
};

Class CrossFlow_obj::__mClass;

void CrossFlow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.flow.CrossFlow"), hx::TCanCast< CrossFlow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CrossFlow_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace flow
