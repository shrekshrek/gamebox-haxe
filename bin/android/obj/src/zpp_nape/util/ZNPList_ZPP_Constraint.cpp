#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Constraint_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Constraint::new","zpp_nape/util/Lists.hx",1711);
{
	HX_STACK_LINE(1718)
	this->length = (int)0;
	HX_STACK_LINE(1717)
	this->pushmod = false;
	HX_STACK_LINE(1716)
	this->modified = false;
	HX_STACK_LINE(1712)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Constraint_obj::~ZNPList_ZPP_Constraint_obj() { }

Dynamic ZNPList_ZPP_Constraint_obj::__CreateEmpty() { return  new ZNPList_ZPP_Constraint_obj; }
hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > ZNPList_ZPP_Constraint_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > result = new ZNPList_ZPP_Constraint_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Constraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Constraint_obj > result = new ZNPList_ZPP_Constraint_obj();
	result->__construct();
	return result;}

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::at","zpp_nape/util/Lists.hx",2081);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2082)
	{
	}
	HX_STACK_LINE(2090)
	::zpp_nape::util::ZNPNode_ZPP_Constraint it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(2091)
	return (  (((it != null()))) ? ::zpp_nape::constraint::ZPP_Constraint(it->elt) : ::zpp_nape::constraint::ZPP_Constraint(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::iterator_at","zpp_nape/util/Lists.hx",2068);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(2069)
	{
	}
	HX_STACK_LINE(2077)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2078)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(2078)
		ret = ret->next;
	}
	HX_STACK_LINE(2079)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,iterator_at,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::back","zpp_nape/util/Lists.hx",2059);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2060)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2061)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2062)
	while(((cur != null()))){
		HX_STACK_LINE(2063)
		ret = cur;
		HX_STACK_LINE(2064)
		cur = cur->next;
	}
	HX_STACK_LINE(2066)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,back,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::front","zpp_nape/util/Lists.hx",2059);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2059)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,front,return )

bool ZNPList_ZPP_Constraint_obj::inlined_has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_has","zpp_nape/util/Lists.hx",2029);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2030)
	{
	}
	HX_STACK_LINE(2038)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2039)
	{
		HX_STACK_LINE(2040)
		ret = false;
		HX_STACK_LINE(2041)
		{
			HX_STACK_LINE(2042)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2043)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2044)
				::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(2045)
				if (((npite == obj))){
					HX_STACK_LINE(2047)
					ret = true;
					HX_STACK_LINE(2048)
					break;
				}
				HX_STACK_LINE(2051)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2055)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_has,return )

bool ZNPList_ZPP_Constraint_obj::has( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::has","zpp_nape/util/Lists.hx",2027);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this,::zpp_nape::constraint::ZPP_Constraint &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2027);
			{
				HX_STACK_LINE(2027)
				{
				}
				HX_STACK_LINE(2027)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2027)
				{
					HX_STACK_LINE(2027)
					ret = false;
					HX_STACK_LINE(2027)
					{
						HX_STACK_LINE(2027)
						::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2027)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2027)
							::zpp_nape::constraint::ZPP_Constraint npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(2027)
							if (((npite == obj))){
								HX_STACK_LINE(2027)
								ret = true;
								HX_STACK_LINE(2027)
								break;
							}
							HX_STACK_LINE(2027)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(2027)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2027)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,has,return )

int ZNPList_ZPP_Constraint_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::size","zpp_nape/util/Lists.hx",2027);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2027)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,size,return )

bool ZNPList_ZPP_Constraint_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::empty","zpp_nape/util/Lists.hx",2025);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2025)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,empty,return )

Void ZNPList_ZPP_Constraint_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::reverse","zpp_nape/util/Lists.hx",2010);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2011)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2012)
		::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2013)
		while(((cur != null()))){
			HX_STACK_LINE(2014)
			::zpp_nape::util::ZNPNode_ZPP_Constraint nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(2015)
			cur->next = pre;
			HX_STACK_LINE(2016)
			this->head = cur;
			HX_STACK_LINE(2017)
			pre = cur;
			HX_STACK_LINE(2018)
			cur = nx;
		}
		HX_STACK_LINE(2020)
		this->modified = true;
		HX_STACK_LINE(2021)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,reverse,(void))

