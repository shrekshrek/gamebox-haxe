#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_CallbackSet
#include <zpp_nape/space/ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CallbackSet
#include <zpp_nape/util/ZNPList_ZPP_CallbackSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CallbackSet
#include <zpp_nape/util/ZNPNode_ZPP_CallbackSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CallbackSet_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::new","zpp_nape/util/Lists.hx",559);
{
	HX_STACK_LINE(566)
	this->length = (int)0;
	HX_STACK_LINE(565)
	this->pushmod = false;
	HX_STACK_LINE(564)
	this->modified = false;
	HX_STACK_LINE(560)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CallbackSet_obj::~ZNPList_ZPP_CallbackSet_obj() { }

Dynamic ZNPList_ZPP_CallbackSet_obj::__CreateEmpty() { return  new ZNPList_ZPP_CallbackSet_obj; }
hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > ZNPList_ZPP_CallbackSet_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > result = new ZNPList_ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CallbackSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CallbackSet_obj > result = new ZNPList_ZPP_CallbackSet_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::at","zpp_nape/util/Lists.hx",929);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(930)
	{
	}
	HX_STACK_LINE(938)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(939)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_CallbackSet(it->elt) : ::zpp_nape::space::ZPP_CallbackSet(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::iterator_at","zpp_nape/util/Lists.hx",916);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(917)
	{
	}
	HX_STACK_LINE(925)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(926)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(926)
		ret = ret->next;
	}
	HX_STACK_LINE(927)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,iterator_at,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::back","zpp_nape/util/Lists.hx",907);
	HX_STACK_THIS(this);
	HX_STACK_LINE(908)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(909)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(910)
	while(((cur != null()))){
		HX_STACK_LINE(911)
		ret = cur;
		HX_STACK_LINE(912)
		cur = cur->next;
	}
	HX_STACK_LINE(914)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,back,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::front","zpp_nape/util/Lists.hx",907);
	HX_STACK_THIS(this);
	HX_STACK_LINE(907)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,front,return )

