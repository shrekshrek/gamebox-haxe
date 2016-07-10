#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_CutVert
#include <zpp_nape/geom/ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CutVert
#include <zpp_nape/util/ZNPList_ZPP_CutVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CutVert
#include <zpp_nape/util/ZNPNode_ZPP_CutVert.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_CutVert_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_CutVert::new","zpp_nape/util/Lists.hx",5551);
{
	HX_STACK_LINE(5558)
	this->length = (int)0;
	HX_STACK_LINE(5557)
	this->pushmod = false;
	HX_STACK_LINE(5556)
	this->modified = false;
	HX_STACK_LINE(5552)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_CutVert_obj::~ZNPList_ZPP_CutVert_obj() { }

Dynamic ZNPList_ZPP_CutVert_obj::__CreateEmpty() { return  new ZNPList_ZPP_CutVert_obj; }
hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > ZNPList_ZPP_CutVert_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > result = new ZNPList_ZPP_CutVert_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_CutVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_CutVert_obj > result = new ZNPList_ZPP_CutVert_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::at","zpp_nape/util/Lists.hx",5921);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5922)
	{
	}
	HX_STACK_LINE(5930)
	::zpp_nape::util::ZNPNode_ZPP_CutVert it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(5931)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_CutVert(it->elt) : ::zpp_nape::geom::ZPP_CutVert(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::iterator_at","zpp_nape/util/Lists.hx",5908);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(5909)
	{
	}
	HX_STACK_LINE(5917)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5918)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(5918)
		ret = ret->next;
	}
	HX_STACK_LINE(5919)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,iterator_at,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::back","zpp_nape/util/Lists.hx",5899);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5900)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5901)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5902)
	while(((cur != null()))){
		HX_STACK_LINE(5903)
		ret = cur;
		HX_STACK_LINE(5904)
		cur = cur->next;
	}
	HX_STACK_LINE(5906)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,back,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::front","zpp_nape/util/Lists.hx",5899);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5899)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,front,return )

bool ZNPList_ZPP_CutVert_obj::inlined_has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_has","zpp_nape/util/Lists.hx",5869);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5870)
	{
	}
	HX_STACK_LINE(5878)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5879)
	{
		HX_STACK_LINE(5880)
		ret = false;
		HX_STACK_LINE(5881)
		{
			HX_STACK_LINE(5882)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5883)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5884)
				::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(5885)
				if (((npite == obj))){
					HX_STACK_LINE(5887)
					ret = true;
					HX_STACK_LINE(5888)
					break;
				}
				HX_STACK_LINE(5891)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(5895)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_has,return )

bool ZNPList_ZPP_CutVert_obj::has( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::has","zpp_nape/util/Lists.hx",5867);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::geom::ZPP_CutVert &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5867);
			{
				HX_STACK_LINE(5867)
				{
				}
				HX_STACK_LINE(5867)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5867)
				{
					HX_STACK_LINE(5867)
					ret = false;
					HX_STACK_LINE(5867)
					{
						HX_STACK_LINE(5867)
						::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(5867)
						while(((cx_ite != null()))){
							HX_STACK_LINE(5867)
							::zpp_nape::geom::ZPP_CutVert npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(5867)
							if (((npite == obj))){
								HX_STACK_LINE(5867)
								ret = true;
								HX_STACK_LINE(5867)
								break;
							}
							HX_STACK_LINE(5867)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(5867)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5867)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,has,return )

int ZNPList_ZPP_CutVert_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::size","zpp_nape/util/Lists.hx",5867);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5867)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,size,return )

bool ZNPList_ZPP_CutVert_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::empty","zpp_nape/util/Lists.hx",5865);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5865)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,empty,return )

Void ZNPList_ZPP_CutVert_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::reverse","zpp_nape/util/Lists.hx",5850);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5851)
		::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(5852)
		::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(5853)
		while(((cur != null()))){
			HX_STACK_LINE(5854)
			::zpp_nape::util::ZNPNode_ZPP_CutVert nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(5855)
			cur->next = pre;
			HX_STACK_LINE(5856)
			this->head = cur;
			HX_STACK_LINE(5857)
			pre = cur;
			HX_STACK_LINE(5858)
			cur = nx;
		}
		HX_STACK_LINE(5860)
		this->modified = true;
		HX_STACK_LINE(5861)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,reverse,(void))

Void ZNPList_ZPP_CutVert_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_clear","zpp_nape/util/Lists.hx",5844);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5846)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5846)
			{
			}
			HX_STACK_LINE(5846)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5846)
			this->head = ret->next;
			HX_STACK_LINE(5846)
			{
			}
			HX_STACK_LINE(5846)
			{
				HX_STACK_LINE(5846)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5846)
				{
				}
				HX_STACK_LINE(5846)
				o->elt = null();
				HX_STACK_LINE(5846)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(5846)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5846)
			if (((this->head == null()))){
				HX_STACK_LINE(5846)
				this->pushmod = true;
			}
			HX_STACK_LINE(5846)
			this->modified = true;
			HX_STACK_LINE(5846)
			(this->length)--;
		}
		HX_STACK_LINE(5847)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_clear,(void))

