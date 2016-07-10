#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppHQ
#include <com/appframework/core/AppHQ.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppHQListener
#include <com/appframework/core/AppHQListener.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchTools
#include <com/appframework/core/BranchTools.h>
#endif
#ifndef INCLUDED_com_appframework_events_AppEvent
#include <com/appframework/events/AppEvent.h>
#endif
#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
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

Void AppHQ_obj::__construct()
{
HX_STACK_PUSH("AppHQ::new","com/appframework/core/AppHQ.hx",13);
{
	HX_STACK_LINE(21)
	this->uniqueID = (int)0;
	HX_STACK_LINE(28)
	super::__construct(null());
	HX_STACK_LINE(29)
	this->listeners = ::Hash_obj::__new();
	HX_STACK_LINE(30)
	this->listeners->set(HX_CSTRING("beforeGoto"),::Hash_obj::__new());
	HX_STACK_LINE(31)
	this->listeners->set(HX_CSTRING("afterGoto"),::Hash_obj::__new());
	HX_STACK_LINE(32)
	this->listeners->set(HX_CSTRING("beforeTransitionOut"),::Hash_obj::__new());
	HX_STACK_LINE(33)
	this->listeners->set(HX_CSTRING("afterTransitionOut"),::Hash_obj::__new());
	HX_STACK_LINE(34)
	this->listeners->set(HX_CSTRING("beforePreload"),::Hash_obj::__new());
	HX_STACK_LINE(35)
	this->listeners->set(HX_CSTRING("afterPreload"),::Hash_obj::__new());
	HX_STACK_LINE(36)
	this->listeners->set(HX_CSTRING("beforeTransitionIn"),::Hash_obj::__new());
	HX_STACK_LINE(37)
	this->listeners->set(HX_CSTRING("afterTransitionIn"),::Hash_obj::__new());
	HX_STACK_LINE(38)
	this->listeners->set(HX_CSTRING("afterComplete"),::Hash_obj::__new());
}
;
	return null();
}

AppHQ_obj::~AppHQ_obj() { }

Dynamic AppHQ_obj::__CreateEmpty() { return  new AppHQ_obj; }
hx::ObjectPtr< AppHQ_obj > AppHQ_obj::__new()
{  hx::ObjectPtr< AppHQ_obj > result = new AppHQ_obj();
	result->__construct();
	return result;}

Dynamic AppHQ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppHQ_obj > result = new AppHQ_obj();
	result->__construct();
	return result;}

