#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Body::new","zpp_nape/util/Lists.hx",1327);
{
	HX_STACK_LINE(1334)
	this->length = (int)0;
	HX_STACK_LINE(1333)
	this->pushmod = false;
	HX_STACK_LINE(1332)
	this->modified = false;
	HX_STACK_LINE(1328)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Body_obj::~ZNPList_ZPP_Body_obj() { }

Dynamic ZNPList_ZPP_Body_obj::__CreateEmpty() { return  new ZNPList_ZPP_Body_obj; }
hx::ObjectPtr< ZNPList_ZPP_Body_obj > ZNPList_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > result = new ZNPList_ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Body_obj > result = new ZNPList_ZPP_Body_obj();
	result->__construct();
	return result;}

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Body::at","zpp_nape/util/Lists.hx",1697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1698)
	{
	}
	HX_STACK_LINE(1706)
	::zpp_nape::util::ZNPNode_ZPP_Body it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1707)
	return (  (((it != null()))) ? ::zpp_nape::phys::ZPP_Body(it->elt) : ::zpp_nape::phys::ZPP_Body(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Body::iterator_at","zpp_nape/util/Lists.hx",1684);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1685)
	{
	}
	HX_STACK_LINE(1693)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1694)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(1694)
		ret = ret->next;
	}
	HX_STACK_LINE(1695)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,iterator_at,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::back","zpp_nape/util/Lists.hx",1675);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1676)
	::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1677)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1678)
	while(((cur != null()))){
		HX_STACK_LINE(1679)
		ret = cur;
		HX_STACK_LINE(1680)
		cur = cur->next;
	}
	HX_STACK_LINE(1682)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,back,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::front","zpp_nape/util/Lists.hx",1675);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1675)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,front,return )

bool ZNPList_ZPP_Body_obj::inlined_has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_has","zpp_nape/util/Lists.hx",1645);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1646)
	{
	}
	HX_STACK_LINE(1654)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1655)
	{
		HX_STACK_LINE(1656)
		ret = false;
		HX_STACK_LINE(1657)
		{
			HX_STACK_LINE(1658)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1659)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1660)
				::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1661)
				if (((npite == obj))){
					HX_STACK_LINE(1663)
					ret = true;
					HX_STACK_LINE(1664)
					break;
				}
				HX_STACK_LINE(1667)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1671)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_has,return )

bool ZNPList_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::has","zpp_nape/util/Lists.hx",1643);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1643);
			{
				HX_STACK_LINE(1643)
				{
				}
				HX_STACK_LINE(1643)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1643)
				{
					HX_STACK_LINE(1643)
					ret = false;
					HX_STACK_LINE(1643)
					{
						HX_STACK_LINE(1643)
						::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1643)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1643)
							::zpp_nape::phys::ZPP_Body npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1643)
							if (((npite == obj))){
								HX_STACK_LINE(1643)
								ret = true;
								HX_STACK_LINE(1643)
								break;
							}
							HX_STACK_LINE(1643)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1643)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1643)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,has,return )

int ZNPList_ZPP_Body_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::size","zpp_nape/util/Lists.hx",1643);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1643)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,size,return )

bool ZNPList_ZPP_Body_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::empty","zpp_nape/util/Lists.hx",1641);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1641)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,empty,return )

Void ZNPList_ZPP_Body_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::reverse","zpp_nape/util/Lists.hx",1626);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1627)
		::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1628)
		::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1629)
		while(((cur != null()))){
			HX_STACK_LINE(1630)
			::zpp_nape::util::ZNPNode_ZPP_Body nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1631)
			cur->next = pre;
			HX_STACK_LINE(1632)
			this->head = cur;
			HX_STACK_LINE(1633)
			pre = cur;
			HX_STACK_LINE(1634)
			cur = nx;
		}
		HX_STACK_LINE(1636)
		this->modified = true;
		HX_STACK_LINE(1637)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,reverse,(void))

Void ZNPList_ZPP_Body_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_clear","zpp_nape/util/Lists.hx",1620);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1622)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1622)
			{
			}
			HX_STACK_LINE(1622)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1622)
			this->head = ret->next;
			HX_STACK_LINE(1622)
			{
			}
			HX_STACK_LINE(1622)
			{
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1622)
				{
				}
				HX_STACK_LINE(1622)
				o->elt = null();
				HX_STACK_LINE(1622)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(1622)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1622)
			if (((this->head == null()))){
				HX_STACK_LINE(1622)
				this->pushmod = true;
			}
			HX_STACK_LINE(1622)
			this->modified = true;
			HX_STACK_LINE(1622)
			(this->length)--;
		}
		HX_STACK_LINE(1623)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_clear,(void))

