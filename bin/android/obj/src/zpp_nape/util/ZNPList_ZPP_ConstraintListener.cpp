#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_ConstraintListener
#include <zpp_nape/callbacks/ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPNode_ZPP_ConstraintListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ConstraintListener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::new","zpp_nape/util/Lists.hx",4399);
{
	HX_STACK_LINE(4406)
	this->length = (int)0;
	HX_STACK_LINE(4405)
	this->pushmod = false;
	HX_STACK_LINE(4404)
	this->modified = false;
	HX_STACK_LINE(4400)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_ConstraintListener_obj::~ZNPList_ZPP_ConstraintListener_obj() { }

Dynamic ZNPList_ZPP_ConstraintListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_ConstraintListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > ZNPList_ZPP_ConstraintListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ConstraintListener_obj > result = new ZNPList_ZPP_ConstraintListener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::at","zpp_nape/util/Lists.hx",4769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(4770)
	{
	}
	HX_STACK_LINE(4778)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4779)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_ConstraintListener(it->elt) : ::zpp_nape::callbacks::ZPP_ConstraintListener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::iterator_at","zpp_nape/util/Lists.hx",4756);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(4757)
	{
	}
	HX_STACK_LINE(4765)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4766)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(4766)
		ret = ret->next;
	}
	HX_STACK_LINE(4767)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::back","zpp_nape/util/Lists.hx",4747);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4748)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4749)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4750)
	while(((cur != null()))){
		HX_STACK_LINE(4751)
		ret = cur;
		HX_STACK_LINE(4752)
		cur = cur->next;
	}
	HX_STACK_LINE(4754)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,back,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::front","zpp_nape/util/Lists.hx",4747);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4747)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,front,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_has","zpp_nape/util/Lists.hx",4717);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4718)
	{
	}
	HX_STACK_LINE(4726)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4727)
	{
		HX_STACK_LINE(4728)
		ret = false;
		HX_STACK_LINE(4729)
		{
			HX_STACK_LINE(4730)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4731)
			while(((cx_ite != null()))){
				HX_STACK_LINE(4732)
				::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4733)
				if (((npite == obj))){
					HX_STACK_LINE(4735)
					ret = true;
					HX_STACK_LINE(4736)
					break;
				}
				HX_STACK_LINE(4739)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4743)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_has,return )

bool ZNPList_ZPP_ConstraintListener_obj::has( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::has","zpp_nape/util/Lists.hx",4715);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::callbacks::ZPP_ConstraintListener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4715);
			{
				HX_STACK_LINE(4715)
				{
				}
				HX_STACK_LINE(4715)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4715)
				{
					HX_STACK_LINE(4715)
					ret = false;
					HX_STACK_LINE(4715)
					{
						HX_STACK_LINE(4715)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(4715)
						while(((cx_ite != null()))){
							HX_STACK_LINE(4715)
							::zpp_nape::callbacks::ZPP_ConstraintListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(4715)
							if (((npite == obj))){
								HX_STACK_LINE(4715)
								ret = true;
								HX_STACK_LINE(4715)
								break;
							}
							HX_STACK_LINE(4715)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(4715)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4715)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,has,return )

int ZNPList_ZPP_ConstraintListener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::size","zpp_nape/util/Lists.hx",4715);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4715)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,size,return )

bool ZNPList_ZPP_ConstraintListener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::empty","zpp_nape/util/Lists.hx",4713);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4713)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,empty,return )

Void ZNPList_ZPP_ConstraintListener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::reverse","zpp_nape/util/Lists.hx",4698);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4699)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4700)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4701)
		while(((cur != null()))){
			HX_STACK_LINE(4702)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4703)
			cur->next = pre;
			HX_STACK_LINE(4704)
			this->head = cur;
			HX_STACK_LINE(4705)
			pre = cur;
			HX_STACK_LINE(4706)
			cur = nx;
		}
		HX_STACK_LINE(4708)
		this->modified = true;
		HX_STACK_LINE(4709)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,reverse,(void))

