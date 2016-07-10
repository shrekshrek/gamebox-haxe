#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionVertex
#include <zpp_nape/geom/ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPList_ZPP_PartitionVertex.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionVertex
#include <zpp_nape/util/ZNPNode_ZPP_PartitionVertex.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_PartitionVertex_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::new","zpp_nape/util/Lists.hx",5935);
{
	HX_STACK_LINE(5942)
	this->length = (int)0;
	HX_STACK_LINE(5941)
	this->pushmod = false;
	HX_STACK_LINE(5940)
	this->modified = false;
	HX_STACK_LINE(5936)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_PartitionVertex_obj::~ZNPList_ZPP_PartitionVertex_obj() { }

Dynamic ZNPList_ZPP_PartitionVertex_obj::__CreateEmpty() { return  new ZNPList_ZPP_PartitionVertex_obj; }
hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > ZNPList_ZPP_PartitionVertex_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > result = new ZNPList_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_PartitionVertex_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_PartitionVertex_obj > result = new ZNPList_ZPP_PartitionVertex_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::at","zpp_nape/util/Lists.hx",6305);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6306)
	{
	}
	HX_STACK_LINE(6314)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6315)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_PartitionVertex(it->elt) : ::zpp_nape::geom::ZPP_PartitionVertex(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::iterator_at","zpp_nape/util/Lists.hx",6292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6293)
	{
	}
	HX_STACK_LINE(6301)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6302)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(6302)
		ret = ret->next;
	}
	HX_STACK_LINE(6303)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::back","zpp_nape/util/Lists.hx",6283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6284)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6285)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6286)
	while(((cur != null()))){
		HX_STACK_LINE(6287)
		ret = cur;
		HX_STACK_LINE(6288)
		cur = cur->next;
	}
	HX_STACK_LINE(6290)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,back,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::front","zpp_nape/util/Lists.hx",6283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6283)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,front,return )

bool ZNPList_ZPP_PartitionVertex_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_has","zpp_nape/util/Lists.hx",6253);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6254)
	{
	}
	HX_STACK_LINE(6262)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6263)
	{
		HX_STACK_LINE(6264)
		ret = false;
		HX_STACK_LINE(6265)
		{
			HX_STACK_LINE(6266)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6267)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6268)
				::zpp_nape::geom::ZPP_PartitionVertex npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(6269)
				if (((npite == obj))){
					HX_STACK_LINE(6271)
					ret = true;
					HX_STACK_LINE(6272)
					break;
				}
				HX_STACK_LINE(6275)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(6279)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_has,return )

bool ZNPList_ZPP_PartitionVertex_obj::has( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::has","zpp_nape/util/Lists.hx",6251);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6251);
			{
				HX_STACK_LINE(6251)
				{
				}
				HX_STACK_LINE(6251)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6251)
				{
					HX_STACK_LINE(6251)
					ret = false;
					HX_STACK_LINE(6251)
					{
						HX_STACK_LINE(6251)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(6251)
						while(((cx_ite != null()))){
							HX_STACK_LINE(6251)
							::zpp_nape::geom::ZPP_PartitionVertex npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(6251)
							if (((npite == obj))){
								HX_STACK_LINE(6251)
								ret = true;
								HX_STACK_LINE(6251)
								break;
							}
							HX_STACK_LINE(6251)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(6251)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6251)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,has,return )

int ZNPList_ZPP_PartitionVertex_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::size","zpp_nape/util/Lists.hx",6251);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6251)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,size,return )

bool ZNPList_ZPP_PartitionVertex_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::empty","zpp_nape/util/Lists.hx",6249);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6249)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,empty,return )

Void ZNPList_ZPP_PartitionVertex_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::reverse","zpp_nape/util/Lists.hx",6234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6235)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6236)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6237)
		while(((cur != null()))){
			HX_STACK_LINE(6238)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(6239)
			cur->next = pre;
			HX_STACK_LINE(6240)
			this->head = cur;
			HX_STACK_LINE(6241)
			pre = cur;
			HX_STACK_LINE(6242)
			cur = nx;
		}
		HX_STACK_LINE(6244)
		this->modified = true;
		HX_STACK_LINE(6245)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,reverse,(void))

Void ZNPList_ZPP_PartitionVertex_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_clear","zpp_nape/util/Lists.hx",6228);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6230)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6230)
			{
			}
			HX_STACK_LINE(6230)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6230)
			this->head = ret->next;
			HX_STACK_LINE(6230)
			{
			}
			HX_STACK_LINE(6230)
			{
				HX_STACK_LINE(6230)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6230)
				{
				}
				HX_STACK_LINE(6230)
				o->elt = null();
				HX_STACK_LINE(6230)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(6230)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6230)
			if (((this->head == null()))){
				HX_STACK_LINE(6230)
				this->pushmod = true;
			}
			HX_STACK_LINE(6230)
			this->modified = true;
			HX_STACK_LINE(6230)
			(this->length)--;
		}
		HX_STACK_LINE(6231)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_clear,(void))