Void ZNPList_ZPP_Constraint_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_clear","zpp_nape/util/Lists.hx",2004);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2006)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2006)
			{
			}
			HX_STACK_LINE(2006)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2006)
			this->head = ret->next;
			HX_STACK_LINE(2006)
			{
			}
			HX_STACK_LINE(2006)
			{
				HX_STACK_LINE(2006)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2006)
				{
				}
				HX_STACK_LINE(2006)
				o->elt = null();
				HX_STACK_LINE(2006)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
				HX_STACK_LINE(2006)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2006)
			if (((this->head == null()))){
				HX_STACK_LINE(2006)
				this->pushmod = true;
			}
			HX_STACK_LINE(2006)
			this->modified = true;
			HX_STACK_LINE(2006)
			(this->length)--;
		}
		HX_STACK_LINE(2007)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_clear,(void))

Void ZNPList_ZPP_Constraint_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::clear","zpp_nape/util/Lists.hx",2002);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2002)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(2002)
			{
			}
			HX_STACK_LINE(2002)
			::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(2002)
			this->head = ret->next;
			HX_STACK_LINE(2002)
			{
			}
			HX_STACK_LINE(2002)
			{
				HX_STACK_LINE(2002)
				::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2002)
				{
				}
				HX_STACK_LINE(2002)
				o->elt = null();
				HX_STACK_LINE(2002)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
				HX_STACK_LINE(2002)
				::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
			}
			HX_STACK_LINE(2002)
			if (((this->head == null()))){
				HX_STACK_LINE(2002)
				this->pushmod = true;
			}
			HX_STACK_LINE(2002)
			this->modified = true;
			HX_STACK_LINE(2002)
			(this->length)--;
		}
		HX_STACK_LINE(2002)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::splice","zpp_nape/util/Lists.hx",1998);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(1999)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(1999)
		this->erase(pre);
	}
	HX_STACK_LINE(2000)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_erase","zpp_nape/util/Lists.hx",1952);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(1953)
	{
	}
	HX_STACK_LINE(1961)
	::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1962)
	::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1963)
	if (((pre == null()))){
		HX_STACK_LINE(1964)
		old = this->head;
		HX_STACK_LINE(1965)
		ret = old->next;
		HX_STACK_LINE(1966)
		this->head = ret;
		HX_STACK_LINE(1967)
		if (((this->head == null()))){
			HX_STACK_LINE(1967)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1970)
		old = pre->next;
		HX_STACK_LINE(1971)
		ret = old->next;
		HX_STACK_LINE(1972)
		pre->next = ret;
		HX_STACK_LINE(1973)
		if (((ret == null()))){
			HX_STACK_LINE(1973)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1975)
	{
	}
	HX_STACK_LINE(1976)
	{
		HX_STACK_LINE(1977)
		::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1978)
		{
		}
		HX_STACK_LINE(1986)
		o->elt = null();
		HX_STACK_LINE(1987)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
		HX_STACK_LINE(1988)
		::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1993)
	this->modified = true;
	HX_STACK_LINE(1994)
	(this->length)--;
	HX_STACK_LINE(1995)
	this->pushmod = true;
	HX_STACK_LINE(1996)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Constraint pre){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::erase","zpp_nape/util/Lists.hx",1950);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::util::ZNPNode_ZPP_Constraint &pre,::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1950);
			{
				HX_STACK_LINE(1950)
				{
				}
				HX_STACK_LINE(1950)
				::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1950)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1950)
				if (((pre == null()))){
					HX_STACK_LINE(1950)
					old = __this->head;
					HX_STACK_LINE(1950)
					ret = old->next;
					HX_STACK_LINE(1950)
					__this->head = ret;
					HX_STACK_LINE(1950)
					if (((__this->head == null()))){
						HX_STACK_LINE(1950)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1950)
					old = pre->next;
					HX_STACK_LINE(1950)
					ret = old->next;
					HX_STACK_LINE(1950)
					pre->next = ret;
					HX_STACK_LINE(1950)
					if (((ret == null()))){
						HX_STACK_LINE(1950)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(1950)
				{
				}
				HX_STACK_LINE(1950)
				{
					HX_STACK_LINE(1950)
					::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1950)
					{
					}
					HX_STACK_LINE(1950)
					o->elt = null();
					HX_STACK_LINE(1950)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
					HX_STACK_LINE(1950)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1950)
				__this->modified = true;
				HX_STACK_LINE(1950)
				(__this->length)--;
				HX_STACK_LINE(1950)
				__this->pushmod = true;
				HX_STACK_LINE(1950)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1950)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,erase,return )

