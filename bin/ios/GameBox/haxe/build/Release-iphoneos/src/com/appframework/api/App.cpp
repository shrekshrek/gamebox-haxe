#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppImpl
#include <com/appframework/core/AppImpl.h>
#endif
namespace com{
namespace appframework{
namespace api{

Void App_obj::__construct()
{
	return null();
}

App_obj::~App_obj() { }

Dynamic App_obj::__CreateEmpty() { return  new App_obj; }
hx::ObjectPtr< App_obj > App_obj::__new()
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

Dynamic App_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< App_obj > result = new App_obj();
	result->__construct();
	return result;}

::com::appframework::core::AppImpl App_obj::impl;

::String App_obj::TOP;

::String App_obj::MIDDLE;

::String App_obj::BOTTOM;

::String App_obj::NORMAL;

::String App_obj::REVERSE;

::String App_obj::CROSS;

::com::appframework::core::AppImpl App_obj::api;

::com::appframework::core::AppImpl App_obj::get_api( ){
	HX_STACK_PUSH("App::get_api","com/appframework/api/App.hx",23);
	HX_STACK_LINE(23)
	return ::com::appframework::api::App_obj::impl;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(App_obj,get_api,return )


App_obj::App_obj()
{
}

void App_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(App);
	HX_MARK_END_CLASS();
}

void App_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic App_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { return TOP; }
		if (HX_FIELD_EQ(inName,"api") ) { return inCallProp ? get_api() : api; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"impl") ) { return impl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CROSS") ) { return CROSS; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { return MIDDLE; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { return BOTTOM; }
		if (HX_FIELD_EQ(inName,"NORMAL") ) { return NORMAL; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REVERSE") ) { return REVERSE; }
		if (HX_FIELD_EQ(inName,"get_api") ) { return get_api_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic App_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"api") ) { api=inValue.Cast< ::com::appframework::core::AppImpl >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"impl") ) { impl=inValue.Cast< ::com::appframework::core::AppImpl >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CROSS") ) { CROSS=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"MIDDLE") ) { MIDDLE=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NORMAL") ) { NORMAL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"REVERSE") ) { REVERSE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void App_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("impl"),
	HX_CSTRING("TOP"),
	HX_CSTRING("MIDDLE"),
	HX_CSTRING("BOTTOM"),
	HX_CSTRING("NORMAL"),
	HX_CSTRING("REVERSE"),
	HX_CSTRING("CROSS"),
	HX_CSTRING("api"),
	HX_CSTRING("get_api"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(App_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(App_obj::impl,"impl");
	HX_MARK_MEMBER_NAME(App_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(App_obj::MIDDLE,"MIDDLE");
	HX_MARK_MEMBER_NAME(App_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(App_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(App_obj::REVERSE,"REVERSE");
	HX_MARK_MEMBER_NAME(App_obj::CROSS,"CROSS");
	HX_MARK_MEMBER_NAME(App_obj::api,"api");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(App_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(App_obj::impl,"impl");
	HX_VISIT_MEMBER_NAME(App_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(App_obj::MIDDLE,"MIDDLE");
	HX_VISIT_MEMBER_NAME(App_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(App_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(App_obj::REVERSE,"REVERSE");
	HX_VISIT_MEMBER_NAME(App_obj::CROSS,"CROSS");
	HX_VISIT_MEMBER_NAME(App_obj::api,"api");
};

Class App_obj::__mClass;

void App_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.api.App"), hx::TCanCast< App_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void App_obj::__boot()
{
	TOP= HX_CSTRING("top");
	MIDDLE= HX_CSTRING("middle");
	BOTTOM= HX_CSTRING("bottom");
	NORMAL= HX_CSTRING("normal");
	REVERSE= HX_CSTRING("reverse");
	CROSS= HX_CSTRING("cross");
}

} // end namespace com
} // end namespace appframework
} // end namespace api
