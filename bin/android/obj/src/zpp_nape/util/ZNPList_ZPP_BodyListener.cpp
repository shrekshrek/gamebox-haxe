#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_BodyListener
#include <zpp_nape/callbacks/ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_BodyListener
#include <zpp_nape/util/ZNPNode_ZPP_BodyListener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_BodyListener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_BodyListener::new","zpp_nape/util/Lists.hx",4015);
{
	HX_STACK_LINE(4022)
	this->length = (int)0;
	HX_STACK_LINE(4021)
	this->pushmod = false;
	HX_STACK_LINE(4020)
	this->modified = false;
	HX_STACK_LINE(4016)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_BodyListener_obj::~ZNPList_ZPP_BodyListener_obj() { }

Dynamic ZNPList_ZPP_BodyListener_obj::__CreateEmpty() { return  new ZNPList_ZPP_BodyListener_obj; }
hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > ZNPList_ZPP_BodyListener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > result = new ZNPList_ZPP_BodyListener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_BodyListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_BodyListener_obj > result = new ZNPList_ZPP_BodyListener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::at","zpp_nape/util/Lists.hx",4385);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(4386)
	{
	}
	HX_STACK_LINE(4394)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(4395)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_BodyListener(it->elt) : ::zpp_nape::callbacks::ZPP_BodyListener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::iterator_at","zpp_nape/util/Lists.hx",4372);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(4373)
	{
	}
	HX_STACK_LINE(4381)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4382)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(4382)
		ret = ret->next;
	}
	HX_STACK_LINE(4383)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::back","zpp_nape/util/Lists.hx",4363);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4364)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4365)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4366)
	while(((cur != null()))){
		HX_STACK_LINE(4367)
		ret = cur;
		HX_STACK_LINE(4368)
		cur = cur->next;
	}
	HX_STACK_LINE(4370)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,back,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::front","zpp_nape/util/Lists.hx",4363);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4363)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,front,return )

bool ZNPList_ZPP_BodyListener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_has","zpp_nape/util/Lists.hx",4333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4334)
	{
	}
	HX_STACK_LINE(4342)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4343)
	{
		HX_STACK_LINE(4344)
		ret = false;
		HX_STACK_LINE(4345)
		{
			HX_STACK_LINE(4346)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4347)
			while(((cx_ite != null()))){
				HX_STACK_LINE(4348)
				::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(4349)
				if (((npite == obj))){
					HX_STACK_LINE(4351)
					ret = true;
					HX_STACK_LINE(4352)
					break;
				}
				HX_STACK_LINE(4355)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(4359)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_has,return )

bool ZNPList_ZPP_BodyListener_obj::has( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::has","zpp_nape/util/Lists.hx",4331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj *__this,::zpp_nape::callbacks::ZPP_BodyListener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4331);
			{
				HX_STACK_LINE(4331)
				{
				}
				HX_STACK_LINE(4331)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4331)
				{
					HX_STACK_LINE(4331)
					ret = false;
					HX_STACK_LINE(4331)
					{
						HX_STACK_LINE(4331)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(4331)
						while(((cx_ite != null()))){
							HX_STACK_LINE(4331)
							::zpp_nape::callbacks::ZPP_BodyListener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(4331)
							if (((npite == obj))){
								HX_STACK_LINE(4331)
								ret = true;
								HX_STACK_LINE(4331)
								break;
							}
							HX_STACK_LINE(4331)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(4331)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4331)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,has,return )

int ZNPList_ZPP_BodyListener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::size","zpp_nape/util/Lists.hx",4331);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4331)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,size,return )

bool ZNPList_ZPP_BodyListener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::empty","zpp_nape/util/Lists.hx",4329);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4329)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,empty,return )

Void ZNPList_ZPP_BodyListener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::reverse","zpp_nape/util/Lists.hx",4314);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4315)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(4316)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(4317)
		while(((cur != null()))){
			HX_STACK_LINE(4318)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(4319)
			cur->next = pre;
			HX_STACK_LINE(4320)
			this->head = cur;
			HX_STACK_LINE(4321)
			pre = cur;
			HX_STACK_LINE(4322)
			cur = nx;
		}
		HX_STACK_LINE(4324)
		this->modified = true;
		HX_STACK_LINE(4325)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,reverse,(void))

Void ZNPList_ZPP_BodyListener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_clear","zpp_nape/util/Lists.hx",4308);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4310)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(4310)
			{
			}
			HX_STACK_LINE(4310)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4310)
			this->head = ret->next;
			HX_STACK_LINE(4310)
			{
			}
			HX_STACK_LINE(4310)
			{
				HX_STACK_LINE(4310)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4310)
				{
				}
				HX_STACK_LINE(4310)
				o->elt = null();
				HX_STACK_LINE(4310)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4310)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4310)
			if (((this->head == null()))){
				HX_STACK_LINE(4310)
				this->pushmod = true;
			}
			HX_STACK_LINE(4310)
			this->modified = true;
			HX_STACK_LINE(4310)
			(this->length)--;
		}
		HX_STACK_LINE(4311)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_clear,(void))

