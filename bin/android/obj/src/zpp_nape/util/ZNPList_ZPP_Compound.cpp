#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Compound
#include <zpp_nape/util/ZNPList_ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Compound
#include <zpp_nape/util/ZNPNode_ZPP_Compound.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Compound_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Compound::new","zpp_nape/util/Lists.hx",2095);
{
	HX_STACK_LINE(2102)
	this->length = (int)0;
	HX_STACK_LINE(2101)
	this->pushmod = false;
	HX_STACK_LINE(2100)
	this->modified = false;
	HX_STACK_LINE(2096)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Compound_obj::~ZNPList_ZPP_Compound_obj() { }

Dynamic ZNPList_ZPP_Compound_obj::__CreateEmpty() { return  new ZNPList_ZPP_Compound_obj; }
hx::ObjectPtr< ZNPList_ZPP_Compound_obj > ZNPList_ZPP_Compound_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > result = new ZNPList_ZPP_Compound_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Compound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Compound_obj > result = new ZNPList_ZPP_Compound_obj();
	result->__construct();
	return result;}

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::at","zpp_nape/util/Lists.hx",2465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2466)
	{
	}
	HX_STACK_LINE(2474)
	::zpp_nape::util::ZNPNode_ZPP_Compound it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2475)
	return (  (((it != null()))) ? ::zpp_nape::phys::ZPP_Compound(it->elt) : ::zpp_nape::phys::ZPP_Compound(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::iterator_at","zpp_nape/util/Lists.hx",2452);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2453)
	{
	}
	HX_STACK_LINE(2461)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2462)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(2462)
		ret = ret->next;
	}
	HX_STACK_LINE(2463)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::back","zpp_nape/util/Lists.hx",2443);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2444)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2445)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2446)
	while(((cur != null()))){
		HX_STACK_LINE(2447)
		ret = cur;
		HX_STACK_LINE(2448)
		cur = cur->next;
	}
	HX_STACK_LINE(2450)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,back,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::front","zpp_nape/util/Lists.hx",2443);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2443)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,front,return )

bool ZNPList_ZPP_Compound_obj::inlined_has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_has","zpp_nape/util/Lists.hx",2413);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2414)
	{
	}
	HX_STACK_LINE(2422)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2423)
	{
		HX_STACK_LINE(2424)
		ret = false;
		HX_STACK_LINE(2425)
		{
			HX_STACK_LINE(2426)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2427)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2428)
				::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2429)
				if (((npite == obj))){
					HX_STACK_LINE(2431)
					ret = true;
					HX_STACK_LINE(2432)
					break;
				}
				HX_STACK_LINE(2435)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2439)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_has,return )

bool ZNPList_ZPP_Compound_obj::has( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::has","zpp_nape/util/Lists.hx",2411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Compound_obj *__this,::zpp_nape::phys::ZPP_Compound &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2411);
			{
				HX_STACK_LINE(2411)
				{
				}
				HX_STACK_LINE(2411)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2411)
				{
					HX_STACK_LINE(2411)
					ret = false;
					HX_STACK_LINE(2411)
					{
						HX_STACK_LINE(2411)
						::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2411)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2411)
							::zpp_nape::phys::ZPP_Compound npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(2411)
							if (((npite == obj))){
								HX_STACK_LINE(2411)
								ret = true;
								HX_STACK_LINE(2411)
								break;
							}
							HX_STACK_LINE(2411)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(2411)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2411)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,has,return )

int ZNPList_ZPP_Compound_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::size","zpp_nape/util/Lists.hx",2411);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2411)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,size,return )

bool ZNPList_ZPP_Compound_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::empty","zpp_nape/util/Lists.hx",2409);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2409)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,empty,return )

Void ZNPList_ZPP_Compound_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::reverse","zpp_nape/util/Lists.hx",2394);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2395)
		::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2396)
		::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2397)
		while(((cur != null()))){
			HX_STACK_LINE(2398)
			::zpp_nape::util::ZNPNode_ZPP_Compound nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2399)
			cur->next = pre;
			HX_STACK_LINE(2400)
			this->head = cur;
			HX_STACK_LINE(2401)
			pre = cur;
			HX_STACK_LINE(2402)
			cur = nx;
		}
		HX_STACK_LINE(2404)
		this->modified = true;
		HX_STACK_LINE(2405)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,reverse,(void))

