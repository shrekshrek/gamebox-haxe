#include <hxcpp.h>

#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_phys_InteractorList
#include <nape/phys/InteractorList.h>
#endif
#ifndef INCLUDED_zpp_nape_ZPP_ID
#include <zpp_nape/ZPP_ID.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Interactor
#include <zpp_nape/util/ZNPList_ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace callbacks{

Void ZPP_CbType_obj::__construct()
{
HX_STACK_PUSH("ZPP_CbType::new","zpp_nape/callbacks/CbType.hx",174);
{
	HX_STACK_LINE(289)
	this->conlisteners = null();
	HX_STACK_LINE(242)
	this->bodylisteners = null();
	HX_STACK_LINE(195)
	this->listeners = null();
	HX_STACK_LINE(178)
	this->cbsets = null();
	HX_STACK_LINE(177)
	this->id = (int)0;
	HX_STACK_LINE(176)
	this->userData = null();
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(341)
	this->id = ::zpp_nape::ZPP_ID_obj::CbType();
	HX_STACK_LINE(343)
	this->listeners = ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj::__new();
	HX_STACK_LINE(344)
	this->bodylisteners = ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj::__new();
	HX_STACK_LINE(345)
	this->conlisteners = ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj::__new();
	HX_STACK_LINE(346)
	this->constraints = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();
	HX_STACK_LINE(347)
	this->interactors = ::zpp_nape::util::ZNPList_ZPP_Interactor_obj::__new();
	HX_STACK_LINE(348)
	this->cbsets = ::zpp_nape::util::ZNPList_ZPP_CbSet_obj::__new();
}
;
	return null();
}

ZPP_CbType_obj::~ZPP_CbType_obj() { }

Dynamic ZPP_CbType_obj::__CreateEmpty() { return  new ZPP_CbType_obj; }
hx::ObjectPtr< ZPP_CbType_obj > ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZPP_CbType_obj > result = new ZPP_CbType_obj();
	result->__construct();
	return result;}

Dynamic ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbType_obj > result = new ZPP_CbType_obj();
	result->__construct();
	return result;}

