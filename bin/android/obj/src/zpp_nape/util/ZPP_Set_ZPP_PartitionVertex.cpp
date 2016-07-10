#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionVertex
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::new","zpp_nape/util/RBTree.hx",1923);
{
	HX_STACK_LINE(1964)
	this->colour = (int)0;
	HX_STACK_LINE(1963)
	this->parent = null();
	HX_STACK_LINE(1962)
	this->next = null();
	HX_STACK_LINE(1961)
	this->prev = null();
	HX_STACK_LINE(1960)
	this->data = null();
	HX_STACK_LINE(1959)
	this->swapped = null();
	HX_STACK_LINE(1958)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_PartitionVertex_obj::~ZPP_Set_ZPP_PartitionVertex_obj() { }

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > ZPP_Set_ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > result = new ZPP_Set_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionVertex_obj > result = new ZPP_Set_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::insert","zpp_nape/util/RBTree.hx",2730);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2731)
	{
	}
	HX_STACK_LINE(2739)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2740)
	{
		HX_STACK_LINE(2741)
		if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
			HX_STACK_LINE(2741)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
		}
		else{
			HX_STACK_LINE(2748)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(2749)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
			HX_STACK_LINE(2750)
			x->next = null();
		}
		HX_STACK_LINE(2755)
		Dynamic();
	}
	HX_STACK_LINE(2757)
	x->data = obj;
	HX_STACK_LINE(2758)
	if (((this->parent == null()))){
		HX_STACK_LINE(2758)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2760)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(2761)
		while((true)){
			HX_STACK_LINE(2761)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(2762)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2764)
					cur->prev = x;
					HX_STACK_LINE(2765)
					x->parent = cur;
					HX_STACK_LINE(2766)
					break;
				}
				else{
					HX_STACK_LINE(2768)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2770)
				if (((cur->next == null()))){
					HX_STACK_LINE(2772)
					cur->next = x;
					HX_STACK_LINE(2773)
					x->parent = cur;
					HX_STACK_LINE(2774)
					break;
				}
				else{
					HX_STACK_LINE(2776)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(2780)
	if (((x->parent == null()))){
		HX_STACK_LINE(2780)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(2782)
		x->colour = (int)0;
		HX_STACK_LINE(2783)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(2783)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(2785)
	{
	}
	HX_STACK_LINE(2793)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::try_insert","zpp_nape/util/RBTree.hx",2638);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2639)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2640)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2641)
	if (((this->parent == null()))){
		HX_STACK_LINE(2642)
		{
			HX_STACK_LINE(2643)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
				HX_STACK_LINE(2643)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
			}
			else{
				HX_STACK_LINE(2650)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(2651)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(2652)
				x->next = null();
			}
			HX_STACK_LINE(2657)
			Dynamic();
		}
		HX_STACK_LINE(2659)
		x->data = obj;
		HX_STACK_LINE(2660)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2663)
		cur = this->parent;
		HX_STACK_LINE(2664)
		while((true)){
			HX_STACK_LINE(2664)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(2665)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2667)
					{
						HX_STACK_LINE(2668)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(2668)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
						}
						else{
							HX_STACK_LINE(2675)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(2676)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(2677)
							x->next = null();
						}
						HX_STACK_LINE(2682)
						Dynamic();
					}
					HX_STACK_LINE(2684)
					x->data = obj;
					HX_STACK_LINE(2685)
					cur->prev = x;
					HX_STACK_LINE(2686)
					x->parent = cur;
					HX_STACK_LINE(2687)
					break;
				}
				else{
					HX_STACK_LINE(2689)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2691)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(2691)
					if (((cur->next == null()))){
						HX_STACK_LINE(2693)
						{
							HX_STACK_LINE(2694)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
								HX_STACK_LINE(2694)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
							}
							else{
								HX_STACK_LINE(2701)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(2702)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(2703)
								x->next = null();
							}
							HX_STACK_LINE(2708)
							Dynamic();
						}
						HX_STACK_LINE(2710)
						x->data = obj;
						HX_STACK_LINE(2711)
						cur->next = x;
						HX_STACK_LINE(2712)
						x->parent = cur;
						HX_STACK_LINE(2713)
						break;
					}
					else{
						HX_STACK_LINE(2715)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2717)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2720)
	if (((x == null()))){
		HX_STACK_LINE(2720)
		return cur;
	}
	else{
		HX_STACK_LINE(2722)
		if (((x->parent == null()))){
			HX_STACK_LINE(2722)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2724)
			x->colour = (int)0;
			HX_STACK_LINE(2725)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(2725)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(2727)
		return x;
	}
	HX_STACK_LINE(2720)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::try_insert_bool","zpp_nape/util/RBTree.hx",2546);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2547)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(2548)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2549)
	if (((this->parent == null()))){
		HX_STACK_LINE(2550)
		{
			HX_STACK_LINE(2551)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
				HX_STACK_LINE(2551)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
			}
			else{
				HX_STACK_LINE(2558)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(2559)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
				HX_STACK_LINE(2560)
				x->next = null();
			}
			HX_STACK_LINE(2565)
			Dynamic();
		}
		HX_STACK_LINE(2567)
		x->data = obj;
		HX_STACK_LINE(2568)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(2571)
		cur = this->parent;
		HX_STACK_LINE(2572)
		while((true)){
			HX_STACK_LINE(2572)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(2573)
				if (((cur->prev == null()))){
					HX_STACK_LINE(2575)
					{
						HX_STACK_LINE(2576)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
							HX_STACK_LINE(2576)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
						}
						else{
							HX_STACK_LINE(2583)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(2584)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
							HX_STACK_LINE(2585)
							x->next = null();
						}
						HX_STACK_LINE(2590)
						Dynamic();
					}
					HX_STACK_LINE(2592)
					x->data = obj;
					HX_STACK_LINE(2593)
					cur->prev = x;
					HX_STACK_LINE(2594)
					x->parent = cur;
					HX_STACK_LINE(2595)
					break;
				}
				else{
					HX_STACK_LINE(2597)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(2599)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(2599)
					if (((cur->next == null()))){
						HX_STACK_LINE(2601)
						{
							HX_STACK_LINE(2602)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool == null()))){
								HX_STACK_LINE(2602)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::__new();
							}
							else{
								HX_STACK_LINE(2609)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(2610)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = x->next;
								HX_STACK_LINE(2611)
								x->next = null();
							}
							HX_STACK_LINE(2616)
							Dynamic();
						}
						HX_STACK_LINE(2618)
						x->data = obj;
						HX_STACK_LINE(2619)
						cur->next = x;
						HX_STACK_LINE(2620)
						x->parent = cur;
						HX_STACK_LINE(2621)
						break;
					}
					else{
						HX_STACK_LINE(2623)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(2625)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(2628)
	if (((x == null()))){
		HX_STACK_LINE(2628)
		return false;
	}
	else{
		HX_STACK_LINE(2630)
		if (((x->parent == null()))){
			HX_STACK_LINE(2630)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(2632)
			x->colour = (int)0;
			HX_STACK_LINE(2633)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(2633)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(2635)
		return true;
	}
	HX_STACK_LINE(2628)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::__fix_dbl_red","zpp_nape/util/RBTree.hx",2457);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2457)
		while((true)){
			HX_STACK_LINE(2459)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2460)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(2461)
			if (((g == null()))){
				HX_STACK_LINE(2462)
				par->colour = (int)1;
				HX_STACK_LINE(2463)
				break;
			}
			HX_STACK_LINE(2465)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(2466)
			if (((par == g->prev))){
				HX_STACK_LINE(2467)
				n3 = g;
				HX_STACK_LINE(2468)
				t4 = g->next;
				HX_STACK_LINE(2469)
				if (((x == par->prev))){
					HX_STACK_LINE(2470)
					n1 = x;
					HX_STACK_LINE(2471)
					n2 = par;
					HX_STACK_LINE(2472)
					t1 = x->prev;
					HX_STACK_LINE(2473)
					t2 = x->next;
					HX_STACK_LINE(2474)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(2477)
					n1 = par;
					HX_STACK_LINE(2478)
					n2 = x;
					HX_STACK_LINE(2479)
					t1 = par->prev;
					HX_STACK_LINE(2480)
					t2 = x->prev;
					HX_STACK_LINE(2481)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(2485)
				n1 = g;
				HX_STACK_LINE(2486)
				t1 = g->prev;
				HX_STACK_LINE(2487)
				if (((x == par->prev))){
					HX_STACK_LINE(2488)
					n2 = x;
					HX_STACK_LINE(2489)
					n3 = par;
					HX_STACK_LINE(2490)
					t2 = x->prev;
					HX_STACK_LINE(2491)
					t3 = x->next;
					HX_STACK_LINE(2492)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(2495)
					n2 = par;
					HX_STACK_LINE(2496)
					n3 = x;
					HX_STACK_LINE(2497)
					t2 = par->prev;
					HX_STACK_LINE(2498)
					t3 = x->prev;
					HX_STACK_LINE(2499)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(2502)
			{
				HX_STACK_LINE(2503)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(2504)
				if (((par1 == null()))){
					HX_STACK_LINE(2504)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(2507)
					if (((par1->prev == g))){
						HX_STACK_LINE(2507)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(2508)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(2509)
				if (((n2 != null()))){
					HX_STACK_LINE(2509)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(2511)
			{
				HX_STACK_LINE(2512)
				n1->prev = t1;
				HX_STACK_LINE(2513)
				if (((t1 != null()))){
					HX_STACK_LINE(2513)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(2515)
			{
				HX_STACK_LINE(2516)
				n1->next = t2;
				HX_STACK_LINE(2517)
				if (((t2 != null()))){
					HX_STACK_LINE(2517)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(2519)
			{
				HX_STACK_LINE(2520)
				n2->prev = n1;
				HX_STACK_LINE(2521)
				if (((n1 != null()))){
					HX_STACK_LINE(2521)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(2523)
			{
				HX_STACK_LINE(2524)
				n2->next = n3;
				HX_STACK_LINE(2525)
				if (((n3 != null()))){
					HX_STACK_LINE(2525)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(2527)
			{
				HX_STACK_LINE(2528)
				n3->prev = t3;
				HX_STACK_LINE(2529)
				if (((t3 != null()))){
					HX_STACK_LINE(2529)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(2531)
			{
				HX_STACK_LINE(2532)
				n3->next = t4;
				HX_STACK_LINE(2533)
				if (((t4 != null()))){
					HX_STACK_LINE(2533)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(2535)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(2536)
			n1->colour = (int)1;
			HX_STACK_LINE(2537)
			n3->colour = (int)1;
			HX_STACK_LINE(2538)
			if (((n2 == this->parent))){
				HX_STACK_LINE(2538)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2539)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(2540)
					x = n2;
					HX_STACK_LINE(2541)
					continue;
				}
			}
			HX_STACK_LINE(2543)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::__fix_neg_red","zpp_nape/util/RBTree.hx",2390);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(2391)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &parent,::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2392);
				{
					HX_STACK_LINE(2393)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(2394)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(2395)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(2396)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(2397)
					nl->colour = (int)0;
					HX_STACK_LINE(2398)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(2399)
					{
						HX_STACK_LINE(2400)
						negred->next = trl;
						HX_STACK_LINE(2401)
						if (((trl != null()))){
							HX_STACK_LINE(2401)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(2403)
					{
						HX_STACK_LINE(2404)
						::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2405)
						parent->data = nr->data;
						HX_STACK_LINE(2406)
						nr->data = t;
					}
					HX_STACK_LINE(2408)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(2408)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(2409)
					{
						HX_STACK_LINE(2410)
						nr->prev = trr;
						HX_STACK_LINE(2411)
						if (((trr != null()))){
							HX_STACK_LINE(2411)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(2413)
					{
						HX_STACK_LINE(2414)
						nr->next = parent->next;
						HX_STACK_LINE(2415)
						if (((parent->next != null()))){
							HX_STACK_LINE(2415)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(2417)
					{
						HX_STACK_LINE(2418)
						parent->next = nr;
						HX_STACK_LINE(2419)
						if (((nr != null()))){
							HX_STACK_LINE(2419)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(2421)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &parent,::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2423);
				{
					HX_STACK_LINE(2424)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(2425)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(2426)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(2427)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(2428)
					nl->colour = (int)0;
					HX_STACK_LINE(2429)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(2430)
					{
						HX_STACK_LINE(2431)
						negred->prev = trl;
						HX_STACK_LINE(2432)
						if (((trl != null()))){
							HX_STACK_LINE(2432)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(2434)
					{
						HX_STACK_LINE(2435)
						::zpp_nape::geom::ZPP_PartitionVertex t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2436)
						parent->data = nr->data;
						HX_STACK_LINE(2437)
						nr->data = t;
					}
					HX_STACK_LINE(2439)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(2439)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(2440)
					{
						HX_STACK_LINE(2441)
						nr->next = trr;
						HX_STACK_LINE(2442)
						if (((trr != null()))){
							HX_STACK_LINE(2442)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(2444)
					{
						HX_STACK_LINE(2445)
						nr->prev = parent->prev;
						HX_STACK_LINE(2446)
						if (((parent->prev != null()))){
							HX_STACK_LINE(2446)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(2448)
					{
						HX_STACK_LINE(2449)
						parent->prev = nr;
						HX_STACK_LINE(2450)
						if (((nr != null()))){
							HX_STACK_LINE(2450)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(2452)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(2392)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2454)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(2454)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(2455)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(2455)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::clear_node","zpp_nape/util/RBTree.hx",2355);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(2356)
	{
	}
	HX_STACK_LINE(2364)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(2365)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2366)
	if (((ret != null()))){
		HX_STACK_LINE(2367)
		if (((node == ret->prev))){
			HX_STACK_LINE(2367)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(2368)
			ret->next = null();
		}
		HX_STACK_LINE(2369)
		node->parent = null();
	}
	HX_STACK_LINE(2371)
	{
		HX_STACK_LINE(2372)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2373)
		{
		}
		HX_STACK_LINE(2381)
		{
			HX_STACK_LINE(2381)
			o->data = null();
			HX_STACK_LINE(2381)
			o->lt = null();
			HX_STACK_LINE(2381)
			o->swapped = null();
		}
		HX_STACK_LINE(2382)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
		HX_STACK_LINE(2383)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2388)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionVertex_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::clear_with","zpp_nape/util/RBTree.hx",2346);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(2346)
		if (((this->parent == null()))){
			HX_STACK_LINE(2347)
			return null();
		}
		else{
			HX_STACK_LINE(2349)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2350)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2350);
						{
							HX_STACK_LINE(2350)
							{
							}
							HX_STACK_LINE(2350)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(2350)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2350)
							if (((ret != null()))){
								HX_STACK_LINE(2350)
								if (((cur == ret->prev))){
									HX_STACK_LINE(2350)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(2350)
									ret->next = null();
								}
								HX_STACK_LINE(2350)
								cur->parent = null();
							}
							HX_STACK_LINE(2350)
							{
								HX_STACK_LINE(2350)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(2350)
								{
								}
								HX_STACK_LINE(2350)
								{
									HX_STACK_LINE(2350)
									o->data = null();
									HX_STACK_LINE(2350)
									o->lt = null();
									HX_STACK_LINE(2350)
									o->swapped = null();
								}
								HX_STACK_LINE(2350)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(2350)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
							}
							HX_STACK_LINE(2350)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2350)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(2351)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,clear_with,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::clear","zpp_nape/util/RBTree.hx",2345);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2345)
		if (((this->parent == null()))){
			HX_STACK_LINE(2345)
			Dynamic();
		}
		else{
			HX_STACK_LINE(2345)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(2345)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2345);
						{
							HX_STACK_LINE(2345)
							{
							}
							HX_STACK_LINE(2345)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2345)
							if (((ret != null()))){
								HX_STACK_LINE(2345)
								if (((cur == ret->prev))){
									HX_STACK_LINE(2345)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(2345)
									ret->next = null();
								}
								HX_STACK_LINE(2345)
								cur->parent = null();
							}
							HX_STACK_LINE(2345)
							{
								HX_STACK_LINE(2345)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(2345)
								{
								}
								HX_STACK_LINE(2345)
								{
									HX_STACK_LINE(2345)
									o->data = null();
									HX_STACK_LINE(2345)
									o->lt = null();
									HX_STACK_LINE(2345)
									o->swapped = null();
								}
								HX_STACK_LINE(2345)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
								HX_STACK_LINE(2345)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
							}
							HX_STACK_LINE(2345)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2345)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(2345)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::remove_node","zpp_nape/util/RBTree.hx",2225);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(2226)
		{
		}
		HX_STACK_LINE(2234)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(2235)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(2236)
			while(((sm->prev != null()))){
				HX_STACK_LINE(2236)
				sm = sm->prev;
			}
			HX_STACK_LINE(2237)
			{
				HX_STACK_LINE(2238)
				::zpp_nape::geom::ZPP_PartitionVertex t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2239)
				cur->data = sm->data;
				HX_STACK_LINE(2240)
				sm->data = t;
			}
			HX_STACK_LINE(2242)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(2242)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(2243)
			cur = sm;
		}
		HX_STACK_LINE(2245)
		{
		}
		HX_STACK_LINE(2253)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(2254)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(2254)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(2255)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(2256)
				if (((cur->parent != null()))){
					HX_STACK_LINE(2257)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(2258)
					while((true)){
						HX_STACK_LINE(2259)
						(parent->colour)++;
						HX_STACK_LINE(2260)
						(parent->prev->colour)--;
						HX_STACK_LINE(2261)
						(parent->next->colour)--;
						HX_STACK_LINE(2262)
						{
							HX_STACK_LINE(2263)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2264)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(2265)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(2266)
								break;
							}
							else{
								HX_STACK_LINE(2268)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(2269)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(2271)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(2272)
										break;
									}
									HX_STACK_LINE(2275)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(2277)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(2278)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(2283)
						{
							HX_STACK_LINE(2284)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(2285)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(2286)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(2287)
								break;
							}
							else{
								HX_STACK_LINE(2289)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(2290)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(2292)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(2293)
										break;
									}
									HX_STACK_LINE(2296)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(2298)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(2299)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(2304)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(2304)
							if (((parent->parent == null()))){
								HX_STACK_LINE(2305)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(2309)
								parent = parent->parent;
								HX_STACK_LINE(2310)
								continue;
							}
						}
						HX_STACK_LINE(2313)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(2317)
		{
			HX_STACK_LINE(2318)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(2319)
			if (((par == null()))){
				HX_STACK_LINE(2319)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(2322)
				if (((par->prev == cur))){
					HX_STACK_LINE(2322)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(2323)
					par->next = child;
				}
			}
			HX_STACK_LINE(2324)
			if (((child != null()))){
				HX_STACK_LINE(2324)
				child->parent = par;
			}
		}
		HX_STACK_LINE(2326)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(2327)
		{
			HX_STACK_LINE(2328)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2329)
			{
			}
			HX_STACK_LINE(2337)
			{
				HX_STACK_LINE(2337)
				o->data = null();
				HX_STACK_LINE(2337)
				o->lt = null();
				HX_STACK_LINE(2337)
				o->swapped = null();
			}
			HX_STACK_LINE(2338)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(2339)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove_node,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::predecessor","zpp_nape/util/RBTree.hx",2213);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2214)
	{
	}
	HX_STACK_LINE(2222)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2223)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(null()) : ::zpp_nape::geom::ZPP_PartitionVertex(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::successor","zpp_nape/util/RBTree.hx",2201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2202)
	{
	}
	HX_STACK_LINE(2210)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(2211)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(null()) : ::zpp_nape::geom::ZPP_PartitionVertex(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::predecessor_node","zpp_nape/util/RBTree.hx",2178);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(2179)
	{
	}
	HX_STACK_LINE(2187)
	if (((cur->prev != null()))){
		HX_STACK_LINE(2188)
		cur = cur->prev;
		HX_STACK_LINE(2189)
		while(((cur->next != null()))){
			HX_STACK_LINE(2189)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(2192)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2193)
		cur = cur->parent;
		HX_STACK_LINE(2194)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(2195)
			pre = cur;
			HX_STACK_LINE(2196)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2199)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::successor_node","zpp_nape/util/RBTree.hx",2155);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(2156)
	{
	}
	HX_STACK_LINE(2164)
	if (((cur->next != null()))){
		HX_STACK_LINE(2165)
		cur = cur->next;
		HX_STACK_LINE(2166)
		while(((cur->prev != null()))){
			HX_STACK_LINE(2166)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(2169)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(2170)
		cur = cur->parent;
		HX_STACK_LINE(2171)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(2172)
			pre = cur;
			HX_STACK_LINE(2173)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(2176)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,successor_node,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::remove","zpp_nape/util/RBTree.hx",2143);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(2144)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(2145)
		{
		}
		HX_STACK_LINE(2153)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::pop_front","zpp_nape/util/RBTree.hx",2128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2129)
	{
	}
	HX_STACK_LINE(2137)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2138)
	while(((cur->prev != null()))){
		HX_STACK_LINE(2138)
		cur = cur->prev;
	}
	HX_STACK_LINE(2139)
	::zpp_nape::geom::ZPP_PartitionVertex ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2140)
	this->remove_node(cur);
	HX_STACK_LINE(2141)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,pop_front,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::first","zpp_nape/util/RBTree.hx",2115);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2116)
	{
	}
	HX_STACK_LINE(2124)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2125)
	while(((cur->prev != null()))){
		HX_STACK_LINE(2125)
		cur = cur->prev;
	}
	HX_STACK_LINE(2126)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,first,return )

::zpp_nape::geom::ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::lower_bound","zpp_nape/util/RBTree.hx",2078);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2079);
			{
				HX_STACK_LINE(2080)
				::zpp_nape::geom::ZPP_PartitionVertex ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2081)
				{
					HX_STACK_LINE(2082)
					{
					}
					HX_STACK_LINE(2090)
					if ((!(__this->empty()))){
						HX_STACK_LINE(2091)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(2092)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(2092)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(2093)
						while(((set_ite != null()))){
							HX_STACK_LINE(2094)
							::zpp_nape::geom::ZPP_PartitionVertex elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(2095)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(2097)
								ret = elt;
								HX_STACK_LINE(2098)
								break;
							}
							HX_STACK_LINE(2101)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(2102)
								set_ite = set_ite->next;
								HX_STACK_LINE(2103)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(2103)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(2106)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(2106)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(2107)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(2112)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2078)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::find_weak","zpp_nape/util/RBTree.hx",2069);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2070)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2071)
	while(((cur != null()))){
		HX_STACK_LINE(2071)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2072)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2073)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(2073)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(2074)
				break;
			}
		}
	}
	HX_STACK_LINE(2076)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find_weak,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::has_weak","zpp_nape/util/RBTree.hx",2069);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2069)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::find( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::find","zpp_nape/util/RBTree.hx",2061);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2062)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2063)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(2063)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2064)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2065)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2067)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,find,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::has","zpp_nape/util/RBTree.hx",2061);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2061)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionVertex_obj,has,return )

int ZPP_Set_ZPP_PartitionVertex_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::size","zpp_nape/util/RBTree.hx",2031);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2032)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2033)
	{
		HX_STACK_LINE(2034)
		{
		}
		HX_STACK_LINE(2042)
		if ((!(this->empty()))){
			HX_STACK_LINE(2043)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2044)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(2044)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2045)
			while(((set_ite != null()))){
				HX_STACK_LINE(2046)
				::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2047)
				(ret)++;
				HX_STACK_LINE(2048)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(2049)
					set_ite = set_ite->next;
					HX_STACK_LINE(2050)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(2050)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2053)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(2053)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2054)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2059)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,size,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::singular","zpp_nape/util/RBTree.hx",2031);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2031)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,singular,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::empty","zpp_nape/util/RBTree.hx",2031);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2031)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,empty,return )

bool ZPP_Set_ZPP_PartitionVertex_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::verify","zpp_nape/util/RBTree.hx",1966);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1967)
	{
		HX_STACK_LINE(1968)
		{
		}
		HX_STACK_LINE(1976)
		if ((!(this->empty()))){
			HX_STACK_LINE(1977)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1978)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(1978)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1979)
			while(((set_ite != null()))){
				HX_STACK_LINE(1980)
				::zpp_nape::geom::ZPP_PartitionVertex i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1981)
				{
					HX_STACK_LINE(1982)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(1983)
					{
						HX_STACK_LINE(1984)
						{
						}
						HX_STACK_LINE(1992)
						if ((!(this->empty()))){
							HX_STACK_LINE(1993)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(1994)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(1994)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(1995)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(1996)
								::zpp_nape::geom::ZPP_PartitionVertex j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(1997)
								if ((!(prei))){
									HX_STACK_LINE(1998)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(1999)
										return false;
									}
								}
								else{
									HX_STACK_LINE(2001)
									if (((i == j))){
										HX_STACK_LINE(2001)
										prei = false;
									}
									else{
										HX_STACK_LINE(2002)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(2003)
											return false;
										}
									}
								}
								HX_STACK_LINE(2006)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(2007)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(2008)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(2008)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(2011)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(2011)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(2012)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(2018)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(2019)
					set_ite = set_ite->next;
					HX_STACK_LINE(2020)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(2020)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2023)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(2023)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2024)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2029)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,verify,return )

Void ZPP_Set_ZPP_PartitionVertex_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::alloc","zpp_nape/util/RBTree.hx",1957);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,alloc,(void))

Void ZPP_Set_ZPP_PartitionVertex_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionVertex::free","zpp_nape/util/RBTree.hx",1950);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1951)
		this->data = null();
		HX_STACK_LINE(1952)
		this->lt = null();
		HX_STACK_LINE(1953)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionVertex_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool;


ZPP_Set_ZPP_PartitionVertex_obj::ZPP_Set_ZPP_PartitionVertex_obj()
{
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionVertex >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionVertex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionVertex_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_PartitionVertex_obj::__mClass;

void ZPP_Set_ZPP_PartitionVertex_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionVertex"), hx::TCanCast< ZPP_Set_ZPP_PartitionVertex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_PartitionVertex_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
