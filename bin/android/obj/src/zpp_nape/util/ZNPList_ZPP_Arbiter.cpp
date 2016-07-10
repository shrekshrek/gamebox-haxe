#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Arbiter_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Arbiter::new","zpp_nape/util/Lists.hx",2479);
{
	HX_STACK_LINE(2486)
	this->length = (int)0;
	HX_STACK_LINE(2485)
	this->pushmod = false;
	HX_STACK_LINE(2484)
	this->modified = false;
	HX_STACK_LINE(2480)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Arbiter_obj::~ZNPList_ZPP_Arbiter_obj() { }

Dynamic ZNPList_ZPP_Arbiter_obj::__CreateEmpty() { return  new ZNPList_ZPP_Arbiter_obj; }
hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > ZNPList_ZPP_Arbiter_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > result = new ZNPList_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Arbiter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Arbiter_obj > result = new ZNPList_ZPP_Arbiter_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::at","zpp_nape/util/Lists.hx",2849);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2850)
	{
	}
	HX_STACK_LINE(2858)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2859)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_Arbiter(it->elt) : ::zpp_nape::dynamics::ZPP_Arbiter(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::iterator_at","zpp_nape/util/Lists.hx",2836);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2837)
	{
	}
	HX_STACK_LINE(2845)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2846)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(2846)
		ret = ret->next;
	}
	HX_STACK_LINE(2847)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::back","zpp_nape/util/Lists.hx",2827);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2828)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2829)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2830)
	while(((cur != null()))){
		HX_STACK_LINE(2831)
		ret = cur;
		HX_STACK_LINE(2832)
		cur = cur->next;
	}
	HX_STACK_LINE(2834)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,back,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::front","zpp_nape/util/Lists.hx",2827);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2827)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,front,return )

bool ZNPList_ZPP_Arbiter_obj::inlined_has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_has","zpp_nape/util/Lists.hx",2797);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2798)
	{
	}
	HX_STACK_LINE(2806)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2807)
	{
		HX_STACK_LINE(2808)
		ret = false;
		HX_STACK_LINE(2809)
		{
			HX_STACK_LINE(2810)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2811)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2812)
				::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2813)
				if (((npite == obj))){
					HX_STACK_LINE(2815)
					ret = true;
					HX_STACK_LINE(2816)
					break;
				}
				HX_STACK_LINE(2819)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2823)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_has,return )

bool ZNPList_ZPP_Arbiter_obj::has( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::has","zpp_nape/util/Lists.hx",2795);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2795);
			{
				HX_STACK_LINE(2795)
				{
				}
				HX_STACK_LINE(2795)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2795)
				{
					HX_STACK_LINE(2795)
					ret = false;
					HX_STACK_LINE(2795)
					{
						HX_STACK_LINE(2795)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2795)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2795)
							::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(2795)
							if (((npite == obj))){
								HX_STACK_LINE(2795)
								ret = true;
								HX_STACK_LINE(2795)
								break;
							}
							HX_STACK_LINE(2795)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(2795)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2795)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,has,return )

int ZNPList_ZPP_Arbiter_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::size","zpp_nape/util/Lists.hx",2795);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2795)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,size,return )

bool ZNPList_ZPP_Arbiter_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::empty","zpp_nape/util/Lists.hx",2793);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2793)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,empty,return )

Void ZNPList_ZPP_Arbiter_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::reverse","zpp_nape/util/Lists.hx",2778);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2779)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2780)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2781)
		while(((cur != null()))){
			HX_STACK_LINE(2782)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2783)
			cur->next = pre;
			HX_STACK_LINE(2784)
			this->head = cur;
			HX_STACK_LINE(2785)
			pre = cur;
			HX_STACK_LINE(2786)
			cur = nx;
		}
		HX_STACK_LINE(2788)
		this->modified = true;
		HX_STACK_LINE(2789)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,reverse,(void))

Void ZNPList_ZPP_Arbiter_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_clear","zpp_nape/util/Lists.hx",2772);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2774)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2774)
			{
			}
			HX_STACK_LINE(2774)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2774)
			this->head = ret->next;
			HX_STACK_LINE(2774)
			{
			}
			HX_STACK_LINE(2774)
			{
				HX_STACK_LINE(2774)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2774)
				{
				}
				HX_STACK_LINE(2774)
				o->elt = null();
				HX_STACK_LINE(2774)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
				HX_STACK_LINE(2774)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2774)
			if (((this->head == null()))){
				HX_STACK_LINE(2774)
				this->pushmod = true;
			}
			HX_STACK_LINE(2774)
			this->modified = true;
			HX_STACK_LINE(2774)
			(this->length)--;
		}
		HX_STACK_LINE(2775)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_clear,(void))

