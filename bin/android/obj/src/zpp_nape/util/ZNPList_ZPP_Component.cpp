#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Component
#include <zpp_nape/util/ZNPNode_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Component_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Component::new","zpp_nape/util/Lists.hx",9007);
{
	HX_STACK_LINE(9014)
	this->length = (int)0;
	HX_STACK_LINE(9013)
	this->pushmod = false;
	HX_STACK_LINE(9012)
	this->modified = false;
	HX_STACK_LINE(9008)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Component_obj::~ZNPList_ZPP_Component_obj() { }

Dynamic ZNPList_ZPP_Component_obj::__CreateEmpty() { return  new ZNPList_ZPP_Component_obj; }
hx::ObjectPtr< ZNPList_ZPP_Component_obj > ZNPList_ZPP_Component_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > result = new ZNPList_ZPP_Component_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Component_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Component_obj > result = new ZNPList_ZPP_Component_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Component::at","zpp_nape/util/Lists.hx",9377);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9378)
	{
	}
	HX_STACK_LINE(9386)
	::zpp_nape::util::ZNPNode_ZPP_Component it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9387)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_Component(it->elt) : ::zpp_nape::space::ZPP_Component(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Component::iterator_at","zpp_nape/util/Lists.hx",9364);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(9365)
	{
	}
	HX_STACK_LINE(9373)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9374)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(9374)
		ret = ret->next;
	}
	HX_STACK_LINE(9375)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,iterator_at,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::back","zpp_nape/util/Lists.hx",9355);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9356)
	::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9357)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9358)
	while(((cur != null()))){
		HX_STACK_LINE(9359)
		ret = cur;
		HX_STACK_LINE(9360)
		cur = cur->next;
	}
	HX_STACK_LINE(9362)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,back,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::front","zpp_nape/util/Lists.hx",9355);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9355)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,front,return )

bool ZNPList_ZPP_Component_obj::inlined_has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_has","zpp_nape/util/Lists.hx",9325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9326)
	{
	}
	HX_STACK_LINE(9334)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9335)
	{
		HX_STACK_LINE(9336)
		ret = false;
		HX_STACK_LINE(9337)
		{
			HX_STACK_LINE(9338)
			::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9339)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9340)
				::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(9341)
				if (((npite == obj))){
					HX_STACK_LINE(9343)
					ret = true;
					HX_STACK_LINE(9344)
					break;
				}
				HX_STACK_LINE(9347)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(9351)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_has,return )

bool ZNPList_ZPP_Component_obj::has( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_PUSH("ZNPList_ZPP_Component::has","zpp_nape/util/Lists.hx",9323);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Component_obj *__this,::zpp_nape::space::ZPP_Component &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9323);
			{
				HX_STACK_LINE(9323)
				{
				}
				HX_STACK_LINE(9323)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9323)
				{
					HX_STACK_LINE(9323)
					ret = false;
					HX_STACK_LINE(9323)
					{
						HX_STACK_LINE(9323)
						::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(9323)
						while(((cx_ite != null()))){
							HX_STACK_LINE(9323)
							::zpp_nape::space::ZPP_Component npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(9323)
							if (((npite == obj))){
								HX_STACK_LINE(9323)
								ret = true;
								HX_STACK_LINE(9323)
								break;
							}
							HX_STACK_LINE(9323)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(9323)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9323)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,has,return )

int ZNPList_ZPP_Component_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::size","zpp_nape/util/Lists.hx",9323);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9323)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,size,return )

bool ZNPList_ZPP_Component_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::empty","zpp_nape/util/Lists.hx",9321);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9321)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,empty,return )

Void ZNPList_ZPP_Component_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::reverse","zpp_nape/util/Lists.hx",9306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9307)
		::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(9308)
		::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(9309)
		while(((cur != null()))){
			HX_STACK_LINE(9310)
			::zpp_nape::util::ZNPNode_ZPP_Component nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(9311)
			cur->next = pre;
			HX_STACK_LINE(9312)
			this->head = cur;
			HX_STACK_LINE(9313)
			pre = cur;
			HX_STACK_LINE(9314)
			cur = nx;
		}
		HX_STACK_LINE(9316)
		this->modified = true;
		HX_STACK_LINE(9317)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,reverse,(void))

