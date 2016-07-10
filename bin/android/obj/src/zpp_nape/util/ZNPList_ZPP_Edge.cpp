#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Edge_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Edge::new","zpp_nape/util/Lists.hx",8623);
{
	HX_STACK_LINE(8630)
	this->length = (int)0;
	HX_STACK_LINE(8629)
	this->pushmod = false;
	HX_STACK_LINE(8628)
	this->modified = false;
	HX_STACK_LINE(8624)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Edge_obj::~ZNPList_ZPP_Edge_obj() { }

Dynamic ZNPList_ZPP_Edge_obj::__CreateEmpty() { return  new ZNPList_ZPP_Edge_obj; }
hx::ObjectPtr< ZNPList_ZPP_Edge_obj > ZNPList_ZPP_Edge_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > result = new ZNPList_ZPP_Edge_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Edge_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Edge_obj > result = new ZNPList_ZPP_Edge_obj();
	result->__construct();
	return result;}

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::at","zpp_nape/util/Lists.hx",8993);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8994)
	{
	}
	HX_STACK_LINE(9002)
	::zpp_nape::util::ZNPNode_ZPP_Edge it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(9003)
	return (  (((it != null()))) ? ::zpp_nape::shape::ZPP_Edge(it->elt) : ::zpp_nape::shape::ZPP_Edge(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::iterator_at","zpp_nape/util/Lists.hx",8980);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(8981)
	{
	}
	HX_STACK_LINE(8989)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8990)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(8990)
		ret = ret->next;
	}
	HX_STACK_LINE(8991)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::back","zpp_nape/util/Lists.hx",8971);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8972)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8973)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8974)
	while(((cur != null()))){
		HX_STACK_LINE(8975)
		ret = cur;
		HX_STACK_LINE(8976)
		cur = cur->next;
	}
	HX_STACK_LINE(8978)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,back,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::front","zpp_nape/util/Lists.hx",8971);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8971)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,front,return )

bool ZNPList_ZPP_Edge_obj::inlined_has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_has","zpp_nape/util/Lists.hx",8941);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8942)
	{
	}
	HX_STACK_LINE(8950)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8951)
	{
		HX_STACK_LINE(8952)
		ret = false;
		HX_STACK_LINE(8953)
		{
			HX_STACK_LINE(8954)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8955)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8956)
				::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(8957)
				if (((npite == obj))){
					HX_STACK_LINE(8959)
					ret = true;
					HX_STACK_LINE(8960)
					break;
				}
				HX_STACK_LINE(8963)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(8967)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_has,return )

bool ZNPList_ZPP_Edge_obj::has( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::has","zpp_nape/util/Lists.hx",8939);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Edge_obj *__this,::zpp_nape::shape::ZPP_Edge &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8939);
			{
				HX_STACK_LINE(8939)
				{
				}
				HX_STACK_LINE(8939)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8939)
				{
					HX_STACK_LINE(8939)
					ret = false;
					HX_STACK_LINE(8939)
					{
						HX_STACK_LINE(8939)
						::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(8939)
						while(((cx_ite != null()))){
							HX_STACK_LINE(8939)
							::zpp_nape::shape::ZPP_Edge npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(8939)
							if (((npite == obj))){
								HX_STACK_LINE(8939)
								ret = true;
								HX_STACK_LINE(8939)
								break;
							}
							HX_STACK_LINE(8939)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(8939)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8939)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,has,return )

int ZNPList_ZPP_Edge_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::size","zpp_nape/util/Lists.hx",8939);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8939)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,size,return )

bool ZNPList_ZPP_Edge_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::empty","zpp_nape/util/Lists.hx",8937);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8937)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,empty,return )

Void ZNPList_ZPP_Edge_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::reverse","zpp_nape/util/Lists.hx",8922);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8923)
		::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(8924)
		::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(8925)
		while(((cur != null()))){
			HX_STACK_LINE(8926)
			::zpp_nape::util::ZNPNode_ZPP_Edge nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(8927)
			cur->next = pre;
			HX_STACK_LINE(8928)
			this->head = cur;
			HX_STACK_LINE(8929)
			pre = cur;
			HX_STACK_LINE(8930)
			cur = nx;
		}
		HX_STACK_LINE(8932)
		this->modified = true;
		HX_STACK_LINE(8933)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,reverse,(void))

Void ZNPList_ZPP_Edge_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_clear","zpp_nape/util/Lists.hx",8916);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8918)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8918)
			{
			}
			HX_STACK_LINE(8918)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8918)
			this->head = ret->next;
			HX_STACK_LINE(8918)
			{
			}
			HX_STACK_LINE(8918)
			{
				HX_STACK_LINE(8918)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8918)
				{
				}
				HX_STACK_LINE(8918)
				o->elt = null();
				HX_STACK_LINE(8918)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(8918)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8918)
			if (((this->head == null()))){
				HX_STACK_LINE(8918)
				this->pushmod = true;
			}
			HX_STACK_LINE(8918)
			this->modified = true;
			HX_STACK_LINE(8918)
			(this->length)--;
		}
		HX_STACK_LINE(8919)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_clear,(void))

