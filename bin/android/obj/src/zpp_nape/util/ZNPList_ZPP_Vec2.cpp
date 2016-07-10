#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Vec2_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Vec2::new","zpp_nape/util/Lists.hx",9391);
{
	HX_STACK_LINE(9398)
	this->length = (int)0;
	HX_STACK_LINE(9397)
	this->pushmod = false;
	HX_STACK_LINE(9396)
	this->modified = false;
	HX_STACK_LINE(9392)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Vec2_obj::~ZNPList_ZPP_Vec2_obj() { }

Dynamic ZNPList_ZPP_Vec2_obj::__CreateEmpty() { return  new ZNPList_ZPP_Vec2_obj; }
hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > ZNPList_ZPP_Vec2_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > result = new ZNPList_ZPP_Vec2_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Vec2_obj > result = new ZNPList_ZPP_Vec2_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::at","zpp_nape/util/Lists.hx",9761);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9762)
	{
	}
	HX_STACK_LINE(9770)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9771)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_Vec2(it->elt) : ::zpp_nape::geom::ZPP_Vec2(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::iterator_at","zpp_nape/util/Lists.hx",9748);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9749)
	{
	}
	HX_STACK_LINE(9757)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9758)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(9758)
		ret = ret->next;
	}
	HX_STACK_LINE(9759)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,iterator_at,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::back","zpp_nape/util/Lists.hx",9739);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9740)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9741)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9742)
	while(((cur != null()))){
		HX_STACK_LINE(9743)
		ret = cur;
		HX_STACK_LINE(9744)
		cur = cur->next;
	}
	HX_STACK_LINE(9746)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,back,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::front","zpp_nape/util/Lists.hx",9739);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9739)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,front,return )

bool ZNPList_ZPP_Vec2_obj::inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_has","zpp_nape/util/Lists.hx",9709);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9710)
	{
	}
	HX_STACK_LINE(9718)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9719)
	{
		HX_STACK_LINE(9720)
		ret = false;
		HX_STACK_LINE(9721)
		{
			HX_STACK_LINE(9722)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9723)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9724)
				::zpp_nape::geom::ZPP_Vec2 npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9725)
				if (((npite == obj))){
					HX_STACK_LINE(9727)
					ret = true;
					HX_STACK_LINE(9728)
					break;
				}
				HX_STACK_LINE(9731)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9735)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_has,return )

bool ZNPList_ZPP_Vec2_obj::has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::has","zpp_nape/util/Lists.hx",9707);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9707);
			{
				HX_STACK_LINE(9707)
				{
				}
				HX_STACK_LINE(9707)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9707)
				{
					HX_STACK_LINE(9707)
					ret = false;
					HX_STACK_LINE(9707)
					{
						HX_STACK_LINE(9707)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(9707)
						while(((cx_ite != null()))){
							HX_STACK_LINE(9707)
							::zpp_nape::geom::ZPP_Vec2 npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(9707)
							if (((npite == obj))){
								HX_STACK_LINE(9707)
								ret = true;
								HX_STACK_LINE(9707)
								break;
							}
							HX_STACK_LINE(9707)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(9707)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9707)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,has,return )

int ZNPList_ZPP_Vec2_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::size","zpp_nape/util/Lists.hx",9707);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9707)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,size,return )

bool ZNPList_ZPP_Vec2_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::empty","zpp_nape/util/Lists.hx",9705);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9705)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,empty,return )

Void ZNPList_ZPP_Vec2_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::reverse","zpp_nape/util/Lists.hx",9690);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9691)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9692)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9693)
		while(((cur != null()))){
			HX_STACK_LINE(9694)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9695)
			cur->next = pre;
			HX_STACK_LINE(9696)
			this->head = cur;
			HX_STACK_LINE(9697)
			pre = cur;
			HX_STACK_LINE(9698)
			cur = nx;
		}
		HX_STACK_LINE(9700)
		this->modified = true;
		HX_STACK_LINE(9701)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,reverse,(void))

Void ZNPList_ZPP_Vec2_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_clear","zpp_nape/util/Lists.hx",9684);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9686)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9686)
			{
			}
			HX_STACK_LINE(9686)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9686)
			this->head = ret->next;
			HX_STACK_LINE(9686)
			{
			}
			HX_STACK_LINE(9686)
			{
				HX_STACK_LINE(9686)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9686)
				{
				}
				HX_STACK_LINE(9686)
				o->elt = null();
				HX_STACK_LINE(9686)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(9686)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9686)
			if (((this->head == null()))){
				HX_STACK_LINE(9686)
				this->pushmod = true;
			}
			HX_STACK_LINE(9686)
			this->modified = true;
			HX_STACK_LINE(9686)
			(this->length)--;
		}
		HX_STACK_LINE(9687)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_clear,(void))

