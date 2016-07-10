#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimpleVert
#include <zpp_nape/geom/ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimpleVert
#include <zpp_nape/util/ZNPList_ZPP_SimpleVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimpleVert
#include <zpp_nape/util/ZNPNode_ZPP_SimpleVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimpleVert_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::new","zpp_nape/util/Lists.hx",7471);
{
	HX_STACK_LINE(7478)
	this->length = (int)0;
	HX_STACK_LINE(7477)
	this->pushmod = false;
	HX_STACK_LINE(7476)
	this->modified = false;
	HX_STACK_LINE(7472)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SimpleVert_obj::~ZNPList_ZPP_SimpleVert_obj() { }

Dynamic ZNPList_ZPP_SimpleVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimpleVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > ZNPList_ZPP_SimpleVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > result = new ZNPList_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimpleVert_obj > result = new ZNPList_ZPP_SimpleVert_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::at","zpp_nape/util/Lists.hx",7841);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7842)
	{
	}
	HX_STACK_LINE(7850)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7851)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_SimpleVert(it->elt) : ::zpp_nape::geom::ZPP_SimpleVert(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::iterator_at","zpp_nape/util/Lists.hx",7828);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7829)
	{
	}
	HX_STACK_LINE(7837)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7838)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(7838)
		ret = ret->next;
	}
	HX_STACK_LINE(7839)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::back","zpp_nape/util/Lists.hx",7819);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7820)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7821)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7822)
	while(((cur != null()))){
		HX_STACK_LINE(7823)
		ret = cur;
		HX_STACK_LINE(7824)
		cur = cur->next;
	}
	HX_STACK_LINE(7826)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,back,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::front","zpp_nape/util/Lists.hx",7819);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7819)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,front,return )

bool ZNPList_ZPP_SimpleVert_obj::inlined_has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_has","zpp_nape/util/Lists.hx",7789);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7790)
	{
	}
	HX_STACK_LINE(7798)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7799)
	{
		HX_STACK_LINE(7800)
		ret = false;
		HX_STACK_LINE(7801)
		{
			HX_STACK_LINE(7802)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7803)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7804)
				::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7805)
				if (((npite == obj))){
					HX_STACK_LINE(7807)
					ret = true;
					HX_STACK_LINE(7808)
					break;
				}
				HX_STACK_LINE(7811)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7815)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_has,return )

bool ZNPList_ZPP_SimpleVert_obj::has( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::has","zpp_nape/util/Lists.hx",7787);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj *__this,::zpp_nape::geom::ZPP_SimpleVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7787);
			{
				HX_STACK_LINE(7787)
				{
				}
				HX_STACK_LINE(7787)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7787)
				{
					HX_STACK_LINE(7787)
					ret = false;
					HX_STACK_LINE(7787)
					{
						HX_STACK_LINE(7787)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(7787)
						while(((cx_ite != null()))){
							HX_STACK_LINE(7787)
							::zpp_nape::geom::ZPP_SimpleVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(7787)
							if (((npite == obj))){
								HX_STACK_LINE(7787)
								ret = true;
								HX_STACK_LINE(7787)
								break;
							}
							HX_STACK_LINE(7787)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(7787)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7787)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,has,return )

int ZNPList_ZPP_SimpleVert_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::size","zpp_nape/util/Lists.hx",7787);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7787)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,size,return )

bool ZNPList_ZPP_SimpleVert_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::empty","zpp_nape/util/Lists.hx",7785);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7785)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,empty,return )

Void ZNPList_ZPP_SimpleVert_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::reverse","zpp_nape/util/Lists.hx",7770);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7771)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7772)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7773)
		while(((cur != null()))){
			HX_STACK_LINE(7774)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7775)
			cur->next = pre;
			HX_STACK_LINE(7776)
			this->head = cur;
			HX_STACK_LINE(7777)
			pre = cur;
			HX_STACK_LINE(7778)
			cur = nx;
		}
		HX_STACK_LINE(7780)
		this->modified = true;
		HX_STACK_LINE(7781)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,reverse,(void))

