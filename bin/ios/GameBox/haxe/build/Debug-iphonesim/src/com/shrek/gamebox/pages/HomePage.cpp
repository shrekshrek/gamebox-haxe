#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
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
#ifndef INCLUDED_com_shrek_gamebox_pages_HomePage
#include <com/shrek/gamebox/pages/HomePage.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_Pages
#include <com/shrek/gamebox/pages/Pages.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#include <com/shrek/gamebox/support/CompLib.h>
#endif
#ifndef INCLUDED_native_display_Bitmap
#include <native/display/Bitmap.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
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
#ifndef INCLUDED_native_display_PixelSnapping
#include <native/display/PixelSnapping.h>
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
#ifndef INCLUDED_native_events_TouchEvent
#include <native/events/TouchEvent.h>
#endif
#ifndef INCLUDED_native_ui_Multitouch
#include <native/ui/Multitouch.h>
#endif
#ifndef INCLUDED_native_ui_MultitouchInputMode
#include <native/ui/MultitouchInputMode.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void HomePage_obj::__construct()
{
HX_STACK_PUSH("HomePage::new","com/shrek/gamebox/pages/HomePage.hx",21);
{
	HX_STACK_LINE(51)
	this->originH = (int)760;
	HX_STACK_LINE(50)
	this->originW = (int)480;
	HX_STACK_LINE(49)
	this->stageScale = (int)0;
	HX_STACK_LINE(48)
	this->menuFontSize = (int)20;
	HX_STACK_LINE(47)
	this->menuH = (int)60;
	HX_STACK_LINE(46)
	this->menuW = (int)300;
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	this->set_alpha((int)0);
}
;
	return null();
}

HomePage_obj::~HomePage_obj() { }

Dynamic HomePage_obj::__CreateEmpty() { return  new HomePage_obj; }
hx::ObjectPtr< HomePage_obj > HomePage_obj::__new()
{  hx::ObjectPtr< HomePage_obj > result = new HomePage_obj();
	result->__construct();
	return result;}

Dynamic HomePage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HomePage_obj > result = new HomePage_obj();
	result->__construct();
	return result;}

