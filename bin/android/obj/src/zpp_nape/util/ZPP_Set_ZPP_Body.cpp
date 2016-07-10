#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_Body::new","zpp_nape/util/RBTree.hx",175);
{
	HX_STACK_LINE(216)
	this->colour = (int)0;
	HX_STACK_LINE(215)
	this->parent = null();
	HX_STACK_LINE(214)
	this->next = null();
	HX_STACK_LINE(213)
	this->prev = null();
	HX_STACK_LINE(212)
	this->data = null();
	HX_STACK_LINE(211)
	this->swapped = null();
	HX_STACK_LINE(210)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_Body_obj::~ZPP_Set_ZPP_Body_obj() { }

Dynamic ZPP_Set_ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > ZPP_Set_ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > result = new ZPP_Set_ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_Body_obj > result = new ZPP_Set_ZPP_Body_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::insert","zpp_nape/util/RBTree.hx",982);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(983)
	{
	}
	HX_STACK_LINE(991)
	::zpp_nape::util::ZPP_Set_ZPP_Body x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(992)
	{
		HX_STACK_LINE(993)
		if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
			HX_STACK_LINE(993)
			x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
		}
		else{
			HX_STACK_LINE(1000)
			x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(1001)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
			HX_STACK_LINE(1002)
			x->next = null();
		}
		HX_STACK_LINE(1007)
		Dynamic();
	}
	HX_STACK_LINE(1009)
	x->data = obj;
	HX_STACK_LINE(1010)
	if (((this->parent == null()))){
		HX_STACK_LINE(1010)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(1012)
		::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1013)
		while((true)){
			HX_STACK_LINE(1013)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(1014)
				if (((cur->prev == null()))){
					HX_STACK_LINE(1016)
					cur->prev = x;
					HX_STACK_LINE(1017)
					x->parent = cur;
					HX_STACK_LINE(1018)
					break;
				}
				else{
					HX_STACK_LINE(1020)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(1022)
				if (((cur->next == null()))){
					HX_STACK_LINE(1024)
					cur->next = x;
					HX_STACK_LINE(1025)
					x->parent = cur;
					HX_STACK_LINE(1026)
					break;
				}
				else{
					HX_STACK_LINE(1028)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(1032)
	if (((x->parent == null()))){
		HX_STACK_LINE(1032)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(1034)
		x->colour = (int)0;
		HX_STACK_LINE(1035)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(1035)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(1037)
	{
	}
	HX_STACK_LINE(1045)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::try_insert( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::try_insert","zpp_nape/util/RBTree.hx",890);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(891)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(892)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(893)
	if (((this->parent == null()))){
		HX_STACK_LINE(894)
		{
			HX_STACK_LINE(895)
			if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
				HX_STACK_LINE(895)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			}
			else{
				HX_STACK_LINE(902)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(903)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(904)
				x->next = null();
			}
			HX_STACK_LINE(909)
			Dynamic();
		}
		HX_STACK_LINE(911)
		x->data = obj;
		HX_STACK_LINE(912)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(915)
		cur = this->parent;
		HX_STACK_LINE(916)
		while((true)){
			HX_STACK_LINE(916)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(917)
				if (((cur->prev == null()))){
					HX_STACK_LINE(919)
					{
						HX_STACK_LINE(920)
						if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
							HX_STACK_LINE(920)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
						}
						else{
							HX_STACK_LINE(927)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(928)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(929)
							x->next = null();
						}
						HX_STACK_LINE(934)
						Dynamic();
					}
					HX_STACK_LINE(936)
					x->data = obj;
					HX_STACK_LINE(937)
					cur->prev = x;
					HX_STACK_LINE(938)
					x->parent = cur;
					HX_STACK_LINE(939)
					break;
				}
				else{
					HX_STACK_LINE(941)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(943)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(943)
					if (((cur->next == null()))){
						HX_STACK_LINE(945)
						{
							HX_STACK_LINE(946)
							if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
								HX_STACK_LINE(946)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
							}
							else{
								HX_STACK_LINE(953)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(954)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(955)
								x->next = null();
							}
							HX_STACK_LINE(960)
							Dynamic();
						}
						HX_STACK_LINE(962)
						x->data = obj;
						HX_STACK_LINE(963)
						cur->next = x;
						HX_STACK_LINE(964)
						x->parent = cur;
						HX_STACK_LINE(965)
						break;
					}
					else{
						HX_STACK_LINE(967)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(969)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(972)
	if (((x == null()))){
		HX_STACK_LINE(972)
		return cur;
	}
	else{
		HX_STACK_LINE(974)
		if (((x->parent == null()))){
			HX_STACK_LINE(974)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(976)
			x->colour = (int)0;
			HX_STACK_LINE(977)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(977)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(979)
		return x;
	}
	HX_STACK_LINE(972)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert,return )

bool ZPP_Set_ZPP_Body_obj::try_insert_bool( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::try_insert_bool","zpp_nape/util/RBTree.hx",798);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(799)
	::zpp_nape::util::ZPP_Set_ZPP_Body x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(800)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(801)
	if (((this->parent == null()))){
		HX_STACK_LINE(802)
		{
			HX_STACK_LINE(803)
			if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
				HX_STACK_LINE(803)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			}
			else{
				HX_STACK_LINE(810)
				x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
				HX_STACK_LINE(811)
				::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
				HX_STACK_LINE(812)
				x->next = null();
			}
			HX_STACK_LINE(817)
			Dynamic();
		}
		HX_STACK_LINE(819)
		x->data = obj;
		HX_STACK_LINE(820)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(823)
		cur = this->parent;
		HX_STACK_LINE(824)
		while((true)){
			HX_STACK_LINE(824)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(825)
				if (((cur->prev == null()))){
					HX_STACK_LINE(827)
					{
						HX_STACK_LINE(828)
						if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
							HX_STACK_LINE(828)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
						}
						else{
							HX_STACK_LINE(835)
							x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
							HX_STACK_LINE(836)
							::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
							HX_STACK_LINE(837)
							x->next = null();
						}
						HX_STACK_LINE(842)
						Dynamic();
					}
					HX_STACK_LINE(844)
					x->data = obj;
					HX_STACK_LINE(845)
					cur->prev = x;
					HX_STACK_LINE(846)
					x->parent = cur;
					HX_STACK_LINE(847)
					break;
				}
				else{
					HX_STACK_LINE(849)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(851)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(851)
					if (((cur->next == null()))){
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(854)
							if (((::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool == null()))){
								HX_STACK_LINE(854)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
							}
							else{
								HX_STACK_LINE(861)
								x = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(862)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = x->next;
								HX_STACK_LINE(863)
								x->next = null();
							}
							HX_STACK_LINE(868)
							Dynamic();
						}
						HX_STACK_LINE(870)
						x->data = obj;
						HX_STACK_LINE(871)
						cur->next = x;
						HX_STACK_LINE(872)
						x->parent = cur;
						HX_STACK_LINE(873)
						break;
					}
					else{
						HX_STACK_LINE(875)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(877)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(880)
	if (((x == null()))){
		HX_STACK_LINE(880)
		return false;
	}
	else{
		HX_STACK_LINE(882)
		if (((x->parent == null()))){
			HX_STACK_LINE(882)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(884)
			x->colour = (int)0;
			HX_STACK_LINE(885)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(885)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(887)
		return true;
	}
	HX_STACK_LINE(880)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_Body_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_Body x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::__fix_dbl_red","zpp_nape/util/RBTree.hx",709);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(709)
		while((true)){
			HX_STACK_LINE(711)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(712)
			::zpp_nape::util::ZPP_Set_ZPP_Body g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(713)
			if (((g == null()))){
				HX_STACK_LINE(714)
				par->colour = (int)1;
				HX_STACK_LINE(715)
				break;
			}
			HX_STACK_LINE(717)
			::zpp_nape::util::ZPP_Set_ZPP_Body n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_Body n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_Body n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_Body t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_Body t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_Body t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_Body t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(718)
			if (((par == g->prev))){
				HX_STACK_LINE(719)
				n3 = g;
				HX_STACK_LINE(720)
				t4 = g->next;
				HX_STACK_LINE(721)
				if (((x == par->prev))){
					HX_STACK_LINE(722)
					n1 = x;
					HX_STACK_LINE(723)
					n2 = par;
					HX_STACK_LINE(724)
					t1 = x->prev;
					HX_STACK_LINE(725)
					t2 = x->next;
					HX_STACK_LINE(726)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(729)
					n1 = par;
					HX_STACK_LINE(730)
					n2 = x;
					HX_STACK_LINE(731)
					t1 = par->prev;
					HX_STACK_LINE(732)
					t2 = x->prev;
					HX_STACK_LINE(733)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(737)
				n1 = g;
				HX_STACK_LINE(738)
				t1 = g->prev;
				HX_STACK_LINE(739)
				if (((x == par->prev))){
					HX_STACK_LINE(740)
					n2 = x;
					HX_STACK_LINE(741)
					n3 = par;
					HX_STACK_LINE(742)
					t2 = x->prev;
					HX_STACK_LINE(743)
					t3 = x->next;
					HX_STACK_LINE(744)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(747)
					n2 = par;
					HX_STACK_LINE(748)
					n3 = x;
					HX_STACK_LINE(749)
					t2 = par->prev;
					HX_STACK_LINE(750)
					t3 = x->prev;
					HX_STACK_LINE(751)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(754)
			{
				HX_STACK_LINE(755)
				::zpp_nape::util::ZPP_Set_ZPP_Body par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(756)
				if (((par1 == null()))){
					HX_STACK_LINE(756)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(759)
					if (((par1->prev == g))){
						HX_STACK_LINE(759)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(760)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(761)
				if (((n2 != null()))){
					HX_STACK_LINE(761)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(763)
			{
				HX_STACK_LINE(764)
				n1->prev = t1;
				HX_STACK_LINE(765)
				if (((t1 != null()))){
					HX_STACK_LINE(765)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(767)
			{
				HX_STACK_LINE(768)
				n1->next = t2;
				HX_STACK_LINE(769)
				if (((t2 != null()))){
					HX_STACK_LINE(769)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(771)
			{
				HX_STACK_LINE(772)
				n2->prev = n1;
				HX_STACK_LINE(773)
				if (((n1 != null()))){
					HX_STACK_LINE(773)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(776)
				n2->next = n3;
				HX_STACK_LINE(777)
				if (((n3 != null()))){
					HX_STACK_LINE(777)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(779)
			{
				HX_STACK_LINE(780)
				n3->prev = t3;
				HX_STACK_LINE(781)
				if (((t3 != null()))){
					HX_STACK_LINE(781)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(784)
				n3->next = t4;
				HX_STACK_LINE(785)
				if (((t4 != null()))){
					HX_STACK_LINE(785)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(787)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(788)
			n1->colour = (int)1;
			HX_STACK_LINE(789)
			n3->colour = (int)1;
			HX_STACK_LINE(790)
			if (((n2 == this->parent))){
				HX_STACK_LINE(790)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(791)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(792)
					x = n2;
					HX_STACK_LINE(793)
					continue;
				}
			}
			HX_STACK_LINE(795)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_Body_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_Body negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::__fix_neg_red","zpp_nape/util/RBTree.hx",642);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(643)
		::zpp_nape::util::ZPP_Set_ZPP_Body parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &negred,::zpp_nape::util::ZPP_Set_ZPP_Body &parent,::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",644);
				{
					HX_STACK_LINE(645)
					::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(646)
					::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(647)
					::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(648)
					::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(649)
					nl->colour = (int)0;
					HX_STACK_LINE(650)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(651)
					{
						HX_STACK_LINE(652)
						negred->next = trl;
						HX_STACK_LINE(653)
						if (((trl != null()))){
							HX_STACK_LINE(653)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(655)
					{
						HX_STACK_LINE(656)
						::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(657)
						parent->data = nr->data;
						HX_STACK_LINE(658)
						nr->data = t;
					}
					HX_STACK_LINE(660)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(660)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(661)
					{
						HX_STACK_LINE(662)
						nr->prev = trr;
						HX_STACK_LINE(663)
						if (((trr != null()))){
							HX_STACK_LINE(663)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(665)
					{
						HX_STACK_LINE(666)
						nr->next = parent->next;
						HX_STACK_LINE(667)
						if (((parent->next != null()))){
							HX_STACK_LINE(667)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(669)
					{
						HX_STACK_LINE(670)
						parent->next = nr;
						HX_STACK_LINE(671)
						if (((nr != null()))){
							HX_STACK_LINE(671)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(673)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &negred,::zpp_nape::util::ZPP_Set_ZPP_Body &parent,::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",675);
				{
					HX_STACK_LINE(676)
					::zpp_nape::util::ZPP_Set_ZPP_Body nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(677)
					::zpp_nape::util::ZPP_Set_ZPP_Body nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(678)
					::zpp_nape::util::ZPP_Set_ZPP_Body trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(679)
					::zpp_nape::util::ZPP_Set_ZPP_Body trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(680)
					nl->colour = (int)0;
					HX_STACK_LINE(681)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(683)
						negred->prev = trl;
						HX_STACK_LINE(684)
						if (((trl != null()))){
							HX_STACK_LINE(684)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(686)
					{
						HX_STACK_LINE(687)
						::zpp_nape::phys::ZPP_Body t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(688)
						parent->data = nr->data;
						HX_STACK_LINE(689)
						nr->data = t;
					}
					HX_STACK_LINE(691)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(691)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(692)
					{
						HX_STACK_LINE(693)
						nr->next = trr;
						HX_STACK_LINE(694)
						if (((trr != null()))){
							HX_STACK_LINE(694)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(697)
						nr->prev = parent->prev;
						HX_STACK_LINE(698)
						if (((parent->prev != null()))){
							HX_STACK_LINE(698)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(700)
					{
						HX_STACK_LINE(701)
						parent->prev = nr;
						HX_STACK_LINE(702)
						if (((nr != null()))){
							HX_STACK_LINE(702)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(704)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(644)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(706)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(706)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(707)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(707)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_Body node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear_node","zpp_nape/util/RBTree.hx",607);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(608)
	{
	}
	HX_STACK_LINE(616)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(617)
	::zpp_nape::util::ZPP_Set_ZPP_Body ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(618)
	if (((ret != null()))){
		HX_STACK_LINE(619)
		if (((node == ret->prev))){
			HX_STACK_LINE(619)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(620)
			ret->next = null();
		}
		HX_STACK_LINE(621)
		node->parent = null();
	}
	HX_STACK_LINE(623)
	{
		HX_STACK_LINE(624)
		::zpp_nape::util::ZPP_Set_ZPP_Body o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(625)
		{
		}
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			o->data = null();
			HX_STACK_LINE(633)
			o->lt = null();
			HX_STACK_LINE(633)
			o->swapped = null();
		}
		HX_STACK_LINE(634)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
		HX_STACK_LINE(635)
		::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
	}
	HX_STACK_LINE(640)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_Body_obj,clear_node,return )

Void ZPP_Set_ZPP_Body_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear_with","zpp_nape/util/RBTree.hx",598);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(598)
		if (((this->parent == null()))){
			HX_STACK_LINE(599)
			return null();
		}
		else{
			HX_STACK_LINE(601)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(602)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_Body &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",602);
						{
							HX_STACK_LINE(602)
							{
							}
							HX_STACK_LINE(602)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(602)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(602)
							if (((ret != null()))){
								HX_STACK_LINE(602)
								if (((cur == ret->prev))){
									HX_STACK_LINE(602)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(602)
									ret->next = null();
								}
								HX_STACK_LINE(602)
								cur->parent = null();
							}
							HX_STACK_LINE(602)
							{
								HX_STACK_LINE(602)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(602)
								{
								}
								HX_STACK_LINE(602)
								{
									HX_STACK_LINE(602)
									o->data = null();
									HX_STACK_LINE(602)
									o->lt = null();
									HX_STACK_LINE(602)
									o->swapped = null();
								}
								HX_STACK_LINE(602)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(602)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(602)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(602)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(603)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,clear_with,(void))

Void ZPP_Set_ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::clear","zpp_nape/util/RBTree.hx",597);
		HX_STACK_THIS(this);
		HX_STACK_LINE(597)
		if (((this->parent == null()))){
			HX_STACK_LINE(597)
			Dynamic();
		}
		else{
			HX_STACK_LINE(597)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(597)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",597);
						{
							HX_STACK_LINE(597)
							{
							}
							HX_STACK_LINE(597)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(597)
							if (((ret != null()))){
								HX_STACK_LINE(597)
								if (((cur == ret->prev))){
									HX_STACK_LINE(597)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(597)
									ret->next = null();
								}
								HX_STACK_LINE(597)
								cur->parent = null();
							}
							HX_STACK_LINE(597)
							{
								HX_STACK_LINE(597)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(597)
								{
								}
								HX_STACK_LINE(597)
								{
									HX_STACK_LINE(597)
									o->data = null();
									HX_STACK_LINE(597)
									o->lt = null();
									HX_STACK_LINE(597)
									o->swapped = null();
								}
								HX_STACK_LINE(597)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(597)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(597)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(597)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(597)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,clear,(void))

Void ZPP_Set_ZPP_Body_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::remove_node","zpp_nape/util/RBTree.hx",477);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(478)
		{
		}
		HX_STACK_LINE(486)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(487)
			::zpp_nape::util::ZPP_Set_ZPP_Body sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(488)
			while(((sm->prev != null()))){
				HX_STACK_LINE(488)
				sm = sm->prev;
			}
			HX_STACK_LINE(489)
			{
				HX_STACK_LINE(490)
				::zpp_nape::phys::ZPP_Body t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(491)
				cur->data = sm->data;
				HX_STACK_LINE(492)
				sm->data = t;
			}
			HX_STACK_LINE(494)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(494)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(495)
			cur = sm;
		}
		HX_STACK_LINE(497)
		{
		}
		HX_STACK_LINE(505)
		::zpp_nape::util::ZPP_Set_ZPP_Body child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(506)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(506)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(507)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(508)
				if (((cur->parent != null()))){
					HX_STACK_LINE(509)
					::zpp_nape::util::ZPP_Set_ZPP_Body parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(510)
					while((true)){
						HX_STACK_LINE(511)
						(parent->colour)++;
						HX_STACK_LINE(512)
						(parent->prev->colour)--;
						HX_STACK_LINE(513)
						(parent->next->colour)--;
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(515)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(516)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(517)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(518)
								break;
							}
							else{
								HX_STACK_LINE(520)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(521)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(523)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(524)
										break;
									}
									HX_STACK_LINE(527)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(529)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(530)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(535)
						{
							HX_STACK_LINE(536)
							::zpp_nape::util::ZPP_Set_ZPP_Body child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(537)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(538)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(539)
								break;
							}
							else{
								HX_STACK_LINE(541)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(542)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(544)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(545)
										break;
									}
									HX_STACK_LINE(548)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(550)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(551)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(556)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(556)
							if (((parent->parent == null()))){
								HX_STACK_LINE(557)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(561)
								parent = parent->parent;
								HX_STACK_LINE(562)
								continue;
							}
						}
						HX_STACK_LINE(565)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(570)
			::zpp_nape::util::ZPP_Set_ZPP_Body par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(571)
			if (((par == null()))){
				HX_STACK_LINE(571)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(574)
				if (((par->prev == cur))){
					HX_STACK_LINE(574)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(575)
					par->next = child;
				}
			}
			HX_STACK_LINE(576)
			if (((child != null()))){
				HX_STACK_LINE(576)
				child->parent = par;
			}
		}
		HX_STACK_LINE(578)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(579)
		{
			HX_STACK_LINE(580)
			::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(581)
			{
			}
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				o->data = null();
				HX_STACK_LINE(589)
				o->lt = null();
				HX_STACK_LINE(589)
				o->swapped = null();
			}
			HX_STACK_LINE(590)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
			HX_STACK_LINE(591)
			::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove_node,(void))

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::predecessor","zpp_nape/util/RBTree.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(466)
	{
	}
	HX_STACK_LINE(474)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(475)
	return (  (((node == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::successor( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::successor","zpp_nape/util/RBTree.hx",453);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(454)
	{
	}
	HX_STACK_LINE(462)
	::zpp_nape::util::ZPP_Set_ZPP_Body node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(463)
	return (  (((node == null()))) ? ::zpp_nape::phys::ZPP_Body(null()) : ::zpp_nape::phys::ZPP_Body(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::predecessor_node","zpp_nape/util/RBTree.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(431)
	{
	}
	HX_STACK_LINE(439)
	if (((cur->prev != null()))){
		HX_STACK_LINE(440)
		cur = cur->prev;
		HX_STACK_LINE(441)
		while(((cur->next != null()))){
			HX_STACK_LINE(441)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(444)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(445)
		cur = cur->parent;
		HX_STACK_LINE(446)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(447)
			pre = cur;
			HX_STACK_LINE(448)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(451)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_Body cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::successor_node","zpp_nape/util/RBTree.hx",407);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(408)
	{
	}
	HX_STACK_LINE(416)
	if (((cur->next != null()))){
		HX_STACK_LINE(417)
		cur = cur->next;
		HX_STACK_LINE(418)
		while(((cur->prev != null()))){
			HX_STACK_LINE(418)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(421)
		::zpp_nape::util::ZPP_Set_ZPP_Body pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(422)
		cur = cur->parent;
		HX_STACK_LINE(423)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(424)
			pre = cur;
			HX_STACK_LINE(425)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(428)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,successor_node,return )

Void ZPP_Set_ZPP_Body_obj::remove( ::zpp_nape::phys::ZPP_Body obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::remove","zpp_nape/util/RBTree.hx",395);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(396)
		::zpp_nape::util::ZPP_Set_ZPP_Body node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(397)
		{
		}
		HX_STACK_LINE(405)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,remove,(void))

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::pop_front","zpp_nape/util/RBTree.hx",380);
	HX_STACK_THIS(this);
	HX_STACK_LINE(381)
	{
	}
	HX_STACK_LINE(389)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(390)
	while(((cur->prev != null()))){
		HX_STACK_LINE(390)
		cur = cur->prev;
	}
	HX_STACK_LINE(391)
	::zpp_nape::phys::ZPP_Body ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(392)
	this->remove_node(cur);
	HX_STACK_LINE(393)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,pop_front,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::first","zpp_nape/util/RBTree.hx",367);
	HX_STACK_THIS(this);
	HX_STACK_LINE(368)
	{
	}
	HX_STACK_LINE(376)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(377)
	while(((cur->prev != null()))){
		HX_STACK_LINE(377)
		cur = cur->prev;
	}
	HX_STACK_LINE(378)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,first,return )

::zpp_nape::phys::ZPP_Body ZPP_Set_ZPP_Body_obj::lower_bound( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::lower_bound","zpp_nape/util/RBTree.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::phys::ZPP_Body Block( ::zpp_nape::util::ZPP_Set_ZPP_Body_obj *__this,::zpp_nape::phys::ZPP_Body &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",331);
			{
				HX_STACK_LINE(332)
				::zpp_nape::phys::ZPP_Body ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(334)
					{
					}
					HX_STACK_LINE(342)
					if ((!(__this->empty()))){
						HX_STACK_LINE(343)
						::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(344)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(344)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(345)
						while(((set_ite != null()))){
							HX_STACK_LINE(346)
							::zpp_nape::phys::ZPP_Body elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(347)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(349)
								ret = elt;
								HX_STACK_LINE(350)
								break;
							}
							HX_STACK_LINE(353)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(354)
								set_ite = set_ite->next;
								HX_STACK_LINE(355)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(355)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(358)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(358)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(359)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(364)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(330)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::find_weak","zpp_nape/util/RBTree.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(322)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(323)
	while(((cur != null()))){
		HX_STACK_LINE(323)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(324)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(325)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(325)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(326)
				break;
			}
		}
	}
	HX_STACK_LINE(328)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find_weak,return )

bool ZPP_Set_ZPP_Body_obj::has_weak( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::has_weak","zpp_nape/util/RBTree.hx",321);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(321)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::find( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::find","zpp_nape/util/RBTree.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(314)
	::zpp_nape::util::ZPP_Set_ZPP_Body cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(315)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(315)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(316)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(317)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(319)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,find,return )

bool ZPP_Set_ZPP_Body_obj::has( ::zpp_nape::phys::ZPP_Body obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::has","zpp_nape/util/RBTree.hx",313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(313)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_Body_obj,has,return )

int ZPP_Set_ZPP_Body_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::size","zpp_nape/util/RBTree.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(284)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(285)
	{
		HX_STACK_LINE(286)
		{
		}
		HX_STACK_LINE(294)
		if ((!(this->empty()))){
			HX_STACK_LINE(295)
			::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(296)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(296)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(297)
			while(((set_ite != null()))){
				HX_STACK_LINE(298)
				::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(299)
				(ret)++;
				HX_STACK_LINE(300)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(301)
					set_ite = set_ite->next;
					HX_STACK_LINE(302)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(302)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(305)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(305)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(306)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(311)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,size,return )

bool ZPP_Set_ZPP_Body_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::singular","zpp_nape/util/RBTree.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,singular,return )

bool ZPP_Set_ZPP_Body_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::empty","zpp_nape/util/RBTree.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,empty,return )

bool ZPP_Set_ZPP_Body_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_Body::verify","zpp_nape/util/RBTree.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	{
		HX_STACK_LINE(220)
		{
		}
		HX_STACK_LINE(228)
		if ((!(this->empty()))){
			HX_STACK_LINE(229)
			::zpp_nape::util::ZPP_Set_ZPP_Body set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(230)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(230)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(231)
			while(((set_ite != null()))){
				HX_STACK_LINE(232)
				::zpp_nape::phys::ZPP_Body i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(234)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(236)
						{
						}
						HX_STACK_LINE(244)
						if ((!(this->empty()))){
							HX_STACK_LINE(245)
							::zpp_nape::util::ZPP_Set_ZPP_Body set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(246)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(246)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(247)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(248)
								::zpp_nape::phys::ZPP_Body j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(249)
								if ((!(prei))){
									HX_STACK_LINE(250)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(251)
										return false;
									}
								}
								else{
									HX_STACK_LINE(253)
									if (((i == j))){
										HX_STACK_LINE(253)
										prei = false;
									}
									else{
										HX_STACK_LINE(254)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(255)
											return false;
										}
									}
								}
								HX_STACK_LINE(258)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(259)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(260)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(260)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(263)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(263)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(264)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(270)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(271)
					set_ite = set_ite->next;
					HX_STACK_LINE(272)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(272)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(275)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(275)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(276)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(281)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,verify,return )

Void ZPP_Set_ZPP_Body_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::alloc","zpp_nape/util/RBTree.hx",209);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,alloc,(void))

Void ZPP_Set_ZPP_Body_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_Body::free","zpp_nape/util/RBTree.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_LINE(203)
		this->data = null();
		HX_STACK_LINE(204)
		this->lt = null();
		HX_STACK_LINE(205)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_Body_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Set_ZPP_Body_obj::zpp_pool;


ZPP_Set_ZPP_Body_obj::ZPP_Set_ZPP_Body_obj()
{
}

void ZPP_Set_ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_Body);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_Body_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_Body_obj::__mClass;

void ZPP_Set_ZPP_Body_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_Body"), hx::TCanCast< ZPP_Set_ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_Body_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
