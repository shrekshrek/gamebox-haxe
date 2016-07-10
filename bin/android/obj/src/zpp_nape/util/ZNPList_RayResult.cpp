#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_RayResult
#include <zpp_nape/util/ZNPList_RayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_RayResult
#include <zpp_nape/util/ZNPNode_RayResult.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_RayResult_obj::__construct()
{
HX_STACK_PUSH("ZNPList_RayResult::new","zpp_nape/util/Lists.hx",13231);
{
	HX_STACK_LINE(13238)
	this->length = (int)0;
	HX_STACK_LINE(13237)
	this->pushmod = false;
	HX_STACK_LINE(13236)
	this->modified = false;
	HX_STACK_LINE(13232)
	this->head = null();
}
;
	return null();
}

ZNPList_RayResult_obj::~ZNPList_RayResult_obj() { }

Dynamic ZNPList_RayResult_obj::__CreateEmpty() { return  new ZNPList_RayResult_obj; }
hx::ObjectPtr< ZNPList_RayResult_obj > ZNPList_RayResult_obj::__new()
{  hx::ObjectPtr< ZNPList_RayResult_obj > result = new ZNPList_RayResult_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_RayResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_RayResult_obj > result = new ZNPList_RayResult_obj();
	result->__construct();
	return result;}

::nape::geom::RayResult ZNPList_RayResult_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_RayResult::at","zpp_nape/util/Lists.hx",13601);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13602)
	{
	}
	HX_STACK_LINE(13610)
	::zpp_nape::util::ZNPNode_RayResult it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13611)
	return (  (((it != null()))) ? ::nape::geom::RayResult(it->elt) : ::nape::geom::RayResult(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,at,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_RayResult::iterator_at","zpp_nape/util/Lists.hx",13588);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13589)
	{
	}
	HX_STACK_LINE(13597)
	::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13598)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(13598)
		ret = ret->next;
	}
	HX_STACK_LINE(13599)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,iterator_at,return )

::nape::geom::RayResult ZNPList_RayResult_obj::back( ){
	HX_STACK_PUSH("ZNPList_RayResult::back","zpp_nape/util/Lists.hx",13579);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13580)
	::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13581)
	::zpp_nape::util::ZNPNode_RayResult cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13582)
	while(((cur != null()))){
		HX_STACK_LINE(13583)
		ret = cur;
		HX_STACK_LINE(13584)
		cur = cur->next;
	}
	HX_STACK_LINE(13586)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,back,return )

::nape::geom::RayResult ZNPList_RayResult_obj::front( ){
	HX_STACK_PUSH("ZNPList_RayResult::front","zpp_nape/util/Lists.hx",13579);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13579)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,front,return )

bool ZNPList_RayResult_obj::inlined_has( ::nape::geom::RayResult obj){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_has","zpp_nape/util/Lists.hx",13549);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13550)
	{
	}
	HX_STACK_LINE(13558)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13559)
	{
		HX_STACK_LINE(13560)
		ret = false;
		HX_STACK_LINE(13561)
		{
			HX_STACK_LINE(13562)
			::zpp_nape::util::ZNPNode_RayResult cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13563)
			while(((cx_ite != null()))){
				HX_STACK_LINE(13564)
				::nape::geom::RayResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13565)
				if (((npite == obj))){
					HX_STACK_LINE(13567)
					ret = true;
					HX_STACK_LINE(13568)
					break;
				}
				HX_STACK_LINE(13571)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13575)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_has,return )