Void ZNPList_ZPP_Vec2_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::clear","zpp_nape/util/Lists.hx",9682);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9682)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9682)
			{
			}
			HX_STACK_LINE(9682)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9682)
			this->head = ret->next;
			HX_STACK_LINE(9682)
			{
			}
			HX_STACK_LINE(9682)
			{
				HX_STACK_LINE(9682)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9682)
				{
				}
				HX_STACK_LINE(9682)
				o->elt = null();
				HX_STACK_LINE(9682)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(9682)
				::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9682)
			if (((this->head == null()))){
				HX_STACK_LINE(9682)
				this->pushmod = true;
			}
			HX_STACK_LINE(9682)
			this->modified = true;
			HX_STACK_LINE(9682)
			(this->length)--;
		}
		HX_STACK_LINE(9682)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::splice","zpp_nape/util/Lists.hx",9678);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(9679)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(9679)
		this->erase(pre);
	}
	HX_STACK_LINE(9680)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_erase","zpp_nape/util/Lists.hx",9632);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(9633)
	{
	}
	HX_STACK_LINE(9641)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9642)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9643)
	if (((pre == null()))){
		HX_STACK_LINE(9644)
		old = this->head;
		HX_STACK_LINE(9645)
		ret = old->next;
		HX_STACK_LINE(9646)
		this->head = ret;
		HX_STACK_LINE(9647)
		if (((this->head == null()))){
			HX_STACK_LINE(9647)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9650)
		old = pre->next;
		HX_STACK_LINE(9651)
		ret = old->next;
		HX_STACK_LINE(9652)
		pre->next = ret;
		HX_STACK_LINE(9653)
		if (((ret == null()))){
			HX_STACK_LINE(9653)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9655)
	{
	}
	HX_STACK_LINE(9656)
	{
		HX_STACK_LINE(9657)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9658)
		{
		}
		HX_STACK_LINE(9666)
		o->elt = null();
		HX_STACK_LINE(9667)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(9668)
		::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9673)
	this->modified = true;
	HX_STACK_LINE(9674)
	(this->length)--;
	HX_STACK_LINE(9675)
	this->pushmod = true;
	HX_STACK_LINE(9676)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Vec2 pre){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::erase","zpp_nape/util/Lists.hx",9630);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::util::ZNPNode_ZPP_Vec2 &pre,::zpp_nape::util::ZNPList_ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9630);
			{
				HX_STACK_LINE(9630)
				{
				}
				HX_STACK_LINE(9630)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9630)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9630)
				if (((pre == null()))){
					HX_STACK_LINE(9630)
					old = __this->head;
					HX_STACK_LINE(9630)
					ret = old->next;
					HX_STACK_LINE(9630)
					__this->head = ret;
					HX_STACK_LINE(9630)
					if (((__this->head == null()))){
						HX_STACK_LINE(9630)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9630)
					old = pre->next;
					HX_STACK_LINE(9630)
					ret = old->next;
					HX_STACK_LINE(9630)
					pre->next = ret;
					HX_STACK_LINE(9630)
					if (((ret == null()))){
						HX_STACK_LINE(9630)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(9630)
				{
				}
				HX_STACK_LINE(9630)
				{
					HX_STACK_LINE(9630)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9630)
					{
					}
					HX_STACK_LINE(9630)
					o->elt = null();
					HX_STACK_LINE(9630)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(9630)
					::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9630)
				__this->modified = true;
				HX_STACK_LINE(9630)
				(__this->length)--;
				HX_STACK_LINE(9630)
				__this->pushmod = true;
				HX_STACK_LINE(9630)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9630)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,erase,return )

