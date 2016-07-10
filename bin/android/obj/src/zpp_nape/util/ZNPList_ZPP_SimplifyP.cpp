#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_SimplifyP
#include <zpp_nape/geom/ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_SimplifyP
#include <zpp_nape/util/ZNPList_ZPP_SimplifyP.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_SimplifyP
#include <zpp_nape/util/ZNPNode_ZPP_SimplifyP.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_SimplifyP_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::new","zpp_nape/util/Lists.hx",7087);
{
	HX_STACK_LINE(7094)
	this->length = (int)0;
	HX_STACK_LINE(7093)
	this->pushmod = false;
	HX_STACK_LINE(7092)
	this->modified = false;
	HX_STACK_LINE(7088)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_SimplifyP_obj::~ZNPList_ZPP_SimplifyP_obj() { }

Dynamic ZNPList_ZPP_SimplifyP_obj::__CreateEmpty() { return  new ZNPList_ZPP_SimplifyP_obj; }
hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > ZNPList_ZPP_SimplifyP_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > result = new ZNPList_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_SimplifyP_obj > result = new ZNPList_ZPP_SimplifyP_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::at","zpp_nape/util/Lists.hx",7457);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7458)
	{
	}
	HX_STACK_LINE(7466)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(7467)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_SimplifyP(it->elt) : ::zpp_nape::geom::ZPP_SimplifyP(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::iterator_at","zpp_nape/util/Lists.hx",7444);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(7445)
	{
	}
	HX_STACK_LINE(7453)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7454)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(7454)
		ret = ret->next;
	}
	HX_STACK_LINE(7455)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,iterator_at,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::back","zpp_nape/util/Lists.hx",7435);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7436)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7437)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7438)
	while(((cur != null()))){
		HX_STACK_LINE(7439)
		ret = cur;
		HX_STACK_LINE(7440)
		cur = cur->next;
	}
	HX_STACK_LINE(7442)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,back,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::front","zpp_nape/util/Lists.hx",7435);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7435)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,front,return )

bool ZNPList_ZPP_SimplifyP_obj::inlined_has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_has","zpp_nape/util/Lists.hx",7405);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7406)
	{
	}
	HX_STACK_LINE(7414)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7415)
	{
		HX_STACK_LINE(7416)
		ret = false;
		HX_STACK_LINE(7417)
		{
			HX_STACK_LINE(7418)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7419)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7420)
				::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(7421)
				if (((npite == obj))){
					HX_STACK_LINE(7423)
					ret = true;
					HX_STACK_LINE(7424)
					break;
				}
				HX_STACK_LINE(7427)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(7431)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_has,return )

bool ZNPList_ZPP_SimplifyP_obj::has( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::has","zpp_nape/util/Lists.hx",7403);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj *__this,::zpp_nape::geom::ZPP_SimplifyP &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7403);
			{
				HX_STACK_LINE(7403)
				{
				}
				HX_STACK_LINE(7403)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7403)
				{
					HX_STACK_LINE(7403)
					ret = false;
					HX_STACK_LINE(7403)
					{
						HX_STACK_LINE(7403)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(7403)
						while(((cx_ite != null()))){
							HX_STACK_LINE(7403)
							::zpp_nape::geom::ZPP_SimplifyP npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(7403)
							if (((npite == obj))){
								HX_STACK_LINE(7403)
								ret = true;
								HX_STACK_LINE(7403)
								break;
							}
							HX_STACK_LINE(7403)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(7403)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7403)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,has,return )

int ZNPList_ZPP_SimplifyP_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::size","zpp_nape/util/Lists.hx",7403);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7403)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,size,return )

bool ZNPList_ZPP_SimplifyP_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::empty","zpp_nape/util/Lists.hx",7401);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7401)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,empty,return )

Void ZNPList_ZPP_SimplifyP_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::reverse","zpp_nape/util/Lists.hx",7386);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7387)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(7388)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(7389)
		while(((cur != null()))){
			HX_STACK_LINE(7390)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(7391)
			cur->next = pre;
			HX_STACK_LINE(7392)
			this->head = cur;
			HX_STACK_LINE(7393)
			pre = cur;
			HX_STACK_LINE(7394)
			cur = nx;
		}
		HX_STACK_LINE(7396)
		this->modified = true;
		HX_STACK_LINE(7397)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,reverse,(void))

Void ZNPList_ZPP_SimplifyP_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_clear","zpp_nape/util/Lists.hx",7380);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7382)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7382)
			{
			}
			HX_STACK_LINE(7382)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7382)
			this->head = ret->next;
			HX_STACK_LINE(7382)
			{
			}
			HX_STACK_LINE(7382)
			{
				HX_STACK_LINE(7382)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7382)
				{
				}
				HX_STACK_LINE(7382)
				o->elt = null();
				HX_STACK_LINE(7382)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7382)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7382)
			if (((this->head == null()))){
				HX_STACK_LINE(7382)
				this->pushmod = true;
			}
			HX_STACK_LINE(7382)
			this->modified = true;
			HX_STACK_LINE(7382)
			(this->length)--;
		}
		HX_STACK_LINE(7383)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_clear,(void))