Void ZNPList_ZPP_PartitionVertex_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::clear","zpp_nape/util/Lists.hx",6226);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6226)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6226)
			{
			}
			HX_STACK_LINE(6226)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6226)
			this->head = ret->next;
			HX_STACK_LINE(6226)
			{
			}
			HX_STACK_LINE(6226)
			{
				HX_STACK_LINE(6226)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6226)
				{
				}
				HX_STACK_LINE(6226)
				o->elt = null();
				HX_STACK_LINE(6226)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
				HX_STACK_LINE(6226)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6226)
			if (((this->head == null()))){
				HX_STACK_LINE(6226)
				this->pushmod = true;
			}
			HX_STACK_LINE(6226)
			this->modified = true;
			HX_STACK_LINE(6226)
			(this->length)--;
		}
		HX_STACK_LINE(6226)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::splice","zpp_nape/util/Lists.hx",6222);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6223)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(6223)
		this->erase(pre);
	}
	HX_STACK_LINE(6224)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_erase","zpp_nape/util/Lists.hx",6176);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(6177)
	{
	}
	HX_STACK_LINE(6185)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6186)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6187)
	if (((pre == null()))){
		HX_STACK_LINE(6188)
		old = this->head;
		HX_STACK_LINE(6189)
		ret = old->next;
		HX_STACK_LINE(6190)
		this->head = ret;
		HX_STACK_LINE(6191)
		if (((this->head == null()))){
			HX_STACK_LINE(6191)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6194)
		old = pre->next;
		HX_STACK_LINE(6195)
		ret = old->next;
		HX_STACK_LINE(6196)
		pre->next = ret;
		HX_STACK_LINE(6197)
		if (((ret == null()))){
			HX_STACK_LINE(6197)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6199)
	{
	}
	HX_STACK_LINE(6200)
	{
		HX_STACK_LINE(6201)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6202)
		{
		}
		HX_STACK_LINE(6210)
		o->elt = null();
		HX_STACK_LINE(6211)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
		HX_STACK_LINE(6212)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6217)
	this->modified = true;
	HX_STACK_LINE(6218)
	(this->length)--;
	HX_STACK_LINE(6219)
	this->pushmod = true;
	HX_STACK_LINE(6220)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::erase","zpp_nape/util/Lists.hx",6174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &pre,::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6174);
			{
				HX_STACK_LINE(6174)
				{
				}
				HX_STACK_LINE(6174)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6174)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6174)
				if (((pre == null()))){
					HX_STACK_LINE(6174)
					old = __this->head;
					HX_STACK_LINE(6174)
					ret = old->next;
					HX_STACK_LINE(6174)
					__this->head = ret;
					HX_STACK_LINE(6174)
					if (((__this->head == null()))){
						HX_STACK_LINE(6174)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6174)
					old = pre->next;
					HX_STACK_LINE(6174)
					ret = old->next;
					HX_STACK_LINE(6174)
					pre->next = ret;
					HX_STACK_LINE(6174)
					if (((ret == null()))){
						HX_STACK_LINE(6174)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(6174)
				{
				}
				HX_STACK_LINE(6174)
				{
					HX_STACK_LINE(6174)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6174)
					{
					}
					HX_STACK_LINE(6174)
					o->elt = null();
					HX_STACK_LINE(6174)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(6174)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6174)
				__this->modified = true;
				HX_STACK_LINE(6174)
				(__this->length)--;
				HX_STACK_LINE(6174)
				__this->pushmod = true;
				HX_STACK_LINE(6174)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6174)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,erase,return )

