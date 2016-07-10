#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPNode_ZPP_FluidArbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_FluidArbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::new","zpp_nape/util/Lists.hx",9775);
{
	HX_STACK_LINE(9782)
	this->length = (int)0;
	HX_STACK_LINE(9781)
	this->pushmod = false;
	HX_STACK_LINE(9780)
	this->modified = false;
	HX_STACK_LINE(9776)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_FluidArbiter_obj::~ZNPList_ZPP_FluidArbiter_obj() { }

Dynamic ZNPList_ZPP_FluidArbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_FluidArbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > ZNPList_ZPP_FluidArbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > result = new ZNPList_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_FluidArbiter_obj > result = new ZNPList_ZPP_FluidArbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::at","zpp_nape/util/Lists.hx",10145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10146)
	{
	}
	HX_STACK_LINE(10154)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10155)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_FluidArbiter(it->elt) : ::zpp_nape::dynamics::ZPP_FluidArbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::iterator_at","zpp_nape/util/Lists.hx",10132);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10133)
	{
	}
	HX_STACK_LINE(10141)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10142)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(10142)
		ret = ret->next;
	}
	HX_STACK_LINE(10143)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::back","zpp_nape/util/Lists.hx",10123);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10124)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10125)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10126)
	while(((cur != null()))){
		HX_STACK_LINE(10127)
		ret = cur;
		HX_STACK_LINE(10128)
		cur = cur->next;
	}
	HX_STACK_LINE(10130)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::front","zpp_nape/util/Lists.hx",10123);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10123)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,front,return )

bool ZNPList_ZPP_FluidArbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_has","zpp_nape/util/Lists.hx",10093);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10094)
	{
	}
	HX_STACK_LINE(10102)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10103)
	{
		HX_STACK_LINE(10104)
		ret = false;
		HX_STACK_LINE(10105)
		{
			HX_STACK_LINE(10106)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10107)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10108)
				::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10109)
				if (((npite == obj))){
					HX_STACK_LINE(10111)
					ret = true;
					HX_STACK_LINE(10112)
					break;
				}
				HX_STACK_LINE(10115)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10119)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_has,return )

bool ZNPList_ZPP_FluidArbiter_obj::has( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::has","zpp_nape/util/Lists.hx",10091);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj *__this,::zpp_nape::dynamics::ZPP_FluidArbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10091);
			{
				HX_STACK_LINE(10091)
				{
				}
				HX_STACK_LINE(10091)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10091)
				{
					HX_STACK_LINE(10091)
					ret = false;
					HX_STACK_LINE(10091)
					{
						HX_STACK_LINE(10091)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(10091)
						while(((cx_ite != null()))){
							HX_STACK_LINE(10091)
							::zpp_nape::dynamics::ZPP_FluidArbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(10091)
							if (((npite == obj))){
								HX_STACK_LINE(10091)
								ret = true;
								HX_STACK_LINE(10091)
								break;
							}
							HX_STACK_LINE(10091)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(10091)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10091)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,has,return )

int ZNPList_ZPP_FluidArbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::size","zpp_nape/util/Lists.hx",10091);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10091)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,size,return )

bool ZNPList_ZPP_FluidArbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::empty","zpp_nape/util/Lists.hx",10089);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10089)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,empty,return )

Void ZNPList_ZPP_FluidArbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::reverse","zpp_nape/util/Lists.hx",10074);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10075)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10076)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10077)
		while(((cur != null()))){
			HX_STACK_LINE(10078)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10079)
			cur->next = pre;
			HX_STACK_LINE(10080)
			this->head = cur;
			HX_STACK_LINE(10081)
			pre = cur;
			HX_STACK_LINE(10082)
			cur = nx;
		}
		HX_STACK_LINE(10084)
		this->modified = true;
		HX_STACK_LINE(10085)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,reverse,(void))

