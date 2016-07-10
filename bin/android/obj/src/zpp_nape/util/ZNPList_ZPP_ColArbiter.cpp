#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ColArbiter
#include <zpp_nape/util/ZNPList_ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ColArbiter
#include <zpp_nape/util/ZNPNode_ZPP_ColArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ColArbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::new","zpp_nape/util/Lists.hx",11311);
{
	HX_STACK_LINE(11318)
	this->length = (int)0;
	HX_STACK_LINE(11317)
	this->pushmod = false;
	HX_STACK_LINE(11316)
	this->modified = false;
	HX_STACK_LINE(11312)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_ColArbiter_obj::~ZNPList_ZPP_ColArbiter_obj() { }

Dynamic ZNPList_ZPP_ColArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_ColArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > ZNPList_ZPP_ColArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > result = new ZNPList_ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ColArbiter_obj > result = new ZNPList_ZPP_ColArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::at","zpp_nape/util/Lists.hx",11681);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11682)
	{
	}
	HX_STACK_LINE(11690)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11691)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_ColArbiter(it->elt) : ::zpp_nape::dynamics::ZPP_ColArbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::iterator_at","zpp_nape/util/Lists.hx",11668);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11669)
	{
	}
	HX_STACK_LINE(11677)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11678)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11678)
		ret = ret->next;
	}
	HX_STACK_LINE(11679)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::back","zpp_nape/util/Lists.hx",11659);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11660)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11661)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11662)
	while(((cur != null()))){
		HX_STACK_LINE(11663)
		ret = cur;
		HX_STACK_LINE(11664)
		cur = cur->next;
	}
	HX_STACK_LINE(11666)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::front","zpp_nape/util/Lists.hx",11659);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11659)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,front,return )

bool ZNPList_ZPP_ColArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_has","zpp_nape/util/Lists.hx",11629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11630)
	{
	}
	HX_STACK_LINE(11638)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11639)
	{
		HX_STACK_LINE(11640)
		ret = false;
		HX_STACK_LINE(11641)
		{
			HX_STACK_LINE(11642)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11643)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11644)
				::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11645)
				if (((npite == obj))){
					HX_STACK_LINE(11647)
					ret = true;
					HX_STACK_LINE(11648)
					break;
				}
				HX_STACK_LINE(11651)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11655)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_ColArbiter_obj::has( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::has","zpp_nape/util/Lists.hx",11627);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_ColArbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11627);
			{
				HX_STACK_LINE(11627)
				{
				}
				HX_STACK_LINE(11627)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11627)
				{
					HX_STACK_LINE(11627)
					ret = false;
					HX_STACK_LINE(11627)
					{
						HX_STACK_LINE(11627)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(11627)
						while(((cx_ite != null()))){
							HX_STACK_LINE(11627)
							::zpp_nape::dynamics::ZPP_ColArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(11627)
							if (((npite == obj))){
								HX_STACK_LINE(11627)
								ret = true;
								HX_STACK_LINE(11627)
								break;
							}
							HX_STACK_LINE(11627)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(11627)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11627)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,has,return )

int ZNPList_ZPP_ColArbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::size","zpp_nape/util/Lists.hx",11627);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11627)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,size,return )

bool ZNPList_ZPP_ColArbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::empty","zpp_nape/util/Lists.hx",11625);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11625)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,empty,return )

Void ZNPList_ZPP_ColArbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::reverse","zpp_nape/util/Lists.hx",11610);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11611)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11612)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11613)
		while(((cur != null()))){
			HX_STACK_LINE(11614)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11615)
			cur->next = pre;
			HX_STACK_LINE(11616)
			this->head = cur;
			HX_STACK_LINE(11617)
			pre = cur;
			HX_STACK_LINE(11618)
			cur = nx;
		}
		HX_STACK_LINE(11620)
		this->modified = true;
		HX_STACK_LINE(11621)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,reverse,(void))