Void AppHQ_obj::dispatchAppEvent( ){
{
		HX_STACK_PUSH("AppHQ::dispatchAppEvent","com/appframework/core/AppHQ.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(226)
		this->dispatchEvent(::com::appframework::events::AppEvent_obj::__new(this->gotoEventObj->get(HX_CSTRING("type")),false,false,this->gotoEventObj->get(HX_CSTRING("validBranch")),this->gotoEventObj->get(HX_CSTRING("fullBranch")),this->gotoEventObj->get(HX_CSTRING("src")),this->gotoEventObj->get(HX_CSTRING("flow"))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,dispatchAppEvent,(void))

Void AppHQ_obj::removeOnlyOnceListeners( ::String eventName){
{
		HX_STACK_PUSH("AppHQ::removeOnlyOnceListeners","com/appframework/core/AppHQ.hx",218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(eventName,"eventName");
		HX_STACK_LINE(218)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->listeners->get(eventName)->__Field(HX_CSTRING("keys"),true)());  __it->hasNext(); ){
			::String id = __it->next();
			{
				HX_STACK_LINE(221)
				::com::appframework::core::AppHQListener listener = this->listeners->get(eventName)->__Field(HX_CSTRING("get"),true)(id);		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(222)
				if (((bool(listener->onlyOnce) && bool(listener->dispatched)))){
					HX_STACK_LINE(222)
					this->removeListenerByID(eventName,id);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppHQ_obj,removeOnlyOnceListeners,(void))

Void AppHQ_obj::removeListenerByID( ::String eventName,::String id){
{
		HX_STACK_PUSH("AppHQ::removeListenerByID","com/appframework/core/AppHQ.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(eventName,"eventName");
		HX_STACK_ARG(id,"id");
		HX_STACK_LINE(213)
		this->removeEventListener(eventName,this->listeners->get(eventName)->__Field(HX_CSTRING("get"),true)(id)->__Field(HX_CSTRING("target"),true),null());
		HX_STACK_LINE(214)
		this->listeners->get(eventName)->__Field(HX_CSTRING("remove"),true)(id);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppHQ_obj,removeListenerByID,(void))

::com::appframework::core::AppHQListener AppHQ_obj::generateListener( ::String eventName,Dynamic target){
	HX_STACK_PUSH("AppHQ::generateListener","com/appframework/core/AppHQ.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(eventName,"eventName");
	HX_STACK_ARG(target,"target");
	HX_STACK_LINE(195)
	for(::cpp::FastIterator_obj< ::com::appframework::core::AppHQListener > *__it = ::cpp::CreateFastIterator< ::com::appframework::core::AppHQListener >(this->listeners->get(eventName)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::com::appframework::core::AppHQListener id = __it->next();
		if (((id->target == target))){
			HX_STACK_LINE(199)
			this->removeEventListener(eventName,target,null());
			HX_STACK_LINE(200)
			return id;
		}
;
	}
	HX_STACK_LINE(204)
	::com::appframework::core::AppHQListener listener = ::com::appframework::core::AppHQListener_obj::__new();		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(205)
	listener->event = eventName;
	HX_STACK_LINE(206)
	listener->target = target;
	HX_STACK_LINE(207)
	this->listeners->get(eventName)->__Field(HX_CSTRING("set"),true)(::Std_obj::string(++(this->uniqueID)),listener);
	HX_STACK_LINE(208)
	return listener;
}


HX_DEFINE_DYNAMIC_FUNC2(AppHQ_obj,generateListener,return )

Void AppHQ_obj::onEvent( ::String eventName){
{
		HX_STACK_PUSH("AppHQ::onEvent","com/appframework/core/AppHQ.hx",175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(eventName,"eventName");
		HX_STACK_LINE(176)
		bool eventHasListeners = false;		HX_STACK_VAR(eventHasListeners,"eventHasListeners");
		HX_STACK_LINE(177)
		for(::cpp::FastIterator_obj< ::com::appframework::core::AppHQListener > *__it = ::cpp::CreateFastIterator< ::com::appframework::core::AppHQListener >(this->listeners->get(eventName)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::com::appframework::core::AppHQListener id = __it->next();
			if (((id != null()))){
				HX_STACK_LINE(181)
				eventHasListeners = true;
				HX_STACK_LINE(182)
				::com::appframework::core::AppHQListener listener = id;		HX_STACK_VAR(listener,"listener");
				HX_STACK_LINE(183)
				if ((listener->onlyOnce)){
					HX_STACK_LINE(183)
					listener->dispatched = true;
				}
			}
;
		}
		HX_STACK_LINE(186)
		this->gotoEventObj->set(HX_CSTRING("type"),eventName);
		HX_STACK_LINE(187)
		if ((eventHasListeners)){
			HX_STACK_LINE(187)
			this->dispatchAppEvent();
		}
		HX_STACK_LINE(188)
		::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),(eventName + HX_CSTRING("Done")))();
		HX_STACK_LINE(189)
		this->removeOnlyOnceListeners(eventName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppHQ_obj,onEvent,(void))

Void AppHQ_obj::afterCompleteDone( ){
{
		HX_STACK_PUSH("AppHQ::afterCompleteDone","com/appframework/core/AppHQ.hx",170);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterCompleteDone,(void))

Void AppHQ_obj::afterComplete( ){
{
		HX_STACK_PUSH("AppHQ::afterComplete","com/appframework/core/AppHQ.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_LINE(166)
		this->dispatchEvent(::native::events::Event_obj::__new(::com::appframework::core::AppHQ_obj::COMPLETE,null(),null()));
		HX_STACK_LINE(167)
		this->onEvent(::com::appframework::events::AppEvent_obj::AFTER_COMPLETE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterComplete,(void))

Void AppHQ_obj::afterTransitionInDone( ){
{
		HX_STACK_PUSH("AppHQ::afterTransitionInDone","com/appframework/core/AppHQ.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_LINE(159)
		::com::appframework::flow::FlowManager_obj::afterTransitionInDone();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterTransitionInDone,(void))

Void AppHQ_obj::afterTransitionIn( ){
{
		HX_STACK_PUSH("AppHQ::afterTransitionIn","com/appframework/core/AppHQ.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_LINE(155)
		this->onEvent(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_IN);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterTransitionIn,(void))

Void AppHQ_obj::beforeTransitionInDone( ){
{
		HX_STACK_PUSH("AppHQ::beforeTransitionInDone","com/appframework/core/AppHQ.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_LINE(151)
		this->dispatchEvent(::native::events::Event_obj::__new(::com::appframework::core::AppHQ_obj::TRANSITION_IN,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeTransitionInDone,(void))

Void AppHQ_obj::beforeTransitionIn( ){
{
		HX_STACK_PUSH("AppHQ::beforeTransitionIn","com/appframework/core/AppHQ.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_LINE(147)
		this->onEvent(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_IN);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeTransitionIn,(void))

Void AppHQ_obj::afterPreloadDone( ){
{
		HX_STACK_PUSH("AppHQ::afterPreloadDone","com/appframework/core/AppHQ.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_LINE(141)
		::com::appframework::flow::FlowManager_obj::afterPreloadDone();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterPreloadDone,(void))

Void AppHQ_obj::afterPreload( ){
{
		HX_STACK_PUSH("AppHQ::afterPreload","com/appframework/core/AppHQ.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_LINE(137)
		this->onEvent(::com::appframework::events::AppEvent_obj::AFTER_PRELOAD);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterPreload,(void))

Void AppHQ_obj::beforePreloadDone( ){
{
		HX_STACK_PUSH("AppHQ::beforePreloadDone","com/appframework/core/AppHQ.hx",133);
		HX_STACK_THIS(this);
		HX_STACK_LINE(133)
		this->dispatchEvent(::native::events::Event_obj::__new(::com::appframework::core::AppHQ_obj::PRELOAD,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforePreloadDone,(void))

Void AppHQ_obj::beforePreload( ){
{
		HX_STACK_PUSH("AppHQ::beforePreload","com/appframework/core/AppHQ.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_LINE(129)
		this->onEvent(::com::appframework::events::AppEvent_obj::BEFORE_PRELOAD);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforePreload,(void))

Void AppHQ_obj::afterTransitionOutDone( ){
{
		HX_STACK_PUSH("AppHQ::afterTransitionOutDone","com/appframework/core/AppHQ.hx",123);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		::com::appframework::flow::FlowManager_obj::afterTransitionOutDone();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterTransitionOutDone,(void))

Void AppHQ_obj::afterTransitionOut( ){
{
		HX_STACK_PUSH("AppHQ::afterTransitionOut","com/appframework/core/AppHQ.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_LINE(119)
		this->onEvent(::com::appframework::events::AppEvent_obj::AFTER_TRANSITION_OUT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterTransitionOut,(void))

Void AppHQ_obj::beforeTransitionOutDone( ){
{
		HX_STACK_PUSH("AppHQ::beforeTransitionOutDone","com/appframework/core/AppHQ.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_LINE(115)
		this->dispatchEvent(::native::events::Event_obj::__new(::com::appframework::core::AppHQ_obj::TRANSITION_OUT,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeTransitionOutDone,(void))

Void AppHQ_obj::beforeTransitionOut( ){
{
		HX_STACK_PUSH("AppHQ::beforeTransitionOut","com/appframework/core/AppHQ.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_LINE(111)
		this->onEvent(::com::appframework::events::AppEvent_obj::BEFORE_TRANSITION_OUT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeTransitionOut,(void))

Void AppHQ_obj::afterGotoDone( ){
{
		HX_STACK_PUSH("AppHQ::afterGotoDone","com/appframework/core/AppHQ.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(105)
		::com::appframework::flow::FlowManager_obj::afterGoto();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterGotoDone,(void))

Void AppHQ_obj::afterGoto( ){
{
		HX_STACK_PUSH("AppHQ::afterGoto","com/appframework/core/AppHQ.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(101)
		this->onEvent(::com::appframework::events::AppEvent_obj::AFTER_GOTO);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,afterGoto,(void))

Void AppHQ_obj::beforeGotoDone( ){
{
		HX_STACK_PUSH("AppHQ::beforeGotoDone","com/appframework/core/AppHQ.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_LINE(97)
		this->gotoEventObj->set(HX_CSTRING("type"),::com::appframework::events::AppEvent_obj::GOTO);
		HX_STACK_LINE(98)
		this->dispatchAppEvent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeGotoDone,(void))

Void AppHQ_obj::beforeGoto( ){
{
		HX_STACK_PUSH("AppHQ::beforeGoto","com/appframework/core/AppHQ.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		this->onEvent(::com::appframework::events::AppEvent_obj::BEFORE_GOTO);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,beforeGoto,(void))

Void AppHQ_obj::_goto( ::String branch,::String flow){
{
		HX_STACK_PUSH("AppHQ::goto","com/appframework/core/AppHQ.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(branch,"branch");
		HX_STACK_ARG(flow,"flow");
		HX_STACK_LINE(79)
		if (((branch == null()))){
			HX_STACK_LINE(79)
			branch = HX_CSTRING("index");
		}
		HX_STACK_LINE(80)
		if (((branch.substr((int)0,::com::appframework::core::AppModel_obj::get_indexID().length) != ::com::appframework::core::AppModel_obj::get_indexID()))){
			HX_STACK_LINE(80)
			branch = ((::com::appframework::core::AppModel_obj::get_indexID() + HX_CSTRING("/")) + branch);
		}
		HX_STACK_LINE(81)
		this->gotoEventObj = ::Hash_obj::__new();
		HX_STACK_LINE(82)
		this->gotoEventObj->set(HX_CSTRING("validBranch"),::com::appframework::core::BranchTools_obj::getValidBranch(branch));
		HX_STACK_LINE(83)
		this->gotoEventObj->set(HX_CSTRING("fullBranch"),::com::appframework::core::BranchTools_obj::getFullBranch(branch));
		HX_STACK_LINE(84)
		::com::appframework::assets::PageAsset page = ::com::appframework::core::BranchTools_obj::getPage(this->gotoEventObj->get(HX_CSTRING("validBranch")));		HX_STACK_VAR(page,"page");
		HX_STACK_LINE(85)
		this->gotoEventObj->set(HX_CSTRING("src"),page->get_src());
		HX_STACK_LINE(86)
		this->gotoEventObj->set(HX_CSTRING("flow"),flow);
		HX_STACK_LINE(87)
		this->beforeGoto();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppHQ_obj,_goto,(void))

Void AppHQ_obj::removeListener( ::String eventName,Dynamic target){
{
		HX_STACK_PUSH("AppHQ::removeListener","com/appframework/core/AppHQ.hx",63);
		HX_STACK_THIS(this);
		HX_STACK_ARG(eventName,"eventName");
		HX_STACK_ARG(target,"target");
		HX_STACK_LINE(63)
		if (((this->listeners->get(eventName) != null()))){
			HX_STACK_LINE(65)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->listeners->get(eventName)->__Field(HX_CSTRING("keys"),true)());  __it->hasNext(); ){
				::String id = __it->next();
				if (((this->listeners->get(eventName)->__Field(HX_CSTRING("get"),true)(id)->__Field(HX_CSTRING("target"),true) == target))){
					HX_STACK_LINE(70)
					this->removeListenerByID(eventName,id);
					HX_STACK_LINE(71)
					break;
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppHQ_obj,removeListener,(void))

Dynamic AppHQ_obj::addListener( ::String eventName,Dynamic target,bool onlyOnce){
	HX_STACK_PUSH("AppHQ::addListener","com/appframework/core/AppHQ.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(eventName,"eventName");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(onlyOnce,"onlyOnce");
	HX_STACK_LINE(54)
	if (((this->listeners->get(eventName) != null()))){
		HX_STACK_LINE(56)
		::com::appframework::core::AppHQListener listener = this->generateListener(eventName,target);		HX_STACK_VAR(listener,"listener");
		HX_STACK_LINE(57)
		listener->onlyOnce = onlyOnce;
		HX_STACK_LINE(58)
		this->addEventListener(eventName,listener->target,null(),null(),null());
	}
	HX_STACK_LINE(60)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AppHQ_obj,addListener,return )

::String AppHQ_obj::TRANSITION_OUT;

::String AppHQ_obj::TRANSITION_IN;

::String AppHQ_obj::PRELOAD;

::String AppHQ_obj::COMPLETE;

::com::appframework::core::AppHQ AppHQ_obj::_instance;

Void AppHQ_obj::birth( ){
{
		HX_STACK_PUSH("AppHQ::birth","com/appframework/core/AppHQ.hx",42);
		HX_STACK_LINE(42)
		if (((::com::appframework::core::AppHQ_obj::_instance == null()))){
			HX_STACK_LINE(43)
			::com::appframework::core::AppHQ_obj::_instance = ::com::appframework::core::AppHQ_obj::__new();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,birth,(void))

::com::appframework::core::AppHQ AppHQ_obj::instance;

::com::appframework::core::AppHQ AppHQ_obj::get_instance( ){
	HX_STACK_PUSH("AppHQ::get_instance","com/appframework/core/AppHQ.hx",48);
	HX_STACK_LINE(48)
	return ::com::appframework::core::AppHQ_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppHQ_obj,get_instance,return )


AppHQ_obj::AppHQ_obj()
{
}

void AppHQ_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppHQ);
	HX_MARK_MEMBER_NAME(gotoEventObj,"gotoEventObj");
	HX_MARK_MEMBER_NAME(uniqueID,"uniqueID");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppHQ_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gotoEventObj,"gotoEventObj");
	HX_VISIT_MEMBER_NAME(uniqueID,"uniqueID");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppHQ_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"goto") ) { return _goto_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"birth") ) { return birth_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"PRELOAD") ) { return PRELOAD; }
		if (HX_FIELD_EQ(inName,"onEvent") ) { return onEvent_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { return COMPLETE; }
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"uniqueID") ) { return uniqueID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"afterGoto") ) { return afterGoto_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beforeGoto") ) { return beforeGoto_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"afterPreload") ) { return afterPreload_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoEventObj") ) { return gotoEventObj; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { return TRANSITION_IN; }
		if (HX_FIELD_EQ(inName,"afterComplete") ) { return afterComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"beforePreload") ) { return beforePreload_dyn(); }
		if (HX_FIELD_EQ(inName,"afterGotoDone") ) { return afterGotoDone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { return TRANSITION_OUT; }
		if (HX_FIELD_EQ(inName,"beforeGotoDone") ) { return beforeGotoDone_dyn(); }
		if (HX_FIELD_EQ(inName,"removeListener") ) { return removeListener_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dispatchAppEvent") ) { return dispatchAppEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"generateListener") ) { return generateListener_dyn(); }
		if (HX_FIELD_EQ(inName,"afterPreloadDone") ) { return afterPreloadDone_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"afterCompleteDone") ) { return afterCompleteDone_dyn(); }
		if (HX_FIELD_EQ(inName,"afterTransitionIn") ) { return afterTransitionIn_dyn(); }
		if (HX_FIELD_EQ(inName,"beforePreloadDone") ) { return beforePreloadDone_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeListenerByID") ) { return removeListenerByID_dyn(); }
		if (HX_FIELD_EQ(inName,"beforeTransitionIn") ) { return beforeTransitionIn_dyn(); }
		if (HX_FIELD_EQ(inName,"afterTransitionOut") ) { return afterTransitionOut_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"beforeTransitionOut") ) { return beforeTransitionOut_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"afterTransitionInDone") ) { return afterTransitionInDone_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"beforeTransitionInDone") ) { return beforeTransitionInDone_dyn(); }
		if (HX_FIELD_EQ(inName,"afterTransitionOutDone") ) { return afterTransitionOutDone_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeOnlyOnceListeners") ) { return removeOnlyOnceListeners_dyn(); }
		if (HX_FIELD_EQ(inName,"beforeTransitionOutDone") ) { return beforeTransitionOutDone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppHQ_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"PRELOAD") ) { PRELOAD=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"COMPLETE") ) { COMPLETE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::appframework::core::AppHQ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniqueID") ) { uniqueID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::com::appframework::core::AppHQ >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gotoEventObj") ) { gotoEventObj=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"TRANSITION_IN") ) { TRANSITION_IN=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRANSITION_OUT") ) { TRANSITION_OUT=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppHQ_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gotoEventObj"));
	outFields->push(HX_CSTRING("uniqueID"));
	outFields->push(HX_CSTRING("listeners"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRANSITION_OUT"),
	HX_CSTRING("TRANSITION_IN"),
	HX_CSTRING("PRELOAD"),
	HX_CSTRING("COMPLETE"),
	HX_CSTRING("_instance"),
	HX_CSTRING("birth"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispatchAppEvent"),
	HX_CSTRING("removeOnlyOnceListeners"),
	HX_CSTRING("removeListenerByID"),
	HX_CSTRING("generateListener"),
	HX_CSTRING("onEvent"),
	HX_CSTRING("afterCompleteDone"),
	HX_CSTRING("afterComplete"),
	HX_CSTRING("afterTransitionInDone"),
	HX_CSTRING("afterTransitionIn"),
	HX_CSTRING("beforeTransitionInDone"),
	HX_CSTRING("beforeTransitionIn"),
	HX_CSTRING("afterPreloadDone"),
	HX_CSTRING("afterPreload"),
	HX_CSTRING("beforePreloadDone"),
	HX_CSTRING("beforePreload"),
	HX_CSTRING("afterTransitionOutDone"),
	HX_CSTRING("afterTransitionOut"),
	HX_CSTRING("beforeTransitionOutDone"),
	HX_CSTRING("beforeTransitionOut"),
	HX_CSTRING("afterGotoDone"),
	HX_CSTRING("afterGoto"),
	HX_CSTRING("beforeGotoDone"),
	HX_CSTRING("beforeGoto"),
	HX_CSTRING("goto"),
	HX_CSTRING("removeListener"),
	HX_CSTRING("addListener"),
	HX_CSTRING("gotoEventObj"),
	HX_CSTRING("uniqueID"),
	HX_CSTRING("listeners"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppHQ_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppHQ_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(AppHQ_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_MARK_MEMBER_NAME(AppHQ_obj::PRELOAD,"PRELOAD");
	HX_MARK_MEMBER_NAME(AppHQ_obj::COMPLETE,"COMPLETE");
	HX_MARK_MEMBER_NAME(AppHQ_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(AppHQ_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppHQ_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::TRANSITION_OUT,"TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::TRANSITION_IN,"TRANSITION_IN");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::PRELOAD,"PRELOAD");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::COMPLETE,"COMPLETE");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(AppHQ_obj::instance,"instance");
};

Class AppHQ_obj::__mClass;

void AppHQ_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppHQ"), hx::TCanCast< AppHQ_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppHQ_obj::__boot()
{
	TRANSITION_OUT= HX_CSTRING("transitionOut");
	TRANSITION_IN= HX_CSTRING("transitionIn");
	PRELOAD= HX_CSTRING("preload");
	COMPLETE= HX_CSTRING("complete");
}

} // end namespace com
} // end namespace appframework
} // end namespace core
