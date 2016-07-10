#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBPair_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_AABBPair::new","zpp_nape/util/Lists.hx",8239);
{
	HX_STACK_LINE(8246)
	this->length = (int)0;
	HX_STACK_LINE(8245)
	this->pushmod = false;
	HX_STACK_LINE(8244)
	this->modified = false;
	HX_STACK_LINE(8240)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_AABBPair_obj::~ZNPList_ZPP_AABBPair_obj() { }

Dynamic ZNPList_ZPP_AABBPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > ZNPList_ZPP_AABBPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBPair_obj > result = new ZNPList_ZPP_AABBPair_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::at","zpp_nape/util/Lists.hx",8609);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8610)
	{
	}
	HX_STACK_LINE(8618)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(8619)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_AABBPair(it->elt) : ::zpp_nape::space::ZPP_AABBPair(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::iterator_at","zpp_nape/util/Lists.hx",8596);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8597)
	{
	}
	HX_STACK_LINE(8605)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8606)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(8606)
		ret = ret->next;
	}
	HX_STACK_LINE(8607)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::back","zpp_nape/util/Lists.hx",8587);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8588)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8589)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8590)
	while(((cur != null()))){
		HX_STACK_LINE(8591)
		ret = cur;
		HX_STACK_LINE(8592)
		cur = cur->next;
	}
	HX_STACK_LINE(8594)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,back,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::front","zpp_nape/util/Lists.hx",8587);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8587)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,front,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_has","zpp_nape/util/Lists.hx",8557);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8558)
	{
	}
	HX_STACK_LINE(8566)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8567)
	{
		HX_STACK_LINE(8568)
		ret = false;
		HX_STACK_LINE(8569)
		{
			HX_STACK_LINE(8570)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8571)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8572)
				::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8573)
				if (((npite == obj))){
					HX_STACK_LINE(8575)
					ret = true;
					HX_STACK_LINE(8576)
					break;
				}
				HX_STACK_LINE(8579)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8583)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_has,return )

bool ZNPList_ZPP_AABBPair_obj::has( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::has","zpp_nape/util/Lists.hx",8555);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::space::ZPP_AABBPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8555);
			{
				HX_STACK_LINE(8555)
				{
				}
				HX_STACK_LINE(8555)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8555)
				{
					HX_STACK_LINE(8555)
					ret = false;
					HX_STACK_LINE(8555)
					{
						HX_STACK_LINE(8555)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(8555)
						while(((cx_ite != null()))){
							HX_STACK_LINE(8555)
							::zpp_nape::space::ZPP_AABBPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(8555)
							if (((npite == obj))){
								HX_STACK_LINE(8555)
								ret = true;
								HX_STACK_LINE(8555)
								break;
							}
							HX_STACK_LINE(8555)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(8555)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8555)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,has,return )

int ZNPList_ZPP_AABBPair_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::size","zpp_nape/util/Lists.hx",8555);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8555)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,size,return )

bool ZNPList_ZPP_AABBPair_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::empty","zpp_nape/util/Lists.hx",8553);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8553)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,empty,return )

Void ZNPList_ZPP_AABBPair_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::reverse","zpp_nape/util/Lists.hx",8538);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8539)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8540)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8541)
		while(((cur != null()))){
			HX_STACK_LINE(8542)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8543)
			cur->next = pre;
			HX_STACK_LINE(8544)
			this->head = cur;
			HX_STACK_LINE(8545)
			pre = cur;
			HX_STACK_LINE(8546)
			cur = nx;
		}
		HX_STACK_LINE(8548)
		this->modified = true;
		HX_STACK_LINE(8549)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,reverse,(void))