Void ZNPList_ZPP_CutVert_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::clear","zpp_nape/util/Lists.hx",5842);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5842)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(5842)
			{
			}
			HX_STACK_LINE(5842)
			::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5842)
			this->head = ret->next;
			HX_STACK_LINE(5842)
			{
			}
			HX_STACK_LINE(5842)
			{
				HX_STACK_LINE(5842)
				::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(5842)
				{
				}
				HX_STACK_LINE(5842)
				o->elt = null();
				HX_STACK_LINE(5842)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
				HX_STACK_LINE(5842)
				::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
			}
			HX_STACK_LINE(5842)
			if (((this->head == null()))){
				HX_STACK_LINE(5842)
				this->pushmod = true;
			}
			HX_STACK_LINE(5842)
			this->modified = true;
			HX_STACK_LINE(5842)
			(this->length)--;
		}
		HX_STACK_LINE(5842)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::splice","zpp_nape/util/Lists.hx",5838);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(5839)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(5839)
		this->erase(pre);
	}
	HX_STACK_LINE(5840)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_erase","zpp_nape/util/Lists.hx",5792);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(5793)
	{
	}
	HX_STACK_LINE(5801)
	::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(5802)
	::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5803)
	if (((pre == null()))){
		HX_STACK_LINE(5804)
		old = this->head;
		HX_STACK_LINE(5805)
		ret = old->next;
		HX_STACK_LINE(5806)
		this->head = ret;
		HX_STACK_LINE(5807)
		if (((this->head == null()))){
			HX_STACK_LINE(5807)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(5810)
		old = pre->next;
		HX_STACK_LINE(5811)
		ret = old->next;
		HX_STACK_LINE(5812)
		pre->next = ret;
		HX_STACK_LINE(5813)
		if (((ret == null()))){
			HX_STACK_LINE(5813)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(5815)
	{
	}
	HX_STACK_LINE(5816)
	{
		HX_STACK_LINE(5817)
		::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(5818)
		{
		}
		HX_STACK_LINE(5826)
		o->elt = null();
		HX_STACK_LINE(5827)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
		HX_STACK_LINE(5828)
		::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
	}
	HX_STACK_LINE(5833)
	this->modified = true;
	HX_STACK_LINE(5834)
	(this->length)--;
	HX_STACK_LINE(5835)
	this->pushmod = true;
	HX_STACK_LINE(5836)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_CutVert pre){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::erase","zpp_nape/util/Lists.hx",5790);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::util::ZNPNode_ZPP_CutVert &pre,::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5790);
			{
				HX_STACK_LINE(5790)
				{
				}
				HX_STACK_LINE(5790)
				::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5790)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5790)
				if (((pre == null()))){
					HX_STACK_LINE(5790)
					old = __this->head;
					HX_STACK_LINE(5790)
					ret = old->next;
					HX_STACK_LINE(5790)
					__this->head = ret;
					HX_STACK_LINE(5790)
					if (((__this->head == null()))){
						HX_STACK_LINE(5790)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5790)
					old = pre->next;
					HX_STACK_LINE(5790)
					ret = old->next;
					HX_STACK_LINE(5790)
					pre->next = ret;
					HX_STACK_LINE(5790)
					if (((ret == null()))){
						HX_STACK_LINE(5790)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(5790)
				{
				}
				HX_STACK_LINE(5790)
				{
					HX_STACK_LINE(5790)
					::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5790)
					{
					}
					HX_STACK_LINE(5790)
					o->elt = null();
					HX_STACK_LINE(5790)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
					HX_STACK_LINE(5790)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5790)
				__this->modified = true;
				HX_STACK_LINE(5790)
				(__this->length)--;
				HX_STACK_LINE(5790)
				__this->pushmod = true;
				HX_STACK_LINE(5790)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5790)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,erase,return )

bool ZNPList_ZPP_CutVert_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_try_remove","zpp_nape/util/Lists.hx",5767);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5768)
	{
	}
	HX_STACK_LINE(5776)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5777)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5778)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5779)
	while(((cur != null()))){
		HX_STACK_LINE(5780)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5781)
			{
				HX_STACK_LINE(5781)
				{
				}
				HX_STACK_LINE(5781)
				::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(5781)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(5781)
				if (((pre == null()))){
					HX_STACK_LINE(5781)
					old = this->head;
					HX_STACK_LINE(5781)
					ret1 = old->next;
					HX_STACK_LINE(5781)
					this->head = ret1;
					HX_STACK_LINE(5781)
					if (((this->head == null()))){
						HX_STACK_LINE(5781)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(5781)
					old = pre->next;
					HX_STACK_LINE(5781)
					ret1 = old->next;
					HX_STACK_LINE(5781)
					pre->next = ret1;
					HX_STACK_LINE(5781)
					if (((ret1 == null()))){
						HX_STACK_LINE(5781)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(5781)
				{
				}
				HX_STACK_LINE(5781)
				{
					HX_STACK_LINE(5781)
					::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(5781)
					{
					}
					HX_STACK_LINE(5781)
					o->elt = null();
					HX_STACK_LINE(5781)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
					HX_STACK_LINE(5781)
					::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
				}
				HX_STACK_LINE(5781)
				this->modified = true;
				HX_STACK_LINE(5781)
				(this->length)--;
				HX_STACK_LINE(5781)
				this->pushmod = true;
				HX_STACK_LINE(5781)
				ret1;
			}
			HX_STACK_LINE(5782)
			ret = true;
			HX_STACK_LINE(5783)
			break;
		}
		HX_STACK_LINE(5785)
		pre = cur;
		HX_STACK_LINE(5786)
		cur = cur->next;
	}
	HX_STACK_LINE(5788)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_try_remove,return )