bool ZNPList_RayResult_obj::has( ::nape::geom::RayResult obj){
	HX_STACK_PUSH("ZNPList_RayResult::has","zpp_nape/util/Lists.hx",13547);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_RayResult_obj *__this,::nape::geom::RayResult &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13547);
			{
				HX_STACK_LINE(13547)
				{
				}
				HX_STACK_LINE(13547)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13547)
				{
					HX_STACK_LINE(13547)
					ret = false;
					HX_STACK_LINE(13547)
					{
						HX_STACK_LINE(13547)
						::zpp_nape::util::ZNPNode_RayResult cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(13547)
						while(((cx_ite != null()))){
							HX_STACK_LINE(13547)
							::nape::geom::RayResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(13547)
							if (((npite == obj))){
								HX_STACK_LINE(13547)
								ret = true;
								HX_STACK_LINE(13547)
								break;
							}
							HX_STACK_LINE(13547)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(13547)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13547)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,has,return )

int ZNPList_RayResult_obj::size( ){
	HX_STACK_PUSH("ZNPList_RayResult::size","zpp_nape/util/Lists.hx",13547);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13547)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,size,return )

bool ZNPList_RayResult_obj::empty( ){
	HX_STACK_PUSH("ZNPList_RayResult::empty","zpp_nape/util/Lists.hx",13545);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13545)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,empty,return )

Void ZNPList_RayResult_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_RayResult::reverse","zpp_nape/util/Lists.hx",13530);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13531)
		::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13532)
		::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13533)
		while(((cur != null()))){
			HX_STACK_LINE(13534)
			::zpp_nape::util::ZNPNode_RayResult nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13535)
			cur->next = pre;
			HX_STACK_LINE(13536)
			this->head = cur;
			HX_STACK_LINE(13537)
			pre = cur;
			HX_STACK_LINE(13538)
			cur = nx;
		}
		HX_STACK_LINE(13540)
		this->modified = true;
		HX_STACK_LINE(13541)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,reverse,(void))

Void ZNPList_RayResult_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_RayResult::inlined_clear","zpp_nape/util/Lists.hx",13524);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13526)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13526)
			{
			}
			HX_STACK_LINE(13526)
			::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13526)
			this->head = ret->next;
			HX_STACK_LINE(13526)
			{
			}
			HX_STACK_LINE(13526)
			{
				HX_STACK_LINE(13526)
				::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13526)
				{
				}
				HX_STACK_LINE(13526)
				o->elt = null();
				HX_STACK_LINE(13526)
				o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(13526)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13526)
			if (((this->head == null()))){
				HX_STACK_LINE(13526)
				this->pushmod = true;
			}
			HX_STACK_LINE(13526)
			this->modified = true;
			HX_STACK_LINE(13526)
			(this->length)--;
		}
		HX_STACK_LINE(13527)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_clear,(void))