Void ZNPList_ZPP_BodyListener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::clear","zpp_nape/util/Lists.hx",4306);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4306)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(4306)
			{
			}
			HX_STACK_LINE(4306)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4306)
			this->head = ret->next;
			HX_STACK_LINE(4306)
			{
			}
			HX_STACK_LINE(4306)
			{
				HX_STACK_LINE(4306)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(4306)
				{
				}
				HX_STACK_LINE(4306)
				o->elt = null();
				HX_STACK_LINE(4306)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
				HX_STACK_LINE(4306)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(4306)
			if (((this->head == null()))){
				HX_STACK_LINE(4306)
				this->pushmod = true;
			}
			HX_STACK_LINE(4306)
			this->modified = true;
			HX_STACK_LINE(4306)
			(this->length)--;
		}
		HX_STACK_LINE(4306)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::splice","zpp_nape/util/Lists.hx",4302);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(4303)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(4303)
		this->erase(pre);
	}
	HX_STACK_LINE(4304)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_erase","zpp_nape/util/Lists.hx",4256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(4257)
	{
	}
	HX_STACK_LINE(4265)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(4266)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4267)
	if (((pre == null()))){
		HX_STACK_LINE(4268)
		old = this->head;
		HX_STACK_LINE(4269)
		ret = old->next;
		HX_STACK_LINE(4270)
		this->head = ret;
		HX_STACK_LINE(4271)
		if (((this->head == null()))){
			HX_STACK_LINE(4271)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(4274)
		old = pre->next;
		HX_STACK_LINE(4275)
		ret = old->next;
		HX_STACK_LINE(4276)
		pre->next = ret;
		HX_STACK_LINE(4277)
		if (((ret == null()))){
			HX_STACK_LINE(4277)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(4279)
	{
	}
	HX_STACK_LINE(4280)
	{
		HX_STACK_LINE(4281)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(4282)
		{
		}
		HX_STACK_LINE(4290)
		o->elt = null();
		HX_STACK_LINE(4291)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
		HX_STACK_LINE(4292)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(4297)
	this->modified = true;
	HX_STACK_LINE(4298)
	(this->length)--;
	HX_STACK_LINE(4299)
	this->pushmod = true;
	HX_STACK_LINE(4300)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_BodyListener pre){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::erase","zpp_nape/util/Lists.hx",4254);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::util::ZNPNode_ZPP_BodyListener &pre,::zpp_nape::util::ZNPList_ZPP_BodyListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4254);
			{
				HX_STACK_LINE(4254)
				{
				}
				HX_STACK_LINE(4254)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4254)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4254)
				if (((pre == null()))){
					HX_STACK_LINE(4254)
					old = __this->head;
					HX_STACK_LINE(4254)
					ret = old->next;
					HX_STACK_LINE(4254)
					__this->head = ret;
					HX_STACK_LINE(4254)
					if (((__this->head == null()))){
						HX_STACK_LINE(4254)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4254)
					old = pre->next;
					HX_STACK_LINE(4254)
					ret = old->next;
					HX_STACK_LINE(4254)
					pre->next = ret;
					HX_STACK_LINE(4254)
					if (((ret == null()))){
						HX_STACK_LINE(4254)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(4254)
				{
				}
				HX_STACK_LINE(4254)
				{
					HX_STACK_LINE(4254)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4254)
					{
					}
					HX_STACK_LINE(4254)
					o->elt = null();
					HX_STACK_LINE(4254)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
					HX_STACK_LINE(4254)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4254)
				__this->modified = true;
				HX_STACK_LINE(4254)
				(__this->length)--;
				HX_STACK_LINE(4254)
				__this->pushmod = true;
				HX_STACK_LINE(4254)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4254)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,erase,return )

bool ZNPList_ZPP_BodyListener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_try_remove","zpp_nape/util/Lists.hx",4231);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4232)
	{
	}
	HX_STACK_LINE(4240)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4241)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4242)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4243)
	while(((cur != null()))){
		HX_STACK_LINE(4244)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4245)
			{
				HX_STACK_LINE(4245)
				{
				}
				HX_STACK_LINE(4245)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(4245)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(4245)
				if (((pre == null()))){
					HX_STACK_LINE(4245)
					old = this->head;
					HX_STACK_LINE(4245)
					ret1 = old->next;
					HX_STACK_LINE(4245)
					this->head = ret1;
					HX_STACK_LINE(4245)
					if (((this->head == null()))){
						HX_STACK_LINE(4245)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(4245)
					old = pre->next;
					HX_STACK_LINE(4245)
					ret1 = old->next;
					HX_STACK_LINE(4245)
					pre->next = ret1;
					HX_STACK_LINE(4245)
					if (((ret1 == null()))){
						HX_STACK_LINE(4245)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(4245)
				{
				}
				HX_STACK_LINE(4245)
				{
					HX_STACK_LINE(4245)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(4245)
					{
					}
					HX_STACK_LINE(4245)
					o->elt = null();
					HX_STACK_LINE(4245)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
					HX_STACK_LINE(4245)
					::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(4245)
				this->modified = true;
				HX_STACK_LINE(4245)
				(this->length)--;
				HX_STACK_LINE(4245)
				this->pushmod = true;
				HX_STACK_LINE(4245)
				ret1;
			}
			HX_STACK_LINE(4246)
			ret = true;
			HX_STACK_LINE(4247)
			break;
		}
		HX_STACK_LINE(4249)
		pre = cur;
		HX_STACK_LINE(4250)
		cur = cur->next;
	}
	HX_STACK_LINE(4252)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_BodyListener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_remove","zpp_nape/util/Lists.hx",4218);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4219)
		{
		}
		HX_STACK_LINE(4227)
		{
			HX_STACK_LINE(4227)
			{
			}
			HX_STACK_LINE(4227)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4227)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4227)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4227)
			while(((cur != null()))){
				HX_STACK_LINE(4227)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4227)
					{
						HX_STACK_LINE(4227)
						{
						}
						HX_STACK_LINE(4227)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4227)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4227)
						if (((pre == null()))){
							HX_STACK_LINE(4227)
							old = this->head;
							HX_STACK_LINE(4227)
							ret1 = old->next;
							HX_STACK_LINE(4227)
							this->head = ret1;
							HX_STACK_LINE(4227)
							if (((this->head == null()))){
								HX_STACK_LINE(4227)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4227)
							old = pre->next;
							HX_STACK_LINE(4227)
							ret1 = old->next;
							HX_STACK_LINE(4227)
							pre->next = ret1;
							HX_STACK_LINE(4227)
							if (((ret1 == null()))){
								HX_STACK_LINE(4227)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4227)
						{
						}
						HX_STACK_LINE(4227)
						{
							HX_STACK_LINE(4227)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4227)
							{
							}
							HX_STACK_LINE(4227)
							o->elt = null();
							HX_STACK_LINE(4227)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
							HX_STACK_LINE(4227)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4227)
						this->modified = true;
						HX_STACK_LINE(4227)
						(this->length)--;
						HX_STACK_LINE(4227)
						this->pushmod = true;
						HX_STACK_LINE(4227)
						ret1;
					}
					HX_STACK_LINE(4227)
					ret = true;
					HX_STACK_LINE(4227)
					break;
				}
				HX_STACK_LINE(4227)
				pre = cur;
				HX_STACK_LINE(4227)
				cur = cur->next;
			}
			HX_STACK_LINE(4227)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_remove,(void))

