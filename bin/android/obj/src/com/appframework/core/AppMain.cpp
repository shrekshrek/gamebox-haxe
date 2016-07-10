#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
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
#ifndef INCLUDED_native_display_MovieClip
#include <native/display/MovieClip.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
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
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
namespace com{
namespace appframework{
namespace core{

Void AppMain_obj::__construct()
{
HX_STACK_PUSH("AppMain::new","com/appframework/core/AppMain.hx",13);
{
	HX_STACK_LINE(21)
	this->__HEIGHT = (int)0;
	HX_STACK_LINE(20)
	this->__WIDTH = (int)0;
	HX_STACK_LINE(19)
	this->alignCount = (int)0;
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(30)
	::com::appframework::core::AppMain_obj::_instance = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(35)
	this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null(),null(),null());
}
;
	return null();
}

AppMain_obj::~AppMain_obj() { }

Dynamic AppMain_obj::__CreateEmpty() { return  new AppMain_obj; }
hx::ObjectPtr< AppMain_obj > AppMain_obj::__new()
{  hx::ObjectPtr< AppMain_obj > result = new AppMain_obj();
	result->__construct();
	return result;}

Dynamic AppMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppMain_obj > result = new AppMain_obj();
	result->__construct();
	return result;}

Void AppMain_obj::onResize( ::native::events::Event event){
{
		HX_STACK_PUSH("AppMain::onResize","com/appframework/core/AppMain.hx",110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMain_obj,onResize,(void))

Void AppMain_obj::alignEnterFrame( ::native::events::Event event){
{
		HX_STACK_PUSH("AppMain::alignEnterFrame","com/appframework/core/AppMain.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(103)
		if (((this->view != null()))){
			HX_STACK_LINE(106)
			this->onResize(::native::events::Event_obj::__new(::native::events::Event_obj::RESIZE,null(),null()));
			HX_STACK_LINE(107)
			if ((((this->alignCount)++ > (int)2))){
				HX_STACK_LINE(107)
				this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->alignEnterFrame_dyn(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMain_obj,alignEnterFrame,(void))

Void AppMain_obj::alignSite( int w,int h){
{
		HX_STACK_PUSH("AppMain::alignSite","com/appframework/core/AppMain.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(w,"w");
		HX_STACK_ARG(h,"h");
		HX_STACK_LINE(97)
		this->__WIDTH = w;
		HX_STACK_LINE(98)
		this->__HEIGHT = h;
		HX_STACK_LINE(99)
		this->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(100)
		this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->alignEnterFrame_dyn(),false,(int)0,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AppMain_obj,alignSite,(void))

Void AppMain_obj::init( ){
{
		HX_STACK_PUSH("AppMain::init","com/appframework/core/AppMain.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_LINE(91)
		this->initComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppMain_obj,init,(void))

Void AppMain_obj::initComplete( ){
{
		HX_STACK_PUSH("AppMain::initComplete","com/appframework/core/AppMain.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_LINE(86)
		::com::appframework::core::AppHQ_obj::get_instance()->_goto(::com::appframework::core::AppModel_obj::get_indexID(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppMain_obj,initComplete,(void))

Void AppMain_obj::onAppModelComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("AppMain::onAppModelComplete","com/appframework/core/AppMain.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(73)
		this->addChild(this->view);
		HX_STACK_LINE(74)
		this->controller = ::com::appframework::core::AppController_obj::__new(this->view);
		HX_STACK_LINE(75)
		::com::appframework::core::AppHQ_obj::birth();
		HX_STACK_LINE(76)
		::com::appframework::core::AppHQ_obj::get_instance()->addEventListener(::com::appframework::events::AppEvent_obj::GOTO,this->controller->onGoto_dyn(),null(),null(),null());
		HX_STACK_LINE(77)
		::com::appframework::core::AppHQ_obj::get_instance()->addEventListener(::com::appframework::core::AppHQ_obj::TRANSITION_OUT,this->controller->onTransitionOut_dyn(),null(),null(),null());
		HX_STACK_LINE(78)
		::com::appframework::core::AppHQ_obj::get_instance()->addEventListener(::com::appframework::core::AppHQ_obj::TRANSITION_IN,this->controller->onTransitionIn_dyn(),null(),null(),null());
		HX_STACK_LINE(79)
		::com::appframework::core::AppHQ_obj::get_instance()->addEventListener(::com::appframework::core::AppHQ_obj::PRELOAD,this->controller->onPreload_dyn(),null(),null(),null());
		HX_STACK_LINE(80)
		::com::appframework::core::AppHQ_obj::get_instance()->addEventListener(::com::appframework::core::AppHQ_obj::COMPLETE,this->controller->onComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(82)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMain_obj,onAppModelComplete,(void))

Void AppMain_obj::loadSiteXML( ){
{
		HX_STACK_PUSH("AppMain::loadSiteXML","com/appframework/core/AppMain.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		this->model->load(this->appXML);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppMain_obj,loadSiteXML,(void))

Void AppMain_obj::startApp( ){
{
		HX_STACK_PUSH("AppMain::startApp","com/appframework/core/AppMain.hx",57);
		HX_STACK_THIS(this);
		HX_STACK_LINE(58)
		this->__WIDTH = ::nme::Lib_obj::get_current()->get_stage()->get_stageWidth();
		HX_STACK_LINE(59)
		this->__HEIGHT = ::nme::Lib_obj::get_current()->get_stage()->get_stageHeight();
		HX_STACK_LINE(60)
		this->model = ::com::appframework::core::AppModel_obj::__new();
		HX_STACK_LINE(61)
		this->view = ::com::appframework::core::AppView_obj::__new();
		HX_STACK_LINE(62)
		::com::appframework::api::App_obj::impl = ::com::appframework::core::AppImpl_obj::birth();
		HX_STACK_LINE(63)
		this->model->addEventListener(::native::events::Event_obj::COMPLETE,this->onAppModelComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(64)
		this->loadSiteXML();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppMain_obj,startApp,(void))

Void AppMain_obj::onAddedToStage( ::native::events::Event event){
{
		HX_STACK_PUSH("AppMain::onAddedToStage","com/appframework/core/AppMain.hx",46);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(50)
		this->removeEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null());
		HX_STACK_LINE(53)
		this->startApp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppMain_obj,onAddedToStage,(void))

::com::appframework::core::AppMain AppMain_obj::_instance;

::com::appframework::core::AppMain AppMain_obj::instance;

::com::appframework::core::AppMain AppMain_obj::get_instance( ){
	HX_STACK_PUSH("AppMain::get_instance","com/appframework/core/AppMain.hx",41);
	HX_STACK_LINE(41)
	return ::com::appframework::core::AppMain_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppMain_obj,get_instance,return )


AppMain_obj::AppMain_obj()
{
}

void AppMain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppMain);
	HX_MARK_MEMBER_NAME(appXML,"appXML");
	HX_MARK_MEMBER_NAME(__HEIGHT,"__HEIGHT");
	HX_MARK_MEMBER_NAME(__WIDTH,"__WIDTH");
	HX_MARK_MEMBER_NAME(alignCount,"alignCount");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(controller,"controller");
	HX_MARK_MEMBER_NAME(model,"model");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppMain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(appXML,"appXML");
	HX_VISIT_MEMBER_NAME(__HEIGHT,"__HEIGHT");
	HX_VISIT_MEMBER_NAME(__WIDTH,"__WIDTH");
	HX_VISIT_MEMBER_NAME(alignCount,"alignCount");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(controller,"controller");
	HX_VISIT_MEMBER_NAME(model,"model");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppMain_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"view") ) { return view; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return model; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"appXML") ) { return appXML; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__WIDTH") ) { return __WIDTH; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"startApp") ) { return startApp_dyn(); }
		if (HX_FIELD_EQ(inName,"__HEIGHT") ) { return __HEIGHT; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"alignSite") ) { return alignSite_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignCount") ) { return alignCount; }
		if (HX_FIELD_EQ(inName,"controller") ) { return controller; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadSiteXML") ) { return loadSiteXML_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"initComplete") ) { return initComplete_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alignEnterFrame") ) { return alignEnterFrame_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onAppModelComplete") ) { return onAppModelComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppMain_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::com::appframework::core::AppView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast< ::com::appframework::core::AppModel >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"appXML") ) { appXML=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__WIDTH") ) { __WIDTH=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::appframework::core::AppMain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__HEIGHT") ) { __HEIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::com::appframework::core::AppMain >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignCount") ) { alignCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controller") ) { controller=inValue.Cast< ::com::appframework::core::AppController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppMain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("appXML"));
	outFields->push(HX_CSTRING("__HEIGHT"));
	outFields->push(HX_CSTRING("__WIDTH"));
	outFields->push(HX_CSTRING("alignCount"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("controller"));
	outFields->push(HX_CSTRING("model"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onResize"),
	HX_CSTRING("alignEnterFrame"),
	HX_CSTRING("alignSite"),
	HX_CSTRING("init"),
	HX_CSTRING("initComplete"),
	HX_CSTRING("onAppModelComplete"),
	HX_CSTRING("loadSiteXML"),
	HX_CSTRING("startApp"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("appXML"),
	HX_CSTRING("__HEIGHT"),
	HX_CSTRING("__WIDTH"),
	HX_CSTRING("alignCount"),
	HX_CSTRING("view"),
	HX_CSTRING("controller"),
	HX_CSTRING("model"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppMain_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(AppMain_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppMain_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(AppMain_obj::instance,"instance");
};

Class AppMain_obj::__mClass;

void AppMain_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppMain"), hx::TCanCast< AppMain_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppMain_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
