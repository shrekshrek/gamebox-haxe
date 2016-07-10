#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Interactor
#include <zpp_nape/util/ZNPNode_ZPP_Interactor.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Interactor_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Interactor::new","zpp_nape/util/Lists.hx",3247);
{
	HX_STACK_LINE(3254)
	this->length = (int)0;
	HX_STACK_LINE(3253)
	this->pushmod = false;
	HX_STACK_LINE(3252)
	this->modified = false;
	HX_STACK_LINE(3248)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Interactor_obj::~ZNPList_ZPP_Interactor_obj() { }

Dynamic ZNPList_ZPP_Interactor_obj::__CreateEmpty() { return  new ZNPList_ZPP_Interactor_obj; }
hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > ZNPList_ZPP_Interactor_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > result = new ZNPList_ZPP_Interactor_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Interactor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Interactor_obj > result = new ZNPList_ZPP_Interactor_obj();
	result->__construct();
	return result;}

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::at","zpp_nape/util/Lists.hx",3617);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3618)
	{
	}
	HX_STACK_LINE(3626)
	::zpp_nape::util::ZNPNode_ZPP_Interactor it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3627)
	return (  (((it != null()))) ? ::zpp_nape::phys::ZPP_Interactor(it->elt) : ::zpp_nape::phys::ZPP_Interactor(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::iterator_at","zpp_nape/util/Lists.hx",3604);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3605)
	{
	}
	HX_STACK_LINE(3613)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3614)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3614)
		ret = ret->next;
	}
	HX_STACK_LINE(3615)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::back","zpp_nape/util/Lists.hx",3595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3596)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3597)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3598)
	while(((cur != null()))){
		HX_STACK_LINE(3599)
		ret = cur;
		HX_STACK_LINE(3600)
		cur = cur->next;
	}
	HX_STACK_LINE(3602)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,back,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::front","zpp_nape/util/Lists.hx",3595);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3595)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,front,return )

bool ZNPList_ZPP_Interactor_obj::inlined_has( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_has","zpp_nape/util/Lists.hx",3565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3566)
	{
	}
	HX_STACK_LINE(3574)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3575)
	{
		HX_STACK_LINE(3576)
		ret = false;
		HX_STACK_LINE(3577)
		{
			HX_STACK_LINE(3578)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3579)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3580)
				::zpp_nape::phys::ZPP_Interactor npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3581)
				if (((npite == obj))){
					HX_STACK_LINE(3583)
					ret = true;
					HX_STACK_LINE(3584)
					break;
				}
				HX_STACK_LINE(3587)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3591)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_has,return )

bool ZNPList_ZPP_Interactor_obj::has( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::has","zpp_nape/util/Lists.hx",3563);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Interactor_obj *__this,::zpp_nape::phys::ZPP_Interactor &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3563);
			{
				HX_STACK_LINE(3563)
				{
				}
				HX_STACK_LINE(3563)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3563)
				{
					HX_STACK_LINE(3563)
					ret = false;
					HX_STACK_LINE(3563)
					{
						HX_STACK_LINE(3563)
						::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3563)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3563)
							::zpp_nape::phys::ZPP_Interactor npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3563)
							if (((npite == obj))){
								HX_STACK_LINE(3563)
								ret = true;
								HX_STACK_LINE(3563)
								break;
							}
							HX_STACK_LINE(3563)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3563)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3563)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,has,return )

int ZNPList_ZPP_Interactor_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::size","zpp_nape/util/Lists.hx",3563);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3563)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,size,return )

bool ZNPList_ZPP_Interactor_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::empty","zpp_nape/util/Lists.hx",3561);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3561)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,empty,return )

Void ZNPList_ZPP_Interactor_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::reverse","zpp_nape/util/Lists.hx",3546);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3547)
		::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3548)
		::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3549)
		while(((cur != null()))){
			HX_STACK_LINE(3550)
			::zpp_nape::util::ZNPNode_ZPP_Interactor nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3551)
			cur->next = pre;
			HX_STACK_LINE(3552)
			this->head = cur;
			HX_STACK_LINE(3553)
			pre = cur;
			HX_STACK_LINE(3554)
			cur = nx;
		}
		HX_STACK_LINE(3556)
		this->modified = true;
		HX_STACK_LINE(3557)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,reverse,(void))

