#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_PartitionedPoly
#include <zpp_nape/geom/ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPList_ZPP_PartitionedPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_PartitionedPoly
#include <zpp_nape/util/ZNPNode_ZPP_PartitionedPoly.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_PartitionedPoly_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::new","zpp_nape/util/Lists.hx",6319);
{
	HX_STACK_LINE(6326)
	this->length = (int)0;
	HX_STACK_LINE(6325)
	this->pushmod = false;
	HX_STACK_LINE(6324)
	this->modified = false;
	HX_STACK_LINE(6320)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_PartitionedPoly_obj::~ZNPList_ZPP_PartitionedPoly_obj() { }

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__CreateEmpty() { return  new ZNPList_ZPP_PartitionedPoly_obj; }
hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > ZNPList_ZPP_PartitionedPoly_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > result = new ZNPList_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_PartitionedPoly_obj > result = new ZNPList_ZPP_PartitionedPoly_obj();
	result->__construct();
	return result;}

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::at","zpp_nape/util/Lists.hx",6689);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6690)
	{
	}
	HX_STACK_LINE(6698)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(6699)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_PartitionedPoly(it->elt) : ::zpp_nape::geom::ZPP_PartitionedPoly(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::iterator_at","zpp_nape/util/Lists.hx",6676);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(6677)
	{
	}
	HX_STACK_LINE(6685)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6686)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(6686)
		ret = ret->next;
	}
	HX_STACK_LINE(6687)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,iterator_at,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::back","zpp_nape/util/Lists.hx",6667);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6668)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6669)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6670)
	while(((cur != null()))){
		HX_STACK_LINE(6671)
		ret = cur;
		HX_STACK_LINE(6672)
		cur = cur->next;
	}
	HX_STACK_LINE(6674)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,back,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::front","zpp_nape/util/Lists.hx",6667);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6667)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,front,return )

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_has","zpp_nape/util/Lists.hx",6637);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6638)
	{
	}
	HX_STACK_LINE(6646)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6647)
	{
		HX_STACK_LINE(6648)
		ret = false;
		HX_STACK_LINE(6649)
		{
			HX_STACK_LINE(6650)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6651)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6652)
				::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(6653)
				if (((npite == obj))){
					HX_STACK_LINE(6655)
					ret = true;
					HX_STACK_LINE(6656)
					break;
				}
				HX_STACK_LINE(6659)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(6663)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_has,return )