bool ZNPList_ZPP_BodyListener_obj::try_remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::try_remove","zpp_nape/util/Lists.hx",4193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4194)
	{
	}
	HX_STACK_LINE(4202)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4203)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4204)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4205)
	while(((cur != null()))){
		HX_STACK_LINE(4206)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4207)
			this->erase(pre);
			HX_STACK_LINE(4208)
			ret = true;
			HX_STACK_LINE(4209)
			break;
		}
		HX_STACK_LINE(4211)
		pre = cur;
		HX_STACK_LINE(4212)
		cur = cur->next;
	}
	HX_STACK_LINE(4214)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,try_remove,return )

Void ZNPList_ZPP_BodyListener_obj::remove( ::zpp_nape::callbacks::ZPP_BodyListener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::remove","zpp_nape/util/Lists.hx",4182);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4183)
		{
		}
		HX_STACK_LINE(4191)
		{
			HX_STACK_LINE(4191)
			{
			}
			HX_STACK_LINE(4191)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4191)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4191)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4191)
			while(((cur != null()))){
				HX_STACK_LINE(4191)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4191)
					{
						HX_STACK_LINE(4191)
						{
						}
						HX_STACK_LINE(4191)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4191)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4191)
						if (((pre == null()))){
							HX_STACK_LINE(4191)
							old = this->head;
							HX_STACK_LINE(4191)
							ret1 = old->next;
							HX_STACK_LINE(4191)
							this->head = ret1;
							HX_STACK_LINE(4191)
							if (((this->head == null()))){
								HX_STACK_LINE(4191)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4191)
							old = pre->next;
							HX_STACK_LINE(4191)
							ret1 = old->next;
							HX_STACK_LINE(4191)
							pre->next = ret1;
							HX_STACK_LINE(4191)
							if (((ret1 == null()))){
								HX_STACK_LINE(4191)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4191)
						{
						}
						HX_STACK_LINE(4191)
						{
							HX_STACK_LINE(4191)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4191)
							{
							}
							HX_STACK_LINE(4191)
							o->elt = null();
							HX_STACK_LINE(4191)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
							HX_STACK_LINE(4191)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4191)
						this->modified = true;
						HX_STACK_LINE(4191)
						(this->length)--;
						HX_STACK_LINE(4191)
						this->pushmod = true;
						HX_STACK_LINE(4191)
						ret1;
					}
					HX_STACK_LINE(4191)
					ret = true;
					HX_STACK_LINE(4191)
					break;
				}
				HX_STACK_LINE(4191)
				pre = cur;
				HX_STACK_LINE(4191)
				cur = cur->next;
			}
			HX_STACK_LINE(4191)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",4169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4170)
	{
	}
	HX_STACK_LINE(4178)
	::zpp_nape::callbacks::ZPP_BodyListener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4179)
	this->pop();
	HX_STACK_LINE(4180)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::pop_unsafe","zpp_nape/util/Lists.hx",4167);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_BodyListener Block( ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4167);
			{
				HX_STACK_LINE(4167)
				{
				}
				HX_STACK_LINE(4167)
				::zpp_nape::callbacks::ZPP_BodyListener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4167)
				__this->pop();
				HX_STACK_LINE(4167)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4167)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop_unsafe,return )