Void ZNPList_ZPP_Interactor_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_clear","zpp_nape/util/Lists.hx",3540);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3542)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3542)
			{
			}
			HX_STACK_LINE(3542)
			::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3542)
			this->head = ret->next;
			HX_STACK_LINE(3542)
			{
			}
			HX_STACK_LINE(3542)
			{
				HX_STACK_LINE(3542)
				::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3542)
				{
				}
				HX_STACK_LINE(3542)
				o->elt = null();
				HX_STACK_LINE(3542)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(3542)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3542)
			if (((this->head == null()))){
				HX_STACK_LINE(3542)
				this->pushmod = true;
			}
			HX_STACK_LINE(3542)
			this->modified = true;
			HX_STACK_LINE(3542)
			(this->length)--;
		}
		HX_STACK_LINE(3543)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_clear,(void))

Void ZNPList_ZPP_Interactor_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::clear","zpp_nape/util/Lists.hx",3538);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3538)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3538)
			{
			}
			HX_STACK_LINE(3538)
			::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3538)
			this->head = ret->next;
			HX_STACK_LINE(3538)
			{
			}
			HX_STACK_LINE(3538)
			{
				HX_STACK_LINE(3538)
				::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3538)
				{
				}
				HX_STACK_LINE(3538)
				o->elt = null();
				HX_STACK_LINE(3538)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
				HX_STACK_LINE(3538)
				::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3538)
			if (((this->head == null()))){
				HX_STACK_LINE(3538)
				this->pushmod = true;
			}
			HX_STACK_LINE(3538)
			this->modified = true;
			HX_STACK_LINE(3538)
			(this->length)--;
		}
		HX_STACK_LINE(3538)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::splice","zpp_nape/util/Lists.hx",3534);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(3535)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(3535)
		this->erase(pre);
	}
	HX_STACK_LINE(3536)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_erase","zpp_nape/util/Lists.hx",3488);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(3489)
	{
	}
	HX_STACK_LINE(3497)
	::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3498)
	::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3499)
	if (((pre == null()))){
		HX_STACK_LINE(3500)
		old = this->head;
		HX_STACK_LINE(3501)
		ret = old->next;
		HX_STACK_LINE(3502)
		this->head = ret;
		HX_STACK_LINE(3503)
		if (((this->head == null()))){
			HX_STACK_LINE(3503)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3506)
		old = pre->next;
		HX_STACK_LINE(3507)
		ret = old->next;
		HX_STACK_LINE(3508)
		pre->next = ret;
		HX_STACK_LINE(3509)
		if (((ret == null()))){
			HX_STACK_LINE(3509)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3511)
	{
	}
	HX_STACK_LINE(3512)
	{
		HX_STACK_LINE(3513)
		::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3514)
		{
		}
		HX_STACK_LINE(3522)
		o->elt = null();
		HX_STACK_LINE(3523)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
		HX_STACK_LINE(3524)
		::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3529)
	this->modified = true;
	HX_STACK_LINE(3530)
	(this->length)--;
	HX_STACK_LINE(3531)
	this->pushmod = true;
	HX_STACK_LINE(3532)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Interactor pre){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::erase","zpp_nape/util/Lists.hx",3486);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::util::ZNPNode_ZPP_Interactor &pre,::zpp_nape::util::ZNPList_ZPP_Interactor_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3486);
			{
				HX_STACK_LINE(3486)
				{
				}
				HX_STACK_LINE(3486)
				::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3486)
				::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3486)
				if (((pre == null()))){
					HX_STACK_LINE(3486)
					old = __this->head;
					HX_STACK_LINE(3486)
					ret = old->next;
					HX_STACK_LINE(3486)
					__this->head = ret;
					HX_STACK_LINE(3486)
					if (((__this->head == null()))){
						HX_STACK_LINE(3486)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3486)
					old = pre->next;
					HX_STACK_LINE(3486)
					ret = old->next;
					HX_STACK_LINE(3486)
					pre->next = ret;
					HX_STACK_LINE(3486)
					if (((ret == null()))){
						HX_STACK_LINE(3486)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(3486)
				{
				}
				HX_STACK_LINE(3486)
				{
					HX_STACK_LINE(3486)
					::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3486)
					{
					}
					HX_STACK_LINE(3486)
					o->elt = null();
					HX_STACK_LINE(3486)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
					HX_STACK_LINE(3486)
					::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3486)
				__this->modified = true;
				HX_STACK_LINE(3486)
				(__this->length)--;
				HX_STACK_LINE(3486)
				__this->pushmod = true;
				HX_STACK_LINE(3486)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3486)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,erase,return )

