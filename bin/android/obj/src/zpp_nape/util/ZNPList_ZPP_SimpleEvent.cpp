#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPList_ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleEvent
#include <zpp_nape/util/ZNPNode_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::new","zpp_nape/util/Lists.hx",7855);
{
	HX_STACK_LINE(7862)
	this->length = (int)0;
	HX_STACK_LINE(7861)
	this->pushmod = false;
	HX_STACK_LINE(7860)
	this->modified = false;
	HX_STACK_LINE(7856)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SimpleEvent_obj::~ZNPList_ZPP_SimpleEvent_obj() { }

Dynamic ZNPList_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > ZNPList_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > result = new ZNPList_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleEvent_obj > result = new ZNPList_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::at","zpp_nape/util/Lists.hx",8225);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8226)
	{
	}
	HX_STACK_LINE(8234)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8235)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(it->elt) : ::zpp_nape::geom::ZPP_SimpleEvent(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::iterator_at","zpp_nape/util/Lists.hx",8212);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8213)
	{
	}
	HX_STACK_LINE(8221)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8222)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(8222)
		ret = ret->next;
	}
	HX_STACK_LINE(8223)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::back","zpp_nape/util/Lists.hx",8203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8204)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8205)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8206)
	while(((cur != null()))){
		HX_STACK_LINE(8207)
		ret = cur;
		HX_STACK_LINE(8208)
		cur = cur->next;
	}
	HX_STACK_LINE(8210)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,back,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::front","zpp_nape/util/Lists.hx",8203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8203)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,front,return )

bool ZNPList_ZPP_SimpleEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_has","zpp_nape/util/Lists.hx",8173);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8174)
	{
	}
	HX_STACK_LINE(8182)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8183)
	{
		HX_STACK_LINE(8184)
		ret = false;
		HX_STACK_LINE(8185)
		{
			HX_STACK_LINE(8186)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8187)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8188)
				::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8189)
				if (((npite == obj))){
					HX_STACK_LINE(8191)
					ret = true;
					HX_STACK_LINE(8192)
					break;
				}
				HX_STACK_LINE(8195)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8199)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_has,return )

bool ZNPList_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::has","zpp_nape/util/Lists.hx",8171);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8171);
			{
				HX_STACK_LINE(8171)
				{
				}
				HX_STACK_LINE(8171)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8171)
				{
					HX_STACK_LINE(8171)
					ret = false;
					HX_STACK_LINE(8171)
					{
						HX_STACK_LINE(8171)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(8171)
						while(((cx_ite != null()))){
							HX_STACK_LINE(8171)
							::zpp_nape::geom::ZPP_SimpleEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(8171)
							if (((npite == obj))){
								HX_STACK_LINE(8171)
								ret = true;
								HX_STACK_LINE(8171)
								break;
							}
							HX_STACK_LINE(8171)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(8171)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8171)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,has,return )

int ZNPList_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::size","zpp_nape/util/Lists.hx",8171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8171)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,size,return )

bool ZNPList_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::empty","zpp_nape/util/Lists.hx",8169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8169)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,empty,return )

Void ZNPList_ZPP_SimpleEvent_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::reverse","zpp_nape/util/Lists.hx",8154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8155)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8156)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8157)
		while(((cur != null()))){
			HX_STACK_LINE(8158)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8159)
			cur->next = pre;
			HX_STACK_LINE(8160)
			this->head = cur;
			HX_STACK_LINE(8161)
			pre = cur;
			HX_STACK_LINE(8162)
			cur = nx;
		}
		HX_STACK_LINE(8164)
		this->modified = true;
		HX_STACK_LINE(8165)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,reverse,(void))

