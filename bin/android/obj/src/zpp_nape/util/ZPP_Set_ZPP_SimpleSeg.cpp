#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleSeg
#include <zpp_nape/geom/ZPP_SimpleSeg.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleSeg
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleSeg.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleSeg_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::new","zpp_nape/util/RBTree.hx",4545);
{
	HX_STACK_LINE(4586)
	this->colour = (int)0;
	HX_STACK_LINE(4585)
	this->parent = null();
	HX_STACK_LINE(4584)
	this->next = null();
	HX_STACK_LINE(4583)
	this->prev = null();
	HX_STACK_LINE(4582)
	this->data = null();
	HX_STACK_LINE(4581)
	this->swapped = null();
	HX_STACK_LINE(4580)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleSeg_obj::~ZPP_Set_ZPP_SimpleSeg_obj() { }

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleSeg_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > ZPP_Set_ZPP_SimpleSeg_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > result = new ZPP_Set_ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleSeg_obj > result = new ZPP_Set_ZPP_SimpleSeg_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::insert","zpp_nape/util/RBTree.hx",5352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5353)
	{
	}
	HX_STACK_LINE(5361)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5362)
	{
		HX_STACK_LINE(5363)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
			HX_STACK_LINE(5363)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
		}
		else{
			HX_STACK_LINE(5370)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(5371)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
			HX_STACK_LINE(5372)
			x->next = null();
		}
		HX_STACK_LINE(5377)
		Dynamic();
	}
	HX_STACK_LINE(5379)
	x->data = obj;
	HX_STACK_LINE(5380)
	if (((this->parent == null()))){
		HX_STACK_LINE(5380)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5382)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5383)
		while((true)){
			HX_STACK_LINE(5383)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(5384)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5386)
					cur->prev = x;
					HX_STACK_LINE(5387)
					x->parent = cur;
					HX_STACK_LINE(5388)
					break;
				}
				else{
					HX_STACK_LINE(5390)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5392)
				if (((cur->next == null()))){
					HX_STACK_LINE(5394)
					cur->next = x;
					HX_STACK_LINE(5395)
					x->parent = cur;
					HX_STACK_LINE(5396)
					break;
				}
				else{
					HX_STACK_LINE(5398)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(5402)
	if (((x->parent == null()))){
		HX_STACK_LINE(5402)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(5404)
		x->colour = (int)0;
		HX_STACK_LINE(5405)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(5405)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(5407)
	{
	}
	HX_STACK_LINE(5415)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::try_insert","zpp_nape/util/RBTree.hx",5260);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5261)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5262)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5263)
	if (((this->parent == null()))){
		HX_STACK_LINE(5264)
		{
			HX_STACK_LINE(5265)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
				HX_STACK_LINE(5265)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
			}
			else{
				HX_STACK_LINE(5272)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
				HX_STACK_LINE(5273)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5274)
				x->next = null();
			}
			HX_STACK_LINE(5279)
			Dynamic();
		}
		HX_STACK_LINE(5281)
		x->data = obj;
		HX_STACK_LINE(5282)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5285)
		cur = this->parent;
		HX_STACK_LINE(5286)
		while((true)){
			HX_STACK_LINE(5286)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(5287)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5289)
					{
						HX_STACK_LINE(5290)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
							HX_STACK_LINE(5290)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
						}
						else{
							HX_STACK_LINE(5297)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
							HX_STACK_LINE(5298)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5299)
							x->next = null();
						}
						HX_STACK_LINE(5304)
						Dynamic();
					}
					HX_STACK_LINE(5306)
					x->data = obj;
					HX_STACK_LINE(5307)
					cur->prev = x;
					HX_STACK_LINE(5308)
					x->parent = cur;
					HX_STACK_LINE(5309)
					break;
				}
				else{
					HX_STACK_LINE(5311)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5313)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(5313)
					if (((cur->next == null()))){
						HX_STACK_LINE(5315)
						{
							HX_STACK_LINE(5316)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
								HX_STACK_LINE(5316)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
							}
							else{
								HX_STACK_LINE(5323)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5324)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5325)
								x->next = null();
							}
							HX_STACK_LINE(5330)
							Dynamic();
						}
						HX_STACK_LINE(5332)
						x->data = obj;
						HX_STACK_LINE(5333)
						cur->next = x;
						HX_STACK_LINE(5334)
						x->parent = cur;
						HX_STACK_LINE(5335)
						break;
					}
					else{
						HX_STACK_LINE(5337)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5339)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5342)
	if (((x == null()))){
		HX_STACK_LINE(5342)
		return cur;
	}
	else{
		HX_STACK_LINE(5344)
		if (((x->parent == null()))){
			HX_STACK_LINE(5344)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5346)
			x->colour = (int)0;
			HX_STACK_LINE(5347)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(5347)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(5349)
		return x;
	}
	HX_STACK_LINE(5342)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::try_insert_bool","zpp_nape/util/RBTree.hx",5168);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5169)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(5170)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5171)
	if (((this->parent == null()))){
		HX_STACK_LINE(5172)
		{
			HX_STACK_LINE(5173)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
				HX_STACK_LINE(5173)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
			}
			else{
				HX_STACK_LINE(5180)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
				HX_STACK_LINE(5181)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
				HX_STACK_LINE(5182)
				x->next = null();
			}
			HX_STACK_LINE(5187)
			Dynamic();
		}
		HX_STACK_LINE(5189)
		x->data = obj;
		HX_STACK_LINE(5190)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(5193)
		cur = this->parent;
		HX_STACK_LINE(5194)
		while((true)){
			HX_STACK_LINE(5194)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(5195)
				if (((cur->prev == null()))){
					HX_STACK_LINE(5197)
					{
						HX_STACK_LINE(5198)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
							HX_STACK_LINE(5198)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
						}
						else{
							HX_STACK_LINE(5205)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
							HX_STACK_LINE(5206)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
							HX_STACK_LINE(5207)
							x->next = null();
						}
						HX_STACK_LINE(5212)
						Dynamic();
					}
					HX_STACK_LINE(5214)
					x->data = obj;
					HX_STACK_LINE(5215)
					cur->prev = x;
					HX_STACK_LINE(5216)
					x->parent = cur;
					HX_STACK_LINE(5217)
					break;
				}
				else{
					HX_STACK_LINE(5219)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(5221)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(5221)
					if (((cur->next == null()))){
						HX_STACK_LINE(5223)
						{
							HX_STACK_LINE(5224)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool == null()))){
								HX_STACK_LINE(5224)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::__new();
							}
							else{
								HX_STACK_LINE(5231)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(5232)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = x->next;
								HX_STACK_LINE(5233)
								x->next = null();
							}
							HX_STACK_LINE(5238)
							Dynamic();
						}
						HX_STACK_LINE(5240)
						x->data = obj;
						HX_STACK_LINE(5241)
						cur->next = x;
						HX_STACK_LINE(5242)
						x->parent = cur;
						HX_STACK_LINE(5243)
						break;
					}
					else{
						HX_STACK_LINE(5245)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(5247)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(5250)
	if (((x == null()))){
		HX_STACK_LINE(5250)
		return false;
	}
	else{
		HX_STACK_LINE(5252)
		if (((x->parent == null()))){
			HX_STACK_LINE(5252)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(5254)
			x->colour = (int)0;
			HX_STACK_LINE(5255)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(5255)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(5257)
		return true;
	}
	HX_STACK_LINE(5250)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::__fix_dbl_red","zpp_nape/util/RBTree.hx",5079);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5079)
		while((true)){
			HX_STACK_LINE(5081)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(5082)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(5083)
			if (((g == null()))){
				HX_STACK_LINE(5084)
				par->colour = (int)1;
				HX_STACK_LINE(5085)
				break;
			}
			HX_STACK_LINE(5087)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(5088)
			if (((par == g->prev))){
				HX_STACK_LINE(5089)
				n3 = g;
				HX_STACK_LINE(5090)
				t4 = g->next;
				HX_STACK_LINE(5091)
				if (((x == par->prev))){
					HX_STACK_LINE(5092)
					n1 = x;
					HX_STACK_LINE(5093)
					n2 = par;
					HX_STACK_LINE(5094)
					t1 = x->prev;
					HX_STACK_LINE(5095)
					t2 = x->next;
					HX_STACK_LINE(5096)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(5099)
					n1 = par;
					HX_STACK_LINE(5100)
					n2 = x;
					HX_STACK_LINE(5101)
					t1 = par->prev;
					HX_STACK_LINE(5102)
					t2 = x->prev;
					HX_STACK_LINE(5103)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(5107)
				n1 = g;
				HX_STACK_LINE(5108)
				t1 = g->prev;
				HX_STACK_LINE(5109)
				if (((x == par->prev))){
					HX_STACK_LINE(5110)
					n2 = x;
					HX_STACK_LINE(5111)
					n3 = par;
					HX_STACK_LINE(5112)
					t2 = x->prev;
					HX_STACK_LINE(5113)
					t3 = x->next;
					HX_STACK_LINE(5114)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(5117)
					n2 = par;
					HX_STACK_LINE(5118)
					n3 = x;
					HX_STACK_LINE(5119)
					t2 = par->prev;
					HX_STACK_LINE(5120)
					t3 = x->prev;
					HX_STACK_LINE(5121)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(5124)
			{
				HX_STACK_LINE(5125)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(5126)
				if (((par1 == null()))){
					HX_STACK_LINE(5126)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(5129)
					if (((par1->prev == g))){
						HX_STACK_LINE(5129)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(5130)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(5131)
				if (((n2 != null()))){
					HX_STACK_LINE(5131)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(5133)
			{
				HX_STACK_LINE(5134)
				n1->prev = t1;
				HX_STACK_LINE(5135)
				if (((t1 != null()))){
					HX_STACK_LINE(5135)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(5137)
			{
				HX_STACK_LINE(5138)
				n1->next = t2;
				HX_STACK_LINE(5139)
				if (((t2 != null()))){
					HX_STACK_LINE(5139)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(5141)
			{
				HX_STACK_LINE(5142)
				n2->prev = n1;
				HX_STACK_LINE(5143)
				if (((n1 != null()))){
					HX_STACK_LINE(5143)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(5145)
			{
				HX_STACK_LINE(5146)
				n2->next = n3;
				HX_STACK_LINE(5147)
				if (((n3 != null()))){
					HX_STACK_LINE(5147)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(5149)
			{
				HX_STACK_LINE(5150)
				n3->prev = t3;
				HX_STACK_LINE(5151)
				if (((t3 != null()))){
					HX_STACK_LINE(5151)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(5153)
			{
				HX_STACK_LINE(5154)
				n3->next = t4;
				HX_STACK_LINE(5155)
				if (((t4 != null()))){
					HX_STACK_LINE(5155)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(5157)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(5158)
			n1->colour = (int)1;
			HX_STACK_LINE(5159)
			n3->colour = (int)1;
			HX_STACK_LINE(5160)
			if (((n2 == this->parent))){
				HX_STACK_LINE(5160)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(5161)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(5162)
					x = n2;
					HX_STACK_LINE(5163)
					continue;
				}
			}
			HX_STACK_LINE(5165)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::__fix_neg_red","zpp_nape/util/RBTree.hx",5012);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(5013)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5014);
				{
					HX_STACK_LINE(5015)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5016)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5017)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5018)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5019)
					nl->colour = (int)0;
					HX_STACK_LINE(5020)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5021)
					{
						HX_STACK_LINE(5022)
						negred->next = trl;
						HX_STACK_LINE(5023)
						if (((trl != null()))){
							HX_STACK_LINE(5023)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5025)
					{
						HX_STACK_LINE(5026)
						::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5027)
						parent->data = nr->data;
						HX_STACK_LINE(5028)
						nr->data = t;
					}
					HX_STACK_LINE(5030)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(5030)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5031)
					{
						HX_STACK_LINE(5032)
						nr->prev = trr;
						HX_STACK_LINE(5033)
						if (((trr != null()))){
							HX_STACK_LINE(5033)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5035)
					{
						HX_STACK_LINE(5036)
						nr->next = parent->next;
						HX_STACK_LINE(5037)
						if (((parent->next != null()))){
							HX_STACK_LINE(5037)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(5039)
					{
						HX_STACK_LINE(5040)
						parent->next = nr;
						HX_STACK_LINE(5041)
						if (((nr != null()))){
							HX_STACK_LINE(5041)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5043)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",5045);
				{
					HX_STACK_LINE(5046)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(5047)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(5048)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(5049)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(5050)
					nl->colour = (int)0;
					HX_STACK_LINE(5051)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(5052)
					{
						HX_STACK_LINE(5053)
						negred->prev = trl;
						HX_STACK_LINE(5054)
						if (((trl != null()))){
							HX_STACK_LINE(5054)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(5056)
					{
						HX_STACK_LINE(5057)
						::zpp_nape::geom::ZPP_SimpleSeg t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(5058)
						parent->data = nr->data;
						HX_STACK_LINE(5059)
						nr->data = t;
					}
					HX_STACK_LINE(5061)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(5061)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(5062)
					{
						HX_STACK_LINE(5063)
						nr->next = trr;
						HX_STACK_LINE(5064)
						if (((trr != null()))){
							HX_STACK_LINE(5064)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(5066)
					{
						HX_STACK_LINE(5067)
						nr->prev = parent->prev;
						HX_STACK_LINE(5068)
						if (((parent->prev != null()))){
							HX_STACK_LINE(5068)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(5070)
					{
						HX_STACK_LINE(5071)
						parent->prev = nr;
						HX_STACK_LINE(5072)
						if (((nr != null()))){
							HX_STACK_LINE(5072)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(5074)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(5014)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(5076)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(5076)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(5077)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(5077)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear_node","zpp_nape/util/RBTree.hx",4977);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(4978)
	{
	}
	HX_STACK_LINE(4986)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(4987)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4988)
	if (((ret != null()))){
		HX_STACK_LINE(4989)
		if (((node == ret->prev))){
			HX_STACK_LINE(4989)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(4990)
			ret->next = null();
		}
		HX_STACK_LINE(4991)
		node->parent = null();
	}
	HX_STACK_LINE(4993)
	{
		HX_STACK_LINE(4994)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4995)
		{
		}
		HX_STACK_LINE(5003)
		{
			HX_STACK_LINE(5003)
			o->data = null();
			HX_STACK_LINE(5003)
			o->lt = null();
			HX_STACK_LINE(5003)
			o->swapped = null();
		}
		HX_STACK_LINE(5004)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
		HX_STACK_LINE(5005)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5010)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleSeg_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear_with","zpp_nape/util/RBTree.hx",4968);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(4968)
		if (((this->parent == null()))){
			HX_STACK_LINE(4969)
			return null();
		}
		else{
			HX_STACK_LINE(4971)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4972)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4972);
						{
							HX_STACK_LINE(4972)
							{
							}
							HX_STACK_LINE(4972)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(4972)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4972)
							if (((ret != null()))){
								HX_STACK_LINE(4972)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4972)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4972)
									ret->next = null();
								}
								HX_STACK_LINE(4972)
								cur->parent = null();
							}
							HX_STACK_LINE(4972)
							{
								HX_STACK_LINE(4972)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4972)
								{
								}
								HX_STACK_LINE(4972)
								{
									HX_STACK_LINE(4972)
									o->data = null();
									HX_STACK_LINE(4972)
									o->lt = null();
									HX_STACK_LINE(4972)
									o->swapped = null();
								}
								HX_STACK_LINE(4972)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(4972)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4972)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4972)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(4973)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::clear","zpp_nape/util/RBTree.hx",4967);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4967)
		if (((this->parent == null()))){
			HX_STACK_LINE(4967)
			Dynamic();
		}
		else{
			HX_STACK_LINE(4967)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4967)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4967);
						{
							HX_STACK_LINE(4967)
							{
							}
							HX_STACK_LINE(4967)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4967)
							if (((ret != null()))){
								HX_STACK_LINE(4967)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4967)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4967)
									ret->next = null();
								}
								HX_STACK_LINE(4967)
								cur->parent = null();
							}
							HX_STACK_LINE(4967)
							{
								HX_STACK_LINE(4967)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4967)
								{
								}
								HX_STACK_LINE(4967)
								{
									HX_STACK_LINE(4967)
									o->data = null();
									HX_STACK_LINE(4967)
									o->lt = null();
									HX_STACK_LINE(4967)
									o->swapped = null();
								}
								HX_STACK_LINE(4967)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
								HX_STACK_LINE(4967)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4967)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4967)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(4967)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::remove_node","zpp_nape/util/RBTree.hx",4847);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(4848)
		{
		}
		HX_STACK_LINE(4856)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(4857)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(4858)
			while(((sm->prev != null()))){
				HX_STACK_LINE(4858)
				sm = sm->prev;
			}
			HX_STACK_LINE(4859)
			{
				HX_STACK_LINE(4860)
				::zpp_nape::geom::ZPP_SimpleSeg t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(4861)
				cur->data = sm->data;
				HX_STACK_LINE(4862)
				sm->data = t;
			}
			HX_STACK_LINE(4864)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(4864)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(4865)
			cur = sm;
		}
		HX_STACK_LINE(4867)
		{
		}
		HX_STACK_LINE(4875)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4876)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(4876)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(4877)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4878)
				if (((cur->parent != null()))){
					HX_STACK_LINE(4879)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4880)
					while((true)){
						HX_STACK_LINE(4881)
						(parent->colour)++;
						HX_STACK_LINE(4882)
						(parent->prev->colour)--;
						HX_STACK_LINE(4883)
						(parent->next->colour)--;
						HX_STACK_LINE(4884)
						{
							HX_STACK_LINE(4885)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4886)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4887)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4888)
								break;
							}
							else{
								HX_STACK_LINE(4890)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4891)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4893)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4894)
										break;
									}
									HX_STACK_LINE(4897)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4899)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4900)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4905)
						{
							HX_STACK_LINE(4906)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4907)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4908)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4909)
								break;
							}
							else{
								HX_STACK_LINE(4911)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4912)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4914)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4915)
										break;
									}
									HX_STACK_LINE(4918)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4920)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4921)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4926)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(4926)
							if (((parent->parent == null()))){
								HX_STACK_LINE(4927)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(4931)
								parent = parent->parent;
								HX_STACK_LINE(4932)
								continue;
							}
						}
						HX_STACK_LINE(4935)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(4939)
		{
			HX_STACK_LINE(4940)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4941)
			if (((par == null()))){
				HX_STACK_LINE(4941)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(4944)
				if (((par->prev == cur))){
					HX_STACK_LINE(4944)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(4945)
					par->next = child;
				}
			}
			HX_STACK_LINE(4946)
			if (((child != null()))){
				HX_STACK_LINE(4946)
				child->parent = par;
			}
		}
		HX_STACK_LINE(4948)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(4949)
		{
			HX_STACK_LINE(4950)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4951)
			{
			}
			HX_STACK_LINE(4959)
			{
				HX_STACK_LINE(4959)
				o->data = null();
				HX_STACK_LINE(4959)
				o->lt = null();
				HX_STACK_LINE(4959)
				o->swapped = null();
			}
			HX_STACK_LINE(4960)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;
			HX_STACK_LINE(4961)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::predecessor","zpp_nape/util/RBTree.hx",4835);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4836)
	{
	}
	HX_STACK_LINE(4844)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4845)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleSeg(null()) : ::zpp_nape::geom::ZPP_SimpleSeg(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::successor","zpp_nape/util/RBTree.hx",4823);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4824)
	{
	}
	HX_STACK_LINE(4832)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(4833)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleSeg(null()) : ::zpp_nape::geom::ZPP_SimpleSeg(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::predecessor_node","zpp_nape/util/RBTree.hx",4800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(4801)
	{
	}
	HX_STACK_LINE(4809)
	if (((cur->prev != null()))){
		HX_STACK_LINE(4810)
		cur = cur->prev;
		HX_STACK_LINE(4811)
		while(((cur->next != null()))){
			HX_STACK_LINE(4811)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(4814)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4815)
		cur = cur->parent;
		HX_STACK_LINE(4816)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(4817)
			pre = cur;
			HX_STACK_LINE(4818)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4821)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::successor_node","zpp_nape/util/RBTree.hx",4777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(4778)
	{
	}
	HX_STACK_LINE(4786)
	if (((cur->next != null()))){
		HX_STACK_LINE(4787)
		cur = cur->next;
		HX_STACK_LINE(4788)
		while(((cur->prev != null()))){
			HX_STACK_LINE(4788)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(4791)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4792)
		cur = cur->parent;
		HX_STACK_LINE(4793)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(4794)
			pre = cur;
			HX_STACK_LINE(4795)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(4798)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::remove( ::zpp_nape::geom::ZPP_SimpleSeg obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::remove","zpp_nape/util/RBTree.hx",4765);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4766)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(4767)
		{
		}
		HX_STACK_LINE(4775)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::pop_front","zpp_nape/util/RBTree.hx",4750);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4751)
	{
	}
	HX_STACK_LINE(4759)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4760)
	while(((cur->prev != null()))){
		HX_STACK_LINE(4760)
		cur = cur->prev;
	}
	HX_STACK_LINE(4761)
	::zpp_nape::geom::ZPP_SimpleSeg ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4762)
	this->remove_node(cur);
	HX_STACK_LINE(4763)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::first","zpp_nape/util/RBTree.hx",4737);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4738)
	{
	}
	HX_STACK_LINE(4746)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4747)
	while(((cur->prev != null()))){
		HX_STACK_LINE(4747)
		cur = cur->prev;
	}
	HX_STACK_LINE(4748)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,first,return )

