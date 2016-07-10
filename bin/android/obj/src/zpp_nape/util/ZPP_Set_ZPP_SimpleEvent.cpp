#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleEvent
#include <zpp_nape/geom/ZPP_SimpleEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleEvent
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleEvent_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::new","zpp_nape/util/RBTree.hx",5419);
{
	HX_STACK_LINE(5460)
	this->colour = (int)0;
	HX_STACK_LINE(5459)
	this->parent = null();
	HX_STACK_LINE(5458)
	this->next = null();
	HX_STACK_LINE(5457)
	this->prev = null();
	HX_STACK_LINE(5456)
	this->data = null();
	HX_STACK_LINE(5455)
	this->swapped = null();
	HX_STACK_LINE(5454)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleEvent_obj::~ZPP_Set_ZPP_SimpleEvent_obj() { }

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleEvent_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > ZPP_Set_ZPP_SimpleEvent_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > result = new ZPP_Set_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleEvent_obj > result = new ZPP_Set_ZPP_SimpleEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::insert","zpp_nape/util/RBTree.hx",6226);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6227)
	{
	}
	HX_STACK_LINE(6235)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6236)
	{
		HX_STACK_LINE(6237)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
			HX_STACK_LINE(6237)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
		}
		else{
			HX_STACK_LINE(6244)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(6245)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
			HX_STACK_LINE(6246)
			x->next = null();
		}
		HX_STACK_LINE(6251)
		Dynamic();
	}
	HX_STACK_LINE(6253)
	x->data = obj;
	HX_STACK_LINE(6254)
	if (((this->parent == null()))){
		HX_STACK_LINE(6254)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6256)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6257)
		while((true)){
			HX_STACK_LINE(6257)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(6258)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6260)
					cur->prev = x;
					HX_STACK_LINE(6261)
					x->parent = cur;
					HX_STACK_LINE(6262)
					break;
				}
				else{
					HX_STACK_LINE(6264)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6266)
				if (((cur->next == null()))){
					HX_STACK_LINE(6268)
					cur->next = x;
					HX_STACK_LINE(6269)
					x->parent = cur;
					HX_STACK_LINE(6270)
					break;
				}
				else{
					HX_STACK_LINE(6272)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(6276)
	if (((x->parent == null()))){
		HX_STACK_LINE(6276)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(6278)
		x->colour = (int)0;
		HX_STACK_LINE(6279)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(6279)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(6281)
	{
	}
	HX_STACK_LINE(6289)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::try_insert","zpp_nape/util/RBTree.hx",6134);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6135)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6136)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6137)
	if (((this->parent == null()))){
		HX_STACK_LINE(6138)
		{
			HX_STACK_LINE(6139)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(6139)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
			}
			else{
				HX_STACK_LINE(6146)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(6147)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6148)
				x->next = null();
			}
			HX_STACK_LINE(6153)
			Dynamic();
		}
		HX_STACK_LINE(6155)
		x->data = obj;
		HX_STACK_LINE(6156)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6159)
		cur = this->parent;
		HX_STACK_LINE(6160)
		while((true)){
			HX_STACK_LINE(6160)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(6161)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6163)
					{
						HX_STACK_LINE(6164)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(6164)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
						}
						else{
							HX_STACK_LINE(6171)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(6172)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6173)
							x->next = null();
						}
						HX_STACK_LINE(6178)
						Dynamic();
					}
					HX_STACK_LINE(6180)
					x->data = obj;
					HX_STACK_LINE(6181)
					cur->prev = x;
					HX_STACK_LINE(6182)
					x->parent = cur;
					HX_STACK_LINE(6183)
					break;
				}
				else{
					HX_STACK_LINE(6185)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6187)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(6187)
					if (((cur->next == null()))){
						HX_STACK_LINE(6189)
						{
							HX_STACK_LINE(6190)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
								HX_STACK_LINE(6190)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
							}
							else{
								HX_STACK_LINE(6197)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(6198)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6199)
								x->next = null();
							}
							HX_STACK_LINE(6204)
							Dynamic();
						}
						HX_STACK_LINE(6206)
						x->data = obj;
						HX_STACK_LINE(6207)
						cur->next = x;
						HX_STACK_LINE(6208)
						x->parent = cur;
						HX_STACK_LINE(6209)
						break;
					}
					else{
						HX_STACK_LINE(6211)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6213)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6216)
	if (((x == null()))){
		HX_STACK_LINE(6216)
		return cur;
	}
	else{
		HX_STACK_LINE(6218)
		if (((x->parent == null()))){
			HX_STACK_LINE(6218)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6220)
			x->colour = (int)0;
			HX_STACK_LINE(6221)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(6221)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(6223)
		return x;
	}
	HX_STACK_LINE(6216)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::try_insert_bool","zpp_nape/util/RBTree.hx",6042);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6043)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(6044)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6045)
	if (((this->parent == null()))){
		HX_STACK_LINE(6046)
		{
			HX_STACK_LINE(6047)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
				HX_STACK_LINE(6047)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
			}
			else{
				HX_STACK_LINE(6054)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
				HX_STACK_LINE(6055)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
				HX_STACK_LINE(6056)
				x->next = null();
			}
			HX_STACK_LINE(6061)
			Dynamic();
		}
		HX_STACK_LINE(6063)
		x->data = obj;
		HX_STACK_LINE(6064)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(6067)
		cur = this->parent;
		HX_STACK_LINE(6068)
		while((true)){
			HX_STACK_LINE(6068)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(6069)
				if (((cur->prev == null()))){
					HX_STACK_LINE(6071)
					{
						HX_STACK_LINE(6072)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
							HX_STACK_LINE(6072)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
						}
						else{
							HX_STACK_LINE(6079)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
							HX_STACK_LINE(6080)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
							HX_STACK_LINE(6081)
							x->next = null();
						}
						HX_STACK_LINE(6086)
						Dynamic();
					}
					HX_STACK_LINE(6088)
					x->data = obj;
					HX_STACK_LINE(6089)
					cur->prev = x;
					HX_STACK_LINE(6090)
					x->parent = cur;
					HX_STACK_LINE(6091)
					break;
				}
				else{
					HX_STACK_LINE(6093)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(6095)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(6095)
					if (((cur->next == null()))){
						HX_STACK_LINE(6097)
						{
							HX_STACK_LINE(6098)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool == null()))){
								HX_STACK_LINE(6098)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::__new();
							}
							else{
								HX_STACK_LINE(6105)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(6106)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = x->next;
								HX_STACK_LINE(6107)
								x->next = null();
							}
							HX_STACK_LINE(6112)
							Dynamic();
						}
						HX_STACK_LINE(6114)
						x->data = obj;
						HX_STACK_LINE(6115)
						cur->next = x;
						HX_STACK_LINE(6116)
						x->parent = cur;
						HX_STACK_LINE(6117)
						break;
					}
					else{
						HX_STACK_LINE(6119)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(6121)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(6124)
	if (((x == null()))){
		HX_STACK_LINE(6124)
		return false;
	}
	else{
		HX_STACK_LINE(6126)
		if (((x->parent == null()))){
			HX_STACK_LINE(6126)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(6128)
			x->colour = (int)0;
			HX_STACK_LINE(6129)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(6129)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(6131)
		return true;
	}
	HX_STACK_LINE(6124)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::__fix_dbl_red","zpp_nape/util/RBTree.hx",5953);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5953)
		while((true)){
			HX_STACK_LINE(5955)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5956)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(5957)
			if (((g == null()))){
				HX_STACK_LINE(5958)
				par->colour = (int)1;
				HX_STACK_LINE(5959)
				break;
			}
			HX_STACK_LINE(5961)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(5962)
			if (((par == g->prev))){
				HX_STACK_LINE(5963)
				n3 = g;
				HX_STACK_LINE(5964)
				t4 = g->next;
				HX_STACK_LINE(5965)
				if (((x == par->prev))){
					HX_STACK_LINE(5966)
					n1 = x;
					HX_STACK_LINE(5967)
					n2 = par;
					HX_STACK_LINE(5968)
					t1 = x->prev;
					HX_STACK_LINE(5969)
					t2 = x->next;
					HX_STACK_LINE(5970)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(5973)
					n1 = par;
					HX_STACK_LINE(5974)
					n2 = x;
					HX_STACK_LINE(5975)
					t1 = par->prev;
					HX_STACK_LINE(5976)
					t2 = x->prev;
					HX_STACK_LINE(5977)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(5981)
				n1 = g;
				HX_STACK_LINE(5982)
				t1 = g->prev;
				HX_STACK_LINE(5983)
				if (((x == par->prev))){
					HX_STACK_LINE(5984)
					n2 = x;
					HX_STACK_LINE(5985)
					n3 = par;
					HX_STACK_LINE(5986)
					t2 = x->prev;
					HX_STACK_LINE(5987)
					t3 = x->next;
					HX_STACK_LINE(5988)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(5991)
					n2 = par;
					HX_STACK_LINE(5992)
					n3 = x;
					HX_STACK_LINE(5993)
					t2 = par->prev;
					HX_STACK_LINE(5994)
					t3 = x->prev;
					HX_STACK_LINE(5995)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(5998)
			{
				HX_STACK_LINE(5999)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(6000)
				if (((par1 == null()))){
					HX_STACK_LINE(6000)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(6003)
					if (((par1->prev == g))){
						HX_STACK_LINE(6003)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(6004)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(6005)
				if (((n2 != null()))){
					HX_STACK_LINE(6005)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(6007)
			{
				HX_STACK_LINE(6008)
				n1->prev = t1;
				HX_STACK_LINE(6009)
				if (((t1 != null()))){
					HX_STACK_LINE(6009)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(6011)
			{
				HX_STACK_LINE(6012)
				n1->next = t2;
				HX_STACK_LINE(6013)
				if (((t2 != null()))){
					HX_STACK_LINE(6013)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(6015)
			{
				HX_STACK_LINE(6016)
				n2->prev = n1;
				HX_STACK_LINE(6017)
				if (((n1 != null()))){
					HX_STACK_LINE(6017)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(6019)
			{
				HX_STACK_LINE(6020)
				n2->next = n3;
				HX_STACK_LINE(6021)
				if (((n3 != null()))){
					HX_STACK_LINE(6021)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(6023)
			{
				HX_STACK_LINE(6024)
				n3->prev = t3;
				HX_STACK_LINE(6025)
				if (((t3 != null()))){
					HX_STACK_LINE(6025)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(6027)
			{
				HX_STACK_LINE(6028)
				n3->next = t4;
				HX_STACK_LINE(6029)
				if (((t4 != null()))){
					HX_STACK_LINE(6029)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(6031)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(6032)
			n1->colour = (int)1;
			HX_STACK_LINE(6033)
			n3->colour = (int)1;
			HX_STACK_LINE(6034)
			if (((n2 == this->parent))){
				HX_STACK_LINE(6034)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(6035)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(6036)
					x = n2;
					HX_STACK_LINE(6037)
					continue;
				}
			}
			HX_STACK_LINE(6039)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::__fix_neg_red","zpp_nape/util/RBTree.hx",5886);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(5887)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5888);
				{
					HX_STACK_LINE(5889)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5890)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5891)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5892)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5893)
					nl->colour = (int)0;
					HX_STACK_LINE(5894)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5895)
					{
						HX_STACK_LINE(5896)
						negred->next = trl;
						HX_STACK_LINE(5897)
						if (((trl != null()))){
							HX_STACK_LINE(5897)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5899)
					{
						HX_STACK_LINE(5900)
						::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5901)
						parent->data = nr->data;
						HX_STACK_LINE(5902)
						nr->data = t;
					}
					HX_STACK_LINE(5904)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(5904)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5905)
					{
						HX_STACK_LINE(5906)
						nr->prev = trr;
						HX_STACK_LINE(5907)
						if (((trr != null()))){
							HX_STACK_LINE(5907)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5909)
					{
						HX_STACK_LINE(5910)
						nr->next = parent->next;
						HX_STACK_LINE(5911)
						if (((parent->next != null()))){
							HX_STACK_LINE(5911)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(5913)
					{
						HX_STACK_LINE(5914)
						parent->next = nr;
						HX_STACK_LINE(5915)
						if (((nr != null()))){
							HX_STACK_LINE(5915)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5917)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5919);
				{
					HX_STACK_LINE(5920)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5921)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5922)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5923)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5924)
					nl->colour = (int)0;
					HX_STACK_LINE(5925)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5926)
					{
						HX_STACK_LINE(5927)
						negred->prev = trl;
						HX_STACK_LINE(5928)
						if (((trl != null()))){
							HX_STACK_LINE(5928)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5930)
					{
						HX_STACK_LINE(5931)
						::zpp_nape::geom::ZPP_SimpleEvent t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5932)
						parent->data = nr->data;
						HX_STACK_LINE(5933)
						nr->data = t;
					}
					HX_STACK_LINE(5935)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(5935)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5936)
					{
						HX_STACK_LINE(5937)
						nr->next = trr;
						HX_STACK_LINE(5938)
						if (((trr != null()))){
							HX_STACK_LINE(5938)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5940)
					{
						HX_STACK_LINE(5941)
						nr->prev = parent->prev;
						HX_STACK_LINE(5942)
						if (((parent->prev != null()))){
							HX_STACK_LINE(5942)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(5944)
					{
						HX_STACK_LINE(5945)
						parent->prev = nr;
						HX_STACK_LINE(5946)
						if (((nr != null()))){
							HX_STACK_LINE(5946)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5948)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(5888)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5950)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(5950)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(5951)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(5951)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear_node","zpp_nape/util/RBTree.hx",5851);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(5852)
	{
	}
	HX_STACK_LINE(5860)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(5861)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5862)
	if (((ret != null()))){
		HX_STACK_LINE(5863)
		if (((node == ret->prev))){
			HX_STACK_LINE(5863)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(5864)
			ret->next = null();
		}
		HX_STACK_LINE(5865)
		node->parent = null();
	}
	HX_STACK_LINE(5867)
	{
		HX_STACK_LINE(5868)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5869)
		{
		}
		HX_STACK_LINE(5877)
		{
			HX_STACK_LINE(5877)
			o->data = null();
			HX_STACK_LINE(5877)
			o->lt = null();
			HX_STACK_LINE(5877)
			o->swapped = null();
		}
		HX_STACK_LINE(5878)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
		HX_STACK_LINE(5879)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5884)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleEvent_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear_with","zpp_nape/util/RBTree.hx",5842);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(5842)
		if (((this->parent == null()))){
			HX_STACK_LINE(5843)
			return null();
		}
		else{
			HX_STACK_LINE(5845)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5846)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5846);
						{
							HX_STACK_LINE(5846)
							{
							}
							HX_STACK_LINE(5846)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(5846)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5846)
							if (((ret != null()))){
								HX_STACK_LINE(5846)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5846)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5846)
									ret->next = null();
								}
								HX_STACK_LINE(5846)
								cur->parent = null();
							}
							HX_STACK_LINE(5846)
							{
								HX_STACK_LINE(5846)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5846)
								{
								}
								HX_STACK_LINE(5846)
								{
									HX_STACK_LINE(5846)
									o->data = null();
									HX_STACK_LINE(5846)
									o->lt = null();
									HX_STACK_LINE(5846)
									o->swapped = null();
								}
								HX_STACK_LINE(5846)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(5846)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5846)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5846)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(5847)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::clear","zpp_nape/util/RBTree.hx",5841);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5841)
		if (((this->parent == null()))){
			HX_STACK_LINE(5841)
			Dynamic();
		}
		else{
			HX_STACK_LINE(5841)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5841)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5841);
						{
							HX_STACK_LINE(5841)
							{
							}
							HX_STACK_LINE(5841)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5841)
							if (((ret != null()))){
								HX_STACK_LINE(5841)
								if (((cur == ret->prev))){
									HX_STACK_LINE(5841)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(5841)
									ret->next = null();
								}
								HX_STACK_LINE(5841)
								cur->parent = null();
							}
							HX_STACK_LINE(5841)
							{
								HX_STACK_LINE(5841)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(5841)
								{
								}
								HX_STACK_LINE(5841)
								{
									HX_STACK_LINE(5841)
									o->data = null();
									HX_STACK_LINE(5841)
									o->lt = null();
									HX_STACK_LINE(5841)
									o->swapped = null();
								}
								HX_STACK_LINE(5841)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
								HX_STACK_LINE(5841)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
							}
							HX_STACK_LINE(5841)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5841)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(5841)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::remove_node","zpp_nape/util/RBTree.hx",5721);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(5722)
		{
		}
		HX_STACK_LINE(5730)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(5731)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(5732)
			while(((sm->prev != null()))){
				HX_STACK_LINE(5732)
				sm = sm->prev;
			}
			HX_STACK_LINE(5733)
			{
				HX_STACK_LINE(5734)
				::zpp_nape::geom::ZPP_SimpleEvent t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(5735)
				cur->data = sm->data;
				HX_STACK_LINE(5736)
				sm->data = t;
			}
			HX_STACK_LINE(5738)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(5738)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(5739)
			cur = sm;
		}
		HX_STACK_LINE(5741)
		{
		}
		HX_STACK_LINE(5749)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5750)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(5750)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(5751)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5752)
				if (((cur->parent != null()))){
					HX_STACK_LINE(5753)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(5754)
					while((true)){
						HX_STACK_LINE(5755)
						(parent->colour)++;
						HX_STACK_LINE(5756)
						(parent->prev->colour)--;
						HX_STACK_LINE(5757)
						(parent->next->colour)--;
						HX_STACK_LINE(5758)
						{
							HX_STACK_LINE(5759)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5760)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(5761)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(5762)
								break;
							}
							else{
								HX_STACK_LINE(5764)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(5765)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(5767)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(5768)
										break;
									}
									HX_STACK_LINE(5771)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(5773)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(5774)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(5779)
						{
							HX_STACK_LINE(5780)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(5781)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(5782)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(5783)
								break;
							}
							else{
								HX_STACK_LINE(5785)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(5786)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(5788)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(5789)
										break;
									}
									HX_STACK_LINE(5792)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(5794)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(5795)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(5800)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(5800)
							if (((parent->parent == null()))){
								HX_STACK_LINE(5801)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(5805)
								parent = parent->parent;
								HX_STACK_LINE(5806)
								continue;
							}
						}
						HX_STACK_LINE(5809)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(5813)
		{
			HX_STACK_LINE(5814)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5815)
			if (((par == null()))){
				HX_STACK_LINE(5815)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(5818)
				if (((par->prev == cur))){
					HX_STACK_LINE(5818)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(5819)
					par->next = child;
				}
			}
			HX_STACK_LINE(5820)
			if (((child != null()))){
				HX_STACK_LINE(5820)
				child->parent = par;
			}
		}
		HX_STACK_LINE(5822)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(5823)
		{
			HX_STACK_LINE(5824)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5825)
			{
			}
			HX_STACK_LINE(5833)
			{
				HX_STACK_LINE(5833)
				o->data = null();
				HX_STACK_LINE(5833)
				o->lt = null();
				HX_STACK_LINE(5833)
				o->swapped = null();
			}
			HX_STACK_LINE(5834)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;
			HX_STACK_LINE(5835)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::predecessor","zpp_nape/util/RBTree.hx",5709);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5710)
	{
	}
	HX_STACK_LINE(5718)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5719)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(null()) : ::zpp_nape::geom::ZPP_SimpleEvent(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::successor","zpp_nape/util/RBTree.hx",5697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5698)
	{
	}
	HX_STACK_LINE(5706)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(5707)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleEvent(null()) : ::zpp_nape::geom::ZPP_SimpleEvent(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::predecessor_node","zpp_nape/util/RBTree.hx",5674);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(5675)
	{
	}
	HX_STACK_LINE(5683)
	if (((cur->prev != null()))){
		HX_STACK_LINE(5684)
		cur = cur->prev;
		HX_STACK_LINE(5685)
		while(((cur->next != null()))){
			HX_STACK_LINE(5685)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(5688)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5689)
		cur = cur->parent;
		HX_STACK_LINE(5690)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(5691)
			pre = cur;
			HX_STACK_LINE(5692)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5695)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::successor_node","zpp_nape/util/RBTree.hx",5651);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(5652)
	{
	}
	HX_STACK_LINE(5660)
	if (((cur->next != null()))){
		HX_STACK_LINE(5661)
		cur = cur->next;
		HX_STACK_LINE(5662)
		while(((cur->prev != null()))){
			HX_STACK_LINE(5662)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(5665)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5666)
		cur = cur->parent;
		HX_STACK_LINE(5667)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(5668)
			pre = cur;
			HX_STACK_LINE(5669)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(5672)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::remove( ::zpp_nape::geom::ZPP_SimpleEvent obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::remove","zpp_nape/util/RBTree.hx",5639);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5640)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(5641)
		{
		}
		HX_STACK_LINE(5649)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::pop_front","zpp_nape/util/RBTree.hx",5624);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5625)
	{
	}
	HX_STACK_LINE(5633)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5634)
	while(((cur->prev != null()))){
		HX_STACK_LINE(5634)
		cur = cur->prev;
	}
	HX_STACK_LINE(5635)
	::zpp_nape::geom::ZPP_SimpleEvent ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5636)
	this->remove_node(cur);
	HX_STACK_LINE(5637)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::first","zpp_nape/util/RBTree.hx",5611);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5612)
	{
	}
	HX_STACK_LINE(5620)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5621)
	while(((cur->prev != null()))){
		HX_STACK_LINE(5621)
		cur = cur->prev;
	}
	HX_STACK_LINE(5622)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,first,return )

::zpp_nape::geom::ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::lower_bound","zpp_nape/util/RBTree.hx",5574);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleEvent Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent_obj *__this,::zpp_nape::geom::ZPP_SimpleEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5575);
			{
				HX_STACK_LINE(5576)
				::zpp_nape::geom::ZPP_SimpleEvent ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5577)
				{
					HX_STACK_LINE(5578)
					{
					}
					HX_STACK_LINE(5586)
					if ((!(__this->empty()))){
						HX_STACK_LINE(5587)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(5588)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(5588)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(5589)
						while(((set_ite != null()))){
							HX_STACK_LINE(5590)
							::zpp_nape::geom::ZPP_SimpleEvent elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(5591)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(5593)
								ret = elt;
								HX_STACK_LINE(5594)
								break;
							}
							HX_STACK_LINE(5597)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(5598)
								set_ite = set_ite->next;
								HX_STACK_LINE(5599)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(5599)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(5602)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(5602)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(5603)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(5608)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5574)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::find_weak","zpp_nape/util/RBTree.hx",5565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5566)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5567)
	while(((cur != null()))){
		HX_STACK_LINE(5567)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(5568)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5569)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(5569)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(5570)
				break;
			}
		}
	}
	HX_STACK_LINE(5572)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::has_weak","zpp_nape/util/RBTree.hx",5565);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5565)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::find( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::find","zpp_nape/util/RBTree.hx",5557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5558)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5559)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(5559)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(5560)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(5561)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(5563)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,find,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::has( ::zpp_nape::geom::ZPP_SimpleEvent obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::has","zpp_nape/util/RBTree.hx",5557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5557)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleEvent_obj,has,return )

int ZPP_Set_ZPP_SimpleEvent_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::size","zpp_nape/util/RBTree.hx",5527);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5528)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5529)
	{
		HX_STACK_LINE(5530)
		{
		}
		HX_STACK_LINE(5538)
		if ((!(this->empty()))){
			HX_STACK_LINE(5539)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5540)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(5540)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5541)
			while(((set_ite != null()))){
				HX_STACK_LINE(5542)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5543)
				(ret)++;
				HX_STACK_LINE(5544)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(5545)
					set_ite = set_ite->next;
					HX_STACK_LINE(5546)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(5546)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5549)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(5549)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5550)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5555)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,size,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::singular","zpp_nape/util/RBTree.hx",5527);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5527)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,singular,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::empty","zpp_nape/util/RBTree.hx",5527);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5527)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,empty,return )