bool ZNPList_ZPP_CallbackSet_obj::inlined_has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_has","zpp_nape/util/Lists.hx",877);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(878)
	{
	}
	HX_STACK_LINE(886)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(887)
	{
		HX_STACK_LINE(888)
		ret = false;
		HX_STACK_LINE(889)
		{
			HX_STACK_LINE(890)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(891)
			while(((cx_ite != null()))){
				HX_STACK_LINE(892)
				::zpp_nape::space::ZPP_CallbackSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(893)
				if (((npite == obj))){
					HX_STACK_LINE(895)
					ret = true;
					HX_STACK_LINE(896)
					break;
				}
				HX_STACK_LINE(899)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(903)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_has,return )

bool ZNPList_ZPP_CallbackSet_obj::has( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::has","zpp_nape/util/Lists.hx",875);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",875);
			{
				HX_STACK_LINE(875)
				{
				}
				HX_STACK_LINE(875)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(875)
				{
					HX_STACK_LINE(875)
					ret = false;
					HX_STACK_LINE(875)
					{
						HX_STACK_LINE(875)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(875)
						while(((cx_ite != null()))){
							HX_STACK_LINE(875)
							::zpp_nape::space::ZPP_CallbackSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(875)
							if (((npite == obj))){
								HX_STACK_LINE(875)
								ret = true;
								HX_STACK_LINE(875)
								break;
							}
							HX_STACK_LINE(875)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(875)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(875)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,has,return )

int ZNPList_ZPP_CallbackSet_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::size","zpp_nape/util/Lists.hx",875);
	HX_STACK_THIS(this);
	HX_STACK_LINE(875)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,size,return )

bool ZNPList_ZPP_CallbackSet_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::empty","zpp_nape/util/Lists.hx",873);
	HX_STACK_THIS(this);
	HX_STACK_LINE(873)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,empty,return )

Void ZNPList_ZPP_CallbackSet_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::reverse","zpp_nape/util/Lists.hx",858);
		HX_STACK_THIS(this);
		HX_STACK_LINE(859)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(860)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(861)
		while(((cur != null()))){
			HX_STACK_LINE(862)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(863)
			cur->next = pre;
			HX_STACK_LINE(864)
			this->head = cur;
			HX_STACK_LINE(865)
			pre = cur;
			HX_STACK_LINE(866)
			cur = nx;
		}
		HX_STACK_LINE(868)
		this->modified = true;
		HX_STACK_LINE(869)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,reverse,(void))

Void ZNPList_ZPP_CallbackSet_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_clear","zpp_nape/util/Lists.hx",852);
		HX_STACK_THIS(this);
		HX_STACK_LINE(854)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(854)
			{
			}
			HX_STACK_LINE(854)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(854)
			this->head = ret->next;
			HX_STACK_LINE(854)
			{
			}
			HX_STACK_LINE(854)
			{
				HX_STACK_LINE(854)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(854)
				{
				}
				HX_STACK_LINE(854)
				o->elt = null();
				HX_STACK_LINE(854)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
				HX_STACK_LINE(854)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(854)
			if (((this->head == null()))){
				HX_STACK_LINE(854)
				this->pushmod = true;
			}
			HX_STACK_LINE(854)
			this->modified = true;
			HX_STACK_LINE(854)
			(this->length)--;
		}
		HX_STACK_LINE(855)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_clear,(void))

Void ZNPList_ZPP_CallbackSet_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::clear","zpp_nape/util/Lists.hx",850);
		HX_STACK_THIS(this);
		HX_STACK_LINE(850)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(850)
			{
			}
			HX_STACK_LINE(850)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(850)
			this->head = ret->next;
			HX_STACK_LINE(850)
			{
			}
			HX_STACK_LINE(850)
			{
				HX_STACK_LINE(850)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(850)
				{
				}
				HX_STACK_LINE(850)
				o->elt = null();
				HX_STACK_LINE(850)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
				HX_STACK_LINE(850)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(850)
			if (((this->head == null()))){
				HX_STACK_LINE(850)
				this->pushmod = true;
			}
			HX_STACK_LINE(850)
			this->modified = true;
			HX_STACK_LINE(850)
			(this->length)--;
		}
		HX_STACK_LINE(850)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::splice","zpp_nape/util/Lists.hx",846);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(847)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(847)
		this->erase(pre);
	}
	HX_STACK_LINE(848)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_erase","zpp_nape/util/Lists.hx",800);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(801)
	{
	}
	HX_STACK_LINE(809)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(810)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(811)
	if (((pre == null()))){
		HX_STACK_LINE(812)
		old = this->head;
		HX_STACK_LINE(813)
		ret = old->next;
		HX_STACK_LINE(814)
		this->head = ret;
		HX_STACK_LINE(815)
		if (((this->head == null()))){
			HX_STACK_LINE(815)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(818)
		old = pre->next;
		HX_STACK_LINE(819)
		ret = old->next;
		HX_STACK_LINE(820)
		pre->next = ret;
		HX_STACK_LINE(821)
		if (((ret == null()))){
			HX_STACK_LINE(821)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(823)
	{
	}
	HX_STACK_LINE(824)
	{
		HX_STACK_LINE(825)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(826)
		{
		}
		HX_STACK_LINE(834)
		o->elt = null();
		HX_STACK_LINE(835)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
		HX_STACK_LINE(836)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(841)
	this->modified = true;
	HX_STACK_LINE(842)
	(this->length)--;
	HX_STACK_LINE(843)
	this->pushmod = true;
	HX_STACK_LINE(844)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::erase","zpp_nape/util/Lists.hx",798);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet &pre,::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",798);
			{
				HX_STACK_LINE(798)
				{
				}
				HX_STACK_LINE(798)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(798)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(798)
				if (((pre == null()))){
					HX_STACK_LINE(798)
					old = __this->head;
					HX_STACK_LINE(798)
					ret = old->next;
					HX_STACK_LINE(798)
					__this->head = ret;
					HX_STACK_LINE(798)
					if (((__this->head == null()))){
						HX_STACK_LINE(798)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(798)
					old = pre->next;
					HX_STACK_LINE(798)
					ret = old->next;
					HX_STACK_LINE(798)
					pre->next = ret;
					HX_STACK_LINE(798)
					if (((ret == null()))){
						HX_STACK_LINE(798)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(798)
				{
				}
				HX_STACK_LINE(798)
				{
					HX_STACK_LINE(798)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(798)
					{
					}
					HX_STACK_LINE(798)
					o->elt = null();
					HX_STACK_LINE(798)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
					HX_STACK_LINE(798)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(798)
				__this->modified = true;
				HX_STACK_LINE(798)
				(__this->length)--;
				HX_STACK_LINE(798)
				__this->pushmod = true;
				HX_STACK_LINE(798)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(798)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,erase,return )

bool ZNPList_ZPP_CallbackSet_obj::inlined_try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_try_remove","zpp_nape/util/Lists.hx",775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(776)
	{
	}
	HX_STACK_LINE(784)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(785)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(786)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(787)
	while(((cur != null()))){
		HX_STACK_LINE(788)
		if (((cur->elt == obj))){
			HX_STACK_LINE(789)
			{
				HX_STACK_LINE(789)
				{
				}
				HX_STACK_LINE(789)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(789)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(789)
				if (((pre == null()))){
					HX_STACK_LINE(789)
					old = this->head;
					HX_STACK_LINE(789)
					ret1 = old->next;
					HX_STACK_LINE(789)
					this->head = ret1;
					HX_STACK_LINE(789)
					if (((this->head == null()))){
						HX_STACK_LINE(789)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(789)
					old = pre->next;
					HX_STACK_LINE(789)
					ret1 = old->next;
					HX_STACK_LINE(789)
					pre->next = ret1;
					HX_STACK_LINE(789)
					if (((ret1 == null()))){
						HX_STACK_LINE(789)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(789)
				{
				}
				HX_STACK_LINE(789)
				{
					HX_STACK_LINE(789)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(789)
					{
					}
					HX_STACK_LINE(789)
					o->elt = null();
					HX_STACK_LINE(789)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
					HX_STACK_LINE(789)
					::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(789)
				this->modified = true;
				HX_STACK_LINE(789)
				(this->length)--;
				HX_STACK_LINE(789)
				this->pushmod = true;
				HX_STACK_LINE(789)
				ret1;
			}
			HX_STACK_LINE(790)
			ret = true;
			HX_STACK_LINE(791)
			break;
		}
		HX_STACK_LINE(793)
		pre = cur;
		HX_STACK_LINE(794)
		cur = cur->next;
	}
	HX_STACK_LINE(796)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CallbackSet_obj::inlined_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_remove","zpp_nape/util/Lists.hx",762);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(763)
		{
		}
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			{
			}
			HX_STACK_LINE(771)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(771)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(771)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(771)
			while(((cur != null()))){
				HX_STACK_LINE(771)
				if (((cur->elt == obj))){
					HX_STACK_LINE(771)
					{
						HX_STACK_LINE(771)
						{
						}
						HX_STACK_LINE(771)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(771)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(771)
						if (((pre == null()))){
							HX_STACK_LINE(771)
							old = this->head;
							HX_STACK_LINE(771)
							ret1 = old->next;
							HX_STACK_LINE(771)
							this->head = ret1;
							HX_STACK_LINE(771)
							if (((this->head == null()))){
								HX_STACK_LINE(771)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(771)
							old = pre->next;
							HX_STACK_LINE(771)
							ret1 = old->next;
							HX_STACK_LINE(771)
							pre->next = ret1;
							HX_STACK_LINE(771)
							if (((ret1 == null()))){
								HX_STACK_LINE(771)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(771)
						{
						}
						HX_STACK_LINE(771)
						{
							HX_STACK_LINE(771)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(771)
							{
							}
							HX_STACK_LINE(771)
							o->elt = null();
							HX_STACK_LINE(771)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
							HX_STACK_LINE(771)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(771)
						this->modified = true;
						HX_STACK_LINE(771)
						(this->length)--;
						HX_STACK_LINE(771)
						this->pushmod = true;
						HX_STACK_LINE(771)
						ret1;
					}
					HX_STACK_LINE(771)
					ret = true;
					HX_STACK_LINE(771)
					break;
				}
				HX_STACK_LINE(771)
				pre = cur;
				HX_STACK_LINE(771)
				cur = cur->next;
			}
			HX_STACK_LINE(771)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_remove,(void))

bool ZNPList_ZPP_CallbackSet_obj::try_remove( ::zpp_nape::space::ZPP_CallbackSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::try_remove","zpp_nape/util/Lists.hx",737);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(738)
	{
	}
	HX_STACK_LINE(746)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(747)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(748)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(749)
	while(((cur != null()))){
		HX_STACK_LINE(750)
		if (((cur->elt == obj))){
			HX_STACK_LINE(751)
			this->erase(pre);
			HX_STACK_LINE(752)
			ret = true;
			HX_STACK_LINE(753)
			break;
		}
		HX_STACK_LINE(755)
		pre = cur;
		HX_STACK_LINE(756)
		cur = cur->next;
	}
	HX_STACK_LINE(758)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,try_remove,return )

Void ZNPList_ZPP_CallbackSet_obj::remove( ::zpp_nape::space::ZPP_CallbackSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::remove","zpp_nape/util/Lists.hx",726);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(727)
		{
		}
		HX_STACK_LINE(735)
		{
			HX_STACK_LINE(735)
			{
			}
			HX_STACK_LINE(735)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(735)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(735)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(735)
			while(((cur != null()))){
				HX_STACK_LINE(735)
				if (((cur->elt == obj))){
					HX_STACK_LINE(735)
					{
						HX_STACK_LINE(735)
						{
						}
						HX_STACK_LINE(735)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(735)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(735)
						if (((pre == null()))){
							HX_STACK_LINE(735)
							old = this->head;
							HX_STACK_LINE(735)
							ret1 = old->next;
							HX_STACK_LINE(735)
							this->head = ret1;
							HX_STACK_LINE(735)
							if (((this->head == null()))){
								HX_STACK_LINE(735)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(735)
							old = pre->next;
							HX_STACK_LINE(735)
							ret1 = old->next;
							HX_STACK_LINE(735)
							pre->next = ret1;
							HX_STACK_LINE(735)
							if (((ret1 == null()))){
								HX_STACK_LINE(735)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(735)
						{
						}
						HX_STACK_LINE(735)
						{
							HX_STACK_LINE(735)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(735)
							{
							}
							HX_STACK_LINE(735)
							o->elt = null();
							HX_STACK_LINE(735)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
							HX_STACK_LINE(735)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(735)
						this->modified = true;
						HX_STACK_LINE(735)
						(this->length)--;
						HX_STACK_LINE(735)
						this->pushmod = true;
						HX_STACK_LINE(735)
						ret1;
					}
					HX_STACK_LINE(735)
					ret = true;
					HX_STACK_LINE(735)
					break;
				}
				HX_STACK_LINE(735)
				pre = cur;
				HX_STACK_LINE(735)
				cur = cur->next;
			}
			HX_STACK_LINE(735)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,remove,(void))

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_pop_unsafe","zpp_nape/util/Lists.hx",713);
	HX_STACK_THIS(this);
	HX_STACK_LINE(714)
	{
	}
	HX_STACK_LINE(722)
	::zpp_nape::space::ZPP_CallbackSet ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(723)
	this->pop();
	HX_STACK_LINE(724)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::pop_unsafe","zpp_nape/util/Lists.hx",711);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",711);
			{
				HX_STACK_LINE(711)
				{
				}
				HX_STACK_LINE(711)
				::zpp_nape::space::ZPP_CallbackSet ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(711)
				__this->pop();
				HX_STACK_LINE(711)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(711)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,pop_unsafe,return )

Void ZNPList_ZPP_CallbackSet_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_pop","zpp_nape/util/Lists.hx",678);
		HX_STACK_THIS(this);
		HX_STACK_LINE(679)
		{
		}
		HX_STACK_LINE(687)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(688)
		this->head = ret->next;
		HX_STACK_LINE(689)
		{
		}
		HX_STACK_LINE(690)
		{
			HX_STACK_LINE(691)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(692)
			{
			}
			HX_STACK_LINE(700)
			o->elt = null();
			HX_STACK_LINE(701)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
			HX_STACK_LINE(702)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(707)
		if (((this->head == null()))){
			HX_STACK_LINE(707)
			this->pushmod = true;
		}
		HX_STACK_LINE(708)
		this->modified = true;
		HX_STACK_LINE(709)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,inlined_pop,(void))

Void ZNPList_ZPP_CallbackSet_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::pop","zpp_nape/util/Lists.hx",676);
		HX_STACK_THIS(this);
		HX_STACK_LINE(676)
		{
		}
		HX_STACK_LINE(676)
		::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(676)
		this->head = ret->next;
		HX_STACK_LINE(676)
		{
		}
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(676)
			{
			}
			HX_STACK_LINE(676)
			o->elt = null();
			HX_STACK_LINE(676)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
			HX_STACK_LINE(676)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(676)
		if (((this->head == null()))){
			HX_STACK_LINE(676)
			this->pushmod = true;
		}
		HX_STACK_LINE(676)
		this->modified = true;
		HX_STACK_LINE(676)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_insert","zpp_nape/util/Lists.hx",633);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(634)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",642);
			{
				HX_STACK_LINE(643)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(644)
				{
					HX_STACK_LINE(645)
					if (((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(645)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();
					}
					else{
						HX_STACK_LINE(652)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
						HX_STACK_LINE(653)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(654)
						ret->next = null();
					}
					HX_STACK_LINE(659)
					Dynamic();
				}
				HX_STACK_LINE(661)
				ret->elt = o;
				HX_STACK_LINE(662)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(642)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(664)
	if (((cur == null()))){
		HX_STACK_LINE(665)
		temp->next = this->head;
		HX_STACK_LINE(666)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(669)
		temp->next = cur->next;
		HX_STACK_LINE(670)
		cur->next = temp;
	}
	HX_STACK_LINE(672)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(673)
	(this->length)++;
	HX_STACK_LINE(674)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet cur,::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::insert","zpp_nape/util/Lists.hx",631);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj *__this,::zpp_nape::space::ZPP_CallbackSet &o,::zpp_nape::util::ZNPNode_ZPP_CallbackSet &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",631);
			{
				HX_STACK_LINE(631)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",631);
						{
							HX_STACK_LINE(631)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(631)
							{
								HX_STACK_LINE(631)
								if (((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(631)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();
								}
								else{
									HX_STACK_LINE(631)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
									HX_STACK_LINE(631)
									::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(631)
									ret->next = null();
								}
								HX_STACK_LINE(631)
								Dynamic();
							}
							HX_STACK_LINE(631)
							ret->elt = o;
							HX_STACK_LINE(631)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(631)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(631)
				if (((cur == null()))){
					HX_STACK_LINE(631)
					temp->next = __this->head;
					HX_STACK_LINE(631)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(631)
					temp->next = cur->next;
					HX_STACK_LINE(631)
					cur->next = temp;
				}
				HX_STACK_LINE(631)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(631)
				(__this->length)++;
				HX_STACK_LINE(631)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(631)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CallbackSet_obj,insert,return )

Void ZNPList_ZPP_CallbackSet_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CallbackSet x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::addAll","zpp_nape/util/Lists.hx",613);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(614)
		{
		}
		HX_STACK_LINE(622)
		{
			HX_STACK_LINE(623)
			::zpp_nape::util::ZNPNode_ZPP_CallbackSet cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(624)
			while(((cx_ite != null()))){
				HX_STACK_LINE(625)
				::zpp_nape::space::ZPP_CallbackSet i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(626)
				this->add(i);
				HX_STACK_LINE(627)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,addAll,(void))

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::inlined_add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::inlined_add","zpp_nape/util/Lists.hx",576);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(577)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",585);
			{
				HX_STACK_LINE(586)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(587)
				{
					HX_STACK_LINE(588)
					if (((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(588)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();
					}
					else{
						HX_STACK_LINE(595)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
						HX_STACK_LINE(596)
						::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(597)
						ret->next = null();
					}
					HX_STACK_LINE(602)
					Dynamic();
				}
				HX_STACK_LINE(604)
				ret->elt = o;
				HX_STACK_LINE(605)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(585)
	::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(607)
	temp->next = this->head;
	HX_STACK_LINE(608)
	this->head = temp;
	HX_STACK_LINE(609)
	this->modified = true;
	HX_STACK_LINE(610)
	(this->length)++;
	HX_STACK_LINE(611)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,inlined_add,return )

::zpp_nape::space::ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::add( ::zpp_nape::space::ZPP_CallbackSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::add","zpp_nape/util/Lists.hx",574);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o,::zpp_nape::util::ZNPList_ZPP_CallbackSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",574);
			{
				HX_STACK_LINE(574)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CallbackSet Block( ::zpp_nape::space::ZPP_CallbackSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",574);
						{
							HX_STACK_LINE(574)
							::zpp_nape::util::ZNPNode_ZPP_CallbackSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(574)
							{
								HX_STACK_LINE(574)
								if (((::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(574)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::__new();
								}
								else{
									HX_STACK_LINE(574)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool;
									HX_STACK_LINE(574)
									::zpp_nape::util::ZNPNode_ZPP_CallbackSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(574)
									ret->next = null();
								}
								HX_STACK_LINE(574)
								Dynamic();
							}
							HX_STACK_LINE(574)
							ret->elt = o;
							HX_STACK_LINE(574)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(574)
				::zpp_nape::util::ZNPNode_ZPP_CallbackSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(574)
				temp->next = __this->head;
				HX_STACK_LINE(574)
				__this->head = temp;
				HX_STACK_LINE(574)
				__this->modified = true;
				HX_STACK_LINE(574)
				(__this->length)++;
				HX_STACK_LINE(574)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(574)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,add,return )

Void ZNPList_ZPP_CallbackSet_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CallbackSet i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::setbegin","zpp_nape/util/Lists.hx",569);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(570)
		this->head = i;
		HX_STACK_LINE(571)
		this->modified = true;
		HX_STACK_LINE(572)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CallbackSet_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CallbackSet ZNPList_ZPP_CallbackSet_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CallbackSet::begin","zpp_nape/util/Lists.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_LINE(564)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CallbackSet_obj,begin,return )


ZNPList_ZPP_CallbackSet_obj::ZNPList_ZPP_CallbackSet_obj()
{
}

void ZNPList_ZPP_CallbackSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CallbackSet);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CallbackSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CallbackSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CallbackSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CallbackSet >(); return inValue; }
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

void ZNPList_ZPP_CallbackSet_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CallbackSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CallbackSet_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CallbackSet_obj::__mClass;

void ZNPList_ZPP_CallbackSet_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CallbackSet"), hx::TCanCast< ZNPList_ZPP_CallbackSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CallbackSet_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
