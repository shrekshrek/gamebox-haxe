#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutInt
#include <zpp_nape/geom/ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutInt
#include <zpp_nape/util/ZNPList_ZPP_CutInt.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutInt
#include <zpp_nape/util/ZNPNode_ZPP_CutInt.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutInt_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CutInt::new","zpp_nape/util/Lists.hx",5167);
{
	HX_STACK_LINE(5174)
	this->length = (int)0;
	HX_STACK_LINE(5173)
	this->pushmod = false;
	HX_STACK_LINE(5172)
	this->modified = false;
	HX_STACK_LINE(5168)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CutInt_obj::~ZNPList_ZPP_CutInt_obj() { }

Dynamic ZNPList_ZPP_CutInt_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutInt_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > ZNPList_ZPP_CutInt_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > result = new ZNPList_ZPP_CutInt_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CutInt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutInt_obj > result = new ZNPList_ZPP_CutInt_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::at","zpp_nape/util/Lists.hx",5537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5538)
	{
	}
	HX_STACK_LINE(5546)
	::zpp_nape::util::ZNPNode_ZPP_CutInt it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5547)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_CutInt(it->elt) : ::zpp_nape::geom::ZPP_CutInt(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::iterator_at","zpp_nape/util/Lists.hx",5524);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5525)
	{
	}
	HX_STACK_LINE(5533)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5534)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(5534)
		ret = ret->next;
	}
	HX_STACK_LINE(5535)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::back","zpp_nape/util/Lists.hx",5515);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5516)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5517)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5518)
	while(((cur != null()))){
		HX_STACK_LINE(5519)
		ret = cur;
		HX_STACK_LINE(5520)
		cur = cur->next;
	}
	HX_STACK_LINE(5522)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,back,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::front","zpp_nape/util/Lists.hx",5515);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5515)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,front,return )

bool ZNPList_ZPP_CutInt_obj::inlined_has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_has","zpp_nape/util/Lists.hx",5485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5486)
	{
	}
	HX_STACK_LINE(5494)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5495)
	{
		HX_STACK_LINE(5496)
		ret = false;
		HX_STACK_LINE(5497)
		{
			HX_STACK_LINE(5498)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5499)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5500)
				::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5501)
				if (((npite == obj))){
					HX_STACK_LINE(5503)
					ret = true;
					HX_STACK_LINE(5504)
					break;
				}
				HX_STACK_LINE(5507)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5511)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_has,return )

bool ZNPList_ZPP_CutInt_obj::has( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::has","zpp_nape/util/Lists.hx",5483);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CutInt_obj *__this,::zpp_nape::geom::ZPP_CutInt &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5483);
			{
				HX_STACK_LINE(5483)
				{
				}
				HX_STACK_LINE(5483)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5483)
				{
					HX_STACK_LINE(5483)
					ret = false;
					HX_STACK_LINE(5483)
					{
						HX_STACK_LINE(5483)
						::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(5483)
						while(((cx_ite != null()))){
							HX_STACK_LINE(5483)
							::zpp_nape::geom::ZPP_CutInt npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(5483)
							if (((npite == obj))){
								HX_STACK_LINE(5483)
								ret = true;
								HX_STACK_LINE(5483)
								break;
							}
							HX_STACK_LINE(5483)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(5483)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5483)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,has,return )

int ZNPList_ZPP_CutInt_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::size","zpp_nape/util/Lists.hx",5483);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5483)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,size,return )

bool ZNPList_ZPP_CutInt_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::empty","zpp_nape/util/Lists.hx",5481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5481)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,empty,return )

Void ZNPList_ZPP_CutInt_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::reverse","zpp_nape/util/Lists.hx",5466);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5467)
		::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5468)
		::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5469)
		while(((cur != null()))){
			HX_STACK_LINE(5470)
			::zpp_nape::util::ZNPNode_ZPP_CutInt nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5471)
			cur->next = pre;
			HX_STACK_LINE(5472)
			this->head = cur;
			HX_STACK_LINE(5473)
			pre = cur;
			HX_STACK_LINE(5474)
			cur = nx;
		}
		HX_STACK_LINE(5476)
		this->modified = true;
		HX_STACK_LINE(5477)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,reverse,(void))