bool ZNPList_ZPP_PartitionVertex_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_try_remove","zpp_nape/util/Lists.hx",6151);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6152)
	{
	}
	HX_STACK_LINE(6160)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6161)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6162)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6163)
	while(((cur != null()))){
		HX_STACK_LINE(6164)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6165)
			{
				HX_STACK_LINE(6165)
				{
				}
				HX_STACK_LINE(6165)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6165)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6165)
				if (((pre == null()))){
					HX_STACK_LINE(6165)
					old = this->head;
					HX_STACK_LINE(6165)
					ret1 = old->next;
					HX_STACK_LINE(6165)
					this->head = ret1;
					HX_STACK_LINE(6165)
					if (((this->head == null()))){
						HX_STACK_LINE(6165)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6165)
					old = pre->next;
					HX_STACK_LINE(6165)
					ret1 = old->next;
					HX_STACK_LINE(6165)
					pre->next = ret1;
					HX_STACK_LINE(6165)
					if (((ret1 == null()))){
						HX_STACK_LINE(6165)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6165)
				{
				}
				HX_STACK_LINE(6165)
				{
					HX_STACK_LINE(6165)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6165)
					{
					}
					HX_STACK_LINE(6165)
					o->elt = null();
					HX_STACK_LINE(6165)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
					HX_STACK_LINE(6165)
					::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6165)
				this->modified = true;
				HX_STACK_LINE(6165)
				(this->length)--;
				HX_STACK_LINE(6165)
				this->pushmod = true;
				HX_STACK_LINE(6165)
				ret1;
			}
			HX_STACK_LINE(6166)
			ret = true;
			HX_STACK_LINE(6167)
			break;
		}
		HX_STACK_LINE(6169)
		pre = cur;
		HX_STACK_LINE(6170)
		cur = cur->next;
	}
	HX_STACK_LINE(6172)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_try_remove,return )

Void ZNPList_ZPP_PartitionVertex_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_remove","zpp_nape/util/Lists.hx",6138);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6139)
		{
		}
		HX_STACK_LINE(6147)
		{
			HX_STACK_LINE(6147)
			{
			}
			HX_STACK_LINE(6147)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6147)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6147)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6147)
			while(((cur != null()))){
				HX_STACK_LINE(6147)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6147)
					{
						HX_STACK_LINE(6147)
						{
						}
						HX_STACK_LINE(6147)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6147)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6147)
						if (((pre == null()))){
							HX_STACK_LINE(6147)
							old = this->head;
							HX_STACK_LINE(6147)
							ret1 = old->next;
							HX_STACK_LINE(6147)
							this->head = ret1;
							HX_STACK_LINE(6147)
							if (((this->head == null()))){
								HX_STACK_LINE(6147)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6147)
							old = pre->next;
							HX_STACK_LINE(6147)
							ret1 = old->next;
							HX_STACK_LINE(6147)
							pre->next = ret1;
							HX_STACK_LINE(6147)
							if (((ret1 == null()))){
								HX_STACK_LINE(6147)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6147)
						{
						}
						HX_STACK_LINE(6147)
						{
							HX_STACK_LINE(6147)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6147)
							{
							}
							HX_STACK_LINE(6147)
							o->elt = null();
							HX_STACK_LINE(6147)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(6147)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6147)
						this->modified = true;
						HX_STACK_LINE(6147)
						(this->length)--;
						HX_STACK_LINE(6147)
						this->pushmod = true;
						HX_STACK_LINE(6147)
						ret1;
					}
					HX_STACK_LINE(6147)
					ret = true;
					HX_STACK_LINE(6147)
					break;
				}
				HX_STACK_LINE(6147)
				pre = cur;
				HX_STACK_LINE(6147)
				cur = cur->next;
			}
			HX_STACK_LINE(6147)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_remove,(void))