Void ZNPList_ZPP_Compound_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_clear","zpp_nape/util/Lists.hx",2388);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2390)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2390)
			{
			}
			HX_STACK_LINE(2390)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2390)
			this->head = ret->next;
			HX_STACK_LINE(2390)
			{
			}
			HX_STACK_LINE(2390)
			{
				HX_STACK_LINE(2390)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2390)
				{
				}
				HX_STACK_LINE(2390)
				o->elt = null();
				HX_STACK_LINE(2390)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2390)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2390)
			if (((this->head == null()))){
				HX_STACK_LINE(2390)
				this->pushmod = true;
			}
			HX_STACK_LINE(2390)
			this->modified = true;
			HX_STACK_LINE(2390)
			(this->length)--;
		}
		HX_STACK_LINE(2391)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_clear,(void))

Void ZNPList_ZPP_Compound_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::clear","zpp_nape/util/Lists.hx",2386);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2386)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2386)
			{
			}
			HX_STACK_LINE(2386)
			::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2386)
			this->head = ret->next;
			HX_STACK_LINE(2386)
			{
			}
			HX_STACK_LINE(2386)
			{
				HX_STACK_LINE(2386)
				::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2386)
				{
				}
				HX_STACK_LINE(2386)
				o->elt = null();
				HX_STACK_LINE(2386)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
				HX_STACK_LINE(2386)
				::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2386)
			if (((this->head == null()))){
				HX_STACK_LINE(2386)
				this->pushmod = true;
			}
			HX_STACK_LINE(2386)
			this->modified = true;
			HX_STACK_LINE(2386)
			(this->length)--;
		}
		HX_STACK_LINE(2386)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Compound pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::splice","zpp_nape/util/Lists.hx",2382);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(2383)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(2383)
		this->erase(pre);
	}
	HX_STACK_LINE(2384)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_erase","zpp_nape/util/Lists.hx",2336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(2337)
	{
	}
	HX_STACK_LINE(2345)
	::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2346)
	::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2347)
	if (((pre == null()))){
		HX_STACK_LINE(2348)
		old = this->head;
		HX_STACK_LINE(2349)
		ret = old->next;
		HX_STACK_LINE(2350)
		this->head = ret;
		HX_STACK_LINE(2351)
		if (((this->head == null()))){
			HX_STACK_LINE(2351)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2354)
		old = pre->next;
		HX_STACK_LINE(2355)
		ret = old->next;
		HX_STACK_LINE(2356)
		pre->next = ret;
		HX_STACK_LINE(2357)
		if (((ret == null()))){
			HX_STACK_LINE(2357)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2359)
	{
	}
	HX_STACK_LINE(2360)
	{
		HX_STACK_LINE(2361)
		::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2362)
		{
		}
		HX_STACK_LINE(2370)
		o->elt = null();
		HX_STACK_LINE(2371)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
		HX_STACK_LINE(2372)
		::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2377)
	this->modified = true;
	HX_STACK_LINE(2378)
	(this->length)--;
	HX_STACK_LINE(2379)
	this->pushmod = true;
	HX_STACK_LINE(2380)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Compound pre){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::erase","zpp_nape/util/Lists.hx",2334);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::util::ZNPNode_ZPP_Compound &pre,::zpp_nape::util::ZNPList_ZPP_Compound_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2334);
			{
				HX_STACK_LINE(2334)
				{
				}
				HX_STACK_LINE(2334)
				::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2334)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2334)
				if (((pre == null()))){
					HX_STACK_LINE(2334)
					old = __this->head;
					HX_STACK_LINE(2334)
					ret = old->next;
					HX_STACK_LINE(2334)
					__this->head = ret;
					HX_STACK_LINE(2334)
					if (((__this->head == null()))){
						HX_STACK_LINE(2334)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2334)
					old = pre->next;
					HX_STACK_LINE(2334)
					ret = old->next;
					HX_STACK_LINE(2334)
					pre->next = ret;
					HX_STACK_LINE(2334)
					if (((ret == null()))){
						HX_STACK_LINE(2334)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(2334)
				{
				}
				HX_STACK_LINE(2334)
				{
					HX_STACK_LINE(2334)
					::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2334)
					{
					}
					HX_STACK_LINE(2334)
					o->elt = null();
					HX_STACK_LINE(2334)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
					HX_STACK_LINE(2334)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2334)
				__this->modified = true;
				HX_STACK_LINE(2334)
				(__this->length)--;
				HX_STACK_LINE(2334)
				__this->pushmod = true;
				HX_STACK_LINE(2334)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2334)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,erase,return )