bool ZNPList_ZPP_Constraint_obj::inlined_try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_try_remove","zpp_nape/util/Lists.hx",1927);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1928)
	{
	}
	HX_STACK_LINE(1936)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1937)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1938)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1939)
	while(((cur != null()))){
		HX_STACK_LINE(1940)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1941)
			{
				HX_STACK_LINE(1941)
				{
				}
				HX_STACK_LINE(1941)
				::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1941)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1941)
				if (((pre == null()))){
					HX_STACK_LINE(1941)
					old = this->head;
					HX_STACK_LINE(1941)
					ret1 = old->next;
					HX_STACK_LINE(1941)
					this->head = ret1;
					HX_STACK_LINE(1941)
					if (((this->head == null()))){
						HX_STACK_LINE(1941)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1941)
					old = pre->next;
					HX_STACK_LINE(1941)
					ret1 = old->next;
					HX_STACK_LINE(1941)
					pre->next = ret1;
					HX_STACK_LINE(1941)
					if (((ret1 == null()))){
						HX_STACK_LINE(1941)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1941)
				{
				}
				HX_STACK_LINE(1941)
				{
					HX_STACK_LINE(1941)
					::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1941)
					{
					}
					HX_STACK_LINE(1941)
					o->elt = null();
					HX_STACK_LINE(1941)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
					HX_STACK_LINE(1941)
					::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1941)
				this->modified = true;
				HX_STACK_LINE(1941)
				(this->length)--;
				HX_STACK_LINE(1941)
				this->pushmod = true;
				HX_STACK_LINE(1941)
				ret1;
			}
			HX_STACK_LINE(1942)
			ret = true;
			HX_STACK_LINE(1943)
			break;
		}
		HX_STACK_LINE(1945)
		pre = cur;
		HX_STACK_LINE(1946)
		cur = cur->next;
	}
	HX_STACK_LINE(1948)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Constraint_obj::inlined_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_remove","zpp_nape/util/Lists.hx",1914);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1915)
		{
		}
		HX_STACK_LINE(1923)
		{
			HX_STACK_LINE(1923)
			{
			}
			HX_STACK_LINE(1923)
			::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1923)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1923)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1923)
			while(((cur != null()))){
				HX_STACK_LINE(1923)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1923)
					{
						HX_STACK_LINE(1923)
						{
						}
						HX_STACK_LINE(1923)
						::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1923)
						::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1923)
						if (((pre == null()))){
							HX_STACK_LINE(1923)
							old = this->head;
							HX_STACK_LINE(1923)
							ret1 = old->next;
							HX_STACK_LINE(1923)
							this->head = ret1;
							HX_STACK_LINE(1923)
							if (((this->head == null()))){
								HX_STACK_LINE(1923)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1923)
							old = pre->next;
							HX_STACK_LINE(1923)
							ret1 = old->next;
							HX_STACK_LINE(1923)
							pre->next = ret1;
							HX_STACK_LINE(1923)
							if (((ret1 == null()))){
								HX_STACK_LINE(1923)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1923)
						{
						}
						HX_STACK_LINE(1923)
						{
							HX_STACK_LINE(1923)
							::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1923)
							{
							}
							HX_STACK_LINE(1923)
							o->elt = null();
							HX_STACK_LINE(1923)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
							HX_STACK_LINE(1923)
							::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1923)
						this->modified = true;
						HX_STACK_LINE(1923)
						(this->length)--;
						HX_STACK_LINE(1923)
						this->pushmod = true;
						HX_STACK_LINE(1923)
						ret1;
					}
					HX_STACK_LINE(1923)
					ret = true;
					HX_STACK_LINE(1923)
					break;
				}
				HX_STACK_LINE(1923)
				pre = cur;
				HX_STACK_LINE(1923)
				cur = cur->next;
			}
			HX_STACK_LINE(1923)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_remove,(void))

