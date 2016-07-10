#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CallbackSet_obj::__construct()
{
HX_STACK_PUSH("ZPP_CallbackSet::new","zpp_nape/space/Space.hx",609);
{
	HX_STACK_LINE(1012)
	this->lazydel = false;
	HX_STACK_LINE(1011)
	this->freed = false;
	HX_STACK_LINE(676)
	this->length = (int)0;
	HX_STACK_LINE(675)
	this->pushmod = false;
	HX_STACK_LINE(674)
	this->modified = false;
	HX_STACK_LINE(673)
	this->_inuse = false;
	HX_STACK_LINE(668)
	this->next = null();
	HX_STACK_LINE(613)
	this->int2 = null();
	HX_STACK_LINE(612)
	this->int1 = null();
	HX_STACK_LINE(611)
	this->di = (int)0;
	HX_STACK_LINE(610)
	this->id = (int)0;
	HX_STACK_LINE(1041)
	this->arbiters = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();
}
;
	return null();
}

ZPP_CallbackSet_obj::~ZPP_CallbackSet_obj() { }

Dynamic ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZPP_CallbackSet_obj > ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CallbackSet_obj > result = new ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

bool ZPP_CallbackSet_obj::sleeping( ){
	HX_STACK_PUSH("ZPP_CallbackSet::sleeping","zpp_nape/space/Space.hx",1088);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1089)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1090)
	{
		HX_STACK_LINE(1091)
		ret = true;
		HX_STACK_LINE(1092)
		{
			HX_STACK_LINE(1093)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1094)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1095)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1096)
				if ((x->sleeping)){
					HX_STACK_LINE(1099)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1100)
					continue;
				}
				else{
					HX_STACK_LINE(1104)
					ret = false;
					HX_STACK_LINE(1105)
					break;
				}
				HX_STACK_LINE(1108)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1112)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,sleeping,return )

bool ZPP_CallbackSet_obj::really_empty( ){
	HX_STACK_PUSH("ZPP_CallbackSet::really_empty","zpp_nape/space/Space.hx",1083);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1083)
	return (this->arbiters->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,really_empty,return )

bool ZPP_CallbackSet_obj::empty_arb( int type){
	HX_STACK_PUSH("ZPP_CallbackSet::empty_arb","zpp_nape/space/Space.hx",1055);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(1056)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(1057)
	{
		HX_STACK_LINE(1058)
		retvar = true;
		HX_STACK_LINE(1059)
		{
			HX_STACK_LINE(1060)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1061)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1062)
				::zpp_nape::dynamics::ZPP_Arbiter x = cx_ite->elt;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(1063)
				if (((((int(x->type) & int(type))) == (int)0))){
					HX_STACK_LINE(1066)
					cx_ite = cx_ite->next;
					HX_STACK_LINE(1067)
					continue;
				}
				else{
					HX_STACK_LINE(1071)
					retvar = false;
					HX_STACK_LINE(1072)
					break;
				}
				HX_STACK_LINE(1075)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1079)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,empty_arb,return )

Void ZPP_CallbackSet_obj::remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
{
		HX_STACK_PUSH("ZPP_CallbackSet::remove_arb","zpp_nape/space/Space.hx",1055);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(1055)
		::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1055)
		{
		}
		HX_STACK_LINE(1055)
		{
			HX_STACK_LINE(1055)
			{
			}
			HX_STACK_LINE(1055)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1055)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1055)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1055)
			while(((cur != null()))){
				HX_STACK_LINE(1055)
				if (((cur->elt == x))){
					HX_STACK_LINE(1055)
					{
						HX_STACK_LINE(1055)
						{
						}
						HX_STACK_LINE(1055)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1055)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1055)
						if (((pre == null()))){
							HX_STACK_LINE(1055)
							old = _this->head;
							HX_STACK_LINE(1055)
							ret1 = old->next;
							HX_STACK_LINE(1055)
							_this->head = ret1;
							HX_STACK_LINE(1055)
							if (((_this->head == null()))){
								HX_STACK_LINE(1055)
								_this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1055)
							old = pre->next;
							HX_STACK_LINE(1055)
							ret1 = old->next;
							HX_STACK_LINE(1055)
							pre->next = ret1;
							HX_STACK_LINE(1055)
							if (((ret1 == null()))){
								HX_STACK_LINE(1055)
								_this->pushmod = true;
							}
						}
						HX_STACK_LINE(1055)
						{
						}
						HX_STACK_LINE(1055)
						{
							HX_STACK_LINE(1055)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1055)
							{
							}
							HX_STACK_LINE(1055)
							o->elt = null();
							HX_STACK_LINE(1055)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
							HX_STACK_LINE(1055)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1055)
						_this->modified = true;
						HX_STACK_LINE(1055)
						(_this->length)--;
						HX_STACK_LINE(1055)
						_this->pushmod = true;
						HX_STACK_LINE(1055)
						ret1;
					}
					HX_STACK_LINE(1055)
					ret = true;
					HX_STACK_LINE(1055)
					break;
				}
				HX_STACK_LINE(1055)
				pre = cur;
				HX_STACK_LINE(1055)
				cur = cur->next;
			}
			HX_STACK_LINE(1055)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove_arb,(void))