bool ZNPList_ZPP_Compound_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_try_remove","zpp_nape/util/Lists.hx",2311);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2312)
	{
	}
	HX_STACK_LINE(2320)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2321)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2322)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2323)
	while(((cur != null()))){
		HX_STACK_LINE(2324)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2325)
			{
				HX_STACK_LINE(2325)
				{
				}
				HX_STACK_LINE(2325)
				::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2325)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2325)
				if (((pre == null()))){
					HX_STACK_LINE(2325)
					old = this->head;
					HX_STACK_LINE(2325)
					ret1 = old->next;
					HX_STACK_LINE(2325)
					this->head = ret1;
					HX_STACK_LINE(2325)
					if (((this->head == null()))){
						HX_STACK_LINE(2325)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2325)
					old = pre->next;
					HX_STACK_LINE(2325)
					ret1 = old->next;
					HX_STACK_LINE(2325)
					pre->next = ret1;
					HX_STACK_LINE(2325)
					if (((ret1 == null()))){
						HX_STACK_LINE(2325)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2325)
				{
				}
				HX_STACK_LINE(2325)
				{
					HX_STACK_LINE(2325)
					::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2325)
					{
					}
					HX_STACK_LINE(2325)
					o->elt = null();
					HX_STACK_LINE(2325)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
					HX_STACK_LINE(2325)
					::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2325)
				this->modified = true;
				HX_STACK_LINE(2325)
				(this->length)--;
				HX_STACK_LINE(2325)
				this->pushmod = true;
				HX_STACK_LINE(2325)
				ret1;
			}
			HX_STACK_LINE(2326)
			ret = true;
			HX_STACK_LINE(2327)
			break;
		}
		HX_STACK_LINE(2329)
		pre = cur;
		HX_STACK_LINE(2330)
		cur = cur->next;
	}
	HX_STACK_LINE(2332)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Compound_obj::inlined_remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_remove","zpp_nape/util/Lists.hx",2298);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2299)
		{
		}
		HX_STACK_LINE(2307)
		{
			HX_STACK_LINE(2307)
			{
			}
			HX_STACK_LINE(2307)
			::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2307)
			::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2307)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2307)
			while(((cur != null()))){
				HX_STACK_LINE(2307)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2307)
					{
						HX_STACK_LINE(2307)
						{
						}
						HX_STACK_LINE(2307)
						::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2307)
						::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2307)
						if (((pre == null()))){
							HX_STACK_LINE(2307)
							old = this->head;
							HX_STACK_LINE(2307)
							ret1 = old->next;
							HX_STACK_LINE(2307)
							this->head = ret1;
							HX_STACK_LINE(2307)
							if (((this->head == null()))){
								HX_STACK_LINE(2307)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2307)
							old = pre->next;
							HX_STACK_LINE(2307)
							ret1 = old->next;
							HX_STACK_LINE(2307)
							pre->next = ret1;
							HX_STACK_LINE(2307)
							if (((ret1 == null()))){
								HX_STACK_LINE(2307)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2307)
						{
						}
						HX_STACK_LINE(2307)
						{
							HX_STACK_LINE(2307)
							::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2307)
							{
							}
							HX_STACK_LINE(2307)
							o->elt = null();
							HX_STACK_LINE(2307)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
							HX_STACK_LINE(2307)
							::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2307)
						this->modified = true;
						HX_STACK_LINE(2307)
						(this->length)--;
						HX_STACK_LINE(2307)
						this->pushmod = true;
						HX_STACK_LINE(2307)
						ret1;
					}
					HX_STACK_LINE(2307)
					ret = true;
					HX_STACK_LINE(2307)
					break;
				}
				HX_STACK_LINE(2307)
				pre = cur;
				HX_STACK_LINE(2307)
				cur = cur->next;
			}
			HX_STACK_LINE(2307)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_remove,(void))

