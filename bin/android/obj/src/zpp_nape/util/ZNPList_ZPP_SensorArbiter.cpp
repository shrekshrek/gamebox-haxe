#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_SensorArbiter
#include <zpp_nape/dynamics/ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPList_ZPP_SensorArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SensorArbiter
#include <zpp_nape/util/ZNPNode_ZPP_SensorArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SensorArbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::new","zpp_nape/util/Lists.hx",10159);
{
	HX_STACK_LINE(10166)
	this->length = (int)0;
	HX_STACK_LINE(10165)
	this->pushmod = false;
	HX_STACK_LINE(10164)
	this->modified = false;
	HX_STACK_LINE(10160)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SensorArbiter_obj::~ZNPList_ZPP_SensorArbiter_obj() { }

Dynamic ZNPList_ZPP_SensorArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_SensorArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > ZNPList_ZPP_SensorArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SensorArbiter_obj > result = new ZNPList_ZPP_SensorArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::at","zpp_nape/util/Lists.hx",10529);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10530)
	{
	}
	HX_STACK_LINE(10538)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10539)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_SensorArbiter(it->elt) : ::zpp_nape::dynamics::ZPP_SensorArbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::iterator_at","zpp_nape/util/Lists.hx",10516);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10517)
	{
	}
	HX_STACK_LINE(10525)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10526)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(10526)
		ret = ret->next;
	}
	HX_STACK_LINE(10527)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::back","zpp_nape/util/Lists.hx",10507);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10508)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10509)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10510)
	while(((cur != null()))){
		HX_STACK_LINE(10511)
		ret = cur;
		HX_STACK_LINE(10512)
		cur = cur->next;
	}
	HX_STACK_LINE(10514)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::front","zpp_nape/util/Lists.hx",10507);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10507)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,front,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_has","zpp_nape/util/Lists.hx",10477);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10478)
	{
	}
	HX_STACK_LINE(10486)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10487)
	{
		HX_STACK_LINE(10488)
		ret = false;
		HX_STACK_LINE(10489)
		{
			HX_STACK_LINE(10490)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10491)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10492)
				::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10493)
				if (((npite == obj))){
					HX_STACK_LINE(10495)
					ret = true;
					HX_STACK_LINE(10496)
					break;
				}
				HX_STACK_LINE(10499)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10503)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_SensorArbiter_obj::has( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::has","zpp_nape/util/Lists.hx",10475);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::dynamics::ZPP_SensorArbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10475);
			{
				HX_STACK_LINE(10475)
				{
				}
				HX_STACK_LINE(10475)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10475)
				{
					HX_STACK_LINE(10475)
					ret = false;
					HX_STACK_LINE(10475)
					{
						HX_STACK_LINE(10475)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(10475)
						while(((cx_ite != null()))){
							HX_STACK_LINE(10475)
							::zpp_nape::dynamics::ZPP_SensorArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(10475)
							if (((npite == obj))){
								HX_STACK_LINE(10475)
								ret = true;
								HX_STACK_LINE(10475)
								break;
							}
							HX_STACK_LINE(10475)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(10475)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10475)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,has,return )

int ZNPList_ZPP_SensorArbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::size","zpp_nape/util/Lists.hx",10475);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10475)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,size,return )

bool ZNPList_ZPP_SensorArbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::empty","zpp_nape/util/Lists.hx",10473);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10473)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,empty,return )

Void ZNPList_ZPP_SensorArbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::reverse","zpp_nape/util/Lists.hx",10458);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10459)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10460)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10461)
		while(((cur != null()))){
			HX_STACK_LINE(10462)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10463)
			cur->next = pre;
			HX_STACK_LINE(10464)
			this->head = cur;
			HX_STACK_LINE(10465)
			pre = cur;
			HX_STACK_LINE(10466)
			cur = nx;
		}
		HX_STACK_LINE(10468)
		this->modified = true;
		HX_STACK_LINE(10469)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,reverse,(void))

