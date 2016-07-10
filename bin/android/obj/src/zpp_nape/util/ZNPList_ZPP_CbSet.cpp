#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSet
#include <zpp_nape/util/ZNPNode_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbSet_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CbSet::new","zpp_nape/util/Lists.hx",2863);
{
	HX_STACK_LINE(2870)
	this->length = (int)0;
	HX_STACK_LINE(2869)
	this->pushmod = false;
	HX_STACK_LINE(2868)
	this->modified = false;
	HX_STACK_LINE(2864)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CbSet_obj::~ZNPList_ZPP_CbSet_obj() { }

Dynamic ZNPList_ZPP_CbSet_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbSet_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > ZNPList_ZPP_CbSet_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbSet_obj > result = new ZNPList_ZPP_CbSet_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::at","zpp_nape/util/Lists.hx",3233);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3234)
	{
	}
	HX_STACK_LINE(3242)
	::zpp_nape::util::ZNPNode_ZPP_CbSet it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(3243)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(it->elt) : ::zpp_nape::callbacks::ZPP_CbSet(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::iterator_at","zpp_nape/util/Lists.hx",3220);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(3221)
	{
	}
	HX_STACK_LINE(3229)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3230)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(3230)
		ret = ret->next;
	}
	HX_STACK_LINE(3231)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::back","zpp_nape/util/Lists.hx",3211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3212)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3213)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3214)
	while(((cur != null()))){
		HX_STACK_LINE(3215)
		ret = cur;
		HX_STACK_LINE(3216)
		cur = cur->next;
	}
	HX_STACK_LINE(3218)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,back,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::front","zpp_nape/util/Lists.hx",3211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3211)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,front,return )

