#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionGroup
#include <zpp_nape/dynamics/ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPList_ZPP_InteractionGroup.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_InteractionGroup
#include <zpp_nape/util/ZNPNode_ZPP_InteractionGroup.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_InteractionGroup_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::new","zpp_nape/util/Lists.hx",12079);
{
	HX_STACK_LINE(12086)
	this->length = (int)0;
	HX_STACK_LINE(12085)
	this->pushmod = false;
	HX_STACK_LINE(12084)
	this->modified = false;
	HX_STACK_LINE(12080)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_InteractionGroup_obj::~ZNPList_ZPP_InteractionGroup_obj() { }

Dynamic ZNPList_ZPP_InteractionGroup_obj::__CreateEmpty() { return  new ZNPList_ZPP_InteractionGroup_obj; }
hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > ZNPList_ZPP_InteractionGroup_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > result = new ZNPList_ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_InteractionGroup_obj > result = new ZNPList_ZPP_InteractionGroup_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::at","zpp_nape/util/Lists.hx",12449);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12450)
	{
	}
	HX_STACK_LINE(12458)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(12459)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_InteractionGroup(it->elt) : ::zpp_nape::dynamics::ZPP_InteractionGroup(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::iterator_at","zpp_nape/util/Lists.hx",12436);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(12437)
	{
	}
	HX_STACK_LINE(12445)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12446)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(12446)
		ret = ret->next;
	}
	HX_STACK_LINE(12447)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::back","zpp_nape/util/Lists.hx",12427);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12428)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12429)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12430)
	while(((cur != null()))){
		HX_STACK_LINE(12431)
		ret = cur;
		HX_STACK_LINE(12432)
		cur = cur->next;
	}
	HX_STACK_LINE(12434)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,back,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::front","zpp_nape/util/Lists.hx",12427);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12427)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,front,return )

bool ZNPList_ZPP_InteractionGroup_obj::inlined_has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_has","zpp_nape/util/Lists.hx",12397);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12398)
	{
	}
	HX_STACK_LINE(12406)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12407)
	{
		HX_STACK_LINE(12408)
		ret = false;
		HX_STACK_LINE(12409)
		{
			HX_STACK_LINE(12410)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12411)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12412)
				::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(12413)
				if (((npite == obj))){
					HX_STACK_LINE(12415)
					ret = true;
					HX_STACK_LINE(12416)
					break;
				}
				HX_STACK_LINE(12419)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(12423)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_has,return )

bool ZNPList_ZPP_InteractionGroup_obj::has( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::has","zpp_nape/util/Lists.hx",12395);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj *__this,::zpp_nape::dynamics::ZPP_InteractionGroup &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12395);
			{
				HX_STACK_LINE(12395)
				{
				}
				HX_STACK_LINE(12395)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12395)
				{
					HX_STACK_LINE(12395)
					ret = false;
					HX_STACK_LINE(12395)
					{
						HX_STACK_LINE(12395)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(12395)
						while(((cx_ite != null()))){
							HX_STACK_LINE(12395)
							::zpp_nape::dynamics::ZPP_InteractionGroup npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(12395)
							if (((npite == obj))){
								HX_STACK_LINE(12395)
								ret = true;
								HX_STACK_LINE(12395)
								break;
							}
							HX_STACK_LINE(12395)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(12395)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12395)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,has,return )

int ZNPList_ZPP_InteractionGroup_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::size","zpp_nape/util/Lists.hx",12395);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12395)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,size,return )

bool ZNPList_ZPP_InteractionGroup_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::empty","zpp_nape/util/Lists.hx",12393);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12393)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,empty,return )

Void ZNPList_ZPP_InteractionGroup_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::reverse","zpp_nape/util/Lists.hx",12378);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12379)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(12380)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(12381)
		while(((cur != null()))){
			HX_STACK_LINE(12382)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(12383)
			cur->next = pre;
			HX_STACK_LINE(12384)
			this->head = cur;
			HX_STACK_LINE(12385)
			pre = cur;
			HX_STACK_LINE(12386)
			cur = nx;
		}
		HX_STACK_LINE(12388)
		this->modified = true;
		HX_STACK_LINE(12389)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,reverse,(void))

Void ZNPList_ZPP_InteractionGroup_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_clear","zpp_nape/util/Lists.hx",12372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12374)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12374)
			{
			}
			HX_STACK_LINE(12374)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12374)
			this->head = ret->next;
			HX_STACK_LINE(12374)
			{
			}
			HX_STACK_LINE(12374)
			{
				HX_STACK_LINE(12374)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12374)
				{
				}
				HX_STACK_LINE(12374)
				o->elt = null();
				HX_STACK_LINE(12374)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(12374)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12374)
			if (((this->head == null()))){
				HX_STACK_LINE(12374)
				this->pushmod = true;
			}
			HX_STACK_LINE(12374)
			this->modified = true;
			HX_STACK_LINE(12374)
			(this->length)--;
		}
		HX_STACK_LINE(12375)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_clear,(void))