Void ZNPList_ZPP_BodyListener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_pop","zpp_nape/util/Lists.hx",4134);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4135)
		{
		}
		HX_STACK_LINE(4143)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4144)
		this->head = ret->next;
		HX_STACK_LINE(4145)
		{
		}
		HX_STACK_LINE(4146)
		{
			HX_STACK_LINE(4147)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4148)
			{
			}
			HX_STACK_LINE(4156)
			o->elt = null();
			HX_STACK_LINE(4157)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
			HX_STACK_LINE(4158)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4163)
		if (((this->head == null()))){
			HX_STACK_LINE(4163)
			this->pushmod = true;
		}
		HX_STACK_LINE(4164)
		this->modified = true;
		HX_STACK_LINE(4165)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,inlined_pop,(void))

Void ZNPList_ZPP_BodyListener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::pop","zpp_nape/util/Lists.hx",4132);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4132)
		{
		}
		HX_STACK_LINE(4132)
		::zpp_nape::util::ZNPNode_ZPP_BodyListener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4132)
		this->head = ret->next;
		HX_STACK_LINE(4132)
		{
		}
		HX_STACK_LINE(4132)
		{
			HX_STACK_LINE(4132)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4132)
			{
			}
			HX_STACK_LINE(4132)
			o->elt = null();
			HX_STACK_LINE(4132)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
			HX_STACK_LINE(4132)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4132)
		if (((this->head == null()))){
			HX_STACK_LINE(4132)
			this->pushmod = true;
		}
		HX_STACK_LINE(4132)
		this->modified = true;
		HX_STACK_LINE(4132)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_insert","zpp_nape/util/Lists.hx",4089);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4090)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4098);
			{
				HX_STACK_LINE(4099)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4100)
				{
					HX_STACK_LINE(4101)
					if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4101)
						ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4108)
						ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
						HX_STACK_LINE(4109)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4110)
						ret->next = null();
					}
					HX_STACK_LINE(4115)
					Dynamic();
				}
				HX_STACK_LINE(4117)
				ret->elt = o;
				HX_STACK_LINE(4118)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4098)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4120)
	if (((cur == null()))){
		HX_STACK_LINE(4121)
		temp->next = this->head;
		HX_STACK_LINE(4122)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4125)
		temp->next = cur->next;
		HX_STACK_LINE(4126)
		cur->next = temp;
	}
	HX_STACK_LINE(4128)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(4129)
	(this->length)++;
	HX_STACK_LINE(4130)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_BodyListener cur,::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::insert","zpp_nape/util/Lists.hx",4087);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::util::ZNPList_ZPP_BodyListener_obj *__this,::zpp_nape::callbacks::ZPP_BodyListener &o,::zpp_nape::util::ZNPNode_ZPP_BodyListener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4087);
			{
				HX_STACK_LINE(4087)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4087);
						{
							HX_STACK_LINE(4087)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4087)
							{
								HX_STACK_LINE(4087)
								if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4087)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4087)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
									HX_STACK_LINE(4087)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4087)
									ret->next = null();
								}
								HX_STACK_LINE(4087)
								Dynamic();
							}
							HX_STACK_LINE(4087)
							ret->elt = o;
							HX_STACK_LINE(4087)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4087)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4087)
				if (((cur == null()))){
					HX_STACK_LINE(4087)
					temp->next = __this->head;
					HX_STACK_LINE(4087)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(4087)
					temp->next = cur->next;
					HX_STACK_LINE(4087)
					cur->next = temp;
				}
				HX_STACK_LINE(4087)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(4087)
				(__this->length)++;
				HX_STACK_LINE(4087)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(4087)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_BodyListener_obj,insert,return )