Void ZNPList_RayResult_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_RayResult::clear","zpp_nape/util/Lists.hx",13522);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13522)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13522)
			{
			}
			HX_STACK_LINE(13522)
			::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13522)
			this->head = ret->next;
			HX_STACK_LINE(13522)
			{
			}
			HX_STACK_LINE(13522)
			{
				HX_STACK_LINE(13522)
				::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13522)
				{
				}
				HX_STACK_LINE(13522)
				o->elt = null();
				HX_STACK_LINE(13522)
				o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
				HX_STACK_LINE(13522)
				::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13522)
			if (((this->head == null()))){
				HX_STACK_LINE(13522)
				this->pushmod = true;
			}
			HX_STACK_LINE(13522)
			this->modified = true;
			HX_STACK_LINE(13522)
			(this->length)--;
		}
		HX_STACK_LINE(13522)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,clear,(void))

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::splice( ::zpp_nape::util::ZNPNode_RayResult pre,int n){
	HX_STACK_PUSH("ZNPList_RayResult::splice","zpp_nape/util/Lists.hx",13518);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(13519)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(13519)
		this->erase(pre);
	}
	HX_STACK_LINE(13520)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,splice,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::inlined_erase( ::zpp_nape::util::ZNPNode_RayResult pre){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_erase","zpp_nape/util/Lists.hx",13472);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(13473)
	{
	}
	HX_STACK_LINE(13481)
	::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(13482)
	::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13483)
	if (((pre == null()))){
		HX_STACK_LINE(13484)
		old = this->head;
		HX_STACK_LINE(13485)
		ret = old->next;
		HX_STACK_LINE(13486)
		this->head = ret;
		HX_STACK_LINE(13487)
		if (((this->head == null()))){
			HX_STACK_LINE(13487)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(13490)
		old = pre->next;
		HX_STACK_LINE(13491)
		ret = old->next;
		HX_STACK_LINE(13492)
		pre->next = ret;
		HX_STACK_LINE(13493)
		if (((ret == null()))){
			HX_STACK_LINE(13493)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(13495)
	{
	}
	HX_STACK_LINE(13496)
	{
		HX_STACK_LINE(13497)
		::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(13498)
		{
		}
		HX_STACK_LINE(13506)
		o->elt = null();
		HX_STACK_LINE(13507)
		o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
		HX_STACK_LINE(13508)
		::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(13513)
	this->modified = true;
	HX_STACK_LINE(13514)
	(this->length)--;
	HX_STACK_LINE(13515)
	this->pushmod = true;
	HX_STACK_LINE(13516)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::erase( ::zpp_nape::util::ZNPNode_RayResult pre){
	HX_STACK_PUSH("ZNPList_RayResult::erase","zpp_nape/util/Lists.hx",13470);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::zpp_nape::util::ZNPNode_RayResult &pre,::zpp_nape::util::ZNPList_RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13470);
			{
				HX_STACK_LINE(13470)
				{
				}
				HX_STACK_LINE(13470)
				::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13470)
				::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13470)
				if (((pre == null()))){
					HX_STACK_LINE(13470)
					old = __this->head;
					HX_STACK_LINE(13470)
					ret = old->next;
					HX_STACK_LINE(13470)
					__this->head = ret;
					HX_STACK_LINE(13470)
					if (((__this->head == null()))){
						HX_STACK_LINE(13470)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13470)
					old = pre->next;
					HX_STACK_LINE(13470)
					ret = old->next;
					HX_STACK_LINE(13470)
					pre->next = ret;
					HX_STACK_LINE(13470)
					if (((ret == null()))){
						HX_STACK_LINE(13470)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(13470)
				{
				}
				HX_STACK_LINE(13470)
				{
					HX_STACK_LINE(13470)
					::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13470)
					{
					}
					HX_STACK_LINE(13470)
					o->elt = null();
					HX_STACK_LINE(13470)
					o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
					HX_STACK_LINE(13470)
					::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13470)
				__this->modified = true;
				HX_STACK_LINE(13470)
				(__this->length)--;
				HX_STACK_LINE(13470)
				__this->pushmod = true;
				HX_STACK_LINE(13470)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13470)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,erase,return )

bool ZNPList_RayResult_obj::inlined_try_remove( ::nape::geom::RayResult obj){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_try_remove","zpp_nape/util/Lists.hx",13447);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13448)
	{
	}
	HX_STACK_LINE(13456)
	::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13457)
	::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13458)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13459)
	while(((cur != null()))){
		HX_STACK_LINE(13460)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13461)
			{
				HX_STACK_LINE(13461)
				{
				}
				HX_STACK_LINE(13461)
				::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13461)
				::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(13461)
				if (((pre == null()))){
					HX_STACK_LINE(13461)
					old = this->head;
					HX_STACK_LINE(13461)
					ret1 = old->next;
					HX_STACK_LINE(13461)
					this->head = ret1;
					HX_STACK_LINE(13461)
					if (((this->head == null()))){
						HX_STACK_LINE(13461)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13461)
					old = pre->next;
					HX_STACK_LINE(13461)
					ret1 = old->next;
					HX_STACK_LINE(13461)
					pre->next = ret1;
					HX_STACK_LINE(13461)
					if (((ret1 == null()))){
						HX_STACK_LINE(13461)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(13461)
				{
				}
				HX_STACK_LINE(13461)
				{
					HX_STACK_LINE(13461)
					::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13461)
					{
					}
					HX_STACK_LINE(13461)
					o->elt = null();
					HX_STACK_LINE(13461)
					o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
					HX_STACK_LINE(13461)
					::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13461)
				this->modified = true;
				HX_STACK_LINE(13461)
				(this->length)--;
				HX_STACK_LINE(13461)
				this->pushmod = true;
				HX_STACK_LINE(13461)
				ret1;
			}
			HX_STACK_LINE(13462)
			ret = true;
			HX_STACK_LINE(13463)
			break;
		}
		HX_STACK_LINE(13465)
		pre = cur;
		HX_STACK_LINE(13466)
		cur = cur->next;
	}
	HX_STACK_LINE(13468)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_try_remove,return )