Void ZNPList_ZPP_CutInt_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_clear","zpp_nape/util/Lists.hx",5460);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5462)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5462)
			{
			}
			HX_STACK_LINE(5462)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5462)
			this->head = ret->next;
			HX_STACK_LINE(5462)
			{
			}
			HX_STACK_LINE(5462)
			{
				HX_STACK_LINE(5462)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5462)
				{
				}
				HX_STACK_LINE(5462)
				o->elt = null();
				HX_STACK_LINE(5462)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5462)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5462)
			if (((this->head == null()))){
				HX_STACK_LINE(5462)
				this->pushmod = true;
			}
			HX_STACK_LINE(5462)
			this->modified = true;
			HX_STACK_LINE(5462)
			(this->length)--;
		}
		HX_STACK_LINE(5463)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutInt_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::clear","zpp_nape/util/Lists.hx",5458);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5458)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5458)
			{
			}
			HX_STACK_LINE(5458)
			::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5458)
			this->head = ret->next;
			HX_STACK_LINE(5458)
			{
			}
			HX_STACK_LINE(5458)
			{
				HX_STACK_LINE(5458)
				::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5458)
				{
				}
				HX_STACK_LINE(5458)
				o->elt = null();
				HX_STACK_LINE(5458)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
				HX_STACK_LINE(5458)
				::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5458)
			if (((this->head == null()))){
				HX_STACK_LINE(5458)
				this->pushmod = true;
			}
			HX_STACK_LINE(5458)
			this->modified = true;
			HX_STACK_LINE(5458)
			(this->length)--;
		}
		HX_STACK_LINE(5458)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::splice","zpp_nape/util/Lists.hx",5454);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(5455)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(5455)
		this->erase(pre);
	}
	HX_STACK_LINE(5456)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_erase","zpp_nape/util/Lists.hx",5408);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(5409)
	{
	}
	HX_STACK_LINE(5417)
	::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5418)
	::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5419)
	if (((pre == null()))){
		HX_STACK_LINE(5420)
		old = this->head;
		HX_STACK_LINE(5421)
		ret = old->next;
		HX_STACK_LINE(5422)
		this->head = ret;
		HX_STACK_LINE(5423)
		if (((this->head == null()))){
			HX_STACK_LINE(5423)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5426)
		old = pre->next;
		HX_STACK_LINE(5427)
		ret = old->next;
		HX_STACK_LINE(5428)
		pre->next = ret;
		HX_STACK_LINE(5429)
		if (((ret == null()))){
			HX_STACK_LINE(5429)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5431)
	{
	}
	HX_STACK_LINE(5432)
	{
		HX_STACK_LINE(5433)
		::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5434)
		{
		}
		HX_STACK_LINE(5442)
		o->elt = null();
		HX_STACK_LINE(5443)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
		HX_STACK_LINE(5444)
		::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5449)
	this->modified = true;
	HX_STACK_LINE(5450)
	(this->length)--;
	HX_STACK_LINE(5451)
	this->pushmod = true;
	HX_STACK_LINE(5452)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutInt pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::erase","zpp_nape/util/Lists.hx",5406);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::util::ZNPNode_ZPP_CutInt &pre,::zpp_nape::util::ZNPList_ZPP_CutInt_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5406);
			{
				HX_STACK_LINE(5406)
				{
				}
				HX_STACK_LINE(5406)
				::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5406)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5406)
				if (((pre == null()))){
					HX_STACK_LINE(5406)
					old = __this->head;
					HX_STACK_LINE(5406)
					ret = old->next;
					HX_STACK_LINE(5406)
					__this->head = ret;
					HX_STACK_LINE(5406)
					if (((__this->head == null()))){
						HX_STACK_LINE(5406)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5406)
					old = pre->next;
					HX_STACK_LINE(5406)
					ret = old->next;
					HX_STACK_LINE(5406)
					pre->next = ret;
					HX_STACK_LINE(5406)
					if (((ret == null()))){
						HX_STACK_LINE(5406)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(5406)
				{
				}
				HX_STACK_LINE(5406)
				{
					HX_STACK_LINE(5406)
					::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5406)
					{
					}
					HX_STACK_LINE(5406)
					o->elt = null();
					HX_STACK_LINE(5406)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
					HX_STACK_LINE(5406)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5406)
				__this->modified = true;
				HX_STACK_LINE(5406)
				(__this->length)--;
				HX_STACK_LINE(5406)
				__this->pushmod = true;
				HX_STACK_LINE(5406)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5406)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,erase,return )

