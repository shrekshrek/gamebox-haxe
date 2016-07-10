#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbSetPair_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::new","zpp_nape/util/Lists.hx",4783);
{
	HX_STACK_LINE(4790)
	this->length = (int)0;
	HX_STACK_LINE(4789)
	this->pushmod = false;
	HX_STACK_LINE(4788)
	this->modified = false;
	HX_STACK_LINE(4784)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CbSetPair_obj::~ZNPList_ZPP_CbSetPair_obj() { }

Dynamic ZNPList_ZPP_CbSetPair_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbSetPair_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > ZNPList_ZPP_CbSetPair_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > result = new ZNPList_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbSetPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbSetPair_obj > result = new ZNPList_ZPP_CbSetPair_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::at","zpp_nape/util/Lists.hx",5153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5154)
	{
	}
	HX_STACK_LINE(5162)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5163)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_CbSetPair(it->elt) : ::zpp_nape::callbacks::ZPP_CbSetPair(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::iterator_at","zpp_nape/util/Lists.hx",5140);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5141)
	{
	}
	HX_STACK_LINE(5149)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5150)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(5150)
		ret = ret->next;
	}
	HX_STACK_LINE(5151)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::back","zpp_nape/util/Lists.hx",5131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5132)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5133)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5134)
	while(((cur != null()))){
		HX_STACK_LINE(5135)
		ret = cur;
		HX_STACK_LINE(5136)
		cur = cur->next;
	}
	HX_STACK_LINE(5138)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,back,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::front","zpp_nape/util/Lists.hx",5131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5131)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,front,return )

bool ZNPList_ZPP_CbSetPair_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_has","zpp_nape/util/Lists.hx",5101);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5102)
	{
	}
	HX_STACK_LINE(5110)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5111)
	{
		HX_STACK_LINE(5112)
		ret = false;
		HX_STACK_LINE(5113)
		{
			HX_STACK_LINE(5114)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5115)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5116)
				::zpp_nape::callbacks::ZPP_CbSetPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5117)
				if (((npite == obj))){
					HX_STACK_LINE(5119)
					ret = true;
					HX_STACK_LINE(5120)
					break;
				}
				HX_STACK_LINE(5123)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5127)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_has,return )

bool ZNPList_ZPP_CbSetPair_obj::has( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::has","zpp_nape/util/Lists.hx",5099);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_CbSetPair &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5099);
			{
				HX_STACK_LINE(5099)
				{
				}
				HX_STACK_LINE(5099)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5099)
				{
					HX_STACK_LINE(5099)
					ret = false;
					HX_STACK_LINE(5099)
					{
						HX_STACK_LINE(5099)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(5099)
						while(((cx_ite != null()))){
							HX_STACK_LINE(5099)
							::zpp_nape::callbacks::ZPP_CbSetPair npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(5099)
							if (((npite == obj))){
								HX_STACK_LINE(5099)
								ret = true;
								HX_STACK_LINE(5099)
								break;
							}
							HX_STACK_LINE(5099)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(5099)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5099)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,has,return )

int ZNPList_ZPP_CbSetPair_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::size","zpp_nape/util/Lists.hx",5099);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5099)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,size,return )

bool ZNPList_ZPP_CbSetPair_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::empty","zpp_nape/util/Lists.hx",5097);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5097)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,empty,return )

Void ZNPList_ZPP_CbSetPair_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::reverse","zpp_nape/util/Lists.hx",5082);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5083)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5084)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5085)
		while(((cur != null()))){
			HX_STACK_LINE(5086)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5087)
			cur->next = pre;
			HX_STACK_LINE(5088)
			this->head = cur;
			HX_STACK_LINE(5089)
			pre = cur;
			HX_STACK_LINE(5090)
			cur = nx;
		}
		HX_STACK_LINE(5092)
		this->modified = true;
		HX_STACK_LINE(5093)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,reverse,(void))