Void ZNPList_ZPP_SimpleEvent_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_clear","zpp_nape/util/Lists.hx",8148);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8150)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8150)
			{
			}
			HX_STACK_LINE(8150)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8150)
			this->head = ret->next;
			HX_STACK_LINE(8150)
			{
			}
			HX_STACK_LINE(8150)
			{
				HX_STACK_LINE(8150)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8150)
				{
				}
				HX_STACK_LINE(8150)
				o->elt = null();
				HX_STACK_LINE(8150)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(8150)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8150)
			if (((this->head == null()))){
				HX_STACK_LINE(8150)
				this->pushmod = true;
			}
			HX_STACK_LINE(8150)
			this->modified = true;
			HX_STACK_LINE(8150)
			(this->length)--;
		}
		HX_STACK_LINE(8151)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::clear","zpp_nape/util/Lists.hx",8146);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8146)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8146)
			{
			}
			HX_STACK_LINE(8146)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8146)
			this->head = ret->next;
			HX_STACK_LINE(8146)
			{
			}
			HX_STACK_LINE(8146)
			{
				HX_STACK_LINE(8146)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8146)
				{
				}
				HX_STACK_LINE(8146)
				o->elt = null();
				HX_STACK_LINE(8146)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(8146)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8146)
			if (((this->head == null()))){
				HX_STACK_LINE(8146)
				this->pushmod = true;
			}
			HX_STACK_LINE(8146)
			this->modified = true;
			HX_STACK_LINE(8146)
			(this->length)--;
		}
		HX_STACK_LINE(8146)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::splice","zpp_nape/util/Lists.hx",8142);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(8143)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(8143)
		this->erase(pre);
	}
	HX_STACK_LINE(8144)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_erase","zpp_nape/util/Lists.hx",8096);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(8097)
	{
	}
	HX_STACK_LINE(8105)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8106)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8107)
	if (((pre == null()))){
		HX_STACK_LINE(8108)
		old = this->head;
		HX_STACK_LINE(8109)
		ret = old->next;
		HX_STACK_LINE(8110)
		this->head = ret;
		HX_STACK_LINE(8111)
		if (((this->head == null()))){
			HX_STACK_LINE(8111)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8114)
		old = pre->next;
		HX_STACK_LINE(8115)
		ret = old->next;
		HX_STACK_LINE(8116)
		pre->next = ret;
		HX_STACK_LINE(8117)
		if (((ret == null()))){
			HX_STACK_LINE(8117)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8119)
	{
	}
	HX_STACK_LINE(8120)
	{
		HX_STACK_LINE(8121)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8122)
		{
		}
		HX_STACK_LINE(8130)
		o->elt = null();
		HX_STACK_LINE(8131)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
		HX_STACK_LINE(8132)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8137)
	this->modified = true;
	HX_STACK_LINE(8138)
	(this->length)--;
	HX_STACK_LINE(8139)
	this->pushmod = true;
	HX_STACK_LINE(8140)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::erase","zpp_nape/util/Lists.hx",8094);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent &pre,::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8094);
			{
				HX_STACK_LINE(8094)
				{
				}
				HX_STACK_LINE(8094)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8094)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8094)
				if (((pre == null()))){
					HX_STACK_LINE(8094)
					old = __this->head;
					HX_STACK_LINE(8094)
					ret = old->next;
					HX_STACK_LINE(8094)
					__this->head = ret;
					HX_STACK_LINE(8094)
					if (((__this->head == null()))){
						HX_STACK_LINE(8094)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8094)
					old = pre->next;
					HX_STACK_LINE(8094)
					ret = old->next;
					HX_STACK_LINE(8094)
					pre->next = ret;
					HX_STACK_LINE(8094)
					if (((ret == null()))){
						HX_STACK_LINE(8094)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(8094)
				{
				}
				HX_STACK_LINE(8094)
				{
					HX_STACK_LINE(8094)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8094)
					{
					}
					HX_STACK_LINE(8094)
					o->elt = null();
					HX_STACK_LINE(8094)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(8094)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8094)
				__this->modified = true;
				HX_STACK_LINE(8094)
				(__this->length)--;
				HX_STACK_LINE(8094)
				__this->pushmod = true;
				HX_STACK_LINE(8094)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8094)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,erase,return )

