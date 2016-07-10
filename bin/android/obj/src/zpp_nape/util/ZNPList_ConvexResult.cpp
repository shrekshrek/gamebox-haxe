#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_ConvexResult
#include <nape/geom/ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ConvexResult
#include <zpp_nape/util/ZNPList_ConvexResult.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ConvexResult
#include <zpp_nape/util/ZNPNode_ConvexResult.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ConvexResult_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ConvexResult::new","zpp_nape/util/Lists.hx",12463);
{
	HX_STACK_LINE(12470)
	this->length = (int)0;
	HX_STACK_LINE(12469)
	this->pushmod = false;
	HX_STACK_LINE(12468)
	this->modified = false;
	HX_STACK_LINE(12464)
	this->head = null();
}
;
	return null();
}

ZNPList_ConvexResult_obj::~ZNPList_ConvexResult_obj() { }

Dynamic ZNPList_ConvexResult_obj::__CreateEmpty() { return  new ZNPList_ConvexResult_obj; }
hx::ObjectPtr< ZNPList_ConvexResult_obj > ZNPList_ConvexResult_obj::__new()
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > result = new ZNPList_ConvexResult_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ConvexResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ConvexResult_obj > result = new ZNPList_ConvexResult_obj();
	result->__construct();
	return result;}

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ConvexResult::at","zpp_nape/util/Lists.hx",12833);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12834)
	{
	}
	HX_STACK_LINE(12842)
	::zpp_nape::util::ZNPNode_ConvexResult it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12843)
	return (  (((it != null()))) ? ::nape::geom::ConvexResult(it->elt) : ::nape::geom::ConvexResult(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,at,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ConvexResult::iterator_at","zpp_nape/util/Lists.hx",12820);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12821)
	{
	}
	HX_STACK_LINE(12829)
	::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12830)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(12830)
		ret = ret->next;
	}
	HX_STACK_LINE(12831)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,iterator_at,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::back( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::back","zpp_nape/util/Lists.hx",12811);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12812)
	::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12813)
	::zpp_nape::util::ZNPNode_ConvexResult cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12814)
	while(((cur != null()))){
		HX_STACK_LINE(12815)
		ret = cur;
		HX_STACK_LINE(12816)
		cur = cur->next;
	}
	HX_STACK_LINE(12818)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,back,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::front( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::front","zpp_nape/util/Lists.hx",12811);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12811)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,front,return )

bool ZNPList_ConvexResult_obj::inlined_has( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_has","zpp_nape/util/Lists.hx",12781);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12782)
	{
	}
	HX_STACK_LINE(12790)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12791)
	{
		HX_STACK_LINE(12792)
		ret = false;
		HX_STACK_LINE(12793)
		{
			HX_STACK_LINE(12794)
			::zpp_nape::util::ZNPNode_ConvexResult cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12795)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12796)
				::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12797)
				if (((npite == obj))){
					HX_STACK_LINE(12799)
					ret = true;
					HX_STACK_LINE(12800)
					break;
				}
				HX_STACK_LINE(12803)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12807)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_has,return )

bool ZNPList_ConvexResult_obj::has( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::has","zpp_nape/util/Lists.hx",12779);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::nape::geom::ConvexResult &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12779);
			{
				HX_STACK_LINE(12779)
				{
				}
				HX_STACK_LINE(12779)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12779)
				{
					HX_STACK_LINE(12779)
					ret = false;
					HX_STACK_LINE(12779)
					{
						HX_STACK_LINE(12779)
						::zpp_nape::util::ZNPNode_ConvexResult cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(12779)
						while(((cx_ite != null()))){
							HX_STACK_LINE(12779)
							::nape::geom::ConvexResult npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(12779)
							if (((npite == obj))){
								HX_STACK_LINE(12779)
								ret = true;
								HX_STACK_LINE(12779)
								break;
							}
							HX_STACK_LINE(12779)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(12779)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12779)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,has,return )

int ZNPList_ConvexResult_obj::size( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::size","zpp_nape/util/Lists.hx",12779);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12779)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,size,return )

bool ZNPList_ConvexResult_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::empty","zpp_nape/util/Lists.hx",12777);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12777)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,empty,return )

Void ZNPList_ConvexResult_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::reverse","zpp_nape/util/Lists.hx",12762);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12763)
		::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12764)
		::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12765)
		while(((cur != null()))){
			HX_STACK_LINE(12766)
			::zpp_nape::util::ZNPNode_ConvexResult nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12767)
			cur->next = pre;
			HX_STACK_LINE(12768)
			this->head = cur;
			HX_STACK_LINE(12769)
			pre = cur;
			HX_STACK_LINE(12770)
			cur = nx;
		}
		HX_STACK_LINE(12772)
		this->modified = true;
		HX_STACK_LINE(12773)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,reverse,(void))