Void ZNPList_ZPP_AABBPair_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_clear","zpp_nape/util/Lists.hx",8532);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8534)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8534)
			{
			}
			HX_STACK_LINE(8534)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8534)
			this->head = ret->next;
			HX_STACK_LINE(8534)
			{
			}
			HX_STACK_LINE(8534)
			{
				HX_STACK_LINE(8534)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8534)
				{
				}
				HX_STACK_LINE(8534)
				o->elt = null();
				HX_STACK_LINE(8534)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(8534)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8534)
			if (((this->head == null()))){
				HX_STACK_LINE(8534)
				this->pushmod = true;
			}
			HX_STACK_LINE(8534)
			this->modified = true;
			HX_STACK_LINE(8534)
			(this->length)--;
		}
		HX_STACK_LINE(8535)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBPair_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::clear","zpp_nape/util/Lists.hx",8530);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8530)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8530)
			{
			}
			HX_STACK_LINE(8530)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8530)
			this->head = ret->next;
			HX_STACK_LINE(8530)
			{
			}
			HX_STACK_LINE(8530)
			{
				HX_STACK_LINE(8530)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8530)
				{
				}
				HX_STACK_LINE(8530)
				o->elt = null();
				HX_STACK_LINE(8530)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(8530)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8530)
			if (((this->head == null()))){
				HX_STACK_LINE(8530)
				this->pushmod = true;
			}
			HX_STACK_LINE(8530)
			this->modified = true;
			HX_STACK_LINE(8530)
			(this->length)--;
		}
		HX_STACK_LINE(8530)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::splice","zpp_nape/util/Lists.hx",8526);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(8527)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(8527)
		this->erase(pre);
	}
	HX_STACK_LINE(8528)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_erase","zpp_nape/util/Lists.hx",8480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(8481)
	{
	}
	HX_STACK_LINE(8489)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8490)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8491)
	if (((pre == null()))){
		HX_STACK_LINE(8492)
		old = this->head;
		HX_STACK_LINE(8493)
		ret = old->next;
		HX_STACK_LINE(8494)
		this->head = ret;
		HX_STACK_LINE(8495)
		if (((this->head == null()))){
			HX_STACK_LINE(8495)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8498)
		old = pre->next;
		HX_STACK_LINE(8499)
		ret = old->next;
		HX_STACK_LINE(8500)
		pre->next = ret;
		HX_STACK_LINE(8501)
		if (((ret == null()))){
			HX_STACK_LINE(8501)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8503)
	{
	}
	HX_STACK_LINE(8504)
	{
		HX_STACK_LINE(8505)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8506)
		{
		}
		HX_STACK_LINE(8514)
		o->elt = null();
		HX_STACK_LINE(8515)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
		HX_STACK_LINE(8516)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8521)
	this->modified = true;
	HX_STACK_LINE(8522)
	(this->length)--;
	HX_STACK_LINE(8523)
	this->pushmod = true;
	HX_STACK_LINE(8524)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::erase","zpp_nape/util/Lists.hx",8478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::util::ZNPNode_ZPP_AABBPair &pre,::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8478);
			{
				HX_STACK_LINE(8478)
				{
				}
				HX_STACK_LINE(8478)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8478)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8478)
				if (((pre == null()))){
					HX_STACK_LINE(8478)
					old = __this->head;
					HX_STACK_LINE(8478)
					ret = old->next;
					HX_STACK_LINE(8478)
					__this->head = ret;
					HX_STACK_LINE(8478)
					if (((__this->head == null()))){
						HX_STACK_LINE(8478)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8478)
					old = pre->next;
					HX_STACK_LINE(8478)
					ret = old->next;
					HX_STACK_LINE(8478)
					pre->next = ret;
					HX_STACK_LINE(8478)
					if (((ret == null()))){
						HX_STACK_LINE(8478)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(8478)
				{
				}
				HX_STACK_LINE(8478)
				{
					HX_STACK_LINE(8478)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8478)
					{
					}
					HX_STACK_LINE(8478)
					o->elt = null();
					HX_STACK_LINE(8478)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(8478)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8478)
				__this->modified = true;
				HX_STACK_LINE(8478)
				(__this->length)--;
				HX_STACK_LINE(8478)
				__this->pushmod = true;
				HX_STACK_LINE(8478)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8478)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,erase,return )