Void ZNPList_ZPP_ColArbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_clear","zpp_nape/util/Lists.hx",11604);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11606)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11606)
			{
			}
			HX_STACK_LINE(11606)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11606)
			this->head = ret->next;
			HX_STACK_LINE(11606)
			{
			}
			HX_STACK_LINE(11606)
			{
				HX_STACK_LINE(11606)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11606)
				{
				}
				HX_STACK_LINE(11606)
				o->elt = null();
				HX_STACK_LINE(11606)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11606)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11606)
			if (((this->head == null()))){
				HX_STACK_LINE(11606)
				this->pushmod = true;
			}
			HX_STACK_LINE(11606)
			this->modified = true;
			HX_STACK_LINE(11606)
			(this->length)--;
		}
		HX_STACK_LINE(11607)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_ColArbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::clear","zpp_nape/util/Lists.hx",11602);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11602)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11602)
			{
			}
			HX_STACK_LINE(11602)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11602)
			this->head = ret->next;
			HX_STACK_LINE(11602)
			{
			}
			HX_STACK_LINE(11602)
			{
				HX_STACK_LINE(11602)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11602)
				{
				}
				HX_STACK_LINE(11602)
				o->elt = null();
				HX_STACK_LINE(11602)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
				HX_STACK_LINE(11602)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11602)
			if (((this->head == null()))){
				HX_STACK_LINE(11602)
				this->pushmod = true;
			}
			HX_STACK_LINE(11602)
			this->modified = true;
			HX_STACK_LINE(11602)
			(this->length)--;
		}
		HX_STACK_LINE(11602)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::splice","zpp_nape/util/Lists.hx",11598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(11599)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11599)
		this->erase(pre);
	}
	HX_STACK_LINE(11600)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_erase","zpp_nape/util/Lists.hx",11552);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(11553)
	{
	}
	HX_STACK_LINE(11561)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11562)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11563)
	if (((pre == null()))){
		HX_STACK_LINE(11564)
		old = this->head;
		HX_STACK_LINE(11565)
		ret = old->next;
		HX_STACK_LINE(11566)
		this->head = ret;
		HX_STACK_LINE(11567)
		if (((this->head == null()))){
			HX_STACK_LINE(11567)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11570)
		old = pre->next;
		HX_STACK_LINE(11571)
		ret = old->next;
		HX_STACK_LINE(11572)
		pre->next = ret;
		HX_STACK_LINE(11573)
		if (((ret == null()))){
			HX_STACK_LINE(11573)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11575)
	{
	}
	HX_STACK_LINE(11576)
	{
		HX_STACK_LINE(11577)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11578)
		{
		}
		HX_STACK_LINE(11586)
		o->elt = null();
		HX_STACK_LINE(11587)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
		HX_STACK_LINE(11588)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11593)
	this->modified = true;
	HX_STACK_LINE(11594)
	(this->length)--;
	HX_STACK_LINE(11595)
	this->pushmod = true;
	HX_STACK_LINE(11596)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::erase","zpp_nape/util/Lists.hx",11550);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter &pre,::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11550);
			{
				HX_STACK_LINE(11550)
				{
				}
				HX_STACK_LINE(11550)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11550)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11550)
				if (((pre == null()))){
					HX_STACK_LINE(11550)
					old = __this->head;
					HX_STACK_LINE(11550)
					ret = old->next;
					HX_STACK_LINE(11550)
					__this->head = ret;
					HX_STACK_LINE(11550)
					if (((__this->head == null()))){
						HX_STACK_LINE(11550)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11550)
					old = pre->next;
					HX_STACK_LINE(11550)
					ret = old->next;
					HX_STACK_LINE(11550)
					pre->next = ret;
					HX_STACK_LINE(11550)
					if (((ret == null()))){
						HX_STACK_LINE(11550)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(11550)
				{
				}
				HX_STACK_LINE(11550)
				{
					HX_STACK_LINE(11550)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11550)
					{
					}
					HX_STACK_LINE(11550)
					o->elt = null();
					HX_STACK_LINE(11550)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
					HX_STACK_LINE(11550)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11550)
				__this->modified = true;
				HX_STACK_LINE(11550)
				(__this->length)--;
				HX_STACK_LINE(11550)
				__this->pushmod = true;
				HX_STACK_LINE(11550)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11550)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,erase,return )