Void ZNPList_ZPP_CbSetPair_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_clear","zpp_nape/util/Lists.hx",5076);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5078)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5078)
			{
			}
			HX_STACK_LINE(5078)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5078)
			this->head = ret->next;
			HX_STACK_LINE(5078)
			{
			}
			HX_STACK_LINE(5078)
			{
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5078)
				{
				}
				HX_STACK_LINE(5078)
				o->elt = null();
				HX_STACK_LINE(5078)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(5078)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5078)
			if (((this->head == null()))){
				HX_STACK_LINE(5078)
				this->pushmod = true;
			}
			HX_STACK_LINE(5078)
			this->modified = true;
			HX_STACK_LINE(5078)
			(this->length)--;
		}
		HX_STACK_LINE(5079)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbSetPair_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::clear","zpp_nape/util/Lists.hx",5074);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5074)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5074)
			{
			}
			HX_STACK_LINE(5074)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5074)
			this->head = ret->next;
			HX_STACK_LINE(5074)
			{
			}
			HX_STACK_LINE(5074)
			{
				HX_STACK_LINE(5074)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5074)
				{
				}
				HX_STACK_LINE(5074)
				o->elt = null();
				HX_STACK_LINE(5074)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
				HX_STACK_LINE(5074)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5074)
			if (((this->head == null()))){
				HX_STACK_LINE(5074)
				this->pushmod = true;
			}
			HX_STACK_LINE(5074)
			this->modified = true;
			HX_STACK_LINE(5074)
			(this->length)--;
		}
		HX_STACK_LINE(5074)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::splice","zpp_nape/util/Lists.hx",5070);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(5071)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(5071)
		this->erase(pre);
	}
	HX_STACK_LINE(5072)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_erase","zpp_nape/util/Lists.hx",5024);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(5025)
	{
	}
	HX_STACK_LINE(5033)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5034)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5035)
	if (((pre == null()))){
		HX_STACK_LINE(5036)
		old = this->head;
		HX_STACK_LINE(5037)
		ret = old->next;
		HX_STACK_LINE(5038)
		this->head = ret;
		HX_STACK_LINE(5039)
		if (((this->head == null()))){
			HX_STACK_LINE(5039)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5042)
		old = pre->next;
		HX_STACK_LINE(5043)
		ret = old->next;
		HX_STACK_LINE(5044)
		pre->next = ret;
		HX_STACK_LINE(5045)
		if (((ret == null()))){
			HX_STACK_LINE(5045)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5047)
	{
	}
	HX_STACK_LINE(5048)
	{
		HX_STACK_LINE(5049)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5050)
		{
		}
		HX_STACK_LINE(5058)
		o->elt = null();
		HX_STACK_LINE(5059)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
		HX_STACK_LINE(5060)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5065)
	this->modified = true;
	HX_STACK_LINE(5066)
	(this->length)--;
	HX_STACK_LINE(5067)
	this->pushmod = true;
	HX_STACK_LINE(5068)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::erase","zpp_nape/util/Lists.hx",5022);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair &pre,::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5022);
			{
				HX_STACK_LINE(5022)
				{
				}
				HX_STACK_LINE(5022)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5022)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5022)
				if (((pre == null()))){
					HX_STACK_LINE(5022)
					old = __this->head;
					HX_STACK_LINE(5022)
					ret = old->next;
					HX_STACK_LINE(5022)
					__this->head = ret;
					HX_STACK_LINE(5022)
					if (((__this->head == null()))){
						HX_STACK_LINE(5022)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5022)
					old = pre->next;
					HX_STACK_LINE(5022)
					ret = old->next;
					HX_STACK_LINE(5022)
					pre->next = ret;
					HX_STACK_LINE(5022)
					if (((ret == null()))){
						HX_STACK_LINE(5022)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(5022)
				{
				}
				HX_STACK_LINE(5022)
				{
					HX_STACK_LINE(5022)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5022)
					{
					}
					HX_STACK_LINE(5022)
					o->elt = null();
					HX_STACK_LINE(5022)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(5022)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5022)
				__this->modified = true;
				HX_STACK_LINE(5022)
				(__this->length)--;
				HX_STACK_LINE(5022)
				__this->pushmod = true;
				HX_STACK_LINE(5022)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5022)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,erase,return )