Void ZNPList_ZPP_SensorArbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_clear","zpp_nape/util/Lists.hx",10452);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10454)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10454)
			{
			}
			HX_STACK_LINE(10454)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10454)
			this->head = ret->next;
			HX_STACK_LINE(10454)
			{
			}
			HX_STACK_LINE(10454)
			{
				HX_STACK_LINE(10454)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10454)
				{
				}
				HX_STACK_LINE(10454)
				o->elt = null();
				HX_STACK_LINE(10454)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(10454)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10454)
			if (((this->head == null()))){
				HX_STACK_LINE(10454)
				this->pushmod = true;
			}
			HX_STACK_LINE(10454)
			this->modified = true;
			HX_STACK_LINE(10454)
			(this->length)--;
		}
		HX_STACK_LINE(10455)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_SensorArbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::clear","zpp_nape/util/Lists.hx",10450);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10450)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10450)
			{
			}
			HX_STACK_LINE(10450)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10450)
			this->head = ret->next;
			HX_STACK_LINE(10450)
			{
			}
			HX_STACK_LINE(10450)
			{
				HX_STACK_LINE(10450)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10450)
				{
				}
				HX_STACK_LINE(10450)
				o->elt = null();
				HX_STACK_LINE(10450)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
				HX_STACK_LINE(10450)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10450)
			if (((this->head == null()))){
				HX_STACK_LINE(10450)
				this->pushmod = true;
			}
			HX_STACK_LINE(10450)
			this->modified = true;
			HX_STACK_LINE(10450)
			(this->length)--;
		}
		HX_STACK_LINE(10450)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::splice","zpp_nape/util/Lists.hx",10446);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(10447)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(10447)
		this->erase(pre);
	}
	HX_STACK_LINE(10448)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_erase","zpp_nape/util/Lists.hx",10400);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(10401)
	{
	}
	HX_STACK_LINE(10409)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10410)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10411)
	if (((pre == null()))){
		HX_STACK_LINE(10412)
		old = this->head;
		HX_STACK_LINE(10413)
		ret = old->next;
		HX_STACK_LINE(10414)
		this->head = ret;
		HX_STACK_LINE(10415)
		if (((this->head == null()))){
			HX_STACK_LINE(10415)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10418)
		old = pre->next;
		HX_STACK_LINE(10419)
		ret = old->next;
		HX_STACK_LINE(10420)
		pre->next = ret;
		HX_STACK_LINE(10421)
		if (((ret == null()))){
			HX_STACK_LINE(10421)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10423)
	{
	}
	HX_STACK_LINE(10424)
	{
		HX_STACK_LINE(10425)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10426)
		{
		}
		HX_STACK_LINE(10434)
		o->elt = null();
		HX_STACK_LINE(10435)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
		HX_STACK_LINE(10436)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10441)
	this->modified = true;
	HX_STACK_LINE(10442)
	(this->length)--;
	HX_STACK_LINE(10443)
	this->pushmod = true;
	HX_STACK_LINE(10444)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::erase","zpp_nape/util/Lists.hx",10398);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter &pre,::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10398);
			{
				HX_STACK_LINE(10398)
				{
				}
				HX_STACK_LINE(10398)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10398)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10398)
				if (((pre == null()))){
					HX_STACK_LINE(10398)
					old = __this->head;
					HX_STACK_LINE(10398)
					ret = old->next;
					HX_STACK_LINE(10398)
					__this->head = ret;
					HX_STACK_LINE(10398)
					if (((__this->head == null()))){
						HX_STACK_LINE(10398)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10398)
					old = pre->next;
					HX_STACK_LINE(10398)
					ret = old->next;
					HX_STACK_LINE(10398)
					pre->next = ret;
					HX_STACK_LINE(10398)
					if (((ret == null()))){
						HX_STACK_LINE(10398)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(10398)
				{
				}
				HX_STACK_LINE(10398)
				{
					HX_STACK_LINE(10398)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10398)
					{
					}
					HX_STACK_LINE(10398)
					o->elt = null();
					HX_STACK_LINE(10398)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(10398)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10398)
				__this->modified = true;
				HX_STACK_LINE(10398)
				(__this->length)--;
				HX_STACK_LINE(10398)
				__this->pushmod = true;
				HX_STACK_LINE(10398)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10398)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,erase,return )