bool ZNPList_ZPP_SimpleEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_try_remove","zpp_nape/util/Lists.hx",8071);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8072)
	{
	}
	HX_STACK_LINE(8080)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8081)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8082)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8083)
	while(((cur != null()))){
		HX_STACK_LINE(8084)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8085)
			{
				HX_STACK_LINE(8085)
				{
				}
				HX_STACK_LINE(8085)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8085)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8085)
				if (((pre == null()))){
					HX_STACK_LINE(8085)
					old = this->head;
					HX_STACK_LINE(8085)
					ret1 = old->next;
					HX_STACK_LINE(8085)
					this->head = ret1;
					HX_STACK_LINE(8085)
					if (((this->head == null()))){
						HX_STACK_LINE(8085)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8085)
					old = pre->next;
					HX_STACK_LINE(8085)
					ret1 = old->next;
					HX_STACK_LINE(8085)
					pre->next = ret1;
					HX_STACK_LINE(8085)
					if (((ret1 == null()))){
						HX_STACK_LINE(8085)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8085)
				{
				}
				HX_STACK_LINE(8085)
				{
					HX_STACK_LINE(8085)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8085)
					{
					}
					HX_STACK_LINE(8085)
					o->elt = null();
					HX_STACK_LINE(8085)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
					HX_STACK_LINE(8085)
					::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8085)
				this->modified = true;
				HX_STACK_LINE(8085)
				(this->length)--;
				HX_STACK_LINE(8085)
				this->pushmod = true;
				HX_STACK_LINE(8085)
				ret1;
			}
			HX_STACK_LINE(8086)
			ret = true;
			HX_STACK_LINE(8087)
			break;
		}
		HX_STACK_LINE(8089)
		pre = cur;
		HX_STACK_LINE(8090)
		cur = cur->next;
	}
	HX_STACK_LINE(8092)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SimpleEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_remove","zpp_nape/util/Lists.hx",8058);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8059)
		{
		}
		HX_STACK_LINE(8067)
		{
			HX_STACK_LINE(8067)
			{
			}
			HX_STACK_LINE(8067)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8067)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8067)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8067)
			while(((cur != null()))){
				HX_STACK_LINE(8067)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8067)
					{
						HX_STACK_LINE(8067)
						{
						}
						HX_STACK_LINE(8067)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8067)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8067)
						if (((pre == null()))){
							HX_STACK_LINE(8067)
							old = this->head;
							HX_STACK_LINE(8067)
							ret1 = old->next;
							HX_STACK_LINE(8067)
							this->head = ret1;
							HX_STACK_LINE(8067)
							if (((this->head == null()))){
								HX_STACK_LINE(8067)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8067)
							old = pre->next;
							HX_STACK_LINE(8067)
							ret1 = old->next;
							HX_STACK_LINE(8067)
							pre->next = ret1;
							HX_STACK_LINE(8067)
							if (((ret1 == null()))){
								HX_STACK_LINE(8067)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8067)
						{
						}
						HX_STACK_LINE(8067)
						{
							HX_STACK_LINE(8067)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8067)
							{
							}
							HX_STACK_LINE(8067)
							o->elt = null();
							HX_STACK_LINE(8067)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(8067)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8067)
						this->modified = true;
						HX_STACK_LINE(8067)
						(this->length)--;
						HX_STACK_LINE(8067)
						this->pushmod = true;
						HX_STACK_LINE(8067)
						ret1;
					}
					HX_STACK_LINE(8067)
					ret = true;
					HX_STACK_LINE(8067)
					break;
				}
				HX_STACK_LINE(8067)
				pre = cur;
				HX_STACK_LINE(8067)
				cur = cur->next;
			}
			HX_STACK_LINE(8067)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleEvent_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::try_remove","zpp_nape/util/Lists.hx",8033);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8034)
	{
	}
	HX_STACK_LINE(8042)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8043)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8044)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8045)
	while(((cur != null()))){
		HX_STACK_LINE(8046)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8047)
			this->erase(pre);
			HX_STACK_LINE(8048)
			ret = true;
			HX_STACK_LINE(8049)
			break;
		}
		HX_STACK_LINE(8051)
		pre = cur;
		HX_STACK_LINE(8052)
		cur = cur->next;
	}
	HX_STACK_LINE(8054)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,try_remove,return )

Void ZNPList_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::remove","zpp_nape/util/Lists.hx",8022);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8023)
		{
		}
		HX_STACK_LINE(8031)
		{
			HX_STACK_LINE(8031)
			{
			}
			HX_STACK_LINE(8031)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8031)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8031)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8031)
			while(((cur != null()))){
				HX_STACK_LINE(8031)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8031)
					{
						HX_STACK_LINE(8031)
						{
						}
						HX_STACK_LINE(8031)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8031)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8031)
						if (((pre == null()))){
							HX_STACK_LINE(8031)
							old = this->head;
							HX_STACK_LINE(8031)
							ret1 = old->next;
							HX_STACK_LINE(8031)
							this->head = ret1;
							HX_STACK_LINE(8031)
							if (((this->head == null()))){
								HX_STACK_LINE(8031)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8031)
							old = pre->next;
							HX_STACK_LINE(8031)
							ret1 = old->next;
							HX_STACK_LINE(8031)
							pre->next = ret1;
							HX_STACK_LINE(8031)
							if (((ret1 == null()))){
								HX_STACK_LINE(8031)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8031)
						{
						}
						HX_STACK_LINE(8031)
						{
							HX_STACK_LINE(8031)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8031)
							{
							}
							HX_STACK_LINE(8031)
							o->elt = null();
							HX_STACK_LINE(8031)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(8031)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8031)
						this->modified = true;
						HX_STACK_LINE(8031)
						(this->length)--;
						HX_STACK_LINE(8031)
						this->pushmod = true;
						HX_STACK_LINE(8031)
						ret1;
					}
					HX_STACK_LINE(8031)
					ret = true;
					HX_STACK_LINE(8031)
					break;
				}
				HX_STACK_LINE(8031)
				pre = cur;
				HX_STACK_LINE(8031)
				cur = cur->next;
			}
			HX_STACK_LINE(8031)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_pop_unsafe","zpp_nape/util/Lists.hx",8009);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8010)
	{
	}
	HX_STACK_LINE(8018)
	::zpp_nape::geom::ZPP_SimpleEvent ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8019)
	this->pop();
	HX_STACK_LINE(8020)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::pop_unsafe","zpp_nape/util/Lists.hx",8007);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8007);
			{
				HX_STACK_LINE(8007)
				{
				}
				HX_STACK_LINE(8007)
				::zpp_nape::geom::ZPP_SimpleEvent ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8007)
				__this->pop();
				HX_STACK_LINE(8007)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8007)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop_unsafe,return )