bool ZNPList_ZPP_Compound_obj::try_remove( ::zpp_nape::phys::ZPP_Compound obj){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::try_remove","zpp_nape/util/Lists.hx",2273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2274)
	{
	}
	HX_STACK_LINE(2282)
	::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2283)
	::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2284)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2285)
	while(((cur != null()))){
		HX_STACK_LINE(2286)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2287)
			this->erase(pre);
			HX_STACK_LINE(2288)
			ret = true;
			HX_STACK_LINE(2289)
			break;
		}
		HX_STACK_LINE(2291)
		pre = cur;
		HX_STACK_LINE(2292)
		cur = cur->next;
	}
	HX_STACK_LINE(2294)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,try_remove,return )

Void ZNPList_ZPP_Compound_obj::remove( ::zpp_nape::phys::ZPP_Compound obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::remove","zpp_nape/util/Lists.hx",2262);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2263)
		{
		}
		HX_STACK_LINE(2271)
		{
			HX_STACK_LINE(2271)
			{
			}
			HX_STACK_LINE(2271)
			::zpp_nape::util::ZNPNode_ZPP_Compound pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2271)
			::zpp_nape::util::ZNPNode_ZPP_Compound cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2271)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2271)
			while(((cur != null()))){
				HX_STACK_LINE(2271)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2271)
					{
						HX_STACK_LINE(2271)
						{
						}
						HX_STACK_LINE(2271)
						::zpp_nape::util::ZNPNode_ZPP_Compound old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2271)
						::zpp_nape::util::ZNPNode_ZPP_Compound ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2271)
						if (((pre == null()))){
							HX_STACK_LINE(2271)
							old = this->head;
							HX_STACK_LINE(2271)
							ret1 = old->next;
							HX_STACK_LINE(2271)
							this->head = ret1;
							HX_STACK_LINE(2271)
							if (((this->head == null()))){
								HX_STACK_LINE(2271)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2271)
							old = pre->next;
							HX_STACK_LINE(2271)
							ret1 = old->next;
							HX_STACK_LINE(2271)
							pre->next = ret1;
							HX_STACK_LINE(2271)
							if (((ret1 == null()))){
								HX_STACK_LINE(2271)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2271)
						{
						}
						HX_STACK_LINE(2271)
						{
							HX_STACK_LINE(2271)
							::zpp_nape::util::ZNPNode_ZPP_Compound o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2271)
							{
							}
							HX_STACK_LINE(2271)
							o->elt = null();
							HX_STACK_LINE(2271)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
							HX_STACK_LINE(2271)
							::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2271)
						this->modified = true;
						HX_STACK_LINE(2271)
						(this->length)--;
						HX_STACK_LINE(2271)
						this->pushmod = true;
						HX_STACK_LINE(2271)
						ret1;
					}
					HX_STACK_LINE(2271)
					ret = true;
					HX_STACK_LINE(2271)
					break;
				}
				HX_STACK_LINE(2271)
				pre = cur;
				HX_STACK_LINE(2271)
				cur = cur->next;
			}
			HX_STACK_LINE(2271)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,remove,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_pop_unsafe","zpp_nape/util/Lists.hx",2249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2250)
	{
	}
	HX_STACK_LINE(2258)
	::zpp_nape::phys::ZPP_Compound ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2259)
	this->pop();
	HX_STACK_LINE(2260)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop_unsafe,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::pop_unsafe","zpp_nape/util/Lists.hx",2247);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Compound Block( ::zpp_nape::util::ZNPList_ZPP_Compound_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2247);
			{
				HX_STACK_LINE(2247)
				{
				}
				HX_STACK_LINE(2247)
				::zpp_nape::phys::ZPP_Compound ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2247)
				__this->pop();
				HX_STACK_LINE(2247)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2247)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop_unsafe,return )

