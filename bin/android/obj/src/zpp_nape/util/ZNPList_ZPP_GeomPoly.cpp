#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomPoly
#include <zpp_nape/util/ZNPList_ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomPoly
#include <zpp_nape/util/ZNPNode_ZPP_GeomPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomPoly_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::new","zpp_nape/util/Lists.hx",12847);
{
	HX_STACK_LINE(12854)
	this->length = (int)0;
	HX_STACK_LINE(12853)
	this->pushmod = false;
	HX_STACK_LINE(12852)
	this->modified = false;
	HX_STACK_LINE(12848)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_GeomPoly_obj::~ZNPList_ZPP_GeomPoly_obj() { }

Dynamic ZNPList_ZPP_GeomPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > ZNPList_ZPP_GeomPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomPoly_obj > result = new ZNPList_ZPP_GeomPoly_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::at","zpp_nape/util/Lists.hx",13217);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13218)
	{
	}
	HX_STACK_LINE(13226)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(13227)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_GeomPoly(it->elt) : ::zpp_nape::geom::ZPP_GeomPoly(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::iterator_at","zpp_nape/util/Lists.hx",13204);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(13205)
	{
	}
	HX_STACK_LINE(13213)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13214)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(13214)
		ret = ret->next;
	}
	HX_STACK_LINE(13215)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::back","zpp_nape/util/Lists.hx",13195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13196)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13197)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13198)
	while(((cur != null()))){
		HX_STACK_LINE(13199)
		ret = cur;
		HX_STACK_LINE(13200)
		cur = cur->next;
	}
	HX_STACK_LINE(13202)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,back,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::front","zpp_nape/util/Lists.hx",13195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13195)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,front,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_has","zpp_nape/util/Lists.hx",13165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13166)
	{
	}
	HX_STACK_LINE(13174)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13175)
	{
		HX_STACK_LINE(13176)
		ret = false;
		HX_STACK_LINE(13177)
		{
			HX_STACK_LINE(13178)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(13179)
			while(((cx_ite != null()))){
				HX_STACK_LINE(13180)
				::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(13181)
				if (((npite == obj))){
					HX_STACK_LINE(13183)
					ret = true;
					HX_STACK_LINE(13184)
					break;
				}
				HX_STACK_LINE(13187)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(13191)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_has,return )

bool ZNPList_ZPP_GeomPoly_obj::has( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::has","zpp_nape/util/Lists.hx",13163);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this,::zpp_nape::geom::ZPP_GeomPoly &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13163);
			{
				HX_STACK_LINE(13163)
				{
				}
				HX_STACK_LINE(13163)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13163)
				{
					HX_STACK_LINE(13163)
					ret = false;
					HX_STACK_LINE(13163)
					{
						HX_STACK_LINE(13163)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(13163)
						while(((cx_ite != null()))){
							HX_STACK_LINE(13163)
							::zpp_nape::geom::ZPP_GeomPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(13163)
							if (((npite == obj))){
								HX_STACK_LINE(13163)
								ret = true;
								HX_STACK_LINE(13163)
								break;
							}
							HX_STACK_LINE(13163)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(13163)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13163)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,has,return )

int ZNPList_ZPP_GeomPoly_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::size","zpp_nape/util/Lists.hx",13163);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13163)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,size,return )

bool ZNPList_ZPP_GeomPoly_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::empty","zpp_nape/util/Lists.hx",13161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13161)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,empty,return )

Void ZNPList_ZPP_GeomPoly_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::reverse","zpp_nape/util/Lists.hx",13146);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13147)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(13148)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(13149)
		while(((cur != null()))){
			HX_STACK_LINE(13150)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(13151)
			cur->next = pre;
			HX_STACK_LINE(13152)
			this->head = cur;
			HX_STACK_LINE(13153)
			pre = cur;
			HX_STACK_LINE(13154)
			cur = nx;
		}
		HX_STACK_LINE(13156)
		this->modified = true;
		HX_STACK_LINE(13157)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,reverse,(void))

Void ZNPList_ZPP_GeomPoly_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_clear","zpp_nape/util/Lists.hx",13140);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13142)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13142)
			{
			}
			HX_STACK_LINE(13142)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13142)
			this->head = ret->next;
			HX_STACK_LINE(13142)
			{
			}
			HX_STACK_LINE(13142)
			{
				HX_STACK_LINE(13142)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13142)
				{
				}
				HX_STACK_LINE(13142)
				o->elt = null();
				HX_STACK_LINE(13142)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(13142)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13142)
			if (((this->head == null()))){
				HX_STACK_LINE(13142)
				this->pushmod = true;
			}
			HX_STACK_LINE(13142)
			this->modified = true;
			HX_STACK_LINE(13142)
			(this->length)--;
		}
		HX_STACK_LINE(13143)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomPoly_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::clear","zpp_nape/util/Lists.hx",13138);
		HX_STACK_THIS(this);
		HX_STACK_LINE(13138)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(13138)
			{
			}
			HX_STACK_LINE(13138)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13138)
			this->head = ret->next;
			HX_STACK_LINE(13138)
			{
			}
			HX_STACK_LINE(13138)
			{
				HX_STACK_LINE(13138)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(13138)
				{
				}
				HX_STACK_LINE(13138)
				o->elt = null();
				HX_STACK_LINE(13138)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
				HX_STACK_LINE(13138)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(13138)
			if (((this->head == null()))){
				HX_STACK_LINE(13138)
				this->pushmod = true;
			}
			HX_STACK_LINE(13138)
			this->modified = true;
			HX_STACK_LINE(13138)
			(this->length)--;
		}
		HX_STACK_LINE(13138)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::splice","zpp_nape/util/Lists.hx",13134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(13135)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(13135)
		this->erase(pre);
	}
	HX_STACK_LINE(13136)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_erase","zpp_nape/util/Lists.hx",13088);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(13089)
	{
	}
	HX_STACK_LINE(13097)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(13098)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13099)
	if (((pre == null()))){
		HX_STACK_LINE(13100)
		old = this->head;
		HX_STACK_LINE(13101)
		ret = old->next;
		HX_STACK_LINE(13102)
		this->head = ret;
		HX_STACK_LINE(13103)
		if (((this->head == null()))){
			HX_STACK_LINE(13103)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(13106)
		old = pre->next;
		HX_STACK_LINE(13107)
		ret = old->next;
		HX_STACK_LINE(13108)
		pre->next = ret;
		HX_STACK_LINE(13109)
		if (((ret == null()))){
			HX_STACK_LINE(13109)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(13111)
	{
	}
	HX_STACK_LINE(13112)
	{
		HX_STACK_LINE(13113)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(13114)
		{
		}
		HX_STACK_LINE(13122)
		o->elt = null();
		HX_STACK_LINE(13123)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
		HX_STACK_LINE(13124)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(13129)
	this->modified = true;
	HX_STACK_LINE(13130)
	(this->length)--;
	HX_STACK_LINE(13131)
	this->pushmod = true;
	HX_STACK_LINE(13132)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::erase","zpp_nape/util/Lists.hx",13086);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly &pre,::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",13086);
			{
				HX_STACK_LINE(13086)
				{
				}
				HX_STACK_LINE(13086)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13086)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(13086)
				if (((pre == null()))){
					HX_STACK_LINE(13086)
					old = __this->head;
					HX_STACK_LINE(13086)
					ret = old->next;
					HX_STACK_LINE(13086)
					__this->head = ret;
					HX_STACK_LINE(13086)
					if (((__this->head == null()))){
						HX_STACK_LINE(13086)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13086)
					old = pre->next;
					HX_STACK_LINE(13086)
					ret = old->next;
					HX_STACK_LINE(13086)
					pre->next = ret;
					HX_STACK_LINE(13086)
					if (((ret == null()))){
						HX_STACK_LINE(13086)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(13086)
				{
				}
				HX_STACK_LINE(13086)
				{
					HX_STACK_LINE(13086)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13086)
					{
					}
					HX_STACK_LINE(13086)
					o->elt = null();
					HX_STACK_LINE(13086)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
					HX_STACK_LINE(13086)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13086)
				__this->modified = true;
				HX_STACK_LINE(13086)
				(__this->length)--;
				HX_STACK_LINE(13086)
				__this->pushmod = true;
				HX_STACK_LINE(13086)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(13086)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,erase,return )

bool ZNPList_ZPP_GeomPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_try_remove","zpp_nape/util/Lists.hx",13063);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13064)
	{
	}
	HX_STACK_LINE(13072)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13073)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13074)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13075)
	while(((cur != null()))){
		HX_STACK_LINE(13076)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13077)
			{
				HX_STACK_LINE(13077)
				{
				}
				HX_STACK_LINE(13077)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(13077)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(13077)
				if (((pre == null()))){
					HX_STACK_LINE(13077)
					old = this->head;
					HX_STACK_LINE(13077)
					ret1 = old->next;
					HX_STACK_LINE(13077)
					this->head = ret1;
					HX_STACK_LINE(13077)
					if (((this->head == null()))){
						HX_STACK_LINE(13077)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(13077)
					old = pre->next;
					HX_STACK_LINE(13077)
					ret1 = old->next;
					HX_STACK_LINE(13077)
					pre->next = ret1;
					HX_STACK_LINE(13077)
					if (((ret1 == null()))){
						HX_STACK_LINE(13077)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(13077)
				{
				}
				HX_STACK_LINE(13077)
				{
					HX_STACK_LINE(13077)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(13077)
					{
					}
					HX_STACK_LINE(13077)
					o->elt = null();
					HX_STACK_LINE(13077)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
					HX_STACK_LINE(13077)
					::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(13077)
				this->modified = true;
				HX_STACK_LINE(13077)
				(this->length)--;
				HX_STACK_LINE(13077)
				this->pushmod = true;
				HX_STACK_LINE(13077)
				ret1;
			}
			HX_STACK_LINE(13078)
			ret = true;
			HX_STACK_LINE(13079)
			break;
		}
		HX_STACK_LINE(13081)
		pre = cur;
		HX_STACK_LINE(13082)
		cur = cur->next;
	}
	HX_STACK_LINE(13084)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_remove","zpp_nape/util/Lists.hx",13050);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13051)
		{
		}
		HX_STACK_LINE(13059)
		{
			HX_STACK_LINE(13059)
			{
			}
			HX_STACK_LINE(13059)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(13059)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(13059)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13059)
			while(((cur != null()))){
				HX_STACK_LINE(13059)
				if (((cur->elt == obj))){
					HX_STACK_LINE(13059)
					{
						HX_STACK_LINE(13059)
						{
						}
						HX_STACK_LINE(13059)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(13059)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(13059)
						if (((pre == null()))){
							HX_STACK_LINE(13059)
							old = this->head;
							HX_STACK_LINE(13059)
							ret1 = old->next;
							HX_STACK_LINE(13059)
							this->head = ret1;
							HX_STACK_LINE(13059)
							if (((this->head == null()))){
								HX_STACK_LINE(13059)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(13059)
							old = pre->next;
							HX_STACK_LINE(13059)
							ret1 = old->next;
							HX_STACK_LINE(13059)
							pre->next = ret1;
							HX_STACK_LINE(13059)
							if (((ret1 == null()))){
								HX_STACK_LINE(13059)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(13059)
						{
						}
						HX_STACK_LINE(13059)
						{
							HX_STACK_LINE(13059)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(13059)
							{
							}
							HX_STACK_LINE(13059)
							o->elt = null();
							HX_STACK_LINE(13059)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
							HX_STACK_LINE(13059)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(13059)
						this->modified = true;
						HX_STACK_LINE(13059)
						(this->length)--;
						HX_STACK_LINE(13059)
						this->pushmod = true;
						HX_STACK_LINE(13059)
						ret1;
					}
					HX_STACK_LINE(13059)
					ret = true;
					HX_STACK_LINE(13059)
					break;
				}
				HX_STACK_LINE(13059)
				pre = cur;
				HX_STACK_LINE(13059)
				cur = cur->next;
			}
			HX_STACK_LINE(13059)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomPoly_obj::try_remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::try_remove","zpp_nape/util/Lists.hx",13025);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(13026)
	{
	}
	HX_STACK_LINE(13034)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(13035)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(13036)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13037)
	while(((cur != null()))){
		HX_STACK_LINE(13038)
		if (((cur->elt == obj))){
			HX_STACK_LINE(13039)
			this->erase(pre);
			HX_STACK_LINE(13040)
			ret = true;
			HX_STACK_LINE(13041)
			break;
		}
		HX_STACK_LINE(13043)
		pre = cur;
		HX_STACK_LINE(13044)
		cur = cur->next;
	}
	HX_STACK_LINE(13046)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,try_remove,return )

Void ZNPList_ZPP_GeomPoly_obj::remove( ::zpp_nape::geom::ZPP_GeomPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::remove","zpp_nape/util/Lists.hx",13014);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(13015)
		{
		}
		HX_STACK_LINE(13023)
		{
			HX_STACK_LINE(13023)
			{
			}
			HX_STACK_LINE(13023)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(13023)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(13023)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(13023)
			while(((cur != null()))){
				HX_STACK_LINE(13023)
				if (((cur->elt == obj))){
					HX_STACK_LINE(13023)
					{
						HX_STACK_LINE(13023)
						{
						}
						HX_STACK_LINE(13023)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(13023)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(13023)
						if (((pre == null()))){
							HX_STACK_LINE(13023)
							old = this->head;
							HX_STACK_LINE(13023)
							ret1 = old->next;
							HX_STACK_LINE(13023)
							this->head = ret1;
							HX_STACK_LINE(13023)
							if (((this->head == null()))){
								HX_STACK_LINE(13023)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(13023)
							old = pre->next;
							HX_STACK_LINE(13023)
							ret1 = old->next;
							HX_STACK_LINE(13023)
							pre->next = ret1;
							HX_STACK_LINE(13023)
							if (((ret1 == null()))){
								HX_STACK_LINE(13023)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(13023)
						{
						}
						HX_STACK_LINE(13023)
						{
							HX_STACK_LINE(13023)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(13023)
							{
							}
							HX_STACK_LINE(13023)
							o->elt = null();
							HX_STACK_LINE(13023)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
							HX_STACK_LINE(13023)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(13023)
						this->modified = true;
						HX_STACK_LINE(13023)
						(this->length)--;
						HX_STACK_LINE(13023)
						this->pushmod = true;
						HX_STACK_LINE(13023)
						ret1;
					}
					HX_STACK_LINE(13023)
					ret = true;
					HX_STACK_LINE(13023)
					break;
				}
				HX_STACK_LINE(13023)
				pre = cur;
				HX_STACK_LINE(13023)
				cur = cur->next;
			}
			HX_STACK_LINE(13023)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,remove,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_pop_unsafe","zpp_nape/util/Lists.hx",13001);
	HX_STACK_THIS(this);
	HX_STACK_LINE(13002)
	{
	}
	HX_STACK_LINE(13010)
	::zpp_nape::geom::ZPP_GeomPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(13011)
	this->pop();
	HX_STACK_LINE(13012)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::pop_unsafe","zpp_nape/util/Lists.hx",12999);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomPoly Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12999);
			{
				HX_STACK_LINE(12999)
				{
				}
				HX_STACK_LINE(12999)
				::zpp_nape::geom::ZPP_GeomPoly ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12999)
				__this->pop();
				HX_STACK_LINE(12999)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12999)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop_unsafe,return )

Void ZNPList_ZPP_GeomPoly_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_pop","zpp_nape/util/Lists.hx",12966);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12967)
		{
		}
		HX_STACK_LINE(12975)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12976)
		this->head = ret->next;
		HX_STACK_LINE(12977)
		{
		}
		HX_STACK_LINE(12978)
		{
			HX_STACK_LINE(12979)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12980)
			{
			}
			HX_STACK_LINE(12988)
			o->elt = null();
			HX_STACK_LINE(12989)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(12990)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12995)
		if (((this->head == null()))){
			HX_STACK_LINE(12995)
			this->pushmod = true;
		}
		HX_STACK_LINE(12996)
		this->modified = true;
		HX_STACK_LINE(12997)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,inlined_pop,(void))

Void ZNPList_ZPP_GeomPoly_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::pop","zpp_nape/util/Lists.hx",12964);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12964)
		{
		}
		HX_STACK_LINE(12964)
		::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12964)
		this->head = ret->next;
		HX_STACK_LINE(12964)
		{
		}
		HX_STACK_LINE(12964)
		{
			HX_STACK_LINE(12964)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12964)
			{
			}
			HX_STACK_LINE(12964)
			o->elt = null();
			HX_STACK_LINE(12964)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
			HX_STACK_LINE(12964)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12964)
		if (((this->head == null()))){
			HX_STACK_LINE(12964)
			this->pushmod = true;
		}
		HX_STACK_LINE(12964)
		this->modified = true;
		HX_STACK_LINE(12964)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_insert","zpp_nape/util/Lists.hx",12921);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12922)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12930);
			{
				HX_STACK_LINE(12931)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12932)
				{
					HX_STACK_LINE(12933)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(12933)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(12940)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(12941)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12942)
						ret->next = null();
					}
					HX_STACK_LINE(12947)
					Dynamic();
				}
				HX_STACK_LINE(12949)
				ret->elt = o;
				HX_STACK_LINE(12950)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12930)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12952)
	if (((cur == null()))){
		HX_STACK_LINE(12953)
		temp->next = this->head;
		HX_STACK_LINE(12954)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12957)
		temp->next = cur->next;
		HX_STACK_LINE(12958)
		cur->next = temp;
	}
	HX_STACK_LINE(12960)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(12961)
	(this->length)++;
	HX_STACK_LINE(12962)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly cur,::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::insert","zpp_nape/util/Lists.hx",12919);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this,::zpp_nape::geom::ZPP_GeomPoly &o,::zpp_nape::util::ZNPNode_ZPP_GeomPoly &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12919);
			{
				HX_STACK_LINE(12919)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12919);
						{
							HX_STACK_LINE(12919)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12919)
							{
								HX_STACK_LINE(12919)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(12919)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(12919)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
									HX_STACK_LINE(12919)
									::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12919)
									ret->next = null();
								}
								HX_STACK_LINE(12919)
								Dynamic();
							}
							HX_STACK_LINE(12919)
							ret->elt = o;
							HX_STACK_LINE(12919)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12919)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12919)
				if (((cur == null()))){
					HX_STACK_LINE(12919)
					temp->next = __this->head;
					HX_STACK_LINE(12919)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(12919)
					temp->next = cur->next;
					HX_STACK_LINE(12919)
					cur->next = temp;
				}
				HX_STACK_LINE(12919)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(12919)
				(__this->length)++;
				HX_STACK_LINE(12919)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(12919)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomPoly_obj,insert,return )