bool ZNPList_ZPP_CutInt_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_try_remove","zpp_nape/util/Lists.hx",5383);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5384)
	{
	}
	HX_STACK_LINE(5392)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5393)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5394)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5395)
	while(((cur != null()))){
		HX_STACK_LINE(5396)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5397)
			{
				HX_STACK_LINE(5397)
				{
				}
				HX_STACK_LINE(5397)
				::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5397)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5397)
				if (((pre == null()))){
					HX_STACK_LINE(5397)
					old = this->head;
					HX_STACK_LINE(5397)
					ret1 = old->next;
					HX_STACK_LINE(5397)
					this->head = ret1;
					HX_STACK_LINE(5397)
					if (((this->head == null()))){
						HX_STACK_LINE(5397)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5397)
					old = pre->next;
					HX_STACK_LINE(5397)
					ret1 = old->next;
					HX_STACK_LINE(5397)
					pre->next = ret1;
					HX_STACK_LINE(5397)
					if (((ret1 == null()))){
						HX_STACK_LINE(5397)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5397)
				{
				}
				HX_STACK_LINE(5397)
				{
					HX_STACK_LINE(5397)
					::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5397)
					{
					}
					HX_STACK_LINE(5397)
					o->elt = null();
					HX_STACK_LINE(5397)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
					HX_STACK_LINE(5397)
					::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5397)
				this->modified = true;
				HX_STACK_LINE(5397)
				(this->length)--;
				HX_STACK_LINE(5397)
				this->pushmod = true;
				HX_STACK_LINE(5397)
				ret1;
			}
			HX_STACK_LINE(5398)
			ret = true;
			HX_STACK_LINE(5399)
			break;
		}
		HX_STACK_LINE(5401)
		pre = cur;
		HX_STACK_LINE(5402)
		cur = cur->next;
	}
	HX_STACK_LINE(5404)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CutInt_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_remove","zpp_nape/util/Lists.hx",5370);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5371)
		{
		}
		HX_STACK_LINE(5379)
		{
			HX_STACK_LINE(5379)
			{
			}
			HX_STACK_LINE(5379)
			::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(5379)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5379)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5379)
			while(((cur != null()))){
				HX_STACK_LINE(5379)
				if (((cur->elt == obj))){
					HX_STACK_LINE(5379)
					{
						HX_STACK_LINE(5379)
						{
						}
						HX_STACK_LINE(5379)
						::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(5379)
						::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(5379)
						if (((pre == null()))){
							HX_STACK_LINE(5379)
							old = this->head;
							HX_STACK_LINE(5379)
							ret1 = old->next;
							HX_STACK_LINE(5379)
							this->head = ret1;
							HX_STACK_LINE(5379)
							if (((this->head == null()))){
								HX_STACK_LINE(5379)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(5379)
							old = pre->next;
							HX_STACK_LINE(5379)
							ret1 = old->next;
							HX_STACK_LINE(5379)
							pre->next = ret1;
							HX_STACK_LINE(5379)
							if (((ret1 == null()))){
								HX_STACK_LINE(5379)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(5379)
						{
						}
						HX_STACK_LINE(5379)
						{
							HX_STACK_LINE(5379)
							::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5379)
							{
							}
							HX_STACK_LINE(5379)
							o->elt = null();
							HX_STACK_LINE(5379)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
							HX_STACK_LINE(5379)
							::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5379)
						this->modified = true;
						HX_STACK_LINE(5379)
						(this->length)--;
						HX_STACK_LINE(5379)
						this->pushmod = true;
						HX_STACK_LINE(5379)
						ret1;
					}
					HX_STACK_LINE(5379)
					ret = true;
					HX_STACK_LINE(5379)
					break;
				}
				HX_STACK_LINE(5379)
				pre = cur;
				HX_STACK_LINE(5379)
				cur = cur->next;
			}
			HX_STACK_LINE(5379)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutInt_obj::try_remove( ::zpp_nape::geom::ZPP_CutInt obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::try_remove","zpp_nape/util/Lists.hx",5345);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5346)
	{
	}
	HX_STACK_LINE(5354)
	::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5355)
	::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5356)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5357)
	while(((cur != null()))){
		HX_STACK_LINE(5358)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5359)
			this->erase(pre);
			HX_STACK_LINE(5360)
			ret = true;
			HX_STACK_LINE(5361)
			break;
		}
		HX_STACK_LINE(5363)
		pre = cur;
		HX_STACK_LINE(5364)
		cur = cur->next;
	}
	HX_STACK_LINE(5366)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,try_remove,return )