Void ZNPList_ZPP_Arbiter_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::clear","zpp_nape/util/Lists.hx",2770);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2770)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2770)
			{
			}
			HX_STACK_LINE(2770)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2770)
			this->head = ret->next;
			HX_STACK_LINE(2770)
			{
			}
			HX_STACK_LINE(2770)
			{
				HX_STACK_LINE(2770)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2770)
				{
				}
				HX_STACK_LINE(2770)
				o->elt = null();
				HX_STACK_LINE(2770)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
				HX_STACK_LINE(2770)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2770)
			if (((this->head == null()))){
				HX_STACK_LINE(2770)
				this->pushmod = true;
			}
			HX_STACK_LINE(2770)
			this->modified = true;
			HX_STACK_LINE(2770)
			(this->length)--;
		}
		HX_STACK_LINE(2770)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::splice","zpp_nape/util/Lists.hx",2766);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(2767)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(2767)
		this->erase(pre);
	}
	HX_STACK_LINE(2768)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_erase","zpp_nape/util/Lists.hx",2720);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(2721)
	{
	}
	HX_STACK_LINE(2729)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(2730)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2731)
	if (((pre == null()))){
		HX_STACK_LINE(2732)
		old = this->head;
		HX_STACK_LINE(2733)
		ret = old->next;
		HX_STACK_LINE(2734)
		this->head = ret;
		HX_STACK_LINE(2735)
		if (((this->head == null()))){
			HX_STACK_LINE(2735)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(2738)
		old = pre->next;
		HX_STACK_LINE(2739)
		ret = old->next;
		HX_STACK_LINE(2740)
		pre->next = ret;
		HX_STACK_LINE(2741)
		if (((ret == null()))){
			HX_STACK_LINE(2741)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(2743)
	{
	}
	HX_STACK_LINE(2744)
	{
		HX_STACK_LINE(2745)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2746)
		{
		}
		HX_STACK_LINE(2754)
		o->elt = null();
		HX_STACK_LINE(2755)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
		HX_STACK_LINE(2756)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2761)
	this->modified = true;
	HX_STACK_LINE(2762)
	(this->length)--;
	HX_STACK_LINE(2763)
	this->pushmod = true;
	HX_STACK_LINE(2764)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Arbiter pre){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::erase","zpp_nape/util/Lists.hx",2718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::util::ZNPNode_ZPP_Arbiter &pre,::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2718);
			{
				HX_STACK_LINE(2718)
				{
				}
				HX_STACK_LINE(2718)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2718)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2718)
				if (((pre == null()))){
					HX_STACK_LINE(2718)
					old = __this->head;
					HX_STACK_LINE(2718)
					ret = old->next;
					HX_STACK_LINE(2718)
					__this->head = ret;
					HX_STACK_LINE(2718)
					if (((__this->head == null()))){
						HX_STACK_LINE(2718)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2718)
					old = pre->next;
					HX_STACK_LINE(2718)
					ret = old->next;
					HX_STACK_LINE(2718)
					pre->next = ret;
					HX_STACK_LINE(2718)
					if (((ret == null()))){
						HX_STACK_LINE(2718)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(2718)
				{
				}
				HX_STACK_LINE(2718)
				{
					HX_STACK_LINE(2718)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2718)
					{
					}
					HX_STACK_LINE(2718)
					o->elt = null();
					HX_STACK_LINE(2718)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
					HX_STACK_LINE(2718)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2718)
				__this->modified = true;
				HX_STACK_LINE(2718)
				(__this->length)--;
				HX_STACK_LINE(2718)
				__this->pushmod = true;
				HX_STACK_LINE(2718)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2718)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,erase,return )

