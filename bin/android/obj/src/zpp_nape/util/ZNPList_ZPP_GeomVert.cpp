#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_GeomVert
#include <zpp_nape/util/ZNPList_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_GeomVert
#include <zpp_nape/util/ZNPNode_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_GeomVert_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_GeomVert::new","zpp_nape/util/Lists.hx",6703);
{
	HX_STACK_LINE(6710)
	this->length = (int)0;
	HX_STACK_LINE(6709)
	this->pushmod = false;
	HX_STACK_LINE(6708)
	this->modified = false;
	HX_STACK_LINE(6704)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_GeomVert_obj::~ZNPList_ZPP_GeomVert_obj() { }

Dynamic ZNPList_ZPP_GeomVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_GeomVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > ZNPList_ZPP_GeomVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_GeomVert_obj > result = new ZNPList_ZPP_GeomVert_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::at","zpp_nape/util/Lists.hx",7073);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7074)
	{
	}
	HX_STACK_LINE(7082)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7083)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_GeomVert(it->elt) : ::zpp_nape::geom::ZPP_GeomVert(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::iterator_at","zpp_nape/util/Lists.hx",7060);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7061)
	{
	}
	HX_STACK_LINE(7069)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7070)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(7070)
		ret = ret->next;
	}
	HX_STACK_LINE(7071)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::back","zpp_nape/util/Lists.hx",7051);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7052)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7053)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7054)
	while(((cur != null()))){
		HX_STACK_LINE(7055)
		ret = cur;
		HX_STACK_LINE(7056)
		cur = cur->next;
	}
	HX_STACK_LINE(7058)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,back,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::front","zpp_nape/util/Lists.hx",7051);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7051)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,front,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_has","zpp_nape/util/Lists.hx",7021);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7022)
	{
	}
	HX_STACK_LINE(7030)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7031)
	{
		HX_STACK_LINE(7032)
		ret = false;
		HX_STACK_LINE(7033)
		{
			HX_STACK_LINE(7034)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7035)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7036)
				::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7037)
				if (((npite == obj))){
					HX_STACK_LINE(7039)
					ret = true;
					HX_STACK_LINE(7040)
					break;
				}
				HX_STACK_LINE(7043)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7047)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_has,return )

bool ZNPList_ZPP_GeomVert_obj::has( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::has","zpp_nape/util/Lists.hx",7019);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this,::zpp_nape::geom::ZPP_GeomVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7019);
			{
				HX_STACK_LINE(7019)
				{
				}
				HX_STACK_LINE(7019)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7019)
				{
					HX_STACK_LINE(7019)
					ret = false;
					HX_STACK_LINE(7019)
					{
						HX_STACK_LINE(7019)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(7019)
						while(((cx_ite != null()))){
							HX_STACK_LINE(7019)
							::zpp_nape::geom::ZPP_GeomVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(7019)
							if (((npite == obj))){
								HX_STACK_LINE(7019)
								ret = true;
								HX_STACK_LINE(7019)
								break;
							}
							HX_STACK_LINE(7019)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(7019)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7019)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,has,return )

int ZNPList_ZPP_GeomVert_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::size","zpp_nape/util/Lists.hx",7019);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7019)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,size,return )

bool ZNPList_ZPP_GeomVert_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::empty","zpp_nape/util/Lists.hx",7017);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7017)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,empty,return )

Void ZNPList_ZPP_GeomVert_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::reverse","zpp_nape/util/Lists.hx",7002);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7003)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7004)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7005)
		while(((cur != null()))){
			HX_STACK_LINE(7006)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7007)
			cur->next = pre;
			HX_STACK_LINE(7008)
			this->head = cur;
			HX_STACK_LINE(7009)
			pre = cur;
			HX_STACK_LINE(7010)
			cur = nx;
		}
		HX_STACK_LINE(7012)
		this->modified = true;
		HX_STACK_LINE(7013)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,reverse,(void))