bool ZPP_Set_ZPP_SimpleEvent_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::verify","zpp_nape/util/RBTree.hx",5462);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5463)
	{
		HX_STACK_LINE(5464)
		{
		}
		HX_STACK_LINE(5472)
		if ((!(this->empty()))){
			HX_STACK_LINE(5473)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(5474)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(5474)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(5475)
			while(((set_ite != null()))){
				HX_STACK_LINE(5476)
				::zpp_nape::geom::ZPP_SimpleEvent i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5477)
				{
					HX_STACK_LINE(5478)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(5479)
					{
						HX_STACK_LINE(5480)
						{
						}
						HX_STACK_LINE(5488)
						if ((!(this->empty()))){
							HX_STACK_LINE(5489)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(5490)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(5490)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(5491)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(5492)
								::zpp_nape::geom::ZPP_SimpleEvent j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(5493)
								if ((!(prei))){
									HX_STACK_LINE(5494)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(5495)
										return false;
									}
								}
								else{
									HX_STACK_LINE(5497)
									if (((i == j))){
										HX_STACK_LINE(5497)
										prei = false;
									}
									else{
										HX_STACK_LINE(5498)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(5499)
											return false;
										}
									}
								}
								HX_STACK_LINE(5502)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(5503)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(5504)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(5504)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(5507)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(5507)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(5508)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(5514)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(5515)
					set_ite = set_ite->next;
					HX_STACK_LINE(5516)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(5516)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(5519)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(5519)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(5520)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(5525)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,verify,return )

Void ZPP_Set_ZPP_SimpleEvent_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::alloc","zpp_nape/util/RBTree.hx",5453);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleEvent_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleEvent::free","zpp_nape/util/RBTree.hx",5446);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5447)
		this->data = null();
		HX_STACK_LINE(5448)
		this->lt = null();
		HX_STACK_LINE(5449)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleEvent_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool;


ZPP_Set_ZPP_SimpleEvent_obj::ZPP_Set_ZPP_SimpleEvent_obj()
{
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleEvent);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleEvent >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleEvent_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleEvent_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleEvent_obj::__mClass;

void ZPP_Set_ZPP_SimpleEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleEvent"), hx::TCanCast< ZPP_Set_ZPP_SimpleEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleEvent_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
