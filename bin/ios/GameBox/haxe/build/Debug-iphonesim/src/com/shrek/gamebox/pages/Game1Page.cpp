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
#ifndef INCLUDED_com_shrek_gamebox_pages_Game1Page
#include <com/shrek/gamebox/pages/Game1Page.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_Pages
#include <com/shrek/gamebox/pages/Pages.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
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
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void Game1Page_obj::__construct()
{
HX_STACK_PUSH("Game1Page::new","com/shrek/gamebox/pages/Game1Page.hx",15);
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

Game1Page_obj::~Game1Page_obj() { }

Dynamic Game1Page_obj::__CreateEmpty() { return  new Game1Page_obj; }
hx::ObjectPtr< Game1Page_obj > Game1Page_obj::__new()
{  hx::ObjectPtr< Game1Page_obj > result = new Game1Page_obj();
	result->__construct();
	return result;}

Dynamic Game1Page_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game1Page_obj > result = new Game1Page_obj();
	result->__construct();
	return result;}

Void Game1Page_obj::onClickHandler( ::native::events::MouseEvent event){
{
		HX_STACK_PUSH("Game1Page::onClickHandler","com/shrek/gamebox/pages/Game1Page.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(36)
		::com::appframework::api::App_obj::get_api()->_goto(::com::shrek::gamebox::pages::Pages_obj::HOME,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onClickHandler,(void))

Void Game1Page_obj::transitionOut( ){
{
		HX_STACK_PUSH("Game1Page::transitionOut","com/shrek/gamebox/pages/Game1Page.hx",30);
		HX_STACK_THIS(this);
		HX_STACK_LINE(31)
		this->super::transitionOut();
		HX_STACK_LINE(32)
		this->transitionOutComplete();
	}
return null();
}


Void Game1Page_obj::transitionIn( ){
{
		HX_STACK_PUSH("Game1Page::transitionIn","com/shrek/gamebox/pages/Game1Page.hx",20);
		HX_STACK_THIS(this);
		HX_STACK_LINE(21)
		this->get_graphics()->beginFill((int)255,null());
		HX_STACK_LINE(22)
		this->get_graphics()->drawRect((int)100,(int)200,(int)100,(int)100);
		HX_STACK_LINE(23)
		this->get_graphics()->endFill();
		HX_STACK_LINE(24)
		this->addEventListener(::native::events::MouseEvent_obj::CLICK,this->onClickHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(26)
		this->super::transitionIn();
		HX_STACK_LINE(27)
		this->transitionInComplete();
	}
return null();
}



Game1Page_obj::Game1Page_obj()
{
}

void Game1Page_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game1Page);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game1Page_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Game1Page_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onClickHandler") ) { return onClickHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game1Page_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Game1Page_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onClickHandler"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game1Page_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game1Page_obj::__mClass,"__mClass");
};

Class Game1Page_obj::__mClass;

void Game1Page_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.Game1Page"), hx::TCanCast< Game1Page_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Game1Page_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
