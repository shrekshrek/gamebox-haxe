#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchIterator
#include <com/appframework/core/BranchIterator.h>
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

Void BranchIterator_obj::__construct()
{
	return null();
}

BranchIterator_obj::~BranchIterator_obj() { }

Dynamic BranchIterator_obj::__CreateEmpty() { return  new BranchIterator_obj; }
hx::ObjectPtr< BranchIterator_obj > BranchIterator_obj::__new()
{  hx::ObjectPtr< BranchIterator_obj > result = new BranchIterator_obj();
	result->__construct();
	return result;}

Dynamic BranchIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BranchIterator_obj > result = new BranchIterator_obj();
	result->__construct();
	return result;}

Array< ::com::appframework::assets::PageAsset > BranchIterator_obj::items;

int BranchIterator_obj::index;

int BranchIterator_obj::init( ::String branch){
	HX_STACK_PUSH("BranchIterator::init","com/appframework/core/BranchIterator.hx",15);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(16)
	Array< ::String > branchArray = branch.split(HX_CSTRING("/"));		HX_STACK_VAR(branchArray,"branchArray");
	HX_STACK_LINE(17)
	::com::appframework::core::BranchIterator_obj::items = Array_obj< ::com::appframework::assets::PageAsset >::__new();
	HX_STACK_LINE(18)
	::com::appframework::core::BranchIterator_obj::index = (int)-1;
	HX_STACK_LINE(19)
	::com::appframework::assets::PageAsset page = ::com::appframework::core::AppModel_obj::get_tree();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(20)
	::com::appframework::core::BranchIterator_obj::addPage(page);
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = branchArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		while(((_g1 < _g))){
			HX_STACK_LINE(21)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(23)
			page = page->get_children()->get(branchArray->__get(i));
			HX_STACK_LINE(24)
			::com::appframework::core::BranchIterator_obj::addPage(page);
		}
	}
	HX_STACK_LINE(26)
	return ::com::appframework::core::BranchIterator_obj::items->length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchIterator_obj,init,return )

::com::appframework::assets::PageAsset BranchIterator_obj::next( ){
	HX_STACK_PUSH("BranchIterator::next","com/appframework/core/BranchIterator.hx",29);
	HX_STACK_LINE(30)
	if (((++(::com::appframework::core::BranchIterator_obj::index) < ::com::appframework::core::BranchIterator_obj::items->length))){
		HX_STACK_LINE(30)
		return ::com::appframework::core::BranchIterator_obj::items->__get(::com::appframework::core::BranchIterator_obj::index);
	}
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BranchIterator_obj,next,return )

Void BranchIterator_obj::addPage( ::com::appframework::assets::PageAsset page){
{
		HX_STACK_PUSH("BranchIterator::addPage","com/appframework/core/BranchIterator.hx",34);
		HX_STACK_ARG(page,"page");
		HX_STACK_LINE(34)
		::com::appframework::core::BranchIterator_obj::items->push(page);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchIterator_obj,addPage,(void))


BranchIterator_obj::BranchIterator_obj()
{
}

void BranchIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BranchIterator);
	HX_MARK_END_CLASS();
}

void BranchIterator_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BranchIterator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return addPage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BranchIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< Array< ::com::appframework::assets::PageAsset > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BranchIterator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("items"),
	HX_CSTRING("index"),
	HX_CSTRING("init"),
	HX_CSTRING("next"),
	HX_CSTRING("addPage"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchIterator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BranchIterator_obj::items,"items");
	HX_MARK_MEMBER_NAME(BranchIterator_obj::index,"index");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchIterator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BranchIterator_obj::items,"items");
	HX_VISIT_MEMBER_NAME(BranchIterator_obj::index,"index");
};

Class BranchIterator_obj::__mClass;

void BranchIterator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.BranchIterator"), hx::TCanCast< BranchIterator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BranchIterator_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