Void ZNPList_ZPP_InteractionGroup_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::clear","zpp_nape/util/Lists.hx",12370);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12370)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(12370)
			{
			}
			HX_STACK_LINE(12370)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12370)
			this->head = ret->next;
			HX_STACK_LINE(12370)
			{
			}
			HX_STACK_LINE(12370)
			{
				HX_STACK_LINE(12370)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(12370)
				{
				}
				HX_STACK_LINE(12370)
				o->elt = null();
				HX_STACK_LINE(12370)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
				HX_STACK_LINE(12370)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
			}
			HX_STACK_LINE(12370)
			if (((this->head == null()))){
				HX_STACK_LINE(12370)
				this->pushmod = true;
			}
			HX_STACK_LINE(12370)
			this->modified = true;
			HX_STACK_LINE(12370)
			(this->length)--;
		}
		HX_STACK_LINE(12370)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::splice","zpp_nape/util/Lists.hx",12366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(12367)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(12367)
		this->erase(pre);
	}
	HX_STACK_LINE(12368)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_erase","zpp_nape/util/Lists.hx",12320);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(12321)
	{
	}
	HX_STACK_LINE(12329)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(12330)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12331)
	if (((pre == null()))){
		HX_STACK_LINE(12332)
		old = this->head;
		HX_STACK_LINE(12333)
		ret = old->next;
		HX_STACK_LINE(12334)
		this->head = ret;
		HX_STACK_LINE(12335)
		if (((this->head == null()))){
			HX_STACK_LINE(12335)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(12338)
		old = pre->next;
		HX_STACK_LINE(12339)
		ret = old->next;
		HX_STACK_LINE(12340)
		pre->next = ret;
		HX_STACK_LINE(12341)
		if (((ret == null()))){
			HX_STACK_LINE(12341)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(12343)
	{
	}
	HX_STACK_LINE(12344)
	{
		HX_STACK_LINE(12345)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(12346)
		{
		}
		HX_STACK_LINE(12354)
		o->elt = null();
		HX_STACK_LINE(12355)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
		HX_STACK_LINE(12356)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
	}
	HX_STACK_LINE(12361)
	this->modified = true;
	HX_STACK_LINE(12362)
	(this->length)--;
	HX_STACK_LINE(12363)
	this->pushmod = true;
	HX_STACK_LINE(12364)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::erase","zpp_nape/util/Lists.hx",12318);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup &pre,::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12318);
			{
				HX_STACK_LINE(12318)
				{
				}
				HX_STACK_LINE(12318)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12318)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12318)
				if (((pre == null()))){
					HX_STACK_LINE(12318)
					old = __this->head;
					HX_STACK_LINE(12318)
					ret = old->next;
					HX_STACK_LINE(12318)
					__this->head = ret;
					HX_STACK_LINE(12318)
					if (((__this->head == null()))){
						HX_STACK_LINE(12318)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12318)
					old = pre->next;
					HX_STACK_LINE(12318)
					ret = old->next;
					HX_STACK_LINE(12318)
					pre->next = ret;
					HX_STACK_LINE(12318)
					if (((ret == null()))){
						HX_STACK_LINE(12318)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(12318)
				{
				}
				HX_STACK_LINE(12318)
				{
					HX_STACK_LINE(12318)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12318)
					{
					}
					HX_STACK_LINE(12318)
					o->elt = null();
					HX_STACK_LINE(12318)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
					HX_STACK_LINE(12318)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12318)
				__this->modified = true;
				HX_STACK_LINE(12318)
				(__this->length)--;
				HX_STACK_LINE(12318)
				__this->pushmod = true;
				HX_STACK_LINE(12318)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12318)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,erase,return )

bool ZNPList_ZPP_InteractionGroup_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_try_remove","zpp_nape/util/Lists.hx",12295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12296)
	{
	}
	HX_STACK_LINE(12304)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12305)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12306)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12307)
	while(((cur != null()))){
		HX_STACK_LINE(12308)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12309)
			{
				HX_STACK_LINE(12309)
				{
				}
				HX_STACK_LINE(12309)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(12309)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(12309)
				if (((pre == null()))){
					HX_STACK_LINE(12309)
					old = this->head;
					HX_STACK_LINE(12309)
					ret1 = old->next;
					HX_STACK_LINE(12309)
					this->head = ret1;
					HX_STACK_LINE(12309)
					if (((this->head == null()))){
						HX_STACK_LINE(12309)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(12309)
					old = pre->next;
					HX_STACK_LINE(12309)
					ret1 = old->next;
					HX_STACK_LINE(12309)
					pre->next = ret1;
					HX_STACK_LINE(12309)
					if (((ret1 == null()))){
						HX_STACK_LINE(12309)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(12309)
				{
				}
				HX_STACK_LINE(12309)
				{
					HX_STACK_LINE(12309)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(12309)
					{
					}
					HX_STACK_LINE(12309)
					o->elt = null();
					HX_STACK_LINE(12309)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
					HX_STACK_LINE(12309)
					::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
				}
				HX_STACK_LINE(12309)
				this->modified = true;
				HX_STACK_LINE(12309)
				(this->length)--;
				HX_STACK_LINE(12309)
				this->pushmod = true;
				HX_STACK_LINE(12309)
				ret1;
			}
			HX_STACK_LINE(12310)
			ret = true;
			HX_STACK_LINE(12311)
			break;
		}
		HX_STACK_LINE(12313)
		pre = cur;
		HX_STACK_LINE(12314)
		cur = cur->next;
	}
	HX_STACK_LINE(12316)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_try_remove,return )

