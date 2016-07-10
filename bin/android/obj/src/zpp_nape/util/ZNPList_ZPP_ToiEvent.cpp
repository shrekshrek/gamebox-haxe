#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_ToiEvent
#include <zpp_nape/geom/ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ToiEvent
#include <zpp_nape/util/ZNPList_ZPP_ToiEvent.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_ToiEvent
#include <zpp_nape/util/ZNPNode_ZPP_ToiEvent.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_ToiEvent_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::new","zpp_nape/util/Lists.hx",11695);
{
	HX_STACK_LINE(11702)
	this->length = (int)0;
	HX_STACK_LINE(11701)
	this->pushmod = false;
	HX_STACK_LINE(11700)
	this->modified = false;
	HX_STACK_LINE(11696)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_ToiEvent_obj::~ZNPList_ZPP_ToiEvent_obj() { }

Dynamic ZNPList_ZPP_ToiEvent_obj::__CreateEmpty() { return  new ZNPList_ZPP_ToiEvent_obj; }
hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > ZNPList_ZPP_ToiEvent_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > result = new ZNPList_ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_ToiEvent_obj > result = new ZNPList_ZPP_ToiEvent_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::at","zpp_nape/util/Lists.hx",12065);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12066)
	{
	}
	HX_STACK_LINE(12074)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12075)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_ToiEvent(it->elt) : ::zpp_nape::geom::ZPP_ToiEvent(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::iterator_at","zpp_nape/util/Lists.hx",12052);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12053)
	{
	}
	HX_STACK_LINE(12061)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12062)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(12062)
		ret = ret->next;
	}
	HX_STACK_LINE(12063)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,iterator_at,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::back","zpp_nape/util/Lists.hx",12043);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12044)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12045)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12046)
	while(((cur != null()))){
		HX_STACK_LINE(12047)
		ret = cur;
		HX_STACK_LINE(12048)
		cur = cur->next;
	}
	HX_STACK_LINE(12050)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,back,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::front","zpp_nape/util/Lists.hx",12043);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12043)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,front,return )

bool ZNPList_ZPP_ToiEvent_obj::inlined_has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_has","zpp_nape/util/Lists.hx",12013);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12014)
	{
	}
	HX_STACK_LINE(12022)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12023)
	{
		HX_STACK_LINE(12024)
		ret = false;
		HX_STACK_LINE(12025)
		{
			HX_STACK_LINE(12026)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12027)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12028)
				::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12029)
				if (((npite == obj))){
					HX_STACK_LINE(12031)
					ret = true;
					HX_STACK_LINE(12032)
					break;
				}
				HX_STACK_LINE(12035)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12039)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_has,return )

bool ZNPList_ZPP_ToiEvent_obj::has( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::has","zpp_nape/util/Lists.hx",12011);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this,::zpp_nape::geom::ZPP_ToiEvent &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12011);
			{
				HX_STACK_LINE(12011)
				{
				}
				HX_STACK_LINE(12011)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12011)
				{
					HX_STACK_LINE(12011)
					ret = false;
					HX_STACK_LINE(12011)
					{
						HX_STACK_LINE(12011)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(12011)
						while(((cx_ite != null()))){
							HX_STACK_LINE(12011)
							::zpp_nape::geom::ZPP_ToiEvent npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(12011)
							if (((npite == obj))){
								HX_STACK_LINE(12011)
								ret = true;
								HX_STACK_LINE(12011)
								break;
							}
							HX_STACK_LINE(12011)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(12011)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12011)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,has,return )

int ZNPList_ZPP_ToiEvent_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::size","zpp_nape/util/Lists.hx",12011);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12011)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,size,return )

bool ZNPList_ZPP_ToiEvent_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::empty","zpp_nape/util/Lists.hx",12009);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12009)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,empty,return )

Void ZNPList_ZPP_ToiEvent_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::reverse","zpp_nape/util/Lists.hx",11994);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11995)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(11996)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(11997)
		while(((cur != null()))){
			HX_STACK_LINE(11998)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(11999)
			cur->next = pre;
			HX_STACK_LINE(12000)
			this->head = cur;
			HX_STACK_LINE(12001)
			pre = cur;
			HX_STACK_LINE(12002)
			cur = nx;
		}
		HX_STACK_LINE(12004)
		this->modified = true;
		HX_STACK_LINE(12005)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,reverse,(void))

Void ZNPList_ZPP_ToiEvent_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_clear","zpp_nape/util/Lists.hx",11988);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11990)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11990)
			{
			}
			HX_STACK_LINE(11990)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11990)
			this->head = ret->next;
			HX_STACK_LINE(11990)
			{
			}
			HX_STACK_LINE(11990)
			{
				HX_STACK_LINE(11990)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11990)
				{
				}
				HX_STACK_LINE(11990)
				o->elt = null();
				HX_STACK_LINE(11990)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
				HX_STACK_LINE(11990)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11990)
			if (((this->head == null()))){
				HX_STACK_LINE(11990)
				this->pushmod = true;
			}
			HX_STACK_LINE(11990)
			this->modified = true;
			HX_STACK_LINE(11990)
			(this->length)--;
		}
		HX_STACK_LINE(11991)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_clear,(void))