Void ZNPList_ConvexResult_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_clear","zpp_nape/util/Lists.hx",12756);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12758)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12758)
			{
			}
			HX_STACK_LINE(12758)
			::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12758)
			this->head = ret->next;
			HX_STACK_LINE(12758)
			{
			}
			HX_STACK_LINE(12758)
			{
				HX_STACK_LINE(12758)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12758)
				{
				}
				HX_STACK_LINE(12758)
				o->elt = null();
				HX_STACK_LINE(12758)
				o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
				HX_STACK_LINE(12758)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12758)
			if (((this->head == null()))){
				HX_STACK_LINE(12758)
				this->pushmod = true;
			}
			HX_STACK_LINE(12758)
			this->modified = true;
			HX_STACK_LINE(12758)
			(this->length)--;
		}
		HX_STACK_LINE(12759)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_clear,(void))

Void ZNPList_ConvexResult_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::clear","zpp_nape/util/Lists.hx",12754);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12754)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12754)
			{
			}
			HX_STACK_LINE(12754)
			::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12754)
			this->head = ret->next;
			HX_STACK_LINE(12754)
			{
			}
			HX_STACK_LINE(12754)
			{
				HX_STACK_LINE(12754)
				::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12754)
				{
				}
				HX_STACK_LINE(12754)
				o->elt = null();
				HX_STACK_LINE(12754)
				o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
				HX_STACK_LINE(12754)
				::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12754)
			if (((this->head == null()))){
				HX_STACK_LINE(12754)
				this->pushmod = true;
			}
			HX_STACK_LINE(12754)
			this->modified = true;
			HX_STACK_LINE(12754)
			(this->length)--;
		}
		HX_STACK_LINE(12754)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,clear,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::splice( ::zpp_nape::util::ZNPNode_ConvexResult pre,int n){
	HX_STACK_PUSH("ZNPList_ConvexResult::splice","zpp_nape/util/Lists.hx",12750);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(12751)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(12751)
		this->erase(pre);
	}
	HX_STACK_LINE(12752)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,splice,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_erase","zpp_nape/util/Lists.hx",12704);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(12705)
	{
	}
	HX_STACK_LINE(12713)
	::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12714)
	::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12715)
	if (((pre == null()))){
		HX_STACK_LINE(12716)
		old = this->head;
		HX_STACK_LINE(12717)
		ret = old->next;
		HX_STACK_LINE(12718)
		this->head = ret;
		HX_STACK_LINE(12719)
		if (((this->head == null()))){
			HX_STACK_LINE(12719)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12722)
		old = pre->next;
		HX_STACK_LINE(12723)
		ret = old->next;
		HX_STACK_LINE(12724)
		pre->next = ret;
		HX_STACK_LINE(12725)
		if (((ret == null()))){
			HX_STACK_LINE(12725)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12727)
	{
	}
	HX_STACK_LINE(12728)
	{
		HX_STACK_LINE(12729)
		::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12730)
		{
		}
		HX_STACK_LINE(12738)
		o->elt = null();
		HX_STACK_LINE(12739)
		o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
		HX_STACK_LINE(12740)
		::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12745)
	this->modified = true;
	HX_STACK_LINE(12746)
	(this->length)--;
	HX_STACK_LINE(12747)
	this->pushmod = true;
	HX_STACK_LINE(12748)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::erase( ::zpp_nape::util::ZNPNode_ConvexResult pre){
	HX_STACK_PUSH("ZNPList_ConvexResult::erase","zpp_nape/util/Lists.hx",12702);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::zpp_nape::util::ZNPNode_ConvexResult &pre,::zpp_nape::util::ZNPList_ConvexResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12702);
			{
				HX_STACK_LINE(12702)
				{
				}
				HX_STACK_LINE(12702)
				::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12702)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12702)
				if (((pre == null()))){
					HX_STACK_LINE(12702)
					old = __this->head;
					HX_STACK_LINE(12702)
					ret = old->next;
					HX_STACK_LINE(12702)
					__this->head = ret;
					HX_STACK_LINE(12702)
					if (((__this->head == null()))){
						HX_STACK_LINE(12702)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12702)
					old = pre->next;
					HX_STACK_LINE(12702)
					ret = old->next;
					HX_STACK_LINE(12702)
					pre->next = ret;
					HX_STACK_LINE(12702)
					if (((ret == null()))){
						HX_STACK_LINE(12702)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(12702)
				{
				}
				HX_STACK_LINE(12702)
				{
					HX_STACK_LINE(12702)
					::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12702)
					{
					}
					HX_STACK_LINE(12702)
					o->elt = null();
					HX_STACK_LINE(12702)
					o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
					HX_STACK_LINE(12702)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12702)
				__this->modified = true;
				HX_STACK_LINE(12702)
				(__this->length)--;
				HX_STACK_LINE(12702)
				__this->pushmod = true;
				HX_STACK_LINE(12702)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12702)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,erase,return )