Void ZNPList_ZPP_Component_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_clear","zpp_nape/util/Lists.hx",9300);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9302)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9302)
			{
			}
			HX_STACK_LINE(9302)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9302)
			this->head = ret->next;
			HX_STACK_LINE(9302)
			{
			}
			HX_STACK_LINE(9302)
			{
				HX_STACK_LINE(9302)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9302)
				{
				}
				HX_STACK_LINE(9302)
				o->elt = null();
				HX_STACK_LINE(9302)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(9302)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9302)
			if (((this->head == null()))){
				HX_STACK_LINE(9302)
				this->pushmod = true;
			}
			HX_STACK_LINE(9302)
			this->modified = true;
			HX_STACK_LINE(9302)
			(this->length)--;
		}
		HX_STACK_LINE(9303)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_clear,(void))

Void ZNPList_ZPP_Component_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::clear","zpp_nape/util/Lists.hx",9298);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9298)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(9298)
			{
			}
			HX_STACK_LINE(9298)
			::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9298)
			this->head = ret->next;
			HX_STACK_LINE(9298)
			{
			}
			HX_STACK_LINE(9298)
			{
				HX_STACK_LINE(9298)
				::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(9298)
				{
				}
				HX_STACK_LINE(9298)
				o->elt = null();
				HX_STACK_LINE(9298)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(9298)
				::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
			}
			HX_STACK_LINE(9298)
			if (((this->head == null()))){
				HX_STACK_LINE(9298)
				this->pushmod = true;
			}
			HX_STACK_LINE(9298)
			this->modified = true;
			HX_STACK_LINE(9298)
			(this->length)--;
		}
		HX_STACK_LINE(9298)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Component pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Component::splice","zpp_nape/util/Lists.hx",9294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(9295)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(9295)
		this->erase(pre);
	}
	HX_STACK_LINE(9296)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_erase","zpp_nape/util/Lists.hx",9248);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(9249)
	{
	}
	HX_STACK_LINE(9257)
	::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(9258)
	::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9259)
	if (((pre == null()))){
		HX_STACK_LINE(9260)
		old = this->head;
		HX_STACK_LINE(9261)
		ret = old->next;
		HX_STACK_LINE(9262)
		this->head = ret;
		HX_STACK_LINE(9263)
		if (((this->head == null()))){
			HX_STACK_LINE(9263)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(9266)
		old = pre->next;
		HX_STACK_LINE(9267)
		ret = old->next;
		HX_STACK_LINE(9268)
		pre->next = ret;
		HX_STACK_LINE(9269)
		if (((ret == null()))){
			HX_STACK_LINE(9269)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(9271)
	{
	}
	HX_STACK_LINE(9272)
	{
		HX_STACK_LINE(9273)
		::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(9274)
		{
		}
		HX_STACK_LINE(9282)
		o->elt = null();
		HX_STACK_LINE(9283)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
		HX_STACK_LINE(9284)
		::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
	}
	HX_STACK_LINE(9289)
	this->modified = true;
	HX_STACK_LINE(9290)
	(this->length)--;
	HX_STACK_LINE(9291)
	this->pushmod = true;
	HX_STACK_LINE(9292)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Component pre){
	HX_STACK_PUSH("ZNPList_ZPP_Component::erase","zpp_nape/util/Lists.hx",9246);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::util::ZNPNode_ZPP_Component &pre,::zpp_nape::util::ZNPList_ZPP_Component_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9246);
			{
				HX_STACK_LINE(9246)
				{
				}
				HX_STACK_LINE(9246)
				::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9246)
				::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9246)
				if (((pre == null()))){
					HX_STACK_LINE(9246)
					old = __this->head;
					HX_STACK_LINE(9246)
					ret = old->next;
					HX_STACK_LINE(9246)
					__this->head = ret;
					HX_STACK_LINE(9246)
					if (((__this->head == null()))){
						HX_STACK_LINE(9246)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9246)
					old = pre->next;
					HX_STACK_LINE(9246)
					ret = old->next;
					HX_STACK_LINE(9246)
					pre->next = ret;
					HX_STACK_LINE(9246)
					if (((ret == null()))){
						HX_STACK_LINE(9246)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(9246)
				{
				}
				HX_STACK_LINE(9246)
				{
					HX_STACK_LINE(9246)
					::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9246)
					{
					}
					HX_STACK_LINE(9246)
					o->elt = null();
					HX_STACK_LINE(9246)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
					HX_STACK_LINE(9246)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9246)
				__this->modified = true;
				HX_STACK_LINE(9246)
				(__this->length)--;
				HX_STACK_LINE(9246)
				__this->pushmod = true;
				HX_STACK_LINE(9246)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9246)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,erase,return )

