#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_SimpleVert
#include <zpp_nape/util/ZPP_Set_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_Set_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::new","zpp_nape/util/RBTree.hx",3671);
{
	HX_STACK_LINE(3712)
	this->colour = (int)0;
	HX_STACK_LINE(3711)
	this->parent = null();
	HX_STACK_LINE(3710)
	this->next = null();
	HX_STACK_LINE(3709)
	this->prev = null();
	HX_STACK_LINE(3708)
	this->data = null();
	HX_STACK_LINE(3707)
	this->swapped = null();
	HX_STACK_LINE(3706)
	this->lt = null();
}
;
	return null();
}

ZPP_Set_ZPP_SimpleVert_obj::~ZPP_Set_ZPP_SimpleVert_obj() { }

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZPP_Set_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > ZPP_Set_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > result = new ZPP_Set_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Set_ZPP_SimpleVert_obj > result = new ZPP_Set_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::insert","zpp_nape/util/RBTree.hx",4478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4479)
	{
	}
	HX_STACK_LINE(4487)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4488)
	{
		HX_STACK_LINE(4489)
		if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
			HX_STACK_LINE(4489)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
		}
		else{
			HX_STACK_LINE(4496)
			x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(4497)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
			HX_STACK_LINE(4498)
			x->next = null();
		}
		HX_STACK_LINE(4503)
		Dynamic();
	}
	HX_STACK_LINE(4505)
	x->data = obj;
	HX_STACK_LINE(4506)
	if (((this->parent == null()))){
		HX_STACK_LINE(4506)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4508)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4509)
		while((true)){
			HX_STACK_LINE(4509)
			if ((this->lt(x->data,cur->data))){
				HX_STACK_LINE(4510)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4512)
					cur->prev = x;
					HX_STACK_LINE(4513)
					x->parent = cur;
					HX_STACK_LINE(4514)
					break;
				}
				else{
					HX_STACK_LINE(4516)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4518)
				if (((cur->next == null()))){
					HX_STACK_LINE(4520)
					cur->next = x;
					HX_STACK_LINE(4521)
					x->parent = cur;
					HX_STACK_LINE(4522)
					break;
				}
				else{
					HX_STACK_LINE(4524)
					cur = cur->next;
				}
			}
		}
	}
	HX_STACK_LINE(4528)
	if (((x->parent == null()))){
		HX_STACK_LINE(4528)
		x->colour = (int)1;
	}
	else{
		HX_STACK_LINE(4530)
		x->colour = (int)0;
		HX_STACK_LINE(4531)
		if (((x->parent->colour == (int)0))){
			HX_STACK_LINE(4531)
			this->__fix_dbl_red(x);
		}
	}
	HX_STACK_LINE(4533)
	{
	}
	HX_STACK_LINE(4541)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,insert,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::try_insert( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::try_insert","zpp_nape/util/RBTree.hx",4386);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4387)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4388)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4389)
	if (((this->parent == null()))){
		HX_STACK_LINE(4390)
		{
			HX_STACK_LINE(4391)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(4391)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
			}
			else{
				HX_STACK_LINE(4398)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(4399)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4400)
				x->next = null();
			}
			HX_STACK_LINE(4405)
			Dynamic();
		}
		HX_STACK_LINE(4407)
		x->data = obj;
		HX_STACK_LINE(4408)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4411)
		cur = this->parent;
		HX_STACK_LINE(4412)
		while((true)){
			HX_STACK_LINE(4412)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(4413)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4415)
					{
						HX_STACK_LINE(4416)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(4416)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
						}
						else{
							HX_STACK_LINE(4423)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(4424)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4425)
							x->next = null();
						}
						HX_STACK_LINE(4430)
						Dynamic();
					}
					HX_STACK_LINE(4432)
					x->data = obj;
					HX_STACK_LINE(4433)
					cur->prev = x;
					HX_STACK_LINE(4434)
					x->parent = cur;
					HX_STACK_LINE(4435)
					break;
				}
				else{
					HX_STACK_LINE(4437)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4439)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(4439)
					if (((cur->next == null()))){
						HX_STACK_LINE(4441)
						{
							HX_STACK_LINE(4442)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(4442)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
							}
							else{
								HX_STACK_LINE(4449)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4450)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4451)
								x->next = null();
							}
							HX_STACK_LINE(4456)
							Dynamic();
						}
						HX_STACK_LINE(4458)
						x->data = obj;
						HX_STACK_LINE(4459)
						cur->next = x;
						HX_STACK_LINE(4460)
						x->parent = cur;
						HX_STACK_LINE(4461)
						break;
					}
					else{
						HX_STACK_LINE(4463)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4465)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4468)
	if (((x == null()))){
		HX_STACK_LINE(4468)
		return cur;
	}
	else{
		HX_STACK_LINE(4470)
		if (((x->parent == null()))){
			HX_STACK_LINE(4470)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4472)
			x->colour = (int)0;
			HX_STACK_LINE(4473)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(4473)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(4475)
		return x;
	}
	HX_STACK_LINE(4468)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert,return )

