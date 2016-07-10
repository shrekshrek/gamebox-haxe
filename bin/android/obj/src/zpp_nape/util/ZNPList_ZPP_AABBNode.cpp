#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_AABBNode_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_AABBNode::new","zpp_nape/util/Lists.hx",10927);
{
	HX_STACK_LINE(10934)
	this->length = (int)0;
	HX_STACK_LINE(10933)
	this->pushmod = false;
	HX_STACK_LINE(10932)
	this->modified = false;
	HX_STACK_LINE(10928)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_AABBNode_obj::~ZNPList_ZPP_AABBNode_obj() { }

Dynamic ZNPList_ZPP_AABBNode_obj::__CreateEmpty() { return  new ZNPList_ZPP_AABBNode_obj; }
hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > ZNPList_ZPP_AABBNode_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_AABBNode_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_AABBNode_obj > result = new ZNPList_ZPP_AABBNode_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::at","zpp_nape/util/Lists.hx",11297);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11298)
	{
	}
	HX_STACK_LINE(11306)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(11307)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_AABBNode(it->elt) : ::zpp_nape::space::ZPP_AABBNode(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::iterator_at","zpp_nape/util/Lists.hx",11284);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(11285)
	{
	}
	HX_STACK_LINE(11293)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11294)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(11294)
		ret = ret->next;
	}
	HX_STACK_LINE(11295)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,iterator_at,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::back","zpp_nape/util/Lists.hx",11275);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11276)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11277)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11278)
	while(((cur != null()))){
		HX_STACK_LINE(11279)
		ret = cur;
		HX_STACK_LINE(11280)
		cur = cur->next;
	}
	HX_STACK_LINE(11282)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,back,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::front","zpp_nape/util/Lists.hx",11275);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11275)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,front,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_has","zpp_nape/util/Lists.hx",11245);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11246)
	{
	}
	HX_STACK_LINE(11254)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11255)
	{
		HX_STACK_LINE(11256)
		ret = false;
		HX_STACK_LINE(11257)
		{
			HX_STACK_LINE(11258)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11259)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11260)
				::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(11261)
				if (((npite == obj))){
					HX_STACK_LINE(11263)
					ret = true;
					HX_STACK_LINE(11264)
					break;
				}
				HX_STACK_LINE(11267)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(11271)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_has,return )

bool ZNPList_ZPP_AABBNode_obj::has( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::has","zpp_nape/util/Lists.hx",11243);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj *__this,::zpp_nape::space::ZPP_AABBNode &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11243);
			{
				HX_STACK_LINE(11243)
				{
				}
				HX_STACK_LINE(11243)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11243)
				{
					HX_STACK_LINE(11243)
					ret = false;
					HX_STACK_LINE(11243)
					{
						HX_STACK_LINE(11243)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(11243)
						while(((cx_ite != null()))){
							HX_STACK_LINE(11243)
							::zpp_nape::space::ZPP_AABBNode npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(11243)
							if (((npite == obj))){
								HX_STACK_LINE(11243)
								ret = true;
								HX_STACK_LINE(11243)
								break;
							}
							HX_STACK_LINE(11243)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(11243)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11243)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,has,return )

int ZNPList_ZPP_AABBNode_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::size","zpp_nape/util/Lists.hx",11243);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11243)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,size,return )

bool ZNPList_ZPP_AABBNode_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::empty","zpp_nape/util/Lists.hx",11241);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11241)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,empty,return )

Void ZNPList_ZPP_AABBNode_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::reverse","zpp_nape/util/Lists.hx",11226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11227)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11228)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11229)
		while(((cur != null()))){
			HX_STACK_LINE(11230)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11231)
			cur->next = pre;
			HX_STACK_LINE(11232)
			this->head = cur;
			HX_STACK_LINE(11233)
			pre = cur;
			HX_STACK_LINE(11234)
			cur = nx;
		}
		HX_STACK_LINE(11236)
		this->modified = true;
		HX_STACK_LINE(11237)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,reverse,(void))

Void ZNPList_ZPP_AABBNode_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_clear","zpp_nape/util/Lists.hx",11220);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11222)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11222)
			{
			}
			HX_STACK_LINE(11222)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11222)
			this->head = ret->next;
			HX_STACK_LINE(11222)
			{
			}
			HX_STACK_LINE(11222)
			{
				HX_STACK_LINE(11222)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11222)
				{
				}
				HX_STACK_LINE(11222)
				o->elt = null();
				HX_STACK_LINE(11222)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(11222)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11222)
			if (((this->head == null()))){
				HX_STACK_LINE(11222)
				this->pushmod = true;
			}
			HX_STACK_LINE(11222)
			this->modified = true;
			HX_STACK_LINE(11222)
			(this->length)--;
		}
		HX_STACK_LINE(11223)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_clear,(void))