bool ZPP_CallbackSet_obj::try_remove_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_PUSH("ZPP_CallbackSet::try_remove_arb","zpp_nape/space/Space.hx",1052);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &x){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1053);
			{
				HX_STACK_LINE(1053)
				::zpp_nape::util::ZNPList_ZPP_Arbiter _this = __this->arbiters;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1053)
				{
				}
				HX_STACK_LINE(1053)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1053)
				::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1053)
				bool ret = false;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1053)
				while(((cur != null()))){
					HX_STACK_LINE(1053)
					if (((cur->elt == x))){
						HX_STACK_LINE(1053)
						{
							HX_STACK_LINE(1053)
							{
							}
							HX_STACK_LINE(1053)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
							HX_STACK_LINE(1053)
							::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(1053)
							if (((pre == null()))){
								HX_STACK_LINE(1053)
								old = _this->head;
								HX_STACK_LINE(1053)
								ret1 = old->next;
								HX_STACK_LINE(1053)
								_this->head = ret1;
								HX_STACK_LINE(1053)
								if (((_this->head == null()))){
									HX_STACK_LINE(1053)
									_this->pushmod = true;
								}
							}
							else{
								HX_STACK_LINE(1053)
								old = pre->next;
								HX_STACK_LINE(1053)
								ret1 = old->next;
								HX_STACK_LINE(1053)
								pre->next = ret1;
								HX_STACK_LINE(1053)
								if (((ret1 == null()))){
									HX_STACK_LINE(1053)
									_this->pushmod = true;
								}
							}
							HX_STACK_LINE(1053)
							{
							}
							HX_STACK_LINE(1053)
							{
								HX_STACK_LINE(1053)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1053)
								{
								}
								HX_STACK_LINE(1053)
								o->elt = null();
								HX_STACK_LINE(1053)
								o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(1053)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1053)
							_this->modified = true;
							HX_STACK_LINE(1053)
							(_this->length)--;
							HX_STACK_LINE(1053)
							_this->pushmod = true;
							HX_STACK_LINE(1053)
							ret1;
						}
						HX_STACK_LINE(1053)
						ret = true;
						HX_STACK_LINE(1053)
						break;
					}
					HX_STACK_LINE(1053)
					pre = cur;
					HX_STACK_LINE(1053)
					cur = cur->next;
				}
				HX_STACK_LINE(1053)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1052)
	return _Function_1_1::Block(this,x);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove_arb,return )

bool ZPP_CallbackSet_obj::add_arb( ::zpp_nape::dynamics::ZPP_Arbiter x){
	HX_STACK_PUSH("ZPP_CallbackSet::add_arb","zpp_nape/space/Space.hx",1045);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::dynamics::ZPP_Arbiter &x){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1046);
			{
				HX_STACK_LINE(1046)
				{
				}
				HX_STACK_LINE(1046)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1046)
				{
					HX_STACK_LINE(1046)
					ret = false;
					HX_STACK_LINE(1046)
					{
						HX_STACK_LINE(1046)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = __this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1046)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1046)
							::zpp_nape::dynamics::ZPP_Arbiter npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1046)
							if (((npite == x))){
								HX_STACK_LINE(1046)
								ret = true;
								HX_STACK_LINE(1046)
								break;
							}
							HX_STACK_LINE(1046)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1046)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1045)
	if ((!(_Function_1_1::Block(this,x)))){
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZNPList_ZPP_Arbiter _this = this->arbiters;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1047)
			{
			}
			struct _Function_3_1{
				inline static ::zpp_nape::util::ZNPNode_ZPP_Arbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &x){
					HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1047);
					{
						HX_STACK_LINE(1047)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1047)
						{
							HX_STACK_LINE(1047)
							if (((::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool == null()))){
								HX_STACK_LINE(1047)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::__new();
							}
							else{
								HX_STACK_LINE(1047)
								ret = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
								HX_STACK_LINE(1047)
								::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = ret->next;
								HX_STACK_LINE(1047)
								ret->next = null();
							}
							HX_STACK_LINE(1047)
							Dynamic();
						}
						HX_STACK_LINE(1047)
						ret->elt = x;
						HX_STACK_LINE(1047)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1047)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter temp = _Function_3_1::Block(x);		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(1047)
			temp->next = _this->head;
			HX_STACK_LINE(1047)
			_this->head = temp;
			HX_STACK_LINE(1047)
			_this->modified = true;
			HX_STACK_LINE(1047)
			(_this->length)++;
			HX_STACK_LINE(1047)
			x;
		}
		HX_STACK_LINE(1048)
		return true;
	}
	else{
		HX_STACK_LINE(1050)
		return false;
	}
	HX_STACK_LINE(1045)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add_arb,return )