bool ZNPList_ZPP_Interactor_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_try_remove","zpp_nape/util/Lists.hx",3463);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3464)
	{
	}
	HX_STACK_LINE(3472)
	::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3473)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3474)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3475)
	while(((cur != null()))){
		HX_STACK_LINE(3476)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3477)
			{
				HX_STACK_LINE(3477)
				{
				}
				HX_STACK_LINE(3477)
				::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3477)
				::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3477)
				if (((pre == null()))){
					HX_STACK_LINE(3477)
					old = this->head;
					HX_STACK_LINE(3477)
					ret1 = old->next;
					HX_STACK_LINE(3477)
					this->head = ret1;
					HX_STACK_LINE(3477)
					if (((this->head == null()))){
						HX_STACK_LINE(3477)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3477)
					old = pre->next;
					HX_STACK_LINE(3477)
					ret1 = old->next;
					HX_STACK_LINE(3477)
					pre->next = ret1;
					HX_STACK_LINE(3477)
					if (((ret1 == null()))){
						HX_STACK_LINE(3477)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3477)
				{
				}
				HX_STACK_LINE(3477)
				{
					HX_STACK_LINE(3477)
					::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3477)
					{
					}
					HX_STACK_LINE(3477)
					o->elt = null();
					HX_STACK_LINE(3477)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
					HX_STACK_LINE(3477)
					::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3477)
				this->modified = true;
				HX_STACK_LINE(3477)
				(this->length)--;
				HX_STACK_LINE(3477)
				this->pushmod = true;
				HX_STACK_LINE(3477)
				ret1;
			}
			HX_STACK_LINE(3478)
			ret = true;
			HX_STACK_LINE(3479)
			break;
		}
		HX_STACK_LINE(3481)
		pre = cur;
		HX_STACK_LINE(3482)
		cur = cur->next;
	}
	HX_STACK_LINE(3484)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Interactor_obj::inlined_remove( ::zpp_nape::phys::ZPP_Interactor obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_remove","zpp_nape/util/Lists.hx",3450);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3451)
		{
		}
		HX_STACK_LINE(3459)
		{
			HX_STACK_LINE(3459)
			{
			}
			HX_STACK_LINE(3459)
			::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3459)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3459)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3459)
			while(((cur != null()))){
				HX_STACK_LINE(3459)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3459)
					{
						HX_STACK_LINE(3459)
						{
						}
						HX_STACK_LINE(3459)
						::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3459)
						::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3459)
						if (((pre == null()))){
							HX_STACK_LINE(3459)
							old = this->head;
							HX_STACK_LINE(3459)
							ret1 = old->next;
							HX_STACK_LINE(3459)
							this->head = ret1;
							HX_STACK_LINE(3459)
							if (((this->head == null()))){
								HX_STACK_LINE(3459)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3459)
							old = pre->next;
							HX_STACK_LINE(3459)
							ret1 = old->next;
							HX_STACK_LINE(3459)
							pre->next = ret1;
							HX_STACK_LINE(3459)
							if (((ret1 == null()))){
								HX_STACK_LINE(3459)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3459)
						{
						}
						HX_STACK_LINE(3459)
						{
							HX_STACK_LINE(3459)
							::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3459)
							{
							}
							HX_STACK_LINE(3459)
							o->elt = null();
							HX_STACK_LINE(3459)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
							HX_STACK_LINE(3459)
							::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3459)
						this->modified = true;
						HX_STACK_LINE(3459)
						(this->length)--;
						HX_STACK_LINE(3459)
						this->pushmod = true;
						HX_STACK_LINE(3459)
						ret1;
					}
					HX_STACK_LINE(3459)
					ret = true;
					HX_STACK_LINE(3459)
					break;
				}
				HX_STACK_LINE(3459)
				pre = cur;
				HX_STACK_LINE(3459)
				cur = cur->next;
			}
			HX_STACK_LINE(3459)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_remove,(void))