bool ZNPList_ZPP_PartitionedPoly_obj::has( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::has","zpp_nape/util/Lists.hx",6635);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_PartitionedPoly &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6635);
			{
				HX_STACK_LINE(6635)
				{
				}
				HX_STACK_LINE(6635)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6635)
				{
					HX_STACK_LINE(6635)
					ret = false;
					HX_STACK_LINE(6635)
					{
						HX_STACK_LINE(6635)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(6635)
						while(((cx_ite != null()))){
							HX_STACK_LINE(6635)
							::zpp_nape::geom::ZPP_PartitionedPoly npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(6635)
							if (((npite == obj))){
								HX_STACK_LINE(6635)
								ret = true;
								HX_STACK_LINE(6635)
								break;
							}
							HX_STACK_LINE(6635)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(6635)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6635)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,has,return )

int ZNPList_ZPP_PartitionedPoly_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::size","zpp_nape/util/Lists.hx",6635);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6635)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,size,return )

bool ZNPList_ZPP_PartitionedPoly_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::empty","zpp_nape/util/Lists.hx",6633);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6633)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,empty,return )

Void ZNPList_ZPP_PartitionedPoly_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::reverse","zpp_nape/util/Lists.hx",6618);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6619)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(6620)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(6621)
		while(((cur != null()))){
			HX_STACK_LINE(6622)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(6623)
			cur->next = pre;
			HX_STACK_LINE(6624)
			this->head = cur;
			HX_STACK_LINE(6625)
			pre = cur;
			HX_STACK_LINE(6626)
			cur = nx;
		}
		HX_STACK_LINE(6628)
		this->modified = true;
		HX_STACK_LINE(6629)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,reverse,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_clear","zpp_nape/util/Lists.hx",6612);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6614)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6614)
			{
			}
			HX_STACK_LINE(6614)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6614)
			this->head = ret->next;
			HX_STACK_LINE(6614)
			{
			}
			HX_STACK_LINE(6614)
			{
				HX_STACK_LINE(6614)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6614)
				{
				}
				HX_STACK_LINE(6614)
				o->elt = null();
				HX_STACK_LINE(6614)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(6614)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6614)
			if (((this->head == null()))){
				HX_STACK_LINE(6614)
				this->pushmod = true;
			}
			HX_STACK_LINE(6614)
			this->modified = true;
			HX_STACK_LINE(6614)
			(this->length)--;
		}
		HX_STACK_LINE(6615)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_clear,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::clear","zpp_nape/util/Lists.hx",6610);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6610)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(6610)
			{
			}
			HX_STACK_LINE(6610)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6610)
			this->head = ret->next;
			HX_STACK_LINE(6610)
			{
			}
			HX_STACK_LINE(6610)
			{
				HX_STACK_LINE(6610)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(6610)
				{
				}
				HX_STACK_LINE(6610)
				o->elt = null();
				HX_STACK_LINE(6610)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
				HX_STACK_LINE(6610)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
			}
			HX_STACK_LINE(6610)
			if (((this->head == null()))){
				HX_STACK_LINE(6610)
				this->pushmod = true;
			}
			HX_STACK_LINE(6610)
			this->modified = true;
			HX_STACK_LINE(6610)
			(this->length)--;
		}
		HX_STACK_LINE(6610)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::splice","zpp_nape/util/Lists.hx",6606);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6607)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(6607)
		this->erase(pre);
	}
	HX_STACK_LINE(6608)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_erase","zpp_nape/util/Lists.hx",6560);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(6561)
	{
	}
	HX_STACK_LINE(6569)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(6570)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6571)
	if (((pre == null()))){
		HX_STACK_LINE(6572)
		old = this->head;
		HX_STACK_LINE(6573)
		ret = old->next;
		HX_STACK_LINE(6574)
		this->head = ret;
		HX_STACK_LINE(6575)
		if (((this->head == null()))){
			HX_STACK_LINE(6575)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(6578)
		old = pre->next;
		HX_STACK_LINE(6579)
		ret = old->next;
		HX_STACK_LINE(6580)
		pre->next = ret;
		HX_STACK_LINE(6581)
		if (((ret == null()))){
			HX_STACK_LINE(6581)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(6583)
	{
	}
	HX_STACK_LINE(6584)
	{
		HX_STACK_LINE(6585)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(6586)
		{
		}
		HX_STACK_LINE(6594)
		o->elt = null();
		HX_STACK_LINE(6595)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
		HX_STACK_LINE(6596)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
	}
	HX_STACK_LINE(6601)
	this->modified = true;
	HX_STACK_LINE(6602)
	(this->length)--;
	HX_STACK_LINE(6603)
	this->pushmod = true;
	HX_STACK_LINE(6604)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::erase","zpp_nape/util/Lists.hx",6558);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly &pre,::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6558);
			{
				HX_STACK_LINE(6558)
				{
				}
				HX_STACK_LINE(6558)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6558)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6558)
				if (((pre == null()))){
					HX_STACK_LINE(6558)
					old = __this->head;
					HX_STACK_LINE(6558)
					ret = old->next;
					HX_STACK_LINE(6558)
					__this->head = ret;
					HX_STACK_LINE(6558)
					if (((__this->head == null()))){
						HX_STACK_LINE(6558)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6558)
					old = pre->next;
					HX_STACK_LINE(6558)
					ret = old->next;
					HX_STACK_LINE(6558)
					pre->next = ret;
					HX_STACK_LINE(6558)
					if (((ret == null()))){
						HX_STACK_LINE(6558)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(6558)
				{
				}
				HX_STACK_LINE(6558)
				{
					HX_STACK_LINE(6558)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6558)
					{
					}
					HX_STACK_LINE(6558)
					o->elt = null();
					HX_STACK_LINE(6558)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
					HX_STACK_LINE(6558)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6558)
				__this->modified = true;
				HX_STACK_LINE(6558)
				(__this->length)--;
				HX_STACK_LINE(6558)
				__this->pushmod = true;
				HX_STACK_LINE(6558)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6558)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,erase,return )

bool ZNPList_ZPP_PartitionedPoly_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_try_remove","zpp_nape/util/Lists.hx",6535);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6536)
	{
	}
	HX_STACK_LINE(6544)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6545)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6546)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6547)
	while(((cur != null()))){
		HX_STACK_LINE(6548)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6549)
			{
				HX_STACK_LINE(6549)
				{
				}
				HX_STACK_LINE(6549)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(6549)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(6549)
				if (((pre == null()))){
					HX_STACK_LINE(6549)
					old = this->head;
					HX_STACK_LINE(6549)
					ret1 = old->next;
					HX_STACK_LINE(6549)
					this->head = ret1;
					HX_STACK_LINE(6549)
					if (((this->head == null()))){
						HX_STACK_LINE(6549)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(6549)
					old = pre->next;
					HX_STACK_LINE(6549)
					ret1 = old->next;
					HX_STACK_LINE(6549)
					pre->next = ret1;
					HX_STACK_LINE(6549)
					if (((ret1 == null()))){
						HX_STACK_LINE(6549)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(6549)
				{
				}
				HX_STACK_LINE(6549)
				{
					HX_STACK_LINE(6549)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(6549)
					{
					}
					HX_STACK_LINE(6549)
					o->elt = null();
					HX_STACK_LINE(6549)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
					HX_STACK_LINE(6549)
					::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
				}
				HX_STACK_LINE(6549)
				this->modified = true;
				HX_STACK_LINE(6549)
				(this->length)--;
				HX_STACK_LINE(6549)
				this->pushmod = true;
				HX_STACK_LINE(6549)
				ret1;
			}
			HX_STACK_LINE(6550)
			ret = true;
			HX_STACK_LINE(6551)
			break;
		}
		HX_STACK_LINE(6553)
		pre = cur;
		HX_STACK_LINE(6554)
		cur = cur->next;
	}
	HX_STACK_LINE(6556)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_try_remove,return )

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_remove","zpp_nape/util/Lists.hx",6522);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6523)
		{
		}
		HX_STACK_LINE(6531)
		{
			HX_STACK_LINE(6531)
			{
			}
			HX_STACK_LINE(6531)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6531)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6531)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6531)
			while(((cur != null()))){
				HX_STACK_LINE(6531)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6531)
					{
						HX_STACK_LINE(6531)
						{
						}
						HX_STACK_LINE(6531)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6531)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6531)
						if (((pre == null()))){
							HX_STACK_LINE(6531)
							old = this->head;
							HX_STACK_LINE(6531)
							ret1 = old->next;
							HX_STACK_LINE(6531)
							this->head = ret1;
							HX_STACK_LINE(6531)
							if (((this->head == null()))){
								HX_STACK_LINE(6531)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6531)
							old = pre->next;
							HX_STACK_LINE(6531)
							ret1 = old->next;
							HX_STACK_LINE(6531)
							pre->next = ret1;
							HX_STACK_LINE(6531)
							if (((ret1 == null()))){
								HX_STACK_LINE(6531)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6531)
						{
						}
						HX_STACK_LINE(6531)
						{
							HX_STACK_LINE(6531)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6531)
							{
							}
							HX_STACK_LINE(6531)
							o->elt = null();
							HX_STACK_LINE(6531)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
							HX_STACK_LINE(6531)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6531)
						this->modified = true;
						HX_STACK_LINE(6531)
						(this->length)--;
						HX_STACK_LINE(6531)
						this->pushmod = true;
						HX_STACK_LINE(6531)
						ret1;
					}
					HX_STACK_LINE(6531)
					ret = true;
					HX_STACK_LINE(6531)
					break;
				}
				HX_STACK_LINE(6531)
				pre = cur;
				HX_STACK_LINE(6531)
				cur = cur->next;
			}
			HX_STACK_LINE(6531)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_remove,(void))