Void ZNPList_ZPP_InteractionGroup_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_remove","zpp_nape/util/Lists.hx",12282);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12283)
		{
		}
		HX_STACK_LINE(12291)
		{
			HX_STACK_LINE(12291)
			{
			}
			HX_STACK_LINE(12291)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12291)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12291)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12291)
			while(((cur != null()))){
				HX_STACK_LINE(12291)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12291)
					{
						HX_STACK_LINE(12291)
						{
						}
						HX_STACK_LINE(12291)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12291)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12291)
						if (((pre == null()))){
							HX_STACK_LINE(12291)
							old = this->head;
							HX_STACK_LINE(12291)
							ret1 = old->next;
							HX_STACK_LINE(12291)
							this->head = ret1;
							HX_STACK_LINE(12291)
							if (((this->head == null()))){
								HX_STACK_LINE(12291)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12291)
							old = pre->next;
							HX_STACK_LINE(12291)
							ret1 = old->next;
							HX_STACK_LINE(12291)
							pre->next = ret1;
							HX_STACK_LINE(12291)
							if (((ret1 == null()))){
								HX_STACK_LINE(12291)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12291)
						{
						}
						HX_STACK_LINE(12291)
						{
							HX_STACK_LINE(12291)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12291)
							{
							}
							HX_STACK_LINE(12291)
							o->elt = null();
							HX_STACK_LINE(12291)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
							HX_STACK_LINE(12291)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12291)
						this->modified = true;
						HX_STACK_LINE(12291)
						(this->length)--;
						HX_STACK_LINE(12291)
						this->pushmod = true;
						HX_STACK_LINE(12291)
						ret1;
					}
					HX_STACK_LINE(12291)
					ret = true;
					HX_STACK_LINE(12291)
					break;
				}
				HX_STACK_LINE(12291)
				pre = cur;
				HX_STACK_LINE(12291)
				cur = cur->next;
			}
			HX_STACK_LINE(12291)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_remove,(void))