Void ZNPList_ZPP_CutInt_obj::remove( ::zpp_nape::geom::ZPP_CutInt obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::remove","zpp_nape/util/Lists.hx",5334);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5335)
		{
		}
		HX_STACK_LINE(5343)
		{
			HX_STACK_LINE(5343)
			{
			}
			HX_STACK_LINE(5343)
			::zpp_nape::util::ZNPNode_ZPP_CutInt pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(5343)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5343)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5343)
			while(((cur != null()))){
				HX_STACK_LINE(5343)
				if (((cur->elt == obj))){
					HX_STACK_LINE(5343)
					{
						HX_STACK_LINE(5343)
						{
						}
						HX_STACK_LINE(5343)
						::zpp_nape::util::ZNPNode_ZPP_CutInt old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(5343)
						::zpp_nape::util::ZNPNode_ZPP_CutInt ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(5343)
						if (((pre == null()))){
							HX_STACK_LINE(5343)
							old = this->head;
							HX_STACK_LINE(5343)
							ret1 = old->next;
							HX_STACK_LINE(5343)
							this->head = ret1;
							HX_STACK_LINE(5343)
							if (((this->head == null()))){
								HX_STACK_LINE(5343)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(5343)
							old = pre->next;
							HX_STACK_LINE(5343)
							ret1 = old->next;
							HX_STACK_LINE(5343)
							pre->next = ret1;
							HX_STACK_LINE(5343)
							if (((ret1 == null()))){
								HX_STACK_LINE(5343)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(5343)
						{
						}
						HX_STACK_LINE(5343)
						{
							HX_STACK_LINE(5343)
							::zpp_nape::util::ZNPNode_ZPP_CutInt o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5343)
							{
							}
							HX_STACK_LINE(5343)
							o->elt = null();
							HX_STACK_LINE(5343)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
							HX_STACK_LINE(5343)
							::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5343)
						this->modified = true;
						HX_STACK_LINE(5343)
						(this->length)--;
						HX_STACK_LINE(5343)
						this->pushmod = true;
						HX_STACK_LINE(5343)
						ret1;
					}
					HX_STACK_LINE(5343)
					ret = true;
					HX_STACK_LINE(5343)
					break;
				}
				HX_STACK_LINE(5343)
				pre = cur;
				HX_STACK_LINE(5343)
				cur = cur->next;
			}
			HX_STACK_LINE(5343)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,remove,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_pop_unsafe","zpp_nape/util/Lists.hx",5321);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5322)
	{
	}
	HX_STACK_LINE(5330)
	::zpp_nape::geom::ZPP_CutInt ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5331)
	this->pop();
	HX_STACK_LINE(5332)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::pop_unsafe","zpp_nape/util/Lists.hx",5319);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutInt Block( ::zpp_nape::util::ZNPList_ZPP_CutInt_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5319);
			{
				HX_STACK_LINE(5319)
				{
				}
				HX_STACK_LINE(5319)
				::zpp_nape::geom::ZPP_CutInt ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5319)
				__this->pop();
				HX_STACK_LINE(5319)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5319)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop_unsafe,return )

