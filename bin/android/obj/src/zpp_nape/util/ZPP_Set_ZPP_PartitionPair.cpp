#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionPair
#include <zpp_nape/geom/ZPP_PartitionPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_PartitionPair
#include <zpp_nape/util/ZPP_Set_ZPP_PartitionPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_PartitionPair_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::new","zpp_nape/util/RBTree.hx",2797);
{
	HX_STACK_LINE(2838)
	this->colour = (int)0;
	HX_STACK_LINE(2837)
	this->parent = null();
	HX_STACK_LINE(2836)
	this->next = null();
	HX_STACK_LINE(2835)
	this->prev = null();
	HX_STACK_LINE(2834)
	this->data = null();
	HX_STACK_LINE(2833)
	this->swapped = null();
	HX_STACK_LINE(2832)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_PartitionPair_obj::~ZPP_Set_ZPP_PartitionPair_obj() { }

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_PartitionPair_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > ZPP_Set_ZPP_PartitionPair_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > result = new ZPP_Set_ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_PartitionPair_obj > result = new ZPP_Set_ZPP_PartitionPair_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::insert","zpp_nape/util/RBTree.hx",3604);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3605)
	{
	}
	HX_STACK_LINE(3613)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3614)
	{
		HX_STACK_LINE(3615)
		if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
			HX_STACK_LINE(3615)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
		}
		else{
			HX_STACK_LINE(3622)
			x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(3623)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
			HX_STACK_LINE(3624)
			x->next = null();
		}
		HX_STACK_LINE(3629)
		Dynamic();
	}
	HX_STACK_LINE(3631)
	x->data = obj;
	HX_STACK_LINE(3632)
	if (((this->parent == null()))){
		HX_STACK_LINE(3632)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3634)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3635)
		while((true)){
			HX_STACK_LINE(3635)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(3636)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3638)
					cur->prev = x;
					HX_STACK_LINE(3639)
					x->parent = cur;
					HX_STACK_LINE(3640)
					break;
				}
				else{
					HX_STACK_LINE(3642)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3644)
				if (((cur->next == null()))){
					HX_STACK_LINE(3646)
					cur->next = x;
					HX_STACK_LINE(3647)
					x->parent = cur;
					HX_STACK_LINE(3648)
					break;
				}
				else{
					HX_STACK_LINE(3650)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(3654)
	if (((x->parent == null()))){
		HX_STACK_LINE(3654)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(3656)
		x->colour = (int)0;
		HX_STACK_LINE(3657)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(3657)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(3659)
	{
	}
	HX_STACK_LINE(3667)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::try_insert( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::try_insert","zpp_nape/util/RBTree.hx",3512);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3513)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3514)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3515)
	if (((this->parent == null()))){
		HX_STACK_LINE(3516)
		{
			HX_STACK_LINE(3517)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(3517)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
			}
			else{
				HX_STACK_LINE(3524)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(3525)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(3526)
				x->next = null();
			}
			HX_STACK_LINE(3531)
			Dynamic();
		}
		HX_STACK_LINE(3533)
		x->data = obj;
		HX_STACK_LINE(3534)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3537)
		cur = this->parent;
		HX_STACK_LINE(3538)
		while((true)){
			HX_STACK_LINE(3538)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(3539)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3541)
					{
						HX_STACK_LINE(3542)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(3542)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
						}
						else{
							HX_STACK_LINE(3549)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
							HX_STACK_LINE(3550)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(3551)
							x->next = null();
						}
						HX_STACK_LINE(3556)
						Dynamic();
					}
					HX_STACK_LINE(3558)
					x->data = obj;
					HX_STACK_LINE(3559)
					cur->prev = x;
					HX_STACK_LINE(3560)
					x->parent = cur;
					HX_STACK_LINE(3561)
					break;
				}
				else{
					HX_STACK_LINE(3563)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3565)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(3565)
					if (((cur->next == null()))){
						HX_STACK_LINE(3567)
						{
							HX_STACK_LINE(3568)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(3568)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
							}
							else{
								HX_STACK_LINE(3575)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(3576)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(3577)
								x->next = null();
							}
							HX_STACK_LINE(3582)
							Dynamic();
						}
						HX_STACK_LINE(3584)
						x->data = obj;
						HX_STACK_LINE(3585)
						cur->next = x;
						HX_STACK_LINE(3586)
						x->parent = cur;
						HX_STACK_LINE(3587)
						break;
					}
					else{
						HX_STACK_LINE(3589)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3591)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3594)
	if (((x == null()))){
		HX_STACK_LINE(3594)
		return cur;
	}
	else{
		HX_STACK_LINE(3596)
		if (((x->parent == null()))){
			HX_STACK_LINE(3596)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3598)
			x->colour = (int)0;
			HX_STACK_LINE(3599)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(3599)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(3601)
		return x;
	}
	HX_STACK_LINE(3594)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert,return )