Void ZNPList_ZPP_SimpleVert_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_clear","zpp_nape/util/Lists.hx",7764);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7766)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7766)
			{
			}
			HX_STACK_LINE(7766)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7766)
			this->head = ret->next;
			HX_STACK_LINE(7766)
			{
			}
			HX_STACK_LINE(7766)
			{
				HX_STACK_LINE(7766)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7766)
				{
				}
				HX_STACK_LINE(7766)
				o->elt = null();
				HX_STACK_LINE(7766)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(7766)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7766)
			if (((this->head == null()))){
				HX_STACK_LINE(7766)
				this->pushmod = true;
			}
			HX_STACK_LINE(7766)
			this->modified = true;
			HX_STACK_LINE(7766)
			(this->length)--;
		}
		HX_STACK_LINE(7767)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimpleVert_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::clear","zpp_nape/util/Lists.hx",7762);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7762)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7762)
			{
			}
			HX_STACK_LINE(7762)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7762)
			this->head = ret->next;
			HX_STACK_LINE(7762)
			{
			}
			HX_STACK_LINE(7762)
			{
				HX_STACK_LINE(7762)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7762)
				{
				}
				HX_STACK_LINE(7762)
				o->elt = null();
				HX_STACK_LINE(7762)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
				HX_STACK_LINE(7762)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7762)
			if (((this->head == null()))){
				HX_STACK_LINE(7762)
				this->pushmod = true;
			}
			HX_STACK_LINE(7762)
			this->modified = true;
			HX_STACK_LINE(7762)
			(this->length)--;
		}
		HX_STACK_LINE(7762)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::splice","zpp_nape/util/Lists.hx",7758);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(7759)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(7759)
		this->erase(pre);
	}
	HX_STACK_LINE(7760)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_erase","zpp_nape/util/Lists.hx",7712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(7713)
	{
	}
	HX_STACK_LINE(7721)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7722)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7723)
	if (((pre == null()))){
		HX_STACK_LINE(7724)
		old = this->head;
		HX_STACK_LINE(7725)
		ret = old->next;
		HX_STACK_LINE(7726)
		this->head = ret;
		HX_STACK_LINE(7727)
		if (((this->head == null()))){
			HX_STACK_LINE(7727)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7730)
		old = pre->next;
		HX_STACK_LINE(7731)
		ret = old->next;
		HX_STACK_LINE(7732)
		pre->next = ret;
		HX_STACK_LINE(7733)
		if (((ret == null()))){
			HX_STACK_LINE(7733)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7735)
	{
	}
	HX_STACK_LINE(7736)
	{
		HX_STACK_LINE(7737)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7738)
		{
		}
		HX_STACK_LINE(7746)
		o->elt = null();
		HX_STACK_LINE(7747)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
		HX_STACK_LINE(7748)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7753)
	this->modified = true;
	HX_STACK_LINE(7754)
	(this->length)--;
	HX_STACK_LINE(7755)
	this->pushmod = true;
	HX_STACK_LINE(7756)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::erase","zpp_nape/util/Lists.hx",7710);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert &pre,::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7710);
			{
				HX_STACK_LINE(7710)
				{
				}
				HX_STACK_LINE(7710)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7710)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7710)
				if (((pre == null()))){
					HX_STACK_LINE(7710)
					old = __this->head;
					HX_STACK_LINE(7710)
					ret = old->next;
					HX_STACK_LINE(7710)
					__this->head = ret;
					HX_STACK_LINE(7710)
					if (((__this->head == null()))){
						HX_STACK_LINE(7710)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7710)
					old = pre->next;
					HX_STACK_LINE(7710)
					ret = old->next;
					HX_STACK_LINE(7710)
					pre->next = ret;
					HX_STACK_LINE(7710)
					if (((ret == null()))){
						HX_STACK_LINE(7710)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(7710)
				{
				}
				HX_STACK_LINE(7710)
				{
					HX_STACK_LINE(7710)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7710)
					{
					}
					HX_STACK_LINE(7710)
					o->elt = null();
					HX_STACK_LINE(7710)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
					HX_STACK_LINE(7710)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7710)
				__this->modified = true;
				HX_STACK_LINE(7710)
				(__this->length)--;
				HX_STACK_LINE(7710)
				__this->pushmod = true;
				HX_STACK_LINE(7710)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7710)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,erase,return )

