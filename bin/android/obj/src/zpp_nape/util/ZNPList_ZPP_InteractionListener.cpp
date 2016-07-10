#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_InteractionListener
#include <zpp_nape/callbacks/ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionListener
#include <zpp_nape/util/ZNPNode_ZPP_InteractionListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionListener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::new","zpp_nape/util/Lists.hx",3631);
{
	HX_STACK_LINE(3638)
	this->length = (int)0;
	HX_STACK_LINE(3637)
	this->pushmod = false;
	HX_STACK_LINE(3636)
	this->modified = false;
	HX_STACK_LINE(3632)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_InteractionListener_obj::~ZNPList_ZPP_InteractionListener_obj() { }

Dynamic ZNPList_ZPP_InteractionListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > ZNPList_ZPP_InteractionListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > result = new ZNPList_ZPP_InteractionListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionListener_obj > result = new ZNPList_ZPP_InteractionListener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::at","zpp_nape/util/Lists.hx",4001);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(4002)
	{
	}
	HX_STACK_LINE(4010)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4011)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_InteractionListener(it->elt) : ::zpp_nape::callbacks::ZPP_InteractionListener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::iterator_at","zpp_nape/util/Lists.hx",3988);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3989)
	{
	}
	HX_STACK_LINE(3997)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3998)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3998)
		ret = ret->next;
	}
	HX_STACK_LINE(3999)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::back","zpp_nape/util/Lists.hx",3979);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3980)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3981)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3982)
	while(((cur != null()))){
		HX_STACK_LINE(3983)
		ret = cur;
		HX_STACK_LINE(3984)
		cur = cur->next;
	}
	HX_STACK_LINE(3986)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,back,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::front","zpp_nape/util/Lists.hx",3979);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3979)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,front,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_has","zpp_nape/util/Lists.hx",3949);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3950)
	{
	}
	HX_STACK_LINE(3958)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3959)
	{
		HX_STACK_LINE(3960)
		ret = false;
		HX_STACK_LINE(3961)
		{
			HX_STACK_LINE(3962)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3963)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3964)
				::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3965)
				if (((npite == obj))){
					HX_STACK_LINE(3967)
					ret = true;
					HX_STACK_LINE(3968)
					break;
				}
				HX_STACK_LINE(3971)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3975)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_has,return )

bool ZNPList_ZPP_InteractionListener_obj::has( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::has","zpp_nape/util/Lists.hx",3947);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3947);
			{
				HX_STACK_LINE(3947)
				{
				}
				HX_STACK_LINE(3947)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3947)
				{
					HX_STACK_LINE(3947)
					ret = false;
					HX_STACK_LINE(3947)
					{
						HX_STACK_LINE(3947)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3947)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3947)
							::zpp_nape::callbacks::ZPP_InteractionListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3947)
							if (((npite == obj))){
								HX_STACK_LINE(3947)
								ret = true;
								HX_STACK_LINE(3947)
								break;
							}
							HX_STACK_LINE(3947)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3947)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3947)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,has,return )

int ZNPList_ZPP_InteractionListener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::size","zpp_nape/util/Lists.hx",3947);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3947)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,size,return )

bool ZNPList_ZPP_InteractionListener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::empty","zpp_nape/util/Lists.hx",3945);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3945)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,empty,return )

Void ZNPList_ZPP_InteractionListener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::reverse","zpp_nape/util/Lists.hx",3930);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3931)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3932)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3933)
		while(((cur != null()))){
			HX_STACK_LINE(3934)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3935)
			cur->next = pre;
			HX_STACK_LINE(3936)
			this->head = cur;
			HX_STACK_LINE(3937)
			pre = cur;
			HX_STACK_LINE(3938)
			cur = nx;
		}
		HX_STACK_LINE(3940)
		this->modified = true;
		HX_STACK_LINE(3941)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,reverse,(void))