Void ZNPList_ZPP_ToiEvent_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::clear","zpp_nape/util/Lists.hx",11986);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11986)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(11986)
			{
			}
			HX_STACK_LINE(11986)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11986)
			this->head = ret->next;
			HX_STACK_LINE(11986)
			{
			}
			HX_STACK_LINE(11986)
			{
				HX_STACK_LINE(11986)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(11986)
				{
				}
				HX_STACK_LINE(11986)
				o->elt = null();
				HX_STACK_LINE(11986)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
				HX_STACK_LINE(11986)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
			}
			HX_STACK_LINE(11986)
			if (((this->head == null()))){
				HX_STACK_LINE(11986)
				this->pushmod = true;
			}
			HX_STACK_LINE(11986)
			this->modified = true;
			HX_STACK_LINE(11986)
			(this->length)--;
		}
		HX_STACK_LINE(11986)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::splice","zpp_nape/util/Lists.hx",11982);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(11983)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(11983)
		this->erase(pre);
	}
	HX_STACK_LINE(11984)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_erase","zpp_nape/util/Lists.hx",11936);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(11937)
	{
	}
	HX_STACK_LINE(11945)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(11946)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11947)
	if (((pre == null()))){
		HX_STACK_LINE(11948)
		old = this->head;
		HX_STACK_LINE(11949)
		ret = old->next;
		HX_STACK_LINE(11950)
		this->head = ret;
		HX_STACK_LINE(11951)
		if (((this->head == null()))){
			HX_STACK_LINE(11951)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(11954)
		old = pre->next;
		HX_STACK_LINE(11955)
		ret = old->next;
		HX_STACK_LINE(11956)
		pre->next = ret;
		HX_STACK_LINE(11957)
		if (((ret == null()))){
			HX_STACK_LINE(11957)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(11959)
	{
	}
	HX_STACK_LINE(11960)
	{
		HX_STACK_LINE(11961)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(11962)
		{
		}
		HX_STACK_LINE(11970)
		o->elt = null();
		HX_STACK_LINE(11971)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
		HX_STACK_LINE(11972)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
	}
	HX_STACK_LINE(11977)
	this->modified = true;
	HX_STACK_LINE(11978)
	(this->length)--;
	HX_STACK_LINE(11979)
	this->pushmod = true;
	HX_STACK_LINE(11980)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::erase","zpp_nape/util/Lists.hx",11934);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent &pre,::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11934);
			{
				HX_STACK_LINE(11934)
				{
				}
				HX_STACK_LINE(11934)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11934)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11934)
				if (((pre == null()))){
					HX_STACK_LINE(11934)
					old = __this->head;
					HX_STACK_LINE(11934)
					ret = old->next;
					HX_STACK_LINE(11934)
					__this->head = ret;
					HX_STACK_LINE(11934)
					if (((__this->head == null()))){
						HX_STACK_LINE(11934)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11934)
					old = pre->next;
					HX_STACK_LINE(11934)
					ret = old->next;
					HX_STACK_LINE(11934)
					pre->next = ret;
					HX_STACK_LINE(11934)
					if (((ret == null()))){
						HX_STACK_LINE(11934)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(11934)
				{
				}
				HX_STACK_LINE(11934)
				{
					HX_STACK_LINE(11934)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11934)
					{
					}
					HX_STACK_LINE(11934)
					o->elt = null();
					HX_STACK_LINE(11934)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
					HX_STACK_LINE(11934)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11934)
				__this->modified = true;
				HX_STACK_LINE(11934)
				(__this->length)--;
				HX_STACK_LINE(11934)
				__this->pushmod = true;
				HX_STACK_LINE(11934)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11934)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,erase,return )

bool ZNPList_ZPP_ToiEvent_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_try_remove","zpp_nape/util/Lists.hx",11911);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11912)
	{
	}
	HX_STACK_LINE(11920)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11921)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11922)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11923)
	while(((cur != null()))){
		HX_STACK_LINE(11924)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11925)
			{
				HX_STACK_LINE(11925)
				{
				}
				HX_STACK_LINE(11925)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(11925)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(11925)
				if (((pre == null()))){
					HX_STACK_LINE(11925)
					old = this->head;
					HX_STACK_LINE(11925)
					ret1 = old->next;
					HX_STACK_LINE(11925)
					this->head = ret1;
					HX_STACK_LINE(11925)
					if (((this->head == null()))){
						HX_STACK_LINE(11925)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(11925)
					old = pre->next;
					HX_STACK_LINE(11925)
					ret1 = old->next;
					HX_STACK_LINE(11925)
					pre->next = ret1;
					HX_STACK_LINE(11925)
					if (((ret1 == null()))){
						HX_STACK_LINE(11925)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(11925)
				{
				}
				HX_STACK_LINE(11925)
				{
					HX_STACK_LINE(11925)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(11925)
					{
					}
					HX_STACK_LINE(11925)
					o->elt = null();
					HX_STACK_LINE(11925)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
					HX_STACK_LINE(11925)
					::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
				}
				HX_STACK_LINE(11925)
				this->modified = true;
				HX_STACK_LINE(11925)
				(this->length)--;
				HX_STACK_LINE(11925)
				this->pushmod = true;
				HX_STACK_LINE(11925)
				ret1;
			}
			HX_STACK_LINE(11926)
			ret = true;
			HX_STACK_LINE(11927)
			break;
		}
		HX_STACK_LINE(11929)
		pre = cur;
		HX_STACK_LINE(11930)
		cur = cur->next;
	}
	HX_STACK_LINE(11932)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_try_remove,return )

