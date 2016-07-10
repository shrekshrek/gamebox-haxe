#include <hxcpp.h>

#ifndef INCLUDED_com_shrek_gamebox_pages_Pages
#include <com/shrek/gamebox/pages/Pages.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void Pages_obj::__construct()
{
	return null();
}

Pages_obj::~Pages_obj() { }

Dynamic Pages_obj::__CreateEmpty() { return  new Pages_obj; }
hx::ObjectPtr< Pages_obj > Pages_obj::__new()
{  hx::ObjectPtr< Pages_obj > result = new Pages_obj();
	result->__construct();
	return result;}

Dynamic Pages_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pages_obj > result = new Pages_obj();
	result->__construct();
	return result;}

::String Pages_obj::HOME;

::String Pages_obj::GAME1;

::String Pages_obj::GAME2;

::String Pages_obj::CONFIG;

::String Pages_obj::ABOUT;


Pages_obj::Pages_obj()
{
}

void Pages_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pages);
	HX_MARK_END_CLASS();
}

void Pages_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Pages_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"HOME") ) { return HOME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"GAME1") ) { return GAME1; }
		if (HX_FIELD_EQ(inName,"GAME2") ) { return GAME2; }
		if (HX_FIELD_EQ(inName,"ABOUT") ) { return ABOUT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CONFIG") ) { return CONFIG; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pages_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"GAME1") ) { GAME1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GAME2") ) { GAME2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ABOUT") ) { ABOUT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"CONFIG") ) { CONFIG=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pages_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HOME"),
	HX_CSTRING("GAME1"),
	HX_CSTRING("GAME2"),
	HX_CSTRING("CONFIG"),
	HX_CSTRING("ABOUT"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pages_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pages_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Pages_obj::GAME1,"GAME1");
	HX_MARK_MEMBER_NAME(Pages_obj::GAME2,"GAME2");
	HX_MARK_MEMBER_NAME(Pages_obj::CONFIG,"CONFIG");
	HX_MARK_MEMBER_NAME(Pages_obj::ABOUT,"ABOUT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pages_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pages_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Pages_obj::GAME1,"GAME1");
	HX_VISIT_MEMBER_NAME(Pages_obj::GAME2,"GAME2");
	HX_VISIT_MEMBER_NAME(Pages_obj::CONFIG,"CONFIG");
	HX_VISIT_MEMBER_NAME(Pages_obj::ABOUT,"ABOUT");
};

Class Pages_obj::__mClass;

void Pages_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.Pages"), hx::TCanCast< Pages_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Pages_obj::__boot()
{
	HOME= HX_CSTRING("index/home");
	GAME1= HX_CSTRING("index/nav/game1");
	GAME2= HX_CSTRING("index/nav/game2");
	CONFIG= HX_CSTRING("index/nav/config");
	ABOUT= HX_CSTRING("index/nav/about");
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
