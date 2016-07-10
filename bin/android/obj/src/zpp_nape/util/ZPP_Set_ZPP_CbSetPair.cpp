#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSetPair
#include <zpp_nape/util/ZPP_Set_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSetPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::new","zpp_nape/util/RBTree.hx",1049);
{
	HX_STACK_LINE(1090)
	this->colour = (int)0;
	HX_STACK_LINE(1089)
	this->parent = null();
	HX_STACK_LINE(1088)
	this->next = null();
	HX_STACK_LINE(1087)
	this->prev = null();
	HX_STACK_LINE(1086)
	this->data = null();
	HX_STACK_LINE(1085)
	this->swapped = null();
	HX_STACK_LINE(1084)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_CbSetPair_obj::~ZPP_Set_ZPP_CbSetPair_obj() { }

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > ZPP_Set_ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > result = new ZPP_Set_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSetPair_obj > result = new ZPP_Set_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::insert","zpp_nape/util/RBTree.hx",1856);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1857)
	{
	}
	HX_STACK_LINE(1865)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1866)
	{
		HX_STACK_LINE(1867)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(1867)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
		}
		else{
			HX_STACK_LINE(1874)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(1875)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(1876)
			x->next = null();
		}
		HX_STACK_LINE(1881)
		Dynamic();
	}
	HX_STACK_LINE(1883)
	x->data = obj;
	HX_STACK_LINE(1884)
	if (((this->parent == null()))){
		HX_STACK_LINE(1884)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1886)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1887)
		while((true)){
			HX_STACK_LINE(1887)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(1888)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1890)
					cur->prev = x;
					HX_STACK_LINE(1891)
					x->parent = cur;
					HX_STACK_LINE(1892)
					break;
				}
				else{
					HX_STACK_LINE(1894)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1896)
				if (((cur->next == null()))){
					HX_STACK_LINE(1898)
					cur->next = x;
					HX_STACK_LINE(1899)
					x->parent = cur;
					HX_STACK_LINE(1900)
					break;
				}
				else{
					HX_STACK_LINE(1902)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1906)
	if (((x->parent == null()))){
		HX_STACK_LINE(1906)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1908)
		x->colour = (int)0;
		HX_STACK_LINE(1909)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(1909)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(1911)
	{
	}
	HX_STACK_LINE(1919)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::try_insert","zpp_nape/util/RBTree.hx",1764);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1765)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1766)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1767)
	if (((this->parent == null()))){
		HX_STACK_LINE(1768)
		{
			HX_STACK_LINE(1769)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(1769)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
			}
			else{
				HX_STACK_LINE(1776)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(1777)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1778)
				x->next = null();
			}
			HX_STACK_LINE(1783)
			Dynamic();
		}
		HX_STACK_LINE(1785)
		x->data = obj;
		HX_STACK_LINE(1786)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1789)
		cur = this->parent;
		HX_STACK_LINE(1790)
		while((true)){
			HX_STACK_LINE(1790)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(1791)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1793)
					{
						HX_STACK_LINE(1794)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1794)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1801)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1802)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1803)
							x->next = null();
						}
						HX_STACK_LINE(1808)
						Dynamic();
					}
					HX_STACK_LINE(1810)
					x->data = obj;
					HX_STACK_LINE(1811)
					cur->prev = x;
					HX_STACK_LINE(1812)
					x->parent = cur;
					HX_STACK_LINE(1813)
					break;
				}
				else{
					HX_STACK_LINE(1815)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1817)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(1817)
					if (((cur->next == null()))){
						HX_STACK_LINE(1819)
						{
							HX_STACK_LINE(1820)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(1820)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
							}
							else{
								HX_STACK_LINE(1827)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1828)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1829)
								x->next = null();
							}
							HX_STACK_LINE(1834)
							Dynamic();
						}
						HX_STACK_LINE(1836)
						x->data = obj;
						HX_STACK_LINE(1837)
						cur->next = x;
						HX_STACK_LINE(1838)
						x->parent = cur;
						HX_STACK_LINE(1839)
						break;
					}
					else{
						HX_STACK_LINE(1841)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1843)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1846)
	if (((x == null()))){
		HX_STACK_LINE(1846)
		return cur;
	}
	else{
		HX_STACK_LINE(1848)
		if (((x->parent == null()))){
			HX_STACK_LINE(1848)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1850)
			x->colour = (int)0;
			HX_STACK_LINE(1851)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(1851)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(1853)
		return x;
	}
	HX_STACK_LINE(1846)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert,return )