Void ZNPList_ZPP_FluidArbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_clear","zpp_nape/util/Lists.hx",10068);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10070)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10070)
			{
			}
			HX_STACK_LINE(10070)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10070)
			this->head = ret->next;
			HX_STACK_LINE(10070)
			{
			}
			HX_STACK_LINE(10070)
			{
				HX_STACK_LINE(10070)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10070)
				{
				}
				HX_STACK_LINE(10070)
				o->elt = null();
				HX_STACK_LINE(10070)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(10070)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10070)
			if (((this->head == null()))){
				HX_STACK_LINE(10070)
				this->pushmod = true;
			}
			HX_STACK_LINE(10070)
			this->modified = true;
			HX_STACK_LINE(10070)
			(this->length)--;
		}
		HX_STACK_LINE(10071)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_FluidArbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::clear","zpp_nape/util/Lists.hx",10066);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10066)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10066)
			{
			}
			HX_STACK_LINE(10066)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10066)
			this->head = ret->next;
			HX_STACK_LINE(10066)
			{
			}
			HX_STACK_LINE(10066)
			{
				HX_STACK_LINE(10066)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10066)
				{
				}
				HX_STACK_LINE(10066)
				o->elt = null();
				HX_STACK_LINE(10066)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
				HX_STACK_LINE(10066)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10066)
			if (((this->head == null()))){
				HX_STACK_LINE(10066)
				this->pushmod = true;
			}
			HX_STACK_LINE(10066)
			this->modified = true;
			HX_STACK_LINE(10066)
			(this->length)--;
		}
		HX_STACK_LINE(10066)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::splice","zpp_nape/util/Lists.hx",10062);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(10063)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(10063)
		this->erase(pre);
	}
	HX_STACK_LINE(10064)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_erase","zpp_nape/util/Lists.hx",10016);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(10017)
	{
	}
	HX_STACK_LINE(10025)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10026)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10027)
	if (((pre == null()))){
		HX_STACK_LINE(10028)
		old = this->head;
		HX_STACK_LINE(10029)
		ret = old->next;
		HX_STACK_LINE(10030)
		this->head = ret;
		HX_STACK_LINE(10031)
		if (((this->head == null()))){
			HX_STACK_LINE(10031)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10034)
		old = pre->next;
		HX_STACK_LINE(10035)
		ret = old->next;
		HX_STACK_LINE(10036)
		pre->next = ret;
		HX_STACK_LINE(10037)
		if (((ret == null()))){
			HX_STACK_LINE(10037)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10039)
	{
	}
	HX_STACK_LINE(10040)
	{
		HX_STACK_LINE(10041)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10042)
		{
		}
		HX_STACK_LINE(10050)
		o->elt = null();
		HX_STACK_LINE(10051)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
		HX_STACK_LINE(10052)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10057)
	this->modified = true;
	HX_STACK_LINE(10058)
	(this->length)--;
	HX_STACK_LINE(10059)
	this->pushmod = true;
	HX_STACK_LINE(10060)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::erase","zpp_nape/util/Lists.hx",10014);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter &pre,::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10014);
			{
				HX_STACK_LINE(10014)
				{
				}
				HX_STACK_LINE(10014)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10014)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10014)
				if (((pre == null()))){
					HX_STACK_LINE(10014)
					old = __this->head;
					HX_STACK_LINE(10014)
					ret = old->next;
					HX_STACK_LINE(10014)
					__this->head = ret;
					HX_STACK_LINE(10014)
					if (((__this->head == null()))){
						HX_STACK_LINE(10014)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10014)
					old = pre->next;
					HX_STACK_LINE(10014)
					ret = old->next;
					HX_STACK_LINE(10014)
					pre->next = ret;
					HX_STACK_LINE(10014)
					if (((ret == null()))){
						HX_STACK_LINE(10014)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(10014)
				{
				}
				HX_STACK_LINE(10014)
				{
					HX_STACK_LINE(10014)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10014)
					{
					}
					HX_STACK_LINE(10014)
					o->elt = null();
					HX_STACK_LINE(10014)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
					HX_STACK_LINE(10014)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10014)
				__this->modified = true;
				HX_STACK_LINE(10014)
				(__this->length)--;
				HX_STACK_LINE(10014)
				__this->pushmod = true;
				HX_STACK_LINE(10014)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10014)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,erase,return )