bool ZNPList_ConvexResult_obj::inlined_try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_try_remove","zpp_nape/util/Lists.hx",12679);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12680)
	{
	}
	HX_STACK_LINE(12688)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12689)
	::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12690)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12691)
	while(((cur != null()))){
		HX_STACK_LINE(12692)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12693)
			{
				HX_STACK_LINE(12693)
				{
				}
				HX_STACK_LINE(12693)
				::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12693)
				::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12693)
				if (((pre == null()))){
					HX_STACK_LINE(12693)
					old = this->head;
					HX_STACK_LINE(12693)
					ret1 = old->next;
					HX_STACK_LINE(12693)
					this->head = ret1;
					HX_STACK_LINE(12693)
					if (((this->head == null()))){
						HX_STACK_LINE(12693)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12693)
					old = pre->next;
					HX_STACK_LINE(12693)
					ret1 = old->next;
					HX_STACK_LINE(12693)
					pre->next = ret1;
					HX_STACK_LINE(12693)
					if (((ret1 == null()))){
						HX_STACK_LINE(12693)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12693)
				{
				}
				HX_STACK_LINE(12693)
				{
					HX_STACK_LINE(12693)
					::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12693)
					{
					}
					HX_STACK_LINE(12693)
					o->elt = null();
					HX_STACK_LINE(12693)
					o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
					HX_STACK_LINE(12693)
					::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12693)
				this->modified = true;
				HX_STACK_LINE(12693)
				(this->length)--;
				HX_STACK_LINE(12693)
				this->pushmod = true;
				HX_STACK_LINE(12693)
				ret1;
			}
			HX_STACK_LINE(12694)
			ret = true;
			HX_STACK_LINE(12695)
			break;
		}
		HX_STACK_LINE(12697)
		pre = cur;
		HX_STACK_LINE(12698)
		cur = cur->next;
	}
	HX_STACK_LINE(12700)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_try_remove,return )

Void ZNPList_ConvexResult_obj::inlined_remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_remove","zpp_nape/util/Lists.hx",12666);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12667)
		{
		}
		HX_STACK_LINE(12675)
		{
			HX_STACK_LINE(12675)
			{
			}
			HX_STACK_LINE(12675)
			::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12675)
			::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12675)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12675)
			while(((cur != null()))){
				HX_STACK_LINE(12675)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12675)
					{
						HX_STACK_LINE(12675)
						{
						}
						HX_STACK_LINE(12675)
						::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12675)
						::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12675)
						if (((pre == null()))){
							HX_STACK_LINE(12675)
							old = this->head;
							HX_STACK_LINE(12675)
							ret1 = old->next;
							HX_STACK_LINE(12675)
							this->head = ret1;
							HX_STACK_LINE(12675)
							if (((this->head == null()))){
								HX_STACK_LINE(12675)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12675)
							old = pre->next;
							HX_STACK_LINE(12675)
							ret1 = old->next;
							HX_STACK_LINE(12675)
							pre->next = ret1;
							HX_STACK_LINE(12675)
							if (((ret1 == null()))){
								HX_STACK_LINE(12675)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12675)
						{
						}
						HX_STACK_LINE(12675)
						{
							HX_STACK_LINE(12675)
							::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12675)
							{
							}
							HX_STACK_LINE(12675)
							o->elt = null();
							HX_STACK_LINE(12675)
							o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
							HX_STACK_LINE(12675)
							::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12675)
						this->modified = true;
						HX_STACK_LINE(12675)
						(this->length)--;
						HX_STACK_LINE(12675)
						this->pushmod = true;
						HX_STACK_LINE(12675)
						ret1;
					}
					HX_STACK_LINE(12675)
					ret = true;
					HX_STACK_LINE(12675)
					break;
				}
				HX_STACK_LINE(12675)
				pre = cur;
				HX_STACK_LINE(12675)
				cur = cur->next;
			}
			HX_STACK_LINE(12675)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_remove,(void))