Void ZNPList_ZPP_GeomPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomPoly x){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::addAll","zpp_nape/util/Lists.hx",12901);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(12902)
		{
		}
		HX_STACK_LINE(12910)
		{
			HX_STACK_LINE(12911)
			::zpp_nape::util::ZNPNode_ZPP_GeomPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12912)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12913)
				::zpp_nape::geom::ZPP_GeomPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(12914)
				this->add(i);
				HX_STACK_LINE(12915)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,addAll,(void))

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::inlined_add","zpp_nape/util/Lists.hx",12864);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12865)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12873);
			{
				HX_STACK_LINE(12874)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12875)
				{
					HX_STACK_LINE(12876)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(12876)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(12883)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
						HX_STACK_LINE(12884)
						::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12885)
						ret->next = null();
					}
					HX_STACK_LINE(12890)
					Dynamic();
				}
				HX_STACK_LINE(12892)
				ret->elt = o;
				HX_STACK_LINE(12893)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12873)
	::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12895)
	temp->next = this->head;
	HX_STACK_LINE(12896)
	this->head = temp;
	HX_STACK_LINE(12897)
	this->modified = true;
	HX_STACK_LINE(12898)
	(this->length)++;
	HX_STACK_LINE(12899)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,inlined_add,return )

::zpp_nape::geom::ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::add( ::zpp_nape::geom::ZPP_GeomPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::add","zpp_nape/util/Lists.hx",12862);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o,::zpp_nape::util::ZNPList_ZPP_GeomPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12862);
			{
				HX_STACK_LINE(12862)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomPoly Block( ::zpp_nape::geom::ZPP_GeomPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12862);
						{
							HX_STACK_LINE(12862)
							::zpp_nape::util::ZNPNode_ZPP_GeomPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12862)
							{
								HX_STACK_LINE(12862)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(12862)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(12862)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool;
									HX_STACK_LINE(12862)
									::zpp_nape::util::ZNPNode_ZPP_GeomPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12862)
									ret->next = null();
								}
								HX_STACK_LINE(12862)
								Dynamic();
							}
							HX_STACK_LINE(12862)
							ret->elt = o;
							HX_STACK_LINE(12862)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12862)
				::zpp_nape::util::ZNPNode_ZPP_GeomPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12862)
				temp->next = __this->head;
				HX_STACK_LINE(12862)
				__this->head = temp;
				HX_STACK_LINE(12862)
				__this->modified = true;
				HX_STACK_LINE(12862)
				(__this->length)++;
				HX_STACK_LINE(12862)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(12862)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,add,return )

Void ZNPList_ZPP_GeomPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomPoly i){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::setbegin","zpp_nape/util/Lists.hx",12857);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(12858)
		this->head = i;
		HX_STACK_LINE(12859)
		this->modified = true;
		HX_STACK_LINE(12860)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomPoly_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomPoly ZNPList_ZPP_GeomPoly_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomPoly::begin","zpp_nape/util/Lists.hx",12852);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12852)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomPoly_obj,begin,return )


ZNPList_ZPP_GeomPoly_obj::ZNPList_ZPP_GeomPoly_obj()
{
}

void ZNPList_ZPP_GeomPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomPoly);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_GeomPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomPoly >(); return inValue; }
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

void ZNPList_ZPP_GeomPoly_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomPoly_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_GeomPoly_obj::__mClass;

void ZNPList_ZPP_GeomPoly_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomPoly"), hx::TCanCast< ZNPList_ZPP_GeomPoly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_GeomPoly_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