bool ZNPList_ZPP_PartitionedPoly_obj::try_remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::try_remove","zpp_nape/util/Lists.hx",6497);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(6498)
	{
	}
	HX_STACK_LINE(6506)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(6507)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(6508)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6509)
	while(((cur != null()))){
		HX_STACK_LINE(6510)
		if (((cur->elt == obj))){
			HX_STACK_LINE(6511)
			this->erase(pre);
			HX_STACK_LINE(6512)
			ret = true;
			HX_STACK_LINE(6513)
			break;
		}
		HX_STACK_LINE(6515)
		pre = cur;
		HX_STACK_LINE(6516)
		cur = cur->next;
	}
	HX_STACK_LINE(6518)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,try_remove,return )

Void ZNPList_ZPP_PartitionedPoly_obj::remove( ::zpp_nape::geom::ZPP_PartitionedPoly obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::remove","zpp_nape/util/Lists.hx",6486);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(6487)
		{
		}
		HX_STACK_LINE(6495)
		{
			HX_STACK_LINE(6495)
			{
			}
			HX_STACK_LINE(6495)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(6495)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(6495)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(6495)
			while(((cur != null()))){
				HX_STACK_LINE(6495)
				if (((cur->elt == obj))){
					HX_STACK_LINE(6495)
					{
						HX_STACK_LINE(6495)
						{
						}
						HX_STACK_LINE(6495)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(6495)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(6495)
						if (((pre == null()))){
							HX_STACK_LINE(6495)
							old = this->head;
							HX_STACK_LINE(6495)
							ret1 = old->next;
							HX_STACK_LINE(6495)
							this->head = ret1;
							HX_STACK_LINE(6495)
							if (((this->head == null()))){
								HX_STACK_LINE(6495)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(6495)
							old = pre->next;
							HX_STACK_LINE(6495)
							ret1 = old->next;
							HX_STACK_LINE(6495)
							pre->next = ret1;
							HX_STACK_LINE(6495)
							if (((ret1 == null()))){
								HX_STACK_LINE(6495)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(6495)
						{
						}
						HX_STACK_LINE(6495)
						{
							HX_STACK_LINE(6495)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(6495)
							{
							}
							HX_STACK_LINE(6495)
							o->elt = null();
							HX_STACK_LINE(6495)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
							HX_STACK_LINE(6495)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
						}
						HX_STACK_LINE(6495)
						this->modified = true;
						HX_STACK_LINE(6495)
						(this->length)--;
						HX_STACK_LINE(6495)
						this->pushmod = true;
						HX_STACK_LINE(6495)
						ret1;
					}
					HX_STACK_LINE(6495)
					ret = true;
					HX_STACK_LINE(6495)
					break;
				}
				HX_STACK_LINE(6495)
				pre = cur;
				HX_STACK_LINE(6495)
				cur = cur->next;
			}
			HX_STACK_LINE(6495)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,remove,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_pop_unsafe","zpp_nape/util/Lists.hx",6473);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6474)
	{
	}
	HX_STACK_LINE(6482)
	::zpp_nape::geom::ZPP_PartitionedPoly ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(6483)
	this->pop();
	HX_STACK_LINE(6484)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::pop_unsafe","zpp_nape/util/Lists.hx",6471);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6471);
			{
				HX_STACK_LINE(6471)
				{
				}
				HX_STACK_LINE(6471)
				::zpp_nape::geom::ZPP_PartitionedPoly ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6471)
				__this->pop();
				HX_STACK_LINE(6471)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6471)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop_unsafe,return )

Void ZNPList_ZPP_PartitionedPoly_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_pop","zpp_nape/util/Lists.hx",6438);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6439)
		{
		}
		HX_STACK_LINE(6447)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6448)
		this->head = ret->next;
		HX_STACK_LINE(6449)
		{
		}
		HX_STACK_LINE(6450)
		{
			HX_STACK_LINE(6451)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6452)
			{
			}
			HX_STACK_LINE(6460)
			o->elt = null();
			HX_STACK_LINE(6461)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(6462)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6467)
		if (((this->head == null()))){
			HX_STACK_LINE(6467)
			this->pushmod = true;
		}
		HX_STACK_LINE(6468)
		this->modified = true;
		HX_STACK_LINE(6469)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,inlined_pop,(void))