Void ZNPList_ZPP_GeomVert_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_clear","zpp_nape/util/Lists.hx",6996);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6998)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6998)
			{
			}
			HX_STACK_LINE(6998)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6998)
			this->head = ret->next;
			HX_STACK_LINE(6998)
			{
			}
			HX_STACK_LINE(6998)
			{
				HX_STACK_LINE(6998)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6998)
				{
				}
				HX_STACK_LINE(6998)
				o->elt = null();
				HX_STACK_LINE(6998)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(6998)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6998)
			if (((this->head == null()))){
				HX_STACK_LINE(6998)
				this->pushmod = true;
			}
			HX_STACK_LINE(6998)
			this->modified = true;
			HX_STACK_LINE(6998)
			(this->length)--;
		}
		HX_STACK_LINE(6999)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_GeomVert_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::clear","zpp_nape/util/Lists.hx",6994);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6994)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6994)
			{
			}
			HX_STACK_LINE(6994)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6994)
			this->head = ret->next;
			HX_STACK_LINE(6994)
			{
			}
			HX_STACK_LINE(6994)
			{
				HX_STACK_LINE(6994)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6994)
				{
				}
				HX_STACK_LINE(6994)
				o->elt = null();
				HX_STACK_LINE(6994)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(6994)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6994)
			if (((this->head == null()))){
				HX_STACK_LINE(6994)
				this->pushmod = true;
			}
			HX_STACK_LINE(6994)
			this->modified = true;
			HX_STACK_LINE(6994)
			(this->length)--;
		}
		HX_STACK_LINE(6994)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::splice","zpp_nape/util/Lists.hx",6990);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6991)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(6991)
		this->erase(pre);
	}
	HX_STACK_LINE(6992)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_erase","zpp_nape/util/Lists.hx",6944);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(6945)
	{
	}
	HX_STACK_LINE(6953)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6954)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6955)
	if (((pre == null()))){
		HX_STACK_LINE(6956)
		old = this->head;
		HX_STACK_LINE(6957)
		ret = old->next;
		HX_STACK_LINE(6958)
		this->head = ret;
		HX_STACK_LINE(6959)
		if (((this->head == null()))){
			HX_STACK_LINE(6959)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6962)
		old = pre->next;
		HX_STACK_LINE(6963)
		ret = old->next;
		HX_STACK_LINE(6964)
		pre->next = ret;
		HX_STACK_LINE(6965)
		if (((ret == null()))){
			HX_STACK_LINE(6965)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6967)
	{
	}
	HX_STACK_LINE(6968)
	{
		HX_STACK_LINE(6969)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6970)
		{
		}
		HX_STACK_LINE(6978)
		o->elt = null();
		HX_STACK_LINE(6979)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
		HX_STACK_LINE(6980)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6985)
	this->modified = true;
	HX_STACK_LINE(6986)
	(this->length)--;
	HX_STACK_LINE(6987)
	this->pushmod = true;
	HX_STACK_LINE(6988)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_GeomVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::erase","zpp_nape/util/Lists.hx",6942);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::util::ZNPNode_ZPP_GeomVert &pre,::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6942);
			{
				HX_STACK_LINE(6942)
				{
				}
				HX_STACK_LINE(6942)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6942)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6942)
				if (((pre == null()))){
					HX_STACK_LINE(6942)
					old = __this->head;
					HX_STACK_LINE(6942)
					ret = old->next;
					HX_STACK_LINE(6942)
					__this->head = ret;
					HX_STACK_LINE(6942)
					if (((__this->head == null()))){
						HX_STACK_LINE(6942)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6942)
					old = pre->next;
					HX_STACK_LINE(6942)
					ret = old->next;
					HX_STACK_LINE(6942)
					pre->next = ret;
					HX_STACK_LINE(6942)
					if (((ret == null()))){
						HX_STACK_LINE(6942)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(6942)
				{
				}
				HX_STACK_LINE(6942)
				{
					HX_STACK_LINE(6942)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6942)
					{
					}
					HX_STACK_LINE(6942)
					o->elt = null();
					HX_STACK_LINE(6942)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(6942)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6942)
				__this->modified = true;
				HX_STACK_LINE(6942)
				(__this->length)--;
				HX_STACK_LINE(6942)
				__this->pushmod = true;
				HX_STACK_LINE(6942)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6942)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,erase,return )