::zpp_nape::geom::ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::lower_bound","zpp_nape/util/RBTree.hx",4700);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleSeg Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg_obj *__this,::zpp_nape::geom::ZPP_SimpleSeg &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4701);
			{
				HX_STACK_LINE(4702)
				::zpp_nape::geom::ZPP_SimpleSeg ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4703)
				{
					HX_STACK_LINE(4704)
					{
					}
					HX_STACK_LINE(4712)
					if ((!(__this->empty()))){
						HX_STACK_LINE(4713)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(4714)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(4714)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(4715)
						while(((set_ite != null()))){
							HX_STACK_LINE(4716)
							::zpp_nape::geom::ZPP_SimpleSeg elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(4717)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(4719)
								ret = elt;
								HX_STACK_LINE(4720)
								break;
							}
							HX_STACK_LINE(4723)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(4724)
								set_ite = set_ite->next;
								HX_STACK_LINE(4725)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(4725)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(4728)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(4728)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(4729)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(4734)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4700)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::find_weak","zpp_nape/util/RBTree.hx",4691);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4692)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4693)
	while(((cur != null()))){
		HX_STACK_LINE(4693)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(4694)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4695)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(4695)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(4696)
				break;
			}
		}
	}
	HX_STACK_LINE(4698)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::has_weak","zpp_nape/util/RBTree.hx",4691);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4691)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::find( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::find","zpp_nape/util/RBTree.hx",4683);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4684)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4685)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(4685)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(4686)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(4687)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(4689)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,find,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::has( ::zpp_nape::geom::ZPP_SimpleSeg obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::has","zpp_nape/util/RBTree.hx",4683);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4683)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleSeg_obj,has,return )

int ZPP_Set_ZPP_SimpleSeg_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::size","zpp_nape/util/RBTree.hx",4653);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4654)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4655)
	{
		HX_STACK_LINE(4656)
		{
		}
		HX_STACK_LINE(4664)
		if ((!(this->empty()))){
			HX_STACK_LINE(4665)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(4666)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(4666)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(4667)
			while(((set_ite != null()))){
				HX_STACK_LINE(4668)
				::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4669)
				(ret)++;
				HX_STACK_LINE(4670)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(4671)
					set_ite = set_ite->next;
					HX_STACK_LINE(4672)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(4672)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(4675)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(4675)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(4676)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(4681)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,size,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::singular","zpp_nape/util/RBTree.hx",4653);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4653)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,singular,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::empty","zpp_nape/util/RBTree.hx",4653);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4653)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,empty,return )