bool ZNPList_ZPP_Interactor_obj::try_remove( ::zpp_nape::phys::ZPP_Interactor obj){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::try_remove","zpp_nape/util/Lists.hx",3425);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3426)
	{
	}
	HX_STACK_LINE(3434)
	::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3435)
	::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3436)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3437)
	while(((cur != null()))){
		HX_STACK_LINE(3438)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3439)
			this->erase(pre);
			HX_STACK_LINE(3440)
			ret = true;
			HX_STACK_LINE(3441)
			break;
		}
		HX_STACK_LINE(3443)
		pre = cur;
		HX_STACK_LINE(3444)
		cur = cur->next;
	}
	HX_STACK_LINE(3446)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,try_remove,return )

Void ZNPList_ZPP_Interactor_obj::remove( ::zpp_nape::phys::ZPP_Interactor obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::remove","zpp_nape/util/Lists.hx",3414);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3415)
		{
		}
		HX_STACK_LINE(3423)
		{
			HX_STACK_LINE(3423)
			{
			}
			HX_STACK_LINE(3423)
			::zpp_nape::util::ZNPNode_ZPP_Interactor pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3423)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3423)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3423)
			while(((cur != null()))){
				HX_STACK_LINE(3423)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3423)
					{
						HX_STACK_LINE(3423)
						{
						}
						HX_STACK_LINE(3423)
						::zpp_nape::util::ZNPNode_ZPP_Interactor old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3423)
						::zpp_nape::util::ZNPNode_ZPP_Interactor ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3423)
						if (((pre == null()))){
							HX_STACK_LINE(3423)
							old = this->head;
							HX_STACK_LINE(3423)
							ret1 = old->next;
							HX_STACK_LINE(3423)
							this->head = ret1;
							HX_STACK_LINE(3423)
							if (((this->head == null()))){
								HX_STACK_LINE(3423)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3423)
							old = pre->next;
							HX_STACK_LINE(3423)
							ret1 = old->next;
							HX_STACK_LINE(3423)
							pre->next = ret1;
							HX_STACK_LINE(3423)
							if (((ret1 == null()))){
								HX_STACK_LINE(3423)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3423)
						{
						}
						HX_STACK_LINE(3423)
						{
							HX_STACK_LINE(3423)
							::zpp_nape::util::ZNPNode_ZPP_Interactor o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3423)
							{
							}
							HX_STACK_LINE(3423)
							o->elt = null();
							HX_STACK_LINE(3423)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
							HX_STACK_LINE(3423)
							::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3423)
						this->modified = true;
						HX_STACK_LINE(3423)
						(this->length)--;
						HX_STACK_LINE(3423)
						this->pushmod = true;
						HX_STACK_LINE(3423)
						ret1;
					}
					HX_STACK_LINE(3423)
					ret = true;
					HX_STACK_LINE(3423)
					break;
				}
				HX_STACK_LINE(3423)
				pre = cur;
				HX_STACK_LINE(3423)
				cur = cur->next;
			}
			HX_STACK_LINE(3423)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,remove,(void))

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_pop_unsafe","zpp_nape/util/Lists.hx",3401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3402)
	{
	}
	HX_STACK_LINE(3410)
	::zpp_nape::phys::ZPP_Interactor ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3411)
	this->pop();
	HX_STACK_LINE(3412)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_pop_unsafe,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::pop_unsafe","zpp_nape/util/Lists.hx",3399);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Interactor Block( ::zpp_nape::util::ZNPList_ZPP_Interactor_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3399);
			{
				HX_STACK_LINE(3399)
				{
				}
				HX_STACK_LINE(3399)
				::zpp_nape::phys::ZPP_Interactor ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3399)
				__this->pop();
				HX_STACK_LINE(3399)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3399)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,pop_unsafe,return )