bool ZNPList_ZPP_FluidArbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_try_remove","zpp_nape/util/Lists.hx",9991);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9992)
	{
	}
	HX_STACK_LINE(10000)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10001)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10002)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10003)
	while(((cur != null()))){
		HX_STACK_LINE(10004)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10005)
			{
				HX_STACK_LINE(10005)
				{
				}
				HX_STACK_LINE(10005)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10005)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10005)
				if (((pre == null()))){
					HX_STACK_LINE(10005)
					old = this->head;
					HX_STACK_LINE(10005)
					ret1 = old->next;
					HX_STACK_LINE(10005)
					this->head = ret1;
					HX_STACK_LINE(10005)
					if (((this->head == null()))){
						HX_STACK_LINE(10005)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10005)
					old = pre->next;
					HX_STACK_LINE(10005)
					ret1 = old->next;
					HX_STACK_LINE(10005)
					pre->next = ret1;
					HX_STACK_LINE(10005)
					if (((ret1 == null()))){
						HX_STACK_LINE(10005)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10005)
				{
				}
				HX_STACK_LINE(10005)
				{
					HX_STACK_LINE(10005)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10005)
					{
					}
					HX_STACK_LINE(10005)
					o->elt = null();
					HX_STACK_LINE(10005)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
					HX_STACK_LINE(10005)
					::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10005)
				this->modified = true;
				HX_STACK_LINE(10005)
				(this->length)--;
				HX_STACK_LINE(10005)
				this->pushmod = true;
				HX_STACK_LINE(10005)
				ret1;
			}
			HX_STACK_LINE(10006)
			ret = true;
			HX_STACK_LINE(10007)
			break;
		}
		HX_STACK_LINE(10009)
		pre = cur;
		HX_STACK_LINE(10010)
		cur = cur->next;
	}
	HX_STACK_LINE(10012)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_FluidArbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_remove","zpp_nape/util/Lists.hx",9978);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9979)
		{
		}
		HX_STACK_LINE(9987)
		{
			HX_STACK_LINE(9987)
			{
			}
			HX_STACK_LINE(9987)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9987)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9987)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9987)
			while(((cur != null()))){
				HX_STACK_LINE(9987)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9987)
					{
						HX_STACK_LINE(9987)
						{
						}
						HX_STACK_LINE(9987)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9987)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9987)
						if (((pre == null()))){
							HX_STACK_LINE(9987)
							old = this->head;
							HX_STACK_LINE(9987)
							ret1 = old->next;
							HX_STACK_LINE(9987)
							this->head = ret1;
							HX_STACK_LINE(9987)
							if (((this->head == null()))){
								HX_STACK_LINE(9987)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9987)
							old = pre->next;
							HX_STACK_LINE(9987)
							ret1 = old->next;
							HX_STACK_LINE(9987)
							pre->next = ret1;
							HX_STACK_LINE(9987)
							if (((ret1 == null()))){
								HX_STACK_LINE(9987)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9987)
						{
						}
						HX_STACK_LINE(9987)
						{
							HX_STACK_LINE(9987)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9987)
							{
							}
							HX_STACK_LINE(9987)
							o->elt = null();
							HX_STACK_LINE(9987)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
							HX_STACK_LINE(9987)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9987)
						this->modified = true;
						HX_STACK_LINE(9987)
						(this->length)--;
						HX_STACK_LINE(9987)
						this->pushmod = true;
						HX_STACK_LINE(9987)
						ret1;
					}
					HX_STACK_LINE(9987)
					ret = true;
					HX_STACK_LINE(9987)
					break;
				}
				HX_STACK_LINE(9987)
				pre = cur;
				HX_STACK_LINE(9987)
				cur = cur->next;
			}
			HX_STACK_LINE(9987)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_FluidArbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::try_remove","zpp_nape/util/Lists.hx",9953);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9954)
	{
	}
	HX_STACK_LINE(9962)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9963)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9964)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9965)
	while(((cur != null()))){
		HX_STACK_LINE(9966)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9967)
			this->erase(pre);
			HX_STACK_LINE(9968)
			ret = true;
			HX_STACK_LINE(9969)
			break;
		}
		HX_STACK_LINE(9971)
		pre = cur;
		HX_STACK_LINE(9972)
		cur = cur->next;
	}
	HX_STACK_LINE(9974)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,try_remove,return )