bool ZPP_Set_ZPP_SimpleVert_obj::try_insert_bool( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::try_insert_bool","zpp_nape/util/RBTree.hx",4294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4295)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x = null();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(4296)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = null();		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4297)
	if (((this->parent == null()))){
		HX_STACK_LINE(4298)
		{
			HX_STACK_LINE(4299)
			if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
				HX_STACK_LINE(4299)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
			}
			else{
				HX_STACK_LINE(4306)
				x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(4307)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
				HX_STACK_LINE(4308)
				x->next = null();
			}
			HX_STACK_LINE(4313)
			Dynamic();
		}
		HX_STACK_LINE(4315)
		x->data = obj;
		HX_STACK_LINE(4316)
		this->parent = x;
	}
	else{
		HX_STACK_LINE(4319)
		cur = this->parent;
		HX_STACK_LINE(4320)
		while((true)){
			HX_STACK_LINE(4320)
			if ((this->lt(obj,cur->data))){
				HX_STACK_LINE(4321)
				if (((cur->prev == null()))){
					HX_STACK_LINE(4323)
					{
						HX_STACK_LINE(4324)
						if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
							HX_STACK_LINE(4324)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
						}
						else{
							HX_STACK_LINE(4331)
							x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(4332)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
							HX_STACK_LINE(4333)
							x->next = null();
						}
						HX_STACK_LINE(4338)
						Dynamic();
					}
					HX_STACK_LINE(4340)
					x->data = obj;
					HX_STACK_LINE(4341)
					cur->prev = x;
					HX_STACK_LINE(4342)
					x->parent = cur;
					HX_STACK_LINE(4343)
					break;
				}
				else{
					HX_STACK_LINE(4345)
					cur = cur->prev;
				}
			}
			else{
				HX_STACK_LINE(4347)
				if ((this->lt(cur->data,obj))){
					HX_STACK_LINE(4347)
					if (((cur->next == null()))){
						HX_STACK_LINE(4349)
						{
							HX_STACK_LINE(4350)
							if (((::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool == null()))){
								HX_STACK_LINE(4350)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::__new();
							}
							else{
								HX_STACK_LINE(4357)
								x = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4358)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = x->next;
								HX_STACK_LINE(4359)
								x->next = null();
							}
							HX_STACK_LINE(4364)
							Dynamic();
						}
						HX_STACK_LINE(4366)
						x->data = obj;
						HX_STACK_LINE(4367)
						cur->next = x;
						HX_STACK_LINE(4368)
						x->parent = cur;
						HX_STACK_LINE(4369)
						break;
					}
					else{
						HX_STACK_LINE(4371)
						cur = cur->next;
					}
				}
				else{
					HX_STACK_LINE(4373)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(4376)
	if (((x == null()))){
		HX_STACK_LINE(4376)
		return false;
	}
	else{
		HX_STACK_LINE(4378)
		if (((x->parent == null()))){
			HX_STACK_LINE(4378)
			x->colour = (int)1;
		}
		else{
			HX_STACK_LINE(4380)
			x->colour = (int)0;
			HX_STACK_LINE(4381)
			if (((x->parent->colour == (int)0))){
				HX_STACK_LINE(4381)
				this->__fix_dbl_red(x);
			}
		}
		HX_STACK_LINE(4383)
		return true;
	}
	HX_STACK_LINE(4376)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,try_insert_bool,return )

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_dbl_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert x){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::__fix_dbl_red","zpp_nape/util/RBTree.hx",4205);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4205)
		while((true)){
			HX_STACK_LINE(4207)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = x->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4208)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert g = par->parent;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(4209)
			if (((g == null()))){
				HX_STACK_LINE(4210)
				par->colour = (int)1;
				HX_STACK_LINE(4211)
				break;
			}
			HX_STACK_LINE(4213)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n1;		HX_STACK_VAR(n1,"n1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n2;		HX_STACK_VAR(n2,"n2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert n3;		HX_STACK_VAR(n3,"n3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t1;		HX_STACK_VAR(t1,"t1");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t2;		HX_STACK_VAR(t2,"t2");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t3;		HX_STACK_VAR(t3,"t3");
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert t4;		HX_STACK_VAR(t4,"t4");
			HX_STACK_LINE(4214)
			if (((par == g->prev))){
				HX_STACK_LINE(4215)
				n3 = g;
				HX_STACK_LINE(4216)
				t4 = g->next;
				HX_STACK_LINE(4217)
				if (((x == par->prev))){
					HX_STACK_LINE(4218)
					n1 = x;
					HX_STACK_LINE(4219)
					n2 = par;
					HX_STACK_LINE(4220)
					t1 = x->prev;
					HX_STACK_LINE(4221)
					t2 = x->next;
					HX_STACK_LINE(4222)
					t3 = par->next;
				}
				else{
					HX_STACK_LINE(4225)
					n1 = par;
					HX_STACK_LINE(4226)
					n2 = x;
					HX_STACK_LINE(4227)
					t1 = par->prev;
					HX_STACK_LINE(4228)
					t2 = x->prev;
					HX_STACK_LINE(4229)
					t3 = x->next;
				}
			}
			else{
				HX_STACK_LINE(4233)
				n1 = g;
				HX_STACK_LINE(4234)
				t1 = g->prev;
				HX_STACK_LINE(4235)
				if (((x == par->prev))){
					HX_STACK_LINE(4236)
					n2 = x;
					HX_STACK_LINE(4237)
					n3 = par;
					HX_STACK_LINE(4238)
					t2 = x->prev;
					HX_STACK_LINE(4239)
					t3 = x->next;
					HX_STACK_LINE(4240)
					t4 = par->next;
				}
				else{
					HX_STACK_LINE(4243)
					n2 = par;
					HX_STACK_LINE(4244)
					n3 = x;
					HX_STACK_LINE(4245)
					t2 = par->prev;
					HX_STACK_LINE(4246)
					t3 = x->prev;
					HX_STACK_LINE(4247)
					t4 = x->next;
				}
			}
			HX_STACK_LINE(4250)
			{
				HX_STACK_LINE(4251)
				::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par1 = g->parent;		HX_STACK_VAR(par1,"par1");
				HX_STACK_LINE(4252)
				if (((par1 == null()))){
					HX_STACK_LINE(4252)
					this->parent = n2;
				}
				else{
					HX_STACK_LINE(4255)
					if (((par1->prev == g))){
						HX_STACK_LINE(4255)
						par1->prev = n2;
					}
					else{
						HX_STACK_LINE(4256)
						par1->next = n2;
					}
				}
				HX_STACK_LINE(4257)
				if (((n2 != null()))){
					HX_STACK_LINE(4257)
					n2->parent = par1;
				}
			}
			HX_STACK_LINE(4259)
			{
				HX_STACK_LINE(4260)
				n1->prev = t1;
				HX_STACK_LINE(4261)
				if (((t1 != null()))){
					HX_STACK_LINE(4261)
					t1->parent = n1;
				}
			}
			HX_STACK_LINE(4263)
			{
				HX_STACK_LINE(4264)
				n1->next = t2;
				HX_STACK_LINE(4265)
				if (((t2 != null()))){
					HX_STACK_LINE(4265)
					t2->parent = n1;
				}
			}
			HX_STACK_LINE(4267)
			{
				HX_STACK_LINE(4268)
				n2->prev = n1;
				HX_STACK_LINE(4269)
				if (((n1 != null()))){
					HX_STACK_LINE(4269)
					n1->parent = n2;
				}
			}
			HX_STACK_LINE(4271)
			{
				HX_STACK_LINE(4272)
				n2->next = n3;
				HX_STACK_LINE(4273)
				if (((n3 != null()))){
					HX_STACK_LINE(4273)
					n3->parent = n2;
				}
			}
			HX_STACK_LINE(4275)
			{
				HX_STACK_LINE(4276)
				n3->prev = t3;
				HX_STACK_LINE(4277)
				if (((t3 != null()))){
					HX_STACK_LINE(4277)
					t3->parent = n3;
				}
			}
			HX_STACK_LINE(4279)
			{
				HX_STACK_LINE(4280)
				n3->next = t4;
				HX_STACK_LINE(4281)
				if (((t4 != null()))){
					HX_STACK_LINE(4281)
					t4->parent = n3;
				}
			}
			HX_STACK_LINE(4283)
			n2->colour = (g->colour - (int)1);
			HX_STACK_LINE(4284)
			n1->colour = (int)1;
			HX_STACK_LINE(4285)
			n3->colour = (int)1;
			HX_STACK_LINE(4286)
			if (((n2 == this->parent))){
				HX_STACK_LINE(4286)
				this->parent->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4287)
				if (((bool((n2->colour == (int)0)) && bool((n2->parent->colour == (int)0))))){
					HX_STACK_LINE(4288)
					x = n2;
					HX_STACK_LINE(4289)
					continue;
				}
			}
			HX_STACK_LINE(4291)
			break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_dbl_red,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::__fix_neg_red( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert negred){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::__fix_neg_red","zpp_nape/util/RBTree.hx",4138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(negred,"negred");
		HX_STACK_LINE(4139)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = negred->parent;		HX_STACK_VAR(parent,"parent");
		struct _Function_1_1{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4140);
				{
					HX_STACK_LINE(4141)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->prev;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(4142)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->next;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(4143)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->prev;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(4144)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->next;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(4145)
					nl->colour = (int)0;
					HX_STACK_LINE(4146)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(4147)
					{
						HX_STACK_LINE(4148)
						negred->next = trl;
						HX_STACK_LINE(4149)
						if (((trl != null()))){
							HX_STACK_LINE(4149)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(4151)
					{
						HX_STACK_LINE(4152)
						::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(4153)
						parent->data = nr->data;
						HX_STACK_LINE(4154)
						nr->data = t;
					}
					HX_STACK_LINE(4156)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(4156)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(4157)
					{
						HX_STACK_LINE(4158)
						nr->prev = trr;
						HX_STACK_LINE(4159)
						if (((trr != null()))){
							HX_STACK_LINE(4159)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(4161)
					{
						HX_STACK_LINE(4162)
						nr->next = parent->next;
						HX_STACK_LINE(4163)
						if (((parent->next != null()))){
							HX_STACK_LINE(4163)
							parent->next->parent = nr;
						}
					}
					HX_STACK_LINE(4165)
					{
						HX_STACK_LINE(4166)
						parent->next = nr;
						HX_STACK_LINE(4167)
						if (((nr != null()))){
							HX_STACK_LINE(4167)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(4169)
					return nl;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &negred,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &parent,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4171);
				{
					HX_STACK_LINE(4172)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nl = negred->next;		HX_STACK_VAR(nl,"nl");
					HX_STACK_LINE(4173)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert nr = negred->prev;		HX_STACK_VAR(nr,"nr");
					HX_STACK_LINE(4174)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trl = nr->next;		HX_STACK_VAR(trl,"trl");
					HX_STACK_LINE(4175)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert trr = nr->prev;		HX_STACK_VAR(trr,"trr");
					HX_STACK_LINE(4176)
					nl->colour = (int)0;
					HX_STACK_LINE(4177)
					negred->colour = parent->colour = (int)1;
					HX_STACK_LINE(4178)
					{
						HX_STACK_LINE(4179)
						negred->prev = trl;
						HX_STACK_LINE(4180)
						if (((trl != null()))){
							HX_STACK_LINE(4180)
							trl->parent = negred;
						}
					}
					HX_STACK_LINE(4182)
					{
						HX_STACK_LINE(4183)
						::zpp_nape::geom::ZPP_SimpleVert t = parent->data;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(4184)
						parent->data = nr->data;
						HX_STACK_LINE(4185)
						nr->data = t;
					}
					HX_STACK_LINE(4187)
					if (((__this->swapped_dyn() != null()))){
						HX_STACK_LINE(4187)
						__this->swapped(parent->data,nr->data);
					}
					HX_STACK_LINE(4188)
					{
						HX_STACK_LINE(4189)
						nr->next = trr;
						HX_STACK_LINE(4190)
						if (((trr != null()))){
							HX_STACK_LINE(4190)
							trr->parent = nr;
						}
					}
					HX_STACK_LINE(4192)
					{
						HX_STACK_LINE(4193)
						nr->prev = parent->prev;
						HX_STACK_LINE(4194)
						if (((parent->prev != null()))){
							HX_STACK_LINE(4194)
							parent->prev->parent = nr;
						}
					}
					HX_STACK_LINE(4196)
					{
						HX_STACK_LINE(4197)
						parent->prev = nr;
						HX_STACK_LINE(4198)
						if (((nr != null()))){
							HX_STACK_LINE(4198)
							nr->parent = parent;
						}
					}
					HX_STACK_LINE(4200)
					return nl;
				}
				return null();
			}
		};
		HX_STACK_LINE(4140)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = (  (((parent->prev == negred))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_1_1::Block(negred,parent,this)) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_1_2::Block(negred,parent,this)) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4202)
		if (((bool((child->prev != null())) && bool((child->prev->colour == (int)0))))){
			HX_STACK_LINE(4202)
			this->__fix_dbl_red(child->prev);
		}
		else{
			HX_STACK_LINE(4203)
			if (((bool((child->next != null())) && bool((child->next->colour == (int)0))))){
				HX_STACK_LINE(4203)
				this->__fix_dbl_red(child->next);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,__fix_neg_red,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::clear_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node,Dynamic lambda){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear_node","zpp_nape/util/RBTree.hx",4103);
	HX_STACK_THIS(this);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(lambda,"lambda");
	HX_STACK_LINE(4104)
	{
	}
	HX_STACK_LINE(4112)
	lambda(node->data).Cast< Void >();
	HX_STACK_LINE(4113)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = node->parent;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4114)
	if (((ret != null()))){
		HX_STACK_LINE(4115)
		if (((node == ret->prev))){
			HX_STACK_LINE(4115)
			ret->prev = null();
		}
		else{
			HX_STACK_LINE(4116)
			ret->next = null();
		}
		HX_STACK_LINE(4117)
		node->parent = null();
	}
	HX_STACK_LINE(4119)
	{
		HX_STACK_LINE(4120)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = node;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4121)
		{
		}
		HX_STACK_LINE(4129)
		{
			HX_STACK_LINE(4129)
			o->data = null();
			HX_STACK_LINE(4129)
			o->lt = null();
			HX_STACK_LINE(4129)
			o->swapped = null();
		}
		HX_STACK_LINE(4130)
		o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(4131)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4136)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Set_ZPP_SimpleVert_obj,clear_node,return )

Void ZPP_Set_ZPP_SimpleVert_obj::clear_with( Dynamic lambda){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear_with","zpp_nape/util/RBTree.hx",4094);
		HX_STACK_THIS(this);
		HX_STACK_ARG(lambda,"lambda");
		HX_STACK_LINE(4094)
		if (((this->parent == null()))){
			HX_STACK_LINE(4095)
			return null();
		}
		else{
			HX_STACK_LINE(4097)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4098)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( Dynamic &lambda,::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4098);
						{
							HX_STACK_LINE(4098)
							{
							}
							HX_STACK_LINE(4098)
							lambda(cur->data).Cast< Void >();
							HX_STACK_LINE(4098)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4098)
							if (((ret != null()))){
								HX_STACK_LINE(4098)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4098)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4098)
									ret->next = null();
								}
								HX_STACK_LINE(4098)
								cur->parent = null();
							}
							HX_STACK_LINE(4098)
							{
								HX_STACK_LINE(4098)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4098)
								{
								}
								HX_STACK_LINE(4098)
								{
									HX_STACK_LINE(4098)
									o->data = null();
									HX_STACK_LINE(4098)
									o->lt = null();
									HX_STACK_LINE(4098)
									o->swapped = null();
								}
								HX_STACK_LINE(4098)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4098)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4098)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4098)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_3_1::Block(lambda,cur)) )) );
			}
			HX_STACK_LINE(4099)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,clear_with,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::clear","zpp_nape/util/RBTree.hx",4093);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4093)
		if (((this->parent == null()))){
			HX_STACK_LINE(4093)
			Dynamic();
		}
		else{
			HX_STACK_LINE(4093)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4093)
			while(((cur != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert &cur){
						HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",4093);
						{
							HX_STACK_LINE(4093)
							{
							}
							HX_STACK_LINE(4093)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ret = cur->parent;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4093)
							if (((ret != null()))){
								HX_STACK_LINE(4093)
								if (((cur == ret->prev))){
									HX_STACK_LINE(4093)
									ret->prev = null();
								}
								else{
									HX_STACK_LINE(4093)
									ret->next = null();
								}
								HX_STACK_LINE(4093)
								cur->parent = null();
							}
							HX_STACK_LINE(4093)
							{
								HX_STACK_LINE(4093)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(4093)
								{
								}
								HX_STACK_LINE(4093)
								{
									HX_STACK_LINE(4093)
									o->data = null();
									HX_STACK_LINE(4093)
									o->lt = null();
									HX_STACK_LINE(4093)
									o->swapped = null();
								}
								HX_STACK_LINE(4093)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
								HX_STACK_LINE(4093)
								::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
							}
							HX_STACK_LINE(4093)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4093)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(_Function_3_1::Block(cur)) )) );
			}
			HX_STACK_LINE(4093)
			this->parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,clear,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::remove_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::remove_node","zpp_nape/util/RBTree.hx",3973);
		HX_STACK_THIS(this);
		HX_STACK_ARG(cur,"cur");
		HX_STACK_LINE(3974)
		{
		}
		HX_STACK_LINE(3982)
		if (((bool((cur->next != null())) && bool((cur->prev != null()))))){
			HX_STACK_LINE(3983)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert sm = cur->next;		HX_STACK_VAR(sm,"sm");
			HX_STACK_LINE(3984)
			while(((sm->prev != null()))){
				HX_STACK_LINE(3984)
				sm = sm->prev;
			}
			HX_STACK_LINE(3985)
			{
				HX_STACK_LINE(3986)
				::zpp_nape::geom::ZPP_SimpleVert t = cur->data;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(3987)
				cur->data = sm->data;
				HX_STACK_LINE(3988)
				sm->data = t;
			}
			HX_STACK_LINE(3990)
			if (((this->swapped_dyn() != null()))){
				HX_STACK_LINE(3990)
				this->swapped(cur->data,sm->data);
			}
			HX_STACK_LINE(3991)
			cur = sm;
		}
		HX_STACK_LINE(3993)
		{
		}
		HX_STACK_LINE(4001)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child = (  (((cur->prev == null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert(cur->prev) );		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(4002)
		if (((cur->colour == (int)1))){
			HX_STACK_LINE(4002)
			if (((bool((cur->prev != null())) || bool((cur->next != null()))))){
				HX_STACK_LINE(4003)
				child->colour = (int)1;
			}
			else{
				HX_STACK_LINE(4004)
				if (((cur->parent != null()))){
					HX_STACK_LINE(4005)
					::zpp_nape::util::ZPP_Set_ZPP_SimpleVert parent = cur->parent;		HX_STACK_VAR(parent,"parent");
					HX_STACK_LINE(4006)
					while((true)){
						HX_STACK_LINE(4007)
						(parent->colour)++;
						HX_STACK_LINE(4008)
						(parent->prev->colour)--;
						HX_STACK_LINE(4009)
						(parent->next->colour)--;
						HX_STACK_LINE(4010)
						{
							HX_STACK_LINE(4011)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->prev;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4012)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4013)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4014)
								break;
							}
							else{
								HX_STACK_LINE(4016)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4017)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4019)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4020)
										break;
									}
									HX_STACK_LINE(4023)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4025)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4026)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4031)
						{
							HX_STACK_LINE(4032)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert child1 = parent->next;		HX_STACK_VAR(child1,"child1");
							HX_STACK_LINE(4033)
							if (((child1->colour == (int)-1))){
								HX_STACK_LINE(4034)
								this->__fix_neg_red(child1);
								HX_STACK_LINE(4035)
								break;
							}
							else{
								HX_STACK_LINE(4037)
								if (((child1->colour == (int)0))){
									HX_STACK_LINE(4038)
									if (((bool((child1->prev != null())) && bool((child1->prev->colour == (int)0))))){
										HX_STACK_LINE(4040)
										this->__fix_dbl_red(child1->prev);
										HX_STACK_LINE(4041)
										break;
									}
									HX_STACK_LINE(4044)
									if (((bool((child1->next != null())) && bool((child1->next->colour == (int)0))))){
										HX_STACK_LINE(4046)
										this->__fix_dbl_red(child1->next);
										HX_STACK_LINE(4047)
										break;
									}
								}
							}
						}
						HX_STACK_LINE(4052)
						if (((parent->colour == (int)2))){
							HX_STACK_LINE(4052)
							if (((parent->parent == null()))){
								HX_STACK_LINE(4053)
								parent->colour = (int)1;
							}
							else{
								HX_STACK_LINE(4057)
								parent = parent->parent;
								HX_STACK_LINE(4058)
								continue;
							}
						}
						HX_STACK_LINE(4061)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(4065)
		{
			HX_STACK_LINE(4066)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert par = cur->parent;		HX_STACK_VAR(par,"par");
			HX_STACK_LINE(4067)
			if (((par == null()))){
				HX_STACK_LINE(4067)
				this->parent = child;
			}
			else{
				HX_STACK_LINE(4070)
				if (((par->prev == cur))){
					HX_STACK_LINE(4070)
					par->prev = child;
				}
				else{
					HX_STACK_LINE(4071)
					par->next = child;
				}
			}
			HX_STACK_LINE(4072)
			if (((child != null()))){
				HX_STACK_LINE(4072)
				child->parent = par;
			}
		}
		HX_STACK_LINE(4074)
		cur->parent = cur->prev = cur->next = null();
		HX_STACK_LINE(4075)
		{
			HX_STACK_LINE(4076)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert o = cur;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4077)
			{
			}
			HX_STACK_LINE(4085)
			{
				HX_STACK_LINE(4085)
				o->data = null();
				HX_STACK_LINE(4085)
				o->lt = null();
				HX_STACK_LINE(4085)
				o->swapped = null();
			}
			HX_STACK_LINE(4086)
			o->next = ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(4087)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove_node,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::predecessor","zpp_nape/util/RBTree.hx",3961);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3962)
	{
	}
	HX_STACK_LINE(3970)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->predecessor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3971)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleVert(null()) : ::zpp_nape::geom::ZPP_SimpleVert(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::successor","zpp_nape/util/RBTree.hx",3949);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3950)
	{
	}
	HX_STACK_LINE(3958)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->successor_node(this->find(obj));		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(3959)
	return (  (((node == null()))) ? ::zpp_nape::geom::ZPP_SimpleVert(null()) : ::zpp_nape::geom::ZPP_SimpleVert(node->data) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::predecessor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::predecessor_node","zpp_nape/util/RBTree.hx",3926);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(3927)
	{
	}
	HX_STACK_LINE(3935)
	if (((cur->prev != null()))){
		HX_STACK_LINE(3936)
		cur = cur->prev;
		HX_STACK_LINE(3937)
		while(((cur->next != null()))){
			HX_STACK_LINE(3937)
			cur = cur->next;
		}
	}
	else{
		HX_STACK_LINE(3940)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3941)
		cur = cur->parent;
		HX_STACK_LINE(3942)
		while(((bool((cur != null())) && bool((cur->next != pre))))){
			HX_STACK_LINE(3943)
			pre = cur;
			HX_STACK_LINE(3944)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3947)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,predecessor_node,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::successor_node( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::successor_node","zpp_nape/util/RBTree.hx",3903);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_LINE(3904)
	{
	}
	HX_STACK_LINE(3912)
	if (((cur->next != null()))){
		HX_STACK_LINE(3913)
		cur = cur->next;
		HX_STACK_LINE(3914)
		while(((cur->prev != null()))){
			HX_STACK_LINE(3914)
			cur = cur->prev;
		}
	}
	else{
		HX_STACK_LINE(3917)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert pre = cur;		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3918)
		cur = cur->parent;
		HX_STACK_LINE(3919)
		while(((bool((cur != null())) && bool((cur->prev != pre))))){
			HX_STACK_LINE(3920)
			pre = cur;
			HX_STACK_LINE(3921)
			cur = cur->parent;
		}
	}
	HX_STACK_LINE(3924)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,successor_node,return )

Void ZPP_Set_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::remove","zpp_nape/util/RBTree.hx",3891);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3892)
		::zpp_nape::util::ZPP_Set_ZPP_SimpleVert node = this->find(obj);		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(3893)
		{
		}
		HX_STACK_LINE(3901)
		this->remove_node(node);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::pop_front( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::pop_front","zpp_nape/util/RBTree.hx",3876);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3877)
	{
	}
	HX_STACK_LINE(3885)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3886)
	while(((cur->prev != null()))){
		HX_STACK_LINE(3886)
		cur = cur->prev;
	}
	HX_STACK_LINE(3887)
	::zpp_nape::geom::ZPP_SimpleVert ret = cur->data;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3888)
	this->remove_node(cur);
	HX_STACK_LINE(3889)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,pop_front,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::first( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::first","zpp_nape/util/RBTree.hx",3863);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3864)
	{
	}
	HX_STACK_LINE(3872)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3873)
	while(((cur->prev != null()))){
		HX_STACK_LINE(3873)
		cur = cur->prev;
	}
	HX_STACK_LINE(3874)
	return cur->data;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,first,return )