Void ZNPList_ZPP_ConstraintListener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_clear","zpp_nape/util/Lists.hx",4692);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4694)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(4694)
			{
			}
			HX_STACK_LINE(4694)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4694)
			this->head = ret->next;
			HX_STACK_LINE(4694)
			{
			}
			HX_STACK_LINE(4694)
			{
				HX_STACK_LINE(4694)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4694)
				{
				}
				HX_STACK_LINE(4694)
				o->elt = null();
				HX_STACK_LINE(4694)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(4694)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4694)
			if (((this->head == null()))){
				HX_STACK_LINE(4694)
				this->pushmod = true;
			}
			HX_STACK_LINE(4694)
			this->modified = true;
			HX_STACK_LINE(4694)
			(this->length)--;
		}
		HX_STACK_LINE(4695)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_ConstraintListener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::clear","zpp_nape/util/Lists.hx",4690);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4690)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(4690)
			{
			}
			HX_STACK_LINE(4690)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4690)
			this->head = ret->next;
			HX_STACK_LINE(4690)
			{
			}
			HX_STACK_LINE(4690)
			{
				HX_STACK_LINE(4690)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4690)
				{
				}
				HX_STACK_LINE(4690)
				o->elt = null();
				HX_STACK_LINE(4690)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
				HX_STACK_LINE(4690)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4690)
			if (((this->head == null()))){
				HX_STACK_LINE(4690)
				this->pushmod = true;
			}
			HX_STACK_LINE(4690)
			this->modified = true;
			HX_STACK_LINE(4690)
			(this->length)--;
		}
		HX_STACK_LINE(4690)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::splice","zpp_nape/util/Lists.hx",4686);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(4687)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(4687)
		this->erase(pre);
	}
	HX_STACK_LINE(4688)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_erase","zpp_nape/util/Lists.hx",4640);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(4641)
	{
	}
	HX_STACK_LINE(4649)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4650)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4651)
	if (((pre == null()))){
		HX_STACK_LINE(4652)
		old = this->head;
		HX_STACK_LINE(4653)
		ret = old->next;
		HX_STACK_LINE(4654)
		this->head = ret;
		HX_STACK_LINE(4655)
		if (((this->head == null()))){
			HX_STACK_LINE(4655)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4658)
		old = pre->next;
		HX_STACK_LINE(4659)
		ret = old->next;
		HX_STACK_LINE(4660)
		pre->next = ret;
		HX_STACK_LINE(4661)
		if (((ret == null()))){
			HX_STACK_LINE(4661)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4663)
	{
	}
	HX_STACK_LINE(4664)
	{
		HX_STACK_LINE(4665)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4666)
		{
		}
		HX_STACK_LINE(4674)
		o->elt = null();
		HX_STACK_LINE(4675)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
		HX_STACK_LINE(4676)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4681)
	this->modified = true;
	HX_STACK_LINE(4682)
	(this->length)--;
	HX_STACK_LINE(4683)
	this->pushmod = true;
	HX_STACK_LINE(4684)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::erase","zpp_nape/util/Lists.hx",4638);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener &pre,::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4638);
			{
				HX_STACK_LINE(4638)
				{
				}
				HX_STACK_LINE(4638)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4638)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4638)
				if (((pre == null()))){
					HX_STACK_LINE(4638)
					old = __this->head;
					HX_STACK_LINE(4638)
					ret = old->next;
					HX_STACK_LINE(4638)
					__this->head = ret;
					HX_STACK_LINE(4638)
					if (((__this->head == null()))){
						HX_STACK_LINE(4638)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4638)
					old = pre->next;
					HX_STACK_LINE(4638)
					ret = old->next;
					HX_STACK_LINE(4638)
					pre->next = ret;
					HX_STACK_LINE(4638)
					if (((ret == null()))){
						HX_STACK_LINE(4638)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(4638)
				{
				}
				HX_STACK_LINE(4638)
				{
					HX_STACK_LINE(4638)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4638)
					{
					}
					HX_STACK_LINE(4638)
					o->elt = null();
					HX_STACK_LINE(4638)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
					HX_STACK_LINE(4638)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4638)
				__this->modified = true;
				HX_STACK_LINE(4638)
				(__this->length)--;
				HX_STACK_LINE(4638)
				__this->pushmod = true;
				HX_STACK_LINE(4638)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4638)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,erase,return )