bool ZNPList_ZPP_Component_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_try_remove","zpp_nape/util/Lists.hx",9223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9224)
	{
	}
	HX_STACK_LINE(9232)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9233)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9234)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9235)
	while(((cur != null()))){
		HX_STACK_LINE(9236)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9237)
			{
				HX_STACK_LINE(9237)
				{
				}
				HX_STACK_LINE(9237)
				::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(9237)
				::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(9237)
				if (((pre == null()))){
					HX_STACK_LINE(9237)
					old = this->head;
					HX_STACK_LINE(9237)
					ret1 = old->next;
					HX_STACK_LINE(9237)
					this->head = ret1;
					HX_STACK_LINE(9237)
					if (((this->head == null()))){
						HX_STACK_LINE(9237)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(9237)
					old = pre->next;
					HX_STACK_LINE(9237)
					ret1 = old->next;
					HX_STACK_LINE(9237)
					pre->next = ret1;
					HX_STACK_LINE(9237)
					if (((ret1 == null()))){
						HX_STACK_LINE(9237)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(9237)
				{
				}
				HX_STACK_LINE(9237)
				{
					HX_STACK_LINE(9237)
					::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(9237)
					{
					}
					HX_STACK_LINE(9237)
					o->elt = null();
					HX_STACK_LINE(9237)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
					HX_STACK_LINE(9237)
					::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
				}
				HX_STACK_LINE(9237)
				this->modified = true;
				HX_STACK_LINE(9237)
				(this->length)--;
				HX_STACK_LINE(9237)
				this->pushmod = true;
				HX_STACK_LINE(9237)
				ret1;
			}
			HX_STACK_LINE(9238)
			ret = true;
			HX_STACK_LINE(9239)
			break;
		}
		HX_STACK_LINE(9241)
		pre = cur;
		HX_STACK_LINE(9242)
		cur = cur->next;
	}
	HX_STACK_LINE(9244)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Component_obj::inlined_remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_remove","zpp_nape/util/Lists.hx",9210);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9211)
		{
		}
		HX_STACK_LINE(9219)
		{
			HX_STACK_LINE(9219)
			{
			}
			HX_STACK_LINE(9219)
			::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9219)
			::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9219)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9219)
			while(((cur != null()))){
				HX_STACK_LINE(9219)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9219)
					{
						HX_STACK_LINE(9219)
						{
						}
						HX_STACK_LINE(9219)
						::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9219)
						::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9219)
						if (((pre == null()))){
							HX_STACK_LINE(9219)
							old = this->head;
							HX_STACK_LINE(9219)
							ret1 = old->next;
							HX_STACK_LINE(9219)
							this->head = ret1;
							HX_STACK_LINE(9219)
							if (((this->head == null()))){
								HX_STACK_LINE(9219)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9219)
							old = pre->next;
							HX_STACK_LINE(9219)
							ret1 = old->next;
							HX_STACK_LINE(9219)
							pre->next = ret1;
							HX_STACK_LINE(9219)
							if (((ret1 == null()))){
								HX_STACK_LINE(9219)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9219)
						{
						}
						HX_STACK_LINE(9219)
						{
							HX_STACK_LINE(9219)
							::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9219)
							{
							}
							HX_STACK_LINE(9219)
							o->elt = null();
							HX_STACK_LINE(9219)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
							HX_STACK_LINE(9219)
							::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9219)
						this->modified = true;
						HX_STACK_LINE(9219)
						(this->length)--;
						HX_STACK_LINE(9219)
						this->pushmod = true;
						HX_STACK_LINE(9219)
						ret1;
					}
					HX_STACK_LINE(9219)
					ret = true;
					HX_STACK_LINE(9219)
					break;
				}
				HX_STACK_LINE(9219)
				pre = cur;
				HX_STACK_LINE(9219)
				cur = cur->next;
			}
			HX_STACK_LINE(9219)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_remove,(void))