Void ZNPList_ZPP_ToiEvent_obj::inlined_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_remove","zpp_nape/util/Lists.hx",11898);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11899)
		{
		}
		HX_STACK_LINE(11907)
		{
			HX_STACK_LINE(11907)
			{
			}
			HX_STACK_LINE(11907)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11907)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11907)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11907)
			while(((cur != null()))){
				HX_STACK_LINE(11907)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11907)
					{
						HX_STACK_LINE(11907)
						{
						}
						HX_STACK_LINE(11907)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11907)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11907)
						if (((pre == null()))){
							HX_STACK_LINE(11907)
							old = this->head;
							HX_STACK_LINE(11907)
							ret1 = old->next;
							HX_STACK_LINE(11907)
							this->head = ret1;
							HX_STACK_LINE(11907)
							if (((this->head == null()))){
								HX_STACK_LINE(11907)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11907)
							old = pre->next;
							HX_STACK_LINE(11907)
							ret1 = old->next;
							HX_STACK_LINE(11907)
							pre->next = ret1;
							HX_STACK_LINE(11907)
							if (((ret1 == null()))){
								HX_STACK_LINE(11907)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11907)
						{
						}
						HX_STACK_LINE(11907)
						{
							HX_STACK_LINE(11907)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11907)
							{
							}
							HX_STACK_LINE(11907)
							o->elt = null();
							HX_STACK_LINE(11907)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
							HX_STACK_LINE(11907)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11907)
						this->modified = true;
						HX_STACK_LINE(11907)
						(this->length)--;
						HX_STACK_LINE(11907)
						this->pushmod = true;
						HX_STACK_LINE(11907)
						ret1;
					}
					HX_STACK_LINE(11907)
					ret = true;
					HX_STACK_LINE(11907)
					break;
				}
				HX_STACK_LINE(11907)
				pre = cur;
				HX_STACK_LINE(11907)
				cur = cur->next;
			}
			HX_STACK_LINE(11907)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_remove,(void))