bool ZNPList_ZPP_ConstraintListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_try_remove","zpp_nape/util/Lists.hx",4615);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4616)
	{
	}
	HX_STACK_LINE(4624)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4625)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4626)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4627)
	while(((cur != null()))){
		HX_STACK_LINE(4628)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4629)
			{
				HX_STACK_LINE(4629)
				{
				}
				HX_STACK_LINE(4629)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4629)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4629)
				if (((pre == null()))){
					HX_STACK_LINE(4629)
					old = this->head;
					HX_STACK_LINE(4629)
					ret1 = old->next;
					HX_STACK_LINE(4629)
					this->head = ret1;
					HX_STACK_LINE(4629)
					if (((this->head == null()))){
						HX_STACK_LINE(4629)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4629)
					old = pre->next;
					HX_STACK_LINE(4629)
					ret1 = old->next;
					HX_STACK_LINE(4629)
					pre->next = ret1;
					HX_STACK_LINE(4629)
					if (((ret1 == null()))){
						HX_STACK_LINE(4629)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4629)
				{
				}
				HX_STACK_LINE(4629)
				{
					HX_STACK_LINE(4629)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4629)
					{
					}
					HX_STACK_LINE(4629)
					o->elt = null();
					HX_STACK_LINE(4629)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
					HX_STACK_LINE(4629)
					::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4629)
				this->modified = true;
				HX_STACK_LINE(4629)
				(this->length)--;
				HX_STACK_LINE(4629)
				this->pushmod = true;
				HX_STACK_LINE(4629)
				ret1;
			}
			HX_STACK_LINE(4630)
			ret = true;
			HX_STACK_LINE(4631)
			break;
		}
		HX_STACK_LINE(4633)
		pre = cur;
		HX_STACK_LINE(4634)
		cur = cur->next;
	}
	HX_STACK_LINE(4636)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_remove","zpp_nape/util/Lists.hx",4602);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4603)
		{
		}
		HX_STACK_LINE(4611)
		{
			HX_STACK_LINE(4611)
			{
			}
			HX_STACK_LINE(4611)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4611)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4611)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4611)
			while(((cur != null()))){
				HX_STACK_LINE(4611)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4611)
					{
						HX_STACK_LINE(4611)
						{
						}
						HX_STACK_LINE(4611)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4611)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4611)
						if (((pre == null()))){
							HX_STACK_LINE(4611)
							old = this->head;
							HX_STACK_LINE(4611)
							ret1 = old->next;
							HX_STACK_LINE(4611)
							this->head = ret1;
							HX_STACK_LINE(4611)
							if (((this->head == null()))){
								HX_STACK_LINE(4611)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4611)
							old = pre->next;
							HX_STACK_LINE(4611)
							ret1 = old->next;
							HX_STACK_LINE(4611)
							pre->next = ret1;
							HX_STACK_LINE(4611)
							if (((ret1 == null()))){
								HX_STACK_LINE(4611)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4611)
						{
						}
						HX_STACK_LINE(4611)
						{
							HX_STACK_LINE(4611)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4611)
							{
							}
							HX_STACK_LINE(4611)
							o->elt = null();
							HX_STACK_LINE(4611)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
							HX_STACK_LINE(4611)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4611)
						this->modified = true;
						HX_STACK_LINE(4611)
						(this->length)--;
						HX_STACK_LINE(4611)
						this->pushmod = true;
						HX_STACK_LINE(4611)
						ret1;
					}
					HX_STACK_LINE(4611)
					ret = true;
					HX_STACK_LINE(4611)
					break;
				}
				HX_STACK_LINE(4611)
				pre = cur;
				HX_STACK_LINE(4611)
				cur = cur->next;
			}
			HX_STACK_LINE(4611)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_ConstraintListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::try_remove","zpp_nape/util/Lists.hx",4577);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4578)
	{
	}
	HX_STACK_LINE(4586)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4587)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4588)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4589)
	while(((cur != null()))){
		HX_STACK_LINE(4590)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4591)
			this->erase(pre);
			HX_STACK_LINE(4592)
			ret = true;
			HX_STACK_LINE(4593)
			break;
		}
		HX_STACK_LINE(4595)
		pre = cur;
		HX_STACK_LINE(4596)
		cur = cur->next;
	}
	HX_STACK_LINE(4598)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,try_remove,return )