Void ZNPList_ZPP_PartitionedPoly_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::pop","zpp_nape/util/Lists.hx",6436);
		HX_STACK_THIS(this);
		HX_STACK_LINE(6436)
		{
		}
		HX_STACK_LINE(6436)
		::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(6436)
		this->head = ret->next;
		HX_STACK_LINE(6436)
		{
		}
		HX_STACK_LINE(6436)
		{
			HX_STACK_LINE(6436)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(6436)
			{
			}
			HX_STACK_LINE(6436)
			o->elt = null();
			HX_STACK_LINE(6436)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
			HX_STACK_LINE(6436)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = o;
		}
		HX_STACK_LINE(6436)
		if (((this->head == null()))){
			HX_STACK_LINE(6436)
			this->pushmod = true;
		}
		HX_STACK_LINE(6436)
		this->modified = true;
		HX_STACK_LINE(6436)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_insert","zpp_nape/util/Lists.hx",6393);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(6394)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6402);
			{
				HX_STACK_LINE(6403)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6404)
				{
					HX_STACK_LINE(6405)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(6405)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(6412)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(6413)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6414)
						ret->next = null();
					}
					HX_STACK_LINE(6419)
					Dynamic();
				}
				HX_STACK_LINE(6421)
				ret->elt = o;
				HX_STACK_LINE(6422)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6402)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6424)
	if (((cur == null()))){
		HX_STACK_LINE(6425)
		temp->next = this->head;
		HX_STACK_LINE(6426)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(6429)
		temp->next = cur->next;
		HX_STACK_LINE(6430)
		cur->next = temp;
	}
	HX_STACK_LINE(6432)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(6433)
	(this->length)++;
	HX_STACK_LINE(6434)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cur,::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::insert","zpp_nape/util/Lists.hx",6391);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this,::zpp_nape::geom::ZPP_PartitionedPoly &o,::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6391);
			{
				HX_STACK_LINE(6391)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6391);
						{
							HX_STACK_LINE(6391)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6391)
							{
								HX_STACK_LINE(6391)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(6391)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(6391)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
									HX_STACK_LINE(6391)
									::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6391)
									ret->next = null();
								}
								HX_STACK_LINE(6391)
								Dynamic();
							}
							HX_STACK_LINE(6391)
							ret->elt = o;
							HX_STACK_LINE(6391)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6391)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6391)
				if (((cur == null()))){
					HX_STACK_LINE(6391)
					temp->next = __this->head;
					HX_STACK_LINE(6391)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(6391)
					temp->next = cur->next;
					HX_STACK_LINE(6391)
					cur->next = temp;
				}
				HX_STACK_LINE(6391)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(6391)
				(__this->length)++;
				HX_STACK_LINE(6391)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(6391)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_PartitionedPoly_obj,insert,return )