bool ZNPList_ZPP_PartitionVertex_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::try_remove","zpp_nape/util/Lists.hx",6113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6114)
	{
	}
	HX_STACK_LINE(6122)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6123)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6124)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6125)
	while(((cur != null()))){
		HX_STACK_LINE(6126)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6127)
			this->erase(pre);
			HX_STACK_LINE(6128)
			ret = true;
			HX_STACK_LINE(6129)
			break;
		}
		HX_STACK_LINE(6131)
		pre = cur;
		HX_STACK_LINE(6132)
		cur = cur->next;
	}
	HX_STACK_LINE(6134)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,try_remove,return )

Void ZNPList_ZPP_PartitionVertex_obj::remove( ::zpp_nape::geom::ZPP_PartitionVertex obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::remove","zpp_nape/util/Lists.hx",6102);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6103)
		{
		}
		HX_STACK_LINE(6111)
		{
			HX_STACK_LINE(6111)
			{
			}
			HX_STACK_LINE(6111)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6111)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6111)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6111)
			while(((cur != null()))){
				HX_STACK_LINE(6111)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6111)
					{
						HX_STACK_LINE(6111)
						{
						}
						HX_STACK_LINE(6111)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6111)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6111)
						if (((pre == null()))){
							HX_STACK_LINE(6111)
							old = this->head;
							HX_STACK_LINE(6111)
							ret1 = old->next;
							HX_STACK_LINE(6111)
							this->head = ret1;
							HX_STACK_LINE(6111)
							if (((this->head == null()))){
								HX_STACK_LINE(6111)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6111)
							old = pre->next;
							HX_STACK_LINE(6111)
							ret1 = old->next;
							HX_STACK_LINE(6111)
							pre->next = ret1;
							HX_STACK_LINE(6111)
							if (((ret1 == null()))){
								HX_STACK_LINE(6111)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6111)
						{
						}
						HX_STACK_LINE(6111)
						{
							HX_STACK_LINE(6111)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6111)
							{
							}
							HX_STACK_LINE(6111)
							o->elt = null();
							HX_STACK_LINE(6111)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
							HX_STACK_LINE(6111)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6111)
						this->modified = true;
						HX_STACK_LINE(6111)
						(this->length)--;
						HX_STACK_LINE(6111)
						this->pushmod = true;
						HX_STACK_LINE(6111)
						ret1;
					}
					HX_STACK_LINE(6111)
					ret = true;
					HX_STACK_LINE(6111)
					break;
				}
				HX_STACK_LINE(6111)
				pre = cur;
				HX_STACK_LINE(6111)
				cur = cur->next;
			}
			HX_STACK_LINE(6111)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_pop_unsafe","zpp_nape/util/Lists.hx",6089);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6090)
	{
	}
	HX_STACK_LINE(6098)
	::zpp_nape::geom::ZPP_PartitionVertex ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6099)
	this->pop();
	HX_STACK_LINE(6100)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::pop_unsafe","zpp_nape/util/Lists.hx",6087);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6087);
			{
				HX_STACK_LINE(6087)
				{
				}
				HX_STACK_LINE(6087)
				::zpp_nape::geom::ZPP_PartitionVertex ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6087)
				__this->pop();
				HX_STACK_LINE(6087)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6087)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,pop_unsafe,return )