Void ZNPList_ZPP_ConstraintListener_obj::remove( ::zpp_nape::callbacks::ZPP_ConstraintListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::remove","zpp_nape/util/Lists.hx",4566);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4567)
		{
		}
		HX_STACK_LINE(4575)
		{
			HX_STACK_LINE(4575)
			{
			}
			HX_STACK_LINE(4575)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4575)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4575)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4575)
			while(((cur != null()))){
				HX_STACK_LINE(4575)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4575)
					{
						HX_STACK_LINE(4575)
						{
						}
						HX_STACK_LINE(4575)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4575)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4575)
						if (((pre == null()))){
							HX_STACK_LINE(4575)
							old = this->head;
							HX_STACK_LINE(4575)
							ret1 = old->next;
							HX_STACK_LINE(4575)
							this->head = ret1;
							HX_STACK_LINE(4575)
							if (((this->head == null()))){
								HX_STACK_LINE(4575)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4575)
							old = pre->next;
							HX_STACK_LINE(4575)
							ret1 = old->next;
							HX_STACK_LINE(4575)
							pre->next = ret1;
							HX_STACK_LINE(4575)
							if (((ret1 == null()))){
								HX_STACK_LINE(4575)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4575)
						{
						}
						HX_STACK_LINE(4575)
						{
							HX_STACK_LINE(4575)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4575)
							{
							}
							HX_STACK_LINE(4575)
							o->elt = null();
							HX_STACK_LINE(4575)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
							HX_STACK_LINE(4575)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4575)
						this->modified = true;
						HX_STACK_LINE(4575)
						(this->length)--;
						HX_STACK_LINE(4575)
						this->pushmod = true;
						HX_STACK_LINE(4575)
						ret1;
					}
					HX_STACK_LINE(4575)
					ret = true;
					HX_STACK_LINE(4575)
					break;
				}
				HX_STACK_LINE(4575)
				pre = cur;
				HX_STACK_LINE(4575)
				cur = cur->next;
			}
			HX_STACK_LINE(4575)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",4553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4554)
	{
	}
	HX_STACK_LINE(4562)
	::zpp_nape::callbacks::ZPP_ConstraintListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4563)
	this->pop();
	HX_STACK_LINE(4564)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::pop_unsafe","zpp_nape/util/Lists.hx",4551);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4551);
			{
				HX_STACK_LINE(4551)
				{
				}
				HX_STACK_LINE(4551)
				::zpp_nape::callbacks::ZPP_ConstraintListener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4551)
				__this->pop();
				HX_STACK_LINE(4551)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4551)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop_unsafe,return )

Void ZNPList_ZPP_ConstraintListener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_pop","zpp_nape/util/Lists.hx",4518);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4519)
		{
		}
		HX_STACK_LINE(4527)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4528)
		this->head = ret->next;
		HX_STACK_LINE(4529)
		{
		}
		HX_STACK_LINE(4530)
		{
			HX_STACK_LINE(4531)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4532)
			{
			}
			HX_STACK_LINE(4540)
			o->elt = null();
			HX_STACK_LINE(4541)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(4542)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4547)
		if (((this->head == null()))){
			HX_STACK_LINE(4547)
			this->pushmod = true;
		}
		HX_STACK_LINE(4548)
		this->modified = true;
		HX_STACK_LINE(4549)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,inlined_pop,(void))

Void ZNPList_ZPP_ConstraintListener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::pop","zpp_nape/util/Lists.hx",4516);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4516)
		{
		}
		HX_STACK_LINE(4516)
		::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4516)
		this->head = ret->next;
		HX_STACK_LINE(4516)
		{
		}
		HX_STACK_LINE(4516)
		{
			HX_STACK_LINE(4516)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4516)
			{
			}
			HX_STACK_LINE(4516)
			o->elt = null();
			HX_STACK_LINE(4516)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
			HX_STACK_LINE(4516)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4516)
		if (((this->head == null()))){
			HX_STACK_LINE(4516)
			this->pushmod = true;
		}
		HX_STACK_LINE(4516)
		this->modified = true;
		HX_STACK_LINE(4516)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_insert","zpp_nape/util/Lists.hx",4473);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4474)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4482);
			{
				HX_STACK_LINE(4483)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4484)
				{
					HX_STACK_LINE(4485)
					if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4485)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4492)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4493)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4494)
						ret->next = null();
					}
					HX_STACK_LINE(4499)
					Dynamic();
				}
				HX_STACK_LINE(4501)
				ret->elt = o;
				HX_STACK_LINE(4502)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4482)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4504)
	if (((cur == null()))){
		HX_STACK_LINE(4505)
		temp->next = this->head;
		HX_STACK_LINE(4506)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4509)
		temp->next = cur->next;
		HX_STACK_LINE(4510)
		cur->next = temp;
	}
	HX_STACK_LINE(4512)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(4513)
	(this->length)++;
	HX_STACK_LINE(4514)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cur,::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::insert","zpp_nape/util/Lists.hx",4471);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this,::zpp_nape::callbacks::ZPP_ConstraintListener &o,::zpp_nape::util::ZNPNode_ZPP_ConstraintListener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4471);
			{
				HX_STACK_LINE(4471)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4471);
						{
							HX_STACK_LINE(4471)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4471)
							{
								HX_STACK_LINE(4471)
								if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4471)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4471)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
									HX_STACK_LINE(4471)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4471)
									ret->next = null();
								}
								HX_STACK_LINE(4471)
								Dynamic();
							}
							HX_STACK_LINE(4471)
							ret->elt = o;
							HX_STACK_LINE(4471)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4471)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4471)
				if (((cur == null()))){
					HX_STACK_LINE(4471)
					temp->next = __this->head;
					HX_STACK_LINE(4471)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(4471)
					temp->next = cur->next;
					HX_STACK_LINE(4471)
					cur->next = temp;
				}
				HX_STACK_LINE(4471)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(4471)
				(__this->length)++;
				HX_STACK_LINE(4471)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(4471)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ConstraintListener_obj,insert,return )

