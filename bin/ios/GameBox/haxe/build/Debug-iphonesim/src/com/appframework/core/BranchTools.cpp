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
#ifndef INCLUDED_com_appframework_core_BranchTools
#include <com/appframework/core/BranchTools.h>
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

Void BranchTools_obj::__construct()
{
	return null();
}

BranchTools_obj::~BranchTools_obj() { }

Dynamic BranchTools_obj::__CreateEmpty() { return  new BranchTools_obj; }
hx::ObjectPtr< BranchTools_obj > BranchTools_obj::__new()
{  hx::ObjectPtr< BranchTools_obj > result = new BranchTools_obj();
	result->__construct();
	return result;}

Dynamic BranchTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BranchTools_obj > result = new BranchTools_obj();
	result->__construct();
	return result;}

::com::appframework::assets::PageAsset BranchTools_obj::getPage( ::String branch){
	HX_STACK_PUSH("BranchTools::getPage","com/appframework/core/BranchTools.hx",12);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(13)
	Array< ::String > branchArray = branch.split(HX_CSTRING("/"));		HX_STACK_VAR(branchArray,"branchArray");
	HX_STACK_LINE(14)
	::com::appframework::assets::PageAsset page = ::com::appframework::core::AppModel_obj::get_tree();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = branchArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		while(((_g1 < _g))){
			HX_STACK_LINE(15)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(17)
			page = page->get_children()->get(branchArray->__get(i));
		}
	}
	HX_STACK_LINE(19)
	return page;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchTools_obj,getPage,return )

::String BranchTools_obj::getValidBranch( ::String branch){
	HX_STACK_PUSH("BranchTools::getValidBranch","com/appframework/core/BranchTools.hx",24);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(25)
	Array< ::String > branchArray = branch.split(HX_CSTRING("/"));		HX_STACK_VAR(branchArray,"branchArray");
	HX_STACK_LINE(26)
	::com::appframework::assets::PageAsset page = ::com::appframework::core::AppModel_obj::get_tree();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(27)
	Array< ::String > validBranch = Array_obj< ::String >::__new();		HX_STACK_VAR(validBranch,"validBranch");
	HX_STACK_LINE(28)
	if (((branchArray->__get((int)0) != ::com::appframework::core::AppModel_obj::get_indexID()))){
		HX_STACK_LINE(28)
		branchArray->unshift(::com::appframework::core::AppModel_obj::get_indexID());
	}
	HX_STACK_LINE(29)
	validBranch->push(branchArray->__get((int)0));
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = branchArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while(((_g1 < _g))){
			HX_STACK_LINE(30)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(32)
			if (((bool((page->get_children() != null())) && bool((page->get_children()->get(branchArray->__get(i)) != null()))))){
				HX_STACK_LINE(34)
				page = page->get_children()->get(branchArray->__get(i));
				HX_STACK_LINE(35)
				validBranch->push(branchArray->__get(i));
			}
			else{
				HX_STACK_LINE(38)
				break;
			}
		}
	}
	HX_STACK_LINE(42)
	::String returnBranch = validBranch->join(HX_CSTRING("/"));		HX_STACK_VAR(returnBranch,"returnBranch");
	HX_STACK_LINE(43)
	return ::com::appframework::core::BranchTools_obj::getDefaultChildBranch(returnBranch);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchTools_obj,getValidBranch,return )

::String BranchTools_obj::getFullBranch( ::String branch){
	HX_STACK_PUSH("BranchTools::getFullBranch","com/appframework/core/BranchTools.hx",46);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(47)
	::String validBranch = ::com::appframework::core::BranchTools_obj::getValidBranch(branch);		HX_STACK_VAR(validBranch,"validBranch");
	HX_STACK_LINE(48)
	if (((branch.indexOf(validBranch,null()) > (int)-1))){
		HX_STACK_LINE(48)
		return branch;
	}
	HX_STACK_LINE(49)
	return validBranch;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchTools_obj,getFullBranch,return )

Array< ::com::appframework::assets::PageAsset > BranchTools_obj::getPagesOfBranch( ::String branch){
	HX_STACK_PUSH("BranchTools::getPagesOfBranch","com/appframework/core/BranchTools.hx",52);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(53)
	Array< ::String > branchArray = branch.split(HX_CSTRING("/"));		HX_STACK_VAR(branchArray,"branchArray");
	HX_STACK_LINE(54)
	Array< ::com::appframework::assets::PageAsset > pageArray = Array_obj< ::com::appframework::assets::PageAsset >::__new();		HX_STACK_VAR(pageArray,"pageArray");
	HX_STACK_LINE(55)
	::com::appframework::assets::PageAsset page = ::com::appframework::core::AppModel_obj::get_tree();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(56)
	pageArray->push(page);
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		int _g = branchArray->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while(((_g1 < _g))){
			HX_STACK_LINE(57)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(59)
			pageArray->push(page = page->get_children()->get(branchArray->__get(i)));
		}
	}
	HX_STACK_LINE(61)
	return pageArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchTools_obj,getPagesOfBranch,return )

::String BranchTools_obj::getDefaultChildBranch( ::String branch){
	HX_STACK_PUSH("BranchTools::getDefaultChildBranch","com/appframework/core/BranchTools.hx",64);
	HX_STACK_ARG(branch,"branch");
	HX_STACK_LINE(65)
	::com::appframework::assets::PageAsset page = ::com::appframework::core::BranchTools_obj::getPage(branch);		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(66)
	if (((bool(page->landing) || bool((page->get_defaultChild() == null()))))){
		HX_STACK_LINE(66)
		return branch;
	}
	HX_STACK_LINE(67)
	return ::com::appframework::core::BranchTools_obj::getDefaultChildBranch(page->get_children()->get(page->get_defaultChild())->__Field(HX_CSTRING("get_branch"),true)());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchTools_obj,getDefaultChildBranch,return )


BranchTools_obj::BranchTools_obj()
{
}

void BranchTools_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BranchTools);
	HX_MARK_END_CLASS();
}

void BranchTools_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BranchTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getPage") ) { return getPage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFullBranch") ) { return getFullBranch_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getValidBranch") ) { return getValidBranch_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getPagesOfBranch") ) { return getPagesOfBranch_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDefaultChildBranch") ) { return getDefaultChildBranch_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BranchTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BranchTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getPage"),
	HX_CSTRING("getValidBranch"),
	HX_CSTRING("getFullBranch"),
	HX_CSTRING("getPagesOfBranch"),
	HX_CSTRING("getDefaultChildBranch"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchTools_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchTools_obj::__mClass,"__mClass");
};

Class BranchTools_obj::__mClass;

void BranchTools_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.BranchTools"), hx::TCanCast< BranchTools_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BranchTools_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
