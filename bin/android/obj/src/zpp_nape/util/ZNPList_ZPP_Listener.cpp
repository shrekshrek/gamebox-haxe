#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Listener
#include <zpp_nape/util/ZNPList_ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Listener
#include <zpp_nape/util/ZNPNode_ZPP_Listener.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Listener_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Listener::new","zpp_nape/util/Lists.hx",10543);
{
	HX_STACK_LINE(10550)
	this->length = (int)0;
	HX_STACK_LINE(10549)
	this->pushmod = false;
	HX_STACK_LINE(10548)
	this->modified = false;
	HX_STACK_LINE(10544)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Listener_obj::~ZNPList_ZPP_Listener_obj() { }

Dynamic ZNPList_ZPP_Listener_obj::__CreateEmpty() { return  new ZNPList_ZPP_Listener_obj; }
hx::ObjectPtr< ZNPList_ZPP_Listener_obj > ZNPList_ZPP_Listener_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Listener_obj > result = new ZNPList_ZPP_Listener_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Listener_obj > result = new ZNPList_ZPP_Listener_obj();
	result->__construct();
	return result;}

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::at","zpp_nape/util/Lists.hx",10913);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10914)
	{
	}
	HX_STACK_LINE(10922)
	::zpp_nape::util::ZNPNode_ZPP_Listener it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(10923)
	return (  (((it != null()))) ? ::zpp_nape::callbacks::ZPP_Listener(it->elt) : ::zpp_nape::callbacks::ZPP_Listener(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::iterator_at","zpp_nape/util/Lists.hx",10900);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(10901)
	{
	}
	HX_STACK_LINE(10909)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10910)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(10910)
		ret = ret->next;
	}
	HX_STACK_LINE(10911)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,iterator_at,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::back","zpp_nape/util/Lists.hx",10891);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10892)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10893)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10894)
	while(((cur != null()))){
		HX_STACK_LINE(10895)
		ret = cur;
		HX_STACK_LINE(10896)
		cur = cur->next;
	}
	HX_STACK_LINE(10898)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,back,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::front","zpp_nape/util/Lists.hx",10891);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10891)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,front,return )

bool ZNPList_ZPP_Listener_obj::inlined_has( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_has","zpp_nape/util/Lists.hx",10861);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10862)
	{
	}
	HX_STACK_LINE(10870)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10871)
	{
		HX_STACK_LINE(10872)
		ret = false;
		HX_STACK_LINE(10873)
		{
			HX_STACK_LINE(10874)
			::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10875)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10876)
				::zpp_nape::callbacks::ZPP_Listener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(10877)
				if (((npite == obj))){
					HX_STACK_LINE(10879)
					ret = true;
					HX_STACK_LINE(10880)
					break;
				}
				HX_STACK_LINE(10883)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(10887)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_has,return )

bool ZNPList_ZPP_Listener_obj::has( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::has","zpp_nape/util/Lists.hx",10859);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Listener_obj *__this,::zpp_nape::callbacks::ZPP_Listener &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10859);
			{
				HX_STACK_LINE(10859)
				{
				}
				HX_STACK_LINE(10859)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10859)
				{
					HX_STACK_LINE(10859)
					ret = false;
					HX_STACK_LINE(10859)
					{
						HX_STACK_LINE(10859)
						::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(10859)
						while(((cx_ite != null()))){
							HX_STACK_LINE(10859)
							::zpp_nape::callbacks::ZPP_Listener npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(10859)
							if (((npite == obj))){
								HX_STACK_LINE(10859)
								ret = true;
								HX_STACK_LINE(10859)
								break;
							}
							HX_STACK_LINE(10859)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(10859)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10859)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,has,return )

int ZNPList_ZPP_Listener_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::size","zpp_nape/util/Lists.hx",10859);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10859)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,size,return )

bool ZNPList_ZPP_Listener_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::empty","zpp_nape/util/Lists.hx",10857);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10857)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,empty,return )

Void ZNPList_ZPP_Listener_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::reverse","zpp_nape/util/Lists.hx",10842);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10843)
		::zpp_nape::util::ZNPNode_ZPP_Listener cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(10844)
		::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(10845)
		while(((cur != null()))){
			HX_STACK_LINE(10846)
			::zpp_nape::util::ZNPNode_ZPP_Listener nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(10847)
			cur->next = pre;
			HX_STACK_LINE(10848)
			this->head = cur;
			HX_STACK_LINE(10849)
			pre = cur;
			HX_STACK_LINE(10850)
			cur = nx;
		}
		HX_STACK_LINE(10852)
		this->modified = true;
		HX_STACK_LINE(10853)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,reverse,(void))

Void ZNPList_ZPP_Listener_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_clear","zpp_nape/util/Lists.hx",10836);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10838)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10838)
			{
			}
			HX_STACK_LINE(10838)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10838)
			this->head = ret->next;
			HX_STACK_LINE(10838)
			{
			}
			HX_STACK_LINE(10838)
			{
				HX_STACK_LINE(10838)
				::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10838)
				{
				}
				HX_STACK_LINE(10838)
				o->elt = null();
				HX_STACK_LINE(10838)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
				HX_STACK_LINE(10838)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10838)
			if (((this->head == null()))){
				HX_STACK_LINE(10838)
				this->pushmod = true;
			}
			HX_STACK_LINE(10838)
			this->modified = true;
			HX_STACK_LINE(10838)
			(this->length)--;
		}
		HX_STACK_LINE(10839)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_clear,(void))