bool ZNPList_ZPP_CbSetPair_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_try_remove","zpp_nape/util/Lists.hx",4999);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5000)
	{
	}
	HX_STACK_LINE(5008)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5009)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5010)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5011)
	while(((cur != null()))){
		HX_STACK_LINE(5012)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5013)
			{
				HX_STACK_LINE(5013)
				{
				}
				HX_STACK_LINE(5013)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5013)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5013)
				if (((pre == null()))){
					HX_STACK_LINE(5013)
					old = this->head;
					HX_STACK_LINE(5013)
					ret1 = old->next;
					HX_STACK_LINE(5013)
					this->head = ret1;
					HX_STACK_LINE(5013)
					if (((this->head == null()))){
						HX_STACK_LINE(5013)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5013)
					old = pre->next;
					HX_STACK_LINE(5013)
					ret1 = old->next;
					HX_STACK_LINE(5013)
					pre->next = ret1;
					HX_STACK_LINE(5013)
					if (((ret1 == null()))){
						HX_STACK_LINE(5013)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5013)
				{
				}
				HX_STACK_LINE(5013)
				{
					HX_STACK_LINE(5013)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5013)
					{
					}
					HX_STACK_LINE(5013)
					o->elt = null();
					HX_STACK_LINE(5013)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(5013)
					::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5013)
				this->modified = true;
				HX_STACK_LINE(5013)
				(this->length)--;
				HX_STACK_LINE(5013)
				this->pushmod = true;
				HX_STACK_LINE(5013)
				ret1;
			}
			HX_STACK_LINE(5014)
			ret = true;
			HX_STACK_LINE(5015)
			break;
		}
		HX_STACK_LINE(5017)
		pre = cur;
		HX_STACK_LINE(5018)
		cur = cur->next;
	}
	HX_STACK_LINE(5020)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CbSetPair_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_remove","zpp_nape/util/Lists.hx",4986);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4987)
		{
		}
		HX_STACK_LINE(4995)
		{
			HX_STACK_LINE(4995)
			{
			}
			HX_STACK_LINE(4995)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4995)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4995)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4995)
			while(((cur != null()))){
				HX_STACK_LINE(4995)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4995)
					{
						HX_STACK_LINE(4995)
						{
						}
						HX_STACK_LINE(4995)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4995)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4995)
						if (((pre == null()))){
							HX_STACK_LINE(4995)
							old = this->head;
							HX_STACK_LINE(4995)
							ret1 = old->next;
							HX_STACK_LINE(4995)
							this->head = ret1;
							HX_STACK_LINE(4995)
							if (((this->head == null()))){
								HX_STACK_LINE(4995)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4995)
							old = pre->next;
							HX_STACK_LINE(4995)
							ret1 = old->next;
							HX_STACK_LINE(4995)
							pre->next = ret1;
							HX_STACK_LINE(4995)
							if (((ret1 == null()))){
								HX_STACK_LINE(4995)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4995)
						{
						}
						HX_STACK_LINE(4995)
						{
							HX_STACK_LINE(4995)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4995)
							{
							}
							HX_STACK_LINE(4995)
							o->elt = null();
							HX_STACK_LINE(4995)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(4995)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4995)
						this->modified = true;
						HX_STACK_LINE(4995)
						(this->length)--;
						HX_STACK_LINE(4995)
						this->pushmod = true;
						HX_STACK_LINE(4995)
						ret1;
					}
					HX_STACK_LINE(4995)
					ret = true;
					HX_STACK_LINE(4995)
					break;
				}
				HX_STACK_LINE(4995)
				pre = cur;
				HX_STACK_LINE(4995)
				cur = cur->next;
			}
			HX_STACK_LINE(4995)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbSetPair_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::try_remove","zpp_nape/util/Lists.hx",4961);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(4962)
	{
	}
	HX_STACK_LINE(4970)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(4971)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(4972)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4973)
	while(((cur != null()))){
		HX_STACK_LINE(4974)
		if (((cur->elt == obj))){
			HX_STACK_LINE(4975)
			this->erase(pre);
			HX_STACK_LINE(4976)
			ret = true;
			HX_STACK_LINE(4977)
			break;
		}
		HX_STACK_LINE(4979)
		pre = cur;
		HX_STACK_LINE(4980)
		cur = cur->next;
	}
	HX_STACK_LINE(4982)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,try_remove,return )

