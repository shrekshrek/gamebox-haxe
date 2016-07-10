#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_CbSet_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::new","zpp_nape/util/RBTree.hx",6293);
{
	HX_STACK_LINE(6334)
	this->colour = (int)0;
	HX_STACK_LINE(6333)
	this->parent = null();
	HX_STACK_LINE(6332)
	this->next = null();
	HX_STACK_LINE(6331)
	this->prev = null();
	HX_STACK_LINE(6330)
	this->data = null();
	HX_STACK_LINE(6329)
	this->swapped = null();
	HX_STACK_LINE(6328)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_CbSet_obj::~ZPP_Set_ZPP_CbSet_obj() { }

Dynamic ZPP_Set_ZPP_CbSet_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_CbSet_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > ZPP_Set_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > result = new ZPP_Set_ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_CbSet_obj > result = new ZPP_Set_ZPP_CbSet_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::insert","zpp_nape/util/RBTree.hx",7100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7101)
	{
	}
	HX_STACK_LINE(7109)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7110)
	{
		HX_STACK_LINE(7111)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(7111)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(7118)
			x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(7119)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
			HX_STACK_LINE(7120)
			x->next = null();
		}
		HX_STACK_LINE(7125)
		Dynamic();
	}
	HX_STACK_LINE(7127)
	x->data = obj;
	HX_STACK_LINE(7128)
	if (((this->parent == null()))){
		HX_STACK_LINE(7128)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7130)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7131)
		while((true)){
			HX_STACK_LINE(7131)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(7132)
				if (((cur->prev == null()))){
					HX_STACK_LINE(7134)
					cur->prev = x;
					HX_STACK_LINE(7135)
					x->parent = cur;
					HX_STACK_LINE(7136)
					break;
				}
				else{
					HX_STACK_LINE(7138)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7140)
				if (((cur->next == null()))){
					HX_STACK_LINE(7142)
					cur->next = x;
					HX_STACK_LINE(7143)
					x->parent = cur;
					HX_STACK_LINE(7144)
					break;
				}
				else{
					HX_STACK_LINE(7146)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(7150)
	if (((x->parent == null()))){
		HX_STACK_LINE(7150)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(7152)
		x->colour = (int)0;
		HX_STACK_LINE(7153)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(7153)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(7155)
	{
	}
	HX_STACK_LINE(7163)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::try_insert( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::try_insert","zpp_nape/util/RBTree.hx",7008);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7009)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(7010)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7011)
	if (((this->parent == null()))){
		HX_STACK_LINE(7012)
		{
			HX_STACK_LINE(7013)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(7013)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
			}
			else{
				HX_STACK_LINE(7020)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(7021)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(7022)
				x->next = null();
			}
			HX_STACK_LINE(7027)
			Dynamic();
		}
		HX_STACK_LINE(7029)
		x->data = obj;
		HX_STACK_LINE(7030)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(7033)
		cur = this->parent;
		HX_STACK_LINE(7034)
		while((true)){
			HX_STACK_LINE(7034)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(7035)
				if (((cur->prev == null()))){
					HX_STACK_LINE(7037)
					{
						HX_STACK_LINE(7038)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(7038)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
						}
						else{
							HX_STACK_LINE(7045)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(7046)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(7047)
							x->next = null();
						}
						HX_STACK_LINE(7052)
						Dynamic();
					}
					HX_STACK_LINE(7054)
					x->data = obj;
					HX_STACK_LINE(7055)
					cur->prev = x;
					HX_STACK_LINE(7056)
					x->parent = cur;
					HX_STACK_LINE(7057)
					break;
				}
				else{
					HX_STACK_LINE(7059)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(7061)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(7061)
					if (((cur->next == null()))){
						HX_STACK_LINE(7063)
						{
							HX_STACK_LINE(7064)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
								HX_STACK_LINE(7064)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
							}
							else{
								HX_STACK_LINE(7071)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(7072)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(7073)
								x->next = null();
							}
							HX_STACK_LINE(7078)
							Dynamic();
						}
						HX_STACK_LINE(7080)
						x->data = obj;
						HX_STACK_LINE(7081)
						cur->next = x;
						HX_STACK_LINE(7082)
						x->parent = cur;
						HX_STACK_LINE(7083)
						break;
					}
					else{
						HX_STACK_LINE(7085)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(7087)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(7090)
	if (((x == null()))){
		HX_STACK_LINE(7090)
		return cur;
	}
	else{
		HX_STACK_LINE(7092)
		if (((x->parent == null()))){
			HX_STACK_LINE(7092)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7094)
			x->colour = (int)0;
			HX_STACK_LINE(7095)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(7095)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(7097)
		return x;
	}
	HX_STACK_LINE(7090)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert,return )

bool ZPP_Set_ZPP_CbSet_obj::try_insert_bool( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::try_insert_bool","zpp_nape/util/RBTree.hx",6916);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6917)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6918)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6919)
	if (((this->parent == null()))){
		HX_STACK_LINE(6920)
		{
			HX_STACK_LINE(6921)
			if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
				HX_STACK_LINE(6921)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
			}
			else{
				HX_STACK_LINE(6928)
				x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(6929)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
				HX_STACK_LINE(6930)
				x->next = null();
			}
			HX_STACK_LINE(6935)
			Dynamic();
		}
		HX_STACK_LINE(6937)
		x->data = obj;
		HX_STACK_LINE(6938)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6941)
		cur = this->parent;
		HX_STACK_LINE(6942)
		while((true)){
			HX_STACK_LINE(6942)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(6943)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6945)
					{
						HX_STACK_LINE(6946)
						if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
							HX_STACK_LINE(6946)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
						}
						else{
							HX_STACK_LINE(6953)
							x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(6954)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
							HX_STACK_LINE(6955)
							x->next = null();
						}
						HX_STACK_LINE(6960)
						Dynamic();
					}
					HX_STACK_LINE(6962)
					x->data = obj;
					HX_STACK_LINE(6963)
					cur->prev = x;
					HX_STACK_LINE(6964)
					x->parent = cur;
					HX_STACK_LINE(6965)
					break;
				}
				else{
					HX_STACK_LINE(6967)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6969)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(6969)
					if (((cur->next == null()))){
						HX_STACK_LINE(6971)
						{
							HX_STACK_LINE(6972)
							if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
								HX_STACK_LINE(6972)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
							}
							else{
								HX_STACK_LINE(6979)
								x = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(6980)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = x->next;
								HX_STACK_LINE(6981)
								x->next = null();
							}
							HX_STACK_LINE(6986)
							Dynamic();
						}
						HX_STACK_LINE(6988)
						x->data = obj;
						HX_STACK_LINE(6989)
						cur->next = x;
						HX_STACK_LINE(6990)
						x->parent = cur;
						HX_STACK_LINE(6991)
						break;
					}
					else{
						HX_STACK_LINE(6993)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6995)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6998)
	if (((x == null()))){
		HX_STACK_LINE(6998)
		return false;
	}
	else{
		HX_STACK_LINE(7000)
		if (((x->parent == null()))){
			HX_STACK_LINE(7000)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(7002)
			x->colour = (int)0;
			HX_STACK_LINE(7003)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(7003)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(7005)
		return true;
	}
	HX_STACK_LINE(6998)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_CbSet_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::__fix_dbl_red","zpp_nape/util/RBTree.hx",6827);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6827)
		while((true)){
			HX_STACK_LINE(6829)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6830)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(6831)
			if (((g == null()))){
				HX_STACK_LINE(6832)
				par->colour = (int)1;
				HX_STACK_LINE(6833)
				break;
			}
			HX_STACK_LINE(6835)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_CbSet t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(6836)
			if (((par == g->prev))){
				HX_STACK_LINE(6837)
				n3 = g;
				HX_STACK_LINE(6838)
				t4 = g->next;
				HX_STACK_LINE(6839)
				if (((x == par->prev))){
					HX_STACK_LINE(6840)
					n1 = x;
					HX_STACK_LINE(6841)
					n2 = par;
					HX_STACK_LINE(6842)
					t1 = x->prev;
					HX_STACK_LINE(6843)
					t2 = x->next;
					HX_STACK_LINE(6844)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(6847)
					n1 = par;
					HX_STACK_LINE(6848)
					n2 = x;
					HX_STACK_LINE(6849)
					t1 = par->prev;
					HX_STACK_LINE(6850)
					t2 = x->prev;
					HX_STACK_LINE(6851)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(6855)
				n1 = g;
				HX_STACK_LINE(6856)
				t1 = g->prev;
				HX_STACK_LINE(6857)
				if (((x == par->prev))){
					HX_STACK_LINE(6858)
					n2 = x;
					HX_STACK_LINE(6859)
					n3 = par;
					HX_STACK_LINE(6860)
					t2 = x->prev;
					HX_STACK_LINE(6861)
					t3 = x->next;
					HX_STACK_LINE(6862)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(6865)
					n2 = par;
					HX_STACK_LINE(6866)
					n3 = x;
					HX_STACK_LINE(6867)
					t2 = par->prev;
					HX_STACK_LINE(6868)
					t3 = x->prev;
					HX_STACK_LINE(6869)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(6872)
			{
				HX_STACK_LINE(6873)
				::zpp_nape::util::ZPP_Set_ZPP_CbSet par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6874)
				if (((par1 == null()))){
					HX_STACK_LINE(6874)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6877)
					if (((par1->prev == g))){
						HX_STACK_LINE(6877)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6878)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6879)
				if (((n2 != null()))){
					HX_STACK_LINE(6879)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(6881)
			{
				HX_STACK_LINE(6882)
				n1->prev = t1;
				HX_STACK_LINE(6883)
				if (((t1 != null()))){
					HX_STACK_LINE(6883)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(6885)
			{
				HX_STACK_LINE(6886)
				n1->next = t2;
				HX_STACK_LINE(6887)
				if (((t2 != null()))){
					HX_STACK_LINE(6887)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(6889)
			{
				HX_STACK_LINE(6890)
				n2->prev = n1;
				HX_STACK_LINE(6891)
				if (((n1 != null()))){
					HX_STACK_LINE(6891)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(6893)
			{
				HX_STACK_LINE(6894)
				n2->next = n3;
				HX_STACK_LINE(6895)
				if (((n3 != null()))){
					HX_STACK_LINE(6895)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(6897)
			{
				HX_STACK_LINE(6898)
				n3->prev = t3;
				HX_STACK_LINE(6899)
				if (((t3 != null()))){
					HX_STACK_LINE(6899)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(6901)
			{
				HX_STACK_LINE(6902)
				n3->next = t4;
				HX_STACK_LINE(6903)
				if (((t4 != null()))){
					HX_STACK_LINE(6903)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(6905)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(6906)
			n1->colour = (int)1;
			HX_STACK_LINE(6907)
			n3->colour = (int)1;
			HX_STACK_LINE(6908)
			if (((n2 == this->parent))){
				HX_STACK_LINE(6908)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6909)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(6910)
					x = n2;
					HX_STACK_LINE(6911)
					continue;
				}
			}
			HX_STACK_LINE(6913)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_CbSet_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_CbSet negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::__fix_neg_red","zpp_nape/util/RBTree.hx",6760);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(6761)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSet &parent,::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6762);
				{
					HX_STACK_LINE(6763)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(6764)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(6765)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(6766)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(6767)
					nl->colour = (int)0;
					HX_STACK_LINE(6768)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6769)
					{
						HX_STACK_LINE(6770)
						negred->next = trl;
						HX_STACK_LINE(6771)
						if (((trl != null()))){
							HX_STACK_LINE(6771)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6773)
					{
						HX_STACK_LINE(6774)
						::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6775)
						parent->data = nr->data;
						HX_STACK_LINE(6776)
						nr->data = t;
					}
					HX_STACK_LINE(6778)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(6778)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6779)
					{
						HX_STACK_LINE(6780)
						nr->prev = trr;
						HX_STACK_LINE(6781)
						if (((trr != null()))){
							HX_STACK_LINE(6781)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6783)
					{
						HX_STACK_LINE(6784)
						nr->next = parent->next;
						HX_STACK_LINE(6785)
						if (((parent->next != null()))){
							HX_STACK_LINE(6785)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(6787)
					{
						HX_STACK_LINE(6788)
						parent->next = nr;
						HX_STACK_LINE(6789)
						if (((nr != null()))){
							HX_STACK_LINE(6789)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6791)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet &negred,::zpp_nape::util::ZPP_Set_ZPP_CbSet &parent,::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6793);
				{
					HX_STACK_LINE(6794)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(6795)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(6796)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(6797)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(6798)
					nl->colour = (int)0;
					HX_STACK_LINE(6799)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(6800)
					{
						HX_STACK_LINE(6801)
						negred->prev = trl;
						HX_STACK_LINE(6802)
						if (((trl != null()))){
							HX_STACK_LINE(6802)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(6804)
					{
						HX_STACK_LINE(6805)
						::zpp_nape::callbacks::ZPP_CbSet t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(6806)
						parent->data = nr->data;
						HX_STACK_LINE(6807)
						nr->data = t;
					}
					HX_STACK_LINE(6809)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(6809)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(6810)
					{
						HX_STACK_LINE(6811)
						nr->next = trr;
						HX_STACK_LINE(6812)
						if (((trr != null()))){
							HX_STACK_LINE(6812)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(6814)
					{
						HX_STACK_LINE(6815)
						nr->prev = parent->prev;
						HX_STACK_LINE(6816)
						if (((parent->prev != null()))){
							HX_STACK_LINE(6816)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(6818)
					{
						HX_STACK_LINE(6819)
						parent->prev = nr;
						HX_STACK_LINE(6820)
						if (((nr != null()))){
							HX_STACK_LINE(6820)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(6822)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(6762)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6824)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(6824)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(6825)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(6825)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear_node","zpp_nape/util/RBTree.hx",6725);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(6726)
	{
	}
	HX_STACK_LINE(6734)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(6735)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6736)
	if (((ret != null()))){
		HX_STACK_LINE(6737)
		if (((node == ret->prev))){
			HX_STACK_LINE(6737)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(6738)
			ret->next = null();
		}
		HX_STACK_LINE(6739)
		node->parent = null();
	}
	HX_STACK_LINE(6741)
	{
		HX_STACK_LINE(6742)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6743)
		{
		}
		HX_STACK_LINE(6751)
		{
			HX_STACK_LINE(6751)
			o->data = null();
			HX_STACK_LINE(6751)
			o->lt = null();
			HX_STACK_LINE(6751)
			o->swapped = null();
		}
		HX_STACK_LINE(6752)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(6753)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6758)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_CbSet_obj,clear_node,return )

Void ZPP_Set_ZPP_CbSet_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear_with","zpp_nape/util/RBTree.hx",6716);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(6716)
		if (((this->parent == null()))){
			HX_STACK_LINE(6717)
			return null();
		}
		else{
			HX_STACK_LINE(6719)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6720)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_CbSet &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6720);
						{
							HX_STACK_LINE(6720)
							{
							}
							HX_STACK_LINE(6720)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(6720)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6720)
							if (((ret != null()))){
								HX_STACK_LINE(6720)
								if (((cur == ret->prev))){
									HX_STACK_LINE(6720)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(6720)
									ret->next = null();
								}
								HX_STACK_LINE(6720)
								cur->parent = null();
							}
							HX_STACK_LINE(6720)
							{
								HX_STACK_LINE(6720)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(6720)
								{
								}
								HX_STACK_LINE(6720)
								{
									HX_STACK_LINE(6720)
									o->data = null();
									HX_STACK_LINE(6720)
									o->lt = null();
									HX_STACK_LINE(6720)
									o->swapped = null();
								}
								HX_STACK_LINE(6720)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(6720)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
							}
							HX_STACK_LINE(6720)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6720)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(6721)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,clear_with,(void))

Void ZPP_Set_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::clear","zpp_nape/util/RBTree.hx",6715);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6715)
		if (((this->parent == null()))){
			HX_STACK_LINE(6715)
			Dynamic();
		}
		else{
			HX_STACK_LINE(6715)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6715)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6715);
						{
							HX_STACK_LINE(6715)
							{
							}
							HX_STACK_LINE(6715)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6715)
							if (((ret != null()))){
								HX_STACK_LINE(6715)
								if (((cur == ret->prev))){
									HX_STACK_LINE(6715)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(6715)
									ret->next = null();
								}
								HX_STACK_LINE(6715)
								cur->parent = null();
							}
							HX_STACK_LINE(6715)
							{
								HX_STACK_LINE(6715)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(6715)
								{
								}
								HX_STACK_LINE(6715)
								{
									HX_STACK_LINE(6715)
									o->data = null();
									HX_STACK_LINE(6715)
									o->lt = null();
									HX_STACK_LINE(6715)
									o->swapped = null();
								}
								HX_STACK_LINE(6715)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
								HX_STACK_LINE(6715)
								::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
							}
							HX_STACK_LINE(6715)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6715)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(6715)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,clear,(void))

Void ZPP_Set_ZPP_CbSet_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::remove_node","zpp_nape/util/RBTree.hx",6595);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(6596)
		{
		}
		HX_STACK_LINE(6604)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(6605)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(6606)
			while(((sm->prev != null()))){
				HX_STACK_LINE(6606)
				sm = sm->prev;
			}
			HX_STACK_LINE(6607)
			{
				HX_STACK_LINE(6608)
				::zpp_nape::callbacks::ZPP_CbSet t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(6609)
				cur->data = sm->data;
				HX_STACK_LINE(6610)
				sm->data = t;
			}
			HX_STACK_LINE(6612)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(6612)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(6613)
			cur = sm;
		}
		HX_STACK_LINE(6615)
		{
		}
		HX_STACK_LINE(6623)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_CbSet(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(6624)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(6624)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(6625)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6626)
				if (((cur->parent != null()))){
					HX_STACK_LINE(6627)
					::zpp_nape::util::ZPP_Set_ZPP_CbSet parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(6628)
					while((true)){
						HX_STACK_LINE(6629)
						(parent->colour)++;
						HX_STACK_LINE(6630)
						(parent->prev->colour)--;
						HX_STACK_LINE(6631)
						(parent->next->colour)--;
						HX_STACK_LINE(6632)
						{
							HX_STACK_LINE(6633)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6634)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(6635)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(6636)
								break;
							}
							else{
								HX_STACK_LINE(6638)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(6639)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(6641)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(6642)
										break;
									}
									HX_STACK_LINE(6645)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(6647)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(6648)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(6653)
						{
							HX_STACK_LINE(6654)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(6655)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(6656)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(6657)
								break;
							}
							else{
								HX_STACK_LINE(6659)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(6660)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(6662)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(6663)
										break;
									}
									HX_STACK_LINE(6666)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(6668)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(6669)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(6674)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(6674)
							if (((parent->parent == null()))){
								HX_STACK_LINE(6675)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(6679)
								parent = parent->parent;
								HX_STACK_LINE(6680)
								continue;
							}
						}
						HX_STACK_LINE(6683)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(6687)
		{
			HX_STACK_LINE(6688)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(6689)
			if (((par == null()))){
				HX_STACK_LINE(6689)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(6692)
				if (((par->prev == cur))){
					HX_STACK_LINE(6692)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(6693)
					par->next = child;
				}
			}
			HX_STACK_LINE(6694)
			if (((child != null()))){
				HX_STACK_LINE(6694)
				child->parent = par;
			}
		}
		HX_STACK_LINE(6696)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(6697)
		{
			HX_STACK_LINE(6698)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6699)
			{
			}
			HX_STACK_LINE(6707)
			{
				HX_STACK_LINE(6707)
				o->data = null();
				HX_STACK_LINE(6707)
				o->lt = null();
				HX_STACK_LINE(6707)
				o->swapped = null();
			}
			HX_STACK_LINE(6708)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(6709)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove_node,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::predecessor","zpp_nape/util/RBTree.hx",6583);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6584)
	{
	}
	HX_STACK_LINE(6592)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6593)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(null()) : ::zpp_nape::callbacks::ZPP_CbSet(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::successor","zpp_nape/util/RBTree.hx",6571);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6572)
	{
	}
	HX_STACK_LINE(6580)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(6581)
	return (  (((node == null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(null()) : ::zpp_nape::callbacks::ZPP_CbSet(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::predecessor_node","zpp_nape/util/RBTree.hx",6548);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(6549)
	{
	}
	HX_STACK_LINE(6557)
	if (((cur->prev != null()))){
		HX_STACK_LINE(6558)
		cur = cur->prev;
		HX_STACK_LINE(6559)
		while(((cur->next != null()))){
			HX_STACK_LINE(6559)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(6562)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6563)
		cur = cur->parent;
		HX_STACK_LINE(6564)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(6565)
			pre = cur;
			HX_STACK_LINE(6566)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6569)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_CbSet cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::successor_node","zpp_nape/util/RBTree.hx",6525);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(6526)
	{
	}
	HX_STACK_LINE(6534)
	if (((cur->next != null()))){
		HX_STACK_LINE(6535)
		cur = cur->next;
		HX_STACK_LINE(6536)
		while(((cur->prev != null()))){
			HX_STACK_LINE(6536)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(6539)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6540)
		cur = cur->parent;
		HX_STACK_LINE(6541)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(6542)
			pre = cur;
			HX_STACK_LINE(6543)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(6546)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,successor_node,return )

Void ZPP_Set_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::remove","zpp_nape/util/RBTree.hx",6513);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6514)
		::zpp_nape::util::ZPP_Set_ZPP_CbSet node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(6515)
		{
		}
		HX_STACK_LINE(6523)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::pop_front","zpp_nape/util/RBTree.hx",6498);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6499)
	{
	}
	HX_STACK_LINE(6507)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6508)
	while(((cur->prev != null()))){
		HX_STACK_LINE(6508)
		cur = cur->prev;
	}
	HX_STACK_LINE(6509)
	::zpp_nape::callbacks::ZPP_CbSet ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6510)
	this->remove_node(cur);
	HX_STACK_LINE(6511)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,pop_front,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::first","zpp_nape/util/RBTree.hx",6485);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6486)
	{
	}
	HX_STACK_LINE(6494)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6495)
	while(((cur->prev != null()))){
		HX_STACK_LINE(6495)
		cur = cur->prev;
	}
	HX_STACK_LINE(6496)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,first,return )

::zpp_nape::callbacks::ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::lower_bound( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::lower_bound","zpp_nape/util/RBTree.hx",6448);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",6449);
			{
				HX_STACK_LINE(6450)
				::zpp_nape::callbacks::ZPP_CbSet ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6451)
				{
					HX_STACK_LINE(6452)
					{
					}
					HX_STACK_LINE(6460)
					if ((!(__this->empty()))){
						HX_STACK_LINE(6461)
						::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(6462)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(6462)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(6463)
						while(((set_ite != null()))){
							HX_STACK_LINE(6464)
							::zpp_nape::callbacks::ZPP_CbSet elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(6465)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(6467)
								ret = elt;
								HX_STACK_LINE(6468)
								break;
							}
							HX_STACK_LINE(6471)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(6472)
								set_ite = set_ite->next;
								HX_STACK_LINE(6473)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(6473)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(6476)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(6476)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(6477)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(6482)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6448)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::find_weak","zpp_nape/util/RBTree.hx",6439);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6440)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6441)
	while(((cur != null()))){
		HX_STACK_LINE(6441)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(6442)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6443)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(6443)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(6444)
				break;
			}
		}
	}
	HX_STACK_LINE(6446)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find_weak,return )

bool ZPP_Set_ZPP_CbSet_obj::has_weak( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::has_weak","zpp_nape/util/RBTree.hx",6439);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6439)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::find( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::find","zpp_nape/util/RBTree.hx",6431);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6432)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6433)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(6433)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(6434)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(6435)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(6437)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,find,return )

bool ZPP_Set_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::has","zpp_nape/util/RBTree.hx",6431);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6431)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_CbSet_obj,has,return )

int ZPP_Set_ZPP_CbSet_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::size","zpp_nape/util/RBTree.hx",6401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6402)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6403)
	{
		HX_STACK_LINE(6404)
		{
		}
		HX_STACK_LINE(6412)
		if ((!(this->empty()))){
			HX_STACK_LINE(6413)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(6414)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(6414)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(6415)
			while(((set_ite != null()))){
				HX_STACK_LINE(6416)
				::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6417)
				(ret)++;
				HX_STACK_LINE(6418)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(6419)
					set_ite = set_ite->next;
					HX_STACK_LINE(6420)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(6420)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(6423)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(6423)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(6424)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(6429)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,size,return )

bool ZPP_Set_ZPP_CbSet_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::singular","zpp_nape/util/RBTree.hx",6401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6401)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,singular,return )

bool ZPP_Set_ZPP_CbSet_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::empty","zpp_nape/util/RBTree.hx",6401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6401)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,empty,return )

bool ZPP_Set_ZPP_CbSet_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::verify","zpp_nape/util/RBTree.hx",6336);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6337)
	{
		HX_STACK_LINE(6338)
		{
		}
		HX_STACK_LINE(6346)
		if ((!(this->empty()))){
			HX_STACK_LINE(6347)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(6348)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(6348)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(6349)
			while(((set_ite != null()))){
				HX_STACK_LINE(6350)
				::zpp_nape::callbacks::ZPP_CbSet i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6351)
				{
					HX_STACK_LINE(6352)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(6353)
					{
						HX_STACK_LINE(6354)
						{
						}
						HX_STACK_LINE(6362)
						if ((!(this->empty()))){
							HX_STACK_LINE(6363)
							::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(6364)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(6364)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(6365)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(6366)
								::zpp_nape::callbacks::ZPP_CbSet j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(6367)
								if ((!(prei))){
									HX_STACK_LINE(6368)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(6369)
										return false;
									}
								}
								else{
									HX_STACK_LINE(6371)
									if (((i == j))){
										HX_STACK_LINE(6371)
										prei = false;
									}
									else{
										HX_STACK_LINE(6372)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(6373)
											return false;
										}
									}
								}
								HX_STACK_LINE(6376)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(6377)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(6378)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(6378)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(6381)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(6381)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(6382)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(6388)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(6389)
					set_ite = set_ite->next;
					HX_STACK_LINE(6390)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(6390)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(6393)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(6393)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(6394)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(6399)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,verify,return )

Void ZPP_Set_ZPP_CbSet_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::alloc","zpp_nape/util/RBTree.hx",6327);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,alloc,(void))

Void ZPP_Set_ZPP_CbSet_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_CbSet::free","zpp_nape/util/RBTree.hx",6320);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6321)
		this->data = null();
		HX_STACK_LINE(6322)
		this->lt = null();
		HX_STACK_LINE(6323)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_CbSet_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_CbSet ZPP_Set_ZPP_CbSet_obj::zpp_pool;


ZPP_Set_ZPP_CbSet_obj::ZPP_Set_ZPP_CbSet_obj()
{
}

void ZPP_Set_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::callbacks::ZPP_CbSet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_CbSet_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_CbSet_obj::__mClass;

void ZPP_Set_ZPP_CbSet_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_CbSet"), hx::TCanCast< ZPP_Set_ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_CbSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