Void ZNPList_ZPP_CutVert_obj::inlined_remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_remove","zpp_nape/util/Lists.hx",5754);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5755)
		{
		}
		HX_STACK_LINE(5763)
		{
			HX_STACK_LINE(5763)
			{
			}
			HX_STACK_LINE(5763)
			::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(5763)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5763)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5763)
			while(((cur != null()))){
				HX_STACK_LINE(5763)
				if (((cur->elt == obj))){
					HX_STACK_LINE(5763)
					{
						HX_STACK_LINE(5763)
						{
						}
						HX_STACK_LINE(5763)
						::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(5763)
						::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(5763)
						if (((pre == null()))){
							HX_STACK_LINE(5763)
							old = this->head;
							HX_STACK_LINE(5763)
							ret1 = old->next;
							HX_STACK_LINE(5763)
							this->head = ret1;
							HX_STACK_LINE(5763)
							if (((this->head == null()))){
								HX_STACK_LINE(5763)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(5763)
							old = pre->next;
							HX_STACK_LINE(5763)
							ret1 = old->next;
							HX_STACK_LINE(5763)
							pre->next = ret1;
							HX_STACK_LINE(5763)
							if (((ret1 == null()))){
								HX_STACK_LINE(5763)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(5763)
						{
						}
						HX_STACK_LINE(5763)
						{
							HX_STACK_LINE(5763)
							::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5763)
							{
							}
							HX_STACK_LINE(5763)
							o->elt = null();
							HX_STACK_LINE(5763)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
							HX_STACK_LINE(5763)
							::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5763)
						this->modified = true;
						HX_STACK_LINE(5763)
						(this->length)--;
						HX_STACK_LINE(5763)
						this->pushmod = true;
						HX_STACK_LINE(5763)
						ret1;
					}
					HX_STACK_LINE(5763)
					ret = true;
					HX_STACK_LINE(5763)
					break;
				}
				HX_STACK_LINE(5763)
				pre = cur;
				HX_STACK_LINE(5763)
				cur = cur->next;
			}
			HX_STACK_LINE(5763)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_remove,(void))

bool ZNPList_ZPP_CutVert_obj::try_remove( ::zpp_nape::geom::ZPP_CutVert obj){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::try_remove","zpp_nape/util/Lists.hx",5729);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(5730)
	{
	}
	HX_STACK_LINE(5738)
	::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(5739)
	::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(5740)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5741)
	while(((cur != null()))){
		HX_STACK_LINE(5742)
		if (((cur->elt == obj))){
			HX_STACK_LINE(5743)
			this->erase(pre);
			HX_STACK_LINE(5744)
			ret = true;
			HX_STACK_LINE(5745)
			break;
		}
		HX_STACK_LINE(5747)
		pre = cur;
		HX_STACK_LINE(5748)
		cur = cur->next;
	}
	HX_STACK_LINE(5750)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,try_remove,return )