bool ZNPList_ZPP_SensorArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_try_remove","zpp_nape/util/Lists.hx",10375);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10376)
	{
	}
	HX_STACK_LINE(10384)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10385)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10386)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10387)
	while(((cur != null()))){
		HX_STACK_LINE(10388)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10389)
			{
				HX_STACK_LINE(10389)
				{
				}
				HX_STACK_LINE(10389)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10389)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10389)
				if (((pre == null()))){
					HX_STACK_LINE(10389)
					old = this->head;
					HX_STACK_LINE(10389)
					ret1 = old->next;
					HX_STACK_LINE(10389)
					this->head = ret1;
					HX_STACK_LINE(10389)
					if (((this->head == null()))){
						HX_STACK_LINE(10389)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10389)
					old = pre->next;
					HX_STACK_LINE(10389)
					ret1 = old->next;
					HX_STACK_LINE(10389)
					pre->next = ret1;
					HX_STACK_LINE(10389)
					if (((ret1 == null()))){
						HX_STACK_LINE(10389)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10389)
				{
				}
				HX_STACK_LINE(10389)
				{
					HX_STACK_LINE(10389)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10389)
					{
					}
					HX_STACK_LINE(10389)
					o->elt = null();
					HX_STACK_LINE(10389)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
					HX_STACK_LINE(10389)
					::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10389)
				this->modified = true;
				HX_STACK_LINE(10389)
				(this->length)--;
				HX_STACK_LINE(10389)
				this->pushmod = true;
				HX_STACK_LINE(10389)
				ret1;
			}
			HX_STACK_LINE(10390)
			ret = true;
			HX_STACK_LINE(10391)
			break;
		}
		HX_STACK_LINE(10393)
		pre = cur;
		HX_STACK_LINE(10394)
		cur = cur->next;
	}
	HX_STACK_LINE(10396)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_remove","zpp_nape/util/Lists.hx",10362);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(10363)
		{
		}
		HX_STACK_LINE(10371)
		{
			HX_STACK_LINE(10371)
			{
			}
			HX_STACK_LINE(10371)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(10371)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(10371)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10371)
			while(((cur != null()))){
				HX_STACK_LINE(10371)
				if (((cur->elt == obj))){
					HX_STACK_LINE(10371)
					{
						HX_STACK_LINE(10371)
						{
						}
						HX_STACK_LINE(10371)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(10371)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(10371)
						if (((pre == null()))){
							HX_STACK_LINE(10371)
							old = this->head;
							HX_STACK_LINE(10371)
							ret1 = old->next;
							HX_STACK_LINE(10371)
							this->head = ret1;
							HX_STACK_LINE(10371)
							if (((this->head == null()))){
								HX_STACK_LINE(10371)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(10371)
							old = pre->next;
							HX_STACK_LINE(10371)
							ret1 = old->next;
							HX_STACK_LINE(10371)
							pre->next = ret1;
							HX_STACK_LINE(10371)
							if (((ret1 == null()))){
								HX_STACK_LINE(10371)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(10371)
						{
						}
						HX_STACK_LINE(10371)
						{
							HX_STACK_LINE(10371)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(10371)
							{
							}
							HX_STACK_LINE(10371)
							o->elt = null();
							HX_STACK_LINE(10371)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
							HX_STACK_LINE(10371)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(10371)
						this->modified = true;
						HX_STACK_LINE(10371)
						(this->length)--;
						HX_STACK_LINE(10371)
						this->pushmod = true;
						HX_STACK_LINE(10371)
						ret1;
					}
					HX_STACK_LINE(10371)
					ret = true;
					HX_STACK_LINE(10371)
					break;
				}
				HX_STACK_LINE(10371)
				pre = cur;
				HX_STACK_LINE(10371)
				cur = cur->next;
			}
			HX_STACK_LINE(10371)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_SensorArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::try_remove","zpp_nape/util/Lists.hx",10337);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10338)
	{
	}
	HX_STACK_LINE(10346)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10347)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10348)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10349)
	while(((cur != null()))){
		HX_STACK_LINE(10350)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10351)
			this->erase(pre);
			HX_STACK_LINE(10352)
			ret = true;
			HX_STACK_LINE(10353)
			break;
		}
		HX_STACK_LINE(10355)
		pre = cur;
		HX_STACK_LINE(10356)
		cur = cur->next;
	}
	HX_STACK_LINE(10358)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,try_remove,return )