Void ZNPList_ZPP_FluidArbiter_obj::remove( ::zpp_nape::dynamics::ZPP_FluidArbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::remove","zpp_nape/util/Lists.hx",9942);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9943)
		{
		}
		HX_STACK_LINE(9951)
		{
			HX_STACK_LINE(9951)
			{
			}
			HX_STACK_LINE(9951)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9951)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9951)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9951)
			while(((cur != null()))){
				HX_STACK_LINE(9951)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9951)
					{
						HX_STACK_LINE(9951)
						{
						}
						HX_STACK_LINE(9951)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9951)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9951)
						if (((pre == null()))){
							HX_STACK_LINE(9951)
							old = this->head;
							HX_STACK_LINE(9951)
							ret1 = old->next;
							HX_STACK_LINE(9951)
							this->head = ret1;
							HX_STACK_LINE(9951)
							if (((this->head == null()))){
								HX_STACK_LINE(9951)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9951)
							old = pre->next;
							HX_STACK_LINE(9951)
							ret1 = old->next;
							HX_STACK_LINE(9951)
							pre->next = ret1;
							HX_STACK_LINE(9951)
							if (((ret1 == null()))){
								HX_STACK_LINE(9951)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9951)
						{
						}
						HX_STACK_LINE(9951)
						{
							HX_STACK_LINE(9951)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9951)
							{
							}
							HX_STACK_LINE(9951)
							o->elt = null();
							HX_STACK_LINE(9951)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
							HX_STACK_LINE(9951)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9951)
						this->modified = true;
						HX_STACK_LINE(9951)
						(this->length)--;
						HX_STACK_LINE(9951)
						this->pushmod = true;
						HX_STACK_LINE(9951)
						ret1;
					}
					HX_STACK_LINE(9951)
					ret = true;
					HX_STACK_LINE(9951)
					break;
				}
				HX_STACK_LINE(9951)
				pre = cur;
				HX_STACK_LINE(9951)
				cur = cur->next;
			}
			HX_STACK_LINE(9951)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",9929);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9930)
	{
	}
	HX_STACK_LINE(9938)
	::zpp_nape::dynamics::ZPP_FluidArbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9939)
	this->pop();
	HX_STACK_LINE(9940)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::pop_unsafe","zpp_nape/util/Lists.hx",9927);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_FluidArbiter Block( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9927);
			{
				HX_STACK_LINE(9927)
				{
				}
				HX_STACK_LINE(9927)
				::zpp_nape::dynamics::ZPP_FluidArbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9927)
				__this->pop();
				HX_STACK_LINE(9927)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9927)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_FluidArbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_pop","zpp_nape/util/Lists.hx",9894);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9895)
		{
		}
		HX_STACK_LINE(9903)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9904)
		this->head = ret->next;
		HX_STACK_LINE(9905)
		{
		}
		HX_STACK_LINE(9906)
		{
			HX_STACK_LINE(9907)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9908)
			{
			}
			HX_STACK_LINE(9916)
			o->elt = null();
			HX_STACK_LINE(9917)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
			HX_STACK_LINE(9918)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9923)
		if (((this->head == null()))){
			HX_STACK_LINE(9923)
			this->pushmod = true;
		}
		HX_STACK_LINE(9924)
		this->modified = true;
		HX_STACK_LINE(9925)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_FluidArbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::pop","zpp_nape/util/Lists.hx",9892);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9892)
		{
		}
		HX_STACK_LINE(9892)
		::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9892)
		this->head = ret->next;
		HX_STACK_LINE(9892)
		{
		}
		HX_STACK_LINE(9892)
		{
			HX_STACK_LINE(9892)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9892)
			{
			}
			HX_STACK_LINE(9892)
			o->elt = null();
			HX_STACK_LINE(9892)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
			HX_STACK_LINE(9892)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9892)
		if (((this->head == null()))){
			HX_STACK_LINE(9892)
			this->pushmod = true;
		}
		HX_STACK_LINE(9892)
		this->modified = true;
		HX_STACK_LINE(9892)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_insert","zpp_nape/util/Lists.hx",9849);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9850)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9858);
			{
				HX_STACK_LINE(9859)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9860)
				{
					HX_STACK_LINE(9861)
					if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(9861)
						ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(9868)
						ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
						HX_STACK_LINE(9869)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9870)
						ret->next = null();
					}
					HX_STACK_LINE(9875)
					Dynamic();
				}
				HX_STACK_LINE(9877)
				ret->elt = o;
				HX_STACK_LINE(9878)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9858)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9880)
	if (((cur == null()))){
		HX_STACK_LINE(9881)
		temp->next = this->head;
		HX_STACK_LINE(9882)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9885)
		temp->next = cur->next;
		HX_STACK_LINE(9886)
		cur->next = temp;
	}
	HX_STACK_LINE(9888)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(9889)
	(this->length)++;
	HX_STACK_LINE(9890)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cur,::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::insert","zpp_nape/util/Lists.hx",9847);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj *__this,::zpp_nape::dynamics::ZPP_FluidArbiter &o,::zpp_nape::util::ZNPNode_ZPP_FluidArbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9847);
			{
				HX_STACK_LINE(9847)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9847);
						{
							HX_STACK_LINE(9847)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9847)
							{
								HX_STACK_LINE(9847)
								if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(9847)
									ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(9847)
									ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
									HX_STACK_LINE(9847)
									::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9847)
									ret->next = null();
								}
								HX_STACK_LINE(9847)
								Dynamic();
							}
							HX_STACK_LINE(9847)
							ret->elt = o;
							HX_STACK_LINE(9847)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9847)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9847)
				if (((cur == null()))){
					HX_STACK_LINE(9847)
					temp->next = __this->head;
					HX_STACK_LINE(9847)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(9847)
					temp->next = cur->next;
					HX_STACK_LINE(9847)
					cur->next = temp;
				}
				HX_STACK_LINE(9847)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(9847)
				(__this->length)++;
				HX_STACK_LINE(9847)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(9847)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_FluidArbiter_obj,insert,return )

