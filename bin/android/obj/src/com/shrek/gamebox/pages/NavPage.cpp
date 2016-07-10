#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppImpl
#include <com/appframework/core/AppImpl.h>
#endif
#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_Actuate
#include <com/eclecticdesignstudio/motion/Actuate.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_actuators_GenericActuator
#include <com/eclecticdesignstudio/motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_actuators_IGenericActuator
#include <com/eclecticdesignstudio/motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_IEasing
#include <com/eclecticdesignstudio/motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_Quart
#include <com/eclecticdesignstudio/motion/easing/Quart.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_model_Model
#include <com/shrek/gamebox/model/Model.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_NavPage
#include <com/shrek/gamebox/pages/NavPage.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_Pages
#include <com/shrek/gamebox/pages/Pages.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#include <com/shrek/gamebox/support/CompLib.h>
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
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void NavPage_obj::__construct()
{
HX_STACK_PUSH("NavPage::new","com/shrek/gamebox/pages/NavPage.hx",18);
{
	HX_STACK_LINE(45)
	this->menuFontSize = (int)24;
	HX_STACK_LINE(44)
	this->menuH = (int)64;
	HX_STACK_LINE(43)
	this->menuW = (int)400;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(25)
	this->set_alpha((int)0);
}
;
	return null();
}

NavPage_obj::~NavPage_obj() { }

Dynamic NavPage_obj::__CreateEmpty() { return  new NavPage_obj; }
hx::ObjectPtr< NavPage_obj > NavPage_obj::__new()
{  hx::ObjectPtr< NavPage_obj > result = new NavPage_obj();
	result->__construct();
	return result;}

Dynamic NavPage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NavPage_obj > result = new NavPage_obj();
	result->__construct();
	return result;}

Void NavPage_obj::onBackClickHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("NavPage::onBackClickHandler","com/shrek/gamebox/pages/NavPage.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(73)
		::com::appframework::api::App_obj::get_api()->_goto(::com::shrek::gamebox::pages::Pages_obj::HOME,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NavPage_obj,onBackClickHandler,(void))

Void NavPage_obj::onResizeHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("NavPage::onResizeHandler","com/shrek/gamebox/pages/NavPage.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(68)
		this->set_scaleX(this->set_scaleY(::com::shrek::gamebox::model::Model_obj::get_instance()->stageScale));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NavPage_obj,onResizeHandler,(void))

Void NavPage_obj::clear( ){
{
		HX_STACK_PUSH("NavPage::clear","com/shrek/gamebox/pages/NavPage.hx",60);
		HX_STACK_THIS(this);
		HX_STACK_LINE(61)
		this->backBtn->removeEventListener(::native::events::MouseEvent_obj::CLICK,this->onBackClickHandler_dyn(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ::com::shrek::gamebox::pages::NavPage_obj *__this){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/NavPage.hx",62);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , -(__this->menuH),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(this->backBtn,0.3,_Function_1_1::Block(this),null(),null())->ease(::com::eclecticdesignstudio::motion::easing::Quart_obj::getEaseOut());
		HX_STACK_LINE(64)
		this->get_stage()->removeEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NavPage_obj,clear,(void))

Void NavPage_obj::init( ){
{
		HX_STACK_PUSH("NavPage::init","com/shrek/gamebox/pages/NavPage.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		this->backBtn = ::com::shrek::gamebox::support::CompLib_obj::createButton(HX_CSTRING("back"),this->menuW,this->menuH,(int)16777215,this->menuFontSize);
		HX_STACK_LINE(50)
		this->backBtn->addEventListener(::native::events::MouseEvent_obj::CLICK,this->onBackClickHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(51)
		this->backBtn->set_y(-(this->menuH));
		HX_STACK_LINE(52)
		this->addChild(this->backBtn);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/NavPage.hx",53);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(this->backBtn,0.3,_Function_1_1::Block(),null(),null())->ease(::com::eclecticdesignstudio::motion::easing::Quart_obj::getEaseOut());
		HX_STACK_LINE(55)
		this->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(56)
		this->onResizeHandler(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NavPage_obj,init,(void))

Void NavPage_obj::transitionOut( ){
{
		HX_STACK_PUSH("NavPage::transitionOut","com/shrek/gamebox/pages/NavPage.hx",35);
		HX_STACK_THIS(this);
		HX_STACK_LINE(36)
		this->clear();
		HX_STACK_LINE(37)
		this->super::transitionOut();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/NavPage.hx",38);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(38)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


Void NavPage_obj::transitionIn( ){
{
		HX_STACK_PUSH("NavPage::transitionIn","com/shrek/gamebox/pages/NavPage.hx",29);
		HX_STACK_THIS(this);
		HX_STACK_LINE(30)
		this->init();
		HX_STACK_LINE(31)
		this->super::transitionIn();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/NavPage.hx",32);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}



NavPage_obj::NavPage_obj()
{
}

void NavPage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NavPage);
	HX_MARK_MEMBER_NAME(menuFontSize,"menuFontSize");
	HX_MARK_MEMBER_NAME(menuH,"menuH");
	HX_MARK_MEMBER_NAME(menuW,"menuW");
	HX_MARK_MEMBER_NAME(backBtn,"backBtn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NavPage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuFontSize,"menuFontSize");
	HX_VISIT_MEMBER_NAME(menuH,"menuH");
	HX_VISIT_MEMBER_NAME(menuW,"menuW");
	HX_VISIT_MEMBER_NAME(backBtn,"backBtn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic NavPage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"menuH") ) { return menuH; }
		if (HX_FIELD_EQ(inName,"menuW") ) { return menuW; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backBtn") ) { return backBtn; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"menuFontSize") ) { return menuFontSize; }
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onResizeHandler") ) { return onResizeHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onBackClickHandler") ) { return onBackClickHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NavPage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"menuH") ) { menuH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuW") ) { menuW=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backBtn") ) { backBtn=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"menuFontSize") ) { menuFontSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NavPage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("menuFontSize"));
	outFields->push(HX_CSTRING("menuH"));
	outFields->push(HX_CSTRING("menuW"));
	outFields->push(HX_CSTRING("backBtn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onBackClickHandler"),
	HX_CSTRING("onResizeHandler"),
	HX_CSTRING("clear"),
	HX_CSTRING("init"),
	HX_CSTRING("menuFontSize"),
	HX_CSTRING("menuH"),
	HX_CSTRING("menuW"),
	HX_CSTRING("backBtn"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NavPage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NavPage_obj::__mClass,"__mClass");
};

Class NavPage_obj::__mClass;

void NavPage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.NavPage"), hx::TCanCast< NavPage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NavPage_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