Void ZNPList_ZPP_Edge_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::clear","zpp_nape/util/Lists.hx",8914);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8914)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(8914)
			{
			}
			HX_STACK_LINE(8914)
			::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8914)
			this->head = ret->next;
			HX_STACK_LINE(8914)
			{
			}
			HX_STACK_LINE(8914)
			{
				HX_STACK_LINE(8914)
				::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(8914)
				{
				}
				HX_STACK_LINE(8914)
				o->elt = null();
				HX_STACK_LINE(8914)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
				HX_STACK_LINE(8914)
				::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
			}
			HX_STACK_LINE(8914)
			if (((this->head == null()))){
				HX_STACK_LINE(8914)
				this->pushmod = true;
			}
			HX_STACK_LINE(8914)
			this->modified = true;
			HX_STACK_LINE(8914)
			(this->length)--;
		}
		HX_STACK_LINE(8914)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Edge pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::splice","zpp_nape/util/Lists.hx",8910);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(8911)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(8911)
		this->erase(pre);
	}
	HX_STACK_LINE(8912)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_erase","zpp_nape/util/Lists.hx",8864);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(8865)
	{
	}
	HX_STACK_LINE(8873)
	::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(8874)
	::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8875)
	if (((pre == null()))){
		HX_STACK_LINE(8876)
		old = this->head;
		HX_STACK_LINE(8877)
		ret = old->next;
		HX_STACK_LINE(8878)
		this->head = ret;
		HX_STACK_LINE(8879)
		if (((this->head == null()))){
			HX_STACK_LINE(8879)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(8882)
		old = pre->next;
		HX_STACK_LINE(8883)
		ret = old->next;
		HX_STACK_LINE(8884)
		pre->next = ret;
		HX_STACK_LINE(8885)
		if (((ret == null()))){
			HX_STACK_LINE(8885)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(8887)
	{
	}
	HX_STACK_LINE(8888)
	{
		HX_STACK_LINE(8889)
		::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(8890)
		{
		}
		HX_STACK_LINE(8898)
		o->elt = null();
		HX_STACK_LINE(8899)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
		HX_STACK_LINE(8900)
		::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
	}
	HX_STACK_LINE(8905)
	this->modified = true;
	HX_STACK_LINE(8906)
	(this->length)--;
	HX_STACK_LINE(8907)
	this->pushmod = true;
	HX_STACK_LINE(8908)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Edge pre){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::erase","zpp_nape/util/Lists.hx",8862);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::util::ZNPNode_ZPP_Edge &pre,::zpp_nape::util::ZNPList_ZPP_Edge_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8862);
			{
				HX_STACK_LINE(8862)
				{
				}
				HX_STACK_LINE(8862)
				::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8862)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8862)
				if (((pre == null()))){
					HX_STACK_LINE(8862)
					old = __this->head;
					HX_STACK_LINE(8862)
					ret = old->next;
					HX_STACK_LINE(8862)
					__this->head = ret;
					HX_STACK_LINE(8862)
					if (((__this->head == null()))){
						HX_STACK_LINE(8862)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8862)
					old = pre->next;
					HX_STACK_LINE(8862)
					ret = old->next;
					HX_STACK_LINE(8862)
					pre->next = ret;
					HX_STACK_LINE(8862)
					if (((ret == null()))){
						HX_STACK_LINE(8862)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(8862)
				{
				}
				HX_STACK_LINE(8862)
				{
					HX_STACK_LINE(8862)
					::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8862)
					{
					}
					HX_STACK_LINE(8862)
					o->elt = null();
					HX_STACK_LINE(8862)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
					HX_STACK_LINE(8862)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8862)
				__this->modified = true;
				HX_STACK_LINE(8862)
				(__this->length)--;
				HX_STACK_LINE(8862)
				__this->pushmod = true;
				HX_STACK_LINE(8862)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8862)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,erase,return )

bool ZNPList_ZPP_Edge_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_try_remove","zpp_nape/util/Lists.hx",8839);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8840)
	{
	}
	HX_STACK_LINE(8848)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8849)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8850)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8851)
	while(((cur != null()))){
		HX_STACK_LINE(8852)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8853)
			{
				HX_STACK_LINE(8853)
				{
				}
				HX_STACK_LINE(8853)
				::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(8853)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(8853)
				if (((pre == null()))){
					HX_STACK_LINE(8853)
					old = this->head;
					HX_STACK_LINE(8853)
					ret1 = old->next;
					HX_STACK_LINE(8853)
					this->head = ret1;
					HX_STACK_LINE(8853)
					if (((this->head == null()))){
						HX_STACK_LINE(8853)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(8853)
					old = pre->next;
					HX_STACK_LINE(8853)
					ret1 = old->next;
					HX_STACK_LINE(8853)
					pre->next = ret1;
					HX_STACK_LINE(8853)
					if (((ret1 == null()))){
						HX_STACK_LINE(8853)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(8853)
				{
				}
				HX_STACK_LINE(8853)
				{
					HX_STACK_LINE(8853)
					::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(8853)
					{
					}
					HX_STACK_LINE(8853)
					o->elt = null();
					HX_STACK_LINE(8853)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
					HX_STACK_LINE(8853)
					::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
				}
				HX_STACK_LINE(8853)
				this->modified = true;
				HX_STACK_LINE(8853)
				(this->length)--;
				HX_STACK_LINE(8853)
				this->pushmod = true;
				HX_STACK_LINE(8853)
				ret1;
			}
			HX_STACK_LINE(8854)
			ret = true;
			HX_STACK_LINE(8855)
			break;
		}
		HX_STACK_LINE(8857)
		pre = cur;
		HX_STACK_LINE(8858)
		cur = cur->next;
	}
	HX_STACK_LINE(8860)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Edge_obj::inlined_remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_remove","zpp_nape/util/Lists.hx",8826);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8827)
		{
		}
		HX_STACK_LINE(8835)
		{
			HX_STACK_LINE(8835)
			{
			}
			HX_STACK_LINE(8835)
			::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8835)
			::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8835)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8835)
			while(((cur != null()))){
				HX_STACK_LINE(8835)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8835)
					{
						HX_STACK_LINE(8835)
						{
						}
						HX_STACK_LINE(8835)
						::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8835)
						::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8835)
						if (((pre == null()))){
							HX_STACK_LINE(8835)
							old = this->head;
							HX_STACK_LINE(8835)
							ret1 = old->next;
							HX_STACK_LINE(8835)
							this->head = ret1;
							HX_STACK_LINE(8835)
							if (((this->head == null()))){
								HX_STACK_LINE(8835)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8835)
							old = pre->next;
							HX_STACK_LINE(8835)
							ret1 = old->next;
							HX_STACK_LINE(8835)
							pre->next = ret1;
							HX_STACK_LINE(8835)
							if (((ret1 == null()))){
								HX_STACK_LINE(8835)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8835)
						{
						}
						HX_STACK_LINE(8835)
						{
							HX_STACK_LINE(8835)
							::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8835)
							{
							}
							HX_STACK_LINE(8835)
							o->elt = null();
							HX_STACK_LINE(8835)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
							HX_STACK_LINE(8835)
							::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8835)
						this->modified = true;
						HX_STACK_LINE(8835)
						(this->length)--;
						HX_STACK_LINE(8835)
						this->pushmod = true;
						HX_STACK_LINE(8835)
						ret1;
					}
					HX_STACK_LINE(8835)
					ret = true;
					HX_STACK_LINE(8835)
					break;
				}
				HX_STACK_LINE(8835)
				pre = cur;
				HX_STACK_LINE(8835)
				cur = cur->next;
			}
			HX_STACK_LINE(8835)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_remove,(void))