Void ZNPList_ZPP_Interactor_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_pop","zpp_nape/util/Lists.hx",3366);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3367)
		{
		}
		HX_STACK_LINE(3375)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3376)
		this->head = ret->next;
		HX_STACK_LINE(3377)
		{
		}
		HX_STACK_LINE(3378)
		{
			HX_STACK_LINE(3379)
			::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3380)
			{
			}
			HX_STACK_LINE(3388)
			o->elt = null();
			HX_STACK_LINE(3389)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
			HX_STACK_LINE(3390)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3395)
		if (((this->head == null()))){
			HX_STACK_LINE(3395)
			this->pushmod = true;
		}
		HX_STACK_LINE(3396)
		this->modified = true;
		HX_STACK_LINE(3397)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,inlined_pop,(void))

Void ZNPList_ZPP_Interactor_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::pop","zpp_nape/util/Lists.hx",3364);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3364)
		{
		}
		HX_STACK_LINE(3364)
		::zpp_nape::util::ZNPNode_ZPP_Interactor ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3364)
		this->head = ret->next;
		HX_STACK_LINE(3364)
		{
		}
		HX_STACK_LINE(3364)
		{
			HX_STACK_LINE(3364)
			::zpp_nape::util::ZNPNode_ZPP_Interactor o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3364)
			{
			}
			HX_STACK_LINE(3364)
			o->elt = null();
			HX_STACK_LINE(3364)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
			HX_STACK_LINE(3364)
			::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3364)
		if (((this->head == null()))){
			HX_STACK_LINE(3364)
			this->pushmod = true;
		}
		HX_STACK_LINE(3364)
		this->modified = true;
		HX_STACK_LINE(3364)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_insert","zpp_nape/util/Lists.hx",3321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3322)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::phys::ZPP_Interactor &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3330);
			{
				HX_STACK_LINE(3331)
				::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3332)
				{
					HX_STACK_LINE(3333)
					if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
						HX_STACK_LINE(3333)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();
					}
					else{
						HX_STACK_LINE(3340)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
						HX_STACK_LINE(3341)
						::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3342)
						ret->next = null();
					}
					HX_STACK_LINE(3347)
					Dynamic();
				}
				HX_STACK_LINE(3349)
				ret->elt = o;
				HX_STACK_LINE(3350)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3330)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3352)
	if (((cur == null()))){
		HX_STACK_LINE(3353)
		temp->next = this->head;
		HX_STACK_LINE(3354)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3357)
		temp->next = cur->next;
		HX_STACK_LINE(3358)
		cur->next = temp;
	}
	HX_STACK_LINE(3360)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(3361)
	(this->length)++;
	HX_STACK_LINE(3362)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Interactor cur,::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::insert","zpp_nape/util/Lists.hx",3319);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::util::ZNPList_ZPP_Interactor_obj *__this,::zpp_nape::phys::ZPP_Interactor &o,::zpp_nape::util::ZNPNode_ZPP_Interactor &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3319);
			{
				HX_STACK_LINE(3319)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::phys::ZPP_Interactor &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3319);
						{
							HX_STACK_LINE(3319)
							::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3319)
							{
								HX_STACK_LINE(3319)
								if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
									HX_STACK_LINE(3319)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();
								}
								else{
									HX_STACK_LINE(3319)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
									HX_STACK_LINE(3319)
									::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3319)
									ret->next = null();
								}
								HX_STACK_LINE(3319)
								Dynamic();
							}
							HX_STACK_LINE(3319)
							ret->elt = o;
							HX_STACK_LINE(3319)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3319)
				::zpp_nape::util::ZNPNode_ZPP_Interactor temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3319)
				if (((cur == null()))){
					HX_STACK_LINE(3319)
					temp->next = __this->head;
					HX_STACK_LINE(3319)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(3319)
					temp->next = cur->next;
					HX_STACK_LINE(3319)
					cur->next = temp;
				}
				HX_STACK_LINE(3319)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(3319)
				(__this->length)++;
				HX_STACK_LINE(3319)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(3319)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Interactor_obj,insert,return )