bool ZNPList_ZPP_CbSet_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_has","zpp_nape/util/Lists.hx",3181);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3182)
	{
	}
	HX_STACK_LINE(3190)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3191)
	{
		HX_STACK_LINE(3192)
		ret = false;
		HX_STACK_LINE(3193)
		{
			HX_STACK_LINE(3194)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(3195)
			while(((cx_ite != null()))){
				HX_STACK_LINE(3196)
				::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(3197)
				if (((npite == obj))){
					HX_STACK_LINE(3199)
					ret = true;
					HX_STACK_LINE(3200)
					break;
				}
				HX_STACK_LINE(3203)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(3207)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_has,return )

bool ZNPList_ZPP_CbSet_obj::has( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::has","zpp_nape/util/Lists.hx",3179);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3179);
			{
				HX_STACK_LINE(3179)
				{
				}
				HX_STACK_LINE(3179)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3179)
				{
					HX_STACK_LINE(3179)
					ret = false;
					HX_STACK_LINE(3179)
					{
						HX_STACK_LINE(3179)
						::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(3179)
						while(((cx_ite != null()))){
							HX_STACK_LINE(3179)
							::zpp_nape::callbacks::ZPP_CbSet npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(3179)
							if (((npite == obj))){
								HX_STACK_LINE(3179)
								ret = true;
								HX_STACK_LINE(3179)
								break;
							}
							HX_STACK_LINE(3179)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(3179)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3179)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,has,return )

int ZNPList_ZPP_CbSet_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::size","zpp_nape/util/Lists.hx",3179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3179)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,size,return )

bool ZNPList_ZPP_CbSet_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::empty","zpp_nape/util/Lists.hx",3177);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3177)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,empty,return )

Void ZNPList_ZPP_CbSet_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::reverse","zpp_nape/util/Lists.hx",3162);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3163)
		::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(3164)
		::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(3165)
		while(((cur != null()))){
			HX_STACK_LINE(3166)
			::zpp_nape::util::ZNPNode_ZPP_CbSet nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(3167)
			cur->next = pre;
			HX_STACK_LINE(3168)
			this->head = cur;
			HX_STACK_LINE(3169)
			pre = cur;
			HX_STACK_LINE(3170)
			cur = nx;
		}
		HX_STACK_LINE(3172)
		this->modified = true;
		HX_STACK_LINE(3173)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,reverse,(void))

Void ZNPList_ZPP_CbSet_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_clear","zpp_nape/util/Lists.hx",3156);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3158)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3158)
			{
			}
			HX_STACK_LINE(3158)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3158)
			this->head = ret->next;
			HX_STACK_LINE(3158)
			{
			}
			HX_STACK_LINE(3158)
			{
				HX_STACK_LINE(3158)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3158)
				{
				}
				HX_STACK_LINE(3158)
				o->elt = null();
				HX_STACK_LINE(3158)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3158)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3158)
			if (((this->head == null()))){
				HX_STACK_LINE(3158)
				this->pushmod = true;
			}
			HX_STACK_LINE(3158)
			this->modified = true;
			HX_STACK_LINE(3158)
			(this->length)--;
		}
		HX_STACK_LINE(3159)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbSet_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::clear","zpp_nape/util/Lists.hx",3154);
		HX_STACK_THIS(this);
		HX_STACK_LINE(3154)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(3154)
			{
			}
			HX_STACK_LINE(3154)
			::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3154)
			this->head = ret->next;
			HX_STACK_LINE(3154)
			{
			}
			HX_STACK_LINE(3154)
			{
				HX_STACK_LINE(3154)
				::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(3154)
				{
				}
				HX_STACK_LINE(3154)
				o->elt = null();
				HX_STACK_LINE(3154)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
				HX_STACK_LINE(3154)
				::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
			}
			HX_STACK_LINE(3154)
			if (((this->head == null()))){
				HX_STACK_LINE(3154)
				this->pushmod = true;
			}
			HX_STACK_LINE(3154)
			this->modified = true;
			HX_STACK_LINE(3154)
			(this->length)--;
		}
		HX_STACK_LINE(3154)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::splice","zpp_nape/util/Lists.hx",3150);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(3151)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(3151)
		this->erase(pre);
	}
	HX_STACK_LINE(3152)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_erase","zpp_nape/util/Lists.hx",3104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(3105)
	{
	}
	HX_STACK_LINE(3113)
	::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(3114)
	::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3115)
	if (((pre == null()))){
		HX_STACK_LINE(3116)
		old = this->head;
		HX_STACK_LINE(3117)
		ret = old->next;
		HX_STACK_LINE(3118)
		this->head = ret;
		HX_STACK_LINE(3119)
		if (((this->head == null()))){
			HX_STACK_LINE(3119)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(3122)
		old = pre->next;
		HX_STACK_LINE(3123)
		ret = old->next;
		HX_STACK_LINE(3124)
		pre->next = ret;
		HX_STACK_LINE(3125)
		if (((ret == null()))){
			HX_STACK_LINE(3125)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(3127)
	{
	}
	HX_STACK_LINE(3128)
	{
		HX_STACK_LINE(3129)
		::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(3130)
		{
		}
		HX_STACK_LINE(3138)
		o->elt = null();
		HX_STACK_LINE(3139)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(3140)
		::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(3145)
	this->modified = true;
	HX_STACK_LINE(3146)
	(this->length)--;
	HX_STACK_LINE(3147)
	this->pushmod = true;
	HX_STACK_LINE(3148)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbSet pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::erase","zpp_nape/util/Lists.hx",3102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::util::ZNPNode_ZPP_CbSet &pre,::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3102);
			{
				HX_STACK_LINE(3102)
				{
				}
				HX_STACK_LINE(3102)
				::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3102)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3102)
				if (((pre == null()))){
					HX_STACK_LINE(3102)
					old = __this->head;
					HX_STACK_LINE(3102)
					ret = old->next;
					HX_STACK_LINE(3102)
					__this->head = ret;
					HX_STACK_LINE(3102)
					if (((__this->head == null()))){
						HX_STACK_LINE(3102)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3102)
					old = pre->next;
					HX_STACK_LINE(3102)
					ret = old->next;
					HX_STACK_LINE(3102)
					pre->next = ret;
					HX_STACK_LINE(3102)
					if (((ret == null()))){
						HX_STACK_LINE(3102)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(3102)
				{
				}
				HX_STACK_LINE(3102)
				{
					HX_STACK_LINE(3102)
					::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3102)
					{
					}
					HX_STACK_LINE(3102)
					o->elt = null();
					HX_STACK_LINE(3102)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(3102)
					::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3102)
				__this->modified = true;
				HX_STACK_LINE(3102)
				(__this->length)--;
				HX_STACK_LINE(3102)
				__this->pushmod = true;
				HX_STACK_LINE(3102)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3102)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,erase,return )

bool ZNPList_ZPP_CbSet_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_try_remove","zpp_nape/util/Lists.hx",3079);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3080)
	{
	}
	HX_STACK_LINE(3088)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3089)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3090)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3091)
	while(((cur != null()))){
		HX_STACK_LINE(3092)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3093)
			{
				HX_STACK_LINE(3093)
				{
				}
				HX_STACK_LINE(3093)
				::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(3093)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(3093)
				if (((pre == null()))){
					HX_STACK_LINE(3093)
					old = this->head;
					HX_STACK_LINE(3093)
					ret1 = old->next;
					HX_STACK_LINE(3093)
					this->head = ret1;
					HX_STACK_LINE(3093)
					if (((this->head == null()))){
						HX_STACK_LINE(3093)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(3093)
					old = pre->next;
					HX_STACK_LINE(3093)
					ret1 = old->next;
					HX_STACK_LINE(3093)
					pre->next = ret1;
					HX_STACK_LINE(3093)
					if (((ret1 == null()))){
						HX_STACK_LINE(3093)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(3093)
				{
				}
				HX_STACK_LINE(3093)
				{
					HX_STACK_LINE(3093)
					::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(3093)
					{
					}
					HX_STACK_LINE(3093)
					o->elt = null();
					HX_STACK_LINE(3093)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
					HX_STACK_LINE(3093)
					::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
				}
				HX_STACK_LINE(3093)
				this->modified = true;
				HX_STACK_LINE(3093)
				(this->length)--;
				HX_STACK_LINE(3093)
				this->pushmod = true;
				HX_STACK_LINE(3093)
				ret1;
			}
			HX_STACK_LINE(3094)
			ret = true;
			HX_STACK_LINE(3095)
			break;
		}
		HX_STACK_LINE(3097)
		pre = cur;
		HX_STACK_LINE(3098)
		cur = cur->next;
	}
	HX_STACK_LINE(3100)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CbSet_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_remove","zpp_nape/util/Lists.hx",3066);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3067)
		{
		}
		HX_STACK_LINE(3075)
		{
			HX_STACK_LINE(3075)
			{
			}
			HX_STACK_LINE(3075)
			::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3075)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3075)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3075)
			while(((cur != null()))){
				HX_STACK_LINE(3075)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3075)
					{
						HX_STACK_LINE(3075)
						{
						}
						HX_STACK_LINE(3075)
						::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3075)
						::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3075)
						if (((pre == null()))){
							HX_STACK_LINE(3075)
							old = this->head;
							HX_STACK_LINE(3075)
							ret1 = old->next;
							HX_STACK_LINE(3075)
							this->head = ret1;
							HX_STACK_LINE(3075)
							if (((this->head == null()))){
								HX_STACK_LINE(3075)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3075)
							old = pre->next;
							HX_STACK_LINE(3075)
							ret1 = old->next;
							HX_STACK_LINE(3075)
							pre->next = ret1;
							HX_STACK_LINE(3075)
							if (((ret1 == null()))){
								HX_STACK_LINE(3075)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3075)
						{
						}
						HX_STACK_LINE(3075)
						{
							HX_STACK_LINE(3075)
							::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3075)
							{
							}
							HX_STACK_LINE(3075)
							o->elt = null();
							HX_STACK_LINE(3075)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(3075)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3075)
						this->modified = true;
						HX_STACK_LINE(3075)
						(this->length)--;
						HX_STACK_LINE(3075)
						this->pushmod = true;
						HX_STACK_LINE(3075)
						ret1;
					}
					HX_STACK_LINE(3075)
					ret = true;
					HX_STACK_LINE(3075)
					break;
				}
				HX_STACK_LINE(3075)
				pre = cur;
				HX_STACK_LINE(3075)
				cur = cur->next;
			}
			HX_STACK_LINE(3075)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbSet_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::try_remove","zpp_nape/util/Lists.hx",3041);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(3042)
	{
	}
	HX_STACK_LINE(3050)
	::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(3051)
	::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(3052)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3053)
	while(((cur != null()))){
		HX_STACK_LINE(3054)
		if (((cur->elt == obj))){
			HX_STACK_LINE(3055)
			this->erase(pre);
			HX_STACK_LINE(3056)
			ret = true;
			HX_STACK_LINE(3057)
			break;
		}
		HX_STACK_LINE(3059)
		pre = cur;
		HX_STACK_LINE(3060)
		cur = cur->next;
	}
	HX_STACK_LINE(3062)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,try_remove,return )