bool ZNPList_ZPP_Vec2_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_try_remove","zpp_nape/util/Lists.hx",9607);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9608)
	{
	}
	HX_STACK_LINE(9616)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9617)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9618)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9619)
	while(((cur != null()))){
		HX_STACK_LINE(9620)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9621)
			{
				HX_STACK_LINE(9621)
				{
				}
				HX_STACK_LINE(9621)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9621)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9621)
				if (((pre == null()))){
					HX_STACK_LINE(9621)
					old = this->head;
					HX_STACK_LINE(9621)
					ret1 = old->next;
					HX_STACK_LINE(9621)
					this->head = ret1;
					HX_STACK_LINE(9621)
					if (((this->head == null()))){
						HX_STACK_LINE(9621)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9621)
					old = pre->next;
					HX_STACK_LINE(9621)
					ret1 = old->next;
					HX_STACK_LINE(9621)
					pre->next = ret1;
					HX_STACK_LINE(9621)
					if (((ret1 == null()))){
						HX_STACK_LINE(9621)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9621)
				{
				}
				HX_STACK_LINE(9621)
				{
					HX_STACK_LINE(9621)
					::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9621)
					{
					}
					HX_STACK_LINE(9621)
					o->elt = null();
					HX_STACK_LINE(9621)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(9621)
					::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9621)
				this->modified = true;
				HX_STACK_LINE(9621)
				(this->length)--;
				HX_STACK_LINE(9621)
				this->pushmod = true;
				HX_STACK_LINE(9621)
				ret1;
			}
			HX_STACK_LINE(9622)
			ret = true;
			HX_STACK_LINE(9623)
			break;
		}
		HX_STACK_LINE(9625)
		pre = cur;
		HX_STACK_LINE(9626)
		cur = cur->next;
	}
	HX_STACK_LINE(9628)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Vec2_obj::inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_remove","zpp_nape/util/Lists.hx",9594);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9595)
		{
		}
		HX_STACK_LINE(9603)
		{
			HX_STACK_LINE(9603)
			{
			}
			HX_STACK_LINE(9603)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9603)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9603)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9603)
			while(((cur != null()))){
				HX_STACK_LINE(9603)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9603)
					{
						HX_STACK_LINE(9603)
						{
						}
						HX_STACK_LINE(9603)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9603)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9603)
						if (((pre == null()))){
							HX_STACK_LINE(9603)
							old = this->head;
							HX_STACK_LINE(9603)
							ret1 = old->next;
							HX_STACK_LINE(9603)
							this->head = ret1;
							HX_STACK_LINE(9603)
							if (((this->head == null()))){
								HX_STACK_LINE(9603)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9603)
							old = pre->next;
							HX_STACK_LINE(9603)
							ret1 = old->next;
							HX_STACK_LINE(9603)
							pre->next = ret1;
							HX_STACK_LINE(9603)
							if (((ret1 == null()))){
								HX_STACK_LINE(9603)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9603)
						{
						}
						HX_STACK_LINE(9603)
						{
							HX_STACK_LINE(9603)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9603)
							{
							}
							HX_STACK_LINE(9603)
							o->elt = null();
							HX_STACK_LINE(9603)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(9603)
							::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9603)
						this->modified = true;
						HX_STACK_LINE(9603)
						(this->length)--;
						HX_STACK_LINE(9603)
						this->pushmod = true;
						HX_STACK_LINE(9603)
						ret1;
					}
					HX_STACK_LINE(9603)
					ret = true;
					HX_STACK_LINE(9603)
					break;
				}
				HX_STACK_LINE(9603)
				pre = cur;
				HX_STACK_LINE(9603)
				cur = cur->next;
			}
			HX_STACK_LINE(9603)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_remove,(void))

bool ZNPList_ZPP_Vec2_obj::try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::try_remove","zpp_nape/util/Lists.hx",9569);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9570)
	{
	}
	HX_STACK_LINE(9578)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9579)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9580)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9581)
	while(((cur != null()))){
		HX_STACK_LINE(9582)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9583)
			this->erase(pre);
			HX_STACK_LINE(9584)
			ret = true;
			HX_STACK_LINE(9585)
			break;
		}
		HX_STACK_LINE(9587)
		pre = cur;
		HX_STACK_LINE(9588)
		cur = cur->next;
	}
	HX_STACK_LINE(9590)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,try_remove,return )