bool ZNPList_ZPP_ToiEvent_obj::try_remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::try_remove","zpp_nape/util/Lists.hx",11873);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(11874)
	{
	}
	HX_STACK_LINE(11882)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(11883)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(11884)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11885)
	while(((cur != null()))){
		HX_STACK_LINE(11886)
		if (((cur->elt == obj))){
			HX_STACK_LINE(11887)
			this->erase(pre);
			HX_STACK_LINE(11888)
			ret = true;
			HX_STACK_LINE(11889)
			break;
		}
		HX_STACK_LINE(11891)
		pre = cur;
		HX_STACK_LINE(11892)
		cur = cur->next;
	}
	HX_STACK_LINE(11894)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,try_remove,return )

Void ZNPList_ZPP_ToiEvent_obj::remove( ::zpp_nape::geom::ZPP_ToiEvent obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::remove","zpp_nape/util/Lists.hx",11862);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(11863)
		{
		}
		HX_STACK_LINE(11871)
		{
			HX_STACK_LINE(11871)
			{
			}
			HX_STACK_LINE(11871)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(11871)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(11871)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(11871)
			while(((cur != null()))){
				HX_STACK_LINE(11871)
				if (((cur->elt == obj))){
					HX_STACK_LINE(11871)
					{
						HX_STACK_LINE(11871)
						{
						}
						HX_STACK_LINE(11871)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(11871)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(11871)
						if (((pre == null()))){
							HX_STACK_LINE(11871)
							old = this->head;
							HX_STACK_LINE(11871)
							ret1 = old->next;
							HX_STACK_LINE(11871)
							this->head = ret1;
							HX_STACK_LINE(11871)
							if (((this->head == null()))){
								HX_STACK_LINE(11871)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(11871)
							old = pre->next;
							HX_STACK_LINE(11871)
							ret1 = old->next;
							HX_STACK_LINE(11871)
							pre->next = ret1;
							HX_STACK_LINE(11871)
							if (((ret1 == null()))){
								HX_STACK_LINE(11871)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(11871)
						{
						}
						HX_STACK_LINE(11871)
						{
							HX_STACK_LINE(11871)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(11871)
							{
							}
							HX_STACK_LINE(11871)
							o->elt = null();
							HX_STACK_LINE(11871)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
							HX_STACK_LINE(11871)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
						}
						HX_STACK_LINE(11871)
						this->modified = true;
						HX_STACK_LINE(11871)
						(this->length)--;
						HX_STACK_LINE(11871)
						this->pushmod = true;
						HX_STACK_LINE(11871)
						ret1;
					}
					HX_STACK_LINE(11871)
					ret = true;
					HX_STACK_LINE(11871)
					break;
				}
				HX_STACK_LINE(11871)
				pre = cur;
				HX_STACK_LINE(11871)
				cur = cur->next;
			}
			HX_STACK_LINE(11871)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,remove,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_pop_unsafe","zpp_nape/util/Lists.hx",11849);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11850)
	{
	}
	HX_STACK_LINE(11858)
	::zpp_nape::geom::ZPP_ToiEvent ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(11859)
	this->pop();
	HX_STACK_LINE(11860)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::pop_unsafe","zpp_nape/util/Lists.hx",11847);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_ToiEvent Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11847);
			{
				HX_STACK_LINE(11847)
				{
				}
				HX_STACK_LINE(11847)
				::zpp_nape::geom::ZPP_ToiEvent ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11847)
				__this->pop();
				HX_STACK_LINE(11847)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11847)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop_unsafe,return )

Void ZNPList_ZPP_ToiEvent_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_pop","zpp_nape/util/Lists.hx",11814);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11815)
		{
		}
		HX_STACK_LINE(11823)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11824)
		this->head = ret->next;
		HX_STACK_LINE(11825)
		{
		}
		HX_STACK_LINE(11826)
		{
			HX_STACK_LINE(11827)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11828)
			{
			}
			HX_STACK_LINE(11836)
			o->elt = null();
			HX_STACK_LINE(11837)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
			HX_STACK_LINE(11838)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11843)
		if (((this->head == null()))){
			HX_STACK_LINE(11843)
			this->pushmod = true;
		}
		HX_STACK_LINE(11844)
		this->modified = true;
		HX_STACK_LINE(11845)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,inlined_pop,(void))