Void ZNPList_ZPP_CutInt_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_pop","zpp_nape/util/Lists.hx",5286);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5287)
		{
		}
		HX_STACK_LINE(5295)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5296)
		this->head = ret->next;
		HX_STACK_LINE(5297)
		{
		}
		HX_STACK_LINE(5298)
		{
			HX_STACK_LINE(5299)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5300)
			{
			}
			HX_STACK_LINE(5308)
			o->elt = null();
			HX_STACK_LINE(5309)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(5310)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5315)
		if (((this->head == null()))){
			HX_STACK_LINE(5315)
			this->pushmod = true;
		}
		HX_STACK_LINE(5316)
		this->modified = true;
		HX_STACK_LINE(5317)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,inlined_pop,(void))

Void ZNPList_ZPP_CutInt_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::pop","zpp_nape/util/Lists.hx",5284);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5284)
		{
		}
		HX_STACK_LINE(5284)
		::zpp_nape::util::ZNPNode_ZPP_CutInt ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5284)
		this->head = ret->next;
		HX_STACK_LINE(5284)
		{
		}
		HX_STACK_LINE(5284)
		{
			HX_STACK_LINE(5284)
			::zpp_nape::util::ZNPNode_ZPP_CutInt o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5284)
			{
			}
			HX_STACK_LINE(5284)
			o->elt = null();
			HX_STACK_LINE(5284)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
			HX_STACK_LINE(5284)
			::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5284)
		if (((this->head == null()))){
			HX_STACK_LINE(5284)
			this->pushmod = true;
		}
		HX_STACK_LINE(5284)
		this->modified = true;
		HX_STACK_LINE(5284)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_insert","zpp_nape/util/Lists.hx",5241);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(5242)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::geom::ZPP_CutInt &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5250);
			{
				HX_STACK_LINE(5251)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5252)
				{
					HX_STACK_LINE(5253)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
						HX_STACK_LINE(5253)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();
					}
					else{
						HX_STACK_LINE(5260)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
						HX_STACK_LINE(5261)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
						HX_STACK_LINE(5262)
						ret->next = null();
					}
					HX_STACK_LINE(5267)
					Dynamic();
				}
				HX_STACK_LINE(5269)
				ret->elt = o;
				HX_STACK_LINE(5270)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5250)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5272)
	if (((cur == null()))){
		HX_STACK_LINE(5273)
		temp->next = this->head;
		HX_STACK_LINE(5274)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5277)
		temp->next = cur->next;
		HX_STACK_LINE(5278)
		cur->next = temp;
	}
	HX_STACK_LINE(5280)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(5281)
	(this->length)++;
	HX_STACK_LINE(5282)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutInt cur,::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::insert","zpp_nape/util/Lists.hx",5239);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::util::ZNPList_ZPP_CutInt_obj *__this,::zpp_nape::geom::ZPP_CutInt &o,::zpp_nape::util::ZNPNode_ZPP_CutInt &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5239);
			{
				HX_STACK_LINE(5239)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::geom::ZPP_CutInt &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5239);
						{
							HX_STACK_LINE(5239)
							::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5239)
							{
								HX_STACK_LINE(5239)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
									HX_STACK_LINE(5239)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();
								}
								else{
									HX_STACK_LINE(5239)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
									HX_STACK_LINE(5239)
									::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(5239)
									ret->next = null();
								}
								HX_STACK_LINE(5239)
								Dynamic();
							}
							HX_STACK_LINE(5239)
							ret->elt = o;
							HX_STACK_LINE(5239)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5239)
				::zpp_nape::util::ZNPNode_ZPP_CutInt temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(5239)
				if (((cur == null()))){
					HX_STACK_LINE(5239)
					temp->next = __this->head;
					HX_STACK_LINE(5239)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(5239)
					temp->next = cur->next;
					HX_STACK_LINE(5239)
					cur->next = temp;
				}
				HX_STACK_LINE(5239)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(5239)
				(__this->length)++;
				HX_STACK_LINE(5239)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(5239)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutInt_obj,insert,return )