Void ZNPList_ZPP_SimplifyP_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::clear","zpp_nape/util/Lists.hx",7378);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7378)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(7378)
			{
			}
			HX_STACK_LINE(7378)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7378)
			this->head = ret->next;
			HX_STACK_LINE(7378)
			{
			}
			HX_STACK_LINE(7378)
			{
				HX_STACK_LINE(7378)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(7378)
				{
				}
				HX_STACK_LINE(7378)
				o->elt = null();
				HX_STACK_LINE(7378)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
				HX_STACK_LINE(7378)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
			}
			HX_STACK_LINE(7378)
			if (((this->head == null()))){
				HX_STACK_LINE(7378)
				this->pushmod = true;
			}
			HX_STACK_LINE(7378)
			this->modified = true;
			HX_STACK_LINE(7378)
			(this->length)--;
		}
		HX_STACK_LINE(7378)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::splice","zpp_nape/util/Lists.hx",7374);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(7375)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(7375)
		this->erase(pre);
	}
	HX_STACK_LINE(7376)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_erase","zpp_nape/util/Lists.hx",7328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(7329)
	{
	}
	HX_STACK_LINE(7337)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(7338)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7339)
	if (((pre == null()))){
		HX_STACK_LINE(7340)
		old = this->head;
		HX_STACK_LINE(7341)
		ret = old->next;
		HX_STACK_LINE(7342)
		this->head = ret;
		HX_STACK_LINE(7343)
		if (((this->head == null()))){
			HX_STACK_LINE(7343)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(7346)
		old = pre->next;
		HX_STACK_LINE(7347)
		ret = old->next;
		HX_STACK_LINE(7348)
		pre->next = ret;
		HX_STACK_LINE(7349)
		if (((ret == null()))){
			HX_STACK_LINE(7349)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(7351)
	{
	}
	HX_STACK_LINE(7352)
	{
		HX_STACK_LINE(7353)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(7354)
		{
		}
		HX_STACK_LINE(7362)
		o->elt = null();
		HX_STACK_LINE(7363)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
		HX_STACK_LINE(7364)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
	}
	HX_STACK_LINE(7369)
	this->modified = true;
	HX_STACK_LINE(7370)
	(this->length)--;
	HX_STACK_LINE(7371)
	this->pushmod = true;
	HX_STACK_LINE(7372)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::erase","zpp_nape/util/Lists.hx",7326);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP &pre,::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7326);
			{
				HX_STACK_LINE(7326)
				{
				}
				HX_STACK_LINE(7326)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7326)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7326)
				if (((pre == null()))){
					HX_STACK_LINE(7326)
					old = __this->head;
					HX_STACK_LINE(7326)
					ret = old->next;
					HX_STACK_LINE(7326)
					__this->head = ret;
					HX_STACK_LINE(7326)
					if (((__this->head == null()))){
						HX_STACK_LINE(7326)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7326)
					old = pre->next;
					HX_STACK_LINE(7326)
					ret = old->next;
					HX_STACK_LINE(7326)
					pre->next = ret;
					HX_STACK_LINE(7326)
					if (((ret == null()))){
						HX_STACK_LINE(7326)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(7326)
				{
				}
				HX_STACK_LINE(7326)
				{
					HX_STACK_LINE(7326)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7326)
					{
					}
					HX_STACK_LINE(7326)
					o->elt = null();
					HX_STACK_LINE(7326)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
					HX_STACK_LINE(7326)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7326)
				__this->modified = true;
				HX_STACK_LINE(7326)
				(__this->length)--;
				HX_STACK_LINE(7326)
				__this->pushmod = true;
				HX_STACK_LINE(7326)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7326)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,erase,return )

bool ZNPList_ZPP_SimplifyP_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_try_remove","zpp_nape/util/Lists.hx",7303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7304)
	{
	}
	HX_STACK_LINE(7312)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7313)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7314)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7315)
	while(((cur != null()))){
		HX_STACK_LINE(7316)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7317)
			{
				HX_STACK_LINE(7317)
				{
				}
				HX_STACK_LINE(7317)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(7317)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(7317)
				if (((pre == null()))){
					HX_STACK_LINE(7317)
					old = this->head;
					HX_STACK_LINE(7317)
					ret1 = old->next;
					HX_STACK_LINE(7317)
					this->head = ret1;
					HX_STACK_LINE(7317)
					if (((this->head == null()))){
						HX_STACK_LINE(7317)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(7317)
					old = pre->next;
					HX_STACK_LINE(7317)
					ret1 = old->next;
					HX_STACK_LINE(7317)
					pre->next = ret1;
					HX_STACK_LINE(7317)
					if (((ret1 == null()))){
						HX_STACK_LINE(7317)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(7317)
				{
				}
				HX_STACK_LINE(7317)
				{
					HX_STACK_LINE(7317)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(7317)
					{
					}
					HX_STACK_LINE(7317)
					o->elt = null();
					HX_STACK_LINE(7317)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
					HX_STACK_LINE(7317)
					::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
				}
				HX_STACK_LINE(7317)
				this->modified = true;
				HX_STACK_LINE(7317)
				(this->length)--;
				HX_STACK_LINE(7317)
				this->pushmod = true;
				HX_STACK_LINE(7317)
				ret1;
			}
			HX_STACK_LINE(7318)
			ret = true;
			HX_STACK_LINE(7319)
			break;
		}
		HX_STACK_LINE(7321)
		pre = cur;
		HX_STACK_LINE(7322)
		cur = cur->next;
	}
	HX_STACK_LINE(7324)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_try_remove,return )