Void ZNPList_ZPP_Vec2_obj::remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::remove","zpp_nape/util/Lists.hx",9558);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9559)
		{
		}
		HX_STACK_LINE(9567)
		{
			HX_STACK_LINE(9567)
			{
			}
			HX_STACK_LINE(9567)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9567)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9567)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9567)
			while(((cur != null()))){
				HX_STACK_LINE(9567)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9567)
					{
						HX_STACK_LINE(9567)
						{
						}
						HX_STACK_LINE(9567)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9567)
						::zpp_nape::util::ZNPNode_ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9567)
						if (((pre == null()))){
							HX_STACK_LINE(9567)
							old = this->head;
							HX_STACK_LINE(9567)
							ret1 = old->next;
							HX_STACK_LINE(9567)
							this->head = ret1;
							HX_STACK_LINE(9567)
							if (((this->head == null()))){
								HX_STACK_LINE(9567)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9567)
							old = pre->next;
							HX_STACK_LINE(9567)
							ret1 = old->next;
							HX_STACK_LINE(9567)
							pre->next = ret1;
							HX_STACK_LINE(9567)
							if (((ret1 == null()))){
								HX_STACK_LINE(9567)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9567)
						{
						}
						HX_STACK_LINE(9567)
						{
							HX_STACK_LINE(9567)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9567)
							{
							}
							HX_STACK_LINE(9567)
							o->elt = null();
							HX_STACK_LINE(9567)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(9567)
							::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9567)
						this->modified = true;
						HX_STACK_LINE(9567)
						(this->length)--;
						HX_STACK_LINE(9567)
						this->pushmod = true;
						HX_STACK_LINE(9567)
						ret1;
					}
					HX_STACK_LINE(9567)
					ret = true;
					HX_STACK_LINE(9567)
					break;
				}
				HX_STACK_LINE(9567)
				pre = cur;
				HX_STACK_LINE(9567)
				cur = cur->next;
			}
			HX_STACK_LINE(9567)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,remove,(void))

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_pop_unsafe","zpp_nape/util/Lists.hx",9545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9546)
	{
	}
	HX_STACK_LINE(9554)
	::zpp_nape::geom::ZPP_Vec2 ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9555)
	this->pop();
	HX_STACK_LINE(9556)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::pop_unsafe","zpp_nape/util/Lists.hx",9543);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::util::ZNPList_ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9543);
			{
				HX_STACK_LINE(9543)
				{
				}
				HX_STACK_LINE(9543)
				::zpp_nape::geom::ZPP_Vec2 ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9543)
				__this->pop();
				HX_STACK_LINE(9543)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9543)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,pop_unsafe,return )

Void ZNPList_ZPP_Vec2_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_pop","zpp_nape/util/Lists.hx",9510);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9511)
		{
		}
		HX_STACK_LINE(9519)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9520)
		this->head = ret->next;
		HX_STACK_LINE(9521)
		{
		}
		HX_STACK_LINE(9522)
		{
			HX_STACK_LINE(9523)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9524)
			{
			}
			HX_STACK_LINE(9532)
			o->elt = null();
			HX_STACK_LINE(9533)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(9534)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9539)
		if (((this->head == null()))){
			HX_STACK_LINE(9539)
			this->pushmod = true;
		}
		HX_STACK_LINE(9540)
		this->modified = true;
		HX_STACK_LINE(9541)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,inlined_pop,(void))

Void ZNPList_ZPP_Vec2_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::pop","zpp_nape/util/Lists.hx",9508);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9508)
		{
		}
		HX_STACK_LINE(9508)
		::zpp_nape::util::ZNPNode_ZPP_Vec2 ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9508)
		this->head = ret->next;
		HX_STACK_LINE(9508)
		{
		}
		HX_STACK_LINE(9508)
		{
			HX_STACK_LINE(9508)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9508)
			{
			}
			HX_STACK_LINE(9508)
			o->elt = null();
			HX_STACK_LINE(9508)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(9508)
			::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9508)
		if (((this->head == null()))){
			HX_STACK_LINE(9508)
			this->pushmod = true;
		}
		HX_STACK_LINE(9508)
		this->modified = true;
		HX_STACK_LINE(9508)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_insert","zpp_nape/util/Lists.hx",9465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9466)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9474);
			{
				HX_STACK_LINE(9475)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9476)
				{
					HX_STACK_LINE(9477)
					if (((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(9477)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(9484)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(9485)
						::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9486)
						ret->next = null();
					}
					HX_STACK_LINE(9491)
					Dynamic();
				}
				HX_STACK_LINE(9493)
				ret->elt = o;
				HX_STACK_LINE(9494)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9474)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9496)
	if (((cur == null()))){
		HX_STACK_LINE(9497)
		temp->next = this->head;
		HX_STACK_LINE(9498)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9501)
		temp->next = cur->next;
		HX_STACK_LINE(9502)
		cur->next = temp;
	}
	HX_STACK_LINE(9504)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(9505)
	(this->length)++;
	HX_STACK_LINE(9506)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::insert","zpp_nape/util/Lists.hx",9463);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::util::ZNPList_ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::util::ZNPNode_ZPP_Vec2 &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9463);
			{
				HX_STACK_LINE(9463)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9463);
						{
							HX_STACK_LINE(9463)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9463)
							{
								HX_STACK_LINE(9463)
								if (((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(9463)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();
								}
								else{
									HX_STACK_LINE(9463)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(9463)
									::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9463)
									ret->next = null();
								}
								HX_STACK_LINE(9463)
								Dynamic();
							}
							HX_STACK_LINE(9463)
							ret->elt = o;
							HX_STACK_LINE(9463)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9463)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9463)
				if (((cur == null()))){
					HX_STACK_LINE(9463)
					temp->next = __this->head;
					HX_STACK_LINE(9463)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(9463)
					temp->next = cur->next;
					HX_STACK_LINE(9463)
					cur->next = temp;
				}
				HX_STACK_LINE(9463)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(9463)
				(__this->length)++;
				HX_STACK_LINE(9463)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(9463)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Vec2_obj,insert,return )