bool ZNPList_ZPP_Component_obj::try_remove( ::zpp_nape::space::ZPP_Component obj){
	HX_STACK_PUSH("ZNPList_ZPP_Component::try_remove","zpp_nape/util/Lists.hx",9185);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(9186)
	{
	}
	HX_STACK_LINE(9194)
	::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(9195)
	::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(9196)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9197)
	while(((cur != null()))){
		HX_STACK_LINE(9198)
		if (((cur->elt == obj))){
			HX_STACK_LINE(9199)
			this->erase(pre);
			HX_STACK_LINE(9200)
			ret = true;
			HX_STACK_LINE(9201)
			break;
		}
		HX_STACK_LINE(9203)
		pre = cur;
		HX_STACK_LINE(9204)
		cur = cur->next;
	}
	HX_STACK_LINE(9206)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,try_remove,return )

Void ZNPList_ZPP_Component_obj::remove( ::zpp_nape::space::ZPP_Component obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::remove","zpp_nape/util/Lists.hx",9174);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(9175)
		{
		}
		HX_STACK_LINE(9183)
		{
			HX_STACK_LINE(9183)
			{
			}
			HX_STACK_LINE(9183)
			::zpp_nape::util::ZNPNode_ZPP_Component pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(9183)
			::zpp_nape::util::ZNPNode_ZPP_Component cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(9183)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(9183)
			while(((cur != null()))){
				HX_STACK_LINE(9183)
				if (((cur->elt == obj))){
					HX_STACK_LINE(9183)
					{
						HX_STACK_LINE(9183)
						{
						}
						HX_STACK_LINE(9183)
						::zpp_nape::util::ZNPNode_ZPP_Component old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(9183)
						::zpp_nape::util::ZNPNode_ZPP_Component ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(9183)
						if (((pre == null()))){
							HX_STACK_LINE(9183)
							old = this->head;
							HX_STACK_LINE(9183)
							ret1 = old->next;
							HX_STACK_LINE(9183)
							this->head = ret1;
							HX_STACK_LINE(9183)
							if (((this->head == null()))){
								HX_STACK_LINE(9183)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(9183)
							old = pre->next;
							HX_STACK_LINE(9183)
							ret1 = old->next;
							HX_STACK_LINE(9183)
							pre->next = ret1;
							HX_STACK_LINE(9183)
							if (((ret1 == null()))){
								HX_STACK_LINE(9183)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(9183)
						{
						}
						HX_STACK_LINE(9183)
						{
							HX_STACK_LINE(9183)
							::zpp_nape::util::ZNPNode_ZPP_Component o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(9183)
							{
							}
							HX_STACK_LINE(9183)
							o->elt = null();
							HX_STACK_LINE(9183)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
							HX_STACK_LINE(9183)
							::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
						}
						HX_STACK_LINE(9183)
						this->modified = true;
						HX_STACK_LINE(9183)
						(this->length)--;
						HX_STACK_LINE(9183)
						this->pushmod = true;
						HX_STACK_LINE(9183)
						ret1;
					}
					HX_STACK_LINE(9183)
					ret = true;
					HX_STACK_LINE(9183)
					break;
				}
				HX_STACK_LINE(9183)
				pre = cur;
				HX_STACK_LINE(9183)
				cur = cur->next;
			}
			HX_STACK_LINE(9183)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,remove,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_pop_unsafe","zpp_nape/util/Lists.hx",9161);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9162)
	{
	}
	HX_STACK_LINE(9170)
	::zpp_nape::space::ZPP_Component ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(9171)
	this->pop();
	HX_STACK_LINE(9172)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::pop_unsafe","zpp_nape/util/Lists.hx",9159);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::util::ZNPList_ZPP_Component_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9159);
			{
				HX_STACK_LINE(9159)
				{
				}
				HX_STACK_LINE(9159)
				::zpp_nape::space::ZPP_Component ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9159)
				__this->pop();
				HX_STACK_LINE(9159)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9159)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop_unsafe,return )

Void ZNPList_ZPP_Component_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_pop","zpp_nape/util/Lists.hx",9126);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9127)
		{
		}
		HX_STACK_LINE(9135)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9136)
		this->head = ret->next;
		HX_STACK_LINE(9137)
		{
		}
		HX_STACK_LINE(9138)
		{
			HX_STACK_LINE(9139)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9140)
			{
			}
			HX_STACK_LINE(9148)
			o->elt = null();
			HX_STACK_LINE(9149)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(9150)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9155)
		if (((this->head == null()))){
			HX_STACK_LINE(9155)
			this->pushmod = true;
		}
		HX_STACK_LINE(9156)
		this->modified = true;
		HX_STACK_LINE(9157)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,inlined_pop,(void))

