#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_appframework_events_PageEvent
#include <com/appframework/events/PageEvent.h>
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
namespace assets{

Void PageAsset_obj::__construct()
{
HX_STACK_PUSH("PageAsset::new","com/appframework/assets/PageAsset.hx",21);
{
	HX_STACK_LINE(22)
	super::__construct(null());
	HX_STACK_LINE(23)
	this->isTransitionedIn = false;
}
;
	return null();
}

PageAsset_obj::~PageAsset_obj() { }

Dynamic PageAsset_obj::__CreateEmpty() { return  new PageAsset_obj; }
hx::ObjectPtr< PageAsset_obj > PageAsset_obj::__new()
{  hx::ObjectPtr< PageAsset_obj > result = new PageAsset_obj();
	result->__construct();
	return result;}

Dynamic PageAsset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PageAsset_obj > result = new PageAsset_obj();
	result->__construct();
	return result;}

::String PageAsset_obj::toString( ){
	HX_STACK_PUSH("PageAsset::toString","com/appframework/assets/PageAsset.hx",225);
	HX_STACK_THIS(this);
	HX_STACK_LINE(225)
	return (HX_CSTRING("[PageAsset] ") + this->get_id());
}


Void PageAsset_obj::parseNode( ::com::appframework::assets::PageAsset page){
{
		HX_STACK_PUSH("PageAsset::parseNode","com/appframework/assets/PageAsset.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(page,"page");
		HX_STACK_LINE(216)
		this->set_id(this->get_node()->get(HX_CSTRING("id")));
		HX_STACK_LINE(217)
		this->set_src(this->get_node()->get(HX_CSTRING("src")));
		HX_STACK_LINE(219)
		::String d = ::Std_obj::string(this->get_node()->get(HX_CSTRING("depth"))).toLowerCase();		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(220)
		if (((bool((bool((d == ::com::appframework::api::App_obj::TOP)) || bool((d == ::com::appframework::api::App_obj::BOTTOM)))) || bool((d == ::com::appframework::api::App_obj::MIDDLE))))){
			HX_STACK_LINE(220)
			this->set_depth(d);
		}
		else{
			HX_STACK_LINE(221)
			this->set_depth(page->get_depth());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,parseNode,(void))

Void PageAsset_obj::load( ){
{
		HX_STACK_PUSH("PageAsset::load","com/appframework/assets/PageAsset.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_LINE(210)
		this->isActive = true;
		HX_STACK_LINE(211)
		this->onComplete(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,load,(void))

Void PageAsset_obj::preload( ){
{
		HX_STACK_PUSH("PageAsset::preload","com/appframework/assets/PageAsset.hx",204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(204)
		this->load();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,preload,(void))

Void PageAsset_obj::init( ){
{
		HX_STACK_PUSH("PageAsset::init","com/appframework/assets/PageAsset.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(199)
		::Class _type = ::Type_obj::resolveClass(this->get_src());		HX_STACK_VAR(_type,"_type");
		HX_STACK_LINE(200)
		this->set_page(::Type_obj::createInstance(_type,Dynamic( Array_obj<Dynamic>::__new())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,init,(void))

::String PageAsset_obj::get_branch( ){
	HX_STACK_PUSH("PageAsset::get_branch","com/appframework/assets/PageAsset.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	if (((this->_parent != null()))){
		HX_STACK_LINE(192)
		return ((this->_parent->get_branch() + HX_CSTRING("/")) + this->get_id());
	}
	HX_STACK_LINE(193)
	return this->get_id();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_branch,return )

bool PageAsset_obj::set_landing( bool value){
	HX_STACK_PUSH("PageAsset::set_landing","com/appframework/assets/PageAsset.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(185)
	this->landing = value;
	HX_STACK_LINE(186)
	return this->landing;
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_landing,return )

bool PageAsset_obj::get_landing( ){
	HX_STACK_PUSH("PageAsset::get_landing","com/appframework/assets/PageAsset.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->landing;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_landing,return )

::String PageAsset_obj::set_flow( ::String value){
	HX_STACK_PUSH("PageAsset::set_flow","com/appframework/assets/PageAsset.hx",173);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(174)
	this->flow = value;
	HX_STACK_LINE(175)
	return this->get_flow();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_flow,return )

::String PageAsset_obj::get_flow( ){
	HX_STACK_PUSH("PageAsset::get_flow","com/appframework/assets/PageAsset.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return this->flow;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_flow,return )

::String PageAsset_obj::set_defaultChild( ::String value){
	HX_STACK_PUSH("PageAsset::set_defaultChild","com/appframework/assets/PageAsset.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(163)
	this->defaultChild = value;
	HX_STACK_LINE(164)
	return this->get_defaultChild();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_defaultChild,return )

::String PageAsset_obj::get_defaultChild( ){
	HX_STACK_PUSH("PageAsset::get_defaultChild","com/appframework/assets/PageAsset.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_LINE(158)
	return this->defaultChild;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_defaultChild,return )

::Hash PageAsset_obj::set_children( ::Hash value){
	HX_STACK_PUSH("PageAsset::set_children","com/appframework/assets/PageAsset.hx",151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(152)
	if (((this->get_children() == null()))){
		HX_STACK_LINE(152)
		this->children = value;
	}
	HX_STACK_LINE(153)
	return this->get_children();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_children,return )

::Hash PageAsset_obj::get_children( ){
	HX_STACK_PUSH("PageAsset::get_children","com/appframework/assets/PageAsset.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(147)
	return this->children;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_children,return )

Void PageAsset_obj::setParent( ::com::appframework::assets::PageAsset value){
{
		HX_STACK_PUSH("PageAsset::setParent","com/appframework/assets/PageAsset.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(value,"value");
		HX_STACK_LINE(141)
		if (((this->_parent == null()))){
			HX_STACK_LINE(142)
			this->_parent = value;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,setParent,(void))

::com::appframework::assets::PageAsset PageAsset_obj::getParent( ){
	HX_STACK_PUSH("PageAsset::getParent","com/appframework/assets/PageAsset.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_LINE(137)
	return this->_parent;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,getParent,return )

bool PageAsset_obj::get_active( ){
	HX_STACK_PUSH("PageAsset::get_active","com/appframework/assets/PageAsset.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(131)
	return this->isActive;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_active,return )

::String PageAsset_obj::set_depth( ::String value){
	HX_STACK_PUSH("PageAsset::set_depth","com/appframework/assets/PageAsset.hx",124);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(125)
	this->depth = value;
	HX_STACK_LINE(126)
	return this->get_depth();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_depth,return )

::String PageAsset_obj::get_depth( ){
	HX_STACK_PUSH("PageAsset::get_depth","com/appframework/assets/PageAsset.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(120)
	return this->depth;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_depth,return )

::Xml PageAsset_obj::set_node( ::Xml value){
	HX_STACK_PUSH("PageAsset::set_node","com/appframework/assets/PageAsset.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(114)
	if (((this->get_node() == null()))){
		HX_STACK_LINE(114)
		this->node = value;
	}
	HX_STACK_LINE(115)
	return this->get_node();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_node,return )

::Xml PageAsset_obj::get_node( ){
	HX_STACK_PUSH("PageAsset::get_node","com/appframework/assets/PageAsset.hx",109);
	HX_STACK_THIS(this);
	HX_STACK_LINE(109)
	return this->node;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_node,return )

::String PageAsset_obj::set_src( ::String value){
	HX_STACK_PUSH("PageAsset::set_src","com/appframework/assets/PageAsset.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(103)
	this->src = value;
	HX_STACK_LINE(104)
	return this->get_src();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_src,return )

::String PageAsset_obj::get_src( ){
	HX_STACK_PUSH("PageAsset::get_src","com/appframework/assets/PageAsset.hx",98);
	HX_STACK_THIS(this);
	HX_STACK_LINE(98)
	return this->src;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_src,return )

::String PageAsset_obj::set_id( ::String value){
	HX_STACK_PUSH("PageAsset::set_id","com/appframework/assets/PageAsset.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(92)
	if (((this->get_id() == null()))){
		HX_STACK_LINE(92)
		this->id = value;
	}
	HX_STACK_LINE(93)
	return this->get_id();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_id,return )

::String PageAsset_obj::get_id( ){
	HX_STACK_PUSH("PageAsset::get_id","com/appframework/assets/PageAsset.hx",87);
	HX_STACK_THIS(this);
	HX_STACK_LINE(87)
	return this->id;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_id,return )

Void PageAsset_obj::onComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("PageAsset::onComplete","com/appframework/assets/PageAsset.hx",80);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(81)
		this->decorate();
		HX_STACK_LINE(82)
		this->isTransitionedIn = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,onComplete,(void))

Void PageAsset_obj::onTransitionOutComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("PageAsset::onTransitionOutComplete","com/appframework/assets/PageAsset.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(75)
		this->destroy();
		HX_STACK_LINE(76)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,onTransitionOutComplete,(void))

Void PageAsset_obj::onTransitionInComplete( ::native::events::Event event){
{
		HX_STACK_PUSH("PageAsset::onTransitionInComplete","com/appframework/assets/PageAsset.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(70)
		this->isTransitionedIn = true;
		HX_STACK_LINE(71)
		this->dispatchEvent(::com::appframework::events::PageEvent_obj::__new(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,null(),null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,onTransitionInComplete,(void))

Void PageAsset_obj::decorate( ){
{
		HX_STACK_PUSH("PageAsset::decorate","com/appframework/assets/PageAsset.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_LINE(63)
		this->get_page()->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,this->onTransitionInComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(64)
		this->get_page()->addEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,this->onTransitionOutComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(65)
		this->get_page()->set_page(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,decorate,(void))

Void PageAsset_obj::destroy( ){
{
		HX_STACK_PUSH("PageAsset::destroy","com/appframework/assets/PageAsset.hx",48);
		HX_STACK_THIS(this);
		HX_STACK_LINE(49)
		this->isActive = false;
		HX_STACK_LINE(50)
		this->isTransitionedIn = false;
		HX_STACK_LINE(51)
		if (((this->get_page() != null()))){
			HX_STACK_LINE(53)
			this->get_page()->removeEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_IN_COMPLETE,this->onTransitionInComplete_dyn(),null());
			HX_STACK_LINE(54)
			this->get_page()->removeEventListener(::com::appframework::events::PageEvent_obj::TRANSITION_OUT_COMPLETE,this->onTransitionOutComplete_dyn(),null());
			HX_STACK_LINE(55)
			this->get_page()->set_page(null());
			HX_STACK_LINE(57)
			if (((this->get_page()->get_parent() != null()))){
				HX_STACK_LINE(57)
				this->get_page()->get_parent()->removeChild(this->get_page());
			}
			HX_STACK_LINE(58)
			this->set_page(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,destroy,(void))

Void PageAsset_obj::transitionOut( ){
{
		HX_STACK_PUSH("PageAsset::transitionOut","com/appframework/assets/PageAsset.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(43)
		if ((this->isTransitionedIn)){
			HX_STACK_LINE(44)
			this->get_page()->transitionOut();
		}
		else{
			HX_STACK_LINE(45)
			this->onTransitionOutComplete(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,transitionOut,(void))

Void PageAsset_obj::transitionIn( ){
{
		HX_STACK_PUSH("PageAsset::transitionIn","com/appframework/assets/PageAsset.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(38)
		if ((!(this->isTransitionedIn))){
			HX_STACK_LINE(39)
			this->get_page()->transitionIn();
		}
		else{
			HX_STACK_LINE(40)
			this->onTransitionInComplete(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,transitionIn,(void))

::com::appframework::templates::AbstractPage PageAsset_obj::set_page( ::com::appframework::templates::AbstractPage value){
	HX_STACK_PUSH("PageAsset::set_page","com/appframework/assets/PageAsset.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(33)
	this->page = value;
	HX_STACK_LINE(34)
	return this->get_page();
}


HX_DEFINE_DYNAMIC_FUNC1(PageAsset_obj,set_page,return )

::com::appframework::templates::AbstractPage PageAsset_obj::get_page( ){
	HX_STACK_PUSH("PageAsset::get_page","com/appframework/assets/PageAsset.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_LINE(28)
	return this->page;
}


HX_DEFINE_DYNAMIC_FUNC0(PageAsset_obj,get_page,return )


PageAsset_obj::PageAsset_obj()
{
}

void PageAsset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PageAsset);
	HX_MARK_MEMBER_NAME(branch,"branch");
	HX_MARK_MEMBER_NAME(landing,"landing");
	HX_MARK_MEMBER_NAME(flow,"flow");
	HX_MARK_MEMBER_NAME(defaultChild,"defaultChild");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(page,"page");
	HX_MARK_MEMBER_NAME(isActive,"isActive");
	HX_MARK_MEMBER_NAME(isTransitionedIn,"isTransitionedIn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PageAsset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(branch,"branch");
	HX_VISIT_MEMBER_NAME(landing,"landing");
	HX_VISIT_MEMBER_NAME(flow,"flow");
	HX_VISIT_MEMBER_NAME(defaultChild,"defaultChild");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(page,"page");
	HX_VISIT_MEMBER_NAME(isActive,"isActive");
	HX_VISIT_MEMBER_NAME(isTransitionedIn,"isTransitionedIn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic PageAsset_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp ? get_id() : id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return inCallProp ? get_src() : src; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"flow") ) { return inCallProp ? get_flow() : flow; }
		if (HX_FIELD_EQ(inName,"node") ) { return inCallProp ? get_node() : node; }
		if (HX_FIELD_EQ(inName,"page") ) { return inCallProp ? get_page() : page; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return inCallProp ? get_depth() : depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"branch") ) { return inCallProp ? get_branch() : branch; }
		if (HX_FIELD_EQ(inName,"active") ) { return inCallProp ? get_active() : active; }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preload") ) { return preload_dyn(); }
		if (HX_FIELD_EQ(inName,"landing") ) { return landing; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flow") ) { return set_flow_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flow") ) { return get_flow_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		if (HX_FIELD_EQ(inName,"set_node") ) { return set_node_dyn(); }
		if (HX_FIELD_EQ(inName,"get_node") ) { return get_node_dyn(); }
		if (HX_FIELD_EQ(inName,"decorate") ) { return decorate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_page") ) { return set_page_dyn(); }
		if (HX_FIELD_EQ(inName,"get_page") ) { return get_page_dyn(); }
		if (HX_FIELD_EQ(inName,"isActive") ) { return isActive; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseNode") ) { return parseNode_dyn(); }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return set_depth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return get_depth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_branch") ) { return get_branch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_landing") ) { return set_landing_dyn(); }
		if (HX_FIELD_EQ(inName,"get_landing") ) { return get_landing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultChild") ) { return inCallProp ? get_defaultChild() : defaultChild; }
		if (HX_FIELD_EQ(inName,"set_children") ) { return set_children_dyn(); }
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_defaultChild") ) { return set_defaultChild_dyn(); }
		if (HX_FIELD_EQ(inName,"get_defaultChild") ) { return get_defaultChild_dyn(); }
		if (HX_FIELD_EQ(inName,"isTransitionedIn") ) { return isTransitionedIn; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onTransitionInComplete") ) { return onTransitionInComplete_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTransitionOutComplete") ) { return onTransitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PageAsset_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp) return set_id(inValue);id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp) return set_src(inValue);src=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"flow") ) { if (inCallProp) return set_flow(inValue);flow=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"node") ) { if (inCallProp) return set_node(inValue);node=inValue.Cast< ::Xml >(); return inValue; }
		if (HX_FIELD_EQ(inName,"page") ) { if (inCallProp) return set_page(inValue);page=inValue.Cast< ::com::appframework::templates::AbstractPage >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp) return set_depth(inValue);depth=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"branch") ) { branch=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"landing") ) { landing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::appframework::assets::PageAsset >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { if (inCallProp) return set_children(inValue);children=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isActive") ) { isActive=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultChild") ) { if (inCallProp) return set_defaultChild(inValue);defaultChild=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isTransitionedIn") ) { isTransitionedIn=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PageAsset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("branch"));
	outFields->push(HX_CSTRING("landing"));
	outFields->push(HX_CSTRING("flow"));
	outFields->push(HX_CSTRING("defaultChild"));
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("node"));
	outFields->push(HX_CSTRING("src"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("page"));
	outFields->push(HX_CSTRING("isActive"));
	outFields->push(HX_CSTRING("isTransitionedIn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("parseNode"),
	HX_CSTRING("load"),
	HX_CSTRING("preload"),
	HX_CSTRING("init"),
	HX_CSTRING("get_branch"),
	HX_CSTRING("branch"),
	HX_CSTRING("set_landing"),
	HX_CSTRING("get_landing"),
	HX_CSTRING("landing"),
	HX_CSTRING("set_flow"),
	HX_CSTRING("get_flow"),
	HX_CSTRING("flow"),
	HX_CSTRING("set_defaultChild"),
	HX_CSTRING("get_defaultChild"),
	HX_CSTRING("defaultChild"),
	HX_CSTRING("set_children"),
	HX_CSTRING("get_children"),
	HX_CSTRING("children"),
	HX_CSTRING("setParent"),
	HX_CSTRING("getParent"),
	HX_CSTRING("_parent"),
	HX_CSTRING("get_active"),
	HX_CSTRING("active"),
	HX_CSTRING("set_depth"),
	HX_CSTRING("get_depth"),
	HX_CSTRING("depth"),
	HX_CSTRING("set_node"),
	HX_CSTRING("get_node"),
	HX_CSTRING("node"),
	HX_CSTRING("set_src"),
	HX_CSTRING("get_src"),
	HX_CSTRING("src"),
	HX_CSTRING("set_id"),
	HX_CSTRING("get_id"),
	HX_CSTRING("id"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onTransitionOutComplete"),
	HX_CSTRING("onTransitionInComplete"),
	HX_CSTRING("decorate"),
	HX_CSTRING("destroy"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("set_page"),
	HX_CSTRING("get_page"),
	HX_CSTRING("page"),
	HX_CSTRING("isActive"),
	HX_CSTRING("isTransitionedIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PageAsset_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PageAsset_obj::__mClass,"__mClass");
};

Class PageAsset_obj::__mClass;

void PageAsset_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.appframework.assets.PageAsset"), hx::TCanCast< PageAsset_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void PageAsset_obj::__boot()
{
}

} // end namespace com
} // end namespace appframework
} // end namespace assets