Void ZNPList_ZPP_AABBNode_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::clear","zpp_nape/util/Lists.hx",11218);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11218)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11218)
			{
			}
			HX_STACK_LINE(11218)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11218)
			this->head = ret->next;
			HX_STACK_LINE(11218)
			{
			}
			HX_STACK_LINE(11218)
			{
				HX_STACK_LINE(11218)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11218)
				{
				}
				HX_STACK_LINE(11218)
				o->elt = null();
				HX_STACK_LINE(11218)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(11218)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11218)
			if (((this->head == null()))){
				HX_STACK_LINE(11218)
				this->pushmod = true;
			}
			HX_STACK_LINE(11218)
			this->modified = true;
			HX_STACK_LINE(11218)
			(this->length)--;
		}
		HX_STACK_LINE(11218)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::splice","zpp_nape/util/Lists.hx",11214);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(11215)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11215)
		this->erase(pre);
	}
	HX_STACK_LINE(11216)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_erase","zpp_nape/util/Lists.hx",11168);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(11169)
	{
	}
	HX_STACK_LINE(11177)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11178)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11179)
	if (((pre == null()))){
		HX_STACK_LINE(11180)
		old = this->head;
		HX_STACK_LINE(11181)
		ret = old->next;
		HX_STACK_LINE(11182)
		this->head = ret;
		HX_STACK_LINE(11183)
		if (((this->head == null()))){
			HX_STACK_LINE(11183)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11186)
		old = pre->next;
		HX_STACK_LINE(11187)
		ret = old->next;
		HX_STACK_LINE(11188)
		pre->next = ret;
		HX_STACK_LINE(11189)
		if (((ret == null()))){
			HX_STACK_LINE(11189)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11191)
	{
	}
	HX_STACK_LINE(11192)
	{
		HX_STACK_LINE(11193)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11194)
		{
		}
		HX_STACK_LINE(11202)
		o->elt = null();
		HX_STACK_LINE(11203)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
		HX_STACK_LINE(11204)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11209)
	this->modified = true;
	HX_STACK_LINE(11210)
	(this->length)--;
	HX_STACK_LINE(11211)
	this->pushmod = true;
	HX_STACK_LINE(11212)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_AABBNode pre){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::erase","zpp_nape/util/Lists.hx",11166);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::util::ZNPNode_ZPP_AABBNode &pre,::zpp_nape::util::ZNPList_ZPP_AABBNode_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11166);
			{
				HX_STACK_LINE(11166)
				{
				}
				HX_STACK_LINE(11166)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11166)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11166)
				if (((pre == null()))){
					HX_STACK_LINE(11166)
					old = __this->head;
					HX_STACK_LINE(11166)
					ret = old->next;
					HX_STACK_LINE(11166)
					__this->head = ret;
					HX_STACK_LINE(11166)
					if (((__this->head == null()))){
						HX_STACK_LINE(11166)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11166)
					old = pre->next;
					HX_STACK_LINE(11166)
					ret = old->next;
					HX_STACK_LINE(11166)
					pre->next = ret;
					HX_STACK_LINE(11166)
					if (((ret == null()))){
						HX_STACK_LINE(11166)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(11166)
				{
				}
				HX_STACK_LINE(11166)
				{
					HX_STACK_LINE(11166)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11166)
					{
					}
					HX_STACK_LINE(11166)
					o->elt = null();
					HX_STACK_LINE(11166)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(11166)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11166)
				__this->modified = true;
				HX_STACK_LINE(11166)
				(__this->length)--;
				HX_STACK_LINE(11166)
				__this->pushmod = true;
				HX_STACK_LINE(11166)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11166)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,erase,return )