Void HomePage_obj::onMenuClickHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("HomePage::onMenuClickHandler","com/shrek/gamebox/pages/HomePage.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(137)
		::com::appframework::api::App_obj::get_api()->_goto(::com::shrek::gamebox::pages::Pages_obj::GAME1,null());
		HX_STACK_LINE(138)
		::native::display::Sprite _btn = event->get_target();		HX_STACK_VAR(_btn,"_btn");
		HX_STACK_LINE(139)
		::String _switch_1 = (_btn->get_name());
		if (  ( _switch_1==this->menuLabels->__get((int)0))){
			HX_STACK_LINE(141)
			::com::appframework::api::App_obj::get_api()->_goto(::com::shrek::gamebox::pages::Pages_obj::GAME1,null());
		}
		else if (  ( _switch_1==this->menuLabels->__get((int)1))){
			HX_STACK_LINE(143)
			::com::appframework::api::App_obj::get_api()->_goto(::com::shrek::gamebox::pages::Pages_obj::GAME2,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomePage_obj,onMenuClickHandler,(void))

Void HomePage_obj::clearMenu( ){
{
		HX_STACK_PUSH("HomePage::clearMenu","com/shrek/gamebox/pages/HomePage.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_LINE(123)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->menuLabels->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		while(((_g1 < _g))){
			HX_STACK_LINE(123)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(125)
			::native::display::DisplayObject _btn = this->getChildByName(this->menuLabels->__get(i));		HX_STACK_VAR(_btn,"_btn");
			HX_STACK_LINE(126)
			if ((this->isMultiTouch)){
				HX_STACK_LINE(127)
				_btn->removeEventListener(::native::events::TouchEvent_obj::TOUCH_BEGIN,this->onMenuClickHandler_dyn(),null());
			}
			else{
				HX_STACK_LINE(130)
				_btn->removeEventListener(::native::events::MouseEvent_obj::CLICK,this->onMenuClickHandler_dyn(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,clearMenu,(void))

Void HomePage_obj::initMenu( ){
{
		HX_STACK_PUSH("HomePage::initMenu","com/shrek/gamebox/pages/HomePage.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_LINE(96)
		this->menuLabels = Array_obj< ::String >::__new().Add(HX_CSTRING("are you man?")).Add(HX_CSTRING("are you man too?")).Add(HX_CSTRING("Salamander")).Add(HX_CSTRING("Contra")).Add(HX_CSTRING("Tower Defense")).Add(HX_CSTRING("config")).Add(HX_CSTRING("about"));
		HX_STACK_LINE(98)
		int _len = this->menuLabels->length;		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			while(((_g < _len))){
				HX_STACK_LINE(99)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(101)
				::native::display::Sprite _btn;		HX_STACK_VAR(_btn,"_btn");
				HX_STACK_LINE(102)
				if (((i >= (int)2))){
					HX_STACK_LINE(102)
					_btn = ::com::shrek::gamebox::support::CompLib_obj::createButton(this->menuLabels->__get(i),this->menuW,this->menuH,(int)11184810,this->menuFontSize);
				}
				else{
					HX_STACK_LINE(103)
					_btn = ::com::shrek::gamebox::support::CompLib_obj::createButton(this->menuLabels->__get(i),this->menuW,this->menuH,(int)16777215,this->menuFontSize);
				}
				HX_STACK_LINE(104)
				_btn->set_name(this->menuLabels->__get(i));
				HX_STACK_LINE(105)
				_btn->set_x(this->get_stage()->get_stageWidth());
				HX_STACK_LINE(106)
				_btn->set_y(((Float(this->menuH) / Float((int)2)) + (this->menuH * i)));
				HX_STACK_LINE(107)
				_btn->set_mouseChildren(false);
				HX_STACK_LINE(108)
				if ((this->isMultiTouch)){
					HX_STACK_LINE(109)
					_btn->addEventListener(::native::events::TouchEvent_obj::TOUCH_BEGIN,this->onMenuClickHandler_dyn(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(112)
					_btn->addEventListener(::native::events::MouseEvent_obj::CLICK,this->onMenuClickHandler_dyn(),null(),null(),null());
				}
				HX_STACK_LINE(116)
				this->addChild(_btn);
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/HomePage.hx",117);
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("x") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(117)
				::com::eclecticdesignstudio::motion::Actuate_obj::tween(_btn,0.3,_Function_3_1::Block(),null(),null())->ease(::com::eclecticdesignstudio::motion::easing::Quart_obj::getEaseOut())->delay((i * 0.05));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,initMenu,(void))

Void HomePage_obj::clearBg( ){
{
		HX_STACK_PUSH("HomePage::clearBg","com/shrek/gamebox/pages/HomePage.hx",90);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,clearBg,(void))

Void HomePage_obj::initBg( ){
{
		HX_STACK_PUSH("HomePage::initBg","com/shrek/gamebox/pages/HomePage.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_LINE(85)
		this->bg = ::native::display::Bitmap_obj::__new(::nme::installer::Assets_obj::getBitmapData(HX_CSTRING("images/nav/bg.jpg"),null()),null(),null());
		HX_STACK_LINE(86)
		this->addChild(this->bg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,initBg,(void))

Void HomePage_obj::onResizeHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("HomePage::onResizeHandler","com/shrek/gamebox/pages/HomePage.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(79)
		this->stageScale = ::Math_obj::max((Float(this->get_stage()->get_stageWidth()) / Float(this->originW)),(Float(this->get_stage()->get_stageHeight()) / Float(this->originH)));
		HX_STACK_LINE(80)
		this->set_scaleX(this->set_scaleY(this->stageScale));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomePage_obj,onResizeHandler,(void))

Void HomePage_obj::clear( ){
{
		HX_STACK_PUSH("HomePage::clear","com/shrek/gamebox/pages/HomePage.hx",70);
		HX_STACK_THIS(this);
		HX_STACK_LINE(71)
		this->clearBg();
		HX_STACK_LINE(72)
		this->clearMenu();
		HX_STACK_LINE(74)
		this->get_stage()->removeEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,clear,(void))

Void HomePage_obj::init( ){
{
		HX_STACK_PUSH("HomePage::init","com/shrek/gamebox/pages/HomePage.hx",58);
		HX_STACK_THIS(this);
		HX_STACK_LINE(59)
		this->isMultiTouch = ::native::ui::Multitouch_obj::get_supportsTouchEvents();
		HX_STACK_LINE(60)
		if ((this->isMultiTouch)){
			HX_STACK_LINE(60)
			::native::ui::Multitouch_obj::set_inputMode(::native::ui::MultitouchInputMode_obj::TOUCH_POINT_dyn());
		}
		HX_STACK_LINE(62)
		this->initBg();
		HX_STACK_LINE(63)
		this->initMenu();
		HX_STACK_LINE(65)
		this->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(66)
		this->onResizeHandler(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomePage_obj,init,(void))

Void HomePage_obj::transitionOut( ){
{
		HX_STACK_PUSH("HomePage::transitionOut","com/shrek/gamebox/pages/HomePage.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		this->clear();
		HX_STACK_LINE(40)
		this->super::transitionOut();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/HomePage.hx",41);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


Void HomePage_obj::transitionIn( ){
{
		HX_STACK_PUSH("HomePage::transitionIn","com/shrek/gamebox/pages/HomePage.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->init();
		HX_STACK_LINE(34)
		this->super::transitionIn();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/HomePage.hx",35);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}



HomePage_obj::HomePage_obj()
{
}

void HomePage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HomePage);
	HX_MARK_MEMBER_NAME(isMultiTouch,"isMultiTouch");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(originH,"originH");
	HX_MARK_MEMBER_NAME(originW,"originW");
	HX_MARK_MEMBER_NAME(stageScale,"stageScale");
	HX_MARK_MEMBER_NAME(menuFontSize,"menuFontSize");
	HX_MARK_MEMBER_NAME(menuH,"menuH");
	HX_MARK_MEMBER_NAME(menuW,"menuW");
	HX_MARK_MEMBER_NAME(menuLabels,"menuLabels");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HomePage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isMultiTouch,"isMultiTouch");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(originH,"originH");
	HX_VISIT_MEMBER_NAME(originW,"originW");
	HX_VISIT_MEMBER_NAME(stageScale,"stageScale");
	HX_VISIT_MEMBER_NAME(menuFontSize,"menuFontSize");
	HX_VISIT_MEMBER_NAME(menuH,"menuH");
	HX_VISIT_MEMBER_NAME(menuW,"menuW");
	HX_VISIT_MEMBER_NAME(menuLabels,"menuLabels");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic HomePage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"menuH") ) { return menuH; }
		if (HX_FIELD_EQ(inName,"menuW") ) { return menuW; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"initBg") ) { return initBg_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clearBg") ) { return clearBg_dyn(); }
		if (HX_FIELD_EQ(inName,"originH") ) { return originH; }
		if (HX_FIELD_EQ(inName,"originW") ) { return originW; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initMenu") ) { return initMenu_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearMenu") ) { return clearMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageScale") ) { return stageScale; }
		if (HX_FIELD_EQ(inName,"menuLabels") ) { return menuLabels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isMultiTouch") ) { return isMultiTouch; }
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
		if (HX_FIELD_EQ(inName,"onMenuClickHandler") ) { return onMenuClickHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HomePage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::native::display::Bitmap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"menuH") ) { menuH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuW") ) { menuW=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originH") ) { originH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originW") ) { originW=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageScale") ) { stageScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuLabels") ) { menuLabels=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isMultiTouch") ) { isMultiTouch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuFontSize") ) { menuFontSize=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HomePage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isMultiTouch"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("originH"));
	outFields->push(HX_CSTRING("originW"));
	outFields->push(HX_CSTRING("stageScale"));
	outFields->push(HX_CSTRING("menuFontSize"));
	outFields->push(HX_CSTRING("menuH"));
	outFields->push(HX_CSTRING("menuW"));
	outFields->push(HX_CSTRING("menuLabels"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onMenuClickHandler"),
	HX_CSTRING("clearMenu"),
	HX_CSTRING("initMenu"),
	HX_CSTRING("clearBg"),
	HX_CSTRING("initBg"),
	HX_CSTRING("onResizeHandler"),
	HX_CSTRING("clear"),
	HX_CSTRING("init"),
	HX_CSTRING("isMultiTouch"),
	HX_CSTRING("bg"),
	HX_CSTRING("originH"),
	HX_CSTRING("originW"),
	HX_CSTRING("stageScale"),
	HX_CSTRING("menuFontSize"),
	HX_CSTRING("menuH"),
	HX_CSTRING("menuW"),
	HX_CSTRING("menuLabels"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HomePage_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HomePage_obj::__mClass,"__mClass");
};

Class HomePage_obj::__mClass;

void HomePage_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.HomePage"), hx::TCanCast< HomePage_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HomePage_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