bool ZNPList_ZPP_GeomVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_try_remove","zpp_nape/util/Lists.hx",6919);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6920)
	{
	}
	HX_STACK_LINE(6928)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6929)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6930)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6931)
	while(((cur != null()))){
		HX_STACK_LINE(6932)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6933)
			{
				HX_STACK_LINE(6933)
				{
				}
				HX_STACK_LINE(6933)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6933)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6933)
				if (((pre == null()))){
					HX_STACK_LINE(6933)
					old = this->head;
					HX_STACK_LINE(6933)
					ret1 = old->next;
					HX_STACK_LINE(6933)
					this->head = ret1;
					HX_STACK_LINE(6933)
					if (((this->head == null()))){
						HX_STACK_LINE(6933)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6933)
					old = pre->next;
					HX_STACK_LINE(6933)
					ret1 = old->next;
					HX_STACK_LINE(6933)
					pre->next = ret1;
					HX_STACK_LINE(6933)
					if (((ret1 == null()))){
						HX_STACK_LINE(6933)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6933)
				{
				}
				HX_STACK_LINE(6933)
				{
					HX_STACK_LINE(6933)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6933)
					{
					}
					HX_STACK_LINE(6933)
					o->elt = null();
					HX_STACK_LINE(6933)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
					HX_STACK_LINE(6933)
					::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6933)
				this->modified = true;
				HX_STACK_LINE(6933)
				(this->length)--;
				HX_STACK_LINE(6933)
				this->pushmod = true;
				HX_STACK_LINE(6933)
				ret1;
			}
			HX_STACK_LINE(6934)
			ret = true;
			HX_STACK_LINE(6935)
			break;
		}
		HX_STACK_LINE(6937)
		pre = cur;
		HX_STACK_LINE(6938)
		cur = cur->next;
	}
	HX_STACK_LINE(6940)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_remove","zpp_nape/util/Lists.hx",6906);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6907)
		{
		}
		HX_STACK_LINE(6915)
		{
			HX_STACK_LINE(6915)
			{
			}
			HX_STACK_LINE(6915)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6915)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6915)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6915)
			while(((cur != null()))){
				HX_STACK_LINE(6915)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6915)
					{
						HX_STACK_LINE(6915)
						{
						}
						HX_STACK_LINE(6915)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6915)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6915)
						if (((pre == null()))){
							HX_STACK_LINE(6915)
							old = this->head;
							HX_STACK_LINE(6915)
							ret1 = old->next;
							HX_STACK_LINE(6915)
							this->head = ret1;
							HX_STACK_LINE(6915)
							if (((this->head == null()))){
								HX_STACK_LINE(6915)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6915)
							old = pre->next;
							HX_STACK_LINE(6915)
							ret1 = old->next;
							HX_STACK_LINE(6915)
							pre->next = ret1;
							HX_STACK_LINE(6915)
							if (((ret1 == null()))){
								HX_STACK_LINE(6915)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6915)
						{
						}
						HX_STACK_LINE(6915)
						{
							HX_STACK_LINE(6915)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6915)
							{
							}
							HX_STACK_LINE(6915)
							o->elt = null();
							HX_STACK_LINE(6915)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(6915)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6915)
						this->modified = true;
						HX_STACK_LINE(6915)
						(this->length)--;
						HX_STACK_LINE(6915)
						this->pushmod = true;
						HX_STACK_LINE(6915)
						ret1;
					}
					HX_STACK_LINE(6915)
					ret = true;
					HX_STACK_LINE(6915)
					break;
				}
				HX_STACK_LINE(6915)
				pre = cur;
				HX_STACK_LINE(6915)
				cur = cur->next;
			}
			HX_STACK_LINE(6915)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_GeomVert_obj::try_remove( ::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::try_remove","zpp_nape/util/Lists.hx",6881);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6882)
	{
	}
	HX_STACK_LINE(6890)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6891)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6892)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6893)
	while(((cur != null()))){
		HX_STACK_LINE(6894)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6895)
			this->erase(pre);
			HX_STACK_LINE(6896)
			ret = true;
			HX_STACK_LINE(6897)
			break;
		}
		HX_STACK_LINE(6899)
		pre = cur;
		HX_STACK_LINE(6900)
		cur = cur->next;
	}
	HX_STACK_LINE(6902)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,try_remove,return )