bool ZNPList_ZPP_AABBPair_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_try_remove","zpp_nape/util/Lists.hx",8455);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8456)
	{
	}
	HX_STACK_LINE(8464)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8465)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8466)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8467)
	while(((cur != null()))){
		HX_STACK_LINE(8468)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8469)
			{
				HX_STACK_LINE(8469)
				{
				}
				HX_STACK_LINE(8469)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8469)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8469)
				if (((pre == null()))){
					HX_STACK_LINE(8469)
					old = this->head;
					HX_STACK_LINE(8469)
					ret1 = old->next;
					HX_STACK_LINE(8469)
					this->head = ret1;
					HX_STACK_LINE(8469)
					if (((this->head == null()))){
						HX_STACK_LINE(8469)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8469)
					old = pre->next;
					HX_STACK_LINE(8469)
					ret1 = old->next;
					HX_STACK_LINE(8469)
					pre->next = ret1;
					HX_STACK_LINE(8469)
					if (((ret1 == null()))){
						HX_STACK_LINE(8469)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8469)
				{
				}
				HX_STACK_LINE(8469)
				{
					HX_STACK_LINE(8469)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8469)
					{
					}
					HX_STACK_LINE(8469)
					o->elt = null();
					HX_STACK_LINE(8469)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(8469)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8469)
				this->modified = true;
				HX_STACK_LINE(8469)
				(this->length)--;
				HX_STACK_LINE(8469)
				this->pushmod = true;
				HX_STACK_LINE(8469)
				ret1;
			}
			HX_STACK_LINE(8470)
			ret = true;
			HX_STACK_LINE(8471)
			break;
		}
		HX_STACK_LINE(8473)
		pre = cur;
		HX_STACK_LINE(8474)
		cur = cur->next;
	}
	HX_STACK_LINE(8476)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_remove","zpp_nape/util/Lists.hx",8442);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8443)
		{
		}
		HX_STACK_LINE(8451)
		{
			HX_STACK_LINE(8451)
			{
			}
			HX_STACK_LINE(8451)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8451)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8451)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8451)
			while(((cur != null()))){
				HX_STACK_LINE(8451)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8451)
					{
						HX_STACK_LINE(8451)
						{
						}
						HX_STACK_LINE(8451)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8451)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8451)
						if (((pre == null()))){
							HX_STACK_LINE(8451)
							old = this->head;
							HX_STACK_LINE(8451)
							ret1 = old->next;
							HX_STACK_LINE(8451)
							this->head = ret1;
							HX_STACK_LINE(8451)
							if (((this->head == null()))){
								HX_STACK_LINE(8451)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8451)
							old = pre->next;
							HX_STACK_LINE(8451)
							ret1 = old->next;
							HX_STACK_LINE(8451)
							pre->next = ret1;
							HX_STACK_LINE(8451)
							if (((ret1 == null()))){
								HX_STACK_LINE(8451)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8451)
						{
						}
						HX_STACK_LINE(8451)
						{
							HX_STACK_LINE(8451)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8451)
							{
							}
							HX_STACK_LINE(8451)
							o->elt = null();
							HX_STACK_LINE(8451)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
							HX_STACK_LINE(8451)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8451)
						this->modified = true;
						HX_STACK_LINE(8451)
						(this->length)--;
						HX_STACK_LINE(8451)
						this->pushmod = true;
						HX_STACK_LINE(8451)
						ret1;
					}
					HX_STACK_LINE(8451)
					ret = true;
					HX_STACK_LINE(8451)
					break;
				}
				HX_STACK_LINE(8451)
				pre = cur;
				HX_STACK_LINE(8451)
				cur = cur->next;
			}
			HX_STACK_LINE(8451)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBPair_obj::try_remove( ::zpp_nape::space::ZPP_AABBPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::try_remove","zpp_nape/util/Lists.hx",8417);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8418)
	{
	}
	HX_STACK_LINE(8426)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8427)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8428)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8429)
	while(((cur != null()))){
		HX_STACK_LINE(8430)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8431)
			this->erase(pre);
			HX_STACK_LINE(8432)
			ret = true;
			HX_STACK_LINE(8433)
			break;
		}
		HX_STACK_LINE(8435)
		pre = cur;
		HX_STACK_LINE(8436)
		cur = cur->next;
	}
	HX_STACK_LINE(8438)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,try_remove,return )