Void ZNPList_ZPP_Interactor_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Interactor x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::addAll","zpp_nape/util/Lists.hx",3301);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(3302)
		{
		}
		HX_STACK_LINE(3310)
		{
			HX_STACK_LINE(3311)
			::zpp_nape::util::ZNPNode_ZPP_Interactor cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3312)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3313)
				::zpp_nape::phys::ZPP_Interactor i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3314)
				this->add(i);
				HX_STACK_LINE(3315)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,addAll,(void))

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::inlined_add( ::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::inlined_add","zpp_nape/util/Lists.hx",3264);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3265)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::phys::ZPP_Interactor &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3273);
			{
				HX_STACK_LINE(3274)
				::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3275)
				{
					HX_STACK_LINE(3276)
					if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
						HX_STACK_LINE(3276)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();
					}
					else{
						HX_STACK_LINE(3283)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
						HX_STACK_LINE(3284)
						::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3285)
						ret->next = null();
					}
					HX_STACK_LINE(3290)
					Dynamic();
				}
				HX_STACK_LINE(3292)
				ret->elt = o;
				HX_STACK_LINE(3293)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3273)
	::zpp_nape::util::ZNPNode_ZPP_Interactor temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3295)
	temp->next = this->head;
	HX_STACK_LINE(3296)
	this->head = temp;
	HX_STACK_LINE(3297)
	this->modified = true;
	HX_STACK_LINE(3298)
	(this->length)++;
	HX_STACK_LINE(3299)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,inlined_add,return )

::zpp_nape::phys::ZPP_Interactor ZNPList_ZPP_Interactor_obj::add( ::zpp_nape::phys::ZPP_Interactor o){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::add","zpp_nape/util/Lists.hx",3262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Interactor Block( ::zpp_nape::phys::ZPP_Interactor &o,::zpp_nape::util::ZNPList_ZPP_Interactor_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3262);
			{
				HX_STACK_LINE(3262)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Interactor Block( ::zpp_nape::phys::ZPP_Interactor &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3262);
						{
							HX_STACK_LINE(3262)
							::zpp_nape::util::ZNPNode_ZPP_Interactor ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3262)
							{
								HX_STACK_LINE(3262)
								if (((::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool == null()))){
									HX_STACK_LINE(3262)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::__new();
								}
								else{
									HX_STACK_LINE(3262)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool;
									HX_STACK_LINE(3262)
									::zpp_nape::util::ZNPNode_ZPP_Interactor_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3262)
									ret->next = null();
								}
								HX_STACK_LINE(3262)
								Dynamic();
							}
							HX_STACK_LINE(3262)
							ret->elt = o;
							HX_STACK_LINE(3262)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3262)
				::zpp_nape::util::ZNPNode_ZPP_Interactor temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3262)
				temp->next = __this->head;
				HX_STACK_LINE(3262)
				__this->head = temp;
				HX_STACK_LINE(3262)
				__this->modified = true;
				HX_STACK_LINE(3262)
				(__this->length)++;
				HX_STACK_LINE(3262)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(3262)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,add,return )

Void ZNPList_ZPP_Interactor_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Interactor i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Interactor::setbegin","zpp_nape/util/Lists.hx",3257);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(3258)
		this->head = i;
		HX_STACK_LINE(3259)
		this->modified = true;
		HX_STACK_LINE(3260)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Interactor_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Interactor ZNPList_ZPP_Interactor_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Interactor::begin","zpp_nape/util/Lists.hx",3252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3252)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Interactor_obj,begin,return )


ZNPList_ZPP_Interactor_obj::ZNPList_ZPP_Interactor_obj()
{
}

void ZNPList_ZPP_Interactor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Interactor);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Interactor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Interactor_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Interactor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Interactor >(); return inValue; }
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

void ZNPList_ZPP_Interactor_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Interactor_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Interactor_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Interactor_obj::__mClass;

void ZNPList_ZPP_Interactor_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Interactor"), hx::TCanCast< ZNPList_ZPP_Interactor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Interactor_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