bool ZNPList_ZPP_Arbiter_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_try_remove","zpp_nape/util/Lists.hx",2695);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2696)
	{
	}
	HX_STACK_LINE(2704)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2705)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2706)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2707)
	while(((cur != null()))){
		HX_STACK_LINE(2708)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2709)
			{
				HX_STACK_LINE(2709)
				{
				}
				HX_STACK_LINE(2709)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(2709)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(2709)
				if (((pre == null()))){
					HX_STACK_LINE(2709)
					old = this->head;
					HX_STACK_LINE(2709)
					ret1 = old->next;
					HX_STACK_LINE(2709)
					this->head = ret1;
					HX_STACK_LINE(2709)
					if (((this->head == null()))){
						HX_STACK_LINE(2709)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(2709)
					old = pre->next;
					HX_STACK_LINE(2709)
					ret1 = old->next;
					HX_STACK_LINE(2709)
					pre->next = ret1;
					HX_STACK_LINE(2709)
					if (((ret1 == null()))){
						HX_STACK_LINE(2709)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(2709)
				{
				}
				HX_STACK_LINE(2709)
				{
					HX_STACK_LINE(2709)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(2709)
					{
					}
					HX_STACK_LINE(2709)
					o->elt = null();
					HX_STACK_LINE(2709)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
					HX_STACK_LINE(2709)
					::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
				}
				HX_STACK_LINE(2709)
				this->modified = true;
				HX_STACK_LINE(2709)
				(this->length)--;
				HX_STACK_LINE(2709)
				this->pushmod = true;
				HX_STACK_LINE(2709)
				ret1;
			}
			HX_STACK_LINE(2710)
			ret = true;
			HX_STACK_LINE(2711)
			break;
		}
		HX_STACK_LINE(2713)
		pre = cur;
		HX_STACK_LINE(2714)
		cur = cur->next;
	}
	HX_STACK_LINE(2716)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Arbiter_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_remove","zpp_nape/util/Lists.hx",2682);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2683)
		{
		}
		HX_STACK_LINE(2691)
		{
			HX_STACK_LINE(2691)
			{
			}
			HX_STACK_LINE(2691)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2691)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2691)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2691)
			while(((cur != null()))){
				HX_STACK_LINE(2691)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2691)
					{
						HX_STACK_LINE(2691)
						{
						}
						HX_STACK_LINE(2691)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2691)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2691)
						if (((pre == null()))){
							HX_STACK_LINE(2691)
							old = this->head;
							HX_STACK_LINE(2691)
							ret1 = old->next;
							HX_STACK_LINE(2691)
							this->head = ret1;
							HX_STACK_LINE(2691)
							if (((this->head == null()))){
								HX_STACK_LINE(2691)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2691)
							old = pre->next;
							HX_STACK_LINE(2691)
							ret1 = old->next;
							HX_STACK_LINE(2691)
							pre->next = ret1;
							HX_STACK_LINE(2691)
							if (((ret1 == null()))){
								HX_STACK_LINE(2691)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2691)
						{
						}
						HX_STACK_LINE(2691)
						{
							HX_STACK_LINE(2691)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2691)
							{
							}
							HX_STACK_LINE(2691)
							o->elt = null();
							HX_STACK_LINE(2691)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(2691)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2691)
						this->modified = true;
						HX_STACK_LINE(2691)
						(this->length)--;
						HX_STACK_LINE(2691)
						this->pushmod = true;
						HX_STACK_LINE(2691)
						ret1;
					}
					HX_STACK_LINE(2691)
					ret = true;
					HX_STACK_LINE(2691)
					break;
				}
				HX_STACK_LINE(2691)
				pre = cur;
				HX_STACK_LINE(2691)
				cur = cur->next;
			}
			HX_STACK_LINE(2691)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_remove,(void))

bool ZNPList_ZPP_Arbiter_obj::try_remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::try_remove","zpp_nape/util/Lists.hx",2657);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2658)
	{
	}
	HX_STACK_LINE(2666)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(2667)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2668)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2669)
	while(((cur != null()))){
		HX_STACK_LINE(2670)
		if (((cur->elt == obj))){
			HX_STACK_LINE(2671)
			this->erase(pre);
			HX_STACK_LINE(2672)
			ret = true;
			HX_STACK_LINE(2673)
			break;
		}
		HX_STACK_LINE(2675)
		pre = cur;
		HX_STACK_LINE(2676)
		cur = cur->next;
	}
	HX_STACK_LINE(2678)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,try_remove,return )