bool ZNPList_ZPP_SimpleVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_try_remove","zpp_nape/util/Lists.hx",7687);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7688)
	{
	}
	HX_STACK_LINE(7696)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7697)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7698)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7699)
	while(((cur != null()))){
		HX_STACK_LINE(7700)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7701)
			{
				HX_STACK_LINE(7701)
				{
				}
				HX_STACK_LINE(7701)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7701)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7701)
				if (((pre == null()))){
					HX_STACK_LINE(7701)
					old = this->head;
					HX_STACK_LINE(7701)
					ret1 = old->next;
					HX_STACK_LINE(7701)
					this->head = ret1;
					HX_STACK_LINE(7701)
					if (((this->head == null()))){
						HX_STACK_LINE(7701)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7701)
					old = pre->next;
					HX_STACK_LINE(7701)
					ret1 = old->next;
					HX_STACK_LINE(7701)
					pre->next = ret1;
					HX_STACK_LINE(7701)
					if (((ret1 == null()))){
						HX_STACK_LINE(7701)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7701)
				{
				}
				HX_STACK_LINE(7701)
				{
					HX_STACK_LINE(7701)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7701)
					{
					}
					HX_STACK_LINE(7701)
					o->elt = null();
					HX_STACK_LINE(7701)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
					HX_STACK_LINE(7701)
					::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7701)
				this->modified = true;
				HX_STACK_LINE(7701)
				(this->length)--;
				HX_STACK_LINE(7701)
				this->pushmod = true;
				HX_STACK_LINE(7701)
				ret1;
			}
			HX_STACK_LINE(7702)
			ret = true;
			HX_STACK_LINE(7703)
			break;
		}
		HX_STACK_LINE(7705)
		pre = cur;
		HX_STACK_LINE(7706)
		cur = cur->next;
	}
	HX_STACK_LINE(7708)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SimpleVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_remove","zpp_nape/util/Lists.hx",7674);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7675)
		{
		}
		HX_STACK_LINE(7683)
		{
			HX_STACK_LINE(7683)
			{
			}
			HX_STACK_LINE(7683)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7683)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7683)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7683)
			while(((cur != null()))){
				HX_STACK_LINE(7683)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7683)
					{
						HX_STACK_LINE(7683)
						{
						}
						HX_STACK_LINE(7683)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7683)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7683)
						if (((pre == null()))){
							HX_STACK_LINE(7683)
							old = this->head;
							HX_STACK_LINE(7683)
							ret1 = old->next;
							HX_STACK_LINE(7683)
							this->head = ret1;
							HX_STACK_LINE(7683)
							if (((this->head == null()))){
								HX_STACK_LINE(7683)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7683)
							old = pre->next;
							HX_STACK_LINE(7683)
							ret1 = old->next;
							HX_STACK_LINE(7683)
							pre->next = ret1;
							HX_STACK_LINE(7683)
							if (((ret1 == null()))){
								HX_STACK_LINE(7683)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7683)
						{
						}
						HX_STACK_LINE(7683)
						{
							HX_STACK_LINE(7683)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7683)
							{
							}
							HX_STACK_LINE(7683)
							o->elt = null();
							HX_STACK_LINE(7683)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(7683)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7683)
						this->modified = true;
						HX_STACK_LINE(7683)
						(this->length)--;
						HX_STACK_LINE(7683)
						this->pushmod = true;
						HX_STACK_LINE(7683)
						ret1;
					}
					HX_STACK_LINE(7683)
					ret = true;
					HX_STACK_LINE(7683)
					break;
				}
				HX_STACK_LINE(7683)
				pre = cur;
				HX_STACK_LINE(7683)
				cur = cur->next;
			}
			HX_STACK_LINE(7683)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimpleVert_obj::try_remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::try_remove","zpp_nape/util/Lists.hx",7649);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7650)
	{
	}
	HX_STACK_LINE(7658)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7659)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7660)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7661)
	while(((cur != null()))){
		HX_STACK_LINE(7662)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7663)
			this->erase(pre);
			HX_STACK_LINE(7664)
			ret = true;
			HX_STACK_LINE(7665)
			break;
		}
		HX_STACK_LINE(7667)
		pre = cur;
		HX_STACK_LINE(7668)
		cur = cur->next;
	}
	HX_STACK_LINE(7670)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,try_remove,return )