Void ZNPList_ZPP_BodyListener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_BodyListener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::addAll","zpp_nape/util/Lists.hx",4069);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4070)
		{
		}
		HX_STACK_LINE(4078)
		{
			HX_STACK_LINE(4079)
			::zpp_nape::util::ZNPNode_ZPP_BodyListener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4080)
			while(((cx_ite != null()))){
				HX_STACK_LINE(4081)
				::zpp_nape::callbacks::ZPP_BodyListener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4082)
				this->add(i);
				HX_STACK_LINE(4083)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::inlined_add","zpp_nape/util/Lists.hx",4032);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4033)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4041);
			{
				HX_STACK_LINE(4042)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4043)
				{
					HX_STACK_LINE(4044)
					if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
						HX_STACK_LINE(4044)
						ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
					}
					else{
						HX_STACK_LINE(4051)
						ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
						HX_STACK_LINE(4052)
						::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4053)
						ret->next = null();
					}
					HX_STACK_LINE(4058)
					Dynamic();
				}
				HX_STACK_LINE(4060)
				ret->elt = o;
				HX_STACK_LINE(4061)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4041)
	::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4063)
	temp->next = this->head;
	HX_STACK_LINE(4064)
	this->head = temp;
	HX_STACK_LINE(4065)
	this->modified = true;
	HX_STACK_LINE(4066)
	(this->length)++;
	HX_STACK_LINE(4067)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::add( ::zpp_nape::callbacks::ZPP_BodyListener o){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::add","zpp_nape/util/Lists.hx",4030);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &o,::zpp_nape::util::ZNPList_ZPP_BodyListener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4030);
			{
				HX_STACK_LINE(4030)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_BodyListener Block( ::zpp_nape::callbacks::ZPP_BodyListener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4030);
						{
							HX_STACK_LINE(4030)
							::zpp_nape::util::ZNPNode_ZPP_BodyListener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4030)
							{
								HX_STACK_LINE(4030)
								if (((::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool == null()))){
									HX_STACK_LINE(4030)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::__new();
								}
								else{
									HX_STACK_LINE(4030)
									ret = ::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool;
									HX_STACK_LINE(4030)
									::zpp_nape::util::ZNPNode_ZPP_BodyListener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4030)
									ret->next = null();
								}
								HX_STACK_LINE(4030)
								Dynamic();
							}
							HX_STACK_LINE(4030)
							ret->elt = o;
							HX_STACK_LINE(4030)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4030)
				::zpp_nape::util::ZNPNode_ZPP_BodyListener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4030)
				temp->next = __this->head;
				HX_STACK_LINE(4030)
				__this->head = temp;
				HX_STACK_LINE(4030)
				__this->modified = true;
				HX_STACK_LINE(4030)
				(__this->length)++;
				HX_STACK_LINE(4030)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(4030)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,add,return )

Void ZNPList_ZPP_BodyListener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_BodyListener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_BodyListener::setbegin","zpp_nape/util/Lists.hx",4025);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(4026)
		this->head = i;
		HX_STACK_LINE(4027)
		this->modified = true;
		HX_STACK_LINE(4028)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_BodyListener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_BodyListener ZNPList_ZPP_BodyListener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_BodyListener::begin","zpp_nape/util/Lists.hx",4020);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4020)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_BodyListener_obj,begin,return )


ZNPList_ZPP_BodyListener_obj::ZNPList_ZPP_BodyListener_obj()
{
}

void ZNPList_ZPP_BodyListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_BodyListener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_BodyListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_BodyListener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_BodyListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_BodyListener >(); return inValue; }
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

void ZNPList_ZPP_BodyListener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_BodyListener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_BodyListener_obj::__mClass;

void ZNPList_ZPP_BodyListener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_BodyListener"), hx::TCanCast< ZNPList_ZPP_BodyListener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_BodyListener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