bool ZNPList_ZPP_InteractionGroup_obj::try_remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::try_remove","zpp_nape/util/Lists.hx",12257);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(12258)
	{
	}
	HX_STACK_LINE(12266)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(12267)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(12268)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12269)
	while(((cur != null()))){
		HX_STACK_LINE(12270)
		if (((cur->elt == obj))){
			HX_STACK_LINE(12271)
			this->erase(pre);
			HX_STACK_LINE(12272)
			ret = true;
			HX_STACK_LINE(12273)
			break;
		}
		HX_STACK_LINE(12275)
		pre = cur;
		HX_STACK_LINE(12276)
		cur = cur->next;
	}
	HX_STACK_LINE(12278)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,try_remove,return )

Void ZNPList_ZPP_InteractionGroup_obj::remove( ::zpp_nape::dynamics::ZPP_InteractionGroup obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::remove","zpp_nape/util/Lists.hx",12246);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(12247)
		{
		}
		HX_STACK_LINE(12255)
		{
			HX_STACK_LINE(12255)
			{
			}
			HX_STACK_LINE(12255)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(12255)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(12255)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(12255)
			while(((cur != null()))){
				HX_STACK_LINE(12255)
				if (((cur->elt == obj))){
					HX_STACK_LINE(12255)
					{
						HX_STACK_LINE(12255)
						{
						}
						HX_STACK_LINE(12255)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(12255)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(12255)
						if (((pre == null()))){
							HX_STACK_LINE(12255)
							old = this->head;
							HX_STACK_LINE(12255)
							ret1 = old->next;
							HX_STACK_LINE(12255)
							this->head = ret1;
							HX_STACK_LINE(12255)
							if (((this->head == null()))){
								HX_STACK_LINE(12255)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(12255)
							old = pre->next;
							HX_STACK_LINE(12255)
							ret1 = old->next;
							HX_STACK_LINE(12255)
							pre->next = ret1;
							HX_STACK_LINE(12255)
							if (((ret1 == null()))){
								HX_STACK_LINE(12255)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(12255)
						{
						}
						HX_STACK_LINE(12255)
						{
							HX_STACK_LINE(12255)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(12255)
							{
							}
							HX_STACK_LINE(12255)
							o->elt = null();
							HX_STACK_LINE(12255)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
							HX_STACK_LINE(12255)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
						}
						HX_STACK_LINE(12255)
						this->modified = true;
						HX_STACK_LINE(12255)
						(this->length)--;
						HX_STACK_LINE(12255)
						this->pushmod = true;
						HX_STACK_LINE(12255)
						ret1;
					}
					HX_STACK_LINE(12255)
					ret = true;
					HX_STACK_LINE(12255)
					break;
				}
				HX_STACK_LINE(12255)
				pre = cur;
				HX_STACK_LINE(12255)
				cur = cur->next;
			}
			HX_STACK_LINE(12255)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,remove,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_pop_unsafe","zpp_nape/util/Lists.hx",12233);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12234)
	{
	}
	HX_STACK_LINE(12242)
	::zpp_nape::dynamics::ZPP_InteractionGroup ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(12243)
	this->pop();
	HX_STACK_LINE(12244)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::pop_unsafe","zpp_nape/util/Lists.hx",12231);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_InteractionGroup Block( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12231);
			{
				HX_STACK_LINE(12231)
				{
				}
				HX_STACK_LINE(12231)
				::zpp_nape::dynamics::ZPP_InteractionGroup ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12231)
				__this->pop();
				HX_STACK_LINE(12231)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12231)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop_unsafe,return )

Void ZNPList_ZPP_InteractionGroup_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_pop","zpp_nape/util/Lists.hx",12198);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12199)
		{
		}
		HX_STACK_LINE(12207)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12208)
		this->head = ret->next;
		HX_STACK_LINE(12209)
		{
		}
		HX_STACK_LINE(12210)
		{
			HX_STACK_LINE(12211)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12212)
			{
			}
			HX_STACK_LINE(12220)
			o->elt = null();
			HX_STACK_LINE(12221)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
			HX_STACK_LINE(12222)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12227)
		if (((this->head == null()))){
			HX_STACK_LINE(12227)
			this->pushmod = true;
		}
		HX_STACK_LINE(12228)
		this->modified = true;
		HX_STACK_LINE(12229)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,inlined_pop,(void))