bool ZPP_Set_ZPP_CbSetPair_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::try_insert_bool","zpp_nape/util/RBTree.hx",1672);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1673)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(1674)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1675)
	if (((this->parent == null()))){
		HX_STACK_LINE(1676)
		{
			HX_STACK_LINE(1677)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(1677)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
			}
			else{
				HX_STACK_LINE(1684)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(1685)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(1686)
				x->next = null();
			}
			HX_STACK_LINE(1691)
			Dynamic();
		}
		HX_STACK_LINE(1693)
		x->data = obj;
		HX_STACK_LINE(1694)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1697)
		cur = this->parent;
		HX_STACK_LINE(1698)
		while((true)){
			HX_STACK_LINE(1698)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(1699)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1701)
					{
						HX_STACK_LINE(1702)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1702)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1709)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1710)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(1711)
							x->next = null();
						}
						HX_STACK_LINE(1716)
						Dynamic();
					}
					HX_STACK_LINE(1718)
					x->data = obj;
					HX_STACK_LINE(1719)
					cur->prev = x;
					HX_STACK_LINE(1720)
					x->parent = cur;
					HX_STACK_LINE(1721)
					break;
				}
				else{
					HX_STACK_LINE(1723)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1725)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(1725)
					if (((cur->next == null()))){
						HX_STACK_LINE(1727)
						{
							HX_STACK_LINE(1728)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(1728)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::__new();
							}
							else{
								HX_STACK_LINE(1735)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1736)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(1737)
								x->next = null();
							}
							HX_STACK_LINE(1742)
							Dynamic();
						}
						HX_STACK_LINE(1744)
						x->data = obj;
						HX_STACK_LINE(1745)
						cur->next = x;
						HX_STACK_LINE(1746)
						x->parent = cur;
						HX_STACK_LINE(1747)
						break;
					}
					else{
						HX_STACK_LINE(1749)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(1751)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(1754)
	if (((x == null()))){
		HX_STACK_LINE(1754)
		return false;
	}
	else{
		HX_STACK_LINE(1756)
		if (((x->parent == null()))){
			HX_STACK_LINE(1756)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(1758)
			x->colour = (int)0;
			HX_STACK_LINE(1759)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(1759)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(1761)
		return true;
	}
	HX_STACK_LINE(1754)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::__fix_dbl_red","zpp_nape/util/RBTree.hx",1583);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1583)
		while((true)){
			HX_STACK_LINE(1585)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1586)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(1587)
			if (((g == null()))){
				HX_STACK_LINE(1588)
				par->colour = (int)1;
				HX_STACK_LINE(1589)
				break;
			}
			HX_STACK_LINE(1591)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(1592)
			if (((par == g->prev))){
				HX_STACK_LINE(1593)
				n3 = g;
				HX_STACK_LINE(1594)
				t4 = g->next;
				HX_STACK_LINE(1595)
				if (((x == par->prev))){
					HX_STACK_LINE(1596)
					n1 = x;
					HX_STACK_LINE(1597)
					n2 = par;
					HX_STACK_LINE(1598)
					t1 = x->prev;
					HX_STACK_LINE(1599)
					t2 = x->next;
					HX_STACK_LINE(1600)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(1603)
					n1 = par;
					HX_STACK_LINE(1604)
					n2 = x;
					HX_STACK_LINE(1605)
					t1 = par->prev;
					HX_STACK_LINE(1606)
					t2 = x->prev;
					HX_STACK_LINE(1607)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(1611)
				n1 = g;
				HX_STACK_LINE(1612)
				t1 = g->prev;
				HX_STACK_LINE(1613)
				if (((x == par->prev))){
					HX_STACK_LINE(1614)
					n2 = x;
					HX_STACK_LINE(1615)
					n3 = par;
					HX_STACK_LINE(1616)
					t2 = x->prev;
					HX_STACK_LINE(1617)
					t3 = x->next;
					HX_STACK_LINE(1618)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(1621)
					n2 = par;
					HX_STACK_LINE(1622)
					n3 = x;
					HX_STACK_LINE(1623)
					t2 = par->prev;
					HX_STACK_LINE(1624)
					t3 = x->prev;
					HX_STACK_LINE(1625)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(1628)
			{
				HX_STACK_LINE(1629)
				::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(1630)
				if (((par1 == null()))){
					HX_STACK_LINE(1630)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(1633)
					if (((par1->prev == g))){
						HX_STACK_LINE(1633)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(1634)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(1635)
				if (((n2 != null()))){
					HX_STACK_LINE(1635)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(1637)
			{
				HX_STACK_LINE(1638)
				n1->prev = t1;
				HX_STACK_LINE(1639)
				if (((t1 != null()))){
					HX_STACK_LINE(1639)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(1641)
			{
				HX_STACK_LINE(1642)
				n1->next = t2;
				HX_STACK_LINE(1643)
				if (((t2 != null()))){
					HX_STACK_LINE(1643)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(1645)
			{
				HX_STACK_LINE(1646)
				n2->prev = n1;
				HX_STACK_LINE(1647)
				if (((n1 != null()))){
					HX_STACK_LINE(1647)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(1649)
			{
				HX_STACK_LINE(1650)
				n2->next = n3;
				HX_STACK_LINE(1651)
				if (((n3 != null()))){
					HX_STACK_LINE(1651)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(1653)
			{
				HX_STACK_LINE(1654)
				n3->prev = t3;
				HX_STACK_LINE(1655)
				if (((t3 != null()))){
					HX_STACK_LINE(1655)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(1657)
			{
				HX_STACK_LINE(1658)
				n3->next = t4;
				HX_STACK_LINE(1659)
				if (((t4 != null()))){
					HX_STACK_LINE(1659)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(1661)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(1662)
			n1->colour = (int)1;
			HX_STACK_LINE(1663)
			n3->colour = (int)1;
			HX_STACK_LINE(1664)
			if (((n2 == this->parent))){
				HX_STACK_LINE(1664)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1665)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(1666)
					x = n2;
					HX_STACK_LINE(1667)
					continue;
				}
			}
			HX_STACK_LINE(1669)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::__fix_neg_red","zpp_nape/util/RBTree.hx",1516);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(1517)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &parent,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1518);
				{
					HX_STACK_LINE(1519)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(1520)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(1521)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(1522)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(1523)
					nl->colour = (int)0;
					HX_STACK_LINE(1524)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(1525)
					{
						HX_STACK_LINE(1526)
						negred->next = trl;
						HX_STACK_LINE(1527)
						if (((trl != null()))){
							HX_STACK_LINE(1527)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(1529)
					{
						HX_STACK_LINE(1530)
						::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1531)
						parent->data = nr->data;
						HX_STACK_LINE(1532)
						nr->data = t;
					}
					HX_STACK_LINE(1534)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(1534)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(1535)
					{
						HX_STACK_LINE(1536)
						nr->prev = trr;
						HX_STACK_LINE(1537)
						if (((trr != null()))){
							HX_STACK_LINE(1537)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(1539)
					{
						HX_STACK_LINE(1540)
						nr->next = parent->next;
						HX_STACK_LINE(1541)
						if (((parent->next != null()))){
							HX_STACK_LINE(1541)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(1543)
					{
						HX_STACK_LINE(1544)
						parent->next = nr;
						HX_STACK_LINE(1545)
						if (((nr != null()))){
							HX_STACK_LINE(1545)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(1547)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &parent,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1549);
				{
					HX_STACK_LINE(1550)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(1551)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(1552)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(1553)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(1554)
					nl->colour = (int)0;
					HX_STACK_LINE(1555)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(1556)
					{
						HX_STACK_LINE(1557)
						negred->prev = trl;
						HX_STACK_LINE(1558)
						if (((trl != null()))){
							HX_STACK_LINE(1558)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(1560)
					{
						HX_STACK_LINE(1561)
						::zpp_nape::callbacks::ZPP_CbSetPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1562)
						parent->data = nr->data;
						HX_STACK_LINE(1563)
						nr->data = t;
					}
					HX_STACK_LINE(1565)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(1565)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(1566)
					{
						HX_STACK_LINE(1567)
						nr->next = trr;
						HX_STACK_LINE(1568)
						if (((trr != null()))){
							HX_STACK_LINE(1568)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(1570)
					{
						HX_STACK_LINE(1571)
						nr->prev = parent->prev;
						HX_STACK_LINE(1572)
						if (((parent->prev != null()))){
							HX_STACK_LINE(1572)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(1574)
					{
						HX_STACK_LINE(1575)
						parent->prev = nr;
						HX_STACK_LINE(1576)
						if (((nr != null()))){
							HX_STACK_LINE(1576)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(1578)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(1518)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1580)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(1580)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(1581)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(1581)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear_node","zpp_nape/util/RBTree.hx",1481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(1482)
	{
	}
	HX_STACK_LINE(1490)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(1491)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1492)
	if (((ret != null()))){
		HX_STACK_LINE(1493)
		if (((node == ret->prev))){
			HX_STACK_LINE(1493)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(1494)
			ret->next = null();
		}
		HX_STACK_LINE(1495)
		node->parent = null();
	}
	HX_STACK_LINE(1497)
	{
		HX_STACK_LINE(1498)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1499)
		{
		}
		HX_STACK_LINE(1507)
		{
			HX_STACK_LINE(1507)
			o->data = null();
			HX_STACK_LINE(1507)
			o->lt = null();
			HX_STACK_LINE(1507)
			o->swapped = null();
		}
		HX_STACK_LINE(1508)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
		HX_STACK_LINE(1509)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1514)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSetPair_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSetPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear_with","zpp_nape/util/RBTree.hx",1472);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(1472)
		if (((this->parent == null()))){
			HX_STACK_LINE(1473)
			return null();
		}
		else{
			HX_STACK_LINE(1475)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1476)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1476);
						{
							HX_STACK_LINE(1476)
							{
							}
							HX_STACK_LINE(1476)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(1476)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1476)
							if (((ret != null()))){
								HX_STACK_LINE(1476)
								if (((cur == ret->prev))){
									HX_STACK_LINE(1476)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(1476)
									ret->next = null();
								}
								HX_STACK_LINE(1476)
								cur->parent = null();
							}
							HX_STACK_LINE(1476)
							{
								HX_STACK_LINE(1476)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1476)
								{
								}
								HX_STACK_LINE(1476)
								{
									HX_STACK_LINE(1476)
									o->data = null();
									HX_STACK_LINE(1476)
									o->lt = null();
									HX_STACK_LINE(1476)
									o->swapped = null();
								}
								HX_STACK_LINE(1476)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1476)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1476)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1476)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(1477)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,clear_with,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::clear","zpp_nape/util/RBTree.hx",1471);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1471)
		if (((this->parent == null()))){
			HX_STACK_LINE(1471)
			Dynamic();
		}
		else{
			HX_STACK_LINE(1471)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1471)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1471);
						{
							HX_STACK_LINE(1471)
							{
							}
							HX_STACK_LINE(1471)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1471)
							if (((ret != null()))){
								HX_STACK_LINE(1471)
								if (((cur == ret->prev))){
									HX_STACK_LINE(1471)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(1471)
									ret->next = null();
								}
								HX_STACK_LINE(1471)
								cur->parent = null();
							}
							HX_STACK_LINE(1471)
							{
								HX_STACK_LINE(1471)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1471)
								{
								}
								HX_STACK_LINE(1471)
								{
									HX_STACK_LINE(1471)
									o->data = null();
									HX_STACK_LINE(1471)
									o->lt = null();
									HX_STACK_LINE(1471)
									o->swapped = null();
								}
								HX_STACK_LINE(1471)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
								HX_STACK_LINE(1471)
								::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1471)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1471)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(1471)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,clear,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::remove_node","zpp_nape/util/RBTree.hx",1351);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(1352)
		{
		}
		HX_STACK_LINE(1360)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(1361)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(1362)
			while(((sm->prev != null()))){
				HX_STACK_LINE(1362)
				sm = sm->prev;
			}
			HX_STACK_LINE(1363)
			{
				HX_STACK_LINE(1364)
				::zpp_nape::callbacks::ZPP_CbSetPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1365)
				cur->data = sm->data;
				HX_STACK_LINE(1366)
				sm->data = t;
			}
			HX_STACK_LINE(1368)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(1368)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(1369)
			cur = sm;
		}
		HX_STACK_LINE(1371)
		{
		}
		HX_STACK_LINE(1379)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(1380)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(1380)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(1381)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(1382)
				if (((cur->parent != null()))){
					HX_STACK_LINE(1383)
					::zpp_nape::util::ZPP_Set_ZPP_CbSetPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(1384)
					while((true)){
						HX_STACK_LINE(1385)
						(parent->colour)++;
						HX_STACK_LINE(1386)
						(parent->prev->colour)--;
						HX_STACK_LINE(1387)
						(parent->next->colour)--;
						HX_STACK_LINE(1388)
						{
							HX_STACK_LINE(1389)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1390)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(1391)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(1392)
								break;
							}
							else{
								HX_STACK_LINE(1394)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(1395)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(1397)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(1398)
										break;
									}
									HX_STACK_LINE(1401)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(1403)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(1404)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(1409)
						{
							HX_STACK_LINE(1410)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(1411)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(1412)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(1413)
								break;
							}
							else{
								HX_STACK_LINE(1415)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(1416)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(1418)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(1419)
										break;
									}
									HX_STACK_LINE(1422)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(1424)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(1425)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(1430)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(1430)
							if (((parent->parent == null()))){
								HX_STACK_LINE(1431)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(1435)
								parent = parent->parent;
								HX_STACK_LINE(1436)
								continue;
							}
						}
						HX_STACK_LINE(1439)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(1443)
		{
			HX_STACK_LINE(1444)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(1445)
			if (((par == null()))){
				HX_STACK_LINE(1445)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(1448)
				if (((par->prev == cur))){
					HX_STACK_LINE(1448)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(1449)
					par->next = child;
				}
			}
			HX_STACK_LINE(1450)
			if (((child != null()))){
				HX_STACK_LINE(1450)
				child->parent = par;
			}
		}
		HX_STACK_LINE(1452)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(1453)
		{
			HX_STACK_LINE(1454)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1455)
			{
			}
			HX_STACK_LINE(1463)
			{
				HX_STACK_LINE(1463)
				o->data = null();
				HX_STACK_LINE(1463)
				o->lt = null();
				HX_STACK_LINE(1463)
				o->swapped = null();
			}
			HX_STACK_LINE(1464)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(1465)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove_node,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::predecessor","zpp_nape/util/RBTree.hx",1339);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1340)
	{
	}
	HX_STACK_LINE(1348)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1349)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSetPair(null()) : ::zpp_nape::callbacks::ZPP_CbSetPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::successor","zpp_nape/util/RBTree.hx",1327);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1328)
	{
	}
	HX_STACK_LINE(1336)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(1337)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSetPair(null()) : ::zpp_nape::callbacks::ZPP_CbSetPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::predecessor_node","zpp_nape/util/RBTree.hx",1304);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(1305)
	{
	}
	HX_STACK_LINE(1313)
	if (((cur->prev != null()))){
		HX_STACK_LINE(1314)
		cur = cur->prev;
		HX_STACK_LINE(1315)
		while(((cur->next != null()))){
			HX_STACK_LINE(1315)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(1318)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1319)
		cur = cur->parent;
		HX_STACK_LINE(1320)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(1321)
			pre = cur;
			HX_STACK_LINE(1322)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1325)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::successor_node","zpp_nape/util/RBTree.hx",1281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(1282)
	{
	}
	HX_STACK_LINE(1290)
	if (((cur->next != null()))){
		HX_STACK_LINE(1291)
		cur = cur->next;
		HX_STACK_LINE(1292)
		while(((cur->prev != null()))){
			HX_STACK_LINE(1292)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(1295)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1296)
		cur = cur->parent;
		HX_STACK_LINE(1297)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(1298)
			pre = cur;
			HX_STACK_LINE(1299)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(1302)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,successor_node,return )

Void ZPP_Set_ZPP_CbSetPair_obj::remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::remove","zpp_nape/util/RBTree.hx",1269);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1270)
		::zpp_nape::util::ZPP_Set_ZPP_CbSetPair node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1271)
		{
		}
		HX_STACK_LINE(1279)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::pop_front","zpp_nape/util/RBTree.hx",1254);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1255)
	{
	}
	HX_STACK_LINE(1263)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1264)
	while(((cur->prev != null()))){
		HX_STACK_LINE(1264)
		cur = cur->prev;
	}
	HX_STACK_LINE(1265)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1266)
	this->remove_node(cur);
	HX_STACK_LINE(1267)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,pop_front,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::first","zpp_nape/util/RBTree.hx",1241);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1242)
	{
	}
	HX_STACK_LINE(1250)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1251)
	while(((cur->prev != null()))){
		HX_STACK_LINE(1251)
		cur = cur->prev;
	}
	HX_STACK_LINE(1252)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::lower_bound","zpp_nape/util/RBTree.hx",1204);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_CbSetPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",1205);
			{
				HX_STACK_LINE(1206)
				::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1207)
				{
					HX_STACK_LINE(1208)
					{
					}
					HX_STACK_LINE(1216)
					if ((!(__this->empty()))){
						HX_STACK_LINE(1217)
						::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(1218)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(1218)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(1219)
						while(((set_ite != null()))){
							HX_STACK_LINE(1220)
							::zpp_nape::callbacks::ZPP_CbSetPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(1221)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(1223)
								ret = elt;
								HX_STACK_LINE(1224)
								break;
							}
							HX_STACK_LINE(1227)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(1228)
								set_ite = set_ite->next;
								HX_STACK_LINE(1229)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(1229)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(1232)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(1232)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(1233)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(1238)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1204)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::find_weak","zpp_nape/util/RBTree.hx",1195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1196)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1197)
	while(((cur != null()))){
		HX_STACK_LINE(1197)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(1198)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1199)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(1199)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(1200)
				break;
			}
		}
	}
	HX_STACK_LINE(1202)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find_weak,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::has_weak","zpp_nape/util/RBTree.hx",1195);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1195)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::find( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::find","zpp_nape/util/RBTree.hx",1187);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1188)
	::zpp_nape::util::ZPP_Set_ZPP_CbSetPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1189)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(1189)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(1190)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(1191)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(1193)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,find,return )

bool ZPP_Set_ZPP_CbSetPair_obj::has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::has","zpp_nape/util/RBTree.hx",1187);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1187)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSetPair_obj,has,return )

int ZPP_Set_ZPP_CbSetPair_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::size","zpp_nape/util/RBTree.hx",1157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1158)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1159)
	{
		HX_STACK_LINE(1160)
		{
		}
		HX_STACK_LINE(1168)
		if ((!(this->empty()))){
			HX_STACK_LINE(1169)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1170)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(1170)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1171)
			while(((set_ite != null()))){
				HX_STACK_LINE(1172)
				::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1173)
				(ret)++;
				HX_STACK_LINE(1174)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(1175)
					set_ite = set_ite->next;
					HX_STACK_LINE(1176)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(1176)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1179)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(1179)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1180)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(1185)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,size,return )

bool ZPP_Set_ZPP_CbSetPair_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::singular","zpp_nape/util/RBTree.hx",1157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1157)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,singular,return )

bool ZPP_Set_ZPP_CbSetPair_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::empty","zpp_nape/util/RBTree.hx",1157);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1157)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,empty,return )

bool ZPP_Set_ZPP_CbSetPair_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::verify","zpp_nape/util/RBTree.hx",1092);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1093)
	{
		HX_STACK_LINE(1094)
		{
		}
		HX_STACK_LINE(1102)
		if ((!(this->empty()))){
			HX_STACK_LINE(1103)
			::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1104)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(1104)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1105)
			while(((set_ite != null()))){
				HX_STACK_LINE(1106)
				::zpp_nape::callbacks::ZPP_CbSetPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1107)
				{
					HX_STACK_LINE(1108)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(1109)
					{
						HX_STACK_LINE(1110)
						{
						}
						HX_STACK_LINE(1118)
						if ((!(this->empty()))){
							HX_STACK_LINE(1119)
							::zpp_nape::util::ZPP_Set_ZPP_CbSetPair set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(1120)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(1120)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(1121)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(1122)
								::zpp_nape::callbacks::ZPP_CbSetPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1123)
								if ((!(prei))){
									HX_STACK_LINE(1124)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(1125)
										return false;
									}
								}
								else{
									HX_STACK_LINE(1127)
									if (((i == j))){
										HX_STACK_LINE(1127)
										prei = false;
									}
									else{
										HX_STACK_LINE(1128)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(1129)
											return false;
										}
									}
								}
								HX_STACK_LINE(1132)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(1133)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(1134)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(1134)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(1137)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(1137)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(1138)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(1144)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(1145)
					set_ite = set_ite->next;
					HX_STACK_LINE(1146)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(1146)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1149)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(1149)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1150)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(1155)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,verify,return )

Void ZPP_Set_ZPP_CbSetPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::alloc","zpp_nape/util/RBTree.hx",1083);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,alloc,(void))

Void ZPP_Set_ZPP_CbSetPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSetPair::free","zpp_nape/util/RBTree.hx",1076);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1077)
		this->data = null();
		HX_STACK_LINE(1078)
		this->lt = null();
		HX_STACK_LINE(1079)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSetPair_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSetPair ZPP_Set_ZPP_CbSetPair_obj::zpp_pool;


ZPP_Set_ZPP_CbSetPair_obj::ZPP_Set_ZPP_CbSetPair_obj()
{
}

void ZPP_Set_ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { return lt; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"verify") ) { return verify_dyn(); }
		if (HX_FIELD_EQ(inName,"colour") ) { return colour; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { return swapped; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"has_weak") ) { return has_weak_dyn(); }
		if (HX_FIELD_EQ(inName,"singular") ) { return singular_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"successor") ) { return successor_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_front") ) { return pop_front_dyn(); }
		if (HX_FIELD_EQ(inName,"find_weak") ) { return find_weak_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_insert") ) { return try_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_node") ) { return clear_node_dyn(); }
		if (HX_FIELD_EQ(inName,"clear_with") ) { return clear_with_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"remove_node") ) { return remove_node_dyn(); }
		if (HX_FIELD_EQ(inName,"predecessor") ) { return predecessor_dyn(); }
		if (HX_FIELD_EQ(inName,"lower_bound") ) { return lower_bound_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__fix_dbl_red") ) { return __fix_dbl_red_dyn(); }
		if (HX_FIELD_EQ(inName,"__fix_neg_red") ) { return __fix_neg_red_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"successor_node") ) { return successor_node_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"try_insert_bool") ) { return try_insert_bool_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"predecessor_node") ) { return predecessor_node_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Set_ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSetPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSetPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colour"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("prev"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("insert"),
	HX_CSTRING("try_insert"),
	HX_CSTRING("try_insert_bool"),
	HX_CSTRING("__fix_dbl_red"),
	HX_CSTRING("__fix_neg_red"),
	HX_CSTRING("clear_node"),
	HX_CSTRING("clear_with"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove_node"),
	HX_CSTRING("predecessor"),
	HX_CSTRING("successor"),
	HX_CSTRING("predecessor_node"),
	HX_CSTRING("successor_node"),
	HX_CSTRING("remove"),
	HX_CSTRING("pop_front"),
	HX_CSTRING("first"),
	HX_CSTRING("lower_bound"),
	HX_CSTRING("find_weak"),
	HX_CSTRING("has_weak"),
	HX_CSTRING("find"),
	HX_CSTRING("has"),
	HX_CSTRING("size"),
	HX_CSTRING("singular"),
	HX_CSTRING("empty"),
	HX_CSTRING("verify"),
	HX_CSTRING("colour"),
	HX_CSTRING("parent"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("data"),
	HX_CSTRING("swapped"),
	HX_CSTRING("lt"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSetPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_CbSetPair_obj::__mClass;

void ZPP_Set_ZPP_CbSetPair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSetPair"), hx::TCanCast< ZPP_Set_ZPP_CbSetPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_CbSetPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