bool ZNPList_ZPP_Edge_obj::try_remove( ::zpp_nape::shape::ZPP_Edge obj){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::try_remove","zpp_nape/util/Lists.hx",8801);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(8802)
	{
	}
	HX_STACK_LINE(8810)
	::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(8811)
	::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(8812)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8813)
	while(((cur != null()))){
		HX_STACK_LINE(8814)
		if (((cur->elt == obj))){
			HX_STACK_LINE(8815)
			this->erase(pre);
			HX_STACK_LINE(8816)
			ret = true;
			HX_STACK_LINE(8817)
			break;
		}
		HX_STACK_LINE(8819)
		pre = cur;
		HX_STACK_LINE(8820)
		cur = cur->next;
	}
	HX_STACK_LINE(8822)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,try_remove,return )

Void ZNPList_ZPP_Edge_obj::remove( ::zpp_nape::shape::ZPP_Edge obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::remove","zpp_nape/util/Lists.hx",8790);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(8791)
		{
		}
		HX_STACK_LINE(8799)
		{
			HX_STACK_LINE(8799)
			{
			}
			HX_STACK_LINE(8799)
			::zpp_nape::util::ZNPNode_ZPP_Edge pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(8799)
			::zpp_nape::util::ZNPNode_ZPP_Edge cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(8799)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(8799)
			while(((cur != null()))){
				HX_STACK_LINE(8799)
				if (((cur->elt == obj))){
					HX_STACK_LINE(8799)
					{
						HX_STACK_LINE(8799)
						{
						}
						HX_STACK_LINE(8799)
						::zpp_nape::util::ZNPNode_ZPP_Edge old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(8799)
						::zpp_nape::util::ZNPNode_ZPP_Edge ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(8799)
						if (((pre == null()))){
							HX_STACK_LINE(8799)
							old = this->head;
							HX_STACK_LINE(8799)
							ret1 = old->next;
							HX_STACK_LINE(8799)
							this->head = ret1;
							HX_STACK_LINE(8799)
							if (((this->head == null()))){
								HX_STACK_LINE(8799)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(8799)
							old = pre->next;
							HX_STACK_LINE(8799)
							ret1 = old->next;
							HX_STACK_LINE(8799)
							pre->next = ret1;
							HX_STACK_LINE(8799)
							if (((ret1 == null()))){
								HX_STACK_LINE(8799)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(8799)
						{
						}
						HX_STACK_LINE(8799)
						{
							HX_STACK_LINE(8799)
							::zpp_nape::util::ZNPNode_ZPP_Edge o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(8799)
							{
							}
							HX_STACK_LINE(8799)
							o->elt = null();
							HX_STACK_LINE(8799)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
							HX_STACK_LINE(8799)
							::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
						}
						HX_STACK_LINE(8799)
						this->modified = true;
						HX_STACK_LINE(8799)
						(this->length)--;
						HX_STACK_LINE(8799)
						this->pushmod = true;
						HX_STACK_LINE(8799)
						ret1;
					}
					HX_STACK_LINE(8799)
					ret = true;
					HX_STACK_LINE(8799)
					break;
				}
				HX_STACK_LINE(8799)
				pre = cur;
				HX_STACK_LINE(8799)
				cur = cur->next;
			}
			HX_STACK_LINE(8799)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,remove,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_pop_unsafe","zpp_nape/util/Lists.hx",8777);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8778)
	{
	}
	HX_STACK_LINE(8786)
	::zpp_nape::shape::ZPP_Edge ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(8787)
	this->pop();
	HX_STACK_LINE(8788)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop_unsafe,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::pop_unsafe","zpp_nape/util/Lists.hx",8775);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::shape::ZPP_Edge Block( ::zpp_nape::util::ZNPList_ZPP_Edge_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8775);
			{
				HX_STACK_LINE(8775)
				{
				}
				HX_STACK_LINE(8775)
				::zpp_nape::shape::ZPP_Edge ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8775)
				__this->pop();
				HX_STACK_LINE(8775)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8775)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop_unsafe,return )

Void ZNPList_ZPP_Edge_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_pop","zpp_nape/util/Lists.hx",8742);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8743)
		{
		}
		HX_STACK_LINE(8751)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8752)
		this->head = ret->next;
		HX_STACK_LINE(8753)
		{
		}
		HX_STACK_LINE(8754)
		{
			HX_STACK_LINE(8755)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8756)
			{
			}
			HX_STACK_LINE(8764)
			o->elt = null();
			HX_STACK_LINE(8765)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
			HX_STACK_LINE(8766)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8771)
		if (((this->head == null()))){
			HX_STACK_LINE(8771)
			this->pushmod = true;
		}
		HX_STACK_LINE(8772)
		this->modified = true;
		HX_STACK_LINE(8773)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,inlined_pop,(void))