bool ZNPList_ConvexResult_obj::try_remove( ::nape::geom::ConvexResult obj){
	HX_STACK_PUSH("ZNPList_ConvexResult::try_remove","zpp_nape/util/Lists.hx",12641);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12642)
	{
	}
	HX_STACK_LINE(12650)
	::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12651)
	::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12652)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12653)
	while(((cur != null()))){
		HX_STACK_LINE(12654)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12655)
			this->erase(pre);
			HX_STACK_LINE(12656)
			ret = true;
			HX_STACK_LINE(12657)
			break;
		}
		HX_STACK_LINE(12659)
		pre = cur;
		HX_STACK_LINE(12660)
		cur = cur->next;
	}
	HX_STACK_LINE(12662)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,try_remove,return )

Void ZNPList_ConvexResult_obj::remove( ::nape::geom::ConvexResult obj){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::remove","zpp_nape/util/Lists.hx",12630);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12631)
		{
		}
		HX_STACK_LINE(12639)
		{
			HX_STACK_LINE(12639)
			{
			}
			HX_STACK_LINE(12639)
			::zpp_nape::util::ZNPNode_ConvexResult pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12639)
			::zpp_nape::util::ZNPNode_ConvexResult cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12639)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12639)
			while(((cur != null()))){
				HX_STACK_LINE(12639)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12639)
					{
						HX_STACK_LINE(12639)
						{
						}
						HX_STACK_LINE(12639)
						::zpp_nape::util::ZNPNode_ConvexResult old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12639)
						::zpp_nape::util::ZNPNode_ConvexResult ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12639)
						if (((pre == null()))){
							HX_STACK_LINE(12639)
							old = this->head;
							HX_STACK_LINE(12639)
							ret1 = old->next;
							HX_STACK_LINE(12639)
							this->head = ret1;
							HX_STACK_LINE(12639)
							if (((this->head == null()))){
								HX_STACK_LINE(12639)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12639)
							old = pre->next;
							HX_STACK_LINE(12639)
							ret1 = old->next;
							HX_STACK_LINE(12639)
							pre->next = ret1;
							HX_STACK_LINE(12639)
							if (((ret1 == null()))){
								HX_STACK_LINE(12639)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12639)
						{
						}
						HX_STACK_LINE(12639)
						{
							HX_STACK_LINE(12639)
							::zpp_nape::util::ZNPNode_ConvexResult o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12639)
							{
							}
							HX_STACK_LINE(12639)
							o->elt = null();
							HX_STACK_LINE(12639)
							o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
							HX_STACK_LINE(12639)
							::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12639)
						this->modified = true;
						HX_STACK_LINE(12639)
						(this->length)--;
						HX_STACK_LINE(12639)
						this->pushmod = true;
						HX_STACK_LINE(12639)
						ret1;
					}
					HX_STACK_LINE(12639)
					ret = true;
					HX_STACK_LINE(12639)
					break;
				}
				HX_STACK_LINE(12639)
				pre = cur;
				HX_STACK_LINE(12639)
				cur = cur->next;
			}
			HX_STACK_LINE(12639)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,remove,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_pop_unsafe","zpp_nape/util/Lists.hx",12617);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12618)
	{
	}
	HX_STACK_LINE(12626)
	::nape::geom::ConvexResult ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12627)
	this->pop();
	HX_STACK_LINE(12628)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop_unsafe,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::pop_unsafe","zpp_nape/util/Lists.hx",12615);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::geom::ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12615);
			{
				HX_STACK_LINE(12615)
				{
				}
				HX_STACK_LINE(12615)
				::nape::geom::ConvexResult ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12615)
				__this->pop();
				HX_STACK_LINE(12615)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12615)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop_unsafe,return )