Void ZNPList_ZPP_CutVert_obj::remove( ::zpp_nape::geom::ZPP_CutVert obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::remove","zpp_nape/util/Lists.hx",5718);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(5719)
		{
		}
		HX_STACK_LINE(5727)
		{
			HX_STACK_LINE(5727)
			{
			}
			HX_STACK_LINE(5727)
			::zpp_nape::util::ZNPNode_ZPP_CutVert pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(5727)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(5727)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(5727)
			while(((cur != null()))){
				HX_STACK_LINE(5727)
				if (((cur->elt == obj))){
					HX_STACK_LINE(5727)
					{
						HX_STACK_LINE(5727)
						{
						}
						HX_STACK_LINE(5727)
						::zpp_nape::util::ZNPNode_ZPP_CutVert old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(5727)
						::zpp_nape::util::ZNPNode_ZPP_CutVert ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(5727)
						if (((pre == null()))){
							HX_STACK_LINE(5727)
							old = this->head;
							HX_STACK_LINE(5727)
							ret1 = old->next;
							HX_STACK_LINE(5727)
							this->head = ret1;
							HX_STACK_LINE(5727)
							if (((this->head == null()))){
								HX_STACK_LINE(5727)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(5727)
							old = pre->next;
							HX_STACK_LINE(5727)
							ret1 = old->next;
							HX_STACK_LINE(5727)
							pre->next = ret1;
							HX_STACK_LINE(5727)
							if (((ret1 == null()))){
								HX_STACK_LINE(5727)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(5727)
						{
						}
						HX_STACK_LINE(5727)
						{
							HX_STACK_LINE(5727)
							::zpp_nape::util::ZNPNode_ZPP_CutVert o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(5727)
							{
							}
							HX_STACK_LINE(5727)
							o->elt = null();
							HX_STACK_LINE(5727)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
							HX_STACK_LINE(5727)
							::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
						}
						HX_STACK_LINE(5727)
						this->modified = true;
						HX_STACK_LINE(5727)
						(this->length)--;
						HX_STACK_LINE(5727)
						this->pushmod = true;
						HX_STACK_LINE(5727)
						ret1;
					}
					HX_STACK_LINE(5727)
					ret = true;
					HX_STACK_LINE(5727)
					break;
				}
				HX_STACK_LINE(5727)
				pre = cur;
				HX_STACK_LINE(5727)
				cur = cur->next;
			}
			HX_STACK_LINE(5727)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,remove,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_pop_unsafe","zpp_nape/util/Lists.hx",5705);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5706)
	{
	}
	HX_STACK_LINE(5714)
	::zpp_nape::geom::ZPP_CutVert ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(5715)
	this->pop();
	HX_STACK_LINE(5716)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::pop_unsafe","zpp_nape/util/Lists.hx",5703);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5703);
			{
				HX_STACK_LINE(5703)
				{
				}
				HX_STACK_LINE(5703)
				::zpp_nape::geom::ZPP_CutVert ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5703)
				__this->pop();
				HX_STACK_LINE(5703)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5703)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop_unsafe,return )

Void ZNPList_ZPP_CutVert_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_pop","zpp_nape/util/Lists.hx",5670);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5671)
		{
		}
		HX_STACK_LINE(5679)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5680)
		this->head = ret->next;
		HX_STACK_LINE(5681)
		{
		}
		HX_STACK_LINE(5682)
		{
			HX_STACK_LINE(5683)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5684)
			{
			}
			HX_STACK_LINE(5692)
			o->elt = null();
			HX_STACK_LINE(5693)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(5694)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5699)
		if (((this->head == null()))){
			HX_STACK_LINE(5699)
			this->pushmod = true;
		}
		HX_STACK_LINE(5700)
		this->modified = true;
		HX_STACK_LINE(5701)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,inlined_pop,(void))