Void ZNPList_ZPP_Edge_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::pop","zpp_nape/util/Lists.hx",8740);
		HX_STACK_THIS(this);
		HX_STACK_LINE(8740)
		{
		}
		HX_STACK_LINE(8740)
		::zpp_nape::util::ZNPNode_ZPP_Edge ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(8740)
		this->head = ret->next;
		HX_STACK_LINE(8740)
		{
		}
		HX_STACK_LINE(8740)
		{
			HX_STACK_LINE(8740)
			::zpp_nape::util::ZNPNode_ZPP_Edge o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(8740)
			{
			}
			HX_STACK_LINE(8740)
			o->elt = null();
			HX_STACK_LINE(8740)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
			HX_STACK_LINE(8740)
			::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = o;
		}
		HX_STACK_LINE(8740)
		if (((this->head == null()))){
			HX_STACK_LINE(8740)
			this->pushmod = true;
		}
		HX_STACK_LINE(8740)
		this->modified = true;
		HX_STACK_LINE(8740)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_insert","zpp_nape/util/Lists.hx",8697);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8698)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::shape::ZPP_Edge &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8706);
			{
				HX_STACK_LINE(8707)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8708)
				{
					HX_STACK_LINE(8709)
					if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
						HX_STACK_LINE(8709)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();
					}
					else{
						HX_STACK_LINE(8716)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(8717)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8718)
						ret->next = null();
					}
					HX_STACK_LINE(8723)
					Dynamic();
				}
				HX_STACK_LINE(8725)
				ret->elt = o;
				HX_STACK_LINE(8726)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8706)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8728)
	if (((cur == null()))){
		HX_STACK_LINE(8729)
		temp->next = this->head;
		HX_STACK_LINE(8730)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(8733)
		temp->next = cur->next;
		HX_STACK_LINE(8734)
		cur->next = temp;
	}
	HX_STACK_LINE(8736)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(8737)
	(this->length)++;
	HX_STACK_LINE(8738)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Edge cur,::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::insert","zpp_nape/util/Lists.hx",8695);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::util::ZNPList_ZPP_Edge_obj *__this,::zpp_nape::shape::ZPP_Edge &o,::zpp_nape::util::ZNPNode_ZPP_Edge &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8695);
			{
				HX_STACK_LINE(8695)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::shape::ZPP_Edge &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8695);
						{
							HX_STACK_LINE(8695)
							::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8695)
							{
								HX_STACK_LINE(8695)
								if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
									HX_STACK_LINE(8695)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();
								}
								else{
									HX_STACK_LINE(8695)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
									HX_STACK_LINE(8695)
									::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8695)
									ret->next = null();
								}
								HX_STACK_LINE(8695)
								Dynamic();
							}
							HX_STACK_LINE(8695)
							ret->elt = o;
							HX_STACK_LINE(8695)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8695)
				::zpp_nape::util::ZNPNode_ZPP_Edge temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8695)
				if (((cur == null()))){
					HX_STACK_LINE(8695)
					temp->next = __this->head;
					HX_STACK_LINE(8695)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(8695)
					temp->next = cur->next;
					HX_STACK_LINE(8695)
					cur->next = temp;
				}
				HX_STACK_LINE(8695)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(8695)
				(__this->length)++;
				HX_STACK_LINE(8695)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(8695)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Edge_obj,insert,return )