Void ZNPList_ZPP_SimpleEvent_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_pop","zpp_nape/util/Lists.hx",7974);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7975)
		{
		}
		HX_STACK_LINE(7983)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7984)
		this->head = ret->next;
		HX_STACK_LINE(7985)
		{
		}
		HX_STACK_LINE(7986)
		{
			HX_STACK_LINE(7987)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7988)
			{
			}
			HX_STACK_LINE(7996)
			o->elt = null();
			HX_STACK_LINE(7997)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(7998)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8003)
		if (((this->head == null()))){
			HX_STACK_LINE(8003)
			this->pushmod = true;
		}
		HX_STACK_LINE(8004)
		this->modified = true;
		HX_STACK_LINE(8005)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,inlined_pop,(void))

Void ZNPList_ZPP_SimpleEvent_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::pop","zpp_nape/util/Lists.hx",7972);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7972)
		{
		}
		HX_STACK_LINE(7972)
		::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7972)
		this->head = ret->next;
		HX_STACK_LINE(7972)
		{
		}
		HX_STACK_LINE(7972)
		{
			HX_STACK_LINE(7972)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7972)
			{
			}
			HX_STACK_LINE(7972)
			o->elt = null();
			HX_STACK_LINE(7972)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(7972)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7972)
		if (((this->head == null()))){
			HX_STACK_LINE(7972)
			this->pushmod = true;
		}
		HX_STACK_LINE(7972)
		this->modified = true;
		HX_STACK_LINE(7972)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_insert","zpp_nape/util/Lists.hx",7929);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7930)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7938);
			{
				HX_STACK_LINE(7939)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7940)
				{
					HX_STACK_LINE(7941)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(7941)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(7948)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(7949)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7950)
						ret->next = null();
					}
					HX_STACK_LINE(7955)
					Dynamic();
				}
				HX_STACK_LINE(7957)
				ret->elt = o;
				HX_STACK_LINE(7958)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7938)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7960)
	if (((cur == null()))){
		HX_STACK_LINE(7961)
		temp->next = this->head;
		HX_STACK_LINE(7962)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7965)
		temp->next = cur->next;
		HX_STACK_LINE(7966)
		cur->next = temp;
	}
	HX_STACK_LINE(7968)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7969)
	(this->length)++;
	HX_STACK_LINE(7970)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cur,::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::insert","zpp_nape/util/Lists.hx",7927);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &o,::zpp_nape::util::ZNPNode_ZPP_SimpleEvent &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7927);
			{
				HX_STACK_LINE(7927)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7927);
						{
							HX_STACK_LINE(7927)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7927)
							{
								HX_STACK_LINE(7927)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(7927)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(7927)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(7927)
									::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7927)
									ret->next = null();
								}
								HX_STACK_LINE(7927)
								Dynamic();
							}
							HX_STACK_LINE(7927)
							ret->elt = o;
							HX_STACK_LINE(7927)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7927)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7927)
				if (((cur == null()))){
					HX_STACK_LINE(7927)
					temp->next = __this->head;
					HX_STACK_LINE(7927)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(7927)
					temp->next = cur->next;
					HX_STACK_LINE(7927)
					cur->next = temp;
				}
				HX_STACK_LINE(7927)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(7927)
				(__this->length)++;
				HX_STACK_LINE(7927)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(7927)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleEvent_obj,insert,return )