bool ZPP_Set_ZPP_PartitionPair_obj::try_insert_bool( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::try_insert_bool","zpp_nape/util/RBTree.hx",3420);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3421)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(3422)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3423)
	if (((this->parent == null()))){
		HX_STACK_LINE(3424)
		{
			HX_STACK_LINE(3425)
			if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(3425)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
			}
			else{
				HX_STACK_LINE(3432)
				x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
				HX_STACK_LINE(3433)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
				HX_STACK_LINE(3434)
				x->next = null();
			}
			HX_STACK_LINE(3439)
			Dynamic();
		}
		HX_STACK_LINE(3441)
		x->data = obj;
		HX_STACK_LINE(3442)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(3445)
		cur = this->parent;
		HX_STACK_LINE(3446)
		while((true)){
			HX_STACK_LINE(3446)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(3447)
				if (((cur->prev == null()))){
					HX_STACK_LINE(3449)
					{
						HX_STACK_LINE(3450)
						if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(3450)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
						}
						else{
							HX_STACK_LINE(3457)
							x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
							HX_STACK_LINE(3458)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
							HX_STACK_LINE(3459)
							x->next = null();
						}
						HX_STACK_LINE(3464)
						Dynamic();
					}
					HX_STACK_LINE(3466)
					x->data = obj;
					HX_STACK_LINE(3467)
					cur->prev = x;
					HX_STACK_LINE(3468)
					x->parent = cur;
					HX_STACK_LINE(3469)
					break;
				}
				else{
					HX_STACK_LINE(3471)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(3473)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(3473)
					if (((cur->next == null()))){
						HX_STACK_LINE(3475)
						{
							HX_STACK_LINE(3476)
							if (((::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool == null()))){
								HX_STACK_LINE(3476)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::__new();
							}
							else{
								HX_STACK_LINE(3483)
								x = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(3484)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = x->next;
								HX_STACK_LINE(3485)
								x->next = null();
							}
							HX_STACK_LINE(3490)
							Dynamic();
						}
						HX_STACK_LINE(3492)
						x->data = obj;
						HX_STACK_LINE(3493)
						cur->next = x;
						HX_STACK_LINE(3494)
						x->parent = cur;
						HX_STACK_LINE(3495)
						break;
					}
					else{
						HX_STACK_LINE(3497)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(3499)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(3502)
	if (((x == null()))){
		HX_STACK_LINE(3502)
		return false;
	}
	else{
		HX_STACK_LINE(3504)
		if (((x->parent == null()))){
			HX_STACK_LINE(3504)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(3506)
			x->colour = (int)0;
			HX_STACK_LINE(3507)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(3507)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(3509)
		return true;
	}
	HX_STACK_LINE(3502)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::__fix_dbl_red","zpp_nape/util/RBTree.hx",3331);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(3331)
		while((true)){
			HX_STACK_LINE(3333)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3334)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(3335)
			if (((g == null()))){
				HX_STACK_LINE(3336)
				par->colour = (int)1;
				HX_STACK_LINE(3337)
				break;
			}
			HX_STACK_LINE(3339)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(3340)
			if (((par == g->prev))){
				HX_STACK_LINE(3341)
				n3 = g;
				HX_STACK_LINE(3342)
				t4 = g->next;
				HX_STACK_LINE(3343)
				if (((x == par->prev))){
					HX_STACK_LINE(3344)
					n1 = x;
					HX_STACK_LINE(3345)
					n2 = par;
					HX_STACK_LINE(3346)
					t1 = x->prev;
					HX_STACK_LINE(3347)
					t2 = x->next;
					HX_STACK_LINE(3348)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(3351)
					n1 = par;
					HX_STACK_LINE(3352)
					n2 = x;
					HX_STACK_LINE(3353)
					t1 = par->prev;
					HX_STACK_LINE(3354)
					t2 = x->prev;
					HX_STACK_LINE(3355)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(3359)
				n1 = g;
				HX_STACK_LINE(3360)
				t1 = g->prev;
				HX_STACK_LINE(3361)
				if (((x == par->prev))){
					HX_STACK_LINE(3362)
					n2 = x;
					HX_STACK_LINE(3363)
					n3 = par;
					HX_STACK_LINE(3364)
					t2 = x->prev;
					HX_STACK_LINE(3365)
					t3 = x->next;
					HX_STACK_LINE(3366)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(3369)
					n2 = par;
					HX_STACK_LINE(3370)
					n3 = x;
					HX_STACK_LINE(3371)
					t2 = par->prev;
					HX_STACK_LINE(3372)
					t3 = x->prev;
					HX_STACK_LINE(3373)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(3376)
			{
				HX_STACK_LINE(3377)
				::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(3378)
				if (((par1 == null()))){
					HX_STACK_LINE(3378)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(3381)
					if (((par1->prev == g))){
						HX_STACK_LINE(3381)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(3382)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(3383)
				if (((n2 != null()))){
					HX_STACK_LINE(3383)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(3385)
			{
				HX_STACK_LINE(3386)
				n1->prev = t1;
				HX_STACK_LINE(3387)
				if (((t1 != null()))){
					HX_STACK_LINE(3387)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(3389)
			{
				HX_STACK_LINE(3390)
				n1->next = t2;
				HX_STACK_LINE(3391)
				if (((t2 != null()))){
					HX_STACK_LINE(3391)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(3393)
			{
				HX_STACK_LINE(3394)
				n2->prev = n1;
				HX_STACK_LINE(3395)
				if (((n1 != null()))){
					HX_STACK_LINE(3395)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(3397)
			{
				HX_STACK_LINE(3398)
				n2->next = n3;
				HX_STACK_LINE(3399)
				if (((n3 != null()))){
					HX_STACK_LINE(3399)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(3401)
			{
				HX_STACK_LINE(3402)
				n3->prev = t3;
				HX_STACK_LINE(3403)
				if (((t3 != null()))){
					HX_STACK_LINE(3403)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(3405)
			{
				HX_STACK_LINE(3406)
				n3->next = t4;
				HX_STACK_LINE(3407)
				if (((t4 != null()))){
					HX_STACK_LINE(3407)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(3409)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(3410)
			n1->colour = (int)1;
			HX_STACK_LINE(3411)
			n3->colour = (int)1;
			HX_STACK_LINE(3412)
			if (((n2 == this->parent))){
				HX_STACK_LINE(3412)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3413)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(3414)
					x = n2;
					HX_STACK_LINE(3415)
					continue;
				}
			}
			HX_STACK_LINE(3417)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::__fix_neg_red","zpp_nape/util/RBTree.hx",3264);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(3265)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &parent,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3266);
				{
					HX_STACK_LINE(3267)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(3268)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(3269)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(3270)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(3271)
					nl->colour = (int)0;
					HX_STACK_LINE(3272)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(3273)
					{
						HX_STACK_LINE(3274)
						negred->next = trl;
						HX_STACK_LINE(3275)
						if (((trl != null()))){
							HX_STACK_LINE(3275)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(3277)
					{
						HX_STACK_LINE(3278)
						::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(3279)
						parent->data = nr->data;
						HX_STACK_LINE(3280)
						nr->data = t;
					}
					HX_STACK_LINE(3282)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(3282)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(3283)
					{
						HX_STACK_LINE(3284)
						nr->prev = trr;
						HX_STACK_LINE(3285)
						if (((trr != null()))){
							HX_STACK_LINE(3285)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(3287)
					{
						HX_STACK_LINE(3288)
						nr->next = parent->next;
						HX_STACK_LINE(3289)
						if (((parent->next != null()))){
							HX_STACK_LINE(3289)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(3291)
					{
						HX_STACK_LINE(3292)
						parent->next = nr;
						HX_STACK_LINE(3293)
						if (((nr != null()))){
							HX_STACK_LINE(3293)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(3295)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &negred,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &parent,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3297);
				{
					HX_STACK_LINE(3298)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(3299)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(3300)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(3301)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(3302)
					nl->colour = (int)0;
					HX_STACK_LINE(3303)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(3304)
					{
						HX_STACK_LINE(3305)
						negred->prev = trl;
						HX_STACK_LINE(3306)
						if (((trl != null()))){
							HX_STACK_LINE(3306)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(3308)
					{
						HX_STACK_LINE(3309)
						::zpp_nape::geom::ZPP_PartitionPair t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(3310)
						parent->data = nr->data;
						HX_STACK_LINE(3311)
						nr->data = t;
					}
					HX_STACK_LINE(3313)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(3313)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(3314)
					{
						HX_STACK_LINE(3315)
						nr->next = trr;
						HX_STACK_LINE(3316)
						if (((trr != null()))){
							HX_STACK_LINE(3316)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(3318)
					{
						HX_STACK_LINE(3319)
						nr->prev = parent->prev;
						HX_STACK_LINE(3320)
						if (((parent->prev != null()))){
							HX_STACK_LINE(3320)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(3322)
					{
						HX_STACK_LINE(3323)
						parent->prev = nr;
						HX_STACK_LINE(3324)
						if (((nr != null()))){
							HX_STACK_LINE(3324)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(3326)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(3266)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3328)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(3328)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(3329)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(3329)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear_node","zpp_nape/util/RBTree.hx",3229);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(3230)
	{
	}
	HX_STACK_LINE(3238)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(3239)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3240)
	if (((ret != null()))){
		HX_STACK_LINE(3241)
		if (((node == ret->prev))){
			HX_STACK_LINE(3241)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(3242)
			ret->next = null();
		}
		HX_STACK_LINE(3243)
		node->parent = null();
	}
	HX_STACK_LINE(3245)
	{
		HX_STACK_LINE(3246)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3247)
		{
		}
		HX_STACK_LINE(3255)
		{
			HX_STACK_LINE(3255)
			o->data = null();
			HX_STACK_LINE(3255)
			o->lt = null();
			HX_STACK_LINE(3255)
			o->swapped = null();
		}
		HX_STACK_LINE(3256)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
		HX_STACK_LINE(3257)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3262)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_PartitionPair_obj,clear_node,return )

Void ZPP_Set_ZPP_PartitionPair_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear_with","zpp_nape/util/RBTree.hx",3220);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(3220)
		if (((this->parent == null()))){
			HX_STACK_LINE(3221)
			return null();
		}
		else{
			HX_STACK_LINE(3223)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3224)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3224);
						{
							HX_STACK_LINE(3224)
							{
							}
							HX_STACK_LINE(3224)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(3224)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3224)
							if (((ret != null()))){
								HX_STACK_LINE(3224)
								if (((cur == ret->prev))){
									HX_STACK_LINE(3224)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(3224)
									ret->next = null();
								}
								HX_STACK_LINE(3224)
								cur->parent = null();
							}
							HX_STACK_LINE(3224)
							{
								HX_STACK_LINE(3224)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(3224)
								{
								}
								HX_STACK_LINE(3224)
								{
									HX_STACK_LINE(3224)
									o->data = null();
									HX_STACK_LINE(3224)
									o->lt = null();
									HX_STACK_LINE(3224)
									o->swapped = null();
								}
								HX_STACK_LINE(3224)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(3224)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(3224)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3224)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(3225)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,clear_with,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::clear","zpp_nape/util/RBTree.hx",3219);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3219)
		if (((this->parent == null()))){
			HX_STACK_LINE(3219)
			Dynamic();
		}
		else{
			HX_STACK_LINE(3219)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3219)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3219);
						{
							HX_STACK_LINE(3219)
							{
							}
							HX_STACK_LINE(3219)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3219)
							if (((ret != null()))){
								HX_STACK_LINE(3219)
								if (((cur == ret->prev))){
									HX_STACK_LINE(3219)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(3219)
									ret->next = null();
								}
								HX_STACK_LINE(3219)
								cur->parent = null();
							}
							HX_STACK_LINE(3219)
							{
								HX_STACK_LINE(3219)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(3219)
								{
								}
								HX_STACK_LINE(3219)
								{
									HX_STACK_LINE(3219)
									o->data = null();
									HX_STACK_LINE(3219)
									o->lt = null();
									HX_STACK_LINE(3219)
									o->swapped = null();
								}
								HX_STACK_LINE(3219)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
								HX_STACK_LINE(3219)
								::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
							}
							HX_STACK_LINE(3219)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3219)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(3219)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,clear,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::remove_node","zpp_nape/util/RBTree.hx",3099);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(3100)
		{
		}
		HX_STACK_LINE(3108)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(3109)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(3110)
			while(((sm->prev != null()))){
				HX_STACK_LINE(3110)
				sm = sm->prev;
			}
			HX_STACK_LINE(3111)
			{
				HX_STACK_LINE(3112)
				::zpp_nape::geom::ZPP_PartitionPair t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3113)
				cur->data = sm->data;
				HX_STACK_LINE(3114)
				sm->data = t;
			}
			HX_STACK_LINE(3116)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(3116)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(3117)
			cur = sm;
		}
		HX_STACK_LINE(3119)
		{
		}
		HX_STACK_LINE(3127)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(3128)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(3128)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(3129)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(3130)
				if (((cur->parent != null()))){
					HX_STACK_LINE(3131)
					::zpp_nape::util::ZPP_Set_ZPP_PartitionPair parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(3132)
					while((true)){
						HX_STACK_LINE(3133)
						(parent->colour)++;
						HX_STACK_LINE(3134)
						(parent->prev->colour)--;
						HX_STACK_LINE(3135)
						(parent->next->colour)--;
						HX_STACK_LINE(3136)
						{
							HX_STACK_LINE(3137)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3138)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(3139)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(3140)
								break;
							}
							else{
								HX_STACK_LINE(3142)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(3143)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(3145)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(3146)
										break;
									}
									HX_STACK_LINE(3149)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(3151)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(3152)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(3157)
						{
							HX_STACK_LINE(3158)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(3159)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(3160)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(3161)
								break;
							}
							else{
								HX_STACK_LINE(3163)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(3164)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(3166)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(3167)
										break;
									}
									HX_STACK_LINE(3170)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(3172)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(3173)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(3178)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(3178)
							if (((parent->parent == null()))){
								HX_STACK_LINE(3179)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(3183)
								parent = parent->parent;
								HX_STACK_LINE(3184)
								continue;
							}
						}
						HX_STACK_LINE(3187)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(3191)
		{
			HX_STACK_LINE(3192)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(3193)
			if (((par == null()))){
				HX_STACK_LINE(3193)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(3196)
				if (((par->prev == cur))){
					HX_STACK_LINE(3196)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(3197)
					par->next = child;
				}
			}
			HX_STACK_LINE(3198)
			if (((child != null()))){
				HX_STACK_LINE(3198)
				child->parent = par;
			}
		}
		HX_STACK_LINE(3200)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(3201)
		{
			HX_STACK_LINE(3202)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3203)
			{
			}
			HX_STACK_LINE(3211)
			{
				HX_STACK_LINE(3211)
				o->data = null();
				HX_STACK_LINE(3211)
				o->lt = null();
				HX_STACK_LINE(3211)
				o->swapped = null();
			}
			HX_STACK_LINE(3212)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;
			HX_STACK_LINE(3213)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove_node,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::predecessor","zpp_nape/util/RBTree.hx",3087);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3088)
	{
	}
	HX_STACK_LINE(3096)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3097)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionPair(null()) : ::zpp_nape::geom::ZPP_PartitionPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::successor","zpp_nape/util/RBTree.hx",3075);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3076)
	{
	}
	HX_STACK_LINE(3084)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3085)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_PartitionPair(null()) : ::zpp_nape::geom::ZPP_PartitionPair(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::predecessor_node","zpp_nape/util/RBTree.hx",3052);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(3053)
	{
	}
	HX_STACK_LINE(3061)
	if (((cur->prev != null()))){
		HX_STACK_LINE(3062)
		cur = cur->prev;
		HX_STACK_LINE(3063)
		while(((cur->next != null()))){
			HX_STACK_LINE(3063)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(3066)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3067)
		cur = cur->parent;
		HX_STACK_LINE(3068)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(3069)
			pre = cur;
			HX_STACK_LINE(3070)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3073)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::successor_node","zpp_nape/util/RBTree.hx",3029);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(3030)
	{
	}
	HX_STACK_LINE(3038)
	if (((cur->next != null()))){
		HX_STACK_LINE(3039)
		cur = cur->next;
		HX_STACK_LINE(3040)
		while(((cur->prev != null()))){
			HX_STACK_LINE(3040)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3043)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3044)
		cur = cur->parent;
		HX_STACK_LINE(3045)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(3046)
			pre = cur;
			HX_STACK_LINE(3047)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3050)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,successor_node,return )

Void ZPP_Set_ZPP_PartitionPair_obj::remove( ::zpp_nape::geom::ZPP_PartitionPair obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::remove","zpp_nape/util/RBTree.hx",3017);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3018)
		::zpp_nape::util::ZPP_Set_ZPP_PartitionPair node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3019)
		{
		}
		HX_STACK_LINE(3027)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::pop_front","zpp_nape/util/RBTree.hx",3002);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3003)
	{
	}
	HX_STACK_LINE(3011)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3012)
	while(((cur->prev != null()))){
		HX_STACK_LINE(3012)
		cur = cur->prev;
	}
	HX_STACK_LINE(3013)
	::zpp_nape::geom::ZPP_PartitionPair ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3014)
	this->remove_node(cur);
	HX_STACK_LINE(3015)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,pop_front,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::first","zpp_nape/util/RBTree.hx",2989);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2990)
	{
	}
	HX_STACK_LINE(2998)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2999)
	while(((cur->prev != null()))){
		HX_STACK_LINE(2999)
		cur = cur->prev;
	}
	HX_STACK_LINE(3000)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,first,return )

::zpp_nape::geom::ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::lower_bound( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::lower_bound","zpp_nape/util/RBTree.hx",2952);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionPair Block( ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair_obj *__this,::zpp_nape::geom::ZPP_PartitionPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",2953);
			{
				HX_STACK_LINE(2954)
				::zpp_nape::geom::ZPP_PartitionPair ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2955)
				{
					HX_STACK_LINE(2956)
					{
					}
					HX_STACK_LINE(2964)
					if ((!(__this->empty()))){
						HX_STACK_LINE(2965)
						::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(2966)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(2966)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(2967)
						while(((set_ite != null()))){
							HX_STACK_LINE(2968)
							::zpp_nape::geom::ZPP_PartitionPair elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(2969)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(2971)
								ret = elt;
								HX_STACK_LINE(2972)
								break;
							}
							HX_STACK_LINE(2975)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(2976)
								set_ite = set_ite->next;
								HX_STACK_LINE(2977)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(2977)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(2980)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(2980)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(2981)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(2986)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2952)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::find_weak","zpp_nape/util/RBTree.hx",2943);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2944)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2945)
	while(((cur != null()))){
		HX_STACK_LINE(2945)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2946)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2947)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(2947)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(2948)
				break;
			}
		}
	}
	HX_STACK_LINE(2950)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find_weak,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has_weak( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::has_weak","zpp_nape/util/RBTree.hx",2943);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2943)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::find( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::find","zpp_nape/util/RBTree.hx",2935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2936)
	::zpp_nape::util::ZPP_Set_ZPP_PartitionPair cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(2937)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(2937)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(2938)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(2939)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(2941)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,find,return )

bool ZPP_Set_ZPP_PartitionPair_obj::has( ::zpp_nape::geom::ZPP_PartitionPair obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::has","zpp_nape/util/RBTree.hx",2935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(2935)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_PartitionPair_obj,has,return )

int ZPP_Set_ZPP_PartitionPair_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::size","zpp_nape/util/RBTree.hx",2905);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2906)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2907)
	{
		HX_STACK_LINE(2908)
		{
		}
		HX_STACK_LINE(2916)
		if ((!(this->empty()))){
			HX_STACK_LINE(2917)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2918)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(2918)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2919)
			while(((set_ite != null()))){
				HX_STACK_LINE(2920)
				::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2921)
				(ret)++;
				HX_STACK_LINE(2922)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(2923)
					set_ite = set_ite->next;
					HX_STACK_LINE(2924)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(2924)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2927)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(2927)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2928)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2933)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,size,return )

bool ZPP_Set_ZPP_PartitionPair_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::singular","zpp_nape/util/RBTree.hx",2905);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2905)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,singular,return )

bool ZPP_Set_ZPP_PartitionPair_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::empty","zpp_nape/util/RBTree.hx",2905);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2905)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,empty,return )

bool ZPP_Set_ZPP_PartitionPair_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::verify","zpp_nape/util/RBTree.hx",2840);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2841)
	{
		HX_STACK_LINE(2842)
		{
		}
		HX_STACK_LINE(2850)
		if ((!(this->empty()))){
			HX_STACK_LINE(2851)
			::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(2852)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(2852)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(2853)
			while(((set_ite != null()))){
				HX_STACK_LINE(2854)
				::zpp_nape::geom::ZPP_PartitionPair i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2855)
				{
					HX_STACK_LINE(2856)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(2857)
					{
						HX_STACK_LINE(2858)
						{
						}
						HX_STACK_LINE(2866)
						if ((!(this->empty()))){
							HX_STACK_LINE(2867)
							::zpp_nape::util::ZPP_Set_ZPP_PartitionPair set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(2868)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(2868)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(2869)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(2870)
								::zpp_nape::geom::ZPP_PartitionPair j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(2871)
								if ((!(prei))){
									HX_STACK_LINE(2872)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(2873)
										return false;
									}
								}
								else{
									HX_STACK_LINE(2875)
									if (((i == j))){
										HX_STACK_LINE(2875)
										prei = false;
									}
									else{
										HX_STACK_LINE(2876)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(2877)
											return false;
										}
									}
								}
								HX_STACK_LINE(2880)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(2881)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(2882)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(2882)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(2885)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(2885)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(2886)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(2892)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(2893)
					set_ite = set_ite->next;
					HX_STACK_LINE(2894)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(2894)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(2897)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(2897)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(2898)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(2903)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,verify,return )

Void ZPP_Set_ZPP_PartitionPair_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::alloc","zpp_nape/util/RBTree.hx",2831);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,alloc,(void))

Void ZPP_Set_ZPP_PartitionPair_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_PartitionPair::free","zpp_nape/util/RBTree.hx",2824);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2825)
		this->data = null();
		HX_STACK_LINE(2826)
		this->lt = null();
		HX_STACK_LINE(2827)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_PartitionPair_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_PartitionPair ZPP_Set_ZPP_PartitionPair_obj::zpp_pool;


ZPP_Set_ZPP_PartitionPair_obj::ZPP_Set_ZPP_PartitionPair_obj()
{
}

void ZPP_Set_ZPP_PartitionPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_PartitionPair);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_PartitionPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_PartitionPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_PartitionPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_PartitionPair >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_PartitionPair_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_PartitionPair_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_PartitionPair_obj::__mClass;

void ZPP_Set_ZPP_PartitionPair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_PartitionPair"), hx::TCanCast< ZPP_Set_ZPP_PartitionPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_PartitionPair_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