Void ZNPList_ZPP_CbSetPair_obj::remove( ::zpp_nape::callbacks::ZPP_CbSetPair obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::remove","zpp_nape/util/Lists.hx",4950);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(4951)
		{
		}
		HX_STACK_LINE(4959)
		{
			HX_STACK_LINE(4959)
			{
			}
			HX_STACK_LINE(4959)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(4959)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(4959)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(4959)
			while(((cur != null()))){
				HX_STACK_LINE(4959)
				if (((cur->elt == obj))){
					HX_STACK_LINE(4959)
					{
						HX_STACK_LINE(4959)
						{
						}
						HX_STACK_LINE(4959)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(4959)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(4959)
						if (((pre == null()))){
							HX_STACK_LINE(4959)
							old = this->head;
							HX_STACK_LINE(4959)
							ret1 = old->next;
							HX_STACK_LINE(4959)
							this->head = ret1;
							HX_STACK_LINE(4959)
							if (((this->head == null()))){
								HX_STACK_LINE(4959)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(4959)
							old = pre->next;
							HX_STACK_LINE(4959)
							ret1 = old->next;
							HX_STACK_LINE(4959)
							pre->next = ret1;
							HX_STACK_LINE(4959)
							if (((ret1 == null()))){
								HX_STACK_LINE(4959)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(4959)
						{
						}
						HX_STACK_LINE(4959)
						{
							HX_STACK_LINE(4959)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(4959)
							{
							}
							HX_STACK_LINE(4959)
							o->elt = null();
							HX_STACK_LINE(4959)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(4959)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(4959)
						this->modified = true;
						HX_STACK_LINE(4959)
						(this->length)--;
						HX_STACK_LINE(4959)
						this->pushmod = true;
						HX_STACK_LINE(4959)
						ret1;
					}
					HX_STACK_LINE(4959)
					ret = true;
					HX_STACK_LINE(4959)
					break;
				}
				HX_STACK_LINE(4959)
				pre = cur;
				HX_STACK_LINE(4959)
				cur = cur->next;
			}
			HX_STACK_LINE(4959)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_pop_unsafe","zpp_nape/util/Lists.hx",4937);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4938)
	{
	}
	HX_STACK_LINE(4946)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(4947)
	this->pop();
	HX_STACK_LINE(4948)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::pop_unsafe","zpp_nape/util/Lists.hx",4935);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4935);
			{
				HX_STACK_LINE(4935)
				{
				}
				HX_STACK_LINE(4935)
				::zpp_nape::callbacks::ZPP_CbSetPair ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4935)
				__this->pop();
				HX_STACK_LINE(4935)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4935)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,pop_unsafe,return )

Void ZNPList_ZPP_CbSetPair_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_pop","zpp_nape/util/Lists.hx",4902);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4903)
		{
		}
		HX_STACK_LINE(4911)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4912)
		this->head = ret->next;
		HX_STACK_LINE(4913)
		{
		}
		HX_STACK_LINE(4914)
		{
			HX_STACK_LINE(4915)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4916)
			{
			}
			HX_STACK_LINE(4924)
			o->elt = null();
			HX_STACK_LINE(4925)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(4926)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4931)
		if (((this->head == null()))){
			HX_STACK_LINE(4931)
			this->pushmod = true;
		}
		HX_STACK_LINE(4932)
		this->modified = true;
		HX_STACK_LINE(4933)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,inlined_pop,(void))

Void ZNPList_ZPP_CbSetPair_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::pop","zpp_nape/util/Lists.hx",4900);
		HX_STACK_THIS(this);
		HX_STACK_LINE(4900)
		{
		}
		HX_STACK_LINE(4900)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(4900)
		this->head = ret->next;
		HX_STACK_LINE(4900)
		{
		}
		HX_STACK_LINE(4900)
		{
			HX_STACK_LINE(4900)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(4900)
			{
			}
			HX_STACK_LINE(4900)
			o->elt = null();
			HX_STACK_LINE(4900)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
			HX_STACK_LINE(4900)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = o;
		}
		HX_STACK_LINE(4900)
		if (((this->head == null()))){
			HX_STACK_LINE(4900)
			this->pushmod = true;
		}
		HX_STACK_LINE(4900)
		this->modified = true;
		HX_STACK_LINE(4900)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur,::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_insert","zpp_nape/util/Lists.hx",4857);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4858)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSetPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4866);
			{
				HX_STACK_LINE(4867)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4868)
				{
					HX_STACK_LINE(4869)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(4869)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();
					}
					else{
						HX_STACK_LINE(4876)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(4877)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4878)
						ret->next = null();
					}
					HX_STACK_LINE(4883)
					Dynamic();
				}
				HX_STACK_LINE(4885)
				ret->elt = o;
				HX_STACK_LINE(4886)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4866)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4888)
	if (((cur == null()))){
		HX_STACK_LINE(4889)
		temp->next = this->head;
		HX_STACK_LINE(4890)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(4893)
		temp->next = cur->next;
		HX_STACK_LINE(4894)
		cur->next = temp;
	}
	HX_STACK_LINE(4896)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(4897)
	(this->length)++;
	HX_STACK_LINE(4898)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair cur,::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::insert","zpp_nape/util/Lists.hx",4855);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj *__this,::zpp_nape::callbacks::ZPP_CbSetPair &o,::zpp_nape::util::ZNPNode_ZPP_CbSetPair &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4855);
			{
				HX_STACK_LINE(4855)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSetPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4855);
						{
							HX_STACK_LINE(4855)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4855)
							{
								HX_STACK_LINE(4855)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(4855)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();
								}
								else{
									HX_STACK_LINE(4855)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
									HX_STACK_LINE(4855)
									::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4855)
									ret->next = null();
								}
								HX_STACK_LINE(4855)
								Dynamic();
							}
							HX_STACK_LINE(4855)
							ret->elt = o;
							HX_STACK_LINE(4855)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4855)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4855)
				if (((cur == null()))){
					HX_STACK_LINE(4855)
					temp->next = __this->head;
					HX_STACK_LINE(4855)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(4855)
					temp->next = cur->next;
					HX_STACK_LINE(4855)
					cur->next = temp;
				}
				HX_STACK_LINE(4855)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(4855)
				(__this->length)++;
				HX_STACK_LINE(4855)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(4855)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSetPair_obj,insert,return )