Void ZNPList_ZPP_SimplifyP_obj::inlined_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_remove","zpp_nape/util/Lists.hx",7290);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7291)
		{
		}
		HX_STACK_LINE(7299)
		{
			HX_STACK_LINE(7299)
			{
			}
			HX_STACK_LINE(7299)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7299)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7299)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7299)
			while(((cur != null()))){
				HX_STACK_LINE(7299)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7299)
					{
						HX_STACK_LINE(7299)
						{
						}
						HX_STACK_LINE(7299)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7299)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7299)
						if (((pre == null()))){
							HX_STACK_LINE(7299)
							old = this->head;
							HX_STACK_LINE(7299)
							ret1 = old->next;
							HX_STACK_LINE(7299)
							this->head = ret1;
							HX_STACK_LINE(7299)
							if (((this->head == null()))){
								HX_STACK_LINE(7299)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7299)
							old = pre->next;
							HX_STACK_LINE(7299)
							ret1 = old->next;
							HX_STACK_LINE(7299)
							pre->next = ret1;
							HX_STACK_LINE(7299)
							if (((ret1 == null()))){
								HX_STACK_LINE(7299)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7299)
						{
						}
						HX_STACK_LINE(7299)
						{
							HX_STACK_LINE(7299)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7299)
							{
							}
							HX_STACK_LINE(7299)
							o->elt = null();
							HX_STACK_LINE(7299)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(7299)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7299)
						this->modified = true;
						HX_STACK_LINE(7299)
						(this->length)--;
						HX_STACK_LINE(7299)
						this->pushmod = true;
						HX_STACK_LINE(7299)
						ret1;
					}
					HX_STACK_LINE(7299)
					ret = true;
					HX_STACK_LINE(7299)
					break;
				}
				HX_STACK_LINE(7299)
				pre = cur;
				HX_STACK_LINE(7299)
				cur = cur->next;
			}
			HX_STACK_LINE(7299)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_remove,(void))