Void ZNPList_ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::clear","zpp_nape/util/Lists.hx",1618);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1618)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1618)
			{
			}
			HX_STACK_LINE(1618)
			::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1618)
			this->head = ret->next;
			HX_STACK_LINE(1618)
			{
			}
			HX_STACK_LINE(1618)
			{
				HX_STACK_LINE(1618)
				::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1618)
				{
				}
				HX_STACK_LINE(1618)
				o->elt = null();
				HX_STACK_LINE(1618)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(1618)
				::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1618)
			if (((this->head == null()))){
				HX_STACK_LINE(1618)
				this->pushmod = true;
			}
			HX_STACK_LINE(1618)
			this->modified = true;
			HX_STACK_LINE(1618)
			(this->length)--;
		}
		HX_STACK_LINE(1618)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Body pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Body::splice","zpp_nape/util/Lists.hx",1614);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(1615)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(1615)
		this->erase(pre);
	}
	HX_STACK_LINE(1616)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_erase","zpp_nape/util/Lists.hx",1568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(1569)
	{
	}
	HX_STACK_LINE(1577)
	::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1578)
	::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1579)
	if (((pre == null()))){
		HX_STACK_LINE(1580)
		old = this->head;
		HX_STACK_LINE(1581)
		ret = old->next;
		HX_STACK_LINE(1582)
		this->head = ret;
		HX_STACK_LINE(1583)
		if (((this->head == null()))){
			HX_STACK_LINE(1583)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1586)
		old = pre->next;
		HX_STACK_LINE(1587)
		ret = old->next;
		HX_STACK_LINE(1588)
		pre->next = ret;
		HX_STACK_LINE(1589)
		if (((ret == null()))){
			HX_STACK_LINE(1589)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1591)
	{
	}
	HX_STACK_LINE(1592)
	{
		HX_STACK_LINE(1593)
		::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1594)
		{
		}
		HX_STACK_LINE(1602)
		o->elt = null();
		HX_STACK_LINE(1603)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
		HX_STACK_LINE(1604)
		::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1609)
	this->modified = true;
	HX_STACK_LINE(1610)
	(this->length)--;
	HX_STACK_LINE(1611)
	this->pushmod = true;
	HX_STACK_LINE(1612)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Body pre){
	HX_STACK_PUSH("ZNPList_ZPP_Body::erase","zpp_nape/util/Lists.hx",1566);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::util::ZNPNode_ZPP_Body &pre,::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1566);
			{
				HX_STACK_LINE(1566)
				{
				}
				HX_STACK_LINE(1566)
				::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1566)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1566)
				if (((pre == null()))){
					HX_STACK_LINE(1566)
					old = __this->head;
					HX_STACK_LINE(1566)
					ret = old->next;
					HX_STACK_LINE(1566)
					__this->head = ret;
					HX_STACK_LINE(1566)
					if (((__this->head == null()))){
						HX_STACK_LINE(1566)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1566)
					old = pre->next;
					HX_STACK_LINE(1566)
					ret = old->next;
					HX_STACK_LINE(1566)
					pre->next = ret;
					HX_STACK_LINE(1566)
					if (((ret == null()))){
						HX_STACK_LINE(1566)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(1566)
				{
				}
				HX_STACK_LINE(1566)
				{
					HX_STACK_LINE(1566)
					::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1566)
					{
					}
					HX_STACK_LINE(1566)
					o->elt = null();
					HX_STACK_LINE(1566)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
					HX_STACK_LINE(1566)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1566)
				__this->modified = true;
				HX_STACK_LINE(1566)
				(__this->length)--;
				HX_STACK_LINE(1566)
				__this->pushmod = true;
				HX_STACK_LINE(1566)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1566)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,erase,return )