bool ZNPList_ZPP_AABBNode_obj::inlined_try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_try_remove","zpp_nape/util/Lists.hx",11143);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11144)
	{
	}
	HX_STACK_LINE(11152)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11153)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11154)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11155)
	while(((cur != null()))){
		HX_STACK_LINE(11156)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11157)
			{
				HX_STACK_LINE(11157)
				{
				}
				HX_STACK_LINE(11157)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11157)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11157)
				if (((pre == null()))){
					HX_STACK_LINE(11157)
					old = this->head;
					HX_STACK_LINE(11157)
					ret1 = old->next;
					HX_STACK_LINE(11157)
					this->head = ret1;
					HX_STACK_LINE(11157)
					if (((this->head == null()))){
						HX_STACK_LINE(11157)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11157)
					old = pre->next;
					HX_STACK_LINE(11157)
					ret1 = old->next;
					HX_STACK_LINE(11157)
					pre->next = ret1;
					HX_STACK_LINE(11157)
					if (((ret1 == null()))){
						HX_STACK_LINE(11157)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11157)
				{
				}
				HX_STACK_LINE(11157)
				{
					HX_STACK_LINE(11157)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11157)
					{
					}
					HX_STACK_LINE(11157)
					o->elt = null();
					HX_STACK_LINE(11157)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(11157)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11157)
				this->modified = true;
				HX_STACK_LINE(11157)
				(this->length)--;
				HX_STACK_LINE(11157)
				this->pushmod = true;
				HX_STACK_LINE(11157)
				ret1;
			}
			HX_STACK_LINE(11158)
			ret = true;
			HX_STACK_LINE(11159)
			break;
		}
		HX_STACK_LINE(11161)
		pre = cur;
		HX_STACK_LINE(11162)
		cur = cur->next;
	}
	HX_STACK_LINE(11164)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_remove","zpp_nape/util/Lists.hx",11130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11131)
		{
		}
		HX_STACK_LINE(11139)
		{
			HX_STACK_LINE(11139)
			{
			}
			HX_STACK_LINE(11139)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11139)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11139)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11139)
			while(((cur != null()))){
				HX_STACK_LINE(11139)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11139)
					{
						HX_STACK_LINE(11139)
						{
						}
						HX_STACK_LINE(11139)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11139)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11139)
						if (((pre == null()))){
							HX_STACK_LINE(11139)
							old = this->head;
							HX_STACK_LINE(11139)
							ret1 = old->next;
							HX_STACK_LINE(11139)
							this->head = ret1;
							HX_STACK_LINE(11139)
							if (((this->head == null()))){
								HX_STACK_LINE(11139)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11139)
							old = pre->next;
							HX_STACK_LINE(11139)
							ret1 = old->next;
							HX_STACK_LINE(11139)
							pre->next = ret1;
							HX_STACK_LINE(11139)
							if (((ret1 == null()))){
								HX_STACK_LINE(11139)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11139)
						{
						}
						HX_STACK_LINE(11139)
						{
							HX_STACK_LINE(11139)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11139)
							{
							}
							HX_STACK_LINE(11139)
							o->elt = null();
							HX_STACK_LINE(11139)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
							HX_STACK_LINE(11139)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11139)
						this->modified = true;
						HX_STACK_LINE(11139)
						(this->length)--;
						HX_STACK_LINE(11139)
						this->pushmod = true;
						HX_STACK_LINE(11139)
						ret1;
					}
					HX_STACK_LINE(11139)
					ret = true;
					HX_STACK_LINE(11139)
					break;
				}
				HX_STACK_LINE(11139)
				pre = cur;
				HX_STACK_LINE(11139)
				cur = cur->next;
			}
			HX_STACK_LINE(11139)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_remove,(void))

bool ZNPList_ZPP_AABBNode_obj::try_remove( ::zpp_nape::space::ZPP_AABBNode obj){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::try_remove","zpp_nape/util/Lists.hx",11105);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11106)
	{
	}
	HX_STACK_LINE(11114)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11115)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11116)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11117)
	while(((cur != null()))){
		HX_STACK_LINE(11118)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11119)
			this->erase(pre);
			HX_STACK_LINE(11120)
			ret = true;
			HX_STACK_LINE(11121)
			break;
		}
		HX_STACK_LINE(11123)
		pre = cur;
		HX_STACK_LINE(11124)
		cur = cur->next;
	}
	HX_STACK_LINE(11126)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,try_remove,return )