Void ZNPList_ConvexResult_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::inlined_pop","zpp_nape/util/Lists.hx",12582);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12583)
		{
		}
		HX_STACK_LINE(12591)
		::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12592)
		this->head = ret->next;
		HX_STACK_LINE(12593)
		{
		}
		HX_STACK_LINE(12594)
		{
			HX_STACK_LINE(12595)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12596)
			{
			}
			HX_STACK_LINE(12604)
			o->elt = null();
			HX_STACK_LINE(12605)
			o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
			HX_STACK_LINE(12606)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12611)
		if (((this->head == null()))){
			HX_STACK_LINE(12611)
			this->pushmod = true;
		}
		HX_STACK_LINE(12612)
		this->modified = true;
		HX_STACK_LINE(12613)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,inlined_pop,(void))

Void ZNPList_ConvexResult_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::pop","zpp_nape/util/Lists.hx",12580);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12580)
		{
		}
		HX_STACK_LINE(12580)
		::zpp_nape::util::ZNPNode_ConvexResult ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12580)
		this->head = ret->next;
		HX_STACK_LINE(12580)
		{
		}
		HX_STACK_LINE(12580)
		{
			HX_STACK_LINE(12580)
			::zpp_nape::util::ZNPNode_ConvexResult o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12580)
			{
			}
			HX_STACK_LINE(12580)
			o->elt = null();
			HX_STACK_LINE(12580)
			o->next = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
			HX_STACK_LINE(12580)
			::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12580)
		if (((this->head == null()))){
			HX_STACK_LINE(12580)
			this->pushmod = true;
		}
		HX_STACK_LINE(12580)
		this->modified = true;
		HX_STACK_LINE(12580)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,pop,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_insert","zpp_nape/util/Lists.hx",12537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12538)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12546);
			{
				HX_STACK_LINE(12547)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12548)
				{
					HX_STACK_LINE(12549)
					if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(12549)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
					}
					else{
						HX_STACK_LINE(12556)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(12557)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12558)
						ret->next = null();
					}
					HX_STACK_LINE(12563)
					Dynamic();
				}
				HX_STACK_LINE(12565)
				ret->elt = o;
				HX_STACK_LINE(12566)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12546)
	::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12568)
	if (((cur == null()))){
		HX_STACK_LINE(12569)
		temp->next = this->head;
		HX_STACK_LINE(12570)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12573)
		temp->next = cur->next;
		HX_STACK_LINE(12574)
		cur->next = temp;
	}
	HX_STACK_LINE(12576)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(12577)
	(this->length)++;
	HX_STACK_LINE(12578)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::insert( ::zpp_nape::util::ZNPNode_ConvexResult cur,::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::insert","zpp_nape/util/Lists.hx",12535);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::zpp_nape::util::ZNPList_ConvexResult_obj *__this,::nape::geom::ConvexResult &o,::zpp_nape::util::ZNPNode_ConvexResult &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12535);
			{
				HX_STACK_LINE(12535)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12535);
						{
							HX_STACK_LINE(12535)
							::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12535)
							{
								HX_STACK_LINE(12535)
								if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(12535)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
								}
								else{
									HX_STACK_LINE(12535)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
									HX_STACK_LINE(12535)
									::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12535)
									ret->next = null();
								}
								HX_STACK_LINE(12535)
								Dynamic();
							}
							HX_STACK_LINE(12535)
							ret->elt = o;
							HX_STACK_LINE(12535)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12535)
				::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12535)
				if (((cur == null()))){
					HX_STACK_LINE(12535)
					temp->next = __this->head;
					HX_STACK_LINE(12535)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(12535)
					temp->next = cur->next;
					HX_STACK_LINE(12535)
					cur->next = temp;
				}
				HX_STACK_LINE(12535)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(12535)
				(__this->length)++;
				HX_STACK_LINE(12535)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(12535)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ConvexResult_obj,insert,return )