bool ZNPList_ZPP_Body_obj::inlined_try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_try_remove","zpp_nape/util/Lists.hx",1543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1544)
	{
	}
	HX_STACK_LINE(1552)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1553)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1554)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1555)
	while(((cur != null()))){
		HX_STACK_LINE(1556)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1557)
			{
				HX_STACK_LINE(1557)
				{
				}
				HX_STACK_LINE(1557)
				::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1557)
				::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1557)
				if (((pre == null()))){
					HX_STACK_LINE(1557)
					old = this->head;
					HX_STACK_LINE(1557)
					ret1 = old->next;
					HX_STACK_LINE(1557)
					this->head = ret1;
					HX_STACK_LINE(1557)
					if (((this->head == null()))){
						HX_STACK_LINE(1557)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1557)
					old = pre->next;
					HX_STACK_LINE(1557)
					ret1 = old->next;
					HX_STACK_LINE(1557)
					pre->next = ret1;
					HX_STACK_LINE(1557)
					if (((ret1 == null()))){
						HX_STACK_LINE(1557)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1557)
				{
				}
				HX_STACK_LINE(1557)
				{
					HX_STACK_LINE(1557)
					::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1557)
					{
					}
					HX_STACK_LINE(1557)
					o->elt = null();
					HX_STACK_LINE(1557)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
					HX_STACK_LINE(1557)
					::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1557)
				this->modified = true;
				HX_STACK_LINE(1557)
				(this->length)--;
				HX_STACK_LINE(1557)
				this->pushmod = true;
				HX_STACK_LINE(1557)
				ret1;
			}
			HX_STACK_LINE(1558)
			ret = true;
			HX_STACK_LINE(1559)
			break;
		}
		HX_STACK_LINE(1561)
		pre = cur;
		HX_STACK_LINE(1562)
		cur = cur->next;
	}
	HX_STACK_LINE(1564)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Body_obj::inlined_remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_remove","zpp_nape/util/Lists.hx",1530);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1531)
		{
		}
		HX_STACK_LINE(1539)
		{
			HX_STACK_LINE(1539)
			{
			}
			HX_STACK_LINE(1539)
			::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1539)
			::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1539)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1539)
			while(((cur != null()))){
				HX_STACK_LINE(1539)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1539)
					{
						HX_STACK_LINE(1539)
						{
						}
						HX_STACK_LINE(1539)
						::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1539)
						::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1539)
						if (((pre == null()))){
							HX_STACK_LINE(1539)
							old = this->head;
							HX_STACK_LINE(1539)
							ret1 = old->next;
							HX_STACK_LINE(1539)
							this->head = ret1;
							HX_STACK_LINE(1539)
							if (((this->head == null()))){
								HX_STACK_LINE(1539)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1539)
							old = pre->next;
							HX_STACK_LINE(1539)
							ret1 = old->next;
							HX_STACK_LINE(1539)
							pre->next = ret1;
							HX_STACK_LINE(1539)
							if (((ret1 == null()))){
								HX_STACK_LINE(1539)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1539)
						{
						}
						HX_STACK_LINE(1539)
						{
							HX_STACK_LINE(1539)
							::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1539)
							{
							}
							HX_STACK_LINE(1539)
							o->elt = null();
							HX_STACK_LINE(1539)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(1539)
							::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1539)
						this->modified = true;
						HX_STACK_LINE(1539)
						(this->length)--;
						HX_STACK_LINE(1539)
						this->pushmod = true;
						HX_STACK_LINE(1539)
						ret1;
					}
					HX_STACK_LINE(1539)
					ret = true;
					HX_STACK_LINE(1539)
					break;
				}
				HX_STACK_LINE(1539)
				pre = cur;
				HX_STACK_LINE(1539)
				cur = cur->next;
			}
			HX_STACK_LINE(1539)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_remove,(void))

bool ZNPList_ZPP_Body_obj::try_remove( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZNPList_ZPP_Body::try_remove","zpp_nape/util/Lists.hx",1505);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1506)
	{
	}
	HX_STACK_LINE(1514)
	::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1515)
	::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1516)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1517)
	while(((cur != null()))){
		HX_STACK_LINE(1518)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1519)
			this->erase(pre);
			HX_STACK_LINE(1520)
			ret = true;
			HX_STACK_LINE(1521)
			break;
		}
		HX_STACK_LINE(1523)
		pre = cur;
		HX_STACK_LINE(1524)
		cur = cur->next;
	}
	HX_STACK_LINE(1526)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,try_remove,return )