Void ZNPList_ZPP_SimpleVert_obj::remove( ::zpp_nape::geom::ZPP_SimpleVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::remove","zpp_nape/util/Lists.hx",7638);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7639)
		{
		}
		HX_STACK_LINE(7647)
		{
			HX_STACK_LINE(7647)
			{
			}
			HX_STACK_LINE(7647)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7647)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7647)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7647)
			while(((cur != null()))){
				HX_STACK_LINE(7647)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7647)
					{
						HX_STACK_LINE(7647)
						{
						}
						HX_STACK_LINE(7647)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7647)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7647)
						if (((pre == null()))){
							HX_STACK_LINE(7647)
							old = this->head;
							HX_STACK_LINE(7647)
							ret1 = old->next;
							HX_STACK_LINE(7647)
							this->head = ret1;
							HX_STACK_LINE(7647)
							if (((this->head == null()))){
								HX_STACK_LINE(7647)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7647)
							old = pre->next;
							HX_STACK_LINE(7647)
							ret1 = old->next;
							HX_STACK_LINE(7647)
							pre->next = ret1;
							HX_STACK_LINE(7647)
							if (((ret1 == null()))){
								HX_STACK_LINE(7647)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7647)
						{
						}
						HX_STACK_LINE(7647)
						{
							HX_STACK_LINE(7647)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7647)
							{
							}
							HX_STACK_LINE(7647)
							o->elt = null();
							HX_STACK_LINE(7647)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
							HX_STACK_LINE(7647)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7647)
						this->modified = true;
						HX_STACK_LINE(7647)
						(this->length)--;
						HX_STACK_LINE(7647)
						this->pushmod = true;
						HX_STACK_LINE(7647)
						ret1;
					}
					HX_STACK_LINE(7647)
					ret = true;
					HX_STACK_LINE(7647)
					break;
				}
				HX_STACK_LINE(7647)
				pre = cur;
				HX_STACK_LINE(7647)
				cur = cur->next;
			}
			HX_STACK_LINE(7647)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,remove,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_pop_unsafe","zpp_nape/util/Lists.hx",7625);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7626)
	{
	}
	HX_STACK_LINE(7634)
	::zpp_nape::geom::ZPP_SimpleVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7635)
	this->pop();
	HX_STACK_LINE(7636)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::pop_unsafe","zpp_nape/util/Lists.hx",7623);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleVert Block( ::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7623);
			{
				HX_STACK_LINE(7623)
				{
				}
				HX_STACK_LINE(7623)
				::zpp_nape::geom::ZPP_SimpleVert ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7623)
				__this->pop();
				HX_STACK_LINE(7623)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7623)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop_unsafe,return )

Void ZNPList_ZPP_SimpleVert_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_pop","zpp_nape/util/Lists.hx",7590);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7591)
		{
		}
		HX_STACK_LINE(7599)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7600)
		this->head = ret->next;
		HX_STACK_LINE(7601)
		{
		}
		HX_STACK_LINE(7602)
		{
			HX_STACK_LINE(7603)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7604)
			{
			}
			HX_STACK_LINE(7612)
			o->elt = null();
			HX_STACK_LINE(7613)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(7614)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7619)
		if (((this->head == null()))){
			HX_STACK_LINE(7619)
			this->pushmod = true;
		}
		HX_STACK_LINE(7620)
		this->modified = true;
		HX_STACK_LINE(7621)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,inlined_pop,(void))

Void ZNPList_ZPP_SimpleVert_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::pop","zpp_nape/util/Lists.hx",7588);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7588)
		{
		}
		HX_STACK_LINE(7588)
		::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7588)
		this->head = ret->next;
		HX_STACK_LINE(7588)
		{
		}
		HX_STACK_LINE(7588)
		{
			HX_STACK_LINE(7588)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7588)
			{
			}
			HX_STACK_LINE(7588)
			o->elt = null();
			HX_STACK_LINE(7588)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
			HX_STACK_LINE(7588)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7588)
		if (((this->head == null()))){
			HX_STACK_LINE(7588)
			this->pushmod = true;
		}
		HX_STACK_LINE(7588)
		this->modified = true;
		HX_STACK_LINE(7588)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_insert","zpp_nape/util/Lists.hx",7545);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7546)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::geom::ZPP_SimpleVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7554);
			{
				HX_STACK_LINE(7555)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7556)
				{
					HX_STACK_LINE(7557)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(7557)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();
					}
					else{
						HX_STACK_LINE(7564)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(7565)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7566)
						ret->next = null();
					}
					HX_STACK_LINE(7571)
					Dynamic();
				}
				HX_STACK_LINE(7573)
				ret->elt = o;
				HX_STACK_LINE(7574)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7554)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7576)
	if (((cur == null()))){
		HX_STACK_LINE(7577)
		temp->next = this->head;
		HX_STACK_LINE(7578)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7581)
		temp->next = cur->next;
		HX_STACK_LINE(7582)
		cur->next = temp;
	}
	HX_STACK_LINE(7584)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7585)
	(this->length)++;
	HX_STACK_LINE(7586)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert cur,::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::insert","zpp_nape/util/Lists.hx",7543);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj *__this,::zpp_nape::geom::ZPP_SimpleVert &o,::zpp_nape::util::ZNPNode_ZPP_SimpleVert &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7543);
			{
				HX_STACK_LINE(7543)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::geom::ZPP_SimpleVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7543);
						{
							HX_STACK_LINE(7543)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7543)
							{
								HX_STACK_LINE(7543)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(7543)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();
								}
								else{
									HX_STACK_LINE(7543)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(7543)
									::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7543)
									ret->next = null();
								}
								HX_STACK_LINE(7543)
								Dynamic();
							}
							HX_STACK_LINE(7543)
							ret->elt = o;
							HX_STACK_LINE(7543)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7543)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7543)
				if (((cur == null()))){
					HX_STACK_LINE(7543)
					temp->next = __this->head;
					HX_STACK_LINE(7543)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(7543)
					temp->next = cur->next;
					HX_STACK_LINE(7543)
					cur->next = temp;
				}
				HX_STACK_LINE(7543)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(7543)
				(__this->length)++;
				HX_STACK_LINE(7543)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(7543)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimpleVert_obj,insert,return )