Void ZNPList_ZPP_Vec2_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::addAll","zpp_nape/util/Lists.hx",9445);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(9446)
		{
		}
		HX_STACK_LINE(9454)
		{
			HX_STACK_LINE(9455)
			::zpp_nape::util::ZNPNode_ZPP_Vec2 cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9456)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9457)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(9458)
				this->add(i);
				HX_STACK_LINE(9459)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,addAll,(void))

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::inlined_add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::inlined_add","zpp_nape/util/Lists.hx",9408);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9409)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9417);
			{
				HX_STACK_LINE(9418)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9419)
				{
					HX_STACK_LINE(9420)
					if (((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(9420)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(9427)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(9428)
						::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9429)
						ret->next = null();
					}
					HX_STACK_LINE(9434)
					Dynamic();
				}
				HX_STACK_LINE(9436)
				ret->elt = o;
				HX_STACK_LINE(9437)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9417)
	::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9439)
	temp->next = this->head;
	HX_STACK_LINE(9440)
	this->head = temp;
	HX_STACK_LINE(9441)
	this->modified = true;
	HX_STACK_LINE(9442)
	(this->length)++;
	HX_STACK_LINE(9443)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,inlined_add,return )

::zpp_nape::geom::ZPP_Vec2 ZNPList_ZPP_Vec2_obj::add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::add","zpp_nape/util/Lists.hx",9406);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::util::ZNPList_ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9406);
			{
				HX_STACK_LINE(9406)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9406);
						{
							HX_STACK_LINE(9406)
							::zpp_nape::util::ZNPNode_ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9406)
							{
								HX_STACK_LINE(9406)
								if (((::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(9406)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::__new();
								}
								else{
									HX_STACK_LINE(9406)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(9406)
									::zpp_nape::util::ZNPNode_ZPP_Vec2_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9406)
									ret->next = null();
								}
								HX_STACK_LINE(9406)
								Dynamic();
							}
							HX_STACK_LINE(9406)
							ret->elt = o;
							HX_STACK_LINE(9406)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9406)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9406)
				temp->next = __this->head;
				HX_STACK_LINE(9406)
				__this->head = temp;
				HX_STACK_LINE(9406)
				__this->modified = true;
				HX_STACK_LINE(9406)
				(__this->length)++;
				HX_STACK_LINE(9406)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(9406)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,add,return )

Void ZNPList_ZPP_Vec2_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Vec2 i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Vec2::setbegin","zpp_nape/util/Lists.hx",9401);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(9402)
		this->head = i;
		HX_STACK_LINE(9403)
		this->modified = true;
		HX_STACK_LINE(9404)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Vec2_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Vec2 ZNPList_ZPP_Vec2_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Vec2::begin","zpp_nape/util/Lists.hx",9396);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9396)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Vec2_obj,begin,return )


ZNPList_ZPP_Vec2_obj::ZNPList_ZPP_Vec2_obj()
{
}

void ZNPList_ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Vec2);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Vec2_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Vec2 >(); return inValue; }
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

void ZNPList_ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Vec2_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Vec2_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Vec2_obj::__mClass;

void ZNPList_ZPP_Vec2_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Vec2"), hx::TCanCast< ZNPList_ZPP_Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Vec2_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