Void ZNPList_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::remove","zpp_nape/util/Lists.hx",1494);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1495)
		{
		}
		HX_STACK_LINE(1503)
		{
			HX_STACK_LINE(1503)
			{
			}
			HX_STACK_LINE(1503)
			::zpp_nape::util::ZNPNode_ZPP_Body pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1503)
			::zpp_nape::util::ZNPNode_ZPP_Body cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1503)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1503)
			while(((cur != null()))){
				HX_STACK_LINE(1503)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1503)
					{
						HX_STACK_LINE(1503)
						{
						}
						HX_STACK_LINE(1503)
						::zpp_nape::util::ZNPNode_ZPP_Body old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1503)
						::zpp_nape::util::ZNPNode_ZPP_Body ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1503)
						if (((pre == null()))){
							HX_STACK_LINE(1503)
							old = this->head;
							HX_STACK_LINE(1503)
							ret1 = old->next;
							HX_STACK_LINE(1503)
							this->head = ret1;
							HX_STACK_LINE(1503)
							if (((this->head == null()))){
								HX_STACK_LINE(1503)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1503)
							old = pre->next;
							HX_STACK_LINE(1503)
							ret1 = old->next;
							HX_STACK_LINE(1503)
							pre->next = ret1;
							HX_STACK_LINE(1503)
							if (((ret1 == null()))){
								HX_STACK_LINE(1503)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1503)
						{
						}
						HX_STACK_LINE(1503)
						{
							HX_STACK_LINE(1503)
							::zpp_nape::util::ZNPNode_ZPP_Body o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1503)
							{
							}
							HX_STACK_LINE(1503)
							o->elt = null();
							HX_STACK_LINE(1503)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(1503)
							::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1503)
						this->modified = true;
						HX_STACK_LINE(1503)
						(this->length)--;
						HX_STACK_LINE(1503)
						this->pushmod = true;
						HX_STACK_LINE(1503)
						ret1;
					}
					HX_STACK_LINE(1503)
					ret = true;
					HX_STACK_LINE(1503)
					break;
				}
				HX_STACK_LINE(1503)
				pre = cur;
				HX_STACK_LINE(1503)
				cur = cur->next;
			}
			HX_STACK_LINE(1503)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,remove,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_pop_unsafe","zpp_nape/util/Lists.hx",1481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1482)
	{
	}
	HX_STACK_LINE(1490)
	::zpp_nape::phys::ZPP_Body ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1491)
	this->pop();
	HX_STACK_LINE(1492)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop_unsafe,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::pop_unsafe","zpp_nape/util/Lists.hx",1479);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1479);
			{
				HX_STACK_LINE(1479)
				{
				}
				HX_STACK_LINE(1479)
				::zpp_nape::phys::ZPP_Body ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1479)
				__this->pop();
				HX_STACK_LINE(1479)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1479)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop_unsafe,return )

Void ZNPList_ZPP_Body_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_pop","zpp_nape/util/Lists.hx",1446);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1447)
		{
		}
		HX_STACK_LINE(1455)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1456)
		this->head = ret->next;
		HX_STACK_LINE(1457)
		{
		}
		HX_STACK_LINE(1458)
		{
			HX_STACK_LINE(1459)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1460)
			{
			}
			HX_STACK_LINE(1468)
			o->elt = null();
			HX_STACK_LINE(1469)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1470)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1475)
		if (((this->head == null()))){
			HX_STACK_LINE(1475)
			this->pushmod = true;
		}
		HX_STACK_LINE(1476)
		this->modified = true;
		HX_STACK_LINE(1477)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,inlined_pop,(void))

Void ZNPList_ZPP_Body_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::pop","zpp_nape/util/Lists.hx",1444);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1444)
		{
		}
		HX_STACK_LINE(1444)
		::zpp_nape::util::ZNPNode_ZPP_Body ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1444)
		this->head = ret->next;
		HX_STACK_LINE(1444)
		{
		}
		HX_STACK_LINE(1444)
		{
			HX_STACK_LINE(1444)
			::zpp_nape::util::ZNPNode_ZPP_Body o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1444)
			{
			}
			HX_STACK_LINE(1444)
			o->elt = null();
			HX_STACK_LINE(1444)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1444)
			::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1444)
		if (((this->head == null()))){
			HX_STACK_LINE(1444)
			this->pushmod = true;
		}
		HX_STACK_LINE(1444)
		this->modified = true;
		HX_STACK_LINE(1444)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_insert","zpp_nape/util/Lists.hx",1401);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1402)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1410);
			{
				HX_STACK_LINE(1411)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1412)
				{
					HX_STACK_LINE(1413)
					if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
						HX_STACK_LINE(1413)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
					}
					else{
						HX_STACK_LINE(1420)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
						HX_STACK_LINE(1421)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1422)
						ret->next = null();
					}
					HX_STACK_LINE(1427)
					Dynamic();
				}
				HX_STACK_LINE(1429)
				ret->elt = o;
				HX_STACK_LINE(1430)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1410)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1432)
	if (((cur == null()))){
		HX_STACK_LINE(1433)
		temp->next = this->head;
		HX_STACK_LINE(1434)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1437)
		temp->next = cur->next;
		HX_STACK_LINE(1438)
		cur->next = temp;
	}
	HX_STACK_LINE(1440)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(1441)
	(this->length)++;
	HX_STACK_LINE(1442)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Body cur,::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::insert","zpp_nape/util/Lists.hx",1399);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::util::ZNPList_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &o,::zpp_nape::util::ZNPNode_ZPP_Body &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1399);
			{
				HX_STACK_LINE(1399)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1399);
						{
							HX_STACK_LINE(1399)
							::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1399)
							{
								HX_STACK_LINE(1399)
								if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
									HX_STACK_LINE(1399)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
								}
								else{
									HX_STACK_LINE(1399)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
									HX_STACK_LINE(1399)
									::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1399)
									ret->next = null();
								}
								HX_STACK_LINE(1399)
								Dynamic();
							}
							HX_STACK_LINE(1399)
							ret->elt = o;
							HX_STACK_LINE(1399)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1399)
				::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1399)
				if (((cur == null()))){
					HX_STACK_LINE(1399)
					temp->next = __this->head;
					HX_STACK_LINE(1399)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(1399)
					temp->next = cur->next;
					HX_STACK_LINE(1399)
					cur->next = temp;
				}
				HX_STACK_LINE(1399)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(1399)
				(__this->length)++;
				HX_STACK_LINE(1399)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(1399)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Body_obj,insert,return )