Void ZNPList_ZPP_Arbiter_obj::remove( ::zpp_nape::dynamics::ZPP_Arbiter obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::remove","zpp_nape/util/Lists.hx",2646);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2647)
		{
		}
		HX_STACK_LINE(2655)
		{
			HX_STACK_LINE(2655)
			{
			}
			HX_STACK_LINE(2655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(2655)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2655)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2655)
			while(((cur != null()))){
				HX_STACK_LINE(2655)
				if (((cur->elt == obj))){
					HX_STACK_LINE(2655)
					{
						HX_STACK_LINE(2655)
						{
						}
						HX_STACK_LINE(2655)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(2655)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(2655)
						if (((pre == null()))){
							HX_STACK_LINE(2655)
							old = this->head;
							HX_STACK_LINE(2655)
							ret1 = old->next;
							HX_STACK_LINE(2655)
							this->head = ret1;
							HX_STACK_LINE(2655)
							if (((this->head == null()))){
								HX_STACK_LINE(2655)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(2655)
							old = pre->next;
							HX_STACK_LINE(2655)
							ret1 = old->next;
							HX_STACK_LINE(2655)
							pre->next = ret1;
							HX_STACK_LINE(2655)
							if (((ret1 == null()))){
								HX_STACK_LINE(2655)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(2655)
						{
						}
						HX_STACK_LINE(2655)
						{
							HX_STACK_LINE(2655)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(2655)
							{
							}
							HX_STACK_LINE(2655)
							o->elt = null();
							HX_STACK_LINE(2655)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(2655)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(2655)
						this->modified = true;
						HX_STACK_LINE(2655)
						(this->length)--;
						HX_STACK_LINE(2655)
						this->pushmod = true;
						HX_STACK_LINE(2655)
						ret1;
					}
					HX_STACK_LINE(2655)
					ret = true;
					HX_STACK_LINE(2655)
					break;
				}
				HX_STACK_LINE(2655)
				pre = cur;
				HX_STACK_LINE(2655)
				cur = cur->next;
			}
			HX_STACK_LINE(2655)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,remove,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_pop_unsafe","zpp_nape/util/Lists.hx",2633);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2634)
	{
	}
	HX_STACK_LINE(2642)
	::zpp_nape::dynamics::ZPP_Arbiter ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2643)
	this->pop();
	HX_STACK_LINE(2644)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::pop_unsafe","zpp_nape/util/Lists.hx",2631);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Arbiter Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2631);
			{
				HX_STACK_LINE(2631)
				{
				}
				HX_STACK_LINE(2631)
				::zpp_nape::dynamics::ZPP_Arbiter ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2631)
				__this->pop();
				HX_STACK_LINE(2631)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2631)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop_unsafe,return )

Void ZNPList_ZPP_Arbiter_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_pop","zpp_nape/util/Lists.hx",2598);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2599)
		{
		}
		HX_STACK_LINE(2607)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2608)
		this->head = ret->next;
		HX_STACK_LINE(2609)
		{
		}
		HX_STACK_LINE(2610)
		{
			HX_STACK_LINE(2611)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2612)
			{
			}
			HX_STACK_LINE(2620)
			o->elt = null();
			HX_STACK_LINE(2621)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
			HX_STACK_LINE(2622)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2627)
		if (((this->head == null()))){
			HX_STACK_LINE(2627)
			this->pushmod = true;
		}
		HX_STACK_LINE(2628)
		this->modified = true;
		HX_STACK_LINE(2629)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,inlined_pop,(void))

Void ZNPList_ZPP_Arbiter_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::pop","zpp_nape/util/Lists.hx",2596);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2596)
		{
		}
		HX_STACK_LINE(2596)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2596)
		this->head = ret->next;
		HX_STACK_LINE(2596)
		{
		}
		HX_STACK_LINE(2596)
		{
			HX_STACK_LINE(2596)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2596)
			{
			}
			HX_STACK_LINE(2596)
			o->elt = null();
			HX_STACK_LINE(2596)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
			HX_STACK_LINE(2596)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2596)
		if (((this->head == null()))){
			HX_STACK_LINE(2596)
			this->pushmod = true;
		}
		HX_STACK_LINE(2596)
		this->modified = true;
		HX_STACK_LINE(2596)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_insert","zpp_nape/util/Lists.hx",2553);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2554)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2562);
			{
				HX_STACK_LINE(2563)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2564)
				{
					HX_STACK_LINE(2565)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(2565)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(2572)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(2573)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2574)
						ret->next = null();
					}
					HX_STACK_LINE(2579)
					Dynamic();
				}
				HX_STACK_LINE(2581)
				ret->elt = o;
				HX_STACK_LINE(2582)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2562)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2584)
	if (((cur == null()))){
		HX_STACK_LINE(2585)
		temp->next = this->head;
		HX_STACK_LINE(2586)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2589)
		temp->next = cur->next;
		HX_STACK_LINE(2590)
		cur->next = temp;
	}
	HX_STACK_LINE(2592)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(2593)
	(this->length)++;
	HX_STACK_LINE(2594)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Arbiter cur,::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::insert","zpp_nape/util/Lists.hx",2551);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &o,::zpp_nape::util::ZNPNode_ZPP_Arbiter &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2551);
			{
				HX_STACK_LINE(2551)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2551);
						{
							HX_STACK_LINE(2551)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2551)
							{
								HX_STACK_LINE(2551)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(2551)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(2551)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(2551)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2551)
									ret->next = null();
								}
								HX_STACK_LINE(2551)
								Dynamic();
							}
							HX_STACK_LINE(2551)
							ret->elt = o;
							HX_STACK_LINE(2551)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2551)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2551)
				if (((cur == null()))){
					HX_STACK_LINE(2551)
					temp->next = __this->head;
					HX_STACK_LINE(2551)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(2551)
					temp->next = cur->next;
					HX_STACK_LINE(2551)
					cur->next = temp;
				}
				HX_STACK_LINE(2551)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(2551)
				(__this->length)++;
				HX_STACK_LINE(2551)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(2551)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Arbiter_obj,insert,return )