Void ZNPList_ZPP_PartitionVertex_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_pop","zpp_nape/util/Lists.hx",6054);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6055)
		{
		}
		HX_STACK_LINE(6063)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6064)
		this->head = ret->next;
		HX_STACK_LINE(6065)
		{
		}
		HX_STACK_LINE(6066)
		{
			HX_STACK_LINE(6067)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6068)
			{
			}
			HX_STACK_LINE(6076)
			o->elt = null();
			HX_STACK_LINE(6077)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(6078)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6083)
		if (((this->head == null()))){
			HX_STACK_LINE(6083)
			this->pushmod = true;
		}
		HX_STACK_LINE(6084)
		this->modified = true;
		HX_STACK_LINE(6085)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,inlined_pop,(void))

Void ZNPList_ZPP_PartitionVertex_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::pop","zpp_nape/util/Lists.hx",6052);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6052)
		{
		}
		HX_STACK_LINE(6052)
		::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6052)
		this->head = ret->next;
		HX_STACK_LINE(6052)
		{
		}
		HX_STACK_LINE(6052)
		{
			HX_STACK_LINE(6052)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6052)
			{
			}
			HX_STACK_LINE(6052)
			o->elt = null();
			HX_STACK_LINE(6052)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
			HX_STACK_LINE(6052)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6052)
		if (((this->head == null()))){
			HX_STACK_LINE(6052)
			this->pushmod = true;
		}
		HX_STACK_LINE(6052)
		this->modified = true;
		HX_STACK_LINE(6052)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_insert","zpp_nape/util/Lists.hx",6009);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(6010)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6018);
			{
				HX_STACK_LINE(6019)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6020)
				{
					HX_STACK_LINE(6021)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
						HX_STACK_LINE(6021)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
					}
					else{
						HX_STACK_LINE(6028)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(6029)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6030)
						ret->next = null();
					}
					HX_STACK_LINE(6035)
					Dynamic();
				}
				HX_STACK_LINE(6037)
				ret->elt = o;
				HX_STACK_LINE(6038)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6018)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6040)
	if (((cur == null()))){
		HX_STACK_LINE(6041)
		temp->next = this->head;
		HX_STACK_LINE(6042)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6045)
		temp->next = cur->next;
		HX_STACK_LINE(6046)
		cur->next = temp;
	}
	HX_STACK_LINE(6048)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6049)
	(this->length)++;
	HX_STACK_LINE(6050)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cur,::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::insert","zpp_nape/util/Lists.hx",6007);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this,::zpp_nape::geom::ZPP_PartitionVertex &o,::zpp_nape::util::ZNPNode_ZPP_PartitionVertex &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6007);
			{
				HX_STACK_LINE(6007)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6007);
						{
							HX_STACK_LINE(6007)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6007)
							{
								HX_STACK_LINE(6007)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
									HX_STACK_LINE(6007)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
								}
								else{
									HX_STACK_LINE(6007)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
									HX_STACK_LINE(6007)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6007)
									ret->next = null();
								}
								HX_STACK_LINE(6007)
								Dynamic();
							}
							HX_STACK_LINE(6007)
							ret->elt = o;
							HX_STACK_LINE(6007)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6007)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6007)
				if (((cur == null()))){
					HX_STACK_LINE(6007)
					temp->next = __this->head;
					HX_STACK_LINE(6007)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6007)
					temp->next = cur->next;
					HX_STACK_LINE(6007)
					cur->next = temp;
				}
				HX_STACK_LINE(6007)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6007)
				(__this->length)++;
				HX_STACK_LINE(6007)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6007)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionVertex_obj,insert,return )