::zpp_nape::geom::ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::lower_bound( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::lower_bound","zpp_nape/util/RBTree.hx",3826);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleVert Block( ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert_obj *__this,::zpp_nape::geom::ZPP_SimpleVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/RBTree.hx",3827);
			{
				HX_STACK_LINE(3828)
				::zpp_nape::geom::ZPP_SimpleVert ret = null();		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3829)
				{
					HX_STACK_LINE(3830)
					{
					}
					HX_STACK_LINE(3838)
					if ((!(__this->empty()))){
						HX_STACK_LINE(3839)
						::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = __this->parent;		HX_STACK_VAR(set_ite,"set_ite");
						HX_STACK_LINE(3840)
						while(((set_ite->prev != null()))){
							HX_STACK_LINE(3840)
							set_ite = set_ite->prev;
						}
						HX_STACK_LINE(3841)
						while(((set_ite != null()))){
							HX_STACK_LINE(3842)
							::zpp_nape::geom::ZPP_SimpleVert elt = set_ite->data;		HX_STACK_VAR(elt,"elt");
							HX_STACK_LINE(3843)
							if ((!(__this->lt(elt,obj)))){
								HX_STACK_LINE(3845)
								ret = elt;
								HX_STACK_LINE(3846)
								break;
							}
							HX_STACK_LINE(3849)
							if (((set_ite->next != null()))){
								HX_STACK_LINE(3850)
								set_ite = set_ite->next;
								HX_STACK_LINE(3851)
								while(((set_ite->prev != null()))){
									HX_STACK_LINE(3851)
									set_ite = set_ite->prev;
								}
							}
							else{
								HX_STACK_LINE(3854)
								while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
									HX_STACK_LINE(3854)
									set_ite = set_ite->parent;
								}
								HX_STACK_LINE(3855)
								set_ite = set_ite->parent;
							}
						}
					}
				}
				HX_STACK_LINE(3860)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3826)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,lower_bound,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::find_weak","zpp_nape/util/RBTree.hx",3817);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3818)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3819)
	while(((cur != null()))){
		HX_STACK_LINE(3819)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(3820)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3821)
			if ((this->lt(cur->data,obj))){
				HX_STACK_LINE(3821)
				cur = cur->next;
			}
			else{
				HX_STACK_LINE(3822)
				break;
			}
		}
	}
	HX_STACK_LINE(3824)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find_weak,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has_weak( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::has_weak","zpp_nape/util/RBTree.hx",3817);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3817)
	return (this->find_weak(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has_weak,return )

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::find( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::find","zpp_nape/util/RBTree.hx",3809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3810)
	::zpp_nape::util::ZPP_Set_ZPP_SimpleVert cur = this->parent;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3811)
	while(((bool((cur != null())) && bool((cur->data != obj))))){
		HX_STACK_LINE(3811)
		if ((this->lt(obj,cur->data))){
			HX_STACK_LINE(3812)
			cur = cur->prev;
		}
		else{
			HX_STACK_LINE(3813)
			cur = cur->next;
		}
	}
	HX_STACK_LINE(3815)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,find,return )

bool ZPP_Set_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::has","zpp_nape/util/RBTree.hx",3809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3809)
	return (this->find(obj) != null());
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Set_ZPP_SimpleVert_obj,has,return )