Void ZNPList_ConvexResult_obj::addAll( ::zpp_nape::util::ZNPList_ConvexResult x){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::addAll","zpp_nape/util/Lists.hx",12517);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(12518)
		{
		}
		HX_STACK_LINE(12526)
		{
			HX_STACK_LINE(12527)
			::zpp_nape::util::ZNPNode_ConvexResult cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12528)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12529)
				::nape::geom::ConvexResult i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(12530)
				this->add(i);
				HX_STACK_LINE(12531)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,addAll,(void))

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::inlined_add( ::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::inlined_add","zpp_nape/util/Lists.hx",12480);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12481)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12489);
			{
				HX_STACK_LINE(12490)
				::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12491)
				{
					HX_STACK_LINE(12492)
					if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
						HX_STACK_LINE(12492)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
					}
					else{
						HX_STACK_LINE(12499)
						ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
						HX_STACK_LINE(12500)
						::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12501)
						ret->next = null();
					}
					HX_STACK_LINE(12506)
					Dynamic();
				}
				HX_STACK_LINE(12508)
				ret->elt = o;
				HX_STACK_LINE(12509)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12489)
	::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12511)
	temp->next = this->head;
	HX_STACK_LINE(12512)
	this->head = temp;
	HX_STACK_LINE(12513)
	this->modified = true;
	HX_STACK_LINE(12514)
	(this->length)++;
	HX_STACK_LINE(12515)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,inlined_add,return )

::nape::geom::ConvexResult ZNPList_ConvexResult_obj::add( ::nape::geom::ConvexResult o){
	HX_STACK_PUSH("ZNPList_ConvexResult::add","zpp_nape/util/Lists.hx",12478);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::nape::geom::ConvexResult Block( ::nape::geom::ConvexResult &o,::zpp_nape::util::ZNPList_ConvexResult_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12478);
			{
				HX_STACK_LINE(12478)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ConvexResult Block( ::nape::geom::ConvexResult &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12478);
						{
							HX_STACK_LINE(12478)
							::zpp_nape::util::ZNPNode_ConvexResult ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12478)
							{
								HX_STACK_LINE(12478)
								if (((::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool == null()))){
									HX_STACK_LINE(12478)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::__new();
								}
								else{
									HX_STACK_LINE(12478)
									ret = ::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool;
									HX_STACK_LINE(12478)
									::zpp_nape::util::ZNPNode_ConvexResult_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12478)
									ret->next = null();
								}
								HX_STACK_LINE(12478)
								Dynamic();
							}
							HX_STACK_LINE(12478)
							ret->elt = o;
							HX_STACK_LINE(12478)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12478)
				::zpp_nape::util::ZNPNode_ConvexResult temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12478)
				temp->next = __this->head;
				HX_STACK_LINE(12478)
				__this->head = temp;
				HX_STACK_LINE(12478)
				__this->modified = true;
				HX_STACK_LINE(12478)
				(__this->length)++;
				HX_STACK_LINE(12478)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(12478)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,add,return )

Void ZNPList_ConvexResult_obj::setbegin( ::zpp_nape::util::ZNPNode_ConvexResult i){
{
		HX_STACK_PUSH("ZNPList_ConvexResult::setbegin","zpp_nape/util/Lists.hx",12473);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(12474)
		this->head = i;
		HX_STACK_LINE(12475)
		this->modified = true;
		HX_STACK_LINE(12476)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ConvexResult_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ConvexResult ZNPList_ConvexResult_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ConvexResult::begin","zpp_nape/util/Lists.hx",12468);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12468)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ConvexResult_obj,begin,return )


ZNPList_ConvexResult_obj::ZNPList_ConvexResult_obj()
{
}

void ZNPList_ConvexResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ConvexResult);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ConvexResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ConvexResult_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ConvexResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ConvexResult >(); return inValue; }
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

void ZNPList_ConvexResult_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ConvexResult_obj::__mClass,"__mClass");
};

Class ZNPList_ConvexResult_obj::__mClass;

void ZNPList_ConvexResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ConvexResult"), hx::TCanCast< ZNPList_ConvexResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ConvexResult_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