Void ZNPList_ZPP_Compound_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_pop","zpp_nape/util/Lists.hx",2214);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2215)
		{
		}
		HX_STACK_LINE(2223)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2224)
		this->head = ret->next;
		HX_STACK_LINE(2225)
		{
		}
		HX_STACK_LINE(2226)
		{
			HX_STACK_LINE(2227)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2228)
			{
			}
			HX_STACK_LINE(2236)
			o->elt = null();
			HX_STACK_LINE(2237)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
			HX_STACK_LINE(2238)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2243)
		if (((this->head == null()))){
			HX_STACK_LINE(2243)
			this->pushmod = true;
		}
		HX_STACK_LINE(2244)
		this->modified = true;
		HX_STACK_LINE(2245)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,inlined_pop,(void))

Void ZNPList_ZPP_Compound_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::pop","zpp_nape/util/Lists.hx",2212);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2212)
		{
		}
		HX_STACK_LINE(2212)
		::zpp_nape::util::ZNPNode_ZPP_Compound ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2212)
		this->head = ret->next;
		HX_STACK_LINE(2212)
		{
		}
		HX_STACK_LINE(2212)
		{
			HX_STACK_LINE(2212)
			::zpp_nape::util::ZNPNode_ZPP_Compound o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2212)
			{
			}
			HX_STACK_LINE(2212)
			o->elt = null();
			HX_STACK_LINE(2212)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
			HX_STACK_LINE(2212)
			::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2212)
		if (((this->head == null()))){
			HX_STACK_LINE(2212)
			this->pushmod = true;
		}
		HX_STACK_LINE(2212)
		this->modified = true;
		HX_STACK_LINE(2212)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_insert","zpp_nape/util/Lists.hx",2169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2170)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::phys::ZPP_Compound &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2178);
			{
				HX_STACK_LINE(2179)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2180)
				{
					HX_STACK_LINE(2181)
					if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
						HX_STACK_LINE(2181)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();
					}
					else{
						HX_STACK_LINE(2188)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
						HX_STACK_LINE(2189)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2190)
						ret->next = null();
					}
					HX_STACK_LINE(2195)
					Dynamic();
				}
				HX_STACK_LINE(2197)
				ret->elt = o;
				HX_STACK_LINE(2198)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2178)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2200)
	if (((cur == null()))){
		HX_STACK_LINE(2201)
		temp->next = this->head;
		HX_STACK_LINE(2202)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2205)
		temp->next = cur->next;
		HX_STACK_LINE(2206)
		cur->next = temp;
	}
	HX_STACK_LINE(2208)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(2209)
	(this->length)++;
	HX_STACK_LINE(2210)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Compound cur,::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::insert","zpp_nape/util/Lists.hx",2167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::util::ZNPList_ZPP_Compound_obj *__this,::zpp_nape::phys::ZPP_Compound &o,::zpp_nape::util::ZNPNode_ZPP_Compound &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2167);
			{
				HX_STACK_LINE(2167)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::phys::ZPP_Compound &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2167);
						{
							HX_STACK_LINE(2167)
							::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2167)
							{
								HX_STACK_LINE(2167)
								if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
									HX_STACK_LINE(2167)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();
								}
								else{
									HX_STACK_LINE(2167)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
									HX_STACK_LINE(2167)
									::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2167)
									ret->next = null();
								}
								HX_STACK_LINE(2167)
								Dynamic();
							}
							HX_STACK_LINE(2167)
							ret->elt = o;
							HX_STACK_LINE(2167)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2167)
				::zpp_nape::util::ZNPNode_ZPP_Compound temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2167)
				if (((cur == null()))){
					HX_STACK_LINE(2167)
					temp->next = __this->head;
					HX_STACK_LINE(2167)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(2167)
					temp->next = cur->next;
					HX_STACK_LINE(2167)
					cur->next = temp;
				}
				HX_STACK_LINE(2167)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(2167)
				(__this->length)++;
				HX_STACK_LINE(2167)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(2167)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Compound_obj,insert,return )

