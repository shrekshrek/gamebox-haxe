#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppController
#include <com/appframework/core/AppController.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppHQ
#include <com/appframework/core/AppHQ.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppImpl
#include <com/appframework/core/AppImpl.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppMain
#include <com/appframework/core/AppMain.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppView
#include <com/appframework/core/AppView.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchTools
#include <com/appframework/core/BranchTools.h>
#endif
#ifndef INCLUDED_com_appframework_events_AppEvent
#include <com/appframework/events/AppEvent.h>
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
namespace core{

Void AppImpl_obj::__construct()
{
HX_STACK_PUSH("AppImpl::new","com/appframework/core/AppImpl.hx",14);
{
}
;
	return null();
}

AppImpl_obj::~AppImpl_obj() { }

Dynamic AppImpl_obj::__CreateEmpty() { return  new AppImpl_obj; }
hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__new()
{  hx::ObjectPtr< AppImpl_obj > result = new AppImpl_obj();
	result->__construct();
	return result;}

Dynamic AppImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppImpl_obj > result = new AppImpl_obj();
	result->__construct();
	return result;}

Void AppImpl_obj::removeAfterComplete( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeAfterComplete","com/appframework/core/AppImpl.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(156)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::AFTER_COMPLETE,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeAfterComplete,(void))

Void AppImpl_obj::removeAfterTransitionIn( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeAfterTransitionIn","com/appframework/core/AppImpl.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(151)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_IN,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeAfterTransitionIn,(void))

Void AppImpl_obj::removeBeforeTransitionIn( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeBeforeTransitionIn","com/appframework/core/AppImpl.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(147)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_IN,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeBeforeTransitionIn,(void))

Void AppImpl_obj::removeAfterPreload( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeAfterPreload","com/appframework/core/AppImpl.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(142)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::AFTER_PRELOAD,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeAfterPreload,(void))

