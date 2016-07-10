#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CbType_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CbType::new","zpp_nape/util/Lists.hx",175);
{
	HX_STACK_LINE(182)
	this->length = (int)0;
	HX_STACK_LINE(181)
	this->pushmod = false;
	HX_STACK_LINE(180)
	this->modified = false;
	HX_STACK_LINE(176)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CbType_obj::~ZNPList_ZPP_CbType_obj() { }

Dynamic ZNPList_ZPP_CbType_obj::__CreateEmpty() { return  new ZNPList_ZPP_CbType_obj; }
hx::ObjectPtr< ZNPList_ZPP_CbType_obj > ZNPList_ZPP_CbType_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > result = new ZNPList_ZPP_CbType_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CbType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CbType_obj > result = new ZNPList_ZPP_CbType_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::at","zpp_nape/util/Lists.hx",545);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(546)
	{
	}
	HX_STACK_LINE(554)
	::zpp_nape::util::ZNPNode_ZPP_CbType it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(555)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_CbType(it->elt) : ::zpp_nape::callbacks::ZPP_CbType(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::iterator_at","zpp_nape/util/Lists.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(533)
	{
	}
	HX_STACK_LINE(541)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(542)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(542)
		ret = ret->next;
	}
	HX_STACK_LINE(543)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::back","zpp_nape/util/Lists.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_LINE(524)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(525)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(526)
	while(((cur != null()))){
		HX_STACK_LINE(527)
		ret = cur;
		HX_STACK_LINE(528)
		cur = cur->next;
	}
	HX_STACK_LINE(530)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,back,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::front","zpp_nape/util/Lists.hx",523);
	HX_STACK_THIS(this);
	HX_STACK_LINE(523)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,front,return )