Void ZNPList_ZPP_SensorArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_SensorArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::remove","zpp_nape/util/Lists.hx",10326);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(10327)
		{
		}
		HX_STACK_LINE(10335)
		{
			HX_STACK_LINE(10335)
			{
			}
			HX_STACK_LINE(10335)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(10335)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(10335)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10335)
			while(((cur != null()))){
				HX_STACK_LINE(10335)
				if (((cur->elt == obj))){
					HX_STACK_LINE(10335)
					{
						HX_STACK_LINE(10335)
						{
						}
						HX_STACK_LINE(10335)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(10335)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(10335)
						if (((pre == null()))){
							HX_STACK_LINE(10335)
							old = this->head;
							HX_STACK_LINE(10335)
							ret1 = old->next;
							HX_STACK_LINE(10335)
							this->head = ret1;
							HX_STACK_LINE(10335)
							if (((this->head == null()))){
								HX_STACK_LINE(10335)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(10335)
							old = pre->next;
							HX_STACK_LINE(10335)
							ret1 = old->next;
							HX_STACK_LINE(10335)
							pre->next = ret1;
							HX_STACK_LINE(10335)
							if (((ret1 == null()))){
								HX_STACK_LINE(10335)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(10335)
						{
						}
						HX_STACK_LINE(10335)
						{
							HX_STACK_LINE(10335)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(10335)
							{
							}
							HX_STACK_LINE(10335)
							o->elt = null();
							HX_STACK_LINE(10335)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
							HX_STACK_LINE(10335)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(10335)
						this->modified = true;
						HX_STACK_LINE(10335)
						(this->length)--;
						HX_STACK_LINE(10335)
						this->pushmod = true;
						HX_STACK_LINE(10335)
						ret1;
					}
					HX_STACK_LINE(10335)
					ret = true;
					HX_STACK_LINE(10335)
					break;
				}
				HX_STACK_LINE(10335)
				pre = cur;
				HX_STACK_LINE(10335)
				cur = cur->next;
			}
			HX_STACK_LINE(10335)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",10313);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10314)
	{
	}
	HX_STACK_LINE(10322)
	::zpp_nape::dynamics::ZPP_SensorArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10323)
	this->pop();
	HX_STACK_LINE(10324)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::pop_unsafe","zpp_nape/util/Lists.hx",10311);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10311);
			{
				HX_STACK_LINE(10311)
				{
				}
				HX_STACK_LINE(10311)
				::zpp_nape::dynamics::ZPP_SensorArbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10311)
				__this->pop();
				HX_STACK_LINE(10311)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10311)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_SensorArbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_pop","zpp_nape/util/Lists.hx",10278);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10279)
		{
		}
		HX_STACK_LINE(10287)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10288)
		this->head = ret->next;
		HX_STACK_LINE(10289)
		{
		}
		HX_STACK_LINE(10290)
		{
			HX_STACK_LINE(10291)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10292)
			{
			}
			HX_STACK_LINE(10300)
			o->elt = null();
			HX_STACK_LINE(10301)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(10302)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10307)
		if (((this->head == null()))){
			HX_STACK_LINE(10307)
			this->pushmod = true;
		}
		HX_STACK_LINE(10308)
		this->modified = true;
		HX_STACK_LINE(10309)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_SensorArbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::pop","zpp_nape/util/Lists.hx",10276);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10276)
		{
		}
		HX_STACK_LINE(10276)
		::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10276)
		this->head = ret->next;
		HX_STACK_LINE(10276)
		{
		}
		HX_STACK_LINE(10276)
		{
			HX_STACK_LINE(10276)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10276)
			{
			}
			HX_STACK_LINE(10276)
			o->elt = null();
			HX_STACK_LINE(10276)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
			HX_STACK_LINE(10276)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10276)
		if (((this->head == null()))){
			HX_STACK_LINE(10276)
			this->pushmod = true;
		}
		HX_STACK_LINE(10276)
		this->modified = true;
		HX_STACK_LINE(10276)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_insert","zpp_nape/util/Lists.hx",10233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(10234)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10242);
			{
				HX_STACK_LINE(10243)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10244)
				{
					HX_STACK_LINE(10245)
					if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(10245)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(10252)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(10253)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(10254)
						ret->next = null();
					}
					HX_STACK_LINE(10259)
					Dynamic();
				}
				HX_STACK_LINE(10261)
				ret->elt = o;
				HX_STACK_LINE(10262)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10242)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10264)
	if (((cur == null()))){
		HX_STACK_LINE(10265)
		temp->next = this->head;
		HX_STACK_LINE(10266)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10269)
		temp->next = cur->next;
		HX_STACK_LINE(10270)
		cur->next = temp;
	}
	HX_STACK_LINE(10272)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(10273)
	(this->length)++;
	HX_STACK_LINE(10274)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cur,::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::insert","zpp_nape/util/Lists.hx",10231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this,::zpp_nape::dynamics::ZPP_SensorArbiter &o,::zpp_nape::util::ZNPNode_ZPP_SensorArbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10231);
			{
				HX_STACK_LINE(10231)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10231);
						{
							HX_STACK_LINE(10231)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10231)
							{
								HX_STACK_LINE(10231)
								if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(10231)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(10231)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
									HX_STACK_LINE(10231)
									::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10231)
									ret->next = null();
								}
								HX_STACK_LINE(10231)
								Dynamic();
							}
							HX_STACK_LINE(10231)
							ret->elt = o;
							HX_STACK_LINE(10231)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10231)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10231)
				if (((cur == null()))){
					HX_STACK_LINE(10231)
					temp->next = __this->head;
					HX_STACK_LINE(10231)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(10231)
					temp->next = cur->next;
					HX_STACK_LINE(10231)
					cur->next = temp;
				}
				HX_STACK_LINE(10231)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(10231)
				(__this->length)++;
				HX_STACK_LINE(10231)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(10231)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SensorArbiter_obj,insert,return )