Void ZNPList_ZPP_InteractionListener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_clear","zpp_nape/util/Lists.hx",3924);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3926)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3926)
			{
			}
			HX_STACK_LINE(3926)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3926)
			this->head = ret->next;
			HX_STACK_LINE(3926)
			{
			}
			HX_STACK_LINE(3926)
			{
				HX_STACK_LINE(3926)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3926)
				{
				}
				HX_STACK_LINE(3926)
				o->elt = null();
				HX_STACK_LINE(3926)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
				HX_STACK_LINE(3926)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3926)
			if (((this->head == null()))){
				HX_STACK_LINE(3926)
				this->pushmod = true;
			}
			HX_STACK_LINE(3926)
			this->modified = true;
			HX_STACK_LINE(3926)
			(this->length)--;
		}
		HX_STACK_LINE(3927)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionListener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::clear","zpp_nape/util/Lists.hx",3922);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3922)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3922)
			{
			}
			HX_STACK_LINE(3922)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3922)
			this->head = ret->next;
			HX_STACK_LINE(3922)
			{
			}
			HX_STACK_LINE(3922)
			{
				HX_STACK_LINE(3922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3922)
				{
				}
				HX_STACK_LINE(3922)
				o->elt = null();
				HX_STACK_LINE(3922)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
				HX_STACK_LINE(3922)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3922)
			if (((this->head == null()))){
				HX_STACK_LINE(3922)
				this->pushmod = true;
			}
			HX_STACK_LINE(3922)
			this->modified = true;
			HX_STACK_LINE(3922)
			(this->length)--;
		}
		HX_STACK_LINE(3922)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::splice","zpp_nape/util/Lists.hx",3918);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(3919)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(3919)
		this->erase(pre);
	}
	HX_STACK_LINE(3920)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_erase","zpp_nape/util/Lists.hx",3872);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(3873)
	{
	}
	HX_STACK_LINE(3881)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3882)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3883)
	if (((pre == null()))){
		HX_STACK_LINE(3884)
		old = this->head;
		HX_STACK_LINE(3885)
		ret = old->next;
		HX_STACK_LINE(3886)
		this->head = ret;
		HX_STACK_LINE(3887)
		if (((this->head == null()))){
			HX_STACK_LINE(3887)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3890)
		old = pre->next;
		HX_STACK_LINE(3891)
		ret = old->next;
		HX_STACK_LINE(3892)
		pre->next = ret;
		HX_STACK_LINE(3893)
		if (((ret == null()))){
			HX_STACK_LINE(3893)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3895)
	{
	}
	HX_STACK_LINE(3896)
	{
		HX_STACK_LINE(3897)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3898)
		{
		}
		HX_STACK_LINE(3906)
		o->elt = null();
		HX_STACK_LINE(3907)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
		HX_STACK_LINE(3908)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3913)
	this->modified = true;
	HX_STACK_LINE(3914)
	(this->length)--;
	HX_STACK_LINE(3915)
	this->pushmod = true;
	HX_STACK_LINE(3916)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::erase","zpp_nape/util/Lists.hx",3870);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener &pre,::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3870);
			{
				HX_STACK_LINE(3870)
				{
				}
				HX_STACK_LINE(3870)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3870)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3870)
				if (((pre == null()))){
					HX_STACK_LINE(3870)
					old = __this->head;
					HX_STACK_LINE(3870)
					ret = old->next;
					HX_STACK_LINE(3870)
					__this->head = ret;
					HX_STACK_LINE(3870)
					if (((__this->head == null()))){
						HX_STACK_LINE(3870)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3870)
					old = pre->next;
					HX_STACK_LINE(3870)
					ret = old->next;
					HX_STACK_LINE(3870)
					pre->next = ret;
					HX_STACK_LINE(3870)
					if (((ret == null()))){
						HX_STACK_LINE(3870)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(3870)
				{
				}
				HX_STACK_LINE(3870)
				{
					HX_STACK_LINE(3870)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3870)
					{
					}
					HX_STACK_LINE(3870)
					o->elt = null();
					HX_STACK_LINE(3870)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
					HX_STACK_LINE(3870)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3870)
				__this->modified = true;
				HX_STACK_LINE(3870)
				(__this->length)--;
				HX_STACK_LINE(3870)
				__this->pushmod = true;
				HX_STACK_LINE(3870)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3870)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,erase,return )