Void ZNPList_ZPP_InteractionGroup_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::pop","zpp_nape/util/Lists.hx",12196);
		HX_STACK_THIS(this);
		HX_STACK_LINE(12196)
		{
		}
		HX_STACK_LINE(12196)
		::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(12196)
		this->head = ret->next;
		HX_STACK_LINE(12196)
		{
		}
		HX_STACK_LINE(12196)
		{
			HX_STACK_LINE(12196)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(12196)
			{
			}
			HX_STACK_LINE(12196)
			o->elt = null();
			HX_STACK_LINE(12196)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
			HX_STACK_LINE(12196)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = o;
		}
		HX_STACK_LINE(12196)
		if (((this->head == null()))){
			HX_STACK_LINE(12196)
			this->pushmod = true;
		}
		HX_STACK_LINE(12196)
		this->modified = true;
		HX_STACK_LINE(12196)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_insert","zpp_nape/util/Lists.hx",12153);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12154)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12162);
			{
				HX_STACK_LINE(12163)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12164)
				{
					HX_STACK_LINE(12165)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
						HX_STACK_LINE(12165)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
					}
					else{
						HX_STACK_LINE(12172)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
						HX_STACK_LINE(12173)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12174)
						ret->next = null();
					}
					HX_STACK_LINE(12179)
					Dynamic();
				}
				HX_STACK_LINE(12181)
				ret->elt = o;
				HX_STACK_LINE(12182)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12162)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12184)
	if (((cur == null()))){
		HX_STACK_LINE(12185)
		temp->next = this->head;
		HX_STACK_LINE(12186)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(12189)
		temp->next = cur->next;
		HX_STACK_LINE(12190)
		cur->next = temp;
	}
	HX_STACK_LINE(12192)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(12193)
	(this->length)++;
	HX_STACK_LINE(12194)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cur,::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::insert","zpp_nape/util/Lists.hx",12151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj *__this,::zpp_nape::dynamics::ZPP_InteractionGroup &o,::zpp_nape::util::ZNPNode_ZPP_InteractionGroup &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12151);
			{
				HX_STACK_LINE(12151)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12151);
						{
							HX_STACK_LINE(12151)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12151)
							{
								HX_STACK_LINE(12151)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
									HX_STACK_LINE(12151)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
								}
								else{
									HX_STACK_LINE(12151)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
									HX_STACK_LINE(12151)
									::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12151)
									ret->next = null();
								}
								HX_STACK_LINE(12151)
								Dynamic();
							}
							HX_STACK_LINE(12151)
							ret->elt = o;
							HX_STACK_LINE(12151)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12151)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12151)
				if (((cur == null()))){
					HX_STACK_LINE(12151)
					temp->next = __this->head;
					HX_STACK_LINE(12151)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(12151)
					temp->next = cur->next;
					HX_STACK_LINE(12151)
					cur->next = temp;
				}
				HX_STACK_LINE(12151)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(12151)
				(__this->length)++;
				HX_STACK_LINE(12151)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(12151)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_InteractionGroup_obj,insert,return )

