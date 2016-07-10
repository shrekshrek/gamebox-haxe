#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppHQ
#include <com/appframework/core/AppHQ.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_com_appframework_flow_CrossFlow
#include <com/appframework/flow/CrossFlow.h>
#endif
#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
#endif
#ifndef INCLUDED_com_appframework_flow_NormalFlow
#include <com/appframework/flow/NormalFlow.h>
#endif
#ifndef INCLUDED_com_appframework_flow_ReverseFlow
#include <com/appframework/flow/ReverseFlow.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
namespace com{
namespace appframework{
namespace flow{

Void FlowManager_obj::__construct()
{
	return null();
}

FlowManager_obj::~FlowManager_obj() { }

Dynamic FlowManager_obj::__CreateEmpty() { return  new FlowManager_obj; }
hx::ObjectPtr< FlowManager_obj > FlowManager_obj::__new()
{  hx::ObjectPtr< FlowManager_obj > result = new FlowManager_obj();
	result->__construct();
	return result;}

Dynamic FlowManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlowManager_obj > result = new FlowManager_obj();
	result->__construct();
	return result;}

Dynamic FlowManager_obj::flow;

Void FlowManager_obj::init( ::String type){
{
		HX_STACK_PUSH("FlowManager::init","com/appframework/flow/FlowManager.hx",16);
		HX_STACK_ARG(type,"type");
		HX_STACK_LINE(16)
		if (((type == ::com::appframework::api::App_obj::NORMAL))){
			HX_STACK_LINE(18)
			::com::appframework::flow::FlowManager_obj::flow = hx::ClassOf< ::com::appframework::flow::NormalFlow >();
		}
		else{
			HX_STACK_LINE(21)
			if (((type == ::com::appframework::api::App_obj::REVERSE))){
				HX_STACK_LINE(22)
				::com::appframework::flow::FlowManager_obj::flow = hx::ClassOf< ::com::appframework::flow::ReverseFlow >();
			}
			else{
				HX_STACK_LINE(25)
				if (((type == ::com::appframework::api::App_obj::CROSS))){
					HX_STACK_LINE(26)
					::com::appframework::flow::FlowManager_obj::flow = hx::ClassOf< ::com::appframework::flow::CrossFlow >();
				}
				else{
					HX_STACK_LINE(30)
					::com::appframework::flow::FlowManager_obj::init((  (((::com::appframework::core::AppModel_obj::get_defaultFlow() != null()))) ? ::String(::com::appframework::core::AppModel_obj::get_defaultFlow()) : ::String(::com::appframework::api::App_obj::NORMAL) ));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlowManager_obj,init,(void))

Void FlowManager_obj::start( ){
{
		HX_STACK_PUSH("FlowManager::start","com/appframework/flow/FlowManager.hx",37);
		HX_STACK_LINE(37)
		::com::appframework::core::AppHQ_obj::get_instance()->afterGoto();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,start,(void))

Void FlowManager_obj::transitionOutComplete( ){
{
		HX_STACK_PUSH("FlowManager::transitionOutComplete","com/appframework/flow/FlowManager.hx",41);
		HX_STACK_LINE(41)
		::com::appframework::core::AppHQ_obj::get_instance()->afterTransitionOut();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,transitionOutComplete,(void))

Void FlowManager_obj::preloadComplete( ){
{
		HX_STACK_PUSH("FlowManager::preloadComplete","com/appframework/flow/FlowManager.hx",45);
		HX_STACK_LINE(45)
		::com::appframework::core::AppHQ_obj::get_instance()->afterPreload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,preloadComplete,(void))

Void FlowManager_obj::transitionInComplete( ){
{
		HX_STACK_PUSH("FlowManager::transitionInComplete","com/appframework/flow/FlowManager.hx",49);
		HX_STACK_LINE(49)
		::com::appframework::core::AppHQ_obj::get_instance()->afterTransitionIn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,transitionInComplete,(void))

Void FlowManager_obj::afterGoto( ){
{
		HX_STACK_PUSH("FlowManager::afterGoto","com/appframework/flow/FlowManager.hx",55);
		HX_STACK_LINE(55)
		::com::appframework::flow::FlowManager_obj::flow->__Field(HX_CSTRING("start"),true)();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,afterGoto,(void))

Void FlowManager_obj::afterTransitionOutDone( ){
{
		HX_STACK_PUSH("FlowManager::afterTransitionOutDone","com/appframework/flow/FlowManager.hx",59);
		HX_STACK_LINE(59)
		::com::appframework::flow::FlowManager_obj::flow->__Field(HX_CSTRING("afterTransitionOutDone"),true)();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,afterTransitionOutDone,(void))

Void FlowManager_obj::afterPreloadDone( ){
{
		HX_STACK_PUSH("FlowManager::afterPreloadDone","com/appframework/flow/FlowManager.hx",63);
		HX_STACK_LINE(63)
		::com::appframework::flow::FlowManager_obj::flow->__Field(HX_CSTRING("afterPreloadDone"),true)();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,afterPreloadDone,(void))

Void FlowManager_obj::afterTransitionInDone( ){
{
		HX_STACK_PUSH("FlowManager::afterTransitionInDone","com/appframework/flow/FlowManager.hx",67);
		HX_STACK_LINE(67)
		::com::appframework::flow::FlowManager_obj::flow->__Field(HX_CSTRING("afterTransitionInDone"),true)();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,afterTransitionInDone,(void))

Void FlowManager_obj::transitionOut( ){
{
		HX_STACK_PUSH("FlowManager::transitionOut","com/appframework/flow/FlowManager.hx",73);
		HX_STACK_LINE(73)
		::com::appframework::core::AppHQ_obj::get_instance()->beforeTransitionOut();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,transitionOut,(void))

Void FlowManager_obj::preload( ){
{
		HX_STACK_PUSH("FlowManager::preload","com/appframework/flow/FlowManager.hx",77);
		HX_STACK_LINE(77)
		::com::appframework::core::AppHQ_obj::get_instance()->beforePreload();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,preload,(void))

Void FlowManager_obj::transitionIn( ){
{
		HX_STACK_PUSH("FlowManager::transitionIn","com/appframework/flow/FlowManager.hx",81);
		HX_STACK_LINE(81)
		::com::appframework::core::AppHQ_obj::get_instance()->beforeTransitionIn();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,transitionIn,(void))

Void FlowManager_obj::complete( ){
{
		HX_STACK_PUSH("FlowManager::complete","com/appframework/flow/FlowManager.hx",85);
		HX_STACK_LINE(85)
		::com::appframework::core::AppHQ_obj::get_instance()->afterComplete();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlowManager_obj,complete,(void))


FlowManager_obj::FlowManager_obj()
{
}

void FlowManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlowManager);
	HX_MARK_END_CLASS();
}

void FlowManager_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlowManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flow") ) { return flow; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { return preload_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"afterGoto") ) { return afterGoto_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"preloadComplete") ) { return preloadComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"afterPreloadDone") ) { return afterPreloadDone_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"transitionInComplete") ) { return transitionInComplete_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transitionOutComplete") ) { return transitionOutComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"afterTransitionInDone") ) { return afterTransitionInDone_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"afterTransitionOutDone") ) { return afterTransitionOutDone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlowManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flow") ) { flow=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlowManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flow"),
	HX_CSTRING("init"),
	HX_CSTRING("start"),
	HX_CSTRING("transitionOutComplete"),
	HX_CSTRING("preloadComplete"),
	HX_CSTRING("transitionInComplete"),
	HX_CSTRING("afterGoto"),
	HX_CSTRING("afterTransitionOutDone"),
	HX_CSTRING("afterPreloadDone"),
	HX_CSTRING("afterTransitionInDone"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("preload"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("complete"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlowManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlowManager_obj::flow,"flow");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlowManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlowManager_obj::flow,"flow");
};

Class FlowManager_obj::__mClass;

void FlowManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.flow.FlowManager"), hx::TCanCast< FlowManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlowManager_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace flow