Void ZNPList_ZPP_AABBNode_obj::remove( ::zpp_nape::space::ZPP_AABBNode obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::remove","zpp_nape/util/Lists.hx",11094);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11095)
		{
		}
		HX_STACK_LINE(11103)
		{
			HX_STACK_LINE(11103)
			{
			}
			HX_STACK_LINE(11103)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11103)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11103)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11103)
			while(((cur != null()))){
				HX_STACK_LINE(11103)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11103)
					{
						HX_STACK_LINE(11103)
						{
						}
						HX_STACK_LINE(11103)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11103)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11103)
						if (((pre == null()))){
							HX_STACK_LINE(11103)
							old = this->head;
							HX_STACK_LINE(11103)
							ret1 = old->next;
							HX_STACK_LINE(11103)
							this->head = ret1;
							HX_STACK_LINE(11103)
							if (((this->head == null()))){
								HX_STACK_LINE(11103)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11103)
							old = pre->next;
							HX_STACK_LINE(11103)
							ret1 = old->next;
							HX_STACK_LINE(11103)
							pre->next = ret1;
							HX_STACK_LINE(11103)
							if (((ret1 == null()))){
								HX_STACK_LINE(11103)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11103)
						{
						}
						HX_STACK_LINE(11103)
						{
							HX_STACK_LINE(11103)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11103)
							{
							}
							HX_STACK_LINE(11103)
							o->elt = null();
							HX_STACK_LINE(11103)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
							HX_STACK_LINE(11103)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11103)
						this->modified = true;
						HX_STACK_LINE(11103)
						(this->length)--;
						HX_STACK_LINE(11103)
						this->pushmod = true;
						HX_STACK_LINE(11103)
						ret1;
					}
					HX_STACK_LINE(11103)
					ret = true;
					HX_STACK_LINE(11103)
					break;
				}
				HX_STACK_LINE(11103)
				pre = cur;
				HX_STACK_LINE(11103)
				cur = cur->next;
			}
			HX_STACK_LINE(11103)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,remove,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_pop_unsafe","zpp_nape/util/Lists.hx",11081);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11082)
	{
	}
	HX_STACK_LINE(11090)
	::zpp_nape::space::ZPP_AABBNode ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11091)
	this->pop();
	HX_STACK_LINE(11092)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::pop_unsafe","zpp_nape/util/Lists.hx",11079);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11079);
			{
				HX_STACK_LINE(11079)
				{
				}
				HX_STACK_LINE(11079)
				::zpp_nape::space::ZPP_AABBNode ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11079)
				__this->pop();
				HX_STACK_LINE(11079)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11079)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop_unsafe,return )

Void ZNPList_ZPP_AABBNode_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_pop","zpp_nape/util/Lists.hx",11046);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11047)
		{
		}
		HX_STACK_LINE(11055)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11056)
		this->head = ret->next;
		HX_STACK_LINE(11057)
		{
		}
		HX_STACK_LINE(11058)
		{
			HX_STACK_LINE(11059)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11060)
			{
			}
			HX_STACK_LINE(11068)
			o->elt = null();
			HX_STACK_LINE(11069)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(11070)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11075)
		if (((this->head == null()))){
			HX_STACK_LINE(11075)
			this->pushmod = true;
		}
		HX_STACK_LINE(11076)
		this->modified = true;
		HX_STACK_LINE(11077)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,inlined_pop,(void))

Void ZNPList_ZPP_AABBNode_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::pop","zpp_nape/util/Lists.hx",11044);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11044)
		{
		}
		HX_STACK_LINE(11044)
		::zpp_nape::util::ZNPNode_ZPP_AABBNode ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11044)
		this->head = ret->next;
		HX_STACK_LINE(11044)
		{
		}
		HX_STACK_LINE(11044)
		{
			HX_STACK_LINE(11044)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11044)
			{
			}
			HX_STACK_LINE(11044)
			o->elt = null();
			HX_STACK_LINE(11044)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(11044)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11044)
		if (((this->head == null()))){
			HX_STACK_LINE(11044)
			this->pushmod = true;
		}
		HX_STACK_LINE(11044)
		this->modified = true;
		HX_STACK_LINE(11044)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_insert","zpp_nape/util/Lists.hx",11001);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(11002)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11010);
			{
				HX_STACK_LINE(11011)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11012)
				{
					HX_STACK_LINE(11013)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
						HX_STACK_LINE(11013)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
					}
					else{
						HX_STACK_LINE(11020)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(11021)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11022)
						ret->next = null();
					}
					HX_STACK_LINE(11027)
					Dynamic();
				}
				HX_STACK_LINE(11029)
				ret->elt = o;
				HX_STACK_LINE(11030)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11010)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11032)
	if (((cur == null()))){
		HX_STACK_LINE(11033)
		temp->next = this->head;
		HX_STACK_LINE(11034)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11037)
		temp->next = cur->next;
		HX_STACK_LINE(11038)
		cur->next = temp;
	}
	HX_STACK_LINE(11040)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11041)
	(this->length)++;
	HX_STACK_LINE(11042)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_AABBNode cur,::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::insert","zpp_nape/util/Lists.hx",10999);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj *__this,::zpp_nape::space::ZPP_AABBNode &o,::zpp_nape::util::ZNPNode_ZPP_AABBNode &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10999);
			{
				HX_STACK_LINE(10999)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10999);
						{
							HX_STACK_LINE(10999)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10999)
							{
								HX_STACK_LINE(10999)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(10999)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(10999)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(10999)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10999)
									ret->next = null();
								}
								HX_STACK_LINE(10999)
								Dynamic();
							}
							HX_STACK_LINE(10999)
							ret->elt = o;
							HX_STACK_LINE(10999)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10999)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10999)
				if (((cur == null()))){
					HX_STACK_LINE(10999)
					temp->next = __this->head;
					HX_STACK_LINE(10999)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(10999)
					temp->next = cur->next;
					HX_STACK_LINE(10999)
					cur->next = temp;
				}
				HX_STACK_LINE(10999)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(10999)
				(__this->length)++;
				HX_STACK_LINE(10999)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(10999)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_AABBNode_obj,insert,return )