Void ZNPList_ZPP_AABBPair_obj::remove( ::zpp_nape::space::ZPP_AABBPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::remove","zpp_nape/util/Lists.hx",8406);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8407)
		{
		}
		HX_STACK_LINE(8415)
		{
			HX_STACK_LINE(8415)
			{
			}
			HX_STACK_LINE(8415)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8415)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8415)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8415)
			while(((cur != null()))){
				HX_STACK_LINE(8415)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8415)
					{
						HX_STACK_LINE(8415)
						{
						}
						HX_STACK_LINE(8415)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8415)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8415)
						if (((pre == null()))){
							HX_STACK_LINE(8415)
							old = this->head;
							HX_STACK_LINE(8415)
							ret1 = old->next;
							HX_STACK_LINE(8415)
							this->head = ret1;
							HX_STACK_LINE(8415)
							if (((this->head == null()))){
								HX_STACK_LINE(8415)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8415)
							old = pre->next;
							HX_STACK_LINE(8415)
							ret1 = old->next;
							HX_STACK_LINE(8415)
							pre->next = ret1;
							HX_STACK_LINE(8415)
							if (((ret1 == null()))){
								HX_STACK_LINE(8415)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8415)
						{
						}
						HX_STACK_LINE(8415)
						{
							HX_STACK_LINE(8415)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8415)
							{
							}
							HX_STACK_LINE(8415)
							o->elt = null();
							HX_STACK_LINE(8415)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
							HX_STACK_LINE(8415)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8415)
						this->modified = true;
						HX_STACK_LINE(8415)
						(this->length)--;
						HX_STACK_LINE(8415)
						this->pushmod = true;
						HX_STACK_LINE(8415)
						ret1;
					}
					HX_STACK_LINE(8415)
					ret = true;
					HX_STACK_LINE(8415)
					break;
				}
				HX_STACK_LINE(8415)
				pre = cur;
				HX_STACK_LINE(8415)
				cur = cur->next;
			}
			HX_STACK_LINE(8415)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,remove,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_pop_unsafe","zpp_nape/util/Lists.hx",8393);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8394)
	{
	}
	HX_STACK_LINE(8402)
	::zpp_nape::space::ZPP_AABBPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8403)
	this->pop();
	HX_STACK_LINE(8404)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::pop_unsafe","zpp_nape/util/Lists.hx",8391);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8391);
			{
				HX_STACK_LINE(8391)
				{
				}
				HX_STACK_LINE(8391)
				::zpp_nape::space::ZPP_AABBPair ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8391)
				__this->pop();
				HX_STACK_LINE(8391)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8391)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop_unsafe,return )

Void ZNPList_ZPP_AABBPair_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_pop","zpp_nape/util/Lists.hx",8358);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8359)
		{
		}
		HX_STACK_LINE(8367)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8368)
		this->head = ret->next;
		HX_STACK_LINE(8369)
		{
		}
		HX_STACK_LINE(8370)
		{
			HX_STACK_LINE(8371)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8372)
			{
			}
			HX_STACK_LINE(8380)
			o->elt = null();
			HX_STACK_LINE(8381)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(8382)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8387)
		if (((this->head == null()))){
			HX_STACK_LINE(8387)
			this->pushmod = true;
		}
		HX_STACK_LINE(8388)
		this->modified = true;
		HX_STACK_LINE(8389)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,inlined_pop,(void))

Void ZNPList_ZPP_AABBPair_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::pop","zpp_nape/util/Lists.hx",8356);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8356)
		{
		}
		HX_STACK_LINE(8356)
		::zpp_nape::util::ZNPNode_ZPP_AABBPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8356)
		this->head = ret->next;
		HX_STACK_LINE(8356)
		{
		}
		HX_STACK_LINE(8356)
		{
			HX_STACK_LINE(8356)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8356)
			{
			}
			HX_STACK_LINE(8356)
			o->elt = null();
			HX_STACK_LINE(8356)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
			HX_STACK_LINE(8356)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8356)
		if (((this->head == null()))){
			HX_STACK_LINE(8356)
			this->pushmod = true;
		}
		HX_STACK_LINE(8356)
		this->modified = true;
		HX_STACK_LINE(8356)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_insert","zpp_nape/util/Lists.hx",8313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8314)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8322);
			{
				HX_STACK_LINE(8323)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8324)
				{
					HX_STACK_LINE(8325)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(8325)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
					}
					else{
						HX_STACK_LINE(8332)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(8333)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8334)
						ret->next = null();
					}
					HX_STACK_LINE(8339)
					Dynamic();
				}
				HX_STACK_LINE(8341)
				ret->elt = o;
				HX_STACK_LINE(8342)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8322)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8344)
	if (((cur == null()))){
		HX_STACK_LINE(8345)
		temp->next = this->head;
		HX_STACK_LINE(8346)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8349)
		temp->next = cur->next;
		HX_STACK_LINE(8350)
		cur->next = temp;
	}
	HX_STACK_LINE(8352)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(8353)
	(this->length)++;
	HX_STACK_LINE(8354)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBPair cur,::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::insert","zpp_nape/util/Lists.hx",8311);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this,::zpp_nape::space::ZPP_AABBPair &o,::zpp_nape::util::ZNPNode_ZPP_AABBPair &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8311);
			{
				HX_STACK_LINE(8311)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8311);
						{
							HX_STACK_LINE(8311)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8311)
							{
								HX_STACK_LINE(8311)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(8311)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
								}
								else{
									HX_STACK_LINE(8311)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(8311)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8311)
									ret->next = null();
								}
								HX_STACK_LINE(8311)
								Dynamic();
							}
							HX_STACK_LINE(8311)
							ret->elt = o;
							HX_STACK_LINE(8311)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8311)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8311)
				if (((cur == null()))){
					HX_STACK_LINE(8311)
					temp->next = __this->head;
					HX_STACK_LINE(8311)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(8311)
					temp->next = cur->next;
					HX_STACK_LINE(8311)
					cur->next = temp;
				}
				HX_STACK_LINE(8311)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(8311)
				(__this->length)++;
				HX_STACK_LINE(8311)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(8311)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBPair_obj,insert,return )