bool ZNPList_ZPP_SimplifyP_obj::try_remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::try_remove","zpp_nape/util/Lists.hx",7265);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(7266)
	{
	}
	HX_STACK_LINE(7274)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(7275)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(7276)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7277)
	while(((cur != null()))){
		HX_STACK_LINE(7278)
		if (((cur->elt == obj))){
			HX_STACK_LINE(7279)
			this->erase(pre);
			HX_STACK_LINE(7280)
			ret = true;
			HX_STACK_LINE(7281)
			break;
		}
		HX_STACK_LINE(7283)
		pre = cur;
		HX_STACK_LINE(7284)
		cur = cur->next;
	}
	HX_STACK_LINE(7286)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,try_remove,return )

Void ZNPList_ZPP_SimplifyP_obj::remove( ::zpp_nape::geom::ZPP_SimplifyP obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::remove","zpp_nape/util/Lists.hx",7254);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(7255)
		{
		}
		HX_STACK_LINE(7263)
		{
			HX_STACK_LINE(7263)
			{
			}
			HX_STACK_LINE(7263)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(7263)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(7263)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(7263)
			while(((cur != null()))){
				HX_STACK_LINE(7263)
				if (((cur->elt == obj))){
					HX_STACK_LINE(7263)
					{
						HX_STACK_LINE(7263)
						{
						}
						HX_STACK_LINE(7263)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(7263)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(7263)
						if (((pre == null()))){
							HX_STACK_LINE(7263)
							old = this->head;
							HX_STACK_LINE(7263)
							ret1 = old->next;
							HX_STACK_LINE(7263)
							this->head = ret1;
							HX_STACK_LINE(7263)
							if (((this->head == null()))){
								HX_STACK_LINE(7263)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(7263)
							old = pre->next;
							HX_STACK_LINE(7263)
							ret1 = old->next;
							HX_STACK_LINE(7263)
							pre->next = ret1;
							HX_STACK_LINE(7263)
							if (((ret1 == null()))){
								HX_STACK_LINE(7263)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(7263)
						{
						}
						HX_STACK_LINE(7263)
						{
							HX_STACK_LINE(7263)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(7263)
							{
							}
							HX_STACK_LINE(7263)
							o->elt = null();
							HX_STACK_LINE(7263)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
							HX_STACK_LINE(7263)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
						}
						HX_STACK_LINE(7263)
						this->modified = true;
						HX_STACK_LINE(7263)
						(this->length)--;
						HX_STACK_LINE(7263)
						this->pushmod = true;
						HX_STACK_LINE(7263)
						ret1;
					}
					HX_STACK_LINE(7263)
					ret = true;
					HX_STACK_LINE(7263)
					break;
				}
				HX_STACK_LINE(7263)
				pre = cur;
				HX_STACK_LINE(7263)
				cur = cur->next;
			}
			HX_STACK_LINE(7263)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,remove,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_pop_unsafe","zpp_nape/util/Lists.hx",7241);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7242)
	{
	}
	HX_STACK_LINE(7250)
	::zpp_nape::geom::ZPP_SimplifyP ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(7251)
	this->pop();
	HX_STACK_LINE(7252)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::pop_unsafe","zpp_nape/util/Lists.hx",7239);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7239);
			{
				HX_STACK_LINE(7239)
				{
				}
				HX_STACK_LINE(7239)
				::zpp_nape::geom::ZPP_SimplifyP ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7239)
				__this->pop();
				HX_STACK_LINE(7239)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7239)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop_unsafe,return )

Void ZNPList_ZPP_SimplifyP_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_pop","zpp_nape/util/Lists.hx",7206);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7207)
		{
		}
		HX_STACK_LINE(7215)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7216)
		this->head = ret->next;
		HX_STACK_LINE(7217)
		{
		}
		HX_STACK_LINE(7218)
		{
			HX_STACK_LINE(7219)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7220)
			{
			}
			HX_STACK_LINE(7228)
			o->elt = null();
			HX_STACK_LINE(7229)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(7230)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7235)
		if (((this->head == null()))){
			HX_STACK_LINE(7235)
			this->pushmod = true;
		}
		HX_STACK_LINE(7236)
		this->modified = true;
		HX_STACK_LINE(7237)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,inlined_pop,(void))

