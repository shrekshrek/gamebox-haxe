#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchManager
#include <com/appframework/core/BranchManager.h>
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

Void BranchManager_obj::__construct()
{
	return null();
}

BranchManager_obj::~BranchManager_obj() { }

Dynamic BranchManager_obj::__CreateEmpty() { return  new BranchManager_obj; }
hx::ObjectPtr< BranchManager_obj > BranchManager_obj::__new()
{  hx::ObjectPtr< BranchManager_obj > result = new BranchManager_obj();
	result->__construct();
	return result;}

Dynamic BranchManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BranchManager_obj > result = new BranchManager_obj();
	result->__construct();
	return result;}

::Hash BranchManager_obj::activePages;

Void BranchManager_obj::addPage( ::com::appframework::assets::PageAsset page){
{
		HX_STACK_PUSH("BranchManager::addPage","com/appframework/core/BranchManager.hx",14);
		HX_STACK_ARG(page,"page");
		HX_STACK_LINE(14)
		::com::appframework::core::BranchManager_obj::activePages->set(page->get_branch(),page);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchManager_obj,addPage,(void))

Array< ::com::appframework::assets::PageAsset > BranchManager_obj::getTransitionOutArray( ::String newBranch){
	HX_STACK_PUSH("BranchManager::getTransitionOutArray","com/appframework/core/BranchManager.hx",18);
	HX_STACK_ARG(newBranch,"newBranch");
	HX_STACK_LINE(19)
	::com::appframework::core::BranchManager_obj::cleanup();
	HX_STACK_LINE(20)
	hx::AddEq(newBranch,HX_CSTRING("/"));
	HX_STACK_LINE(21)
	Array< ::com::appframework::assets::PageAsset > transitionOutArray = Array_obj< ::com::appframework::assets::PageAsset >::__new();		HX_STACK_VAR(transitionOutArray,"transitionOutArray");
	HX_STACK_LINE(22)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::com::appframework::core::BranchManager_obj::activePages->keys());  __it->hasNext(); ){
		::String a = __it->next();
		if (((newBranch.indexOf((a + HX_CSTRING("/")),null()) == (int)-1))){
			HX_STACK_LINE(24)
			transitionOutArray->push(::com::appframework::core::BranchManager_obj::activePages->get(a));
		}
;
	}
	HX_STACK_LINE(26)
	transitionOutArray->sort(::com::appframework::core::BranchManager_obj::sortByBranchDepth_dyn());
	HX_STACK_LINE(28)
	return transitionOutArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BranchManager_obj,getTransitionOutArray,return )

Void BranchManager_obj::cleanup( ){
{
		HX_STACK_PUSH("BranchManager::cleanup","com/appframework/core/BranchManager.hx",31);
		HX_STACK_LINE(31)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::com::appframework::core::BranchManager_obj::activePages->keys());  __it->hasNext(); ){
			::String a = __it->next();
			if ((!(::com::appframework::core::BranchManager_obj::activePages->get(a)->__Field(HX_CSTRING("get_active"),true)()))){
				HX_STACK_LINE(34)
				::com::appframework::core::BranchManager_obj::activePages->remove(a);
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(BranchManager_obj,cleanup,(void))

int BranchManager_obj::sortByBranchDepth( ::com::appframework::assets::PageAsset a,::com::appframework::assets::PageAsset b){
	HX_STACK_PUSH("BranchManager::sortByBranchDepth","com/appframework/core/BranchManager.hx",38);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(39)
	int aLen = a->get_branch().split(HX_CSTRING("/"))->length;		HX_STACK_VAR(aLen,"aLen");
	HX_STACK_LINE(40)
	int bLen = b->get_branch().split(HX_CSTRING("/"))->length;		HX_STACK_VAR(bLen,"bLen");
	HX_STACK_LINE(41)
	if (((aLen < bLen))){
		HX_STACK_LINE(41)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(42)
		if (((aLen > bLen))){
			HX_STACK_LINE(42)
			return (int)1;
		}
		else{
			HX_STACK_LINE(43)
			return (int)0;
		}
	}
	HX_STACK_LINE(41)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BranchManager_obj,sortByBranchDepth,return )


BranchManager_obj::BranchManager_obj()
{
}

void BranchManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BranchManager);
	HX_MARK_END_CLASS();
}

void BranchManager_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BranchManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return addPage_dyn(); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return cleanup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activePages") ) { return activePages; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"sortByBranchDepth") ) { return sortByBranchDepth_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getTransitionOutArray") ) { return getTransitionOutArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BranchManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activePages") ) { activePages=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BranchManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("activePages"),
	HX_CSTRING("addPage"),
	HX_CSTRING("getTransitionOutArray"),
	HX_CSTRING("cleanup"),
	HX_CSTRING("sortByBranchDepth"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BranchManager_obj::activePages,"activePages");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BranchManager_obj::activePages,"activePages");
};

Class BranchManager_obj::__mClass;

void BranchManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.BranchManager"), hx::TCanCast< BranchManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BranchManager_obj::__boot()
{
	activePages= ::Hash_obj::__new();
}

} // end namespace com
} // end namespace appframework
} // end namespace core