bool ZNPList_ZPP_CbType_obj::inlined_has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_has","zpp_nape/util/Lists.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(494)
	{
	}
	HX_STACK_LINE(502)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(503)
	{
		HX_STACK_LINE(504)
		ret = false;
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(506)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(507)
			while(((cx_ite != null()))){
				HX_STACK_LINE(508)
				::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(509)
				if (((npite == obj))){
					HX_STACK_LINE(511)
					ret = true;
					HX_STACK_LINE(512)
					break;
				}
				HX_STACK_LINE(515)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(519)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_has,return )

bool ZNPList_ZPP_CbType_obj::has( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::has","zpp_nape/util/Lists.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::callbacks::ZPP_CbType &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",491);
			{
				HX_STACK_LINE(491)
				{
				}
				HX_STACK_LINE(491)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(491)
				{
					HX_STACK_LINE(491)
					ret = false;
					HX_STACK_LINE(491)
					{
						HX_STACK_LINE(491)
						::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(491)
						while(((cx_ite != null()))){
							HX_STACK_LINE(491)
							::zpp_nape::callbacks::ZPP_CbType npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(491)
							if (((npite == obj))){
								HX_STACK_LINE(491)
								ret = true;
								HX_STACK_LINE(491)
								break;
							}
							HX_STACK_LINE(491)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(491)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(491)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,has,return )

int ZNPList_ZPP_CbType_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::size","zpp_nape/util/Lists.hx",491);
	HX_STACK_THIS(this);
	HX_STACK_LINE(491)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,size,return )

bool ZNPList_ZPP_CbType_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::empty","zpp_nape/util/Lists.hx",489);
	HX_STACK_THIS(this);
	HX_STACK_LINE(489)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,empty,return )

Void ZNPList_ZPP_CbType_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::reverse","zpp_nape/util/Lists.hx",474);
		HX_STACK_THIS(this);
		HX_STACK_LINE(475)
		::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(476)
		::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(477)
		while(((cur != null()))){
			HX_STACK_LINE(478)
			::zpp_nape::util::ZNPNode_ZPP_CbType nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(479)
			cur->next = pre;
			HX_STACK_LINE(480)
			this->head = cur;
			HX_STACK_LINE(481)
			pre = cur;
			HX_STACK_LINE(482)
			cur = nx;
		}
		HX_STACK_LINE(484)
		this->modified = true;
		HX_STACK_LINE(485)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,reverse,(void))

Void ZNPList_ZPP_CbType_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_clear","zpp_nape/util/Lists.hx",468);
		HX_STACK_THIS(this);
		HX_STACK_LINE(470)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(470)
			{
			}
			HX_STACK_LINE(470)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(470)
			this->head = ret->next;
			HX_STACK_LINE(470)
			{
			}
			HX_STACK_LINE(470)
			{
				HX_STACK_LINE(470)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(470)
				{
				}
				HX_STACK_LINE(470)
				o->elt = null();
				HX_STACK_LINE(470)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
				HX_STACK_LINE(470)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(470)
			if (((this->head == null()))){
				HX_STACK_LINE(470)
				this->pushmod = true;
			}
			HX_STACK_LINE(470)
			this->modified = true;
			HX_STACK_LINE(470)
			(this->length)--;
		}
		HX_STACK_LINE(471)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_clear,(void))

Void ZNPList_ZPP_CbType_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::clear","zpp_nape/util/Lists.hx",466);
		HX_STACK_THIS(this);
		HX_STACK_LINE(466)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(466)
			{
			}
			HX_STACK_LINE(466)
			::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(466)
			this->head = ret->next;
			HX_STACK_LINE(466)
			{
			}
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(466)
				{
				}
				HX_STACK_LINE(466)
				o->elt = null();
				HX_STACK_LINE(466)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
				HX_STACK_LINE(466)
				::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
			}
			HX_STACK_LINE(466)
			if (((this->head == null()))){
				HX_STACK_LINE(466)
				this->pushmod = true;
			}
			HX_STACK_LINE(466)
			this->modified = true;
			HX_STACK_LINE(466)
			(this->length)--;
		}
		HX_STACK_LINE(466)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CbType pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::splice","zpp_nape/util/Lists.hx",462);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(463)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(463)
		this->erase(pre);
	}
	HX_STACK_LINE(464)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_erase","zpp_nape/util/Lists.hx",416);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(417)
	{
	}
	HX_STACK_LINE(425)
	::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(426)
	::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(427)
	if (((pre == null()))){
		HX_STACK_LINE(428)
		old = this->head;
		HX_STACK_LINE(429)
		ret = old->next;
		HX_STACK_LINE(430)
		this->head = ret;
		HX_STACK_LINE(431)
		if (((this->head == null()))){
			HX_STACK_LINE(431)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(434)
		old = pre->next;
		HX_STACK_LINE(435)
		ret = old->next;
		HX_STACK_LINE(436)
		pre->next = ret;
		HX_STACK_LINE(437)
		if (((ret == null()))){
			HX_STACK_LINE(437)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(439)
	{
	}
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(441)
		::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(442)
		{
		}
		HX_STACK_LINE(450)
		o->elt = null();
		HX_STACK_LINE(451)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
		HX_STACK_LINE(452)
		::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
	}
	HX_STACK_LINE(457)
	this->modified = true;
	HX_STACK_LINE(458)
	(this->length)--;
	HX_STACK_LINE(459)
	this->pushmod = true;
	HX_STACK_LINE(460)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CbType pre){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::erase","zpp_nape/util/Lists.hx",414);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::util::ZNPNode_ZPP_CbType &pre,::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",414);
			{
				HX_STACK_LINE(414)
				{
				}
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(414)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(414)
				if (((pre == null()))){
					HX_STACK_LINE(414)
					old = __this->head;
					HX_STACK_LINE(414)
					ret = old->next;
					HX_STACK_LINE(414)
					__this->head = ret;
					HX_STACK_LINE(414)
					if (((__this->head == null()))){
						HX_STACK_LINE(414)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(414)
					old = pre->next;
					HX_STACK_LINE(414)
					ret = old->next;
					HX_STACK_LINE(414)
					pre->next = ret;
					HX_STACK_LINE(414)
					if (((ret == null()))){
						HX_STACK_LINE(414)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(414)
				{
				}
				HX_STACK_LINE(414)
				{
					HX_STACK_LINE(414)
					::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(414)
					{
					}
					HX_STACK_LINE(414)
					o->elt = null();
					HX_STACK_LINE(414)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
					HX_STACK_LINE(414)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
				}
				HX_STACK_LINE(414)
				__this->modified = true;
				HX_STACK_LINE(414)
				(__this->length)--;
				HX_STACK_LINE(414)
				__this->pushmod = true;
				HX_STACK_LINE(414)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(414)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,erase,return )

bool ZNPList_ZPP_CbType_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_try_remove","zpp_nape/util/Lists.hx",391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(392)
	{
	}
	HX_STACK_LINE(400)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(401)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(402)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(403)
	while(((cur != null()))){
		HX_STACK_LINE(404)
		if (((cur->elt == obj))){
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(405)
				{
				}
				HX_STACK_LINE(405)
				::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(405)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(405)
				if (((pre == null()))){
					HX_STACK_LINE(405)
					old = this->head;
					HX_STACK_LINE(405)
					ret1 = old->next;
					HX_STACK_LINE(405)
					this->head = ret1;
					HX_STACK_LINE(405)
					if (((this->head == null()))){
						HX_STACK_LINE(405)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(405)
					old = pre->next;
					HX_STACK_LINE(405)
					ret1 = old->next;
					HX_STACK_LINE(405)
					pre->next = ret1;
					HX_STACK_LINE(405)
					if (((ret1 == null()))){
						HX_STACK_LINE(405)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(405)
				{
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(405)
					{
					}
					HX_STACK_LINE(405)
					o->elt = null();
					HX_STACK_LINE(405)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
					HX_STACK_LINE(405)
					::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
				}
				HX_STACK_LINE(405)
				this->modified = true;
				HX_STACK_LINE(405)
				(this->length)--;
				HX_STACK_LINE(405)
				this->pushmod = true;
				HX_STACK_LINE(405)
				ret1;
			}
			HX_STACK_LINE(406)
			ret = true;
			HX_STACK_LINE(407)
			break;
		}
		HX_STACK_LINE(409)
		pre = cur;
		HX_STACK_LINE(410)
		cur = cur->next;
	}
	HX_STACK_LINE(412)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CbType_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_remove","zpp_nape/util/Lists.hx",378);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(379)
		{
		}
		HX_STACK_LINE(387)
		{
			HX_STACK_LINE(387)
			{
			}
			HX_STACK_LINE(387)
			::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(387)
			::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(387)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(387)
			while(((cur != null()))){
				HX_STACK_LINE(387)
				if (((cur->elt == obj))){
					HX_STACK_LINE(387)
					{
						HX_STACK_LINE(387)
						{
						}
						HX_STACK_LINE(387)
						::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(387)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(387)
						if (((pre == null()))){
							HX_STACK_LINE(387)
							old = this->head;
							HX_STACK_LINE(387)
							ret1 = old->next;
							HX_STACK_LINE(387)
							this->head = ret1;
							HX_STACK_LINE(387)
							if (((this->head == null()))){
								HX_STACK_LINE(387)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(387)
							old = pre->next;
							HX_STACK_LINE(387)
							ret1 = old->next;
							HX_STACK_LINE(387)
							pre->next = ret1;
							HX_STACK_LINE(387)
							if (((ret1 == null()))){
								HX_STACK_LINE(387)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(387)
						{
						}
						HX_STACK_LINE(387)
						{
							HX_STACK_LINE(387)
							::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(387)
							{
							}
							HX_STACK_LINE(387)
							o->elt = null();
							HX_STACK_LINE(387)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
							HX_STACK_LINE(387)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
						}
						HX_STACK_LINE(387)
						this->modified = true;
						HX_STACK_LINE(387)
						(this->length)--;
						HX_STACK_LINE(387)
						this->pushmod = true;
						HX_STACK_LINE(387)
						ret1;
					}
					HX_STACK_LINE(387)
					ret = true;
					HX_STACK_LINE(387)
					break;
				}
				HX_STACK_LINE(387)
				pre = cur;
				HX_STACK_LINE(387)
				cur = cur->next;
			}
			HX_STACK_LINE(387)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_remove,(void))

bool ZNPList_ZPP_CbType_obj::try_remove( ::zpp_nape::callbacks::ZPP_CbType obj){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::try_remove","zpp_nape/util/Lists.hx",353);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(354)
	{
	}
	HX_STACK_LINE(362)
	::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(363)
	::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(364)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(365)
	while(((cur != null()))){
		HX_STACK_LINE(366)
		if (((cur->elt == obj))){
			HX_STACK_LINE(367)
			this->erase(pre);
			HX_STACK_LINE(368)
			ret = true;
			HX_STACK_LINE(369)
			break;
		}
		HX_STACK_LINE(371)
		pre = cur;
		HX_STACK_LINE(372)
		cur = cur->next;
	}
	HX_STACK_LINE(374)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,try_remove,return )

Void ZNPList_ZPP_CbType_obj::remove( ::zpp_nape::callbacks::ZPP_CbType obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::remove","zpp_nape/util/Lists.hx",342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(343)
		{
		}
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			{
			}
			HX_STACK_LINE(351)
			::zpp_nape::util::ZNPNode_ZPP_CbType pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(351)
			::zpp_nape::util::ZNPNode_ZPP_CbType cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(351)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(351)
			while(((cur != null()))){
				HX_STACK_LINE(351)
				if (((cur->elt == obj))){
					HX_STACK_LINE(351)
					{
						HX_STACK_LINE(351)
						{
						}
						HX_STACK_LINE(351)
						::zpp_nape::util::ZNPNode_ZPP_CbType old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(351)
						::zpp_nape::util::ZNPNode_ZPP_CbType ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(351)
						if (((pre == null()))){
							HX_STACK_LINE(351)
							old = this->head;
							HX_STACK_LINE(351)
							ret1 = old->next;
							HX_STACK_LINE(351)
							this->head = ret1;
							HX_STACK_LINE(351)
							if (((this->head == null()))){
								HX_STACK_LINE(351)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(351)
							old = pre->next;
							HX_STACK_LINE(351)
							ret1 = old->next;
							HX_STACK_LINE(351)
							pre->next = ret1;
							HX_STACK_LINE(351)
							if (((ret1 == null()))){
								HX_STACK_LINE(351)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(351)
						{
						}
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(351)
							::zpp_nape::util::ZNPNode_ZPP_CbType o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(351)
							{
							}
							HX_STACK_LINE(351)
							o->elt = null();
							HX_STACK_LINE(351)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
							HX_STACK_LINE(351)
							::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
						}
						HX_STACK_LINE(351)
						this->modified = true;
						HX_STACK_LINE(351)
						(this->length)--;
						HX_STACK_LINE(351)
						this->pushmod = true;
						HX_STACK_LINE(351)
						ret1;
					}
					HX_STACK_LINE(351)
					ret = true;
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				pre = cur;
				HX_STACK_LINE(351)
				cur = cur->next;
			}
			HX_STACK_LINE(351)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_pop_unsafe","zpp_nape/util/Lists.hx",329);
	HX_STACK_THIS(this);
	HX_STACK_LINE(330)
	{
	}
	HX_STACK_LINE(338)
	::zpp_nape::callbacks::ZPP_CbType ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(339)
	this->pop();
	HX_STACK_LINE(340)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::pop_unsafe","zpp_nape/util/Lists.hx",327);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",327);
			{
				HX_STACK_LINE(327)
				{
				}
				HX_STACK_LINE(327)
				::zpp_nape::callbacks::ZPP_CbType ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(327)
				__this->pop();
				HX_STACK_LINE(327)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(327)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop_unsafe,return )

Void ZNPList_ZPP_CbType_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_pop","zpp_nape/util/Lists.hx",294);
		HX_STACK_THIS(this);
		HX_STACK_LINE(295)
		{
		}
		HX_STACK_LINE(303)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(304)
		this->head = ret->next;
		HX_STACK_LINE(305)
		{
		}
		HX_STACK_LINE(306)
		{
			HX_STACK_LINE(307)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(308)
			{
			}
			HX_STACK_LINE(316)
			o->elt = null();
			HX_STACK_LINE(317)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
			HX_STACK_LINE(318)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(323)
		if (((this->head == null()))){
			HX_STACK_LINE(323)
			this->pushmod = true;
		}
		HX_STACK_LINE(324)
		this->modified = true;
		HX_STACK_LINE(325)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,inlined_pop,(void))

Void ZNPList_ZPP_CbType_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::pop","zpp_nape/util/Lists.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_LINE(292)
		{
		}
		HX_STACK_LINE(292)
		::zpp_nape::util::ZNPNode_ZPP_CbType ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(292)
		this->head = ret->next;
		HX_STACK_LINE(292)
		{
		}
		HX_STACK_LINE(292)
		{
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPNode_ZPP_CbType o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(292)
			{
			}
			HX_STACK_LINE(292)
			o->elt = null();
			HX_STACK_LINE(292)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
			HX_STACK_LINE(292)
			::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = o;
		}
		HX_STACK_LINE(292)
		if (((this->head == null()))){
			HX_STACK_LINE(292)
			this->pushmod = true;
		}
		HX_STACK_LINE(292)
		this->modified = true;
		HX_STACK_LINE(292)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_insert","zpp_nape/util/Lists.hx",249);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(250)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",258);
			{
				HX_STACK_LINE(259)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(261)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
						HX_STACK_LINE(261)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
					}
					else{
						HX_STACK_LINE(268)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(269)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
						HX_STACK_LINE(270)
						ret->next = null();
					}
					HX_STACK_LINE(275)
					Dynamic();
				}
				HX_STACK_LINE(277)
				ret->elt = o;
				HX_STACK_LINE(278)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(258)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(280)
	if (((cur == null()))){
		HX_STACK_LINE(281)
		temp->next = this->head;
		HX_STACK_LINE(282)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(285)
		temp->next = cur->next;
		HX_STACK_LINE(286)
		cur->next = temp;
	}
	HX_STACK_LINE(288)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(289)
	(this->length)++;
	HX_STACK_LINE(290)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CbType cur,::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::insert","zpp_nape/util/Lists.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this,::zpp_nape::callbacks::ZPP_CbType &o,::zpp_nape::util::ZNPNode_ZPP_CbType &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",247);
			{
				HX_STACK_LINE(247)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",247);
						{
							HX_STACK_LINE(247)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(247)
							{
								HX_STACK_LINE(247)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(247)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(247)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(247)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(247)
									ret->next = null();
								}
								HX_STACK_LINE(247)
								Dynamic();
							}
							HX_STACK_LINE(247)
							ret->elt = o;
							HX_STACK_LINE(247)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(247)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(247)
				if (((cur == null()))){
					HX_STACK_LINE(247)
					temp->next = __this->head;
					HX_STACK_LINE(247)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(247)
					temp->next = cur->next;
					HX_STACK_LINE(247)
					cur->next = temp;
				}
				HX_STACK_LINE(247)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(247)
				(__this->length)++;
				HX_STACK_LINE(247)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(247)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CbType_obj,insert,return )

Void ZNPList_ZPP_CbType_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CbType x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::addAll","zpp_nape/util/Lists.hx",229);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(230)
		{
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(239)
			::zpp_nape::util::ZNPNode_ZPP_CbType cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(240)
			while(((cx_ite != null()))){
				HX_STACK_LINE(241)
				::zpp_nape::callbacks::ZPP_CbType i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(242)
				this->add(i);
				HX_STACK_LINE(243)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::inlined_add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::inlined_add","zpp_nape/util/Lists.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(193)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",201);
			{
				HX_STACK_LINE(202)
				::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(203)
				{
					HX_STACK_LINE(204)
					if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
						HX_STACK_LINE(204)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
					}
					else{
						HX_STACK_LINE(211)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
						HX_STACK_LINE(212)
						::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
						HX_STACK_LINE(213)
						ret->next = null();
					}
					HX_STACK_LINE(218)
					Dynamic();
				}
				HX_STACK_LINE(220)
				ret->elt = o;
				HX_STACK_LINE(221)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(201)
	::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(223)
	temp->next = this->head;
	HX_STACK_LINE(224)
	this->head = temp;
	HX_STACK_LINE(225)
	this->modified = true;
	HX_STACK_LINE(226)
	(this->length)++;
	HX_STACK_LINE(227)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_CbType ZNPList_ZPP_CbType_obj::add( ::zpp_nape::callbacks::ZPP_CbType o){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::add","zpp_nape/util/Lists.hx",190);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o,::zpp_nape::util::ZNPList_ZPP_CbType_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",190);
			{
				HX_STACK_LINE(190)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CbType Block( ::zpp_nape::callbacks::ZPP_CbType &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",190);
						{
							HX_STACK_LINE(190)
							::zpp_nape::util::ZNPNode_ZPP_CbType ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								if (((::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool == null()))){
									HX_STACK_LINE(190)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::__new();
								}
								else{
									HX_STACK_LINE(190)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool;
									HX_STACK_LINE(190)
									::zpp_nape::util::ZNPNode_ZPP_CbType_obj::zpp_pool = ret->next;
									HX_STACK_LINE(190)
									ret->next = null();
								}
								HX_STACK_LINE(190)
								Dynamic();
							}
							HX_STACK_LINE(190)
							ret->elt = o;
							HX_STACK_LINE(190)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(190)
				::zpp_nape::util::ZNPNode_ZPP_CbType temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(190)
				temp->next = __this->head;
				HX_STACK_LINE(190)
				__this->head = temp;
				HX_STACK_LINE(190)
				__this->modified = true;
				HX_STACK_LINE(190)
				(__this->length)++;
				HX_STACK_LINE(190)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(190)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,add,return )

Void ZNPList_ZPP_CbType_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CbType i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CbType::setbegin","zpp_nape/util/Lists.hx",185);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(186)
		this->head = i;
		HX_STACK_LINE(187)
		this->modified = true;
		HX_STACK_LINE(188)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CbType_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CbType ZNPList_ZPP_CbType_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CbType::begin","zpp_nape/util/Lists.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CbType_obj,begin,return )


ZNPList_ZPP_CbType_obj::ZNPList_ZPP_CbType_obj()
{
}

void ZNPList_ZPP_CbType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CbType);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CbType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CbType_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CbType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CbType >(); return inValue; }
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

void ZNPList_ZPP_CbType_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CbType_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CbType_obj::__mClass;

void ZNPList_ZPP_CbType_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CbType"), hx::TCanCast< ZNPList_ZPP_CbType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CbType_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