Void ZNPList_ZPP_ConstraintListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ConstraintListener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::addAll","zpp_nape/util/Lists.hx",4453);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4454)
		{
		}
		HX_STACK_LINE(4462)
		{
			HX_STACK_LINE(4463)
			::zpp_nape::util::ZNPNode_ZPP_ConstraintListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4464)
			while(((cx_ite != null()))){
				HX_STACK_LINE(4465)
				::zpp_nape::callbacks::ZPP_ConstraintListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4466)
				this->add(i);
				HX_STACK_LINE(4467)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::inlined_add","zpp_nape/util/Lists.hx",4416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4417)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4425);
			{
				HX_STACK_LINE(4426)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4427)
				{
					HX_STACK_LINE(4428)
					if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4428)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4435)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
						HX_STACK_LINE(4436)
						::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4437)
						ret->next = null();
					}
					HX_STACK_LINE(4442)
					Dynamic();
				}
				HX_STACK_LINE(4444)
				ret->elt = o;
				HX_STACK_LINE(4445)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4425)
	::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4447)
	temp->next = this->head;
	HX_STACK_LINE(4448)
	this->head = temp;
	HX_STACK_LINE(4449)
	this->modified = true;
	HX_STACK_LINE(4450)
	(this->length)++;
	HX_STACK_LINE(4451)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::add( ::zpp_nape::callbacks::ZPP_ConstraintListener o){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::add","zpp_nape/util/Lists.hx",4414);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o,::zpp_nape::util::ZNPList_ZPP_ConstraintListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4414);
			{
				HX_STACK_LINE(4414)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener Block( ::zpp_nape::callbacks::ZPP_ConstraintListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4414);
						{
							HX_STACK_LINE(4414)
							::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4414)
							{
								HX_STACK_LINE(4414)
								if (((::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4414)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4414)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool;
									HX_STACK_LINE(4414)
									::zpp_nape::util::ZNPNode_ZPP_ConstraintListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4414)
									ret->next = null();
								}
								HX_STACK_LINE(4414)
								Dynamic();
							}
							HX_STACK_LINE(4414)
							ret->elt = o;
							HX_STACK_LINE(4414)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4414)
				::zpp_nape::util::ZNPNode_ZPP_ConstraintListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4414)
				temp->next = __this->head;
				HX_STACK_LINE(4414)
				__this->head = temp;
				HX_STACK_LINE(4414)
				__this->modified = true;
				HX_STACK_LINE(4414)
				(__this->length)++;
				HX_STACK_LINE(4414)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(4414)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,add,return )

Void ZNPList_ZPP_ConstraintListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::setbegin","zpp_nape/util/Lists.hx",4409);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(4410)
		this->head = i;
		HX_STACK_LINE(4411)
		this->modified = true;
		HX_STACK_LINE(4412)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ConstraintListener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_ConstraintListener ZNPList_ZPP_ConstraintListener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_ConstraintListener::begin","zpp_nape/util/Lists.hx",4404);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4404)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ConstraintListener_obj,begin,return )


ZNPList_ZPP_ConstraintListener_obj::ZNPList_ZPP_ConstraintListener_obj()
{
}

void ZNPList_ZPP_ConstraintListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ConstraintListener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ConstraintListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_ConstraintListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ConstraintListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ConstraintListener >(); return inValue; }
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

void ZNPList_ZPP_ConstraintListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ConstraintListener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_ConstraintListener_obj::__mClass;

void ZNPList_ZPP_ConstraintListener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ConstraintListener"), hx::TCanCast< ZNPList_ZPP_ConstraintListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_ConstraintListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