Void ZNPList_RayResult_obj::inlined_remove( ::nape::geom::RayResult obj){
{
		HX_STACK_PUSH("ZNPList_RayResult::inlined_remove","zpp_nape/util/Lists.hx",13434);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13435)
		{
		}
		HX_STACK_LINE(13443)
		{
			HX_STACK_LINE(13443)
			{
			}
			HX_STACK_LINE(13443)
			::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(13443)
			::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(13443)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13443)
			while(((cur != null()))){
				HX_STACK_LINE(13443)
				if (((cur->elt == obj))){
					HX_STACK_LINE(13443)
					{
						HX_STACK_LINE(13443)
						{
						}
						HX_STACK_LINE(13443)
						::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(13443)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(13443)
						if (((pre == null()))){
							HX_STACK_LINE(13443)
							old = this->head;
							HX_STACK_LINE(13443)
							ret1 = old->next;
							HX_STACK_LINE(13443)
							this->head = ret1;
							HX_STACK_LINE(13443)
							if (((this->head == null()))){
								HX_STACK_LINE(13443)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(13443)
							old = pre->next;
							HX_STACK_LINE(13443)
							ret1 = old->next;
							HX_STACK_LINE(13443)
							pre->next = ret1;
							HX_STACK_LINE(13443)
							if (((ret1 == null()))){
								HX_STACK_LINE(13443)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(13443)
						{
						}
						HX_STACK_LINE(13443)
						{
							HX_STACK_LINE(13443)
							::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(13443)
							{
							}
							HX_STACK_LINE(13443)
							o->elt = null();
							HX_STACK_LINE(13443)
							o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
							HX_STACK_LINE(13443)
							::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
						}
						HX_STACK_LINE(13443)
						this->modified = true;
						HX_STACK_LINE(13443)
						(this->length)--;
						HX_STACK_LINE(13443)
						this->pushmod = true;
						HX_STACK_LINE(13443)
						ret1;
					}
					HX_STACK_LINE(13443)
					ret = true;
					HX_STACK_LINE(13443)
					break;
				}
				HX_STACK_LINE(13443)
				pre = cur;
				HX_STACK_LINE(13443)
				cur = cur->next;
			}
			HX_STACK_LINE(13443)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_remove,(void))

bool ZNPList_RayResult_obj::try_remove( ::nape::geom::RayResult obj){
	HX_STACK_PUSH("ZNPList_RayResult::try_remove","zpp_nape/util/Lists.hx",13409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13410)
	{
	}
	HX_STACK_LINE(13418)
	::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13419)
	::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13420)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13421)
	while(((cur != null()))){
		HX_STACK_LINE(13422)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13423)
			this->erase(pre);
			HX_STACK_LINE(13424)
			ret = true;
			HX_STACK_LINE(13425)
			break;
		}
		HX_STACK_LINE(13427)
		pre = cur;
		HX_STACK_LINE(13428)
		cur = cur->next;
	}
	HX_STACK_LINE(13430)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,try_remove,return )