Void ZNPList_ZPP_GeomVert_obj::remove( ::zpp_nape::geom::ZPP_GeomVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::remove","zpp_nape/util/Lists.hx",6870);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6871)
		{
		}
		HX_STACK_LINE(6879)
		{
			HX_STACK_LINE(6879)
			{
			}
			HX_STACK_LINE(6879)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6879)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6879)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6879)
			while(((cur != null()))){
				HX_STACK_LINE(6879)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6879)
					{
						HX_STACK_LINE(6879)
						{
						}
						HX_STACK_LINE(6879)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6879)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6879)
						if (((pre == null()))){
							HX_STACK_LINE(6879)
							old = this->head;
							HX_STACK_LINE(6879)
							ret1 = old->next;
							HX_STACK_LINE(6879)
							this->head = ret1;
							HX_STACK_LINE(6879)
							if (((this->head == null()))){
								HX_STACK_LINE(6879)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6879)
							old = pre->next;
							HX_STACK_LINE(6879)
							ret1 = old->next;
							HX_STACK_LINE(6879)
							pre->next = ret1;
							HX_STACK_LINE(6879)
							if (((ret1 == null()))){
								HX_STACK_LINE(6879)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6879)
						{
						}
						HX_STACK_LINE(6879)
						{
							HX_STACK_LINE(6879)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6879)
							{
							}
							HX_STACK_LINE(6879)
							o->elt = null();
							HX_STACK_LINE(6879)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
							HX_STACK_LINE(6879)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6879)
						this->modified = true;
						HX_STACK_LINE(6879)
						(this->length)--;
						HX_STACK_LINE(6879)
						this->pushmod = true;
						HX_STACK_LINE(6879)
						ret1;
					}
					HX_STACK_LINE(6879)
					ret = true;
					HX_STACK_LINE(6879)
					break;
				}
				HX_STACK_LINE(6879)
				pre = cur;
				HX_STACK_LINE(6879)
				cur = cur->next;
			}
			HX_STACK_LINE(6879)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,remove,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_pop_unsafe","zpp_nape/util/Lists.hx",6857);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6858)
	{
	}
	HX_STACK_LINE(6866)
	::zpp_nape::geom::ZPP_GeomVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6867)
	this->pop();
	HX_STACK_LINE(6868)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::pop_unsafe","zpp_nape/util/Lists.hx",6855);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6855);
			{
				HX_STACK_LINE(6855)
				{
				}
				HX_STACK_LINE(6855)
				::zpp_nape::geom::ZPP_GeomVert ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6855)
				__this->pop();
				HX_STACK_LINE(6855)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6855)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop_unsafe,return )

Void ZNPList_ZPP_GeomVert_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_pop","zpp_nape/util/Lists.hx",6822);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6823)
		{
		}
		HX_STACK_LINE(6831)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6832)
		this->head = ret->next;
		HX_STACK_LINE(6833)
		{
		}
		HX_STACK_LINE(6834)
		{
			HX_STACK_LINE(6835)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6836)
			{
			}
			HX_STACK_LINE(6844)
			o->elt = null();
			HX_STACK_LINE(6845)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(6846)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6851)
		if (((this->head == null()))){
			HX_STACK_LINE(6851)
			this->pushmod = true;
		}
		HX_STACK_LINE(6852)
		this->modified = true;
		HX_STACK_LINE(6853)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,inlined_pop,(void))

Void ZNPList_ZPP_GeomVert_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::pop","zpp_nape/util/Lists.hx",6820);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6820)
		{
		}
		HX_STACK_LINE(6820)
		::zpp_nape::util::ZNPNode_ZPP_GeomVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6820)
		this->head = ret->next;
		HX_STACK_LINE(6820)
		{
		}
		HX_STACK_LINE(6820)
		{
			HX_STACK_LINE(6820)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6820)
			{
			}
			HX_STACK_LINE(6820)
			o->elt = null();
			HX_STACK_LINE(6820)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(6820)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6820)
		if (((this->head == null()))){
			HX_STACK_LINE(6820)
			this->pushmod = true;
		}
		HX_STACK_LINE(6820)
		this->modified = true;
		HX_STACK_LINE(6820)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_insert","zpp_nape/util/Lists.hx",6777);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(6778)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6786);
			{
				HX_STACK_LINE(6787)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6788)
				{
					HX_STACK_LINE(6789)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(6789)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
					}
					else{
						HX_STACK_LINE(6796)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(6797)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6798)
						ret->next = null();
					}
					HX_STACK_LINE(6803)
					Dynamic();
				}
				HX_STACK_LINE(6805)
				ret->elt = o;
				HX_STACK_LINE(6806)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6786)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6808)
	if (((cur == null()))){
		HX_STACK_LINE(6809)
		temp->next = this->head;
		HX_STACK_LINE(6810)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6813)
		temp->next = cur->next;
		HX_STACK_LINE(6814)
		cur->next = temp;
	}
	HX_STACK_LINE(6816)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6817)
	(this->length)++;
	HX_STACK_LINE(6818)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_GeomVert cur,::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::insert","zpp_nape/util/Lists.hx",6775);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this,::zpp_nape::geom::ZPP_GeomVert &o,::zpp_nape::util::ZNPNode_ZPP_GeomVert &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6775);
			{
				HX_STACK_LINE(6775)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6775);
						{
							HX_STACK_LINE(6775)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6775)
							{
								HX_STACK_LINE(6775)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(6775)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
								}
								else{
									HX_STACK_LINE(6775)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(6775)
									::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6775)
									ret->next = null();
								}
								HX_STACK_LINE(6775)
								Dynamic();
							}
							HX_STACK_LINE(6775)
							ret->elt = o;
							HX_STACK_LINE(6775)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6775)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6775)
				if (((cur == null()))){
					HX_STACK_LINE(6775)
					temp->next = __this->head;
					HX_STACK_LINE(6775)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6775)
					temp->next = cur->next;
					HX_STACK_LINE(6775)
					cur->next = temp;
				}
				HX_STACK_LINE(6775)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6775)
				(__this->length)++;
				HX_STACK_LINE(6775)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6775)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_GeomVert_obj,insert,return )