Void ZNPList_ZPP_SimpleVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimpleVert x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::addAll","zpp_nape/util/Lists.hx",7525);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(7526)
		{
		}
		HX_STACK_LINE(7534)
		{
			HX_STACK_LINE(7535)
			::zpp_nape::util::ZNPNode_ZPP_SimpleVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7536)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7537)
				::zpp_nape::geom::ZPP_SimpleVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(7538)
				this->add(i);
				HX_STACK_LINE(7539)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,addAll,(void))

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::inlined_add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::inlined_add","zpp_nape/util/Lists.hx",7488);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7489)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::geom::ZPP_SimpleVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7497);
			{
				HX_STACK_LINE(7498)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7499)
				{
					HX_STACK_LINE(7500)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(7500)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();
					}
					else{
						HX_STACK_LINE(7507)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
						HX_STACK_LINE(7508)
						::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7509)
						ret->next = null();
					}
					HX_STACK_LINE(7514)
					Dynamic();
				}
				HX_STACK_LINE(7516)
				ret->elt = o;
				HX_STACK_LINE(7517)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7497)
	::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7519)
	temp->next = this->head;
	HX_STACK_LINE(7520)
	this->head = temp;
	HX_STACK_LINE(7521)
	this->modified = true;
	HX_STACK_LINE(7522)
	(this->length)++;
	HX_STACK_LINE(7523)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,inlined_add,return )

::zpp_nape::geom::ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::add( ::zpp_nape::geom::ZPP_SimpleVert o){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::add","zpp_nape/util/Lists.hx",7486);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimpleVert Block( ::zpp_nape::geom::ZPP_SimpleVert &o,::zpp_nape::util::ZNPList_ZPP_SimpleVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7486);
			{
				HX_STACK_LINE(7486)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimpleVert Block( ::zpp_nape::geom::ZPP_SimpleVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7486);
						{
							HX_STACK_LINE(7486)
							::zpp_nape::util::ZNPNode_ZPP_SimpleVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7486)
							{
								HX_STACK_LINE(7486)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(7486)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::__new();
								}
								else{
									HX_STACK_LINE(7486)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool;
									HX_STACK_LINE(7486)
									::zpp_nape::util::ZNPNode_ZPP_SimpleVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7486)
									ret->next = null();
								}
								HX_STACK_LINE(7486)
								Dynamic();
							}
							HX_STACK_LINE(7486)
							ret->elt = o;
							HX_STACK_LINE(7486)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7486)
				::zpp_nape::util::ZNPNode_ZPP_SimpleVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7486)
				temp->next = __this->head;
				HX_STACK_LINE(7486)
				__this->head = temp;
				HX_STACK_LINE(7486)
				__this->modified = true;
				HX_STACK_LINE(7486)
				(__this->length)++;
				HX_STACK_LINE(7486)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(7486)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,add,return )

Void ZNPList_ZPP_SimpleVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimpleVert i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::setbegin","zpp_nape/util/Lists.hx",7481);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(7482)
		this->head = i;
		HX_STACK_LINE(7483)
		this->modified = true;
		HX_STACK_LINE(7484)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimpleVert_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SimpleVert ZNPList_ZPP_SimpleVert_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimpleVert::begin","zpp_nape/util/Lists.hx",7476);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7476)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimpleVert_obj,begin,return )


ZNPList_ZPP_SimpleVert_obj::ZNPList_ZPP_SimpleVert_obj()
{
}

void ZNPList_ZPP_SimpleVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimpleVert);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimpleVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SimpleVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SimpleVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimpleVert >(); return inValue; }
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

void ZNPList_ZPP_SimpleVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimpleVert_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SimpleVert_obj::__mClass;

void ZNPList_ZPP_SimpleVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimpleVert"), hx::TCanCast< ZNPList_ZPP_SimpleVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SimpleVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