Void ZNPList_ZPP_SimplifyP_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::pop","zpp_nape/util/Lists.hx",7204);
		HX_STACK_THIS(this);
		HX_STACK_LINE(7204)
		{
		}
		HX_STACK_LINE(7204)
		::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(7204)
		this->head = ret->next;
		HX_STACK_LINE(7204)
		{
		}
		HX_STACK_LINE(7204)
		{
			HX_STACK_LINE(7204)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(7204)
			{
			}
			HX_STACK_LINE(7204)
			o->elt = null();
			HX_STACK_LINE(7204)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
			HX_STACK_LINE(7204)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = o;
		}
		HX_STACK_LINE(7204)
		if (((this->head == null()))){
			HX_STACK_LINE(7204)
			this->pushmod = true;
		}
		HX_STACK_LINE(7204)
		this->modified = true;
		HX_STACK_LINE(7204)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_insert","zpp_nape/util/Lists.hx",7161);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7162)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyP &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7170);
			{
				HX_STACK_LINE(7171)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7172)
				{
					HX_STACK_LINE(7173)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(7173)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
					}
					else{
						HX_STACK_LINE(7180)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(7181)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7182)
						ret->next = null();
					}
					HX_STACK_LINE(7187)
					Dynamic();
				}
				HX_STACK_LINE(7189)
				ret->elt = o;
				HX_STACK_LINE(7190)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7170)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7192)
	if (((cur == null()))){
		HX_STACK_LINE(7193)
		temp->next = this->head;
		HX_STACK_LINE(7194)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(7197)
		temp->next = cur->next;
		HX_STACK_LINE(7198)
		cur->next = temp;
	}
	HX_STACK_LINE(7200)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(7201)
	(this->length)++;
	HX_STACK_LINE(7202)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP cur,::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::insert","zpp_nape/util/Lists.hx",7159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj *__this,::zpp_nape::geom::ZPP_SimplifyP &o,::zpp_nape::util::ZNPNode_ZPP_SimplifyP &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7159);
			{
				HX_STACK_LINE(7159)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyP &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7159);
						{
							HX_STACK_LINE(7159)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7159)
							{
								HX_STACK_LINE(7159)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(7159)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(7159)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(7159)
									::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7159)
									ret->next = null();
								}
								HX_STACK_LINE(7159)
								Dynamic();
							}
							HX_STACK_LINE(7159)
							ret->elt = o;
							HX_STACK_LINE(7159)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7159)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7159)
				if (((cur == null()))){
					HX_STACK_LINE(7159)
					temp->next = __this->head;
					HX_STACK_LINE(7159)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(7159)
					temp->next = cur->next;
					HX_STACK_LINE(7159)
					cur->next = temp;
				}
				HX_STACK_LINE(7159)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(7159)
				(__this->length)++;
				HX_STACK_LINE(7159)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(7159)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_SimplifyP_obj,insert,return )