Void ZNPList_ZPP_InteractionGroup_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_InteractionGroup x){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::addAll","zpp_nape/util/Lists.hx",12133);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(12134)
		{
		}
		HX_STACK_LINE(12142)
		{
			HX_STACK_LINE(12143)
			::zpp_nape::util::ZNPNode_ZPP_InteractionGroup cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(12144)
			while(((cx_ite != null()))){
				HX_STACK_LINE(12145)
				::zpp_nape::dynamics::ZPP_InteractionGroup i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(12146)
				this->add(i);
				HX_STACK_LINE(12147)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::inlined_add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::inlined_add","zpp_nape/util/Lists.hx",12096);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(12097)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12105);
			{
				HX_STACK_LINE(12106)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(12107)
				{
					HX_STACK_LINE(12108)
					if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
						HX_STACK_LINE(12108)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
					}
					else{
						HX_STACK_LINE(12115)
						ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
						HX_STACK_LINE(12116)
						::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
						HX_STACK_LINE(12117)
						ret->next = null();
					}
					HX_STACK_LINE(12122)
					Dynamic();
				}
				HX_STACK_LINE(12124)
				ret->elt = o;
				HX_STACK_LINE(12125)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(12105)
	::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(12127)
	temp->next = this->head;
	HX_STACK_LINE(12128)
	this->head = temp;
	HX_STACK_LINE(12129)
	this->modified = true;
	HX_STACK_LINE(12130)
	(this->length)++;
	HX_STACK_LINE(12131)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::add( ::zpp_nape::dynamics::ZPP_InteractionGroup o){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::add","zpp_nape/util/Lists.hx",12094);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_InteractionGroup Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &o,::zpp_nape::util::ZNPList_ZPP_InteractionGroup_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12094);
			{
				HX_STACK_LINE(12094)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup Block( ::zpp_nape::dynamics::ZPP_InteractionGroup &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",12094);
						{
							HX_STACK_LINE(12094)
							::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(12094)
							{
								HX_STACK_LINE(12094)
								if (((::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool == null()))){
									HX_STACK_LINE(12094)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::__new();
								}
								else{
									HX_STACK_LINE(12094)
									ret = ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool;
									HX_STACK_LINE(12094)
									::zpp_nape::util::ZNPNode_ZPP_InteractionGroup_obj::zpp_pool = ret->next;
									HX_STACK_LINE(12094)
									ret->next = null();
								}
								HX_STACK_LINE(12094)
								Dynamic();
							}
							HX_STACK_LINE(12094)
							ret->elt = o;
							HX_STACK_LINE(12094)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(12094)
				::zpp_nape::util::ZNPNode_ZPP_InteractionGroup temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(12094)
				temp->next = __this->head;
				HX_STACK_LINE(12094)
				__this->head = temp;
				HX_STACK_LINE(12094)
				__this->modified = true;
				HX_STACK_LINE(12094)
				(__this->length)++;
				HX_STACK_LINE(12094)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(12094)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,add,return )

Void ZNPList_ZPP_InteractionGroup_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup i){
{
		HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::setbegin","zpp_nape/util/Lists.hx",12089);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(12090)
		this->head = i;
		HX_STACK_LINE(12091)
		this->modified = true;
		HX_STACK_LINE(12092)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_InteractionGroup_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_InteractionGroup ZNPList_ZPP_InteractionGroup_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_InteractionGroup::begin","zpp_nape/util/Lists.hx",12084);
	HX_STACK_THIS(this);
	HX_STACK_LINE(12084)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_InteractionGroup_obj,begin,return )


ZNPList_ZPP_InteractionGroup_obj::ZNPList_ZPP_InteractionGroup_obj()
{
}

void ZNPList_ZPP_InteractionGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_InteractionGroup);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_InteractionGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_InteractionGroup_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_InteractionGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_InteractionGroup >(); return inValue; }
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

void ZNPList_ZPP_InteractionGroup_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_InteractionGroup_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_InteractionGroup_obj::__mClass;

void ZNPList_ZPP_InteractionGroup_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_InteractionGroup"), hx::TCanCast< ZNPList_ZPP_InteractionGroup_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_InteractionGroup_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