Void ZNPList_ZPP_Component_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::pop","zpp_nape/util/Lists.hx",9124);
		HX_STACK_THIS(this);
		HX_STACK_LINE(9124)
		{
		}
		HX_STACK_LINE(9124)
		::zpp_nape::util::ZNPNode_ZPP_Component ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(9124)
		this->head = ret->next;
		HX_STACK_LINE(9124)
		{
		}
		HX_STACK_LINE(9124)
		{
			HX_STACK_LINE(9124)
			::zpp_nape::util::ZNPNode_ZPP_Component o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(9124)
			{
			}
			HX_STACK_LINE(9124)
			o->elt = null();
			HX_STACK_LINE(9124)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(9124)
			::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(9124)
		if (((this->head == null()))){
			HX_STACK_LINE(9124)
			this->pushmod = true;
		}
		HX_STACK_LINE(9124)
		this->modified = true;
		HX_STACK_LINE(9124)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_insert","zpp_nape/util/Lists.hx",9081);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9082)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::space::ZPP_Component &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9090);
			{
				HX_STACK_LINE(9091)
				::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9092)
				{
					HX_STACK_LINE(9093)
					if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
						HX_STACK_LINE(9093)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();
					}
					else{
						HX_STACK_LINE(9100)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
						HX_STACK_LINE(9101)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9102)
						ret->next = null();
					}
					HX_STACK_LINE(9107)
					Dynamic();
				}
				HX_STACK_LINE(9109)
				ret->elt = o;
				HX_STACK_LINE(9110)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9090)
	::zpp_nape::util::ZNPNode_ZPP_Component temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9112)
	if (((cur == null()))){
		HX_STACK_LINE(9113)
		temp->next = this->head;
		HX_STACK_LINE(9114)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(9117)
		temp->next = cur->next;
		HX_STACK_LINE(9118)
		cur->next = temp;
	}
	HX_STACK_LINE(9120)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(9121)
	(this->length)++;
	HX_STACK_LINE(9122)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Component cur,::zpp_nape::space::ZPP_Component o){
	HX_STACK_PUSH("ZNPList_ZPP_Component::insert","zpp_nape/util/Lists.hx",9079);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::util::ZNPList_ZPP_Component_obj *__this,::zpp_nape::space::ZPP_Component &o,::zpp_nape::util::ZNPNode_ZPP_Component &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9079);
			{
				HX_STACK_LINE(9079)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::space::ZPP_Component &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9079);
						{
							HX_STACK_LINE(9079)
							::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9079)
							{
								HX_STACK_LINE(9079)
								if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
									HX_STACK_LINE(9079)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();
								}
								else{
									HX_STACK_LINE(9079)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
									HX_STACK_LINE(9079)
									::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9079)
									ret->next = null();
								}
								HX_STACK_LINE(9079)
								Dynamic();
							}
							HX_STACK_LINE(9079)
							ret->elt = o;
							HX_STACK_LINE(9079)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9079)
				::zpp_nape::util::ZNPNode_ZPP_Component temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9079)
				if (((cur == null()))){
					HX_STACK_LINE(9079)
					temp->next = __this->head;
					HX_STACK_LINE(9079)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(9079)
					temp->next = cur->next;
					HX_STACK_LINE(9079)
					cur->next = temp;
				}
				HX_STACK_LINE(9079)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(9079)
				(__this->length)++;
				HX_STACK_LINE(9079)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(9079)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Component_obj,insert,return )