Void ZNPList_ZPP_CutVert_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::pop","zpp_nape/util/Lists.hx",5668);
		HX_STACK_THIS(this);
		HX_STACK_LINE(5668)
		{
		}
		HX_STACK_LINE(5668)
		::zpp_nape::util::ZNPNode_ZPP_CutVert ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(5668)
		this->head = ret->next;
		HX_STACK_LINE(5668)
		{
		}
		HX_STACK_LINE(5668)
		{
			HX_STACK_LINE(5668)
			::zpp_nape::util::ZNPNode_ZPP_CutVert o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(5668)
			{
			}
			HX_STACK_LINE(5668)
			o->elt = null();
			HX_STACK_LINE(5668)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
			HX_STACK_LINE(5668)
			::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(5668)
		if (((this->head == null()))){
			HX_STACK_LINE(5668)
			this->pushmod = true;
		}
		HX_STACK_LINE(5668)
		this->modified = true;
		HX_STACK_LINE(5668)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_insert","zpp_nape/util/Lists.hx",5625);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(5626)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5634);
			{
				HX_STACK_LINE(5635)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5636)
				{
					HX_STACK_LINE(5637)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(5637)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
					}
					else{
						HX_STACK_LINE(5644)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(5645)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(5646)
						ret->next = null();
					}
					HX_STACK_LINE(5651)
					Dynamic();
				}
				HX_STACK_LINE(5653)
				ret->elt = o;
				HX_STACK_LINE(5654)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5634)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5656)
	if (((cur == null()))){
		HX_STACK_LINE(5657)
		temp->next = this->head;
		HX_STACK_LINE(5658)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(5661)
		temp->next = cur->next;
		HX_STACK_LINE(5662)
		cur->next = temp;
	}
	HX_STACK_LINE(5664)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(5665)
	(this->length)++;
	HX_STACK_LINE(5666)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_CutVert cur,::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::insert","zpp_nape/util/Lists.hx",5623);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this,::zpp_nape::geom::ZPP_CutVert &o,::zpp_nape::util::ZNPNode_ZPP_CutVert &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5623);
			{
				HX_STACK_LINE(5623)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5623);
						{
							HX_STACK_LINE(5623)
							::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5623)
							{
								HX_STACK_LINE(5623)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(5623)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
								}
								else{
									HX_STACK_LINE(5623)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(5623)
									::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(5623)
									ret->next = null();
								}
								HX_STACK_LINE(5623)
								Dynamic();
							}
							HX_STACK_LINE(5623)
							ret->elt = o;
							HX_STACK_LINE(5623)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5623)
				::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(5623)
				if (((cur == null()))){
					HX_STACK_LINE(5623)
					temp->next = __this->head;
					HX_STACK_LINE(5623)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(5623)
					temp->next = cur->next;
					HX_STACK_LINE(5623)
					cur->next = temp;
				}
				HX_STACK_LINE(5623)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(5623)
				(__this->length)++;
				HX_STACK_LINE(5623)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(5623)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_CutVert_obj,insert,return )

