#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppController
#include <com/appframework/core/AppController.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppHQ
#include <com/appframework/core/AppHQ.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppView
#include <com/appframework/core/AppView.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchLoader
#include <com/appframework/core/BranchLoader.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchManager
#include <com/appframework/core/BranchManager.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchTools
#include <com/appframework/core/BranchTools.h>
#endif
#ifndef INCLUDED_com_appframework_core_TransitionController
#include <com/appframework/core/TransitionController.h>
#endif
#ifndef INCLUDED_com_appframework_events_AppEvent
#include <com/appframework/events/AppEvent.h>
#endif
#ifndef INCLUDED_com_appframework_events_BranchLoaderEvent
#include <com/appframework/events/BranchLoaderEvent.h>
#endif
#ifndef INCLUDED_com_appframework_events_PageEvent
#include <com/appframework/events/PageEvent.h>
#endif
#ifndef INCLUDED_com_appframework_flow_FlowManager
#include <com/appframework/flow/FlowManager.h>
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

Void AppController_obj::__construct(::com::appframework::core::AppView av)
{
HX_STACK_PUSH("AppController::new","com/appframework/core/AppController.hx",15);
{
	HX_STACK_LINE(27)
	this->queuedFlow = HX_CSTRING("");
	HX_STACK_LINE(26)
	this->queuedBranch = HX_CSTRING("");
	HX_STACK_LINE(31)
	super::__construct(null());
	HX_STACK_LINE(32)
	this->appView = av;
	HX_STACK_LINE(33)
	this->transitionController = ::com::appframework::core::TransitionController_obj::__new();
	HX_STACK_LINE(34)
	this->branchLoader = ::com::appframework::core::BranchLoader_obj::__new();
	HX_STACK_LINE(35)
	this->branchLoader->addEventListener(::com::appframework::events::BranchLoaderEvent_obj::LOAD_PAGE,this->onLoadPage_dyn(),null(),null(),null());
	HX_STACK_LINE(36)
	this->branchLoader->addEventListener(::com::appframework::events::BranchLoaderEvent_obj::COMPLETE,this->onPreloadComplete_dyn(),null(),null(),null());
	HX_STACK_LINE(37)
	this->transitionController->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,this->onTransitionOutComplete_dyn(),null(),null(),null());
	HX_STACK_LINE(38)
	this->transitionController->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,this->onTransitionInComplete_dyn(),null(),null(),null());
}
;
	return null();
}

AppController_obj::~AppController_obj() { }

Dynamic AppController_obj::__CreateEmpty() { return  new AppController_obj; }
hx::ObjectPtr< AppController_obj > AppController_obj::__new(::com::appframework::core::AppView av)
{  hx::ObjectPtr< AppController_obj > result = new AppController_obj();
	result->__construct(av);
	return result;}