Void ZNPList_ZPP_AABBPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBPair x){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::addAll","zpp_nape/util/Lists.hx",8293);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(8294)
		{
		}
		HX_STACK_LINE(8302)
		{
			HX_STACK_LINE(8303)
			::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8304)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8305)
				::zpp_nape::space::ZPP_AABBPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(8306)
				this->add(i);
				HX_STACK_LINE(8307)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,addAll,(void))

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::inlined_add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::inlined_add","zpp_nape/util/Lists.hx",8256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8257)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8265);
			{
				HX_STACK_LINE(8266)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8267)
				{
					HX_STACK_LINE(8268)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(8268)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
					}
					else{
						HX_STACK_LINE(8275)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
						HX_STACK_LINE(8276)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8277)
						ret->next = null();
					}
					HX_STACK_LINE(8282)
					Dynamic();
				}
				HX_STACK_LINE(8284)
				ret->elt = o;
				HX_STACK_LINE(8285)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8265)
	::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8287)
	temp->next = this->head;
	HX_STACK_LINE(8288)
	this->head = temp;
	HX_STACK_LINE(8289)
	this->modified = true;
	HX_STACK_LINE(8290)
	(this->length)++;
	HX_STACK_LINE(8291)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,inlined_add,return )

::zpp_nape::space::ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::add( ::zpp_nape::space::ZPP_AABBPair o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::add","zpp_nape/util/Lists.hx",8254);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o,::zpp_nape::util::ZNPList_ZPP_AABBPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8254);
			{
				HX_STACK_LINE(8254)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8254);
						{
							HX_STACK_LINE(8254)
							::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8254)
							{
								HX_STACK_LINE(8254)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(8254)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
								}
								else{
									HX_STACK_LINE(8254)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(8254)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8254)
									ret->next = null();
								}
								HX_STACK_LINE(8254)
								Dynamic();
							}
							HX_STACK_LINE(8254)
							ret->elt = o;
							HX_STACK_LINE(8254)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8254)
				::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8254)
				temp->next = __this->head;
				HX_STACK_LINE(8254)
				__this->head = temp;
				HX_STACK_LINE(8254)
				__this->modified = true;
				HX_STACK_LINE(8254)
				(__this->length)++;
				HX_STACK_LINE(8254)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(8254)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,add,return )

Void ZNPList_ZPP_AABBPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBPair i){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBPair::setbegin","zpp_nape/util/Lists.hx",8249);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(8250)
		this->head = i;
		HX_STACK_LINE(8251)
		this->modified = true;
		HX_STACK_LINE(8252)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBPair_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBPair ZNPList_ZPP_AABBPair_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBPair::begin","zpp_nape/util/Lists.hx",8244);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8244)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBPair_obj,begin,return )


ZNPList_ZPP_AABBPair_obj::ZNPList_ZPP_AABBPair_obj()
{
}

void ZNPList_ZPP_AABBPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBPair);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_AABBPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBPair >(); return inValue; }
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

void ZNPList_ZPP_AABBPair_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBPair_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_AABBPair_obj::__mClass;

void ZNPList_ZPP_AABBPair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBPair"), hx::TCanCast< ZNPList_ZPP_AABBPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_AABBPair_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