Void ZNPList_ZPP_CbSet_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::remove","zpp_nape/util/Lists.hx",3030);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(3031)
		{
		}
		HX_STACK_LINE(3039)
		{
			HX_STACK_LINE(3039)
			{
			}
			HX_STACK_LINE(3039)
			::zpp_nape::util::ZNPNode_ZPP_CbSet pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(3039)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(3039)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(3039)
			while(((cur != null()))){
				HX_STACK_LINE(3039)
				if (((cur->elt == obj))){
					HX_STACK_LINE(3039)
					{
						HX_STACK_LINE(3039)
						{
						}
						HX_STACK_LINE(3039)
						::zpp_nape::util::ZNPNode_ZPP_CbSet old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(3039)
						::zpp_nape::util::ZNPNode_ZPP_CbSet ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(3039)
						if (((pre == null()))){
							HX_STACK_LINE(3039)
							old = this->head;
							HX_STACK_LINE(3039)
							ret1 = old->next;
							HX_STACK_LINE(3039)
							this->head = ret1;
							HX_STACK_LINE(3039)
							if (((this->head == null()))){
								HX_STACK_LINE(3039)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(3039)
							old = pre->next;
							HX_STACK_LINE(3039)
							ret1 = old->next;
							HX_STACK_LINE(3039)
							pre->next = ret1;
							HX_STACK_LINE(3039)
							if (((ret1 == null()))){
								HX_STACK_LINE(3039)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(3039)
						{
						}
						HX_STACK_LINE(3039)
						{
							HX_STACK_LINE(3039)
							::zpp_nape::util::ZNPNode_ZPP_CbSet o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(3039)
							{
							}
							HX_STACK_LINE(3039)
							o->elt = null();
							HX_STACK_LINE(3039)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
							HX_STACK_LINE(3039)
							::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
						}
						HX_STACK_LINE(3039)
						this->modified = true;
						HX_STACK_LINE(3039)
						(this->length)--;
						HX_STACK_LINE(3039)
						this->pushmod = true;
						HX_STACK_LINE(3039)
						ret1;
					}
					HX_STACK_LINE(3039)
					ret = true;
					HX_STACK_LINE(3039)
					break;
				}
				HX_STACK_LINE(3039)
				pre = cur;
				HX_STACK_LINE(3039)
				cur = cur->next;
			}
			HX_STACK_LINE(3039)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_pop_unsafe","zpp_nape/util/Lists.hx",3017);
	HX_STACK_THIS(this);
	HX_STACK_LINE(3018)
	{
	}
	HX_STACK_LINE(3026)
	::zpp_nape::callbacks::ZPP_CbSet ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(3027)
	this->pop();
	HX_STACK_LINE(3028)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::pop_unsafe","zpp_nape/util/Lists.hx",3015);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",3015);
			{
				HX_STACK_LINE(3015)
				{
				}
				HX_STACK_LINE(3015)
				::zpp_nape::callbacks::ZPP_CbSet ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(3015)
				__this->pop();
				HX_STACK_LINE(3015)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(3015)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop_unsafe,return )

Void ZNPList_ZPP_CbSet_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_pop","zpp_nape/util/Lists.hx",2982);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2983)
		{
		}
		HX_STACK_LINE(2991)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2992)
		this->head = ret->next;
		HX_STACK_LINE(2993)
		{
		}
		HX_STACK_LINE(2994)
		{
			HX_STACK_LINE(2995)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2996)
			{
			}
			HX_STACK_LINE(3004)
			o->elt = null();
			HX_STACK_LINE(3005)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(3006)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(3011)
		if (((this->head == null()))){
			HX_STACK_LINE(3011)
			this->pushmod = true;
		}
		HX_STACK_LINE(3012)
		this->modified = true;
		HX_STACK_LINE(3013)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,inlined_pop,(void))

Void ZNPList_ZPP_CbSet_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::pop","zpp_nape/util/Lists.hx",2980);
		HX_STACK_THIS(this);
		HX_STACK_LINE(2980)
		{
		}
		HX_STACK_LINE(2980)
		::zpp_nape::util::ZNPNode_ZPP_CbSet ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2980)
		this->head = ret->next;
		HX_STACK_LINE(2980)
		{
		}
		HX_STACK_LINE(2980)
		{
			HX_STACK_LINE(2980)
			::zpp_nape::util::ZNPNode_ZPP_CbSet o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(2980)
			{
			}
			HX_STACK_LINE(2980)
			o->elt = null();
			HX_STACK_LINE(2980)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(2980)
			::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = o;
		}
		HX_STACK_LINE(2980)
		if (((this->head == null()))){
			HX_STACK_LINE(2980)
			this->pushmod = true;
		}
		HX_STACK_LINE(2980)
		this->modified = true;
		HX_STACK_LINE(2980)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_insert","zpp_nape/util/Lists.hx",2937);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2938)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2946);
			{
				HX_STACK_LINE(2947)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2948)
				{
					HX_STACK_LINE(2949)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(2949)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
					}
					else{
						HX_STACK_LINE(2956)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(2957)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2958)
						ret->next = null();
					}
					HX_STACK_LINE(2963)
					Dynamic();
				}
				HX_STACK_LINE(2965)
				ret->elt = o;
				HX_STACK_LINE(2966)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2946)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2968)
	if (((cur == null()))){
		HX_STACK_LINE(2969)
		temp->next = this->head;
		HX_STACK_LINE(2970)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(2973)
		temp->next = cur->next;
		HX_STACK_LINE(2974)
		cur->next = temp;
	}
	HX_STACK_LINE(2976)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(2977)
	(this->length)++;
	HX_STACK_LINE(2978)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbSet cur,::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::insert","zpp_nape/util/Lists.hx",2935);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this,::zpp_nape::callbacks::ZPP_CbSet &o,::zpp_nape::util::ZNPNode_ZPP_CbSet &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2935);
			{
				HX_STACK_LINE(2935)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2935);
						{
							HX_STACK_LINE(2935)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2935)
							{
								HX_STACK_LINE(2935)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(2935)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(2935)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(2935)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2935)
									ret->next = null();
								}
								HX_STACK_LINE(2935)
								Dynamic();
							}
							HX_STACK_LINE(2935)
							ret->elt = o;
							HX_STACK_LINE(2935)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2935)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2935)
				if (((cur == null()))){
					HX_STACK_LINE(2935)
					temp->next = __this->head;
					HX_STACK_LINE(2935)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(2935)
					temp->next = cur->next;
					HX_STACK_LINE(2935)
					cur->next = temp;
				}
				HX_STACK_LINE(2935)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(2935)
				(__this->length)++;
				HX_STACK_LINE(2935)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(2935)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbSet_obj,insert,return )