Void ZNPList_ZPP_Arbiter_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Arbiter x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::addAll","zpp_nape/util/Lists.hx",2533);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2534)
		{
		}
		HX_STACK_LINE(2542)
		{
			HX_STACK_LINE(2543)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2544)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2545)
				::zpp_nape::dynamics::ZPP_Arbiter i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2546)
				this->add(i);
				HX_STACK_LINE(2547)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::inlined_add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::inlined_add","zpp_nape/util/Lists.hx",2496);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2497)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2505);
			{
				HX_STACK_LINE(2506)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2507)
				{
					HX_STACK_LINE(2508)
					if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
						HX_STACK_LINE(2508)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
					}
					else{
						HX_STACK_LINE(2515)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
						HX_STACK_LINE(2516)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2517)
						ret->next = null();
					}
					HX_STACK_LINE(2522)
					Dynamic();
				}
				HX_STACK_LINE(2524)
				ret->elt = o;
				HX_STACK_LINE(2525)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2505)
	::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2527)
	temp->next = this->head;
	HX_STACK_LINE(2528)
	this->head = temp;
	HX_STACK_LINE(2529)
	this->modified = true;
	HX_STACK_LINE(2530)
	(this->length)++;
	HX_STACK_LINE(2531)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::add( ::zpp_nape::dynamics::ZPP_Arbiter o){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::add","zpp_nape/util/Lists.hx",2494);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o,::zpp_nape::util::ZNPList_ZPP_Arbiter_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2494);
			{
				HX_STACK_LINE(2494)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2494);
						{
							HX_STACK_LINE(2494)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2494)
							{
								HX_STACK_LINE(2494)
								if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
									HX_STACK_LINE(2494)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
								}
								else{
									HX_STACK_LINE(2494)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
									HX_STACK_LINE(2494)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2494)
									ret->next = null();
								}
								HX_STACK_LINE(2494)
								Dynamic();
							}
							HX_STACK_LINE(2494)
							ret->elt = o;
							HX_STACK_LINE(2494)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2494)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2494)
				temp->next = __this->head;
				HX_STACK_LINE(2494)
				__this->head = temp;
				HX_STACK_LINE(2494)
				__this->modified = true;
				HX_STACK_LINE(2494)
				(__this->length)++;
				HX_STACK_LINE(2494)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(2494)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,add,return )

Void ZNPList_ZPP_Arbiter_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Arbiter i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Arbiter::setbegin","zpp_nape/util/Lists.hx",2489);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(2490)
		this->head = i;
		HX_STACK_LINE(2491)
		this->modified = true;
		HX_STACK_LINE(2492)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Arbiter_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Arbiter ZNPList_ZPP_Arbiter_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Arbiter::begin","zpp_nape/util/Lists.hx",2484);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2484)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Arbiter_obj,begin,return )


ZNPList_ZPP_Arbiter_obj::ZNPList_ZPP_Arbiter_obj()
{
}

void ZNPList_ZPP_Arbiter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Arbiter);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Arbiter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Arbiter_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Arbiter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Arbiter >(); return inValue; }
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

void ZNPList_ZPP_Arbiter_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Arbiter_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Arbiter_obj::__mClass;

void ZNPList_ZPP_Arbiter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Arbiter"), hx::TCanCast< ZNPList_ZPP_Arbiter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Arbiter_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