bool ZNPList_ZPP_Constraint_obj::try_remove( ::zpp_nape::constraint::ZPP_Constraint obj){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::try_remove","zpp_nape/util/Lists.hx",1889);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1890)
	{
	}
	HX_STACK_LINE(1898)
	::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1899)
	::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1900)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1901)
	while(((cur != null()))){
		HX_STACK_LINE(1902)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1903)
			this->erase(pre);
			HX_STACK_LINE(1904)
			ret = true;
			HX_STACK_LINE(1905)
			break;
		}
		HX_STACK_LINE(1907)
		pre = cur;
		HX_STACK_LINE(1908)
		cur = cur->next;
	}
	HX_STACK_LINE(1910)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,try_remove,return )

Void ZNPList_ZPP_Constraint_obj::remove( ::zpp_nape::constraint::ZPP_Constraint obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::remove","zpp_nape/util/Lists.hx",1878);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1879)
		{
		}
		HX_STACK_LINE(1887)
		{
			HX_STACK_LINE(1887)
			{
			}
			HX_STACK_LINE(1887)
			::zpp_nape::util::ZNPNode_ZPP_Constraint pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1887)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1887)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1887)
			while(((cur != null()))){
				HX_STACK_LINE(1887)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1887)
					{
						HX_STACK_LINE(1887)
						{
						}
						HX_STACK_LINE(1887)
						::zpp_nape::util::ZNPNode_ZPP_Constraint old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1887)
						::zpp_nape::util::ZNPNode_ZPP_Constraint ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1887)
						if (((pre == null()))){
							HX_STACK_LINE(1887)
							old = this->head;
							HX_STACK_LINE(1887)
							ret1 = old->next;
							HX_STACK_LINE(1887)
							this->head = ret1;
							HX_STACK_LINE(1887)
							if (((this->head == null()))){
								HX_STACK_LINE(1887)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1887)
							old = pre->next;
							HX_STACK_LINE(1887)
							ret1 = old->next;
							HX_STACK_LINE(1887)
							pre->next = ret1;
							HX_STACK_LINE(1887)
							if (((ret1 == null()))){
								HX_STACK_LINE(1887)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1887)
						{
						}
						HX_STACK_LINE(1887)
						{
							HX_STACK_LINE(1887)
							::zpp_nape::util::ZNPNode_ZPP_Constraint o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1887)
							{
							}
							HX_STACK_LINE(1887)
							o->elt = null();
							HX_STACK_LINE(1887)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
							HX_STACK_LINE(1887)
							::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1887)
						this->modified = true;
						HX_STACK_LINE(1887)
						(this->length)--;
						HX_STACK_LINE(1887)
						this->pushmod = true;
						HX_STACK_LINE(1887)
						ret1;
					}
					HX_STACK_LINE(1887)
					ret = true;
					HX_STACK_LINE(1887)
					break;
				}
				HX_STACK_LINE(1887)
				pre = cur;
				HX_STACK_LINE(1887)
				cur = cur->next;
			}
			HX_STACK_LINE(1887)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,remove,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_pop_unsafe","zpp_nape/util/Lists.hx",1865);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1866)
	{
	}
	HX_STACK_LINE(1874)
	::zpp_nape::constraint::ZPP_Constraint ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1875)
	this->pop();
	HX_STACK_LINE(1876)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop_unsafe,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::pop_unsafe","zpp_nape/util/Lists.hx",1863);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::constraint::ZPP_Constraint Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1863);
			{
				HX_STACK_LINE(1863)
				{
				}
				HX_STACK_LINE(1863)
				::zpp_nape::constraint::ZPP_Constraint ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1863)
				__this->pop();
				HX_STACK_LINE(1863)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1863)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop_unsafe,return )