Void ZNPList_RayResult_obj::remove( ::nape::geom::RayResult obj){
{
		HX_STACK_PUSH("ZNPList_RayResult::remove","zpp_nape/util/Lists.hx",13398);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13399)
		{
		}
		HX_STACK_LINE(13407)
		{
			HX_STACK_LINE(13407)
			{
			}
			HX_STACK_LINE(13407)
			::zpp_nape::util::ZNPNode_RayResult pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(13407)
			::zpp_nape::util::ZNPNode_RayResult cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(13407)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13407)
			while(((cur != null()))){
				HX_STACK_LINE(13407)
				if (((cur->elt == obj))){
					HX_STACK_LINE(13407)
					{
						HX_STACK_LINE(13407)
						{
						}
						HX_STACK_LINE(13407)
						::zpp_nape::util::ZNPNode_RayResult old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(13407)
						::zpp_nape::util::ZNPNode_RayResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(13407)
						if (((pre == null()))){
							HX_STACK_LINE(13407)
							old = this->head;
							HX_STACK_LINE(13407)
							ret1 = old->next;
							HX_STACK_LINE(13407)
							this->head = ret1;
							HX_STACK_LINE(13407)
							if (((this->head == null()))){
								HX_STACK_LINE(13407)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(13407)
							old = pre->next;
							HX_STACK_LINE(13407)
							ret1 = old->next;
							HX_STACK_LINE(13407)
							pre->next = ret1;
							HX_STACK_LINE(13407)
							if (((ret1 == null()))){
								HX_STACK_LINE(13407)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(13407)
						{
						}
						HX_STACK_LINE(13407)
						{
							HX_STACK_LINE(13407)
							::zpp_nape::util::ZNPNode_RayResult o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(13407)
							{
							}
							HX_STACK_LINE(13407)
							o->elt = null();
							HX_STACK_LINE(13407)
							o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
							HX_STACK_LINE(13407)
							::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
						}
						HX_STACK_LINE(13407)
						this->modified = true;
						HX_STACK_LINE(13407)
						(this->length)--;
						HX_STACK_LINE(13407)
						this->pushmod = true;
						HX_STACK_LINE(13407)
						ret1;
					}
					HX_STACK_LINE(13407)
					ret = true;
					HX_STACK_LINE(13407)
					break;
				}
				HX_STACK_LINE(13407)
				pre = cur;
				HX_STACK_LINE(13407)
				cur = cur->next;
			}
			HX_STACK_LINE(13407)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,remove,(void))

::nape::geom::RayResult ZNPList_RayResult_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_pop_unsafe","zpp_nape/util/Lists.hx",13385);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13386)
	{
	}
	HX_STACK_LINE(13394)
	::nape::geom::RayResult ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13395)
	this->pop();
	HX_STACK_LINE(13396)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_pop_unsafe,return )

::nape::geom::RayResult ZNPList_RayResult_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_RayResult::pop_unsafe","zpp_nape/util/Lists.hx",13383);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::geom::RayResult Block( ::zpp_nape::util::ZNPList_RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13383);
			{
				HX_STACK_LINE(13383)
				{
				}
				HX_STACK_LINE(13383)
				::nape::geom::RayResult ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13383)
				__this->pop();
				HX_STACK_LINE(13383)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13383)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,pop_unsafe,return )

Void ZNPList_RayResult_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_RayResult::inlined_pop","zpp_nape/util/Lists.hx",13350);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13351)
		{
		}
		HX_STACK_LINE(13359)
		::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13360)
		this->head = ret->next;
		HX_STACK_LINE(13361)
		{
		}
		HX_STACK_LINE(13362)
		{
			HX_STACK_LINE(13363)
			::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13364)
			{
			}
			HX_STACK_LINE(13372)
			o->elt = null();
			HX_STACK_LINE(13373)
			o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
			HX_STACK_LINE(13374)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13379)
		if (((this->head == null()))){
			HX_STACK_LINE(13379)
			this->pushmod = true;
		}
		HX_STACK_LINE(13380)
		this->modified = true;
		HX_STACK_LINE(13381)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,inlined_pop,(void))