Void ZNPList_ZPP_Compound_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Compound x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::addAll","zpp_nape/util/Lists.hx",2149);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2150)
		{
		}
		HX_STACK_LINE(2158)
		{
			HX_STACK_LINE(2159)
			::zpp_nape::util::ZNPNode_ZPP_Compound cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2160)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2161)
				::zpp_nape::phys::ZPP_Compound i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2162)
				this->add(i);
				HX_STACK_LINE(2163)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,addAll,(void))

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::inlined_add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::inlined_add","zpp_nape/util/Lists.hx",2112);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2113)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::phys::ZPP_Compound &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2121);
			{
				HX_STACK_LINE(2122)
				::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2123)
				{
					HX_STACK_LINE(2124)
					if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
						HX_STACK_LINE(2124)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();
					}
					else{
						HX_STACK_LINE(2131)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
						HX_STACK_LINE(2132)
						::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2133)
						ret->next = null();
					}
					HX_STACK_LINE(2138)
					Dynamic();
				}
				HX_STACK_LINE(2140)
				ret->elt = o;
				HX_STACK_LINE(2141)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2121)
	::zpp_nape::util::ZNPNode_ZPP_Compound temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2143)
	temp->next = this->head;
	HX_STACK_LINE(2144)
	this->head = temp;
	HX_STACK_LINE(2145)
	this->modified = true;
	HX_STACK_LINE(2146)
	(this->length)++;
	HX_STACK_LINE(2147)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,inlined_add,return )

::zpp_nape::phys::ZPP_Compound ZNPList_ZPP_Compound_obj::add( ::zpp_nape::phys::ZPP_Compound o){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::add","zpp_nape/util/Lists.hx",2110);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Compound Block( ::zpp_nape::phys::ZPP_Compound &o,::zpp_nape::util::ZNPList_ZPP_Compound_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2110);
			{
				HX_STACK_LINE(2110)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Compound Block( ::zpp_nape::phys::ZPP_Compound &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2110);
						{
							HX_STACK_LINE(2110)
							::zpp_nape::util::ZNPNode_ZPP_Compound ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2110)
							{
								HX_STACK_LINE(2110)
								if (((::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool == null()))){
									HX_STACK_LINE(2110)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::__new();
								}
								else{
									HX_STACK_LINE(2110)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool;
									HX_STACK_LINE(2110)
									::zpp_nape::util::ZNPNode_ZPP_Compound_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2110)
									ret->next = null();
								}
								HX_STACK_LINE(2110)
								Dynamic();
							}
							HX_STACK_LINE(2110)
							ret->elt = o;
							HX_STACK_LINE(2110)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2110)
				::zpp_nape::util::ZNPNode_ZPP_Compound temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2110)
				temp->next = __this->head;
				HX_STACK_LINE(2110)
				__this->head = temp;
				HX_STACK_LINE(2110)
				__this->modified = true;
				HX_STACK_LINE(2110)
				(__this->length)++;
				HX_STACK_LINE(2110)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(2110)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,add,return )

Void ZNPList_ZPP_Compound_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Compound i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Compound::setbegin","zpp_nape/util/Lists.hx",2105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(2106)
		this->head = i;
		HX_STACK_LINE(2107)
		this->modified = true;
		HX_STACK_LINE(2108)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Compound_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Compound ZNPList_ZPP_Compound_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Compound::begin","zpp_nape/util/Lists.hx",2100);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2100)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Compound_obj,begin,return )


ZNPList_ZPP_Compound_obj::ZNPList_ZPP_Compound_obj()
{
}

void ZNPList_ZPP_Compound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Compound);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Compound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Compound_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Compound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Compound >(); return inValue; }
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

void ZNPList_ZPP_Compound_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Compound_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Compound_obj::__mClass;

void ZNPList_ZPP_Compound_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Compound"), hx::TCanCast< ZNPList_ZPP_Compound_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Compound_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