Void AppImpl_obj::removeBeforePreload( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeBeforePreload","com/appframework/core/AppImpl.hx",138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(138)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::BEFORE_PRELOAD,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeBeforePreload,(void))

Void AppImpl_obj::removeAfterTransitionOut( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeAfterTransitionOut","com/appframework/core/AppImpl.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(133)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_OUT,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeAfterTransitionOut,(void))

Void AppImpl_obj::removeBeforeTransitionOut( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeBeforeTransitionOut","com/appframework/core/AppImpl.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(129)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_OUT,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeBeforeTransitionOut,(void))

Void AppImpl_obj::removeAfterGoto( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeAfterGoto","com/appframework/core/AppImpl.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(124)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::AFTER_GOTO,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeAfterGoto,(void))

Void AppImpl_obj::removeBeforeGoto( Dynamic target){
{
		HX_STACK_PUSH("AppImpl::removeBeforeGoto","com/appframework/core/AppImpl.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(120)
		::com::appframework::core::AppHQ_obj::get_instance()->removeListener(::com::appframework::events::AppEvent_obj::BEFORE_GOTO,target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,removeBeforeGoto,(void))

Dynamic AppImpl_obj::afterComplete( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::afterComplete","com/appframework/core/AppImpl.hx",114);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(114)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::AFTER_COMPLETE,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,afterComplete,return )

Dynamic AppImpl_obj::afterTransitionIn( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::afterTransitionIn","com/appframework/core/AppImpl.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(109)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_IN,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,afterTransitionIn,return )

Dynamic AppImpl_obj::beforeTransitionIn( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::beforeTransitionIn","com/appframework/core/AppImpl.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(105)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_IN,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,beforeTransitionIn,return )

Dynamic AppImpl_obj::afterPreload( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::afterPreload","com/appframework/core/AppImpl.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(100)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::AFTER_PRELOAD,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,afterPreload,return )

Dynamic AppImpl_obj::beforePreload( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::beforePreload","com/appframework/core/AppImpl.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(96)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::BEFORE_PRELOAD,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,beforePreload,return )

Dynamic AppImpl_obj::afterTransitionOut( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::afterTransitionOut","com/appframework/core/AppImpl.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(91)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_OUT,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,afterTransitionOut,return )

Dynamic AppImpl_obj::beforeTransitionOut( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::beforeTransitionOut","com/appframework/core/AppImpl.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(87)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_OUT,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,beforeTransitionOut,return )

Dynamic AppImpl_obj::afterGoto( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::afterGoto","com/appframework/core/AppImpl.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(82)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::AFTER_GOTO,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,afterGoto,return )

Dynamic AppImpl_obj::beforeGoto( Dynamic target,hx::Null< bool >  __o_onlyOnce){
bool onlyOnce = __o_onlyOnce.Default(false);
	HX_STACK_PUSH("AppImpl::beforeGoto","com/appframework/core/AppImpl.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
{
		HX_STACK_LINE(78)
		return ::com::appframework::core::AppHQ_obj::get_instance()->addListener(::com::appframework::events::AppEvent_obj::BEFORE_GOTO,target,onlyOnce);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,beforeGoto,return )

int AppImpl_obj::getHeight( ){
	HX_STACK_PUSH("AppImpl::getHeight","com/appframework/core/AppImpl.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return ::com::appframework::core::AppMain_obj::get_instance()->__HEIGHT;
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getHeight,return )

int AppImpl_obj::getWidth( ){
	HX_STACK_PUSH("AppImpl::getWidth","com/appframework/core/AppImpl.hx",68);
	HX_STACK_THIS(this);
	HX_STACK_LINE(68)
	return ::com::appframework::core::AppMain_obj::get_instance()->__WIDTH;
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getWidth,return )

Void AppImpl_obj::setDefaultFlow( ::String flow){
{
		HX_STACK_PUSH("AppImpl::setDefaultFlow","com/appframework/core/AppImpl.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flow,"flow");
		HX_STACK_LINE(64)
		::com::appframework::core::AppModel_obj::set_defaultFlow(flow);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,setDefaultFlow,(void))

::String AppImpl_obj::getDefaultFlow( ){
	HX_STACK_PUSH("AppImpl::getDefaultFlow","com/appframework/core/AppImpl.hx",60);
	HX_STACK_THIS(this);
	HX_STACK_LINE(60)
	return ::com::appframework::core::AppModel_obj::get_defaultFlow();
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getDefaultFlow,return )

::String AppImpl_obj::getCurrentBranch( ){
	HX_STACK_PUSH("AppImpl::getCurrentBranch","com/appframework/core/AppImpl.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return ::com::appframework::core::AppController_obj::getCurrentBranch();
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getCurrentBranch,return )

::String AppImpl_obj::getValidBranch( ::String branch){
	HX_STACK_PUSH("AppImpl::getValidBranch","com/appframework/core/AppImpl.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(52)
	return ::com::appframework::core::BranchTools_obj::getValidBranch(branch);
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,getValidBranch,return )

::native::display::Sprite AppImpl_obj::getDepthContainer( ::String name){
	HX_STACK_PUSH("AppImpl::getDepthContainer","com/appframework/core/AppImpl.hx",48);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(48)
	return ::com::appframework::core::AppView_obj::getDepthContainer(name);
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,getDepthContainer,return )

::com::appframework::assets::PageAsset AppImpl_obj::getPage( ::String branch){
	HX_STACK_PUSH("AppImpl::getPage","com/appframework/core/AppImpl.hx",44);
	HX_STACK_THIS(this);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(44)
	return ::com::appframework::core::BranchTools_obj::getPage(branch);
}


HX_DEFINE_DYNAMIC_FUNC1(AppImpl_obj,getPage,return )

::Xml AppImpl_obj::getSiteXML( ){
	HX_STACK_PUSH("AppImpl::getSiteXML","com/appframework/core/AppImpl.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_LINE(40)
	return ::com::appframework::core::AppModel_obj::get_xml();
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getSiteXML,return )

::com::appframework::assets::PageAsset AppImpl_obj::getAppTree( ){
	HX_STACK_PUSH("AppImpl::getAppTree","com/appframework/core/AppImpl.hx",36);
	HX_STACK_THIS(this);
	HX_STACK_LINE(36)
	return ::com::appframework::core::AppModel_obj::get_tree();
}


HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,getAppTree,return )

Void AppImpl_obj::_goto( ::String branch,::String flow){
{
		HX_STACK_PUSH("AppImpl::goto","com/appframework/core/AppImpl.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_ARG(branch,"branch");
		HX_STACK_ARG(flow,"flow");
		HX_STACK_LINE(32)
		::com::appframework::core::AppHQ_obj::get_instance()->_goto(branch,flow);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppImpl_obj,_goto,(void))

::com::appframework::core::AppImpl AppImpl_obj::_instance;

::com::appframework::core::AppImpl AppImpl_obj::birth( ){
	HX_STACK_PUSH("AppImpl::birth","com/appframework/core/AppImpl.hx",21);
	HX_STACK_LINE(22)
	if (((::com::appframework::core::AppImpl_obj::_instance == null()))){
		HX_STACK_LINE(22)
		::com::appframework::core::AppImpl_obj::_instance = ::com::appframework::core::AppImpl_obj::__new();
	}
	HX_STACK_LINE(23)
	return ::com::appframework::core::AppImpl_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,birth,return )

::com::appframework::core::AppImpl AppImpl_obj::instance;

::com::appframework::core::AppImpl AppImpl_obj::get_instance( ){
	HX_STACK_PUSH("AppImpl::get_instance","com/appframework/core/AppImpl.hx",28);
	HX_STACK_LINE(28)
	return ::com::appframework::core::AppImpl_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppImpl_obj,get_instance,return )


AppImpl_obj::AppImpl_obj()
{
}

void AppImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppImpl);
	HX_MARK_END_CLASS();
}

void AppImpl_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AppImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goto") ) { return _goto_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"birth") ) { return birth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPage") ) { return getPage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"afterGoto") ) { return afterGoto_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeGoto") ) { return beforeGoto_dyn(); }
		if (HX_FIELD_EQ(inName,"getSiteXML") ) { return getSiteXML_dyn(); }
		if (HX_FIELD_EQ(inName,"getAppTree") ) { return getAppTree_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"afterPreload") ) { return afterPreload_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"afterComplete") ) { return afterComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"beforePreload") ) { return beforePreload_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setDefaultFlow") ) { return setDefaultFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultFlow") ) { return getDefaultFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"getValidBranch") ) { return getValidBranch_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"removeAfterGoto") ) { return removeAfterGoto_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBeforeGoto") ) { return removeBeforeGoto_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrentBranch") ) { return getCurrentBranch_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"afterTransitionIn") ) { return afterTransitionIn_dyn(); }
		if (HX_FIELD_EQ(inName,"getDepthContainer") ) { return getDepthContainer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeAfterPreload") ) { return removeAfterPreload_dyn(); }
		if (HX_FIELD_EQ(inName,"beforeTransitionIn") ) { return beforeTransitionIn_dyn(); }
		if (HX_FIELD_EQ(inName,"afterTransitionOut") ) { return afterTransitionOut_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeAfterComplete") ) { return removeAfterComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"removeBeforePreload") ) { return removeBeforePreload_dyn(); }
		if (HX_FIELD_EQ(inName,"beforeTransitionOut") ) { return beforeTransitionOut_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeAfterTransitionIn") ) { return removeAfterTransitionIn_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"removeBeforeTransitionIn") ) { return removeBeforeTransitionIn_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAfterTransitionOut") ) { return removeAfterTransitionOut_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"removeBeforeTransitionOut") ) { return removeBeforeTransitionOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::appframework::core::AppImpl >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::com::appframework::core::AppImpl >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppImpl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("birth"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("removeAfterComplete"),
	HX_CSTRING("removeAfterTransitionIn"),
	HX_CSTRING("removeBeforeTransitionIn"),
	HX_CSTRING("removeAfterPreload"),
	HX_CSTRING("removeBeforePreload"),
	HX_CSTRING("removeAfterTransitionOut"),
	HX_CSTRING("removeBeforeTransitionOut"),
	HX_CSTRING("removeAfterGoto"),
	HX_CSTRING("removeBeforeGoto"),
	HX_CSTRING("afterComplete"),
	HX_CSTRING("afterTransitionIn"),
	HX_CSTRING("beforeTransitionIn"),
	HX_CSTRING("afterPreload"),
	HX_CSTRING("beforePreload"),
	HX_CSTRING("afterTransitionOut"),
	HX_CSTRING("beforeTransitionOut"),
	HX_CSTRING("afterGoto"),
	HX_CSTRING("beforeGoto"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("setDefaultFlow"),
	HX_CSTRING("getDefaultFlow"),
	HX_CSTRING("getCurrentBranch"),
	HX_CSTRING("getValidBranch"),
	HX_CSTRING("getDepthContainer"),
	HX_CSTRING("getPage"),
	HX_CSTRING("getSiteXML"),
	HX_CSTRING("getAppTree"),
	HX_CSTRING("goto"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppImpl_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(AppImpl_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppImpl_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(AppImpl_obj::instance,"instance");
};

Class AppImpl_obj::__mClass;

void AppImpl_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppImpl"), hx::TCanCast< AppImpl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppImpl_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