Void ZNPList_ZPP_CbSetPair_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbSetPair x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::addAll","zpp_nape/util/Lists.hx",4837);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(4838)
		{
		}
		HX_STACK_LINE(4846)
		{
			HX_STACK_LINE(4847)
			::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(4848)
			while(((cx_ite != null()))){
				HX_STACK_LINE(4849)
				::zpp_nape::callbacks::ZPP_CbSetPair i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(4850)
				this->add(i);
				HX_STACK_LINE(4851)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::inlined_add","zpp_nape/util/Lists.hx",4800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(4801)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSetPair &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4809);
			{
				HX_STACK_LINE(4810)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(4811)
				{
					HX_STACK_LINE(4812)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
						HX_STACK_LINE(4812)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();
					}
					else{
						HX_STACK_LINE(4819)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
						HX_STACK_LINE(4820)
						::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
						HX_STACK_LINE(4821)
						ret->next = null();
					}
					HX_STACK_LINE(4826)
					Dynamic();
				}
				HX_STACK_LINE(4828)
				ret->elt = o;
				HX_STACK_LINE(4829)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(4809)
	::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(4831)
	temp->next = this->head;
	HX_STACK_LINE(4832)
	this->head = temp;
	HX_STACK_LINE(4833)
	this->modified = true;
	HX_STACK_LINE(4834)
	(this->length)++;
	HX_STACK_LINE(4835)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::add( ::zpp_nape::callbacks::ZPP_CbSetPair o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::add","zpp_nape/util/Lists.hx",4798);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSetPair &o,::zpp_nape::util::ZNPList_ZPP_CbSetPair_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4798);
			{
				HX_STACK_LINE(4798)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSetPair &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",4798);
						{
							HX_STACK_LINE(4798)
							::zpp_nape::util::ZNPNode_ZPP_CbSetPair ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(4798)
							{
								HX_STACK_LINE(4798)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool == null()))){
									HX_STACK_LINE(4798)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::__new();
								}
								else{
									HX_STACK_LINE(4798)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool;
									HX_STACK_LINE(4798)
									::zpp_nape::util::ZNPNode_ZPP_CbSetPair_obj::zpp_pool = ret->next;
									HX_STACK_LINE(4798)
									ret->next = null();
								}
								HX_STACK_LINE(4798)
								Dynamic();
							}
							HX_STACK_LINE(4798)
							ret->elt = o;
							HX_STACK_LINE(4798)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(4798)
				::zpp_nape::util::ZNPNode_ZPP_CbSetPair temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(4798)
				temp->next = __this->head;
				HX_STACK_LINE(4798)
				__this->head = temp;
				HX_STACK_LINE(4798)
				__this->modified = true;
				HX_STACK_LINE(4798)
				(__this->length)++;
				HX_STACK_LINE(4798)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(4798)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,add,return )

Void ZNPList_ZPP_CbSetPair_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbSetPair i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::setbegin","zpp_nape/util/Lists.hx",4793);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(4794)
		this->head = i;
		HX_STACK_LINE(4795)
		this->modified = true;
		HX_STACK_LINE(4796)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSetPair_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSetPair ZNPList_ZPP_CbSetPair_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSetPair::begin","zpp_nape/util/Lists.hx",4788);
	HX_STACK_THIS(this);
	HX_STACK_LINE(4788)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSetPair_obj,begin,return )


ZNPList_ZPP_CbSetPair_obj::ZNPList_ZPP_CbSetPair_obj()
{
}

void ZNPList_ZPP_CbSetPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbSetPair);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbSetPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CbSetPair_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbSetPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbSetPair >(); return inValue; }
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

void ZNPList_ZPP_CbSetPair_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbSetPair_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbSetPair_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CbSetPair_obj::__mClass;

void ZNPList_ZPP_CbSetPair_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbSetPair"), hx::TCanCast< ZNPList_ZPP_CbSetPair_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CbSetPair_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