Void ZNPList_ZPP_Component_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Component x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::addAll","zpp_nape/util/Lists.hx",9061);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(9062)
		{
		}
		HX_STACK_LINE(9070)
		{
			HX_STACK_LINE(9071)
			::zpp_nape::util::ZNPNode_ZPP_Component cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(9072)
			while(((cx_ite != null()))){
				HX_STACK_LINE(9073)
				::zpp_nape::space::ZPP_Component i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(9074)
				this->add(i);
				HX_STACK_LINE(9075)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,addAll,(void))

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::inlined_add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_PUSH("ZNPList_ZPP_Component::inlined_add","zpp_nape/util/Lists.hx",9024);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(9025)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::space::ZPP_Component &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9033);
			{
				HX_STACK_LINE(9034)
				::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(9035)
				{
					HX_STACK_LINE(9036)
					if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
						HX_STACK_LINE(9036)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();
					}
					else{
						HX_STACK_LINE(9043)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
						HX_STACK_LINE(9044)
						::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
						HX_STACK_LINE(9045)
						ret->next = null();
					}
					HX_STACK_LINE(9050)
					Dynamic();
				}
				HX_STACK_LINE(9052)
				ret->elt = o;
				HX_STACK_LINE(9053)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(9033)
	::zpp_nape::util::ZNPNode_ZPP_Component temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(9055)
	temp->next = this->head;
	HX_STACK_LINE(9056)
	this->head = temp;
	HX_STACK_LINE(9057)
	this->modified = true;
	HX_STACK_LINE(9058)
	(this->length)++;
	HX_STACK_LINE(9059)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,inlined_add,return )

::zpp_nape::space::ZPP_Component ZNPList_ZPP_Component_obj::add( ::zpp_nape::space::ZPP_Component o){
	HX_STACK_PUSH("ZNPList_ZPP_Component::add","zpp_nape/util/Lists.hx",9022);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Component Block( ::zpp_nape::space::ZPP_Component &o,::zpp_nape::util::ZNPList_ZPP_Component_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9022);
			{
				HX_STACK_LINE(9022)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Component Block( ::zpp_nape::space::ZPP_Component &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",9022);
						{
							HX_STACK_LINE(9022)
							::zpp_nape::util::ZNPNode_ZPP_Component ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(9022)
							{
								HX_STACK_LINE(9022)
								if (((::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool == null()))){
									HX_STACK_LINE(9022)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::__new();
								}
								else{
									HX_STACK_LINE(9022)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool;
									HX_STACK_LINE(9022)
									::zpp_nape::util::ZNPNode_ZPP_Component_obj::zpp_pool = ret->next;
									HX_STACK_LINE(9022)
									ret->next = null();
								}
								HX_STACK_LINE(9022)
								Dynamic();
							}
							HX_STACK_LINE(9022)
							ret->elt = o;
							HX_STACK_LINE(9022)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(9022)
				::zpp_nape::util::ZNPNode_ZPP_Component temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(9022)
				temp->next = __this->head;
				HX_STACK_LINE(9022)
				__this->head = temp;
				HX_STACK_LINE(9022)
				__this->modified = true;
				HX_STACK_LINE(9022)
				(__this->length)++;
				HX_STACK_LINE(9022)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(9022)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,add,return )

Void ZNPList_ZPP_Component_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Component i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Component::setbegin","zpp_nape/util/Lists.hx",9017);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(9018)
		this->head = i;
		HX_STACK_LINE(9019)
		this->modified = true;
		HX_STACK_LINE(9020)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Component_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Component ZNPList_ZPP_Component_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Component::begin","zpp_nape/util/Lists.hx",9012);
	HX_STACK_THIS(this);
	HX_STACK_LINE(9012)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Component_obj,begin,return )


ZNPList_ZPP_Component_obj::ZNPList_ZPP_Component_obj()
{
}

void ZNPList_ZPP_Component_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Component);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Component_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Component_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
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
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlined_clear") ) { return inlined_clear_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_erase") ) { return inlined_erase_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inlined_remove") ) { return inlined_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insert") ) { return inlined_insert_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_try_remove") ) { return inlined_try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop_unsafe") ) { return inlined_pop_unsafe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZNPList_ZPP_Component_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Component >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZNPList_ZPP_Component_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
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
	HX_CSTRING("begin"),
	HX_CSTRING("head"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Component_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Component_obj::__mClass;

void ZNPList_ZPP_Component_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Component"), hx::TCanCast< ZNPList_ZPP_Component_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Component_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