Void ZNPList_ZPP_AABBNode_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_AABBNode x){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::addAll","zpp_nape/util/Lists.hx",10981);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(10982)
		{
		}
		HX_STACK_LINE(10990)
		{
			HX_STACK_LINE(10991)
			::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10992)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10993)
				::zpp_nape::space::ZPP_AABBNode i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(10994)
				this->add(i);
				HX_STACK_LINE(10995)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,addAll,(void))

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::inlined_add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::inlined_add","zpp_nape/util/Lists.hx",10944);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(10945)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10953);
			{
				HX_STACK_LINE(10954)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10955)
				{
					HX_STACK_LINE(10956)
					if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
						HX_STACK_LINE(10956)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
					}
					else{
						HX_STACK_LINE(10963)
						ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
						HX_STACK_LINE(10964)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
						HX_STACK_LINE(10965)
						ret->next = null();
					}
					HX_STACK_LINE(10970)
					Dynamic();
				}
				HX_STACK_LINE(10972)
				ret->elt = o;
				HX_STACK_LINE(10973)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10953)
	::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10975)
	temp->next = this->head;
	HX_STACK_LINE(10976)
	this->head = temp;
	HX_STACK_LINE(10977)
	this->modified = true;
	HX_STACK_LINE(10978)
	(this->length)++;
	HX_STACK_LINE(10979)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,inlined_add,return )

::zpp_nape::space::ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::add( ::zpp_nape::space::ZPP_AABBNode o){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::add","zpp_nape/util/Lists.hx",10942);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &o,::zpp_nape::util::ZNPList_ZPP_AABBNode_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10942);
			{
				HX_STACK_LINE(10942)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10942);
						{
							HX_STACK_LINE(10942)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10942)
							{
								HX_STACK_LINE(10942)
								if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(10942)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(10942)
									ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(10942)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10942)
									ret->next = null();
								}
								HX_STACK_LINE(10942)
								Dynamic();
							}
							HX_STACK_LINE(10942)
							ret->elt = o;
							HX_STACK_LINE(10942)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10942)
				::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10942)
				temp->next = __this->head;
				HX_STACK_LINE(10942)
				__this->head = temp;
				HX_STACK_LINE(10942)
				__this->modified = true;
				HX_STACK_LINE(10942)
				(__this->length)++;
				HX_STACK_LINE(10942)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(10942)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,add,return )

Void ZNPList_ZPP_AABBNode_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_AABBNode i){
{
		HX_STACK_PUSH("ZNPList_ZPP_AABBNode::setbegin","zpp_nape/util/Lists.hx",10937);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(10938)
		this->head = i;
		HX_STACK_LINE(10939)
		this->modified = true;
		HX_STACK_LINE(10940)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_AABBNode_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_AABBNode ZNPList_ZPP_AABBNode_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_AABBNode::begin","zpp_nape/util/Lists.hx",10932);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10932)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_AABBNode_obj,begin,return )


ZNPList_ZPP_AABBNode_obj::ZNPList_ZPP_AABBNode_obj()
{
}

void ZNPList_ZPP_AABBNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_AABBNode);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_AABBNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_AABBNode_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_AABBNode_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_AABBNode >(); return inValue; }
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

void ZNPList_ZPP_AABBNode_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_AABBNode_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_AABBNode_obj::__mClass;

void ZNPList_ZPP_AABBNode_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_AABBNode"), hx::TCanCast< ZNPList_ZPP_AABBNode_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_AABBNode_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