Void ZNPList_ZPP_Edge_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Edge x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::addAll","zpp_nape/util/Lists.hx",8677);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(8678)
		{
		}
		HX_STACK_LINE(8686)
		{
			HX_STACK_LINE(8687)
			::zpp_nape::util::ZNPNode_ZPP_Edge cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(8688)
			while(((cx_ite != null()))){
				HX_STACK_LINE(8689)
				::zpp_nape::shape::ZPP_Edge i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(8690)
				this->add(i);
				HX_STACK_LINE(8691)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,addAll,(void))

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::inlined_add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::inlined_add","zpp_nape/util/Lists.hx",8640);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(8641)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::shape::ZPP_Edge &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8649);
			{
				HX_STACK_LINE(8650)
				::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(8651)
				{
					HX_STACK_LINE(8652)
					if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
						HX_STACK_LINE(8652)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();
					}
					else{
						HX_STACK_LINE(8659)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
						HX_STACK_LINE(8660)
						::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
						HX_STACK_LINE(8661)
						ret->next = null();
					}
					HX_STACK_LINE(8666)
					Dynamic();
				}
				HX_STACK_LINE(8668)
				ret->elt = o;
				HX_STACK_LINE(8669)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(8649)
	::zpp_nape::util::ZNPNode_ZPP_Edge temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(8671)
	temp->next = this->head;
	HX_STACK_LINE(8672)
	this->head = temp;
	HX_STACK_LINE(8673)
	this->modified = true;
	HX_STACK_LINE(8674)
	(this->length)++;
	HX_STACK_LINE(8675)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,inlined_add,return )