bool ZNPList_ZPP_ColArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_try_remove","zpp_nape/util/Lists.hx",11527);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11528)
	{
	}
	HX_STACK_LINE(11536)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11537)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11538)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11539)
	while(((cur != null()))){
		HX_STACK_LINE(11540)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11541)
			{
				HX_STACK_LINE(11541)
				{
				}
				HX_STACK_LINE(11541)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11541)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11541)
				if (((pre == null()))){
					HX_STACK_LINE(11541)
					old = this->head;
					HX_STACK_LINE(11541)
					ret1 = old->next;
					HX_STACK_LINE(11541)
					this->head = ret1;
					HX_STACK_LINE(11541)
					if (((this->head == null()))){
						HX_STACK_LINE(11541)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11541)
					old = pre->next;
					HX_STACK_LINE(11541)
					ret1 = old->next;
					HX_STACK_LINE(11541)
					pre->next = ret1;
					HX_STACK_LINE(11541)
					if (((ret1 == null()))){
						HX_STACK_LINE(11541)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11541)
				{
				}
				HX_STACK_LINE(11541)
				{
					HX_STACK_LINE(11541)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11541)
					{
					}
					HX_STACK_LINE(11541)
					o->elt = null();
					HX_STACK_LINE(11541)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
					HX_STACK_LINE(11541)
					::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11541)
				this->modified = true;
				HX_STACK_LINE(11541)
				(this->length)--;
				HX_STACK_LINE(11541)
				this->pushmod = true;
				HX_STACK_LINE(11541)
				ret1;
			}
			HX_STACK_LINE(11542)
			ret = true;
			HX_STACK_LINE(11543)
			break;
		}
		HX_STACK_LINE(11545)
		pre = cur;
		HX_STACK_LINE(11546)
		cur = cur->next;
	}
	HX_STACK_LINE(11548)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_ColArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_remove","zpp_nape/util/Lists.hx",11514);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11515)
		{
		}
		HX_STACK_LINE(11523)
		{
			HX_STACK_LINE(11523)
			{
			}
			HX_STACK_LINE(11523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11523)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11523)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11523)
			while(((cur != null()))){
				HX_STACK_LINE(11523)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11523)
					{
						HX_STACK_LINE(11523)
						{
						}
						HX_STACK_LINE(11523)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11523)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11523)
						if (((pre == null()))){
							HX_STACK_LINE(11523)
							old = this->head;
							HX_STACK_LINE(11523)
							ret1 = old->next;
							HX_STACK_LINE(11523)
							this->head = ret1;
							HX_STACK_LINE(11523)
							if (((this->head == null()))){
								HX_STACK_LINE(11523)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11523)
							old = pre->next;
							HX_STACK_LINE(11523)
							ret1 = old->next;
							HX_STACK_LINE(11523)
							pre->next = ret1;
							HX_STACK_LINE(11523)
							if (((ret1 == null()))){
								HX_STACK_LINE(11523)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11523)
						{
						}
						HX_STACK_LINE(11523)
						{
							HX_STACK_LINE(11523)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11523)
							{
							}
							HX_STACK_LINE(11523)
							o->elt = null();
							HX_STACK_LINE(11523)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
							HX_STACK_LINE(11523)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11523)
						this->modified = true;
						HX_STACK_LINE(11523)
						(this->length)--;
						HX_STACK_LINE(11523)
						this->pushmod = true;
						HX_STACK_LINE(11523)
						ret1;
					}
					HX_STACK_LINE(11523)
					ret = true;
					HX_STACK_LINE(11523)
					break;
				}
				HX_STACK_LINE(11523)
				pre = cur;
				HX_STACK_LINE(11523)
				cur = cur->next;
			}
			HX_STACK_LINE(11523)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_ColArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::try_remove","zpp_nape/util/Lists.hx",11489);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11490)
	{
	}
	HX_STACK_LINE(11498)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11499)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11500)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11501)
	while(((cur != null()))){
		HX_STACK_LINE(11502)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11503)
			this->erase(pre);
			HX_STACK_LINE(11504)
			ret = true;
			HX_STACK_LINE(11505)
			break;
		}
		HX_STACK_LINE(11507)
		pre = cur;
		HX_STACK_LINE(11508)
		cur = cur->next;
	}
	HX_STACK_LINE(11510)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,try_remove,return )