Void ZNPList_ZPP_PartitionedPoly_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_PartitionedPoly x){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::addAll","zpp_nape/util/Lists.hx",6373);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(6374)
		{
		}
		HX_STACK_LINE(6382)
		{
			HX_STACK_LINE(6383)
			::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(6384)
			while(((cx_ite != null()))){
				HX_STACK_LINE(6385)
				::zpp_nape::geom::ZPP_PartitionedPoly i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(6386)
				this->add(i);
				HX_STACK_LINE(6387)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,addAll,(void))

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::inlined_add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::inlined_add","zpp_nape/util/Lists.hx",6336);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(6337)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6345);
			{
				HX_STACK_LINE(6346)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(6347)
				{
					HX_STACK_LINE(6348)
					if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
						HX_STACK_LINE(6348)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
					}
					else{
						HX_STACK_LINE(6355)
						ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
						HX_STACK_LINE(6356)
						::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
						HX_STACK_LINE(6357)
						ret->next = null();
					}
					HX_STACK_LINE(6362)
					Dynamic();
				}
				HX_STACK_LINE(6364)
				ret->elt = o;
				HX_STACK_LINE(6365)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(6345)
	::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(6367)
	temp->next = this->head;
	HX_STACK_LINE(6368)
	this->head = temp;
	HX_STACK_LINE(6369)
	this->modified = true;
	HX_STACK_LINE(6370)
	(this->length)++;
	HX_STACK_LINE(6371)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,inlined_add,return )

::zpp_nape::geom::ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::add( ::zpp_nape::geom::ZPP_PartitionedPoly o){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::add","zpp_nape/util/Lists.hx",6334);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o,::zpp_nape::util::ZNPList_ZPP_PartitionedPoly_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6334);
			{
				HX_STACK_LINE(6334)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly Block( ::zpp_nape::geom::ZPP_PartitionedPoly &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",6334);
						{
							HX_STACK_LINE(6334)
							::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(6334)
							{
								HX_STACK_LINE(6334)
								if (((::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool == null()))){
									HX_STACK_LINE(6334)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::__new();
								}
								else{
									HX_STACK_LINE(6334)
									ret = ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool;
									HX_STACK_LINE(6334)
									::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly_obj::zpp_pool = ret->next;
									HX_STACK_LINE(6334)
									ret->next = null();
								}
								HX_STACK_LINE(6334)
								Dynamic();
							}
							HX_STACK_LINE(6334)
							ret->elt = o;
							HX_STACK_LINE(6334)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(6334)
				::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(6334)
				temp->next = __this->head;
				HX_STACK_LINE(6334)
				__this->head = temp;
				HX_STACK_LINE(6334)
				__this->modified = true;
				HX_STACK_LINE(6334)
				(__this->length)++;
				HX_STACK_LINE(6334)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(6334)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,add,return )

Void ZNPList_ZPP_PartitionedPoly_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly i){
{
		HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::setbegin","zpp_nape/util/Lists.hx",6329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(6330)
		this->head = i;
		HX_STACK_LINE(6331)
		this->modified = true;
		HX_STACK_LINE(6332)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_PartitionedPoly_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly ZNPList_ZPP_PartitionedPoly_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_PartitionedPoly::begin","zpp_nape/util/Lists.hx",6324);
	HX_STACK_THIS(this);
	HX_STACK_LINE(6324)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_PartitionedPoly_obj,begin,return )


ZNPList_ZPP_PartitionedPoly_obj::ZNPList_ZPP_PartitionedPoly_obj()
{
}

void ZNPList_ZPP_PartitionedPoly_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_PartitionedPoly);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_PartitionedPoly_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_PartitionedPoly_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_PartitionedPoly >(); return inValue; }
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

void ZNPList_ZPP_PartitionedPoly_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_PartitionedPoly_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_PartitionedPoly_obj::__mClass;

void ZNPList_ZPP_PartitionedPoly_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_PartitionedPoly"), hx::TCanCast< ZNPList_ZPP_PartitionedPoly_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_PartitionedPoly_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