Void ZNPList_ZPP_SensorArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SensorArbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::addAll","zpp_nape/util/Lists.hx",10213);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(10214)
		{
		}
		HX_STACK_LINE(10222)
		{
			HX_STACK_LINE(10223)
			::zpp_nape::util::ZNPNode_ZPP_SensorArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10224)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10225)
				::zpp_nape::dynamics::ZPP_SensorArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(10226)
				this->add(i);
				HX_STACK_LINE(10227)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::inlined_add","zpp_nape/util/Lists.hx",10176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(10177)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10185);
			{
				HX_STACK_LINE(10186)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10187)
				{
					HX_STACK_LINE(10188)
					if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(10188)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(10195)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
						HX_STACK_LINE(10196)
						::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(10197)
						ret->next = null();
					}
					HX_STACK_LINE(10202)
					Dynamic();
				}
				HX_STACK_LINE(10204)
				ret->elt = o;
				HX_STACK_LINE(10205)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10185)
	::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10207)
	temp->next = this->head;
	HX_STACK_LINE(10208)
	this->head = temp;
	HX_STACK_LINE(10209)
	this->modified = true;
	HX_STACK_LINE(10210)
	(this->length)++;
	HX_STACK_LINE(10211)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::add( ::zpp_nape::dynamics::ZPP_SensorArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::add","zpp_nape/util/Lists.hx",10174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o,::zpp_nape::util::ZNPList_ZPP_SensorArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10174);
			{
				HX_STACK_LINE(10174)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter Block( ::zpp_nape::dynamics::ZPP_SensorArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10174);
						{
							HX_STACK_LINE(10174)
							::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10174)
							{
								HX_STACK_LINE(10174)
								if (((::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(10174)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(10174)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool;
									HX_STACK_LINE(10174)
									::zpp_nape::util::ZNPNode_ZPP_SensorArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10174)
									ret->next = null();
								}
								HX_STACK_LINE(10174)
								Dynamic();
							}
							HX_STACK_LINE(10174)
							ret->elt = o;
							HX_STACK_LINE(10174)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10174)
				::zpp_nape::util::ZNPNode_ZPP_SensorArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10174)
				temp->next = __this->head;
				HX_STACK_LINE(10174)
				__this->head = temp;
				HX_STACK_LINE(10174)
				__this->modified = true;
				HX_STACK_LINE(10174)
				(__this->length)++;
				HX_STACK_LINE(10174)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(10174)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,add,return )

Void ZNPList_ZPP_SensorArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::setbegin","zpp_nape/util/Lists.hx",10169);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(10170)
		this->head = i;
		HX_STACK_LINE(10171)
		this->modified = true;
		HX_STACK_LINE(10172)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SensorArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SensorArbiter ZNPList_ZPP_SensorArbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SensorArbiter::begin","zpp_nape/util/Lists.hx",10164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10164)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SensorArbiter_obj,begin,return )


ZNPList_ZPP_SensorArbiter_obj::ZNPList_ZPP_SensorArbiter_obj()
{
}

void ZNPList_ZPP_SensorArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SensorArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SensorArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SensorArbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SensorArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SensorArbiter >(); return inValue; }
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

void ZNPList_ZPP_SensorArbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SensorArbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SensorArbiter_obj::__mClass;

void ZNPList_ZPP_SensorArbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SensorArbiter"), hx::TCanCast< ZNPList_ZPP_SensorArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SensorArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