Void ZNPList_ZPP_CutInt_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutInt x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::addAll","zpp_nape/util/Lists.hx",5221);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5222)
		{
		}
		HX_STACK_LINE(5230)
		{
			HX_STACK_LINE(5231)
			::zpp_nape::util::ZNPNode_ZPP_CutInt cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5232)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5233)
				::zpp_nape::geom::ZPP_CutInt i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5234)
				this->add(i);
				HX_STACK_LINE(5235)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,addAll,(void))

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::inlined_add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::inlined_add","zpp_nape/util/Lists.hx",5184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(5185)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::geom::ZPP_CutInt &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5193);
			{
				HX_STACK_LINE(5194)
				::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5195)
				{
					HX_STACK_LINE(5196)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
						HX_STACK_LINE(5196)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();
					}
					else{
						HX_STACK_LINE(5203)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
						HX_STACK_LINE(5204)
						::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
						HX_STACK_LINE(5205)
						ret->next = null();
					}
					HX_STACK_LINE(5210)
					Dynamic();
				}
				HX_STACK_LINE(5212)
				ret->elt = o;
				HX_STACK_LINE(5213)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5193)
	::zpp_nape::util::ZNPNode_ZPP_CutInt temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5215)
	temp->next = this->head;
	HX_STACK_LINE(5216)
	this->head = temp;
	HX_STACK_LINE(5217)
	this->modified = true;
	HX_STACK_LINE(5218)
	(this->length)++;
	HX_STACK_LINE(5219)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,inlined_add,return )

::zpp_nape::geom::ZPP_CutInt ZNPList_ZPP_CutInt_obj::add( ::zpp_nape::geom::ZPP_CutInt o){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::add","zpp_nape/util/Lists.hx",5182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutInt Block( ::zpp_nape::geom::ZPP_CutInt &o,::zpp_nape::util::ZNPList_ZPP_CutInt_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5182);
			{
				HX_STACK_LINE(5182)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutInt Block( ::zpp_nape::geom::ZPP_CutInt &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5182);
						{
							HX_STACK_LINE(5182)
							::zpp_nape::util::ZNPNode_ZPP_CutInt ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5182)
							{
								HX_STACK_LINE(5182)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool == null()))){
									HX_STACK_LINE(5182)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::__new();
								}
								else{
									HX_STACK_LINE(5182)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool;
									HX_STACK_LINE(5182)
									::zpp_nape::util::ZNPNode_ZPP_CutInt_obj::zpp_pool = ret->next;
									HX_STACK_LINE(5182)
									ret->next = null();
								}
								HX_STACK_LINE(5182)
								Dynamic();
							}
							HX_STACK_LINE(5182)
							ret->elt = o;
							HX_STACK_LINE(5182)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5182)
				::zpp_nape::util::ZNPNode_ZPP_CutInt temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(5182)
				temp->next = __this->head;
				HX_STACK_LINE(5182)
				__this->head = temp;
				HX_STACK_LINE(5182)
				__this->modified = true;
				HX_STACK_LINE(5182)
				(__this->length)++;
				HX_STACK_LINE(5182)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(5182)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,add,return )

Void ZNPList_ZPP_CutInt_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutInt i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutInt::setbegin","zpp_nape/util/Lists.hx",5177);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(5178)
		this->head = i;
		HX_STACK_LINE(5179)
		this->modified = true;
		HX_STACK_LINE(5180)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutInt_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CutInt ZNPList_ZPP_CutInt_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutInt::begin","zpp_nape/util/Lists.hx",5172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5172)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutInt_obj,begin,return )


ZNPList_ZPP_CutInt_obj::ZNPList_ZPP_CutInt_obj()
{
}

void ZNPList_ZPP_CutInt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutInt);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutInt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CutInt_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CutInt_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutInt >(); return inValue; }
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

void ZNPList_ZPP_CutInt_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutInt_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CutInt_obj::__mClass;

void ZNPList_ZPP_CutInt_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CutInt"), hx::TCanCast< ZNPList_ZPP_CutInt_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CutInt_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