Void ZNPList_ZPP_CutVert_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_CutVert x){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::addAll","zpp_nape/util/Lists.hx",5605);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5606)
		{
		}
		HX_STACK_LINE(5614)
		{
			HX_STACK_LINE(5615)
			::zpp_nape::util::ZNPNode_ZPP_CutVert cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(5616)
			while(((cx_ite != null()))){
				HX_STACK_LINE(5617)
				::zpp_nape::geom::ZPP_CutVert i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(5618)
				this->add(i);
				HX_STACK_LINE(5619)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,addAll,(void))

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::inlined_add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::inlined_add","zpp_nape/util/Lists.hx",5568);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(5569)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5577);
			{
				HX_STACK_LINE(5578)
				::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5579)
				{
					HX_STACK_LINE(5580)
					if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
						HX_STACK_LINE(5580)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
					}
					else{
						HX_STACK_LINE(5587)
						ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
						HX_STACK_LINE(5588)
						::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
						HX_STACK_LINE(5589)
						ret->next = null();
					}
					HX_STACK_LINE(5594)
					Dynamic();
				}
				HX_STACK_LINE(5596)
				ret->elt = o;
				HX_STACK_LINE(5597)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5577)
	::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5599)
	temp->next = this->head;
	HX_STACK_LINE(5600)
	this->head = temp;
	HX_STACK_LINE(5601)
	this->modified = true;
	HX_STACK_LINE(5602)
	(this->length)++;
	HX_STACK_LINE(5603)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,inlined_add,return )

::zpp_nape::geom::ZPP_CutVert ZNPList_ZPP_CutVert_obj::add( ::zpp_nape::geom::ZPP_CutVert o){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::add","zpp_nape/util/Lists.hx",5566);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o,::zpp_nape::util::ZNPList_ZPP_CutVert_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5566);
			{
				HX_STACK_LINE(5566)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_CutVert Block( ::zpp_nape::geom::ZPP_CutVert &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5566);
						{
							HX_STACK_LINE(5566)
							::zpp_nape::util::ZNPNode_ZPP_CutVert ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5566)
							{
								HX_STACK_LINE(5566)
								if (((::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool == null()))){
									HX_STACK_LINE(5566)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::__new();
								}
								else{
									HX_STACK_LINE(5566)
									ret = ::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool;
									HX_STACK_LINE(5566)
									::zpp_nape::util::ZNPNode_ZPP_CutVert_obj::zpp_pool = ret->next;
									HX_STACK_LINE(5566)
									ret->next = null();
								}
								HX_STACK_LINE(5566)
								Dynamic();
							}
							HX_STACK_LINE(5566)
							ret->elt = o;
							HX_STACK_LINE(5566)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5566)
				::zpp_nape::util::ZNPNode_ZPP_CutVert temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(5566)
				temp->next = __this->head;
				HX_STACK_LINE(5566)
				__this->head = temp;
				HX_STACK_LINE(5566)
				__this->modified = true;
				HX_STACK_LINE(5566)
				(__this->length)++;
				HX_STACK_LINE(5566)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(5566)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,add,return )

Void ZNPList_ZPP_CutVert_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_CutVert i){
{
		HX_STACK_PUSH("ZNPList_ZPP_CutVert::setbegin","zpp_nape/util/Lists.hx",5561);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(5562)
		this->head = i;
		HX_STACK_LINE(5563)
		this->modified = true;
		HX_STACK_LINE(5564)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_CutVert_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_CutVert ZNPList_ZPP_CutVert_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_CutVert::begin","zpp_nape/util/Lists.hx",5556);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5556)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_CutVert_obj,begin,return )


ZNPList_ZPP_CutVert_obj::ZNPList_ZPP_CutVert_obj()
{
}

void ZNPList_ZPP_CutVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_CutVert);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_CutVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_CutVert_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_CutVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_CutVert >(); return inValue; }
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

void ZNPList_ZPP_CutVert_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_CutVert_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_CutVert_obj::__mClass;

void ZNPList_ZPP_CutVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_CutVert"), hx::TCanCast< ZNPList_ZPP_CutVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_CutVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