Void ZPP_CallbackSet_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::alloc","zpp_nape/space/Space.hx",1030);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1031)
		this->freed = false;
		HX_STACK_LINE(1032)
		this->lazydel = false;
		HX_STACK_LINE(1034)
		this->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1035)
		this->COLLISIONstamp = (int)0;
		HX_STACK_LINE(1036)
		this->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1037)
		this->SENSORstamp = (int)0;
		HX_STACK_LINE(1038)
		this->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
		HX_STACK_LINE(1039)
		this->FLUIDstamp = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,alloc,(void))

Void ZPP_CallbackSet_obj::free( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::free","zpp_nape/space/Space.hx",1015);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1016)
		this->int1 = this->int2 = null();
		HX_STACK_LINE(1017)
		this->id = this->di = (int)-1;
		HX_STACK_LINE(1018)
		this->freed = true;
		HX_STACK_LINE(1019)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,free,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_PUSH("ZPP_CallbackSet::at","zpp_nape/space/Space.hx",975);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(976)
	{
	}
	HX_STACK_LINE(984)
	::zpp_nape::space::ZPP_CallbackSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(985)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_CallbackSet(it) : ::zpp_nape::space::ZPP_CallbackSet(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_CallbackSet::iterator_at","zpp_nape/space/Space.hx",962);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(963)
	{
	}
	HX_STACK_LINE(971)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(972)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(972)
		ret = ret->next;
	}
	HX_STACK_LINE(973)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::back( ){
	HX_STACK_PUSH("ZPP_CallbackSet::back","zpp_nape/space/Space.hx",953);
	HX_STACK_THIS(this);
	HX_STACK_LINE(954)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(955)
	::zpp_nape::space::ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(956)
	while(((cur != null()))){
		HX_STACK_LINE(957)
		ret = cur;
		HX_STACK_LINE(958)
		cur = cur->next;
	}
	HX_STACK_LINE(960)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,back,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::front( ){
	HX_STACK_PUSH("ZPP_CallbackSet::front","zpp_nape/space/Space.hx",953);
	HX_STACK_THIS(this);
	HX_STACK_LINE(953)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,front,return )

bool ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_has","zpp_nape/space/Space.hx",923);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(924)
	{
	}
	HX_STACK_LINE(932)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(933)
	{
		HX_STACK_LINE(934)
		ret = false;
		HX_STACK_LINE(935)
		{
			HX_STACK_LINE(936)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(937)
			while(((cx_ite != null()))){
				HX_STACK_LINE(938)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(939)
				if (((npite == obj))){
					HX_STACK_LINE(941)
					ret = true;
					HX_STACK_LINE(942)
					break;
				}
				HX_STACK_LINE(945)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(949)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_has,return )

bool ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::has","zpp_nape/space/Space.hx",921);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",921);
			{
				HX_STACK_LINE(921)
				{
				}
				HX_STACK_LINE(921)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(921)
				{
					HX_STACK_LINE(921)
					ret = false;
					HX_STACK_LINE(921)
					{
						HX_STACK_LINE(921)
						::zpp_nape::space::ZPP_CallbackSet cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(921)
						while(((cx_ite != null()))){
							HX_STACK_LINE(921)
							::zpp_nape::space::ZPP_CallbackSet npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(921)
							if (((npite == obj))){
								HX_STACK_LINE(921)
								ret = true;
								HX_STACK_LINE(921)
								break;
							}
							HX_STACK_LINE(921)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(921)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(921)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,has,return )

int ZPP_CallbackSet_obj::size( ){
	HX_STACK_PUSH("ZPP_CallbackSet::size","zpp_nape/space/Space.hx",921);
	HX_STACK_THIS(this);
	HX_STACK_LINE(921)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,size,return )

bool ZPP_CallbackSet_obj::empty( ){
	HX_STACK_PUSH("ZPP_CallbackSet::empty","zpp_nape/space/Space.hx",919);
	HX_STACK_THIS(this);
	HX_STACK_LINE(919)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,empty,return )

Void ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::reverse","zpp_nape/space/Space.hx",904);
		HX_STACK_THIS(this);
		HX_STACK_LINE(905)
		::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(906)
		::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(907)
		while(((cur != null()))){
			HX_STACK_LINE(908)
			::zpp_nape::space::ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(909)
			cur->next = pre;
			HX_STACK_LINE(910)
			this->next = cur;
			HX_STACK_LINE(911)
			pre = cur;
			HX_STACK_LINE(912)
			cur = nx;
		}
		HX_STACK_LINE(914)
		this->modified = true;
		HX_STACK_LINE(915)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,reverse,(void))

Void ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_clear","zpp_nape/space/Space.hx",898);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::clear","zpp_nape/space/Space.hx",896);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,clear,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::splice( ::zpp_nape::space::ZPP_CallbackSet pre,int n){
	HX_STACK_PUSH("ZPP_CallbackSet::splice","zpp_nape/space/Space.hx",892);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(893)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(893)
		this->erase(pre);
	}
	HX_STACK_LINE(894)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,splice,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_erase","zpp_nape/space/Space.hx",860);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(861)
	{
	}
	HX_STACK_LINE(869)
	::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(870)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(871)
	if (((pre == null()))){
		HX_STACK_LINE(872)
		old = this->next;
		HX_STACK_LINE(873)
		ret = old->next;
		HX_STACK_LINE(874)
		this->next = ret;
		HX_STACK_LINE(875)
		if (((this->next == null()))){
			HX_STACK_LINE(875)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(878)
		old = pre->next;
		HX_STACK_LINE(879)
		ret = old->next;
		HX_STACK_LINE(880)
		pre->next = ret;
		HX_STACK_LINE(881)
		if (((ret == null()))){
			HX_STACK_LINE(881)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(883)
	old->_inuse = false;
	HX_STACK_LINE(886)
	{
	}
	HX_STACK_LINE(887)
	this->modified = true;
	HX_STACK_LINE(888)
	(this->length)--;
	HX_STACK_LINE(889)
	this->pushmod = true;
	HX_STACK_LINE(890)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::erase( ::zpp_nape::space::ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZPP_CallbackSet::erase","zpp_nape/space/Space.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &pre,::zpp_nape::space::ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",858);
			{
				HX_STACK_LINE(858)
				{
				}
				HX_STACK_LINE(858)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(858)
				::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(858)
				if (((pre == null()))){
					HX_STACK_LINE(858)
					old = __this->next;
					HX_STACK_LINE(858)
					ret = old->next;
					HX_STACK_LINE(858)
					__this->next = ret;
					HX_STACK_LINE(858)
					if (((__this->next == null()))){
						HX_STACK_LINE(858)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(858)
					old = pre->next;
					HX_STACK_LINE(858)
					ret = old->next;
					HX_STACK_LINE(858)
					pre->next = ret;
					HX_STACK_LINE(858)
					if (((ret == null()))){
						HX_STACK_LINE(858)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(858)
				old->_inuse = false;
				HX_STACK_LINE(858)
				{
				}
				HX_STACK_LINE(858)
				__this->modified = true;
				HX_STACK_LINE(858)
				(__this->length)--;
				HX_STACK_LINE(858)
				__this->pushmod = true;
				HX_STACK_LINE(858)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(858)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,erase,return )

bool ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_try_remove","zpp_nape/space/Space.hx",835);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(836)
	{
	}
	HX_STACK_LINE(844)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(845)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(846)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(847)
	while(((cur != null()))){
		HX_STACK_LINE(848)
		if (((cur == obj))){
			HX_STACK_LINE(849)
			{
				HX_STACK_LINE(849)
				{
				}
				HX_STACK_LINE(849)
				::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(849)
				::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(849)
				if (((pre == null()))){
					HX_STACK_LINE(849)
					old = this->next;
					HX_STACK_LINE(849)
					ret1 = old->next;
					HX_STACK_LINE(849)
					this->next = ret1;
					HX_STACK_LINE(849)
					if (((this->next == null()))){
						HX_STACK_LINE(849)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(849)
					old = pre->next;
					HX_STACK_LINE(849)
					ret1 = old->next;
					HX_STACK_LINE(849)
					pre->next = ret1;
					HX_STACK_LINE(849)
					if (((ret1 == null()))){
						HX_STACK_LINE(849)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(849)
				old->_inuse = false;
				HX_STACK_LINE(849)
				{
				}
				HX_STACK_LINE(849)
				this->modified = true;
				HX_STACK_LINE(849)
				(this->length)--;
				HX_STACK_LINE(849)
				this->pushmod = true;
				HX_STACK_LINE(849)
				ret1;
			}
			HX_STACK_LINE(850)
			ret = true;
			HX_STACK_LINE(851)
			break;
		}
		HX_STACK_LINE(853)
		pre = cur;
		HX_STACK_LINE(854)
		cur = cur->next;
	}
	HX_STACK_LINE(856)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_try_remove,return )

Void ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_remove","zpp_nape/space/Space.hx",822);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(823)
		{
		}
		HX_STACK_LINE(831)
		{
			HX_STACK_LINE(831)
			{
			}
			HX_STACK_LINE(831)
			::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(831)
			::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(831)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(831)
			while(((cur != null()))){
				HX_STACK_LINE(831)
				if (((cur == obj))){
					HX_STACK_LINE(831)
					{
						HX_STACK_LINE(831)
						{
						}
						HX_STACK_LINE(831)
						::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(831)
						::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(831)
						if (((pre == null()))){
							HX_STACK_LINE(831)
							old = this->next;
							HX_STACK_LINE(831)
							ret1 = old->next;
							HX_STACK_LINE(831)
							this->next = ret1;
							HX_STACK_LINE(831)
							if (((this->next == null()))){
								HX_STACK_LINE(831)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(831)
							old = pre->next;
							HX_STACK_LINE(831)
							ret1 = old->next;
							HX_STACK_LINE(831)
							pre->next = ret1;
							HX_STACK_LINE(831)
							if (((ret1 == null()))){
								HX_STACK_LINE(831)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(831)
						old->_inuse = false;
						HX_STACK_LINE(831)
						{
						}
						HX_STACK_LINE(831)
						this->modified = true;
						HX_STACK_LINE(831)
						(this->length)--;
						HX_STACK_LINE(831)
						this->pushmod = true;
						HX_STACK_LINE(831)
						ret1;
					}
					HX_STACK_LINE(831)
					ret = true;
					HX_STACK_LINE(831)
					break;
				}
				HX_STACK_LINE(831)
				pre = cur;
				HX_STACK_LINE(831)
				cur = cur->next;
			}
			HX_STACK_LINE(831)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZPP_CallbackSet::try_remove","zpp_nape/space/Space.hx",797);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(798)
	{
	}
	HX_STACK_LINE(806)
	::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(807)
	::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(808)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(809)
	while(((cur != null()))){
		HX_STACK_LINE(810)
		if (((cur == obj))){
			HX_STACK_LINE(811)
			this->erase(pre);
			HX_STACK_LINE(812)
			ret = true;
			HX_STACK_LINE(813)
			break;
		}
		HX_STACK_LINE(815)
		pre = cur;
		HX_STACK_LINE(816)
		cur = cur->next;
	}
	HX_STACK_LINE(818)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,try_remove,return )

Void ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZPP_CallbackSet::remove","zpp_nape/space/Space.hx",786);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(787)
		{
		}
		HX_STACK_LINE(795)
		{
			HX_STACK_LINE(795)
			{
			}
			HX_STACK_LINE(795)
			::zpp_nape::space::ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(795)
			::zpp_nape::space::ZPP_CallbackSet cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(795)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(795)
			while(((cur != null()))){
				HX_STACK_LINE(795)
				if (((cur == obj))){
					HX_STACK_LINE(795)
					{
						HX_STACK_LINE(795)
						{
						}
						HX_STACK_LINE(795)
						::zpp_nape::space::ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(795)
						::zpp_nape::space::ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(795)
						if (((pre == null()))){
							HX_STACK_LINE(795)
							old = this->next;
							HX_STACK_LINE(795)
							ret1 = old->next;
							HX_STACK_LINE(795)
							this->next = ret1;
							HX_STACK_LINE(795)
							if (((this->next == null()))){
								HX_STACK_LINE(795)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(795)
							old = pre->next;
							HX_STACK_LINE(795)
							ret1 = old->next;
							HX_STACK_LINE(795)
							pre->next = ret1;
							HX_STACK_LINE(795)
							if (((ret1 == null()))){
								HX_STACK_LINE(795)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(795)
						old->_inuse = false;
						HX_STACK_LINE(795)
						{
						}
						HX_STACK_LINE(795)
						this->modified = true;
						HX_STACK_LINE(795)
						(this->length)--;
						HX_STACK_LINE(795)
						this->pushmod = true;
						HX_STACK_LINE(795)
						ret1;
					}
					HX_STACK_LINE(795)
					ret = true;
					HX_STACK_LINE(795)
					break;
				}
				HX_STACK_LINE(795)
				pre = cur;
				HX_STACK_LINE(795)
				cur = cur->next;
			}
			HX_STACK_LINE(795)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,remove,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_pop_unsafe","zpp_nape/space/Space.hx",773);
	HX_STACK_THIS(this);
	HX_STACK_LINE(774)
	{
	}
	HX_STACK_LINE(782)
	::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(783)
	this->pop();
	HX_STACK_LINE(784)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_CallbackSet::pop_unsafe","zpp_nape/space/Space.hx",771);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",771);
			{
				HX_STACK_LINE(771)
				{
				}
				HX_STACK_LINE(771)
				::zpp_nape::space::ZPP_CallbackSet ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(771)
				__this->pop();
				HX_STACK_LINE(771)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(771)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop_unsafe,return )

Void ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::inlined_pop","zpp_nape/space/Space.hx",752);
		HX_STACK_THIS(this);
		HX_STACK_LINE(753)
		{
		}
		HX_STACK_LINE(761)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(762)
		this->next = ret->next;
		HX_STACK_LINE(763)
		ret->_inuse = false;
		HX_STACK_LINE(766)
		{
		}
		HX_STACK_LINE(767)
		if (((this->next == null()))){
			HX_STACK_LINE(767)
			this->pushmod = true;
		}
		HX_STACK_LINE(768)
		this->modified = true;
		HX_STACK_LINE(769)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,inlined_pop,(void))

Void ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_CallbackSet::pop","zpp_nape/space/Space.hx",750);
		HX_STACK_THIS(this);
		HX_STACK_LINE(750)
		{
		}
		HX_STACK_LINE(750)
		::zpp_nape::space::ZPP_CallbackSet ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(750)
		this->next = ret->next;
		HX_STACK_LINE(750)
		ret->_inuse = false;
		HX_STACK_LINE(750)
		{
		}
		HX_STACK_LINE(750)
		if (((this->next == null()))){
			HX_STACK_LINE(750)
			this->pushmod = true;
		}
		HX_STACK_LINE(750)
		this->modified = true;
		HX_STACK_LINE(750)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,pop,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_insert","zpp_nape/space/Space.hx",725);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(726)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",734);
			{
				HX_STACK_LINE(735)
				o->_inuse = true;
				HX_STACK_LINE(736)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(734)
	::zpp_nape::space::ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(738)
	if (((cur == null()))){
		HX_STACK_LINE(739)
		temp->next = this->next;
		HX_STACK_LINE(740)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(743)
		temp->next = cur->next;
		HX_STACK_LINE(744)
		cur->next = temp;
	}
	HX_STACK_LINE(746)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(747)
	(this->length)++;
	HX_STACK_LINE(748)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,inlined_insert,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::insert( ::zpp_nape::space::ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::insert","zpp_nape/space/Space.hx",723);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &o,::zpp_nape::space::ZPP_CallbackSet &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",723);
			{
				HX_STACK_LINE(723)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",723);
						{
							HX_STACK_LINE(723)
							o->_inuse = true;
							HX_STACK_LINE(723)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(723)
				::zpp_nape::space::ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(723)
				if (((cur == null()))){
					HX_STACK_LINE(723)
					temp->next = __this->next;
					HX_STACK_LINE(723)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(723)
					temp->next = cur->next;
					HX_STACK_LINE(723)
					cur->next = temp;
				}
				HX_STACK_LINE(723)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(723)
				(__this->length)++;
				HX_STACK_LINE(723)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(723)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,insert,return )

Void ZPP_CallbackSet_obj::addAll( ::zpp_nape::space::ZPP_CallbackSet x){
{
		HX_STACK_PUSH("ZPP_CallbackSet::addAll","zpp_nape/space/Space.hx",705);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(706)
		{
		}
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(715)
			::zpp_nape::space::ZPP_CallbackSet cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(716)
			while(((cx_ite != null()))){
				HX_STACK_LINE(717)
				::zpp_nape::space::ZPP_CallbackSet i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(718)
				this->add(i);
				HX_STACK_LINE(719)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::inlined_add","zpp_nape/space/Space.hx",686);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(687)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",695);
			{
				HX_STACK_LINE(696)
				o->_inuse = true;
				HX_STACK_LINE(697)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(695)
	::zpp_nape::space::ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(699)
	temp->next = this->next;
	HX_STACK_LINE(700)
	this->next = temp;
	HX_STACK_LINE(701)
	this->modified = true;
	HX_STACK_LINE(702)
	(this->length)++;
	HX_STACK_LINE(703)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,inlined_add,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZPP_CallbackSet::add","zpp_nape/space/Space.hx",684);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o,::zpp_nape::space::ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",684);
			{
				HX_STACK_LINE(684)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",684);
						{
							HX_STACK_LINE(684)
							o->_inuse = true;
							HX_STACK_LINE(684)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(684)
				::zpp_nape::space::ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(684)
				temp->next = __this->next;
				HX_STACK_LINE(684)
				__this->next = temp;
				HX_STACK_LINE(684)
				__this->modified = true;
				HX_STACK_LINE(684)
				(__this->length)++;
				HX_STACK_LINE(684)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(684)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,add,return )

Void ZPP_CallbackSet_obj::setbegin( ::zpp_nape::space::ZPP_CallbackSet i){
{
		HX_STACK_PUSH("ZPP_CallbackSet::setbegin","zpp_nape/space/Space.hx",679);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(680)
		this->next = i;
		HX_STACK_LINE(681)
		this->modified = true;
		HX_STACK_LINE(682)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::begin( ){
	HX_STACK_PUSH("ZPP_CallbackSet::begin","zpp_nape/space/Space.hx",673);
	HX_STACK_THIS(this);
	HX_STACK_LINE(673)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,begin,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::elem( ){
	HX_STACK_PUSH("ZPP_CallbackSet::elem","zpp_nape/space/Space.hx",671);
	HX_STACK_THIS(this);
	HX_STACK_LINE(671)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CallbackSet_obj,elem,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::get( ::zpp_nape::phys::ZPP_Interactor i1,::zpp_nape::phys::ZPP_Interactor i2){
	HX_STACK_PUSH("ZPP_CallbackSet::get","zpp_nape/space/Space.hx",614);
	HX_STACK_ARG(i1,"i1");
	HX_STACK_ARG(i2,"i2");
	HX_STACK_LINE(615)
	::zpp_nape::space::ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(616)
	{
		HX_STACK_LINE(617)
		if (((::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(617)
			ret = ::zpp_nape::space::ZPP_CallbackSet_obj::__new();
		}
		else{
			HX_STACK_LINE(624)
			ret = ::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool;
			HX_STACK_LINE(625)
			::zpp_nape::space::ZPP_CallbackSet_obj::zpp_pool = ret->next;
			HX_STACK_LINE(626)
			ret->next = null();
		}
		HX_STACK_LINE(631)
		{
			HX_STACK_LINE(631)
			ret->freed = false;
			HX_STACK_LINE(631)
			ret->lazydel = false;
			HX_STACK_LINE(631)
			ret->COLLISIONstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(631)
			ret->COLLISIONstamp = (int)0;
			HX_STACK_LINE(631)
			ret->SENSORstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(631)
			ret->SENSORstamp = (int)0;
			HX_STACK_LINE(631)
			ret->FLUIDstate = ::zpp_nape::util::ZPP_Flags_obj::id_PreFlag_ACCEPT;
			HX_STACK_LINE(631)
			ret->FLUIDstamp = (int)0;
		}
	}
	HX_STACK_LINE(633)
	{
	}
	HX_STACK_LINE(641)
	if (((i1->id < i2->id))){
		HX_STACK_LINE(642)
		ret->int1 = i1;
		HX_STACK_LINE(643)
		ret->int2 = i2;
	}
	else{
		HX_STACK_LINE(646)
		ret->int1 = i2;
		HX_STACK_LINE(647)
		ret->int2 = i1;
	}
	HX_STACK_LINE(649)
	ret->id = ret->int1->id;
	HX_STACK_LINE(650)
	ret->di = ret->int2->id;
	HX_STACK_LINE(651)
	{
	}
	HX_STACK_LINE(659)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CallbackSet_obj,get,return )

::zpp_nape::space::ZPP_CallbackSet ZPP_CallbackSet_obj::zpp_pool;


ZPP_CallbackSet_obj::ZPP_CallbackSet_obj()
{
}

void ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(lazydel,"lazydel");
	HX_MARK_MEMBER_NAME(freed,"freed");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_MARK_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_MARK_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_MARK_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_MARK_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_MARK_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(int2,"int2");
	HX_MARK_MEMBER_NAME(int1,"int1");
	HX_MARK_MEMBER_NAME(di,"di");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lazydel,"lazydel");
	HX_VISIT_MEMBER_NAME(freed,"freed");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(FLUIDstamp,"FLUIDstamp");
	HX_VISIT_MEMBER_NAME(FLUIDstate,"FLUIDstate");
	HX_VISIT_MEMBER_NAME(SENSORstamp,"SENSORstamp");
	HX_VISIT_MEMBER_NAME(SENSORstate,"SENSORstate");
	HX_VISIT_MEMBER_NAME(COLLISIONstamp,"COLLISIONstamp");
	HX_VISIT_MEMBER_NAME(COLLISIONstate,"COLLISIONstate");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(int2,"int2");
	HX_VISIT_MEMBER_NAME(int1,"int1");
	HX_VISIT_MEMBER_NAME(di,"di");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic ZPP_CallbackSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		if (HX_FIELD_EQ(inName,"di") ) { return di; }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"int2") ) { return int2; }
		if (HX_FIELD_EQ(inName,"int1") ) { return int1; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"freed") ) { return freed; }
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
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"add_arb") ) { return add_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"lazydel") ) { return lazydel; }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"sleeping") ) { return sleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"empty_arb") ) { return empty_arb_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"remove_arb") ) { return remove_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { return FLUIDstamp; }
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { return FLUIDstate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { return SENSORstamp; }
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { return SENSORstate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"really_empty") ) { return really_empty_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"try_remove_arb") ) { return try_remove_arb_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { return COLLISIONstamp; }
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { return COLLISIONstate; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"di") ) { di=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int2") ) { int2=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"int1") ) { int1=inValue.Cast< ::zpp_nape::phys::ZPP_Interactor >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"freed") ) { freed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lazydel") ) { lazydel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_CallbackSet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLUIDstamp") ) { FLUIDstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLUIDstate") ) { FLUIDstate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SENSORstamp") ) { SENSORstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SENSORstate") ) { SENSORstate=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"COLLISIONstamp") ) { COLLISIONstamp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLLISIONstate") ) { COLLISIONstate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lazydel"));
	outFields->push(HX_CSTRING("freed"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("FLUIDstamp"));
	outFields->push(HX_CSTRING("FLUIDstate"));
	outFields->push(HX_CSTRING("SENSORstamp"));
	outFields->push(HX_CSTRING("SENSORstate"));
	outFields->push(HX_CSTRING("COLLISIONstamp"));
	outFields->push(HX_CSTRING("COLLISIONstate"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("int2"));
	outFields->push(HX_CSTRING("int1"));
	outFields->push(HX_CSTRING("di"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("sleeping"),
	HX_CSTRING("really_empty"),
	HX_CSTRING("empty_arb"),
	HX_CSTRING("remove_arb"),
	HX_CSTRING("try_remove_arb"),
	HX_CSTRING("add_arb"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("lazydel"),
	HX_CSTRING("freed"),
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
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("FLUIDstamp"),
	HX_CSTRING("FLUIDstate"),
	HX_CSTRING("SENSORstamp"),
	HX_CSTRING("SENSORstate"),
	HX_CSTRING("COLLISIONstamp"),
	HX_CSTRING("COLLISIONstate"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("int2"),
	HX_CSTRING("int1"),
	HX_CSTRING("di"),
	HX_CSTRING("id"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CallbackSet_obj::zpp_pool,"zpp_pool");
};

Class ZPP_CallbackSet_obj::__mClass;

void ZPP_CallbackSet_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CallbackSet"), hx::TCanCast< ZPP_CallbackSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CallbackSet_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