int ZPP_Set_ZPP_SimpleVert_obj::size( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::size","zpp_nape/util/RBTree.hx",3779);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3780)
	int ret = (int)0;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3781)
	{
		HX_STACK_LINE(3782)
		{
		}
		HX_STACK_LINE(3790)
		if ((!(this->empty()))){
			HX_STACK_LINE(3791)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(3792)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(3792)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(3793)
			while(((set_ite != null()))){
				HX_STACK_LINE(3794)
				::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3795)
				(ret)++;
				HX_STACK_LINE(3796)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(3797)
					set_ite = set_ite->next;
					HX_STACK_LINE(3798)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(3798)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(3801)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(3801)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(3802)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(3807)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,size,return )

bool ZPP_Set_ZPP_SimpleVert_obj::singular( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::singular","zpp_nape/util/RBTree.hx",3779);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3779)
	return (bool((bool((this->parent != null())) && bool((this->parent->prev == null())))) && bool((this->parent->next == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,singular,return )

bool ZPP_Set_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::empty","zpp_nape/util/RBTree.hx",3779);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3779)
	return (this->parent == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,empty,return )

bool ZPP_Set_ZPP_SimpleVert_obj::verify( ){
	HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::verify","zpp_nape/util/RBTree.hx",3714);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3715)
	{
		HX_STACK_LINE(3716)
		{
		}
		HX_STACK_LINE(3724)
		if ((!(this->empty()))){
			HX_STACK_LINE(3725)
			::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite = this->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(3726)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(3726)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(3727)
			while(((set_ite != null()))){
				HX_STACK_LINE(3728)
				::zpp_nape::geom::ZPP_SimpleVert i = set_ite->data;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3729)
				{
					HX_STACK_LINE(3730)
					bool prei = true;		HX_STACK_VAR(prei,"prei");
					HX_STACK_LINE(3731)
					{
						HX_STACK_LINE(3732)
						{
						}
						HX_STACK_LINE(3740)
						if ((!(this->empty()))){
							HX_STACK_LINE(3741)
							::zpp_nape::util::ZPP_Set_ZPP_SimpleVert set_ite1 = this->parent;		HX_STACK_VAR(set_ite1,"set_ite1");
							HX_STACK_LINE(3742)
							while(((set_ite1->prev != null()))){
								HX_STACK_LINE(3742)
								set_ite1 = set_ite1->prev;
							}
							HX_STACK_LINE(3743)
							while(((set_ite1 != null()))){
								HX_STACK_LINE(3744)
								::zpp_nape::geom::ZPP_SimpleVert j = set_ite1->data;		HX_STACK_VAR(j,"j");
								HX_STACK_LINE(3745)
								if ((!(prei))){
									HX_STACK_LINE(3746)
									if (((bool(!(this->lt(i,j))) && bool(this->lt(j,i))))){
										HX_STACK_LINE(3747)
										return false;
									}
								}
								else{
									HX_STACK_LINE(3749)
									if (((i == j))){
										HX_STACK_LINE(3749)
										prei = false;
									}
									else{
										HX_STACK_LINE(3750)
										if (((bool(!(this->lt(j,i))) && bool(this->lt(i,j))))){
											HX_STACK_LINE(3751)
											return false;
										}
									}
								}
								HX_STACK_LINE(3754)
								if (((set_ite1->next != null()))){
									HX_STACK_LINE(3755)
									set_ite1 = set_ite1->next;
									HX_STACK_LINE(3756)
									while(((set_ite1->prev != null()))){
										HX_STACK_LINE(3756)
										set_ite1 = set_ite1->prev;
									}
								}
								else{
									HX_STACK_LINE(3759)
									while(((bool((set_ite1->parent != null())) && bool((set_ite1 == set_ite1->parent->next))))){
										HX_STACK_LINE(3759)
										set_ite1 = set_ite1->parent;
									}
									HX_STACK_LINE(3760)
									set_ite1 = set_ite1->parent;
								}
							}
						}
					}
				}
				HX_STACK_LINE(3766)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(3767)
					set_ite = set_ite->next;
					HX_STACK_LINE(3768)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(3768)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(3771)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(3771)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(3772)
					set_ite = set_ite->parent;
				}
			}
		}
	}
	HX_STACK_LINE(3777)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,verify,return )

Void ZPP_Set_ZPP_SimpleVert_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::alloc","zpp_nape/util/RBTree.hx",3705);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,alloc,(void))

Void ZPP_Set_ZPP_SimpleVert_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Set_ZPP_SimpleVert::free","zpp_nape/util/RBTree.hx",3698);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3699)
		this->data = null();
		HX_STACK_LINE(3700)
		this->lt = null();
		HX_STACK_LINE(3701)
		this->swapped = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Set_ZPP_SimpleVert_obj,free,(void))

::zpp_nape::util::ZPP_Set_ZPP_SimpleVert ZPP_Set_ZPP_SimpleVert_obj::zpp_pool;


ZPP_Set_ZPP_SimpleVert_obj::ZPP_Set_ZPP_SimpleVert_obj()
{
}

void ZPP_Set_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Set_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(colour,"colour");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(swapped,"swapped");
	HX_MARK_MEMBER_NAME(lt,"lt");
	HX_MARK_END_CLASS();
}

void ZPP_Set_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colour,"colour");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(prev,"prev");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(swapped,"swapped");
	HX_VISIT_MEMBER_NAME(lt,"lt");
}

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZPP_Set_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lt") ) { lt=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::zpp_nape::geom::ZPP_SimpleVert >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colour") ) { colour=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swapped") ) { swapped=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_SimpleVert >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Set_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Set_ZPP_SimpleVert_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Set_ZPP_SimpleVert_obj::__mClass;

void ZPP_Set_ZPP_SimpleVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_Set_ZPP_SimpleVert"), hx::TCanCast< ZPP_Set_ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Set_ZPP_SimpleVert_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace util