Void ZNPList_ZPP_SimplifyP_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_SimplifyP x){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::addAll","zpp_nape/util/Lists.hx",7141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(7142)
		{
		}
		HX_STACK_LINE(7150)
		{
			HX_STACK_LINE(7151)
			::zpp_nape::util::ZNPNode_ZPP_SimplifyP cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(7152)
			while(((cx_ite != null()))){
				HX_STACK_LINE(7153)
				::zpp_nape::geom::ZPP_SimplifyP i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(7154)
				this->add(i);
				HX_STACK_LINE(7155)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,addAll,(void))

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::inlined_add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::inlined_add","zpp_nape/util/Lists.hx",7104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(7105)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyP &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7113);
			{
				HX_STACK_LINE(7114)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(7115)
				{
					HX_STACK_LINE(7116)
					if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
						HX_STACK_LINE(7116)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
					}
					else{
						HX_STACK_LINE(7123)
						ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
						HX_STACK_LINE(7124)
						::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
						HX_STACK_LINE(7125)
						ret->next = null();
					}
					HX_STACK_LINE(7130)
					Dynamic();
				}
				HX_STACK_LINE(7132)
				ret->elt = o;
				HX_STACK_LINE(7133)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(7113)
	::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(7135)
	temp->next = this->head;
	HX_STACK_LINE(7136)
	this->head = temp;
	HX_STACK_LINE(7137)
	this->modified = true;
	HX_STACK_LINE(7138)
	(this->length)++;
	HX_STACK_LINE(7139)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,inlined_add,return )

::zpp_nape::geom::ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::add( ::zpp_nape::geom::ZPP_SimplifyP o){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::add","zpp_nape/util/Lists.hx",7102);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyP &o,::zpp_nape::util::ZNPList_ZPP_SimplifyP_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7102);
			{
				HX_STACK_LINE(7102)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_SimplifyP Block( ::zpp_nape::geom::ZPP_SimplifyP &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",7102);
						{
							HX_STACK_LINE(7102)
							::zpp_nape::util::ZNPNode_ZPP_SimplifyP ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(7102)
							{
								HX_STACK_LINE(7102)
								if (((::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool == null()))){
									HX_STACK_LINE(7102)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::__new();
								}
								else{
									HX_STACK_LINE(7102)
									ret = ::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool;
									HX_STACK_LINE(7102)
									::zpp_nape::util::ZNPNode_ZPP_SimplifyP_obj::zpp_pool = ret->next;
									HX_STACK_LINE(7102)
									ret->next = null();
								}
								HX_STACK_LINE(7102)
								Dynamic();
							}
							HX_STACK_LINE(7102)
							ret->elt = o;
							HX_STACK_LINE(7102)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(7102)
				::zpp_nape::util::ZNPNode_ZPP_SimplifyP temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(7102)
				temp->next = __this->head;
				HX_STACK_LINE(7102)
				__this->head = temp;
				HX_STACK_LINE(7102)
				__this->modified = true;
				HX_STACK_LINE(7102)
				(__this->length)++;
				HX_STACK_LINE(7102)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(7102)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,add,return )

Void ZNPList_ZPP_SimplifyP_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_SimplifyP i){
{
		HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::setbegin","zpp_nape/util/Lists.hx",7097);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(7098)
		this->head = i;
		HX_STACK_LINE(7099)
		this->modified = true;
		HX_STACK_LINE(7100)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_SimplifyP_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_SimplifyP ZNPList_ZPP_SimplifyP_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_SimplifyP::begin","zpp_nape/util/Lists.hx",7092);
	HX_STACK_THIS(this);
	HX_STACK_LINE(7092)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_SimplifyP_obj,begin,return )


ZNPList_ZPP_SimplifyP_obj::ZNPList_ZPP_SimplifyP_obj()
{
}

void ZNPList_ZPP_SimplifyP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_SimplifyP);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_SimplifyP_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_SimplifyP_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_SimplifyP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_SimplifyP >(); return inValue; }
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

void ZNPList_ZPP_SimplifyP_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_SimplifyP_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_SimplifyP_obj::__mClass;

void ZNPList_ZPP_SimplifyP_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_SimplifyP"), hx::TCanCast< ZNPList_ZPP_SimplifyP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_SimplifyP_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