bool ZNPList_ZPP_InteractionListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_try_remove","zpp_nape/util/Lists.hx",3847);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3848)
	{
	}
	HX_STACK_LINE(3856)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3857)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3858)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3859)
	while(((cur != null()))){
		HX_STACK_LINE(3860)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3861)
			{
				HX_STACK_LINE(3861)
				{
				}
				HX_STACK_LINE(3861)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3861)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3861)
				if (((pre == null()))){
					HX_STACK_LINE(3861)
					old = this->head;
					HX_STACK_LINE(3861)
					ret1 = old->next;
					HX_STACK_LINE(3861)
					this->head = ret1;
					HX_STACK_LINE(3861)
					if (((this->head == null()))){
						HX_STACK_LINE(3861)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3861)
					old = pre->next;
					HX_STACK_LINE(3861)
					ret1 = old->next;
					HX_STACK_LINE(3861)
					pre->next = ret1;
					HX_STACK_LINE(3861)
					if (((ret1 == null()))){
						HX_STACK_LINE(3861)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3861)
				{
				}
				HX_STACK_LINE(3861)
				{
					HX_STACK_LINE(3861)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3861)
					{
					}
					HX_STACK_LINE(3861)
					o->elt = null();
					HX_STACK_LINE(3861)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
					HX_STACK_LINE(3861)
					::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3861)
				this->modified = true;
				HX_STACK_LINE(3861)
				(this->length)--;
				HX_STACK_LINE(3861)
				this->pushmod = true;
				HX_STACK_LINE(3861)
				ret1;
			}
			HX_STACK_LINE(3862)
			ret = true;
			HX_STACK_LINE(3863)
			break;
		}
		HX_STACK_LINE(3865)
		pre = cur;
		HX_STACK_LINE(3866)
		cur = cur->next;
	}
	HX_STACK_LINE(3868)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_remove","zpp_nape/util/Lists.hx",3834);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3835)
		{
		}
		HX_STACK_LINE(3843)
		{
			HX_STACK_LINE(3843)
			{
			}
			HX_STACK_LINE(3843)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3843)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3843)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3843)
			while(((cur != null()))){
				HX_STACK_LINE(3843)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3843)
					{
						HX_STACK_LINE(3843)
						{
						}
						HX_STACK_LINE(3843)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3843)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3843)
						if (((pre == null()))){
							HX_STACK_LINE(3843)
							old = this->head;
							HX_STACK_LINE(3843)
							ret1 = old->next;
							HX_STACK_LINE(3843)
							this->head = ret1;
							HX_STACK_LINE(3843)
							if (((this->head == null()))){
								HX_STACK_LINE(3843)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3843)
							old = pre->next;
							HX_STACK_LINE(3843)
							ret1 = old->next;
							HX_STACK_LINE(3843)
							pre->next = ret1;
							HX_STACK_LINE(3843)
							if (((ret1 == null()))){
								HX_STACK_LINE(3843)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3843)
						{
						}
						HX_STACK_LINE(3843)
						{
							HX_STACK_LINE(3843)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3843)
							{
							}
							HX_STACK_LINE(3843)
							o->elt = null();
							HX_STACK_LINE(3843)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
							HX_STACK_LINE(3843)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3843)
						this->modified = true;
						HX_STACK_LINE(3843)
						(this->length)--;
						HX_STACK_LINE(3843)
						this->pushmod = true;
						HX_STACK_LINE(3843)
						ret1;
					}
					HX_STACK_LINE(3843)
					ret = true;
					HX_STACK_LINE(3843)
					break;
				}
				HX_STACK_LINE(3843)
				pre = cur;
				HX_STACK_LINE(3843)
				cur = cur->next;
			}
			HX_STACK_LINE(3843)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::try_remove","zpp_nape/util/Lists.hx",3809);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3810)
	{
	}
	HX_STACK_LINE(3818)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3819)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3820)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3821)
	while(((cur != null()))){
		HX_STACK_LINE(3822)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3823)
			this->erase(pre);
			HX_STACK_LINE(3824)
			ret = true;
			HX_STACK_LINE(3825)
			break;
		}
		HX_STACK_LINE(3827)
		pre = cur;
		HX_STACK_LINE(3828)
		cur = cur->next;
	}
	HX_STACK_LINE(3830)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,try_remove,return )

