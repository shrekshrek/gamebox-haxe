#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppView
#include <com/appframework/core/AppView.h>
#endif
#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
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

Void AppView_obj::__construct()
{
HX_STACK_PUSH("AppView::new","com/appframework/core/AppView.hx",23);
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->BOTTOM = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(26)
	this->MIDDLE = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(27)
	this->TOP = ::native::display::Sprite_obj::__new();
	HX_STACK_LINE(29)
	::com::appframework::core::AppView_obj::depths = ::Hash_obj::__new();
	HX_STACK_LINE(30)
	::com::appframework::core::AppView_obj::depths->set(::com::appframework::api::App_obj::BOTTOM,this->BOTTOM);
	HX_STACK_LINE(31)
	::com::appframework::core::AppView_obj::depths->set(::com::appframework::api::App_obj::MIDDLE,this->MIDDLE);
	HX_STACK_LINE(32)
	::com::appframework::core::AppView_obj::depths->set(::com::appframework::api::App_obj::TOP,this->TOP);
	HX_STACK_LINE(34)
	this->BOTTOM->set_name(HX_CSTRING("BOTTOM"));
	HX_STACK_LINE(35)
	this->MIDDLE->set_name(HX_CSTRING("MIDDLE"));
	HX_STACK_LINE(36)
	this->TOP->set_name(HX_CSTRING("TOP"));
	HX_STACK_LINE(38)
	this->set_name(HX_CSTRING("[AppView]"));
	HX_STACK_LINE(39)
	this->addEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null(),null(),null());
	HX_STACK_LINE(40)
	this->set_mouseEnabled(this->BOTTOM->set_mouseEnabled(this->MIDDLE->set_mouseEnabled(this->TOP->set_mouseEnabled(false))));
	HX_STACK_LINE(42)
	::com::appframework::core::AppView_obj::_instance = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

AppView_obj::~AppView_obj() { }

Dynamic AppView_obj::__CreateEmpty() { return  new AppView_obj; }
hx::ObjectPtr< AppView_obj > AppView_obj::__new()
{  hx::ObjectPtr< AppView_obj > result = new AppView_obj();
	result->__construct();
	return result;}

Dynamic AppView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppView_obj > result = new AppView_obj();
	result->__construct();
	return result;}

Void AppView_obj::addPage( ::com::appframework::assets::PageAsset page){
{
		HX_STACK_PUSH("AppView::addPage","com/appframework/core/AppView.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(page,"page");
		HX_STACK_LINE(63)
		::native::display::Sprite _depth = ::com::appframework::core::AppView_obj::depths->get(page->get_depth());		HX_STACK_VAR(_depth,"_depth");
		HX_STACK_LINE(64)
		if (((_depth == null()))){
			HX_STACK_LINE(65)
			this->MIDDLE->addChild(page->get_page());
		}
		else{
			HX_STACK_LINE(68)
			_depth->addChild(page->get_page());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppView_obj,addPage,(void))

Void AppView_obj::onAddedToStage( ::native::events::Event event){
{
		HX_STACK_PUSH("AppView::onAddedToStage","com/appframework/core/AppView.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(52)
		this->removeEventListener(::native::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null());
		HX_STACK_LINE(53)
		this->addChild(this->BOTTOM);
		HX_STACK_LINE(54)
		this->addChild(this->MIDDLE);
		HX_STACK_LINE(55)
		this->addChild(this->TOP);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppView_obj,onAddedToStage,(void))

::Hash AppView_obj::depths;

::com::appframework::core::AppView AppView_obj::_instance;

::com::appframework::core::AppView AppView_obj::instance( ){
	HX_STACK_PUSH("AppView::instance","com/appframework/core/AppView.hx",46);
	HX_STACK_LINE(46)
	return ::com::appframework::core::AppView_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppView_obj,instance,return )

::native::display::Sprite AppView_obj::getDepthContainer( ::String name){
	HX_STACK_PUSH("AppView::getDepthContainer","com/appframework/core/AppView.hx",58);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(58)
	return ::com::appframework::core::AppView_obj::depths->get(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppView_obj,getDepthContainer,return )


AppView_obj::AppView_obj()
{
}

void AppView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppView);
	HX_MARK_MEMBER_NAME(TOP,"TOP");
	HX_MARK_MEMBER_NAME(MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(BOTTOM,"BOTTOM");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(TOP,"TOP");
	HX_VISIT_MEMBER_NAME(MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(BOTTOM,"BOTTOM");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { return TOP; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"depths") ) { return depths; }
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { return MIDDLE; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { return BOTTOM; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return addPage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getDepthContainer") ) { return getDepthContainer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"depths") ) { depths=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { MIDDLE=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::com::appframework::core::AppView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("TOP"));
	outFields->push(HX_CSTRING("MIDDLE"));
	outFields->push(HX_CSTRING("BOTTOM"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("depths"),
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("getDepthContainer"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("addPage"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("TOP"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("BOTTOM"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppView_obj::depths,"depths");
	HX_MARK_MEMBER_NAME(AppView_obj::_instance,"_instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppView_obj::depths,"depths");
	HX_VISIT_MEMBER_NAME(AppView_obj::_instance,"_instance");
};

Class AppView_obj::__mClass;

void AppView_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppView"), hx::TCanCast< AppView_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppView_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