Void ZNPList_ZPP_SimpleEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleEvent x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::addAll","zpp_nape/util/Lists.hx",7909);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(7910)
		{
		}
		HX_STACK_LINE(7918)
		{
			HX_STACK_LINE(7919)
			::zpp_nape::util::ZNPNode_ZPP_SimpleEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7920)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7921)
				::zpp_nape::geom::ZPP_SimpleEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(7922)
				this->add(i);
				HX_STACK_LINE(7923)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,addAll,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::inlined_add","zpp_nape/util/Lists.hx",7872);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7873)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7881);
			{
				HX_STACK_LINE(7882)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7883)
				{
					HX_STACK_LINE(7884)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(7884)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(7891)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
						HX_STACK_LINE(7892)
						::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7893)
						ret->next = null();
					}
					HX_STACK_LINE(7898)
					Dynamic();
				}
				HX_STACK_LINE(7900)
				ret->elt = o;
				HX_STACK_LINE(7901)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7881)
	::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7903)
	temp->next = this->head;
	HX_STACK_LINE(7904)
	this->head = temp;
	HX_STACK_LINE(7905)
	this->modified = true;
	HX_STACK_LINE(7906)
	(this->length)++;
	HX_STACK_LINE(7907)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,inlined_add,return )

::zpp_nape::geom::ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::add( ::zpp_nape::geom::ZPP_SimpleEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::add","zpp_nape/util/Lists.hx",7870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o,::zpp_nape::util::ZNPList_ZPP_SimpleEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7870);
			{
				HX_STACK_LINE(7870)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent Block( ::zpp_nape::geom::ZPP_SimpleEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7870);
						{
							HX_STACK_LINE(7870)
							::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7870)
							{
								HX_STACK_LINE(7870)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(7870)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(7870)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool;
									HX_STACK_LINE(7870)
									::zpp_nape::util::ZNPNode_ZPP_SimpleEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7870)
									ret->next = null();
								}
								HX_STACK_LINE(7870)
								Dynamic();
							}
							HX_STACK_LINE(7870)
							ret->elt = o;
							HX_STACK_LINE(7870)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7870)
				::zpp_nape::util::ZNPNode_ZPP_SimpleEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7870)
				temp->next = __this->head;
				HX_STACK_LINE(7870)
				__this->head = temp;
				HX_STACK_LINE(7870)
				__this->modified = true;
				HX_STACK_LINE(7870)
				(__this->length)++;
				HX_STACK_LINE(7870)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(7870)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,add,return )

Void ZNPList_ZPP_SimpleEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::setbegin","zpp_nape/util/Lists.hx",7865);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(7866)
		this->head = i;
		HX_STACK_LINE(7867)
		this->modified = true;
		HX_STACK_LINE(7868)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleEvent_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleEvent ZNPList_ZPP_SimpleEvent_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleEvent::begin","zpp_nape/util/Lists.hx",7860);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7860)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleEvent_obj,begin,return )


ZNPList_ZPP_SimpleEvent_obj::ZNPList_ZPP_SimpleEvent_obj()
{
}

void ZNPList_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("at"),
	HX_CSTRING("iterator_at"),
	HX_CSTRING("back"),
	HX_CSTRING("front"),
	HX_CSTRING("inlined_has"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("empty"),
	HX_CSTRING("reverse"),
	HX_CSTRING("inlined_clear"),
	HX_CSTRING("clear"),
	HX_CSTRING("splice"),
	HX_CSTRING("inlined_erase"),
	HX_CSTRING("erase"),
	HX_CSTRING("inlined_try_remove"),
	HX_CSTRING("inlined_remove"),
	HX_CSTRING("try_remove"),
	HX_CSTRING("remove"),
	HX_CSTRING("inlined_pop_unsafe"),
	HX_CSTRING("pop_unsafe"),
	HX_CSTRING("inlined_pop"),
	HX_CSTRING("pop"),
	HX_CSTRING("inlined_insert"),
	HX_CSTRING("insert"),
	HX_CSTRING("addAll"),
	HX_CSTRING("inlined_add"),
	HX_CSTRING("add"),
	HX_CSTRING("setbegin"),
	HX_CSTRING("length"),
	HX_CSTRING("pushmod"),
	HX_CSTRING("modified"),
	HX_CSTRING("begin"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleEvent_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SimpleEvent_obj::__mClass;

void ZNPList_ZPP_SimpleEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimpleEvent"), hx::TCanCast< ZNPList_ZPP_SimpleEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SimpleEvent_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