Dynamic AppController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppController_obj > result = new AppController_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AppController_obj::redirect( ){
{
		HX_STACK_PUSH("AppController::redirect","com/appframework/core/AppController.hx",177);
		HX_STACK_THIS(this);
		HX_STACK_LINE(177)
		::com::appframework::core::AppHQ_obj::get_instance()->_goto(this->queuedBranch,this->queuedFlow);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppController_obj,redirect,(void))

bool AppController_obj::checkQueuedBranch( ){
	HX_STACK_PUSH("AppController::checkQueuedBranch","com/appframework/core/AppController.hx",166);
	HX_STACK_THIS(this);
	HX_STACK_LINE(167)
	::com::appframework::core::AppController_obj::isLoading = ::com::appframework::core::AppController_obj::isTransitioning = false;
	HX_STACK_LINE(168)
	if (((this->queuedBranch.length > (int)0))){
		HX_STACK_LINE(170)
		this->redirect();
		HX_STACK_LINE(171)
		return true;
	}
	HX_STACK_LINE(173)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(AppController_obj,checkQueuedBranch,return )

Void AppController_obj::onPreloadComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("AppController::onPreloadComplete","com/appframework/core/AppController.hx",160);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(161)
		::com::appframework::core::AppController_obj::isLoading = false;
		HX_STACK_LINE(162)
		::com::appframework::flow::FlowManager_obj::preloadComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onPreloadComplete,(void))

Void AppController_obj::onComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("AppController::onComplete","com/appframework/core/AppController.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(155)
		this->checkQueuedBranch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onComplete,(void))

Void AppController_obj::onPreload( ::native::events::Event event){
{
		HX_STACK_PUSH("AppController::onPreload","com/appframework/core/AppController.hx",147);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(147)
		if ((!(this->checkQueuedBranch()))){
			HX_STACK_LINE(150)
			::com::appframework::core::AppController_obj::isLoading = true;
			HX_STACK_LINE(151)
			this->branchLoader->loadBranch(::com::appframework::core::AppController_obj::currentBranch);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onPreload,(void))

Void AppController_obj::onTransitionIn( ::native::events::Event event){
{
		HX_STACK_PUSH("AppController::onTransitionIn","com/appframework/core/AppController.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(139)
		if ((!(this->checkQueuedBranch()))){
			HX_STACK_LINE(142)
			::com::appframework::core::AppController_obj::isTransitioning = true;
			HX_STACK_LINE(143)
			this->transitionController->transitionIn(::com::appframework::core::BranchTools_obj::getPagesOfBranch(::com::appframework::core::AppController_obj::currentBranch));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onTransitionIn,(void))

Void AppController_obj::onTransitionOut( ::native::events::Event event){
{
		HX_STACK_PUSH("AppController::onTransitionOut","com/appframework/core/AppController.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(131)
		if ((!(this->checkQueuedBranch()))){
			HX_STACK_LINE(134)
			::com::appframework::core::AppController_obj::isTransitioning = true;
			HX_STACK_LINE(135)
			this->transitionController->transitionOut(::com::appframework::core::BranchManager_obj::getTransitionOutArray(::com::appframework::core::AppController_obj::currentBranch));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onTransitionOut,(void))

Void AppController_obj::onTransitionInComplete( ::com::appframework::events::PageEvent event){
{
		HX_STACK_PUSH("AppController::onTransitionInComplete","com/appframework/core/AppController.hx",125);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(126)
		::com::appframework::core::BranchManager_obj::cleanup();
		HX_STACK_LINE(127)
		::com::appframework::flow::FlowManager_obj::transitionInComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onTransitionInComplete,(void))

Void AppController_obj::onTransitionOutComplete( ::com::appframework::events::PageEvent event){
{
		HX_STACK_PUSH("AppController::onTransitionOutComplete","com/appframework/core/AppController.hx",120);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(121)
		::com::appframework::core::BranchManager_obj::cleanup();
		HX_STACK_LINE(122)
		::com::appframework::flow::FlowManager_obj::transitionOutComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onTransitionOutComplete,(void))

Void AppController_obj::onLoadPage( ::com::appframework::events::BranchLoaderEvent event){
{
		HX_STACK_PUSH("AppController::onLoadPage","com/appframework/core/AppController.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(111)
		::com::appframework::core::AppController_obj::isLoading = true;
		HX_STACK_LINE(112)
		::com::appframework::assets::PageAsset page = event->asset;		HX_STACK_VAR(page,"page");
		HX_STACK_LINE(113)
		::com::appframework::core::BranchManager_obj::addPage(page);
		HX_STACK_LINE(114)
		this->appView->addPage(page);
		HX_STACK_LINE(115)
		page->preload();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onLoadPage,(void))

Void AppController_obj::onGoto( ::com::appframework::events::AppEvent event){
{
		HX_STACK_PUSH("AppController::onGoto","com/appframework/core/AppController.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(54)
		::com::appframework::core::BranchManager_obj::cleanup();
		HX_STACK_LINE(55)
		::String validBranch = event->validBranch;		HX_STACK_VAR(validBranch,"validBranch");
		HX_STACK_LINE(57)
		if (((validBranch != ::com::appframework::core::AppController_obj::currentBranch))){
			HX_STACK_LINE(58)
			if (((bool(!(::com::appframework::core::AppController_obj::isTransitioning)) && bool(!(::com::appframework::core::AppController_obj::isLoading))))){
				HX_STACK_LINE(61)
				this->queuedBranch = HX_CSTRING("");
				HX_STACK_LINE(62)
				this->queuedFlow = HX_CSTRING("");
				HX_STACK_LINE(63)
				::String flow;		HX_STACK_VAR(flow,"flow");
				HX_STACK_LINE(64)
				if (((event->flow == null()))){
					HX_STACK_LINE(67)
					Array< ::com::appframework::assets::PageAsset > prevArray = ::com::appframework::core::BranchTools_obj::getPagesOfBranch(::com::appframework::core::AppController_obj::currentBranch);		HX_STACK_VAR(prevArray,"prevArray");
					HX_STACK_LINE(68)
					Array< ::com::appframework::assets::PageAsset > newArray = ::com::appframework::core::BranchTools_obj::getPagesOfBranch(validBranch);		HX_STACK_VAR(newArray,"newArray");
					HX_STACK_LINE(69)
					int i = (int)0;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(70)
					{
						HX_STACK_LINE(70)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						int _g = newArray->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(70)
						while(((_g1 < _g))){
							HX_STACK_LINE(70)
							int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(72)
							if (((newArray->__get(i1) != prevArray->__get(i1)))){
								HX_STACK_LINE(72)
								break;
							}
						}
					}
					HX_STACK_LINE(74)
					if (((bool((newArray->__get(i) == null())) || bool((newArray->__get(i) == null()))))){
						HX_STACK_LINE(75)
						flow = ::com::appframework::core::AppModel_obj::get_defaultFlow();
					}
					else{
						HX_STACK_LINE(79)
						flow = newArray->__get(i)->get_flow();
					}
					HX_STACK_LINE(82)
					::com::appframework::core::AppController_obj::currentBranch = validBranch;
				}
				else{
					HX_STACK_LINE(86)
					flow = event->flow;
					HX_STACK_LINE(87)
					::com::appframework::core::AppController_obj::currentBranch = validBranch;
				}
				HX_STACK_LINE(89)
				::com::appframework::flow::FlowManager_obj::init(flow);
				HX_STACK_LINE(90)
				::com::appframework::flow::FlowManager_obj::start();
			}
			else{
				HX_STACK_LINE(94)
				this->queuedBranch = event->fullBranch;
				HX_STACK_LINE(95)
				this->queuedFlow = event->flow;
				HX_STACK_LINE(96)
				if ((!(::com::appframework::core::AppController_obj::isLoading))){
					HX_STACK_LINE(97)
					this->transitionController->interrupt();
				}
				else{
					HX_STACK_LINE(101)
					this->branchLoader->interrupt();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppController_obj,onGoto,(void))

::String AppController_obj::currentBranch;

bool AppController_obj::isTransitioning;

bool AppController_obj::isLoading;

::String AppController_obj::getCurrentBranch( ){
	HX_STACK_PUSH("AppController::getCurrentBranch","com/appframework/core/AppController.hx",42);
	HX_STACK_LINE(42)
	return ::com::appframework::core::AppController_obj::currentBranch;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppController_obj,getCurrentBranch,return )

bool AppController_obj::busy;

bool AppController_obj::get_busy( ){
	HX_STACK_PUSH("AppController::get_busy","com/appframework/core/AppController.hx",48);
	HX_STACK_LINE(48)
	return (bool(::com::appframework::core::AppController_obj::isTransitioning) || bool(::com::appframework::core::AppController_obj::isLoading));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppController_obj,get_busy,return )


AppController_obj::AppController_obj()
{
}

void AppController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppController);
	HX_MARK_MEMBER_NAME(queuedFlow,"queuedFlow");
	HX_MARK_MEMBER_NAME(queuedBranch,"queuedBranch");
	HX_MARK_MEMBER_NAME(appView,"appView");
	HX_MARK_MEMBER_NAME(branchLoader,"branchLoader");
	HX_MARK_MEMBER_NAME(transitionController,"transitionController");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(queuedFlow,"queuedFlow");
	HX_VISIT_MEMBER_NAME(queuedBranch,"queuedBranch");
	HX_VISIT_MEMBER_NAME(appView,"appView");
	HX_VISIT_MEMBER_NAME(branchLoader,"branchLoader");
	HX_VISIT_MEMBER_NAME(transitionController,"transitionController");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"busy") ) { return inCallProp ? get_busy() : busy; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onGoto") ) { return onGoto_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"appView") ) { return appView; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_busy") ) { return get_busy_dyn(); }
		if (HX_FIELD_EQ(inName,"redirect") ) { return redirect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isLoading") ) { return isLoading; }
		if (HX_FIELD_EQ(inName,"onPreload") ) { return onPreload_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onLoadPage") ) { return onLoadPage_dyn(); }
		if (HX_FIELD_EQ(inName,"queuedFlow") ) { return queuedFlow; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queuedBranch") ) { return queuedBranch; }
		if (HX_FIELD_EQ(inName,"branchLoader") ) { return branchLoader; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBranch") ) { return currentBranch; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onTransitionIn") ) { return onTransitionIn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { return isTransitioning; }
		if (HX_FIELD_EQ(inName,"onTransitionOut") ) { return onTransitionOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getCurrentBranch") ) { return getCurrentBranch_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkQueuedBranch") ) { return checkQueuedBranch_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"transitionController") ) { return transitionController; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onTransitionInComplete") ) { return onTransitionInComplete_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTransitionOutComplete") ) { return onTransitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"busy") ) { busy=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"appView") ) { appView=inValue.Cast< ::com::appframework::core::AppView >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isLoading") ) { isLoading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"queuedFlow") ) { queuedFlow=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"queuedBranch") ) { queuedBranch=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"branchLoader") ) { branchLoader=inValue.Cast< ::com::appframework::core::BranchLoader >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBranch") ) { currentBranch=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isTransitioning") ) { isTransitioning=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"transitionController") ) { transitionController=inValue.Cast< ::com::appframework::core::TransitionController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("queuedFlow"));
	outFields->push(HX_CSTRING("queuedBranch"));
	outFields->push(HX_CSTRING("appView"));
	outFields->push(HX_CSTRING("branchLoader"));
	outFields->push(HX_CSTRING("transitionController"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentBranch"),
	HX_CSTRING("isTransitioning"),
	HX_CSTRING("isLoading"),
	HX_CSTRING("getCurrentBranch"),
	HX_CSTRING("busy"),
	HX_CSTRING("get_busy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("redirect"),
	HX_CSTRING("checkQueuedBranch"),
	HX_CSTRING("onPreloadComplete"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onPreload"),
	HX_CSTRING("onTransitionIn"),
	HX_CSTRING("onTransitionOut"),
	HX_CSTRING("onTransitionInComplete"),
	HX_CSTRING("onTransitionOutComplete"),
	HX_CSTRING("onLoadPage"),
	HX_CSTRING("onGoto"),
	HX_CSTRING("queuedFlow"),
	HX_CSTRING("queuedBranch"),
	HX_CSTRING("appView"),
	HX_CSTRING("branchLoader"),
	HX_CSTRING("transitionController"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppController_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppController_obj::currentBranch,"currentBranch");
	HX_MARK_MEMBER_NAME(AppController_obj::isTransitioning,"isTransitioning");
	HX_MARK_MEMBER_NAME(AppController_obj::isLoading,"isLoading");
	HX_MARK_MEMBER_NAME(AppController_obj::busy,"busy");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppController_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppController_obj::currentBranch,"currentBranch");
	HX_VISIT_MEMBER_NAME(AppController_obj::isTransitioning,"isTransitioning");
	HX_VISIT_MEMBER_NAME(AppController_obj::isLoading,"isLoading");
	HX_VISIT_MEMBER_NAME(AppController_obj::busy,"busy");
};

Class AppController_obj::__mClass;

void AppController_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppController"), hx::TCanCast< AppController_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppController_obj::__boot()
{
	currentBranch= HX_CSTRING("");
	isTransitioning= false;
	isLoading= false;
}

} // end namespace com
} // end namespace appframework
} // end namespace core