Void ZPP_CbType_obj::invalidateconstraint( ){
{
		HX_STACK_PUSH("ZPP_CbType::invalidateconstraint","zpp_nape/callbacks/CbType.hx",326);
		HX_STACK_THIS(this);
		HX_STACK_LINE(328)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(329)
		while(((cx_ite != null()))){
			HX_STACK_LINE(330)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(331)
			cb->zip_conlisteners = true;
			HX_STACK_LINE(332)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidateconstraint,(void))

Void ZPP_CbType_obj::removeconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x){
{
		HX_STACK_PUSH("ZPP_CbType::removeconstraint","zpp_nape/callbacks/CbType.hx",320);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(321)
		this->conlisteners->remove(x);
		HX_STACK_LINE(322)
		{
			HX_STACK_LINE(322)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(322)
			while(((cx_ite != null()))){
				HX_STACK_LINE(322)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(322)
				cb->zip_conlisteners = true;
				HX_STACK_LINE(322)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removeconstraint,(void))

Void ZPP_CbType_obj::addconstraint( ::zpp_nape::callbacks::ZPP_ConstraintListener x){
{
		HX_STACK_PUSH("ZPP_CbType::addconstraint","zpp_nape/callbacks/CbType.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(293)
		{
		}
		HX_STACK_LINE(301)
		{
			HX_STACK_LINE(302)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(304)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = this->conlisteners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(305)
				while(((cx_ite != null()))){
					HX_STACK_LINE(306)
					::zpp_nape::callbacks::ZPP_ConstraintListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(307)
					{
						HX_STACK_LINE(308)
						if (((bool((x->precedence > j->precedence)) || bool((bool((x->precedence == j->precedence)) && bool((x->id > j->id))))))){
							HX_STACK_LINE(308)
							break;
						}
						HX_STACK_LINE(309)
						pre = cx_ite;
					}
					HX_STACK_LINE(311)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				::zpp_nape::util::ZNPList_ZPP_ConstraintListener _this = this->conlisteners;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(314)
				{
				}
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &x){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbType.hx",314);
						{
							HX_STACK_LINE(314)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(314)
							{
								HX_STACK_LINE(314)
								if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(314)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
								}
								else{
									HX_STACK_LINE(314)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
									HX_STACK_LINE(314)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(314)
									ret->next = null();
								}
								HX_STACK_LINE(314)
								Dynamic();
							}
							HX_STACK_LINE(314)
							ret->elt = x;
							HX_STACK_LINE(314)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(314)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_3_1::Block(x);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(314)
				if (((pre == null()))){
					HX_STACK_LINE(314)
					temp->next = _this->head;
					HX_STACK_LINE(314)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(314)
					temp->next = pre->next;
					HX_STACK_LINE(314)
					pre->next = temp;
				}
				HX_STACK_LINE(314)
				_this->pushmod = _this->modified = true;
				HX_STACK_LINE(314)
				(_this->length)++;
				HX_STACK_LINE(314)
				temp;
			}
		}
		HX_STACK_LINE(316)
		{
			HX_STACK_LINE(316)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(316)
			while(((cx_ite != null()))){
				HX_STACK_LINE(316)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(316)
				cb->zip_conlisteners = true;
				HX_STACK_LINE(316)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addconstraint,(void))

Void ZPP_CbType_obj::invalidatebody( ){
{
		HX_STACK_PUSH("ZPP_CbType::invalidatebody","zpp_nape/callbacks/CbType.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_LINE(281)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(282)
		while(((cx_ite != null()))){
			HX_STACK_LINE(283)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(284)
			cb->zip_bodylisteners = true;
			HX_STACK_LINE(285)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidatebody,(void))

Void ZPP_CbType_obj::removebody( ::zpp_nape::callbacks::ZPP_BodyListener x){
{
		HX_STACK_PUSH("ZPP_CbType::removebody","zpp_nape/callbacks/CbType.hx",273);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(274)
		this->bodylisteners->remove(x);
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(275)
			while(((cx_ite != null()))){
				HX_STACK_LINE(275)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(275)
				cb->zip_bodylisteners = true;
				HX_STACK_LINE(275)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removebody,(void))

Void ZPP_CbType_obj::addbody( ::zpp_nape::callbacks::ZPP_BodyListener x){
{
		HX_STACK_PUSH("ZPP_CbType::addbody","zpp_nape/callbacks/CbType.hx",245);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(246)
		{
		}
		HX_STACK_LINE(254)
		{
			HX_STACK_LINE(255)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(257)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = this->bodylisteners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(258)
				while(((cx_ite != null()))){
					HX_STACK_LINE(259)
					::zpp_nape::callbacks::ZPP_BodyListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(261)
						if (((bool((x->precedence > j->precedence)) || bool((bool((x->precedence == j->precedence)) && bool((x->id > j->id))))))){
							HX_STACK_LINE(261)
							break;
						}
						HX_STACK_LINE(262)
						pre = cx_ite;
					}
					HX_STACK_LINE(264)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				::zpp_nape::util::ZNPList_ZPP_BodyListener _this = this->bodylisteners;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(267)
				{
				}
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &x){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbType.hx",267);
						{
							HX_STACK_LINE(267)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(267)
							{
								HX_STACK_LINE(267)
								if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(267)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
								}
								else{
									HX_STACK_LINE(267)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
									HX_STACK_LINE(267)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(267)
									ret->next = null();
								}
								HX_STACK_LINE(267)
								Dynamic();
							}
							HX_STACK_LINE(267)
							ret->elt = x;
							HX_STACK_LINE(267)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(267)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_3_1::Block(x);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(267)
				if (((pre == null()))){
					HX_STACK_LINE(267)
					temp->next = _this->head;
					HX_STACK_LINE(267)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(267)
					temp->next = pre->next;
					HX_STACK_LINE(267)
					pre->next = temp;
				}
				HX_STACK_LINE(267)
				_this->pushmod = _this->modified = true;
				HX_STACK_LINE(267)
				(_this->length)++;
				HX_STACK_LINE(267)
				temp;
			}
		}
		HX_STACK_LINE(269)
		{
			HX_STACK_LINE(269)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(269)
			while(((cx_ite != null()))){
				HX_STACK_LINE(269)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(269)
				cb->zip_bodylisteners = true;
				HX_STACK_LINE(269)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addbody,(void))

Void ZPP_CbType_obj::invalidateint( ){
{
		HX_STACK_PUSH("ZPP_CbType::invalidateint","zpp_nape/callbacks/CbType.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_LINE(234)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(235)
		while(((cx_ite != null()))){
			HX_STACK_LINE(236)
			::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				cb->zip_listeners = true;
				HX_STACK_LINE(237)
				cb->invalidate_pairs();
			}
			HX_STACK_LINE(238)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbType_obj,invalidateint,(void))

Void ZPP_CbType_obj::removeint( ::zpp_nape::callbacks::ZPP_InteractionListener x){
{
		HX_STACK_PUSH("ZPP_CbType::removeint","zpp_nape/callbacks/CbType.hx",226);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(227)
		this->listeners->remove(x);
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(228)
			while(((cx_ite != null()))){
				HX_STACK_LINE(228)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					cb->zip_listeners = true;
					HX_STACK_LINE(228)
					cb->invalidate_pairs();
				}
				HX_STACK_LINE(228)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,removeint,(void))

Void ZPP_CbType_obj::addint( ::zpp_nape::callbacks::ZPP_InteractionListener x){
{
		HX_STACK_PUSH("ZPP_CbType::addint","zpp_nape/callbacks/CbType.hx",198);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(199)
		{
		}
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(208)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(209)
			{
				HX_STACK_LINE(210)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = this->listeners->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(211)
				while(((cx_ite != null()))){
					HX_STACK_LINE(212)
					::zpp_nape::callbacks::ZPP_InteractionListener j = cx_ite->elt;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(213)
					{
						HX_STACK_LINE(214)
						if (((bool((x->precedence > j->precedence)) || bool((bool((x->precedence == j->precedence)) && bool((x->id > j->id))))))){
							HX_STACK_LINE(214)
							break;
						}
						HX_STACK_LINE(215)
						pre = cx_ite;
					}
					HX_STACK_LINE(217)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::zpp_nape::util::ZNPList_ZPP_InteractionListener _this = this->listeners;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(220)
				{
				}
				struct _Function_3_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &x){
						HX_STACK_PUSH("*::closure","zpp_nape/callbacks/CbType.hx",220);
						{
							HX_STACK_LINE(220)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(220)
							{
								HX_STACK_LINE(220)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(220)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
								}
								else{
									HX_STACK_LINE(220)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
									HX_STACK_LINE(220)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(220)
									ret->next = null();
								}
								HX_STACK_LINE(220)
								Dynamic();
							}
							HX_STACK_LINE(220)
							ret->elt = x;
							HX_STACK_LINE(220)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(220)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_3_1::Block(x);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(220)
				if (((pre == null()))){
					HX_STACK_LINE(220)
					temp->next = _this->head;
					HX_STACK_LINE(220)
					_this->head = temp;
				}
				else{
					HX_STACK_LINE(220)
					temp->next = pre->next;
					HX_STACK_LINE(220)
					pre->next = temp;
				}
				HX_STACK_LINE(220)
				_this->pushmod = _this->modified = true;
				HX_STACK_LINE(220)
				(_this->length)++;
				HX_STACK_LINE(220)
				temp;
			}
		}
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->cbsets->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(222)
			while(((cx_ite != null()))){
				HX_STACK_LINE(222)
				::zpp_nape::callbacks::ZPP_CbSet cb = cx_ite->elt;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(222)
				{
					HX_STACK_LINE(222)
					cb->zip_listeners = true;
					HX_STACK_LINE(222)
					cb->invalidate_pairs();
				}
				HX_STACK_LINE(222)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addint,(void))

Void ZPP_CbType_obj::remInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_PUSH("ZPP_CbType::remInteractor","zpp_nape/callbacks/CbType.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intx,"intx");
		HX_STACK_LINE(195)
		this->interactors->remove(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,remInteractor,(void))

Void ZPP_CbType_obj::remConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_PUSH("ZPP_CbType::remConstraint","zpp_nape/callbacks/CbType.hx",193);
		HX_STACK_THIS(this);
		HX_STACK_ARG(con,"con");
		HX_STACK_LINE(193)
		this->constraints->remove(con);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,remConstraint,(void))

Void ZPP_CbType_obj::addInteractor( ::zpp_nape::phys::ZPP_Interactor intx){
{
		HX_STACK_PUSH("ZPP_CbType::addInteractor","zpp_nape/callbacks/CbType.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_ARG(intx,"intx");
		HX_STACK_LINE(191)
		this->interactors->add(intx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addInteractor,(void))

Void ZPP_CbType_obj::addConstraint( ::zpp_nape::constraint::ZPP_Constraint con){
{
		HX_STACK_PUSH("ZPP_CbType::addConstraint","zpp_nape/callbacks/CbType.hx",189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(con,"con");
		HX_STACK_LINE(189)
		this->constraints->add(con);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbType_obj,addConstraint,(void))

bool ZPP_CbType_obj::setlt( ::zpp_nape::callbacks::ZPP_CbType a,::zpp_nape::callbacks::ZPP_CbType b){
	HX_STACK_PUSH("ZPP_CbType::setlt","zpp_nape/callbacks/CbType.hx",180);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(180)
	return (a->id < b->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbType_obj,setlt,return )

::nape::callbacks::CbType ZPP_CbType_obj::ANY_SHAPE;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_BODY;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_COMPOUND;

::nape::callbacks::CbType ZPP_CbType_obj::ANY_CONSTRAINT;


ZPP_CbType_obj::ZPP_CbType_obj()
{
}

void ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbType);
	HX_MARK_MEMBER_NAME(conlisteners,"conlisteners");
	HX_MARK_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_MARK_MEMBER_NAME(listeners,"listeners");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_MARK_MEMBER_NAME(interactors,"interactors");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(userData,"userData");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_END_CLASS();
}

void ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(conlisteners,"conlisteners");
	HX_VISIT_MEMBER_NAME(bodylisteners,"bodylisteners");
	HX_VISIT_MEMBER_NAME(listeners,"listeners");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_interactors,"wrap_interactors");
	HX_VISIT_MEMBER_NAME(interactors,"interactors");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(userData,"userData");
	HX_VISIT_MEMBER_NAME(outer,"outer");
}

Dynamic ZPP_CbType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setlt") ) { return setlt_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addint") ) { return addint_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addbody") ) { return addbody_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { return ANY_BODY; }
		if (HX_FIELD_EQ(inName,"userData") ) { return userData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { return ANY_SHAPE; }
		if (HX_FIELD_EQ(inName,"removeint") ) { return removeint_dyn(); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return listeners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removebody") ) { return removebody_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"interactors") ) { return interactors; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { return ANY_COMPOUND; }
		if (HX_FIELD_EQ(inName,"conlisteners") ) { return conlisteners; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addconstraint") ) { return addconstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { return bodylisteners; }
		if (HX_FIELD_EQ(inName,"invalidateint") ) { return invalidateint_dyn(); }
		if (HX_FIELD_EQ(inName,"remInteractor") ) { return remInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"remConstraint") ) { return remConstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"addInteractor") ) { return addInteractor_dyn(); }
		if (HX_FIELD_EQ(inName,"addConstraint") ) { return addConstraint_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { return ANY_CONSTRAINT; }
		if (HX_FIELD_EQ(inName,"invalidatebody") ) { return invalidatebody_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeconstraint") ) { return removeconstraint_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { return wrap_interactors; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"invalidateconstraint") ) { return invalidateconstraint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_CbSet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ANY_BODY") ) { ANY_BODY=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userData") ) { userData=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ANY_SHAPE") ) { ANY_SHAPE=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_InteractionListener >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interactors") ) { interactors=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Interactor >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ANY_COMPOUND") ) { ANY_COMPOUND=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"conlisteners") ) { conlisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_ConstraintListener >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodylisteners") ) { bodylisteners=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_BodyListener >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ANY_CONSTRAINT") ) { ANY_CONSTRAINT=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_interactors") ) { wrap_interactors=inValue.Cast< ::nape::phys::InteractorList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("conlisteners"));
	outFields->push(HX_CSTRING("bodylisteners"));
	outFields->push(HX_CSTRING("listeners"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("wrap_interactors"));
	outFields->push(HX_CSTRING("interactors"));
	outFields->push(HX_CSTRING("cbsets"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("userData"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("setlt"),
	HX_CSTRING("ANY_SHAPE"),
	HX_CSTRING("ANY_BODY"),
	HX_CSTRING("ANY_COMPOUND"),
	HX_CSTRING("ANY_CONSTRAINT"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invalidateconstraint"),
	HX_CSTRING("removeconstraint"),
	HX_CSTRING("addconstraint"),
	HX_CSTRING("conlisteners"),
	HX_CSTRING("invalidatebody"),
	HX_CSTRING("removebody"),
	HX_CSTRING("addbody"),
	HX_CSTRING("bodylisteners"),
	HX_CSTRING("invalidateint"),
	HX_CSTRING("removeint"),
	HX_CSTRING("addint"),
	HX_CSTRING("listeners"),
	HX_CSTRING("remInteractor"),
	HX_CSTRING("remConstraint"),
	HX_CSTRING("addInteractor"),
	HX_CSTRING("addConstraint"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("wrap_interactors"),
	HX_CSTRING("interactors"),
	HX_CSTRING("cbsets"),
	HX_CSTRING("id"),
	HX_CSTRING("userData"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_BODY,"ANY_BODY");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
	HX_MARK_MEMBER_NAME(ZPP_CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_SHAPE,"ANY_SHAPE");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_BODY,"ANY_BODY");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_COMPOUND,"ANY_COMPOUND");
	HX_VISIT_MEMBER_NAME(ZPP_CbType_obj::ANY_CONSTRAINT,"ANY_CONSTRAINT");
};

Class ZPP_CbType_obj::__mClass;

void ZPP_CbType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.callbacks.ZPP_CbType"), hx::TCanCast< ZPP_CbType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CbType_obj::__boot()
{
	ANY_SHAPE= ::nape::callbacks::CbType_obj::__new();
	ANY_BODY= ::nape::callbacks::CbType_obj::__new();
	ANY_COMPOUND= ::nape::callbacks::CbType_obj::__new();
	ANY_CONSTRAINT= ::nape::callbacks::CbType_obj::__new();
}

} // end namespace zpp_nape
} // end namespace callbacks