Void ZNPList_ZPP_ColArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_ColArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::remove","zpp_nape/util/Lists.hx",11478);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11479)
		{
		}
		HX_STACK_LINE(11487)
		{
			HX_STACK_LINE(11487)
			{
			}
			HX_STACK_LINE(11487)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11487)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11487)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11487)
			while(((cur != null()))){
				HX_STACK_LINE(11487)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11487)
					{
						HX_STACK_LINE(11487)
						{
						}
						HX_STACK_LINE(11487)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11487)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11487)
						if (((pre == null()))){
							HX_STACK_LINE(11487)
							old = this->head;
							HX_STACK_LINE(11487)
							ret1 = old->next;
							HX_STACK_LINE(11487)
							this->head = ret1;
							HX_STACK_LINE(11487)
							if (((this->head == null()))){
								HX_STACK_LINE(11487)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11487)
							old = pre->next;
							HX_STACK_LINE(11487)
							ret1 = old->next;
							HX_STACK_LINE(11487)
							pre->next = ret1;
							HX_STACK_LINE(11487)
							if (((ret1 == null()))){
								HX_STACK_LINE(11487)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11487)
						{
						}
						HX_STACK_LINE(11487)
						{
							HX_STACK_LINE(11487)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11487)
							{
							}
							HX_STACK_LINE(11487)
							o->elt = null();
							HX_STACK_LINE(11487)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
							HX_STACK_LINE(11487)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11487)
						this->modified = true;
						HX_STACK_LINE(11487)
						(this->length)--;
						HX_STACK_LINE(11487)
						this->pushmod = true;
						HX_STACK_LINE(11487)
						ret1;
					}
					HX_STACK_LINE(11487)
					ret = true;
					HX_STACK_LINE(11487)
					break;
				}
				HX_STACK_LINE(11487)
				pre = cur;
				HX_STACK_LINE(11487)
				cur = cur->next;
			}
			HX_STACK_LINE(11487)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",11465);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11466)
	{
	}
	HX_STACK_LINE(11474)
	::zpp_nape::dynamics::ZPP_ColArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11475)
	this->pop();
	HX_STACK_LINE(11476)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::pop_unsafe","zpp_nape/util/Lists.hx",11463);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_ColArbiter Block( ::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11463);
			{
				HX_STACK_LINE(11463)
				{
				}
				HX_STACK_LINE(11463)
				::zpp_nape::dynamics::ZPP_ColArbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11463)
				__this->pop();
				HX_STACK_LINE(11463)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11463)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_ColArbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_pop","zpp_nape/util/Lists.hx",11430);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11431)
		{
		}
		HX_STACK_LINE(11439)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11440)
		this->head = ret->next;
		HX_STACK_LINE(11441)
		{
		}
		HX_STACK_LINE(11442)
		{
			HX_STACK_LINE(11443)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11444)
			{
			}
			HX_STACK_LINE(11452)
			o->elt = null();
			HX_STACK_LINE(11453)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(11454)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11459)
		if (((this->head == null()))){
			HX_STACK_LINE(11459)
			this->pushmod = true;
		}
		HX_STACK_LINE(11460)
		this->modified = true;
		HX_STACK_LINE(11461)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_ColArbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::pop","zpp_nape/util/Lists.hx",11428);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11428)
		{
		}
		HX_STACK_LINE(11428)
		::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11428)
		this->head = ret->next;
		HX_STACK_LINE(11428)
		{
		}
		HX_STACK_LINE(11428)
		{
			HX_STACK_LINE(11428)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11428)
			{
			}
			HX_STACK_LINE(11428)
			o->elt = null();
			HX_STACK_LINE(11428)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
			HX_STACK_LINE(11428)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11428)
		if (((this->head == null()))){
			HX_STACK_LINE(11428)
			this->pushmod = true;
		}
		HX_STACK_LINE(11428)
		this->modified = true;
		HX_STACK_LINE(11428)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_insert","zpp_nape/util/Lists.hx",11385);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(11386)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11394);
			{
				HX_STACK_LINE(11395)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11396)
				{
					HX_STACK_LINE(11397)
					if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(11397)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(11404)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
						HX_STACK_LINE(11405)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11406)
						ret->next = null();
					}
					HX_STACK_LINE(11411)
					Dynamic();
				}
				HX_STACK_LINE(11413)
				ret->elt = o;
				HX_STACK_LINE(11414)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11394)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11416)
	if (((cur == null()))){
		HX_STACK_LINE(11417)
		temp->next = this->head;
		HX_STACK_LINE(11418)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11421)
		temp->next = cur->next;
		HX_STACK_LINE(11422)
		cur->next = temp;
	}
	HX_STACK_LINE(11424)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11425)
	(this->length)++;
	HX_STACK_LINE(11426)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter cur,::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::insert","zpp_nape/util/Lists.hx",11383);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj *__this,::zpp_nape::dynamics::ZPP_ColArbiter &o,::zpp_nape::util::ZNPNode_ZPP_ColArbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11383);
			{
				HX_STACK_LINE(11383)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11383);
						{
							HX_STACK_LINE(11383)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11383)
							{
								HX_STACK_LINE(11383)
								if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(11383)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(11383)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
									HX_STACK_LINE(11383)
									::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11383)
									ret->next = null();
								}
								HX_STACK_LINE(11383)
								Dynamic();
							}
							HX_STACK_LINE(11383)
							ret->elt = o;
							HX_STACK_LINE(11383)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11383)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11383)
				if (((cur == null()))){
					HX_STACK_LINE(11383)
					temp->next = __this->head;
					HX_STACK_LINE(11383)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(11383)
					temp->next = cur->next;
					HX_STACK_LINE(11383)
					cur->next = temp;
				}
				HX_STACK_LINE(11383)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(11383)
				(__this->length)++;
				HX_STACK_LINE(11383)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(11383)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ColArbiter_obj,insert,return )