bool ZPP_Set_ZPP_SimpleSeg_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::verify","zpp_nape/util/RBTree.hx",4588);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4589)
	{
		HX_STACK_LINE(4590)
		{
		}
		HX_STACK_LINE(4598)
		if ((!(this->empty()))){
			HX_STACK_LINE(4599)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(4600)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(4600)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(4601)
			while(((set_ite != null()))){
				HX_STACK_LINE(4602)
				::zpp_nape::geom::ZPP_SimpleSeg i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4603)
				{
					HX_STACK_LINE(4604)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(4605)
					{
						HX_STACK_LINE(4606)
						{
						}
						HX_STACK_LINE(4614)
						if ((!(this->empty()))){
							HX_STACK_LINE(4615)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(4616)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(4616)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(4617)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(4618)
								::zpp_nape::geom::ZPP_SimpleSeg j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(4619)
								if ((!(prei))){
									HX_STACK_LINE(4620)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(4621)
										return false;
									}
								}
								else{
									HX_STACK_LINE(4623)
									if (((i == j))){
										HX_STACK_LINE(4623)
										prei = false;
									}
									else{
										HX_STACK_LINE(4624)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(4625)
											return false;
										}
									}
								}
								HX_STACK_LINE(4628)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(4629)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(4630)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(4630)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(4633)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(4633)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(4634)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(4640)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(4641)
					set_ite = set_ite->next;
					HX_STACK_LINE(4642)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(4642)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(4645)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(4645)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(4646)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(4651)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,verify,return )

Void ZPP_Set_ZPP_SimpleSeg_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::alloc","zpp_nape/util/RBTree.hx",4579);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleSeg_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleSeg::free","zpp_nape/util/RBTree.hx",4572);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4573)
		this->data = null();
		HX_STACK_LINE(4574)
		this->lt = null();
		HX_STACK_LINE(4575)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleSeg_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool;


ZPP_Set_ZPP_SimpleSeg_obj::ZPP_Set_ZPP_SimpleSeg_obj()
{
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleSeg);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleSeg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleSeg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleSeg >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleSeg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleSeg_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleSeg_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleSeg_obj::__mClass;

void ZPP_Set_ZPP_SimpleSeg_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleSeg"), hx::TCanCast< ZPP_Set_ZPP_SimpleSeg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleSeg_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
