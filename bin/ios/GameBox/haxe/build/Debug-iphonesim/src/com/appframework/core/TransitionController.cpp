#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_TransitionController
#include <com/appframework/core/TransitionController.h>
#endif
#ifndef INCLUDED_com_appframework_events_PageEvent
#include <com/appframework/events/PageEvent.h>
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

Void TransitionController_obj::__construct()
{
HX_STACK_PUSH("TransitionController::new","com/appframework/core/TransitionController.hx",21);
{
	HX_STACK_LINE(21)
	super::__construct(null());
}
;
	return null();
}

TransitionController_obj::~TransitionController_obj() { }

Dynamic TransitionController_obj::__CreateEmpty() { return  new TransitionController_obj; }
hx::ObjectPtr< TransitionController_obj > TransitionController_obj::__new()
{  hx::ObjectPtr< TransitionController_obj > result = new TransitionController_obj();
	result->__construct();
	return result;}

Dynamic TransitionController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransitionController_obj > result = new TransitionController_obj();
	result->__construct();
	return result;}

Void TransitionController_obj::interrupt( ){
{
		HX_STACK_PUSH("TransitionController::interrupt","com/appframework/core/TransitionController.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		if (((bool(!(this->isInterrupted)) && bool((this->transitionState > (int)0))))){
			HX_STACK_LINE(94)
			this->isInterrupted = true;
			HX_STACK_LINE(95)
			::String transitionDirection = HX_CSTRING("");		HX_STACK_VAR(transitionDirection,"transitionDirection");
			HX_STACK_LINE(96)
			if (((((int(this->transitionState) & int((int)1))) != (int)0))){
				HX_STACK_LINE(96)
				transitionDirection = HX_CSTRING("IN");
			}
			HX_STACK_LINE(97)
			if (((((int(this->transitionState) & int((int)2))) != (int)0))){
				HX_STACK_LINE(97)
				hx::AddEq(transitionDirection,HX_CSTRING("OUT"));
			}
			HX_STACK_LINE(98)
			if (((transitionDirection == HX_CSTRING("INOUT")))){
				HX_STACK_LINE(98)
				transitionDirection = HX_CSTRING("CROSS");
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransitionController_obj,interrupt,(void))

Void TransitionController_obj::pageIn( ){
{
		HX_STACK_PUSH("TransitionController::pageIn","com/appframework/core/TransitionController.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_LINE(87)
		this->inPages->__get(this->inIndex)->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,this->onTransitionInComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(88)
		this->inPages->__get(this->inIndex)->transitionIn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransitionController_obj,pageIn,(void))

Void TransitionController_obj::pageOut( ){
{
		HX_STACK_PUSH("TransitionController::pageOut","com/appframework/core/TransitionController.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(82)
		this->outPages->__get(this->outIndex)->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,this->onTransitionOutComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(83)
		this->outPages->__get(this->outIndex)->transitionOut();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransitionController_obj,pageOut,(void))

Void TransitionController_obj::onTransitionInComplete( ::com::appframework::events::PageEvent event){
{
		HX_STACK_PUSH("TransitionController::onTransitionInComplete","com/appframework/core/TransitionController.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(70)
		event->get_target()->__Field(HX_CSTRING("removeEventListener"),true)(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,this->onTransitionInComplete_dyn());
		HX_STACK_LINE(71)
		if (((bool(!(this->isInterrupted)) && bool((++(this->inIndex) < this->inPages->length))))){
			HX_STACK_LINE(73)
			this->pageIn();
			HX_STACK_LINE(74)
			return null();
		}
		HX_STACK_LINE(76)
		hx::AndEq(this->transitionState,(int)2);
		HX_STACK_LINE(77)
		this->isInterrupted = false;
		HX_STACK_LINE(78)
		this->dispatchEvent(event->clone());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransitionController_obj,onTransitionInComplete,(void))

Void TransitionController_obj::onTransitionOutComplete( ::com::appframework::events::PageEvent event){
{
		HX_STACK_PUSH("TransitionController::onTransitionOutComplete","com/appframework/core/TransitionController.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(58)
		event->get_target()->__Field(HX_CSTRING("removeEventListener"),true)(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,this->onTransitionOutComplete_dyn());
		HX_STACK_LINE(59)
		if (((bool(!(this->isInterrupted)) && bool((--(this->outIndex) > (int)-1))))){
			HX_STACK_LINE(61)
			this->pageOut();
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(64)
		hx::AndEq(this->transitionState,(int)1);
		HX_STACK_LINE(65)
		this->isInterrupted = false;
		HX_STACK_LINE(66)
		this->dispatchEvent(event->clone());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransitionController_obj,onTransitionOutComplete,(void))

Void TransitionController_obj::transitionIn( Array< ::com::appframework::assets::PageAsset > pages){
{
		HX_STACK_PUSH("TransitionController::transitionIn","com/appframework/core/TransitionController.hx",42);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pages,"pages");
		HX_STACK_LINE(43)
		hx::OrEq(this->transitionState,(int)1);
		HX_STACK_LINE(44)
		this->isInterrupted = false;
		HX_STACK_LINE(45)
		if (((pages->length > (int)0))){
			HX_STACK_LINE(47)
			this->inPages = pages;
			HX_STACK_LINE(48)
			this->inIndex = (int)0;
			HX_STACK_LINE(49)
			this->pageIn();
		}
		else{
			HX_STACK_LINE(52)
			this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransitionController_obj,transitionIn,(void))

Void TransitionController_obj::transitionOut( Array< ::com::appframework::assets::PageAsset > pages){
{
		HX_STACK_PUSH("TransitionController::transitionOut","com/appframework/core/TransitionController.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pages,"pages");
		HX_STACK_LINE(27)
		hx::OrEq(this->transitionState,(int)2);
		HX_STACK_LINE(28)
		this->isInterrupted = false;
		HX_STACK_LINE(29)
		if (((pages->length > (int)0))){
			HX_STACK_LINE(31)
			this->outPages = pages;
			HX_STACK_LINE(32)
			this->outIndex = (pages->length - (int)1);
			HX_STACK_LINE(33)
			this->pageOut();
		}
		else{
			HX_STACK_LINE(36)
			this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,null(),null()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TransitionController_obj,transitionOut,(void))


TransitionController_obj::TransitionController_obj()
{
}

void TransitionController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionController);
	HX_MARK_MEMBER_NAME(inIndex,"inIndex");
	HX_MARK_MEMBER_NAME(outIndex,"outIndex");
	HX_MARK_MEMBER_NAME(inPages,"inPages");
	HX_MARK_MEMBER_NAME(outPages,"outPages");
	HX_MARK_MEMBER_NAME(transitionState,"transitionState");
	HX_MARK_MEMBER_NAME(isInterrupted,"isInterrupted");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransitionController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inIndex,"inIndex");
	HX_VISIT_MEMBER_NAME(outIndex,"outIndex");
	HX_VISIT_MEMBER_NAME(inPages,"inPages");
	HX_VISIT_MEMBER_NAME(outPages,"outPages");
	HX_VISIT_MEMBER_NAME(transitionState,"transitionState");
	HX_VISIT_MEMBER_NAME(isInterrupted,"isInterrupted");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TransitionController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pageIn") ) { return pageIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pageOut") ) { return pageOut_dyn(); }
		if (HX_FIELD_EQ(inName,"inIndex") ) { return inIndex; }
		if (HX_FIELD_EQ(inName,"inPages") ) { return inPages; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outIndex") ) { return outIndex; }
		if (HX_FIELD_EQ(inName,"outPages") ) { return outPages; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"interrupt") ) { return interrupt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		if (HX_FIELD_EQ(inName,"isInterrupted") ) { return isInterrupted; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transitionState") ) { return transitionState; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onTransitionInComplete") ) { return onTransitionInComplete_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTransitionOutComplete") ) { return onTransitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransitionController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"inIndex") ) { inIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inPages") ) { inPages=inValue.Cast< Array< ::com::appframework::assets::PageAsset > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"outIndex") ) { outIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outPages") ) { outPages=inValue.Cast< Array< ::com::appframework::assets::PageAsset > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInterrupted") ) { isInterrupted=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"transitionState") ) { transitionState=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inIndex"));
	outFields->push(HX_CSTRING("outIndex"));
	outFields->push(HX_CSTRING("inPages"));
	outFields->push(HX_CSTRING("outPages"));
	outFields->push(HX_CSTRING("transitionState"));
	outFields->push(HX_CSTRING("isInterrupted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("interrupt"),
	HX_CSTRING("pageIn"),
	HX_CSTRING("pageOut"),
	HX_CSTRING("onTransitionInComplete"),
	HX_CSTRING("onTransitionOutComplete"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("inIndex"),
	HX_CSTRING("outIndex"),
	HX_CSTRING("inPages"),
	HX_CSTRING("outPages"),
	HX_CSTRING("transitionState"),
	HX_CSTRING("isInterrupted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransitionController_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransitionController_obj::__mClass,"__mClass");
};

Class TransitionController_obj::__mClass;

void TransitionController_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.TransitionController"), hx::TCanCast< TransitionController_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TransitionController_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