Void ZNPList_ZPP_GeomVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_GeomVert x){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::addAll","zpp_nape/util/Lists.hx",6757);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6758)
		{
		}
		HX_STACK_LINE(6766)
		{
			HX_STACK_LINE(6767)
			::zpp_nape::util::ZNPNode_ZPP_GeomVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6768)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6769)
				::zpp_nape::geom::ZPP_GeomVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6770)
				this->add(i);
				HX_STACK_LINE(6771)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,addAll,(void))

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::inlined_add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::inlined_add","zpp_nape/util/Lists.hx",6720);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(6721)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6729);
			{
				HX_STACK_LINE(6730)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6731)
				{
					HX_STACK_LINE(6732)
					if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(6732)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
					}
					else{
						HX_STACK_LINE(6739)
						ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
						HX_STACK_LINE(6740)
						::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6741)
						ret->next = null();
					}
					HX_STACK_LINE(6746)
					Dynamic();
				}
				HX_STACK_LINE(6748)
				ret->elt = o;
				HX_STACK_LINE(6749)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6729)
	::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6751)
	temp->next = this->head;
	HX_STACK_LINE(6752)
	this->head = temp;
	HX_STACK_LINE(6753)
	this->modified = true;
	HX_STACK_LINE(6754)
	(this->length)++;
	HX_STACK_LINE(6755)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,inlined_add,return )

::zpp_nape::geom::ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::add( ::zpp_nape::geom::ZPP_GeomVert o){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::add","zpp_nape/util/Lists.hx",6718);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o,::zpp_nape::util::ZNPList_ZPP_GeomVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6718);
			{
				HX_STACK_LINE(6718)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6718);
						{
							HX_STACK_LINE(6718)
							::zpp_nape::util::ZNPNode_ZPP_GeomVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6718)
							{
								HX_STACK_LINE(6718)
								if (((::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(6718)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::__new();
								}
								else{
									HX_STACK_LINE(6718)
									ret = ::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool;
									HX_STACK_LINE(6718)
									::zpp_nape::util::ZNPNode_ZPP_GeomVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6718)
									ret->next = null();
								}
								HX_STACK_LINE(6718)
								Dynamic();
							}
							HX_STACK_LINE(6718)
							ret->elt = o;
							HX_STACK_LINE(6718)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6718)
				::zpp_nape::util::ZNPNode_ZPP_GeomVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6718)
				temp->next = __this->head;
				HX_STACK_LINE(6718)
				__this->head = temp;
				HX_STACK_LINE(6718)
				__this->modified = true;
				HX_STACK_LINE(6718)
				(__this->length)++;
				HX_STACK_LINE(6718)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(6718)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,add,return )

Void ZNPList_ZPP_GeomVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_GeomVert i){
{
		HX_STACK_PUSH("ZNPList_ZPP_GeomVert::setbegin","zpp_nape/util/Lists.hx",6713);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(6714)
		this->head = i;
		HX_STACK_LINE(6715)
		this->modified = true;
		HX_STACK_LINE(6716)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_GeomVert_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_GeomVert ZNPList_ZPP_GeomVert_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_GeomVert::begin","zpp_nape/util/Lists.hx",6708);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6708)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_GeomVert_obj,begin,return )


ZNPList_ZPP_GeomVert_obj::ZNPList_ZPP_GeomVert_obj()
{
}

void ZNPList_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_GeomVert >(); return inValue; }
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

void ZNPList_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_GeomVert_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_GeomVert_obj::__mClass;

void ZNPList_ZPP_GeomVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_GeomVert"), hx::TCanCast< ZNPList_ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_GeomVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