Void ZNPList_ZPP_PartitionVertex_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionVertex x){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::addAll","zpp_nape/util/Lists.hx",5989);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(5990)
		{
		}
		HX_STACK_LINE(5998)
		{
			HX_STACK_LINE(5999)
			::zpp_nape::util::ZNPNode_ZPP_PartitionVertex cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6000)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6001)
				::zpp_nape::geom::ZPP_PartitionVertex i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6002)
				this->add(i);
				HX_STACK_LINE(6003)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::inlined_add","zpp_nape/util/Lists.hx",5952);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(5953)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5961);
			{
				HX_STACK_LINE(5962)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(5963)
				{
					HX_STACK_LINE(5964)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
						HX_STACK_LINE(5964)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
					}
					else{
						HX_STACK_LINE(5971)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
						HX_STACK_LINE(5972)
						::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
						HX_STACK_LINE(5973)
						ret->next = null();
					}
					HX_STACK_LINE(5978)
					Dynamic();
				}
				HX_STACK_LINE(5980)
				ret->elt = o;
				HX_STACK_LINE(5981)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(5961)
	::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(5983)
	temp->next = this->head;
	HX_STACK_LINE(5984)
	this->head = temp;
	HX_STACK_LINE(5985)
	this->modified = true;
	HX_STACK_LINE(5986)
	(this->length)++;
	HX_STACK_LINE(5987)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,inlined_add,return )

::zpp_nape::geom::ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::add( ::zpp_nape::geom::ZPP_PartitionVertex o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::add","zpp_nape/util/Lists.hx",5950);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o,::zpp_nape::util::ZNPList_ZPP_PartitionVertex_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5950);
			{
				HX_STACK_LINE(5950)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex Block( ::zpp_nape::geom::ZPP_PartitionVertex &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",5950);
						{
							HX_STACK_LINE(5950)
							::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(5950)
							{
								HX_STACK_LINE(5950)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool == null()))){
									HX_STACK_LINE(5950)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::__new();
								}
								else{
									HX_STACK_LINE(5950)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool;
									HX_STACK_LINE(5950)
									::zpp_nape::util::ZNPNode_ZPP_PartitionVertex_obj::zpp_pool = ret->next;
									HX_STACK_LINE(5950)
									ret->next = null();
								}
								HX_STACK_LINE(5950)
								Dynamic();
							}
							HX_STACK_LINE(5950)
							ret->elt = o;
							HX_STACK_LINE(5950)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(5950)
				::zpp_nape::util::ZNPNode_ZPP_PartitionVertex temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(5950)
				temp->next = __this->head;
				HX_STACK_LINE(5950)
				__this->head = temp;
				HX_STACK_LINE(5950)
				__this->modified = true;
				HX_STACK_LINE(5950)
				(__this->length)++;
				HX_STACK_LINE(5950)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(5950)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,add,return )

Void ZNPList_ZPP_PartitionVertex_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex i){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::setbegin","zpp_nape/util/Lists.hx",5945);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(5946)
		this->head = i;
		HX_STACK_LINE(5947)
		this->modified = true;
		HX_STACK_LINE(5948)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionVertex_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionVertex ZNPList_ZPP_PartitionVertex_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionVertex::begin","zpp_nape/util/Lists.hx",5940);
	HX_STACK_THIS(this);
	HX_STACK_LINE(5940)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionVertex_obj,begin,return )


ZNPList_ZPP_PartitionVertex_obj::ZNPList_ZPP_PartitionVertex_obj()
{
}

void ZNPList_ZPP_PartitionVertex_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_PartitionVertex);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_PartitionVertex_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_PartitionVertex_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_PartitionVertex_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionVertex >(); return inValue; }
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

void ZNPList_ZPP_PartitionVertex_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_PartitionVertex_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_PartitionVertex_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_PartitionVertex_obj::__mClass;

void ZNPList_ZPP_PartitionVertex_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_PartitionVertex"), hx::TCanCast< ZNPList_ZPP_PartitionVertex_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_PartitionVertex_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