Void ZNPList_ZPP_InteractionListener_obj::remove( ::zpp_nape::callbacks::ZPP_InteractionListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::remove","zpp_nape/util/Lists.hx",3798);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3799)
		{
		}
		HX_STACK_LINE(3807)
		{
			HX_STACK_LINE(3807)
			{
			}
			HX_STACK_LINE(3807)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3807)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3807)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3807)
			while(((cur != null()))){
				HX_STACK_LINE(3807)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3807)
					{
						HX_STACK_LINE(3807)
						{
						}
						HX_STACK_LINE(3807)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3807)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3807)
						if (((pre == null()))){
							HX_STACK_LINE(3807)
							old = this->head;
							HX_STACK_LINE(3807)
							ret1 = old->next;
							HX_STACK_LINE(3807)
							this->head = ret1;
							HX_STACK_LINE(3807)
							if (((this->head == null()))){
								HX_STACK_LINE(3807)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3807)
							old = pre->next;
							HX_STACK_LINE(3807)
							ret1 = old->next;
							HX_STACK_LINE(3807)
							pre->next = ret1;
							HX_STACK_LINE(3807)
							if (((ret1 == null()))){
								HX_STACK_LINE(3807)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3807)
						{
						}
						HX_STACK_LINE(3807)
						{
							HX_STACK_LINE(3807)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3807)
							{
							}
							HX_STACK_LINE(3807)
							o->elt = null();
							HX_STACK_LINE(3807)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
							HX_STACK_LINE(3807)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3807)
						this->modified = true;
						HX_STACK_LINE(3807)
						(this->length)--;
						HX_STACK_LINE(3807)
						this->pushmod = true;
						HX_STACK_LINE(3807)
						ret1;
					}
					HX_STACK_LINE(3807)
					ret = true;
					HX_STACK_LINE(3807)
					break;
				}
				HX_STACK_LINE(3807)
				pre = cur;
				HX_STACK_LINE(3807)
				cur = cur->next;
			}
			HX_STACK_LINE(3807)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",3785);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3786)
	{
	}
	HX_STACK_LINE(3794)
	::zpp_nape::callbacks::ZPP_InteractionListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3795)
	this->pop();
	HX_STACK_LINE(3796)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::pop_unsafe","zpp_nape/util/Lists.hx",3783);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3783);
			{
				HX_STACK_LINE(3783)
				{
				}
				HX_STACK_LINE(3783)
				::zpp_nape::callbacks::ZPP_InteractionListener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3783)
				__this->pop();
				HX_STACK_LINE(3783)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3783)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop_unsafe,return )

Void ZNPList_ZPP_InteractionListener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_pop","zpp_nape/util/Lists.hx",3750);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3751)
		{
		}
		HX_STACK_LINE(3759)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3760)
		this->head = ret->next;
		HX_STACK_LINE(3761)
		{
		}
		HX_STACK_LINE(3762)
		{
			HX_STACK_LINE(3763)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3764)
			{
			}
			HX_STACK_LINE(3772)
			o->elt = null();
			HX_STACK_LINE(3773)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
			HX_STACK_LINE(3774)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3779)
		if (((this->head == null()))){
			HX_STACK_LINE(3779)
			this->pushmod = true;
		}
		HX_STACK_LINE(3780)
		this->modified = true;
		HX_STACK_LINE(3781)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,inlined_pop,(void))

Void ZNPList_ZPP_InteractionListener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::pop","zpp_nape/util/Lists.hx",3748);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3748)
		{
		}
		HX_STACK_LINE(3748)
		::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(3748)
		this->head = ret->next;
		HX_STACK_LINE(3748)
		{
		}
		HX_STACK_LINE(3748)
		{
			HX_STACK_LINE(3748)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(3748)
			{
			}
			HX_STACK_LINE(3748)
			o->elt = null();
			HX_STACK_LINE(3748)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
			HX_STACK_LINE(3748)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3748)
		if (((this->head == null()))){
			HX_STACK_LINE(3748)
			this->pushmod = true;
		}
		HX_STACK_LINE(3748)
		this->modified = true;
		HX_STACK_LINE(3748)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_insert","zpp_nape/util/Lists.hx",3705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3706)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3714);
			{
				HX_STACK_LINE(3715)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3716)
				{
					HX_STACK_LINE(3717)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(3717)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
					}
					else{
						HX_STACK_LINE(3724)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(3725)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3726)
						ret->next = null();
					}
					HX_STACK_LINE(3731)
					Dynamic();
				}
				HX_STACK_LINE(3733)
				ret->elt = o;
				HX_STACK_LINE(3734)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3714)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3736)
	if (((cur == null()))){
		HX_STACK_LINE(3737)
		temp->next = this->head;
		HX_STACK_LINE(3738)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(3741)
		temp->next = cur->next;
		HX_STACK_LINE(3742)
		cur->next = temp;
	}
	HX_STACK_LINE(3744)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(3745)
	(this->length)++;
	HX_STACK_LINE(3746)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener cur,::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::insert","zpp_nape/util/Lists.hx",3703);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this,::zpp_nape::callbacks::ZPP_InteractionListener &o,::zpp_nape::util::ZNPNode_ZPP_InteractionListener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3703);
			{
				HX_STACK_LINE(3703)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3703);
						{
							HX_STACK_LINE(3703)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3703)
							{
								HX_STACK_LINE(3703)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(3703)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
								}
								else{
									HX_STACK_LINE(3703)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
									HX_STACK_LINE(3703)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3703)
									ret->next = null();
								}
								HX_STACK_LINE(3703)
								Dynamic();
							}
							HX_STACK_LINE(3703)
							ret->elt = o;
							HX_STACK_LINE(3703)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3703)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3703)
				if (((cur == null()))){
					HX_STACK_LINE(3703)
					temp->next = __this->head;
					HX_STACK_LINE(3703)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(3703)
					temp->next = cur->next;
					HX_STACK_LINE(3703)
					cur->next = temp;
				}
				HX_STACK_LINE(3703)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(3703)
				(__this->length)++;
				HX_STACK_LINE(3703)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(3703)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionListener_obj,insert,return )