Void ZNPList_RayResult_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_RayResult::pop","zpp_nape/util/Lists.hx",13348);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13348)
		{
		}
		HX_STACK_LINE(13348)
		::zpp_nape::util::ZNPNode_RayResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(13348)
		this->head = ret->next;
		HX_STACK_LINE(13348)
		{
		}
		HX_STACK_LINE(13348)
		{
			HX_STACK_LINE(13348)
			::zpp_nape::util::ZNPNode_RayResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(13348)
			{
			}
			HX_STACK_LINE(13348)
			o->elt = null();
			HX_STACK_LINE(13348)
			o->next = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
			HX_STACK_LINE(13348)
			::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(13348)
		if (((this->head == null()))){
			HX_STACK_LINE(13348)
			this->pushmod = true;
		}
		HX_STACK_LINE(13348)
		this->modified = true;
		HX_STACK_LINE(13348)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,pop,(void))

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::inlined_insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_insert","zpp_nape/util/Lists.hx",13305);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(13306)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::nape::geom::RayResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13314);
			{
				HX_STACK_LINE(13315)
				::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13316)
				{
					HX_STACK_LINE(13317)
					if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(13317)
						ret = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();
					}
					else{
						HX_STACK_LINE(13324)
						ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
						HX_STACK_LINE(13325)
						::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(13326)
						ret->next = null();
					}
					HX_STACK_LINE(13331)
					Dynamic();
				}
				HX_STACK_LINE(13333)
				ret->elt = o;
				HX_STACK_LINE(13334)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13314)
	::zpp_nape::util::ZNPNode_RayResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13336)
	if (((cur == null()))){
		HX_STACK_LINE(13337)
		temp->next = this->head;
		HX_STACK_LINE(13338)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(13341)
		temp->next = cur->next;
		HX_STACK_LINE(13342)
		cur->next = temp;
	}
	HX_STACK_LINE(13344)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(13345)
	(this->length)++;
	HX_STACK_LINE(13346)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::insert( ::zpp_nape::util::ZNPNode_RayResult cur,::nape::geom::RayResult o){
	HX_STACK_PUSH("ZNPList_RayResult::insert","zpp_nape/util/Lists.hx",13303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::zpp_nape::util::ZNPList_RayResult_obj *__this,::nape::geom::RayResult &o,::zpp_nape::util::ZNPNode_RayResult &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13303);
			{
				HX_STACK_LINE(13303)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::nape::geom::RayResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13303);
						{
							HX_STACK_LINE(13303)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(13303)
							{
								HX_STACK_LINE(13303)
								if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(13303)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();
								}
								else{
									HX_STACK_LINE(13303)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
									HX_STACK_LINE(13303)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(13303)
									ret->next = null();
								}
								HX_STACK_LINE(13303)
								Dynamic();
							}
							HX_STACK_LINE(13303)
							ret->elt = o;
							HX_STACK_LINE(13303)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(13303)
				::zpp_nape::util::ZNPNode_RayResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(13303)
				if (((cur == null()))){
					HX_STACK_LINE(13303)
					temp->next = __this->head;
					HX_STACK_LINE(13303)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(13303)
					temp->next = cur->next;
					HX_STACK_LINE(13303)
					cur->next = temp;
				}
				HX_STACK_LINE(13303)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(13303)
				(__this->length)++;
				HX_STACK_LINE(13303)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(13303)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_RayResult_obj,insert,return )