::zpp_nape::shape::ZPP_Edge ZNPList_ZPP_Edge_obj::add( ::zpp_nape::shape::ZPP_Edge o){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::add","zpp_nape/util/Lists.hx",8638);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::shape::ZPP_Edge Block( ::zpp_nape::shape::ZPP_Edge &o,::zpp_nape::util::ZNPList_ZPP_Edge_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8638);
			{
				HX_STACK_LINE(8638)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Edge Block( ::zpp_nape::shape::ZPP_Edge &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",8638);
						{
							HX_STACK_LINE(8638)
							::zpp_nape::util::ZNPNode_ZPP_Edge ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(8638)
							{
								HX_STACK_LINE(8638)
								if (((::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool == null()))){
									HX_STACK_LINE(8638)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::__new();
								}
								else{
									HX_STACK_LINE(8638)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool;
									HX_STACK_LINE(8638)
									::zpp_nape::util::ZNPNode_ZPP_Edge_obj::zpp_pool = ret->next;
									HX_STACK_LINE(8638)
									ret->next = null();
								}
								HX_STACK_LINE(8638)
								Dynamic();
							}
							HX_STACK_LINE(8638)
							ret->elt = o;
							HX_STACK_LINE(8638)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(8638)
				::zpp_nape::util::ZNPNode_ZPP_Edge temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(8638)
				temp->next = __this->head;
				HX_STACK_LINE(8638)
				__this->head = temp;
				HX_STACK_LINE(8638)
				__this->modified = true;
				HX_STACK_LINE(8638)
				(__this->length)++;
				HX_STACK_LINE(8638)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(8638)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,add,return )

Void ZNPList_ZPP_Edge_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Edge i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Edge::setbegin","zpp_nape/util/Lists.hx",8633);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(8634)
		this->head = i;
		HX_STACK_LINE(8635)
		this->modified = true;
		HX_STACK_LINE(8636)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Edge_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Edge ZNPList_ZPP_Edge_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Edge::begin","zpp_nape/util/Lists.hx",8628);
	HX_STACK_THIS(this);
	HX_STACK_LINE(8628)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Edge_obj,begin,return )


ZNPList_ZPP_Edge_obj::ZNPList_ZPP_Edge_obj()
{
}

void ZNPList_ZPP_Edge_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Edge);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Edge_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Edge_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Edge_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Edge >(); return inValue; }
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

void ZNPList_ZPP_Edge_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Edge_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Edge_obj::__mClass;

void ZNPList_ZPP_Edge_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Edge"), hx::TCanCast< ZNPList_ZPP_Edge_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Edge_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