Void ZNPList_ZPP_Listener_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::clear","zpp_nape/util/Lists.hx",10834);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10834)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(10834)
			{
			}
			HX_STACK_LINE(10834)
			::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10834)
			this->head = ret->next;
			HX_STACK_LINE(10834)
			{
			}
			HX_STACK_LINE(10834)
			{
				HX_STACK_LINE(10834)
				::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(10834)
				{
				}
				HX_STACK_LINE(10834)
				o->elt = null();
				HX_STACK_LINE(10834)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
				HX_STACK_LINE(10834)
				::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
			}
			HX_STACK_LINE(10834)
			if (((this->head == null()))){
				HX_STACK_LINE(10834)
				this->pushmod = true;
			}
			HX_STACK_LINE(10834)
			this->modified = true;
			HX_STACK_LINE(10834)
			(this->length)--;
		}
		HX_STACK_LINE(10834)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Listener pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::splice","zpp_nape/util/Lists.hx",10830);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(10831)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(10831)
		this->erase(pre);
	}
	HX_STACK_LINE(10832)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Listener pre){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_erase","zpp_nape/util/Lists.hx",10784);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(10785)
	{
	}
	HX_STACK_LINE(10793)
	::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(10794)
	::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10795)
	if (((pre == null()))){
		HX_STACK_LINE(10796)
		old = this->head;
		HX_STACK_LINE(10797)
		ret = old->next;
		HX_STACK_LINE(10798)
		this->head = ret;
		HX_STACK_LINE(10799)
		if (((this->head == null()))){
			HX_STACK_LINE(10799)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(10802)
		old = pre->next;
		HX_STACK_LINE(10803)
		ret = old->next;
		HX_STACK_LINE(10804)
		pre->next = ret;
		HX_STACK_LINE(10805)
		if (((ret == null()))){
			HX_STACK_LINE(10805)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(10807)
	{
	}
	HX_STACK_LINE(10808)
	{
		HX_STACK_LINE(10809)
		::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(10810)
		{
		}
		HX_STACK_LINE(10818)
		o->elt = null();
		HX_STACK_LINE(10819)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
		HX_STACK_LINE(10820)
		::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
	}
	HX_STACK_LINE(10825)
	this->modified = true;
	HX_STACK_LINE(10826)
	(this->length)--;
	HX_STACK_LINE(10827)
	this->pushmod = true;
	HX_STACK_LINE(10828)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Listener pre){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::erase","zpp_nape/util/Lists.hx",10782);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::util::ZNPNode_ZPP_Listener &pre,::zpp_nape::util::ZNPList_ZPP_Listener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10782);
			{
				HX_STACK_LINE(10782)
				{
				}
				HX_STACK_LINE(10782)
				::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10782)
				::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10782)
				if (((pre == null()))){
					HX_STACK_LINE(10782)
					old = __this->head;
					HX_STACK_LINE(10782)
					ret = old->next;
					HX_STACK_LINE(10782)
					__this->head = ret;
					HX_STACK_LINE(10782)
					if (((__this->head == null()))){
						HX_STACK_LINE(10782)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10782)
					old = pre->next;
					HX_STACK_LINE(10782)
					ret = old->next;
					HX_STACK_LINE(10782)
					pre->next = ret;
					HX_STACK_LINE(10782)
					if (((ret == null()))){
						HX_STACK_LINE(10782)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(10782)
				{
				}
				HX_STACK_LINE(10782)
				{
					HX_STACK_LINE(10782)
					::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10782)
					{
					}
					HX_STACK_LINE(10782)
					o->elt = null();
					HX_STACK_LINE(10782)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
					HX_STACK_LINE(10782)
					::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10782)
				__this->modified = true;
				HX_STACK_LINE(10782)
				(__this->length)--;
				HX_STACK_LINE(10782)
				__this->pushmod = true;
				HX_STACK_LINE(10782)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10782)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,erase,return )

bool ZNPList_ZPP_Listener_obj::inlined_try_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_try_remove","zpp_nape/util/Lists.hx",10759);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10760)
	{
	}
	HX_STACK_LINE(10768)
	::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10769)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10770)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10771)
	while(((cur != null()))){
		HX_STACK_LINE(10772)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10773)
			{
				HX_STACK_LINE(10773)
				{
				}
				HX_STACK_LINE(10773)
				::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(10773)
				::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(10773)
				if (((pre == null()))){
					HX_STACK_LINE(10773)
					old = this->head;
					HX_STACK_LINE(10773)
					ret1 = old->next;
					HX_STACK_LINE(10773)
					this->head = ret1;
					HX_STACK_LINE(10773)
					if (((this->head == null()))){
						HX_STACK_LINE(10773)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(10773)
					old = pre->next;
					HX_STACK_LINE(10773)
					ret1 = old->next;
					HX_STACK_LINE(10773)
					pre->next = ret1;
					HX_STACK_LINE(10773)
					if (((ret1 == null()))){
						HX_STACK_LINE(10773)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(10773)
				{
				}
				HX_STACK_LINE(10773)
				{
					HX_STACK_LINE(10773)
					::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(10773)
					{
					}
					HX_STACK_LINE(10773)
					o->elt = null();
					HX_STACK_LINE(10773)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
					HX_STACK_LINE(10773)
					::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
				}
				HX_STACK_LINE(10773)
				this->modified = true;
				HX_STACK_LINE(10773)
				(this->length)--;
				HX_STACK_LINE(10773)
				this->pushmod = true;
				HX_STACK_LINE(10773)
				ret1;
			}
			HX_STACK_LINE(10774)
			ret = true;
			HX_STACK_LINE(10775)
			break;
		}
		HX_STACK_LINE(10777)
		pre = cur;
		HX_STACK_LINE(10778)
		cur = cur->next;
	}
	HX_STACK_LINE(10780)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Listener_obj::inlined_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_remove","zpp_nape/util/Lists.hx",10746);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(10747)
		{
		}
		HX_STACK_LINE(10755)
		{
			HX_STACK_LINE(10755)
			{
			}
			HX_STACK_LINE(10755)
			::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(10755)
			::zpp_nape::util::ZNPNode_ZPP_Listener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(10755)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10755)
			while(((cur != null()))){
				HX_STACK_LINE(10755)
				if (((cur->elt == obj))){
					HX_STACK_LINE(10755)
					{
						HX_STACK_LINE(10755)
						{
						}
						HX_STACK_LINE(10755)
						::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(10755)
						::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(10755)
						if (((pre == null()))){
							HX_STACK_LINE(10755)
							old = this->head;
							HX_STACK_LINE(10755)
							ret1 = old->next;
							HX_STACK_LINE(10755)
							this->head = ret1;
							HX_STACK_LINE(10755)
							if (((this->head == null()))){
								HX_STACK_LINE(10755)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(10755)
							old = pre->next;
							HX_STACK_LINE(10755)
							ret1 = old->next;
							HX_STACK_LINE(10755)
							pre->next = ret1;
							HX_STACK_LINE(10755)
							if (((ret1 == null()))){
								HX_STACK_LINE(10755)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(10755)
						{
						}
						HX_STACK_LINE(10755)
						{
							HX_STACK_LINE(10755)
							::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(10755)
							{
							}
							HX_STACK_LINE(10755)
							o->elt = null();
							HX_STACK_LINE(10755)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
							HX_STACK_LINE(10755)
							::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(10755)
						this->modified = true;
						HX_STACK_LINE(10755)
						(this->length)--;
						HX_STACK_LINE(10755)
						this->pushmod = true;
						HX_STACK_LINE(10755)
						ret1;
					}
					HX_STACK_LINE(10755)
					ret = true;
					HX_STACK_LINE(10755)
					break;
				}
				HX_STACK_LINE(10755)
				pre = cur;
				HX_STACK_LINE(10755)
				cur = cur->next;
			}
			HX_STACK_LINE(10755)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_remove,(void))

bool ZNPList_ZPP_Listener_obj::try_remove( ::zpp_nape::callbacks::ZPP_Listener obj){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::try_remove","zpp_nape/util/Lists.hx",10721);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(10722)
	{
	}
	HX_STACK_LINE(10730)
	::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(10731)
	::zpp_nape::util::ZNPNode_ZPP_Listener cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(10732)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10733)
	while(((cur != null()))){
		HX_STACK_LINE(10734)
		if (((cur->elt == obj))){
			HX_STACK_LINE(10735)
			this->erase(pre);
			HX_STACK_LINE(10736)
			ret = true;
			HX_STACK_LINE(10737)
			break;
		}
		HX_STACK_LINE(10739)
		pre = cur;
		HX_STACK_LINE(10740)
		cur = cur->next;
	}
	HX_STACK_LINE(10742)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,try_remove,return )

Void ZNPList_ZPP_Listener_obj::remove( ::zpp_nape::callbacks::ZPP_Listener obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::remove","zpp_nape/util/Lists.hx",10710);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(10711)
		{
		}
		HX_STACK_LINE(10719)
		{
			HX_STACK_LINE(10719)
			{
			}
			HX_STACK_LINE(10719)
			::zpp_nape::util::ZNPNode_ZPP_Listener pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(10719)
			::zpp_nape::util::ZNPNode_ZPP_Listener cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(10719)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(10719)
			while(((cur != null()))){
				HX_STACK_LINE(10719)
				if (((cur->elt == obj))){
					HX_STACK_LINE(10719)
					{
						HX_STACK_LINE(10719)
						{
						}
						HX_STACK_LINE(10719)
						::zpp_nape::util::ZNPNode_ZPP_Listener old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(10719)
						::zpp_nape::util::ZNPNode_ZPP_Listener ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(10719)
						if (((pre == null()))){
							HX_STACK_LINE(10719)
							old = this->head;
							HX_STACK_LINE(10719)
							ret1 = old->next;
							HX_STACK_LINE(10719)
							this->head = ret1;
							HX_STACK_LINE(10719)
							if (((this->head == null()))){
								HX_STACK_LINE(10719)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(10719)
							old = pre->next;
							HX_STACK_LINE(10719)
							ret1 = old->next;
							HX_STACK_LINE(10719)
							pre->next = ret1;
							HX_STACK_LINE(10719)
							if (((ret1 == null()))){
								HX_STACK_LINE(10719)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(10719)
						{
						}
						HX_STACK_LINE(10719)
						{
							HX_STACK_LINE(10719)
							::zpp_nape::util::ZNPNode_ZPP_Listener o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(10719)
							{
							}
							HX_STACK_LINE(10719)
							o->elt = null();
							HX_STACK_LINE(10719)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
							HX_STACK_LINE(10719)
							::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
						}
						HX_STACK_LINE(10719)
						this->modified = true;
						HX_STACK_LINE(10719)
						(this->length)--;
						HX_STACK_LINE(10719)
						this->pushmod = true;
						HX_STACK_LINE(10719)
						ret1;
					}
					HX_STACK_LINE(10719)
					ret = true;
					HX_STACK_LINE(10719)
					break;
				}
				HX_STACK_LINE(10719)
				pre = cur;
				HX_STACK_LINE(10719)
				cur = cur->next;
			}
			HX_STACK_LINE(10719)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,remove,(void))

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_pop_unsafe","zpp_nape/util/Lists.hx",10697);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10698)
	{
	}
	HX_STACK_LINE(10706)
	::zpp_nape::callbacks::ZPP_Listener ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(10707)
	this->pop();
	HX_STACK_LINE(10708)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_pop_unsafe,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::pop_unsafe","zpp_nape/util/Lists.hx",10695);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_Listener Block( ::zpp_nape::util::ZNPList_ZPP_Listener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10695);
			{
				HX_STACK_LINE(10695)
				{
				}
				HX_STACK_LINE(10695)
				::zpp_nape::callbacks::ZPP_Listener ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10695)
				__this->pop();
				HX_STACK_LINE(10695)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10695)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,pop_unsafe,return )

Void ZNPList_ZPP_Listener_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_pop","zpp_nape/util/Lists.hx",10662);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10663)
		{
		}
		HX_STACK_LINE(10671)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10672)
		this->head = ret->next;
		HX_STACK_LINE(10673)
		{
		}
		HX_STACK_LINE(10674)
		{
			HX_STACK_LINE(10675)
			::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10676)
			{
			}
			HX_STACK_LINE(10684)
			o->elt = null();
			HX_STACK_LINE(10685)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
			HX_STACK_LINE(10686)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10691)
		if (((this->head == null()))){
			HX_STACK_LINE(10691)
			this->pushmod = true;
		}
		HX_STACK_LINE(10692)
		this->modified = true;
		HX_STACK_LINE(10693)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,inlined_pop,(void))

Void ZNPList_ZPP_Listener_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::pop","zpp_nape/util/Lists.hx",10660);
		HX_STACK_THIS(this);
		HX_STACK_LINE(10660)
		{
		}
		HX_STACK_LINE(10660)
		::zpp_nape::util::ZNPNode_ZPP_Listener ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(10660)
		this->head = ret->next;
		HX_STACK_LINE(10660)
		{
		}
		HX_STACK_LINE(10660)
		{
			HX_STACK_LINE(10660)
			::zpp_nape::util::ZNPNode_ZPP_Listener o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(10660)
			{
			}
			HX_STACK_LINE(10660)
			o->elt = null();
			HX_STACK_LINE(10660)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
			HX_STACK_LINE(10660)
			::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = o;
		}
		HX_STACK_LINE(10660)
		if (((this->head == null()))){
			HX_STACK_LINE(10660)
			this->pushmod = true;
		}
		HX_STACK_LINE(10660)
		this->modified = true;
		HX_STACK_LINE(10660)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Listener cur,::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_insert","zpp_nape/util/Lists.hx",10617);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(10618)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::callbacks::ZPP_Listener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10626);
			{
				HX_STACK_LINE(10627)
				::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10628)
				{
					HX_STACK_LINE(10629)
					if (((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool == null()))){
						HX_STACK_LINE(10629)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();
					}
					else{
						HX_STACK_LINE(10636)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
						HX_STACK_LINE(10637)
						::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(10638)
						ret->next = null();
					}
					HX_STACK_LINE(10643)
					Dynamic();
				}
				HX_STACK_LINE(10645)
				ret->elt = o;
				HX_STACK_LINE(10646)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10626)
	::zpp_nape::util::ZNPNode_ZPP_Listener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10648)
	if (((cur == null()))){
		HX_STACK_LINE(10649)
		temp->next = this->head;
		HX_STACK_LINE(10650)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(10653)
		temp->next = cur->next;
		HX_STACK_LINE(10654)
		cur->next = temp;
	}
	HX_STACK_LINE(10656)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(10657)
	(this->length)++;
	HX_STACK_LINE(10658)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Listener cur,::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::insert","zpp_nape/util/Lists.hx",10615);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::util::ZNPList_ZPP_Listener_obj *__this,::zpp_nape::callbacks::ZPP_Listener &o,::zpp_nape::util::ZNPNode_ZPP_Listener &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10615);
			{
				HX_STACK_LINE(10615)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::callbacks::ZPP_Listener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10615);
						{
							HX_STACK_LINE(10615)
							::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10615)
							{
								HX_STACK_LINE(10615)
								if (((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool == null()))){
									HX_STACK_LINE(10615)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();
								}
								else{
									HX_STACK_LINE(10615)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
									HX_STACK_LINE(10615)
									::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10615)
									ret->next = null();
								}
								HX_STACK_LINE(10615)
								Dynamic();
							}
							HX_STACK_LINE(10615)
							ret->elt = o;
							HX_STACK_LINE(10615)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10615)
				::zpp_nape::util::ZNPNode_ZPP_Listener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10615)
				if (((cur == null()))){
					HX_STACK_LINE(10615)
					temp->next = __this->head;
					HX_STACK_LINE(10615)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(10615)
					temp->next = cur->next;
					HX_STACK_LINE(10615)
					cur->next = temp;
				}
				HX_STACK_LINE(10615)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(10615)
				(__this->length)++;
				HX_STACK_LINE(10615)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(10615)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Listener_obj,insert,return )