Void ZNPList_RayResult_obj::addAll( ::zpp_nape::util::ZNPList_RayResult x){
{
		HX_STACK_PUSH("ZNPList_RayResult::addAll","zpp_nape/util/Lists.hx",13285);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(13286)
		{
		}
		HX_STACK_LINE(13294)
		{
			HX_STACK_LINE(13295)
			::zpp_nape::util::ZNPNode_RayResult cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13296)
			while(((cx_ite != null()))){
				HX_STACK_LINE(13297)
				::nape::geom::RayResult i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(13298)
				this->add(i);
				HX_STACK_LINE(13299)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,addAll,(void))

::nape::geom::RayResult ZNPList_RayResult_obj::inlined_add( ::nape::geom::RayResult o){
	HX_STACK_PUSH("ZNPList_RayResult::inlined_add","zpp_nape/util/Lists.hx",13248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(13249)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::nape::geom::RayResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13257);
			{
				HX_STACK_LINE(13258)
				::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13259)
				{
					HX_STACK_LINE(13260)
					if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(13260)
						ret = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();
					}
					else{
						HX_STACK_LINE(13267)
						ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
						HX_STACK_LINE(13268)
						::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(13269)
						ret->next = null();
					}
					HX_STACK_LINE(13274)
					Dynamic();
				}
				HX_STACK_LINE(13276)
				ret->elt = o;
				HX_STACK_LINE(13277)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13257)
	::zpp_nape::util::ZNPNode_RayResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(13279)
	temp->next = this->head;
	HX_STACK_LINE(13280)
	this->head = temp;
	HX_STACK_LINE(13281)
	this->modified = true;
	HX_STACK_LINE(13282)
	(this->length)++;
	HX_STACK_LINE(13283)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,inlined_add,return )

::nape::geom::RayResult ZNPList_RayResult_obj::add( ::nape::geom::RayResult o){
	HX_STACK_PUSH("ZNPList_RayResult::add","zpp_nape/util/Lists.hx",13246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::nape::geom::RayResult Block( ::nape::geom::RayResult &o,::zpp_nape::util::ZNPList_RayResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13246);
			{
				HX_STACK_LINE(13246)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_RayResult Block( ::nape::geom::RayResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13246);
						{
							HX_STACK_LINE(13246)
							::zpp_nape::util::ZNPNode_RayResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(13246)
							{
								HX_STACK_LINE(13246)
								if (((::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(13246)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::__new();
								}
								else{
									HX_STACK_LINE(13246)
									ret = ::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool;
									HX_STACK_LINE(13246)
									::zpp_nape::util::ZNPNode_RayResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(13246)
									ret->next = null();
								}
								HX_STACK_LINE(13246)
								Dynamic();
							}
							HX_STACK_LINE(13246)
							ret->elt = o;
							HX_STACK_LINE(13246)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(13246)
				::zpp_nape::util::ZNPNode_RayResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(13246)
				temp->next = __this->head;
				HX_STACK_LINE(13246)
				__this->head = temp;
				HX_STACK_LINE(13246)
				__this->modified = true;
				HX_STACK_LINE(13246)
				(__this->length)++;
				HX_STACK_LINE(13246)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(13246)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,add,return )

Void ZNPList_RayResult_obj::setbegin( ::zpp_nape::util::ZNPNode_RayResult i){
{
		HX_STACK_PUSH("ZNPList_RayResult::setbegin","zpp_nape/util/Lists.hx",13241);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(13242)
		this->head = i;
		HX_STACK_LINE(13243)
		this->modified = true;
		HX_STACK_LINE(13244)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_RayResult_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_RayResult ZNPList_RayResult_obj::begin( ){
	HX_STACK_PUSH("ZNPList_RayResult::begin","zpp_nape/util/Lists.hx",13236);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13236)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_RayResult_obj,begin,return )


ZNPList_RayResult_obj::ZNPList_RayResult_obj()
{
}

void ZNPList_RayResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_RayResult);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_RayResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_RayResult_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_RayResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_RayResult >(); return inValue; }
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

void ZNPList_RayResult_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_RayResult_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_RayResult_obj::__mClass,"__mClass");
};

Class ZNPList_RayResult_obj::__mClass;

void ZNPList_RayResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_RayResult"), hx::TCanCast< ZNPList_RayResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_RayResult_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