Void ZNPList_ZPP_ColArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ColArbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::addAll","zpp_nape/util/Lists.hx",11365);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(11366)
		{
		}
		HX_STACK_LINE(11374)
		{
			HX_STACK_LINE(11375)
			::zpp_nape::util::ZNPNode_ZPP_ColArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11376)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11377)
				::zpp_nape::dynamics::ZPP_ColArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(11378)
				this->add(i);
				HX_STACK_LINE(11379)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::inlined_add","zpp_nape/util/Lists.hx",11328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(11329)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11337);
			{
				HX_STACK_LINE(11338)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11339)
				{
					HX_STACK_LINE(11340)
					if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(11340)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(11347)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
						HX_STACK_LINE(11348)
						::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11349)
						ret->next = null();
					}
					HX_STACK_LINE(11354)
					Dynamic();
				}
				HX_STACK_LINE(11356)
				ret->elt = o;
				HX_STACK_LINE(11357)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11337)
	::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11359)
	temp->next = this->head;
	HX_STACK_LINE(11360)
	this->head = temp;
	HX_STACK_LINE(11361)
	this->modified = true;
	HX_STACK_LINE(11362)
	(this->length)++;
	HX_STACK_LINE(11363)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::add( ::zpp_nape::dynamics::ZPP_ColArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::add","zpp_nape/util/Lists.hx",11326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_ColArbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter &o,::zpp_nape::util::ZNPList_ZPP_ColArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11326);
			{
				HX_STACK_LINE(11326)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ColArbiter Block( ::zpp_nape::dynamics::ZPP_ColArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11326);
						{
							HX_STACK_LINE(11326)
							::zpp_nape::util::ZNPNode_ZPP_ColArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11326)
							{
								HX_STACK_LINE(11326)
								if (((::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(11326)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(11326)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool;
									HX_STACK_LINE(11326)
									::zpp_nape::util::ZNPNode_ZPP_ColArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11326)
									ret->next = null();
								}
								HX_STACK_LINE(11326)
								Dynamic();
							}
							HX_STACK_LINE(11326)
							ret->elt = o;
							HX_STACK_LINE(11326)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11326)
				::zpp_nape::util::ZNPNode_ZPP_ColArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11326)
				temp->next = __this->head;
				HX_STACK_LINE(11326)
				__this->head = temp;
				HX_STACK_LINE(11326)
				__this->modified = true;
				HX_STACK_LINE(11326)
				(__this->length)++;
				HX_STACK_LINE(11326)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(11326)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,add,return )

Void ZNPList_ZPP_ColArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ColArbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::setbegin","zpp_nape/util/Lists.hx",11321);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(11322)
		this->head = i;
		HX_STACK_LINE(11323)
		this->modified = true;
		HX_STACK_LINE(11324)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ColArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_ColArbiter ZNPList_ZPP_ColArbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_ColArbiter::begin","zpp_nape/util/Lists.hx",11316);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11316)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ColArbiter_obj,begin,return )


ZNPList_ZPP_ColArbiter_obj::ZNPList_ZPP_ColArbiter_obj()
{
}

void ZNPList_ZPP_ColArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ColArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ColArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_ColArbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ColArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ColArbiter >(); return inValue; }
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

void ZNPList_ZPP_ColArbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ColArbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_ColArbiter_obj::__mClass;

void ZNPList_ZPP_ColArbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ColArbiter"), hx::TCanCast< ZNPList_ZPP_ColArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_ColArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