Void ZNPList_ZPP_ToiEvent_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::pop","zpp_nape/util/Lists.hx",11812);
		HX_STACK_THIS(this);
		HX_STACK_LINE(11812)
		{
		}
		HX_STACK_LINE(11812)
		::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(11812)
		this->head = ret->next;
		HX_STACK_LINE(11812)
		{
		}
		HX_STACK_LINE(11812)
		{
			HX_STACK_LINE(11812)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(11812)
			{
			}
			HX_STACK_LINE(11812)
			o->elt = null();
			HX_STACK_LINE(11812)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
			HX_STACK_LINE(11812)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = o;
		}
		HX_STACK_LINE(11812)
		if (((this->head == null()))){
			HX_STACK_LINE(11812)
			this->pushmod = true;
		}
		HX_STACK_LINE(11812)
		this->modified = true;
		HX_STACK_LINE(11812)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_insert","zpp_nape/util/Lists.hx",11769);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(11770)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11778);
			{
				HX_STACK_LINE(11779)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11780)
				{
					HX_STACK_LINE(11781)
					if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(11781)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(11788)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
						HX_STACK_LINE(11789)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11790)
						ret->next = null();
					}
					HX_STACK_LINE(11795)
					Dynamic();
				}
				HX_STACK_LINE(11797)
				ret->elt = o;
				HX_STACK_LINE(11798)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11778)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11800)
	if (((cur == null()))){
		HX_STACK_LINE(11801)
		temp->next = this->head;
		HX_STACK_LINE(11802)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(11805)
		temp->next = cur->next;
		HX_STACK_LINE(11806)
		cur->next = temp;
	}
	HX_STACK_LINE(11808)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(11809)
	(this->length)++;
	HX_STACK_LINE(11810)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent cur,::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::insert","zpp_nape/util/Lists.hx",11767);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this,::zpp_nape::geom::ZPP_ToiEvent &o,::zpp_nape::util::ZNPNode_ZPP_ToiEvent &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11767);
			{
				HX_STACK_LINE(11767)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11767);
						{
							HX_STACK_LINE(11767)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11767)
							{
								HX_STACK_LINE(11767)
								if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(11767)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(11767)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
									HX_STACK_LINE(11767)
									::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11767)
									ret->next = null();
								}
								HX_STACK_LINE(11767)
								Dynamic();
							}
							HX_STACK_LINE(11767)
							ret->elt = o;
							HX_STACK_LINE(11767)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11767)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11767)
				if (((cur == null()))){
					HX_STACK_LINE(11767)
					temp->next = __this->head;
					HX_STACK_LINE(11767)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(11767)
					temp->next = cur->next;
					HX_STACK_LINE(11767)
					cur->next = temp;
				}
				HX_STACK_LINE(11767)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(11767)
				(__this->length)++;
				HX_STACK_LINE(11767)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(11767)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_ToiEvent_obj,insert,return )