Void ZNPList_ZPP_Constraint_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_pop","zpp_nape/util/Lists.hx",1830);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1831)
		{
		}
		HX_STACK_LINE(1839)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1840)
		this->head = ret->next;
		HX_STACK_LINE(1841)
		{
		}
		HX_STACK_LINE(1842)
		{
			HX_STACK_LINE(1843)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1844)
			{
			}
			HX_STACK_LINE(1852)
			o->elt = null();
			HX_STACK_LINE(1853)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
			HX_STACK_LINE(1854)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1859)
		if (((this->head == null()))){
			HX_STACK_LINE(1859)
			this->pushmod = true;
		}
		HX_STACK_LINE(1860)
		this->modified = true;
		HX_STACK_LINE(1861)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,inlined_pop,(void))

Void ZNPList_ZPP_Constraint_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::pop","zpp_nape/util/Lists.hx",1828);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1828)
		{
		}
		HX_STACK_LINE(1828)
		::zpp_nape::util::ZNPNode_ZPP_Constraint ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1828)
		this->head = ret->next;
		HX_STACK_LINE(1828)
		{
		}
		HX_STACK_LINE(1828)
		{
			HX_STACK_LINE(1828)
			::zpp_nape::util::ZNPNode_ZPP_Constraint o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1828)
			{
			}
			HX_STACK_LINE(1828)
			o->elt = null();
			HX_STACK_LINE(1828)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
			HX_STACK_LINE(1828)
			::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1828)
		if (((this->head == null()))){
			HX_STACK_LINE(1828)
			this->pushmod = true;
		}
		HX_STACK_LINE(1828)
		this->modified = true;
		HX_STACK_LINE(1828)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_insert","zpp_nape/util/Lists.hx",1785);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1786)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1794);
			{
				HX_STACK_LINE(1795)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1796)
				{
					HX_STACK_LINE(1797)
					if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
						HX_STACK_LINE(1797)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
					}
					else{
						HX_STACK_LINE(1804)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
						HX_STACK_LINE(1805)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1806)
						ret->next = null();
					}
					HX_STACK_LINE(1811)
					Dynamic();
				}
				HX_STACK_LINE(1813)
				ret->elt = o;
				HX_STACK_LINE(1814)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1794)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1816)
	if (((cur == null()))){
		HX_STACK_LINE(1817)
		temp->next = this->head;
		HX_STACK_LINE(1818)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1821)
		temp->next = cur->next;
		HX_STACK_LINE(1822)
		cur->next = temp;
	}
	HX_STACK_LINE(1824)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(1825)
	(this->length)++;
	HX_STACK_LINE(1826)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Constraint cur,::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::insert","zpp_nape/util/Lists.hx",1783);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this,::zpp_nape::constraint::ZPP_Constraint &o,::zpp_nape::util::ZNPNode_ZPP_Constraint &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1783);
			{
				HX_STACK_LINE(1783)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1783);
						{
							HX_STACK_LINE(1783)
							::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1783)
							{
								HX_STACK_LINE(1783)
								if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
									HX_STACK_LINE(1783)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
								}
								else{
									HX_STACK_LINE(1783)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
									HX_STACK_LINE(1783)
									::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1783)
									ret->next = null();
								}
								HX_STACK_LINE(1783)
								Dynamic();
							}
							HX_STACK_LINE(1783)
							ret->elt = o;
							HX_STACK_LINE(1783)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1783)
				::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1783)
				if (((cur == null()))){
					HX_STACK_LINE(1783)
					temp->next = __this->head;
					HX_STACK_LINE(1783)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(1783)
					temp->next = cur->next;
					HX_STACK_LINE(1783)
					cur->next = temp;
				}
				HX_STACK_LINE(1783)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(1783)
				(__this->length)++;
				HX_STACK_LINE(1783)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(1783)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Constraint_obj,insert,return )