Void ZNPList_ZPP_Listener_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Listener x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::addAll","zpp_nape/util/Lists.hx",10597);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(10598)
		{
		}
		HX_STACK_LINE(10606)
		{
			HX_STACK_LINE(10607)
			::zpp_nape::util::ZNPNode_ZPP_Listener cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(10608)
			while(((cx_ite != null()))){
				HX_STACK_LINE(10609)
				::zpp_nape::callbacks::ZPP_Listener i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(10610)
				this->add(i);
				HX_STACK_LINE(10611)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,addAll,(void))

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::inlined_add( ::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::inlined_add","zpp_nape/util/Lists.hx",10560);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(10561)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::callbacks::ZPP_Listener &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10569);
			{
				HX_STACK_LINE(10570)
				::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(10571)
				{
					HX_STACK_LINE(10572)
					if (((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool == null()))){
						HX_STACK_LINE(10572)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();
					}
					else{
						HX_STACK_LINE(10579)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
						HX_STACK_LINE(10580)
						::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
						HX_STACK_LINE(10581)
						ret->next = null();
					}
					HX_STACK_LINE(10586)
					Dynamic();
				}
				HX_STACK_LINE(10588)
				ret->elt = o;
				HX_STACK_LINE(10589)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(10569)
	::zpp_nape::util::ZNPNode_ZPP_Listener temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(10591)
	temp->next = this->head;
	HX_STACK_LINE(10592)
	this->head = temp;
	HX_STACK_LINE(10593)
	this->modified = true;
	HX_STACK_LINE(10594)
	(this->length)++;
	HX_STACK_LINE(10595)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,inlined_add,return )

::zpp_nape::callbacks::ZPP_Listener ZNPList_ZPP_Listener_obj::add( ::zpp_nape::callbacks::ZPP_Listener o){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::add","zpp_nape/util/Lists.hx",10558);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_Listener Block( ::zpp_nape::callbacks::ZPP_Listener &o,::zpp_nape::util::ZNPList_ZPP_Listener_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10558);
			{
				HX_STACK_LINE(10558)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Listener Block( ::zpp_nape::callbacks::ZPP_Listener &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",10558);
						{
							HX_STACK_LINE(10558)
							::zpp_nape::util::ZNPNode_ZPP_Listener ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(10558)
							{
								HX_STACK_LINE(10558)
								if (((::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool == null()))){
									HX_STACK_LINE(10558)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::__new();
								}
								else{
									HX_STACK_LINE(10558)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool;
									HX_STACK_LINE(10558)
									::zpp_nape::util::ZNPNode_ZPP_Listener_obj::zpp_pool = ret->next;
									HX_STACK_LINE(10558)
									ret->next = null();
								}
								HX_STACK_LINE(10558)
								Dynamic();
							}
							HX_STACK_LINE(10558)
							ret->elt = o;
							HX_STACK_LINE(10558)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(10558)
				::zpp_nape::util::ZNPNode_ZPP_Listener temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(10558)
				temp->next = __this->head;
				HX_STACK_LINE(10558)
				__this->head = temp;
				HX_STACK_LINE(10558)
				__this->modified = true;
				HX_STACK_LINE(10558)
				(__this->length)++;
				HX_STACK_LINE(10558)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(10558)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,add,return )

Void ZNPList_ZPP_Listener_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Listener i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Listener::setbegin","zpp_nape/util/Lists.hx",10553);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(10554)
		this->head = i;
		HX_STACK_LINE(10555)
		this->modified = true;
		HX_STACK_LINE(10556)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Listener_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Listener ZNPList_ZPP_Listener_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Listener::begin","zpp_nape/util/Lists.hx",10548);
	HX_STACK_THIS(this);
	HX_STACK_LINE(10548)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Listener_obj,begin,return )


ZNPList_ZPP_Listener_obj::ZNPList_ZPP_Listener_obj()
{
}

void ZNPList_ZPP_Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Listener);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Listener_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Listener >(); return inValue; }
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

void ZNPList_ZPP_Listener_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Listener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Listener_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Listener_obj::__mClass;

void ZNPList_ZPP_Listener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Listener"), hx::TCanCast< ZNPList_ZPP_Listener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Listener_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