Void ZNPList_ZPP_CbSet_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbSet x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::addAll","zpp_nape/util/Lists.hx",2917);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(2918)
		{
		}
		HX_STACK_LINE(2926)
		{
			HX_STACK_LINE(2927)
			::zpp_nape::util::ZNPNode_ZPP_CbSet cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2928)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2929)
				::zpp_nape::callbacks::ZPP_CbSet i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2930)
				this->add(i);
				HX_STACK_LINE(2931)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::inlined_add","zpp_nape/util/Lists.hx",2880);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(2881)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2889);
			{
				HX_STACK_LINE(2890)
				::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2891)
				{
					HX_STACK_LINE(2892)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
						HX_STACK_LINE(2892)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
					}
					else{
						HX_STACK_LINE(2899)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
						HX_STACK_LINE(2900)
						::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2901)
						ret->next = null();
					}
					HX_STACK_LINE(2906)
					Dynamic();
				}
				HX_STACK_LINE(2908)
				ret->elt = o;
				HX_STACK_LINE(2909)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2889)
	::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2911)
	temp->next = this->head;
	HX_STACK_LINE(2912)
	this->head = temp;
	HX_STACK_LINE(2913)
	this->modified = true;
	HX_STACK_LINE(2914)
	(this->length)++;
	HX_STACK_LINE(2915)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_CbSet ZNPList_ZPP_CbSet_obj::add( ::zpp_nape::callbacks::ZPP_CbSet o){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::add","zpp_nape/util/Lists.hx",2878);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o,::zpp_nape::util::ZNPList_ZPP_CbSet_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2878);
			{
				HX_STACK_LINE(2878)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbSet Block( ::zpp_nape::callbacks::ZPP_CbSet &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",2878);
						{
							HX_STACK_LINE(2878)
							::zpp_nape::util::ZNPNode_ZPP_CbSet ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(2878)
							{
								HX_STACK_LINE(2878)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool == null()))){
									HX_STACK_LINE(2878)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::__new();
								}
								else{
									HX_STACK_LINE(2878)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool;
									HX_STACK_LINE(2878)
									::zpp_nape::util::ZNPNode_ZPP_CbSet_obj::zpp_pool = ret->next;
									HX_STACK_LINE(2878)
									ret->next = null();
								}
								HX_STACK_LINE(2878)
								Dynamic();
							}
							HX_STACK_LINE(2878)
							ret->elt = o;
							HX_STACK_LINE(2878)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(2878)
				::zpp_nape::util::ZNPNode_ZPP_CbSet temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(2878)
				temp->next = __this->head;
				HX_STACK_LINE(2878)
				__this->head = temp;
				HX_STACK_LINE(2878)
				__this->modified = true;
				HX_STACK_LINE(2878)
				(__this->length)++;
				HX_STACK_LINE(2878)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(2878)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,add,return )

Void ZNPList_ZPP_CbSet_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbSet i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbSet::setbegin","zpp_nape/util/Lists.hx",2873);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(2874)
		this->head = i;
		HX_STACK_LINE(2875)
		this->modified = true;
		HX_STACK_LINE(2876)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbSet_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CbSet ZNPList_ZPP_CbSet_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbSet::begin","zpp_nape/util/Lists.hx",2868);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2868)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbSet_obj,begin,return )


ZNPList_ZPP_CbSet_obj::ZNPList_ZPP_CbSet_obj()
{
}

void ZNPList_ZPP_CbSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbSet);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CbSet_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbSet >(); return inValue; }
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

void ZNPList_ZPP_CbSet_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbSet_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CbSet_obj::__mClass;

void ZNPList_ZPP_CbSet_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbSet"), hx::TCanCast< ZNPList_ZPP_CbSet_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CbSet_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
