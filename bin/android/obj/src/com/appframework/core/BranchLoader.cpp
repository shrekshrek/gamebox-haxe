#include <hxcpp.h>

#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchIterator
#include <com/appframework/core/BranchIterator.h>
#endif
#ifndef INCLUDED_com_appframework_core_BranchLoader
#include <com/appframework/core/BranchLoader.h>
#endif
#ifndef INCLUDED_com_appframework_events_BranchLoaderEvent
#include <com/appframework/events/BranchLoaderEvent.h>
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

Void BranchLoader_obj::__construct()
{
HX_STACK_PUSH("BranchLoader::new","com/appframework/core/BranchLoader.hx",22);
{
	HX_STACK_LINE(22)
	super::__construct(null());
}
;
	return null();
}

BranchLoader_obj::~BranchLoader_obj() { }

Dynamic BranchLoader_obj::__CreateEmpty() { return  new BranchLoader_obj; }
hx::ObjectPtr< BranchLoader_obj > BranchLoader_obj::__new()
{  hx::ObjectPtr< BranchLoader_obj > result = new BranchLoader_obj();
	result->__construct();
	return result;}

Dynamic BranchLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BranchLoader_obj > result = new BranchLoader_obj();
	result->__construct();
	return result;}

Void BranchLoader_obj::dispatchComplete( ){
{
		HX_STACK_PUSH("BranchLoader::dispatchComplete","com/appframework/core/BranchLoader.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(62)
		this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BranchLoader_obj,dispatchComplete,(void))

Void BranchLoader_obj::next( hx::Null< bool >  __o_skip){
bool skip = __o_skip.Default(false);
	HX_STACK_PUSH("BranchLoader::next","com/appframework/core/BranchLoader.hx",49);
	HX_STACK_THIS(this);
	HX_STACK_ARG(skip,"skip");
{
		HX_STACK_LINE(50)
		++(this->loadedFiles);
		HX_STACK_LINE(51)
		if (((this->loadedFiles < this->totalFiles))){
			HX_STACK_LINE(52)
			this->loadNext();
		}
		else{
			HX_STACK_LINE(57)
			this->totalFiles = this->loadedFiles;
			HX_STACK_LINE(58)
			this->dispatchComplete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BranchLoader_obj,next,(void))

Void BranchLoader_obj::loadNext( ){
{
		HX_STACK_PUSH("BranchLoader::loadNext","com/appframework/core/BranchLoader.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->_currentAsset = ::com::appframework::core::BranchIterator_obj::next();
		HX_STACK_LINE(42)
		if (((bool((this->_currentAsset != null())) && bool(!(this->_currentAsset->get_active()))))){
			HX_STACK_LINE(43)
			this->_currentAsset->init();
			HX_STACK_LINE(44)
			this->dispatchEvent(::com::appframework::events::BranchLoaderEvent_obj::__new(::com::appframework::events::BranchLoaderEvent_obj::LOAD_PAGE,false,false,this->_currentAsset));
		}
		HX_STACK_LINE(46)
		this->next(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BranchLoader_obj,loadNext,(void))

Void BranchLoader_obj::interrupt( ){
{
		HX_STACK_PUSH("BranchLoader::interrupt","com/appframework/core/BranchLoader.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_LINE(34)
		this->_currentAsset->destroy();
		HX_STACK_LINE(35)
		this->totalFiles = this->loadedFiles;
		HX_STACK_LINE(36)
		this->dispatchComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BranchLoader_obj,interrupt,(void))

Void BranchLoader_obj::loadBranch( ::String branch){
{
		HX_STACK_PUSH("BranchLoader::loadBranch","com/appframework/core/BranchLoader.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(branch,"branch");
		HX_STACK_LINE(27)
		this->loadedFiles = this->totalFiles = (int)0;
		HX_STACK_LINE(28)
		this->totalFiles = ::com::appframework::core::BranchIterator_obj::init(branch);
		HX_STACK_LINE(29)
		this->current = (int)-1;
		HX_STACK_LINE(30)
		this->loadNext();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BranchLoader_obj,loadBranch,(void))


BranchLoader_obj::BranchLoader_obj()
{
}

void BranchLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BranchLoader);
	HX_MARK_MEMBER_NAME(_currentAsset,"_currentAsset");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(totalFiles,"totalFiles");
	HX_MARK_MEMBER_NAME(loadedFiles,"loadedFiles");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BranchLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_currentAsset,"_currentAsset");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(totalFiles,"totalFiles");
	HX_VISIT_MEMBER_NAME(loadedFiles,"loadedFiles");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BranchLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadNext") ) { return loadNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"interrupt") ) { return interrupt_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadBranch") ) { return loadBranch_dyn(); }
		if (HX_FIELD_EQ(inName,"totalFiles") ) { return totalFiles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedFiles") ) { return loadedFiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentAsset") ) { return _currentAsset; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"dispatchComplete") ) { return dispatchComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BranchLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalFiles") ) { totalFiles=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadedFiles") ) { loadedFiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_currentAsset") ) { _currentAsset=inValue.Cast< ::com::appframework::assets::PageAsset >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BranchLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_currentAsset"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("totalFiles"));
	outFields->push(HX_CSTRING("loadedFiles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispatchComplete"),
	HX_CSTRING("next"),
	HX_CSTRING("loadNext"),
	HX_CSTRING("interrupt"),
	HX_CSTRING("loadBranch"),
	HX_CSTRING("_currentAsset"),
	HX_CSTRING("current"),
	HX_CSTRING("totalFiles"),
	HX_CSTRING("loadedFiles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchLoader_obj::__mClass,"__mClass");
};

Class BranchLoader_obj::__mClass;

void BranchLoader_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.BranchLoader"), hx::TCanCast< BranchLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BranchLoader_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