Void ZNPList_ZPP_Body_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Body x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::addAll","zpp_nape/util/Lists.hx",1381);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1382)
		{
		}
		HX_STACK_LINE(1390)
		{
			HX_STACK_LINE(1391)
			::zpp_nape::util::ZNPNode_ZPP_Body cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1392)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1393)
				::zpp_nape::phys::ZPP_Body i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1394)
				this->add(i);
				HX_STACK_LINE(1395)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,addAll,(void))

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::inlined_add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::inlined_add","zpp_nape/util/Lists.hx",1344);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1345)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1353);
			{
				HX_STACK_LINE(1354)
				::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1355)
				{
					HX_STACK_LINE(1356)
					if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
						HX_STACK_LINE(1356)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
					}
					else{
						HX_STACK_LINE(1363)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
						HX_STACK_LINE(1364)
						::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1365)
						ret->next = null();
					}
					HX_STACK_LINE(1370)
					Dynamic();
				}
				HX_STACK_LINE(1372)
				ret->elt = o;
				HX_STACK_LINE(1373)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1353)
	::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1375)
	temp->next = this->head;
	HX_STACK_LINE(1376)
	this->head = temp;
	HX_STACK_LINE(1377)
	this->modified = true;
	HX_STACK_LINE(1378)
	(this->length)++;
	HX_STACK_LINE(1379)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,inlined_add,return )

::zpp_nape::phys::ZPP_Body ZNPList_ZPP_Body_obj::add( ::zpp_nape::phys::ZPP_Body o){
	HX_STACK_PUSH("ZNPList_ZPP_Body::add","zpp_nape/util/Lists.hx",1342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o,::zpp_nape::util::ZNPList_ZPP_Body_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1342);
			{
				HX_STACK_LINE(1342)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Body Block( ::zpp_nape::phys::ZPP_Body &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1342);
						{
							HX_STACK_LINE(1342)
							::zpp_nape::util::ZNPNode_ZPP_Body ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1342)
							{
								HX_STACK_LINE(1342)
								if (((::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool == null()))){
									HX_STACK_LINE(1342)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::__new();
								}
								else{
									HX_STACK_LINE(1342)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool;
									HX_STACK_LINE(1342)
									::zpp_nape::util::ZNPNode_ZPP_Body_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1342)
									ret->next = null();
								}
								HX_STACK_LINE(1342)
								Dynamic();
							}
							HX_STACK_LINE(1342)
							ret->elt = o;
							HX_STACK_LINE(1342)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1342)
				::zpp_nape::util::ZNPNode_ZPP_Body temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1342)
				temp->next = __this->head;
				HX_STACK_LINE(1342)
				__this->head = temp;
				HX_STACK_LINE(1342)
				__this->modified = true;
				HX_STACK_LINE(1342)
				(__this->length)++;
				HX_STACK_LINE(1342)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(1342)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,add,return )

Void ZNPList_ZPP_Body_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Body i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Body::setbegin","zpp_nape/util/Lists.hx",1337);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(1338)
		this->head = i;
		HX_STACK_LINE(1339)
		this->modified = true;
		HX_STACK_LINE(1340)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Body_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Body ZNPList_ZPP_Body_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Body::begin","zpp_nape/util/Lists.hx",1332);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1332)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Body_obj,begin,return )


ZNPList_ZPP_Body_obj::ZNPList_ZPP_Body_obj()
{
}

void ZNPList_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Body);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Body >(); return inValue; }
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

void ZNPList_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Body_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Body_obj::__mClass;

void ZNPList_ZPP_Body_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Body"), hx::TCanCast< ZNPList_ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Body_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