Void ZNPList_ZPP_InteractionListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionListener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::addAll","zpp_nape/util/Lists.hx",3685);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(3686)
		{
		}
		HX_STACK_LINE(3694)
		{
			HX_STACK_LINE(3695)
			::zpp_nape::util::ZNPNode_ZPP_InteractionListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3696)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3697)
				::zpp_nape::callbacks::ZPP_InteractionListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(3698)
				this->add(i);
				HX_STACK_LINE(3699)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::inlined_add","zpp_nape/util/Lists.hx",3648);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(3649)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3657);
			{
				HX_STACK_LINE(3658)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3659)
				{
					HX_STACK_LINE(3660)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(3660)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
					}
					else{
						HX_STACK_LINE(3667)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
						HX_STACK_LINE(3668)
						::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(3669)
						ret->next = null();
					}
					HX_STACK_LINE(3674)
					Dynamic();
				}
				HX_STACK_LINE(3676)
				ret->elt = o;
				HX_STACK_LINE(3677)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3657)
	::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(3679)
	temp->next = this->head;
	HX_STACK_LINE(3680)
	this->head = temp;
	HX_STACK_LINE(3681)
	this->modified = true;
	HX_STACK_LINE(3682)
	(this->length)++;
	HX_STACK_LINE(3683)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::add( ::zpp_nape::callbacks::ZPP_InteractionListener o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::add","zpp_nape/util/Lists.hx",3646);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o,::zpp_nape::util::ZNPList_ZPP_InteractionListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3646);
			{
				HX_STACK_LINE(3646)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionListener Block( ::zpp_nape::callbacks::ZPP_InteractionListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3646);
						{
							HX_STACK_LINE(3646)
							::zpp_nape::util::ZNPNode_ZPP_InteractionListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(3646)
							{
								HX_STACK_LINE(3646)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(3646)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::__new();
								}
								else{
									HX_STACK_LINE(3646)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool;
									HX_STACK_LINE(3646)
									::zpp_nape::util::ZNPNode_ZPP_InteractionListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(3646)
									ret->next = null();
								}
								HX_STACK_LINE(3646)
								Dynamic();
							}
							HX_STACK_LINE(3646)
							ret->elt = o;
							HX_STACK_LINE(3646)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(3646)
				::zpp_nape::util::ZNPNode_ZPP_InteractionListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(3646)
				temp->next = __this->head;
				HX_STACK_LINE(3646)
				__this->head = temp;
				HX_STACK_LINE(3646)
				__this->modified = true;
				HX_STACK_LINE(3646)
				(__this->length)++;
				HX_STACK_LINE(3646)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(3646)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,add,return )

Void ZNPList_ZPP_InteractionListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionListener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::setbegin","zpp_nape/util/Lists.hx",3641);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(3642)
		this->head = i;
		HX_STACK_LINE(3643)
		this->modified = true;
		HX_STACK_LINE(3644)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionListener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionListener ZNPList_ZPP_InteractionListener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionListener::begin","zpp_nape/util/Lists.hx",3636);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3636)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionListener_obj,begin,return )


ZNPList_ZPP_InteractionListener_obj::ZNPList_ZPP_InteractionListener_obj()
{
}

void ZNPList_ZPP_InteractionListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionListener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_InteractionListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_InteractionListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionListener >(); return inValue; }
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

void ZNPList_ZPP_InteractionListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionListener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_InteractionListener_obj::__mClass;

void ZNPList_ZPP_InteractionListener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_InteractionListener"), hx::TCanCast< ZNPList_ZPP_InteractionListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_InteractionListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