Void ZNPList_ZPP_FluidArbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_FluidArbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::addAll","zpp_nape/util/Lists.hx",9829);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(9830)
		{
		}
		HX_STACK_LINE(9838)
		{
			HX_STACK_LINE(9839)
			::zpp_nape::util::ZNPNode_ZPP_FluidArbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9840)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9841)
				::zpp_nape::dynamics::ZPP_FluidArbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(9842)
				this->add(i);
				HX_STACK_LINE(9843)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::inlined_add","zpp_nape/util/Lists.hx",9792);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9793)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9801);
			{
				HX_STACK_LINE(9802)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9803)
				{
					HX_STACK_LINE(9804)
					if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(9804)
						ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(9811)
						ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
						HX_STACK_LINE(9812)
						::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9813)
						ret->next = null();
					}
					HX_STACK_LINE(9818)
					Dynamic();
				}
				HX_STACK_LINE(9820)
				ret->elt = o;
				HX_STACK_LINE(9821)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9801)
	::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9823)
	temp->next = this->head;
	HX_STACK_LINE(9824)
	this->head = temp;
	HX_STACK_LINE(9825)
	this->modified = true;
	HX_STACK_LINE(9826)
	(this->length)++;
	HX_STACK_LINE(9827)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::add( ::zpp_nape::dynamics::ZPP_FluidArbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::add","zpp_nape/util/Lists.hx",9790);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_FluidArbiter Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &o,::zpp_nape::util::ZNPList_ZPP_FluidArbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9790);
			{
				HX_STACK_LINE(9790)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter Block( ::zpp_nape::dynamics::ZPP_FluidArbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9790);
						{
							HX_STACK_LINE(9790)
							::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9790)
							{
								HX_STACK_LINE(9790)
								if (((::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(9790)
									ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(9790)
									ret = ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool;
									HX_STACK_LINE(9790)
									::zpp_nape::util::ZNPNode_ZPP_FluidArbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9790)
									ret->next = null();
								}
								HX_STACK_LINE(9790)
								Dynamic();
							}
							HX_STACK_LINE(9790)
							ret->elt = o;
							HX_STACK_LINE(9790)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9790)
				::zpp_nape::util::ZNPNode_ZPP_FluidArbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9790)
				temp->next = __this->head;
				HX_STACK_LINE(9790)
				__this->head = temp;
				HX_STACK_LINE(9790)
				__this->modified = true;
				HX_STACK_LINE(9790)
				(__this->length)++;
				HX_STACK_LINE(9790)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(9790)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,add,return )

Void ZNPList_ZPP_FluidArbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::setbegin","zpp_nape/util/Lists.hx",9785);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(9786)
		this->head = i;
		HX_STACK_LINE(9787)
		this->modified = true;
		HX_STACK_LINE(9788)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_FluidArbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_FluidArbiter ZNPList_ZPP_FluidArbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_FluidArbiter::begin","zpp_nape/util/Lists.hx",9780);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9780)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_FluidArbiter_obj,begin,return )


ZNPList_ZPP_FluidArbiter_obj::ZNPList_ZPP_FluidArbiter_obj()
{
}

void ZNPList_ZPP_FluidArbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_FluidArbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_FluidArbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_FluidArbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_FluidArbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_FluidArbiter >(); return inValue; }
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

void ZNPList_ZPP_FluidArbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_FluidArbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_FluidArbiter_obj::__mClass;

void ZNPList_ZPP_FluidArbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_FluidArbiter"), hx::TCanCast< ZNPList_ZPP_FluidArbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_FluidArbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
