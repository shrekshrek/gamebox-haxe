#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_com_appframework_api_App
#include <com/appframework/api/App.h>
#endif
#ifndef INCLUDED_com_appframework_assets_PageAsset
#include <com/appframework/assets/PageAsset.h>
#endif
#ifndef INCLUDED_com_appframework_core_AppModel
#include <com/appframework/core/AppModel.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
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
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace com{
namespace appframework{
namespace core{

Void AppModel_obj::__construct()
{
HX_STACK_PUSH("AppModel::new","com/appframework/core/AppModel.hx",17);
{
	HX_STACK_LINE(17)
	super::__construct(null());
}
;
	return null();
}

AppModel_obj::~AppModel_obj() { }

Dynamic AppModel_obj::__CreateEmpty() { return  new AppModel_obj; }
hx::ObjectPtr< AppModel_obj > AppModel_obj::__new()
{  hx::ObjectPtr< AppModel_obj > result = new AppModel_obj();
	result->__construct();
	return result;}

Dynamic AppModel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppModel_obj > result = new AppModel_obj();
	result->__construct();
	return result;}

::com::appframework::assets::PageAsset AppModel_obj::parsePage( ::Xml node,::com::appframework::assets::PageAsset parent){
	HX_STACK_PUSH("AppModel::parsePage","com/appframework/core/AppModel.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(parent,"parent");
	HX_STACK_LINE(97)
	::com::appframework::core::AppModel_obj::validateNode(node);
	HX_STACK_LINE(98)
	bool isIndex = (node->get(HX_CSTRING("id")) == ::com::appframework::core::AppModel_obj::get_indexID());		HX_STACK_VAR(isIndex,"isIndex");
	HX_STACK_LINE(99)
	::com::appframework::assets::PageAsset page = ::com::appframework::assets::PageAsset_obj::__new();		HX_STACK_VAR(page,"page");
	HX_STACK_LINE(100)
	page->set_node(node);
	HX_STACK_LINE(101)
	page->set_id(node->get(HX_CSTRING("id")));
	HX_STACK_LINE(102)
	page->set_src(node->get(HX_CSTRING("src")));
	HX_STACK_LINE(103)
	page->landing = (node->get(HX_CSTRING("landing")) == HX_CSTRING("true"));
	HX_STACK_LINE(105)
	::String depth = ::Std_obj::string(node->get(HX_CSTRING("depth"))).toLowerCase();		HX_STACK_VAR(depth,"depth");
	HX_STACK_LINE(106)
	if ((!(isIndex))){
		HX_STACK_LINE(108)
		page->setParent(parent);
		HX_STACK_LINE(109)
		if (((bool((depth == ::com::appframework::api::App_obj::TOP)) || bool((depth == ::com::appframework::api::App_obj::BOTTOM))))){
			HX_STACK_LINE(109)
			page->set_depth(depth);
		}
		else{
			HX_STACK_LINE(110)
			page->set_depth(::com::appframework::api::App_obj::MIDDLE);
		}
	}
	else{
		HX_STACK_LINE(113)
		if (((bool((depth == ::com::appframework::api::App_obj::TOP)) || bool((depth == ::com::appframework::api::App_obj::MIDDLE))))){
			HX_STACK_LINE(114)
			page->set_depth(depth);
		}
		else{
			HX_STACK_LINE(115)
			page->set_depth(::com::appframework::api::App_obj::BOTTOM);
		}
	}
	HX_STACK_LINE(118)
	::String flow = ::Std_obj::string(node->get(HX_CSTRING("flow"))).toLowerCase();		HX_STACK_VAR(flow,"flow");
	HX_STACK_LINE(119)
	if (((bool((bool((flow == ::com::appframework::api::App_obj::NORMAL)) || bool((flow == ::com::appframework::api::App_obj::REVERSE)))) || bool((flow == ::com::appframework::api::App_obj::CROSS))))){
		HX_STACK_LINE(119)
		page->set_flow(flow);
	}
	HX_STACK_LINE(121)
	Dynamic nodes = node->elements();		HX_STACK_VAR(nodes,"nodes");
	HX_STACK_LINE(122)
	if ((nodes->__Field(HX_CSTRING("hasNext"),true)())){
		HX_STACK_LINE(124)
		page->set_defaultChild(node->get(HX_CSTRING("defaultChild")));
		HX_STACK_LINE(125)
		page->set_children(this->parseChildren(page,nodes));
		HX_STACK_LINE(126)
		if ((!(page->get_children()->exists(page->get_defaultChild())))){
			HX_STACK_LINE(126)
			page->set_defaultChild(node->firstElement()->get(HX_CSTRING("id")));
		}
	}
	else{
		HX_STACK_LINE(128)
		page->landing = true;
	}
	HX_STACK_LINE(132)
	return page;
}


HX_DEFINE_DYNAMIC_FUNC2(AppModel_obj,parsePage,return )

::Hash AppModel_obj::parseChildren( ::com::appframework::assets::PageAsset parent,Dynamic childNodes){
	HX_STACK_PUSH("AppModel::parseChildren","com/appframework/core/AppModel.hx",85);
	HX_STACK_THIS(this);
	HX_STACK_ARG(parent,"parent");
	HX_STACK_ARG(childNodes,"childNodes");
	HX_STACK_LINE(86)
	::Hash children = ::Hash_obj::__new();		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(87)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(childNodes);  __it->hasNext(); ){
		::Xml i = __it->next();
		{
			HX_STACK_LINE(89)
			::Xml node = i;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(90)
			::com::appframework::assets::PageAsset page = this->parsePage(i,parent);		HX_STACK_VAR(page,"page");
			HX_STACK_LINE(91)
			children->set(page->get_id(),page);
		}
;
	}
	HX_STACK_LINE(93)
	return children;
}


HX_DEFINE_DYNAMIC_FUNC2(AppModel_obj,parseChildren,return )

Void AppModel_obj::parseTree( ){
{
		HX_STACK_PUSH("AppModel::parseTree","com/appframework/core/AppModel.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		::Xml node = ::com::appframework::core::AppModel_obj::get_xml()->elementsNamed(HX_CSTRING("page"))->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(80)
		if (((node->get(HX_CSTRING("id")) != null()))){
			HX_STACK_LINE(80)
			::com::appframework::core::AppModel_obj::indexID = node->get(HX_CSTRING("id"));
		}
		HX_STACK_LINE(81)
		::com::appframework::core::AppModel_obj::tree = this->parsePage(node,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,parseTree,(void))

Void AppModel_obj::parseSite( ){
{
		HX_STACK_PUSH("AppModel::parseSite","com/appframework/core/AppModel.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		::com::appframework::core::AppModel_obj::set_title((  (((::com::appframework::core::AppModel_obj::get_xml()->get(HX_CSTRING("title")) != null()))) ? ::String(::com::appframework::core::AppModel_obj::get_xml()->get(HX_CSTRING("title"))) : ::String(HX_CSTRING("")) ));
		HX_STACK_LINE(73)
		::String flow = ::Std_obj::string(::com::appframework::core::AppModel_obj::get_xml()->get(HX_CSTRING("flow"))).toLowerCase();		HX_STACK_VAR(flow,"flow");
		HX_STACK_LINE(74)
		if (((bool((flow == ::com::appframework::api::App_obj::REVERSE)) || bool((flow == ::com::appframework::api::App_obj::CROSS))))){
			HX_STACK_LINE(74)
			::com::appframework::core::AppModel_obj::set_defaultFlow(flow);
		}
		else{
			HX_STACK_LINE(75)
			::com::appframework::core::AppModel_obj::set_defaultFlow(::com::appframework::api::App_obj::NORMAL);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,parseSite,(void))

Void AppModel_obj::load( ::String path){
{
		HX_STACK_PUSH("AppModel::load","com/appframework/core/AppModel.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_ARG(path,"path");
		HX_STACK_LINE(23)
		if (((path == null()))){
			HX_STACK_LINE(23)
			path = HX_CSTRING("xml/app.xml");
		}
		HX_STACK_LINE(24)
		::com::appframework::core::AppModel_obj::xml = ::Xml_obj::parse(::nme::installer::Assets_obj::getText(path))->firstElement();
		HX_STACK_LINE(25)
		this->parseSite();
		HX_STACK_LINE(26)
		this->parseTree();
		HX_STACK_LINE(27)
		this->dispatchEvent(::native::events::Event_obj::__new(::native::events::Event_obj::COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AppModel_obj,load,(void))

::Xml AppModel_obj::xml;

::Xml AppModel_obj::get_xml( ){
	HX_STACK_PUSH("AppModel::get_xml","com/appframework/core/AppModel.hx",32);
	HX_STACK_LINE(32)
	return ::com::appframework::core::AppModel_obj::xml;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,get_xml,return )

::com::appframework::assets::PageAsset AppModel_obj::tree;

::com::appframework::assets::PageAsset AppModel_obj::get_tree( ){
	HX_STACK_PUSH("AppModel::get_tree","com/appframework/core/AppModel.hx",38);
	HX_STACK_LINE(38)
	return ::com::appframework::core::AppModel_obj::tree;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,get_tree,return )

::String AppModel_obj::title;

::String AppModel_obj::get_title( ){
	HX_STACK_PUSH("AppModel::get_title","com/appframework/core/AppModel.hx",44);
	HX_STACK_LINE(44)
	return ::com::appframework::core::AppModel_obj::title;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,get_title,return )

::String AppModel_obj::set_title( ::String value){
	HX_STACK_PUSH("AppModel::set_title","com/appframework/core/AppModel.hx",48);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(49)
	::com::appframework::core::AppModel_obj::title = value;
	HX_STACK_LINE(50)
	return ::com::appframework::core::AppModel_obj::get_title();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppModel_obj,set_title,return )

::String AppModel_obj::defaultFlow;

::String AppModel_obj::get_defaultFlow( ){
	HX_STACK_PUSH("AppModel::get_defaultFlow","com/appframework/core/AppModel.hx",55);
	HX_STACK_LINE(55)
	return ::com::appframework::core::AppModel_obj::defaultFlow;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,get_defaultFlow,return )

::String AppModel_obj::set_defaultFlow( ::String value){
	HX_STACK_PUSH("AppModel::set_defaultFlow","com/appframework/core/AppModel.hx",59);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(60)
	if (((bool((bool((value == ::com::appframework::api::App_obj::NORMAL)) || bool((value == ::com::appframework::api::App_obj::REVERSE)))) || bool((value == ::com::appframework::api::App_obj::CROSS))))){
		HX_STACK_LINE(60)
		::com::appframework::core::AppModel_obj::defaultFlow = value;
	}
	HX_STACK_LINE(61)
	return ::com::appframework::core::AppModel_obj::get_defaultFlow();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppModel_obj,set_defaultFlow,return )

::String AppModel_obj::indexID;

::String AppModel_obj::get_indexID( ){
	HX_STACK_PUSH("AppModel::get_indexID","com/appframework/core/AppModel.hx",66);
	HX_STACK_LINE(66)
	return ::com::appframework::core::AppModel_obj::indexID;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AppModel_obj,get_indexID,return )

Void AppModel_obj::validateNode( ::Xml node){
{
		HX_STACK_PUSH("AppModel::validateNode","com/appframework/core/AppModel.hx",136);
		HX_STACK_ARG(node,"node");
		HX_STACK_LINE(137)
		::String error = HX_CSTRING("*Invalid Site XML* Page ");		HX_STACK_VAR(error,"error");
		HX_STACK_LINE(138)
		if (((node->get(HX_CSTRING("id")) == null()))){
			HX_STACK_LINE(139)
			hx::Throw (::native::errors::Error_obj::__new((error + HX_CSTRING("node missing required attribute 'id'")),null()));
		}
		else{
			HX_STACK_LINE(142)
			if (((node->get(HX_CSTRING("src")) == null()))){
				HX_STACK_LINE(143)
				hx::Throw (::native::errors::Error_obj::__new((error + HX_CSTRING("node missing required attribute 'src'")),null()));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppModel_obj,validateNode,(void))


AppModel_obj::AppModel_obj()
{
}

void AppModel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppModel);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AppModel_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AppModel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return inCallProp ? get_xml() : xml; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return inCallProp ? get_tree() : tree; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return inCallProp ? get_title() : title; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_xml") ) { return get_xml_dyn(); }
		if (HX_FIELD_EQ(inName,"indexID") ) { return inCallProp ? get_indexID() : indexID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_tree") ) { return get_tree_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_title") ) { return get_title_dyn(); }
		if (HX_FIELD_EQ(inName,"set_title") ) { return set_title_dyn(); }
		if (HX_FIELD_EQ(inName,"parsePage") ) { return parsePage_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTree") ) { return parseTree_dyn(); }
		if (HX_FIELD_EQ(inName,"parseSite") ) { return parseSite_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFlow") ) { return inCallProp ? get_defaultFlow() : defaultFlow; }
		if (HX_FIELD_EQ(inName,"get_indexID") ) { return get_indexID_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateNode") ) { return validateNode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseChildren") ) { return parseChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_defaultFlow") ) { return get_defaultFlow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultFlow") ) { return set_defaultFlow_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AppModel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast< ::com::appframework::assets::PageAsset >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { if (inCallProp) return set_title(inValue);title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexID") ) { indexID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFlow") ) { if (inCallProp) return set_defaultFlow(inValue);defaultFlow=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppModel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("xml"),
	HX_CSTRING("get_xml"),
	HX_CSTRING("tree"),
	HX_CSTRING("get_tree"),
	HX_CSTRING("title"),
	HX_CSTRING("get_title"),
	HX_CSTRING("set_title"),
	HX_CSTRING("defaultFlow"),
	HX_CSTRING("get_defaultFlow"),
	HX_CSTRING("set_defaultFlow"),
	HX_CSTRING("indexID"),
	HX_CSTRING("get_indexID"),
	HX_CSTRING("validateNode"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("parsePage"),
	HX_CSTRING("parseChildren"),
	HX_CSTRING("parseTree"),
	HX_CSTRING("parseSite"),
	HX_CSTRING("load"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppModel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AppModel_obj::xml,"xml");
	HX_MARK_MEMBER_NAME(AppModel_obj::tree,"tree");
	HX_MARK_MEMBER_NAME(AppModel_obj::title,"title");
	HX_MARK_MEMBER_NAME(AppModel_obj::defaultFlow,"defaultFlow");
	HX_MARK_MEMBER_NAME(AppModel_obj::indexID,"indexID");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppModel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AppModel_obj::xml,"xml");
	HX_VISIT_MEMBER_NAME(AppModel_obj::tree,"tree");
	HX_VISIT_MEMBER_NAME(AppModel_obj::title,"title");
	HX_VISIT_MEMBER_NAME(AppModel_obj::defaultFlow,"defaultFlow");
	HX_VISIT_MEMBER_NAME(AppModel_obj::indexID,"indexID");
};

Class AppModel_obj::__mClass;

void AppModel_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.core.AppModel"), hx::TCanCast< AppModel_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AppModel_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace core