Void ZNPList_ZPP_ToiEvent_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_ToiEvent x){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::addAll","zpp_nape/util/Lists.hx",11749);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(11750)
		{
		}
		HX_STACK_LINE(11758)
		{
			HX_STACK_LINE(11759)
			::zpp_nape::util::ZNPNode_ZPP_ToiEvent cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(11760)
			while(((cx_ite != null()))){
				HX_STACK_LINE(11761)
				::zpp_nape::geom::ZPP_ToiEvent i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(11762)
				this->add(i);
				HX_STACK_LINE(11763)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,addAll,(void))

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::inlined_add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::inlined_add","zpp_nape/util/Lists.hx",11712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(11713)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11721);
			{
				HX_STACK_LINE(11722)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(11723)
				{
					HX_STACK_LINE(11724)
					if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
						HX_STACK_LINE(11724)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
					}
					else{
						HX_STACK_LINE(11731)
						ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
						HX_STACK_LINE(11732)
						::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
						HX_STACK_LINE(11733)
						ret->next = null();
					}
					HX_STACK_LINE(11738)
					Dynamic();
				}
				HX_STACK_LINE(11740)
				ret->elt = o;
				HX_STACK_LINE(11741)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(11721)
	::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(11743)
	temp->next = this->head;
	HX_STACK_LINE(11744)
	this->head = temp;
	HX_STACK_LINE(11745)
	this->modified = true;
	HX_STACK_LINE(11746)
	(this->length)++;
	HX_STACK_LINE(11747)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,inlined_add,return )

::zpp_nape::geom::ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::add( ::zpp_nape::geom::ZPP_ToiEvent o){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::add","zpp_nape/util/Lists.hx",11710);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o,::zpp_nape::util::ZNPList_ZPP_ToiEvent_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11710);
			{
				HX_STACK_LINE(11710)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_ToiEvent Block( ::zpp_nape::geom::ZPP_ToiEvent &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",11710);
						{
							HX_STACK_LINE(11710)
							::zpp_nape::util::ZNPNode_ZPP_ToiEvent ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(11710)
							{
								HX_STACK_LINE(11710)
								if (((::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool == null()))){
									HX_STACK_LINE(11710)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::__new();
								}
								else{
									HX_STACK_LINE(11710)
									ret = ::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool;
									HX_STACK_LINE(11710)
									::zpp_nape::util::ZNPNode_ZPP_ToiEvent_obj::zpp_pool = ret->next;
									HX_STACK_LINE(11710)
									ret->next = null();
								}
								HX_STACK_LINE(11710)
								Dynamic();
							}
							HX_STACK_LINE(11710)
							ret->elt = o;
							HX_STACK_LINE(11710)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(11710)
				::zpp_nape::util::ZNPNode_ZPP_ToiEvent temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(11710)
				temp->next = __this->head;
				HX_STACK_LINE(11710)
				__this->head = temp;
				HX_STACK_LINE(11710)
				__this->modified = true;
				HX_STACK_LINE(11710)
				(__this->length)++;
				HX_STACK_LINE(11710)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(11710)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,add,return )

Void ZNPList_ZPP_ToiEvent_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_ToiEvent i){
{
		HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::setbegin","zpp_nape/util/Lists.hx",11705);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(11706)
		this->head = i;
		HX_STACK_LINE(11707)
		this->modified = true;
		HX_STACK_LINE(11708)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_ToiEvent_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_ToiEvent ZNPList_ZPP_ToiEvent_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_ToiEvent::begin","zpp_nape/util/Lists.hx",11700);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11700)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_ToiEvent_obj,begin,return )


ZNPList_ZPP_ToiEvent_obj::ZNPList_ZPP_ToiEvent_obj()
{
}

void ZNPList_ZPP_ToiEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_ToiEvent);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_ToiEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_ToiEvent_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_ToiEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_ToiEvent >(); return inValue; }
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

void ZNPList_ZPP_ToiEvent_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_ToiEvent_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_ToiEvent_obj::__mClass;

void ZNPList_ZPP_ToiEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_ToiEvent"), hx::TCanCast< ZNPList_ZPP_ToiEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_ToiEvent_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