Void ZNPList_ZPP_Constraint_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Constraint x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::addAll","zpp_nape/util/Lists.hx",1765);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1766)
		{
		}
		HX_STACK_LINE(1774)
		{
			HX_STACK_LINE(1775)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1776)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1777)
				::zpp_nape::constraint::ZPP_Constraint i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1778)
				this->add(i);
				HX_STACK_LINE(1779)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,addAll,(void))

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::inlined_add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::inlined_add","zpp_nape/util/Lists.hx",1728);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1729)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1737);
			{
				HX_STACK_LINE(1738)
				::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1739)
				{
					HX_STACK_LINE(1740)
					if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
						HX_STACK_LINE(1740)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
					}
					else{
						HX_STACK_LINE(1747)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
						HX_STACK_LINE(1748)
						::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1749)
						ret->next = null();
					}
					HX_STACK_LINE(1754)
					Dynamic();
				}
				HX_STACK_LINE(1756)
				ret->elt = o;
				HX_STACK_LINE(1757)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1737)
	::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1759)
	temp->next = this->head;
	HX_STACK_LINE(1760)
	this->head = temp;
	HX_STACK_LINE(1761)
	this->modified = true;
	HX_STACK_LINE(1762)
	(this->length)++;
	HX_STACK_LINE(1763)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,inlined_add,return )

::zpp_nape::constraint::ZPP_Constraint ZNPList_ZPP_Constraint_obj::add( ::zpp_nape::constraint::ZPP_Constraint o){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::add","zpp_nape/util/Lists.hx",1726);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::constraint::ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o,::zpp_nape::util::ZNPList_ZPP_Constraint_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1726);
			{
				HX_STACK_LINE(1726)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Constraint Block( ::zpp_nape::constraint::ZPP_Constraint &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1726);
						{
							HX_STACK_LINE(1726)
							::zpp_nape::util::ZNPNode_ZPP_Constraint ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1726)
							{
								HX_STACK_LINE(1726)
								if (((::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool == null()))){
									HX_STACK_LINE(1726)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::__new();
								}
								else{
									HX_STACK_LINE(1726)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool;
									HX_STACK_LINE(1726)
									::zpp_nape::util::ZNPNode_ZPP_Constraint_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1726)
									ret->next = null();
								}
								HX_STACK_LINE(1726)
								Dynamic();
							}
							HX_STACK_LINE(1726)
							ret->elt = o;
							HX_STACK_LINE(1726)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1726)
				::zpp_nape::util::ZNPNode_ZPP_Constraint temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1726)
				temp->next = __this->head;
				HX_STACK_LINE(1726)
				__this->head = temp;
				HX_STACK_LINE(1726)
				__this->modified = true;
				HX_STACK_LINE(1726)
				(__this->length)++;
				HX_STACK_LINE(1726)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(1726)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,add,return )

Void ZNPList_ZPP_Constraint_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Constraint i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Constraint::setbegin","zpp_nape/util/Lists.hx",1721);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(1722)
		this->head = i;
		HX_STACK_LINE(1723)
		this->modified = true;
		HX_STACK_LINE(1724)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Constraint_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Constraint ZNPList_ZPP_Constraint_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Constraint::begin","zpp_nape/util/Lists.hx",1716);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1716)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Constraint_obj,begin,return )


ZNPList_ZPP_Constraint_obj::ZNPList_ZPP_Constraint_obj()
{
}

void ZNPList_ZPP_Constraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Constraint);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Constraint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Constraint_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Constraint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Constraint >(); return inValue; }
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

void ZNPList_ZPP_Constraint_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Constraint_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Constraint_obj::__mClass;

void ZNPList_ZPP_Constraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Constraint"), hx::TCanCast< ZNPList_ZPP_Constraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Constraint_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
