#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
namespace zpp_nape{
namespace util{

Void ZNPList_ZPP_Shape_obj::__construct()
{
HX_STACK_PUSH("ZNPList_ZPP_Shape::new","zpp_nape/util/Lists.hx",943);
{
	HX_STACK_LINE(950)
	this->length = (int)0;
	HX_STACK_LINE(949)
	this->pushmod = false;
	HX_STACK_LINE(948)
	this->modified = false;
	HX_STACK_LINE(944)
	this->head = null();
}
;
	return null();
}

ZNPList_ZPP_Shape_obj::~ZNPList_ZPP_Shape_obj() { }

Dynamic ZNPList_ZPP_Shape_obj::__CreateEmpty() { return  new ZNPList_ZPP_Shape_obj; }
hx::ObjectPtr< ZNPList_ZPP_Shape_obj > ZNPList_ZPP_Shape_obj::__new()
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > result = new ZNPList_ZPP_Shape_obj();
	result->__construct();
	return result;}

Dynamic ZNPList_ZPP_Shape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZNPList_ZPP_Shape_obj > result = new ZNPList_ZPP_Shape_obj();
	result->__construct();
	return result;}

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::at","zpp_nape/util/Lists.hx",1313);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1314)
	{
	}
	HX_STACK_LINE(1322)
	::zpp_nape::util::ZNPNode_ZPP_Shape it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(1323)
	return (  (((it != null()))) ? ::zpp_nape::shape::ZPP_Shape(it->elt) : ::zpp_nape::shape::ZPP_Shape(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,at,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::iterator_at","zpp_nape/util/Lists.hx",1300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(1301)
	{
	}
	HX_STACK_LINE(1309)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1310)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(1310)
		ret = ret->next;
	}
	HX_STACK_LINE(1311)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,iterator_at,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::back( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::back","zpp_nape/util/Lists.hx",1291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1292)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1293)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1294)
	while(((cur != null()))){
		HX_STACK_LINE(1295)
		ret = cur;
		HX_STACK_LINE(1296)
		cur = cur->next;
	}
	HX_STACK_LINE(1298)
	return ret->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,back,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::front( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::front","zpp_nape/util/Lists.hx",1291);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1291)
	return this->head->elt;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,front,return )

bool ZNPList_ZPP_Shape_obj::inlined_has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_has","zpp_nape/util/Lists.hx",1261);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1262)
	{
	}
	HX_STACK_LINE(1270)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1271)
	{
		HX_STACK_LINE(1272)
		ret = false;
		HX_STACK_LINE(1273)
		{
			HX_STACK_LINE(1274)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1275)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1276)
				::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(1277)
				if (((npite == obj))){
					HX_STACK_LINE(1279)
					ret = true;
					HX_STACK_LINE(1280)
					break;
				}
				HX_STACK_LINE(1283)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(1287)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_has,return )

bool ZNPList_ZPP_Shape_obj::has( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::has","zpp_nape/util/Lists.hx",1259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::util::ZNPList_ZPP_Shape_obj *__this,::zpp_nape::shape::ZPP_Shape &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1259);
			{
				HX_STACK_LINE(1259)
				{
				}
				HX_STACK_LINE(1259)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1259)
				{
					HX_STACK_LINE(1259)
					ret = false;
					HX_STACK_LINE(1259)
					{
						HX_STACK_LINE(1259)
						::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = __this->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(1259)
						while(((cx_ite != null()))){
							HX_STACK_LINE(1259)
							::zpp_nape::shape::ZPP_Shape npite = cx_ite->elt;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(1259)
							if (((npite == obj))){
								HX_STACK_LINE(1259)
								ret = true;
								HX_STACK_LINE(1259)
								break;
							}
							HX_STACK_LINE(1259)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(1259)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1259)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,has,return )

int ZNPList_ZPP_Shape_obj::size( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::size","zpp_nape/util/Lists.hx",1259);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1259)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,size,return )

bool ZNPList_ZPP_Shape_obj::empty( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::empty","zpp_nape/util/Lists.hx",1257);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1257)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,empty,return )

Void ZNPList_ZPP_Shape_obj::reverse( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::reverse","zpp_nape/util/Lists.hx",1242);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1243)
		::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1244)
		::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1245)
		while(((cur != null()))){
			HX_STACK_LINE(1246)
			::zpp_nape::util::ZNPNode_ZPP_Shape nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1247)
			cur->next = pre;
			HX_STACK_LINE(1248)
			this->head = cur;
			HX_STACK_LINE(1249)
			pre = cur;
			HX_STACK_LINE(1250)
			cur = nx;
		}
		HX_STACK_LINE(1252)
		this->modified = true;
		HX_STACK_LINE(1253)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,reverse,(void))

Void ZNPList_ZPP_Shape_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_clear","zpp_nape/util/Lists.hx",1236);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1238)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1238)
			{
			}
			HX_STACK_LINE(1238)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1238)
			this->head = ret->next;
			HX_STACK_LINE(1238)
			{
			}
			HX_STACK_LINE(1238)
			{
				HX_STACK_LINE(1238)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1238)
				{
				}
				HX_STACK_LINE(1238)
				o->elt = null();
				HX_STACK_LINE(1238)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1238)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1238)
			if (((this->head == null()))){
				HX_STACK_LINE(1238)
				this->pushmod = true;
			}
			HX_STACK_LINE(1238)
			this->modified = true;
			HX_STACK_LINE(1238)
			(this->length)--;
		}
		HX_STACK_LINE(1239)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_clear,(void))

Void ZNPList_ZPP_Shape_obj::clear( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::clear","zpp_nape/util/Lists.hx",1234);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1234)
		while((!(((this->head == null()))))){
			HX_STACK_LINE(1234)
			{
			}
			HX_STACK_LINE(1234)
			::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1234)
			this->head = ret->next;
			HX_STACK_LINE(1234)
			{
			}
			HX_STACK_LINE(1234)
			{
				HX_STACK_LINE(1234)
				::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1234)
				{
				}
				HX_STACK_LINE(1234)
				o->elt = null();
				HX_STACK_LINE(1234)
				o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
				HX_STACK_LINE(1234)
				::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1234)
			if (((this->head == null()))){
				HX_STACK_LINE(1234)
				this->pushmod = true;
			}
			HX_STACK_LINE(1234)
			this->modified = true;
			HX_STACK_LINE(1234)
			(this->length)--;
		}
		HX_STACK_LINE(1234)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,clear,(void))

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::splice( ::zpp_nape::util::ZNPNode_ZPP_Shape pre,int n){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::splice","zpp_nape/util/Lists.hx",1230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(1231)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(1231)
		this->erase(pre);
	}
	HX_STACK_LINE(1232)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,splice,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_erase","zpp_nape/util/Lists.hx",1184);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(1185)
	{
	}
	HX_STACK_LINE(1193)
	::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(1194)
	::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1195)
	if (((pre == null()))){
		HX_STACK_LINE(1196)
		old = this->head;
		HX_STACK_LINE(1197)
		ret = old->next;
		HX_STACK_LINE(1198)
		this->head = ret;
		HX_STACK_LINE(1199)
		if (((this->head == null()))){
			HX_STACK_LINE(1199)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(1202)
		old = pre->next;
		HX_STACK_LINE(1203)
		ret = old->next;
		HX_STACK_LINE(1204)
		pre->next = ret;
		HX_STACK_LINE(1205)
		if (((ret == null()))){
			HX_STACK_LINE(1205)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(1207)
	{
	}
	HX_STACK_LINE(1208)
	{
		HX_STACK_LINE(1209)
		::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1210)
		{
		}
		HX_STACK_LINE(1218)
		o->elt = null();
		HX_STACK_LINE(1219)
		o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
		HX_STACK_LINE(1220)
		::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1225)
	this->modified = true;
	HX_STACK_LINE(1226)
	(this->length)--;
	HX_STACK_LINE(1227)
	this->pushmod = true;
	HX_STACK_LINE(1228)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_erase,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::erase( ::zpp_nape::util::ZNPNode_ZPP_Shape pre){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::erase","zpp_nape/util/Lists.hx",1182);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::util::ZNPNode_ZPP_Shape &pre,::zpp_nape::util::ZNPList_ZPP_Shape_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1182);
			{
				HX_STACK_LINE(1182)
				{
				}
				HX_STACK_LINE(1182)
				::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1182)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1182)
				if (((pre == null()))){
					HX_STACK_LINE(1182)
					old = __this->head;
					HX_STACK_LINE(1182)
					ret = old->next;
					HX_STACK_LINE(1182)
					__this->head = ret;
					HX_STACK_LINE(1182)
					if (((__this->head == null()))){
						HX_STACK_LINE(1182)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1182)
					old = pre->next;
					HX_STACK_LINE(1182)
					ret = old->next;
					HX_STACK_LINE(1182)
					pre->next = ret;
					HX_STACK_LINE(1182)
					if (((ret == null()))){
						HX_STACK_LINE(1182)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(1182)
				{
				}
				HX_STACK_LINE(1182)
				{
					HX_STACK_LINE(1182)
					::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1182)
					{
					}
					HX_STACK_LINE(1182)
					o->elt = null();
					HX_STACK_LINE(1182)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
					HX_STACK_LINE(1182)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1182)
				__this->modified = true;
				HX_STACK_LINE(1182)
				(__this->length)--;
				HX_STACK_LINE(1182)
				__this->pushmod = true;
				HX_STACK_LINE(1182)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1182)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,erase,return )

bool ZNPList_ZPP_Shape_obj::inlined_try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_try_remove","zpp_nape/util/Lists.hx",1159);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1160)
	{
	}
	HX_STACK_LINE(1168)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1169)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1170)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1171)
	while(((cur != null()))){
		HX_STACK_LINE(1172)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1173)
			{
				HX_STACK_LINE(1173)
				{
				}
				HX_STACK_LINE(1173)
				::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(1173)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(1173)
				if (((pre == null()))){
					HX_STACK_LINE(1173)
					old = this->head;
					HX_STACK_LINE(1173)
					ret1 = old->next;
					HX_STACK_LINE(1173)
					this->head = ret1;
					HX_STACK_LINE(1173)
					if (((this->head == null()))){
						HX_STACK_LINE(1173)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(1173)
					old = pre->next;
					HX_STACK_LINE(1173)
					ret1 = old->next;
					HX_STACK_LINE(1173)
					pre->next = ret1;
					HX_STACK_LINE(1173)
					if (((ret1 == null()))){
						HX_STACK_LINE(1173)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(1173)
				{
				}
				HX_STACK_LINE(1173)
				{
					HX_STACK_LINE(1173)
					::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1173)
					{
					}
					HX_STACK_LINE(1173)
					o->elt = null();
					HX_STACK_LINE(1173)
					o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
					HX_STACK_LINE(1173)
					::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1173)
				this->modified = true;
				HX_STACK_LINE(1173)
				(this->length)--;
				HX_STACK_LINE(1173)
				this->pushmod = true;
				HX_STACK_LINE(1173)
				ret1;
			}
			HX_STACK_LINE(1174)
			ret = true;
			HX_STACK_LINE(1175)
			break;
		}
		HX_STACK_LINE(1177)
		pre = cur;
		HX_STACK_LINE(1178)
		cur = cur->next;
	}
	HX_STACK_LINE(1180)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_try_remove,return )

Void ZNPList_ZPP_Shape_obj::inlined_remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_remove","zpp_nape/util/Lists.hx",1146);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1147)
		{
		}
		HX_STACK_LINE(1155)
		{
			HX_STACK_LINE(1155)
			{
			}
			HX_STACK_LINE(1155)
			::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1155)
			::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1155)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1155)
			while(((cur != null()))){
				HX_STACK_LINE(1155)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1155)
					{
						HX_STACK_LINE(1155)
						{
						}
						HX_STACK_LINE(1155)
						::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1155)
						::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1155)
						if (((pre == null()))){
							HX_STACK_LINE(1155)
							old = this->head;
							HX_STACK_LINE(1155)
							ret1 = old->next;
							HX_STACK_LINE(1155)
							this->head = ret1;
							HX_STACK_LINE(1155)
							if (((this->head == null()))){
								HX_STACK_LINE(1155)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1155)
							old = pre->next;
							HX_STACK_LINE(1155)
							ret1 = old->next;
							HX_STACK_LINE(1155)
							pre->next = ret1;
							HX_STACK_LINE(1155)
							if (((ret1 == null()))){
								HX_STACK_LINE(1155)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1155)
						{
						}
						HX_STACK_LINE(1155)
						{
							HX_STACK_LINE(1155)
							::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1155)
							{
							}
							HX_STACK_LINE(1155)
							o->elt = null();
							HX_STACK_LINE(1155)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
							HX_STACK_LINE(1155)
							::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1155)
						this->modified = true;
						HX_STACK_LINE(1155)
						(this->length)--;
						HX_STACK_LINE(1155)
						this->pushmod = true;
						HX_STACK_LINE(1155)
						ret1;
					}
					HX_STACK_LINE(1155)
					ret = true;
					HX_STACK_LINE(1155)
					break;
				}
				HX_STACK_LINE(1155)
				pre = cur;
				HX_STACK_LINE(1155)
				cur = cur->next;
			}
			HX_STACK_LINE(1155)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_remove,(void))

bool ZNPList_ZPP_Shape_obj::try_remove( ::zpp_nape::shape::ZPP_Shape obj){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::try_remove","zpp_nape/util/Lists.hx",1121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(1122)
	{
	}
	HX_STACK_LINE(1130)
	::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(1131)
	::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(1132)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1133)
	while(((cur != null()))){
		HX_STACK_LINE(1134)
		if (((cur->elt == obj))){
			HX_STACK_LINE(1135)
			this->erase(pre);
			HX_STACK_LINE(1136)
			ret = true;
			HX_STACK_LINE(1137)
			break;
		}
		HX_STACK_LINE(1139)
		pre = cur;
		HX_STACK_LINE(1140)
		cur = cur->next;
	}
	HX_STACK_LINE(1142)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,try_remove,return )

Void ZNPList_ZPP_Shape_obj::remove( ::zpp_nape::shape::ZPP_Shape obj){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::remove","zpp_nape/util/Lists.hx",1110);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(1111)
		{
		}
		HX_STACK_LINE(1119)
		{
			HX_STACK_LINE(1119)
			{
			}
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Shape pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(1119)
			::zpp_nape::util::ZNPNode_ZPP_Shape cur = this->head;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(1119)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1119)
			while(((cur != null()))){
				HX_STACK_LINE(1119)
				if (((cur->elt == obj))){
					HX_STACK_LINE(1119)
					{
						HX_STACK_LINE(1119)
						{
						}
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Shape old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(1119)
						::zpp_nape::util::ZNPNode_ZPP_Shape ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(1119)
						if (((pre == null()))){
							HX_STACK_LINE(1119)
							old = this->head;
							HX_STACK_LINE(1119)
							ret1 = old->next;
							HX_STACK_LINE(1119)
							this->head = ret1;
							HX_STACK_LINE(1119)
							if (((this->head == null()))){
								HX_STACK_LINE(1119)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(1119)
							old = pre->next;
							HX_STACK_LINE(1119)
							ret1 = old->next;
							HX_STACK_LINE(1119)
							pre->next = ret1;
							HX_STACK_LINE(1119)
							if (((ret1 == null()))){
								HX_STACK_LINE(1119)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(1119)
						{
						}
						HX_STACK_LINE(1119)
						{
							HX_STACK_LINE(1119)
							::zpp_nape::util::ZNPNode_ZPP_Shape o = old;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1119)
							{
							}
							HX_STACK_LINE(1119)
							o->elt = null();
							HX_STACK_LINE(1119)
							o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
							HX_STACK_LINE(1119)
							::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
						}
						HX_STACK_LINE(1119)
						this->modified = true;
						HX_STACK_LINE(1119)
						(this->length)--;
						HX_STACK_LINE(1119)
						this->pushmod = true;
						HX_STACK_LINE(1119)
						ret1;
					}
					HX_STACK_LINE(1119)
					ret = true;
					HX_STACK_LINE(1119)
					break;
				}
				HX_STACK_LINE(1119)
				pre = cur;
				HX_STACK_LINE(1119)
				cur = cur->next;
			}
			HX_STACK_LINE(1119)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,remove,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_pop_unsafe","zpp_nape/util/Lists.hx",1097);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1098)
	{
	}
	HX_STACK_LINE(1106)
	::zpp_nape::shape::ZPP_Shape ret = this->head->elt;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1107)
	this->pop();
	HX_STACK_LINE(1108)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop_unsafe,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::pop_unsafe","zpp_nape/util/Lists.hx",1095);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::shape::ZPP_Shape Block( ::zpp_nape::util::ZNPList_ZPP_Shape_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1095);
			{
				HX_STACK_LINE(1095)
				{
				}
				HX_STACK_LINE(1095)
				::zpp_nape::shape::ZPP_Shape ret = __this->head->elt;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1095)
				__this->pop();
				HX_STACK_LINE(1095)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1095)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop_unsafe,return )

Void ZNPList_ZPP_Shape_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_pop","zpp_nape/util/Lists.hx",1062);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1063)
		{
		}
		HX_STACK_LINE(1071)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1072)
		this->head = ret->next;
		HX_STACK_LINE(1073)
		{
		}
		HX_STACK_LINE(1074)
		{
			HX_STACK_LINE(1075)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1076)
			{
			}
			HX_STACK_LINE(1084)
			o->elt = null();
			HX_STACK_LINE(1085)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
			HX_STACK_LINE(1086)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1091)
		if (((this->head == null()))){
			HX_STACK_LINE(1091)
			this->pushmod = true;
		}
		HX_STACK_LINE(1092)
		this->modified = true;
		HX_STACK_LINE(1093)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,inlined_pop,(void))

Void ZNPList_ZPP_Shape_obj::pop( ){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::pop","zpp_nape/util/Lists.hx",1060);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1060)
		{
		}
		HX_STACK_LINE(1060)
		::zpp_nape::util::ZNPNode_ZPP_Shape ret = this->head;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(1060)
		this->head = ret->next;
		HX_STACK_LINE(1060)
		{
		}
		HX_STACK_LINE(1060)
		{
			HX_STACK_LINE(1060)
			::zpp_nape::util::ZNPNode_ZPP_Shape o = ret;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1060)
			{
			}
			HX_STACK_LINE(1060)
			o->elt = null();
			HX_STACK_LINE(1060)
			o->next = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
			HX_STACK_LINE(1060)
			::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1060)
		if (((this->head == null()))){
			HX_STACK_LINE(1060)
			this->pushmod = true;
		}
		HX_STACK_LINE(1060)
		this->modified = true;
		HX_STACK_LINE(1060)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,pop,(void))

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_insert","zpp_nape/util/Lists.hx",1017);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(1018)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::shape::ZPP_Shape &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1026);
			{
				HX_STACK_LINE(1027)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1028)
				{
					HX_STACK_LINE(1029)
					if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
						HX_STACK_LINE(1029)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();
					}
					else{
						HX_STACK_LINE(1036)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
						HX_STACK_LINE(1037)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1038)
						ret->next = null();
					}
					HX_STACK_LINE(1043)
					Dynamic();
				}
				HX_STACK_LINE(1045)
				ret->elt = o;
				HX_STACK_LINE(1046)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1026)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(1048)
	if (((cur == null()))){
		HX_STACK_LINE(1049)
		temp->next = this->head;
		HX_STACK_LINE(1050)
		this->head = temp;
	}
	else{
		HX_STACK_LINE(1053)
		temp->next = cur->next;
		HX_STACK_LINE(1054)
		cur->next = temp;
	}
	HX_STACK_LINE(1056)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(1057)
	(this->length)++;
	HX_STACK_LINE(1058)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,inlined_insert,return )

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::insert( ::zpp_nape::util::ZNPNode_ZPP_Shape cur,::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::insert","zpp_nape/util/Lists.hx",1015);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::util::ZNPList_ZPP_Shape_obj *__this,::zpp_nape::shape::ZPP_Shape &o,::zpp_nape::util::ZNPNode_ZPP_Shape &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1015);
			{
				HX_STACK_LINE(1015)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::shape::ZPP_Shape &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",1015);
						{
							HX_STACK_LINE(1015)
							::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(1015)
							{
								HX_STACK_LINE(1015)
								if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
									HX_STACK_LINE(1015)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();
								}
								else{
									HX_STACK_LINE(1015)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
									HX_STACK_LINE(1015)
									::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
									HX_STACK_LINE(1015)
									ret->next = null();
								}
								HX_STACK_LINE(1015)
								Dynamic();
							}
							HX_STACK_LINE(1015)
							ret->elt = o;
							HX_STACK_LINE(1015)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(1015)
				::zpp_nape::util::ZNPNode_ZPP_Shape temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1015)
				if (((cur == null()))){
					HX_STACK_LINE(1015)
					temp->next = __this->head;
					HX_STACK_LINE(1015)
					__this->head = temp;
				}
				else{
					HX_STACK_LINE(1015)
					temp->next = cur->next;
					HX_STACK_LINE(1015)
					cur->next = temp;
				}
				HX_STACK_LINE(1015)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(1015)
				(__this->length)++;
				HX_STACK_LINE(1015)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(1015)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZNPList_ZPP_Shape_obj,insert,return )

Void ZNPList_ZPP_Shape_obj::addAll( ::zpp_nape::util::ZNPList_ZPP_Shape x){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::addAll","zpp_nape/util/Lists.hx",997);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(998)
		{
		}
		HX_STACK_LINE(1006)
		{
			HX_STACK_LINE(1007)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = x->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1008)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1009)
				::zpp_nape::shape::ZPP_Shape i = cx_ite->elt;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1010)
				this->add(i);
				HX_STACK_LINE(1011)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,addAll,(void))

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::inlined_add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::inlined_add","zpp_nape/util/Lists.hx",960);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(961)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::shape::ZPP_Shape &o){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",969);
			{
				HX_STACK_LINE(970)
				::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(971)
				{
					HX_STACK_LINE(972)
					if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
						HX_STACK_LINE(972)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();
					}
					else{
						HX_STACK_LINE(979)
						ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
						HX_STACK_LINE(980)
						::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
						HX_STACK_LINE(981)
						ret->next = null();
					}
					HX_STACK_LINE(986)
					Dynamic();
				}
				HX_STACK_LINE(988)
				ret->elt = o;
				HX_STACK_LINE(989)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(969)
	::zpp_nape::util::ZNPNode_ZPP_Shape temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(991)
	temp->next = this->head;
	HX_STACK_LINE(992)
	this->head = temp;
	HX_STACK_LINE(993)
	this->modified = true;
	HX_STACK_LINE(994)
	(this->length)++;
	HX_STACK_LINE(995)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,inlined_add,return )

::zpp_nape::shape::ZPP_Shape ZNPList_ZPP_Shape_obj::add( ::zpp_nape::shape::ZPP_Shape o){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::add","zpp_nape/util/Lists.hx",958);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::shape::ZPP_Shape Block( ::zpp_nape::shape::ZPP_Shape &o,::zpp_nape::util::ZNPList_ZPP_Shape_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",958);
			{
				HX_STACK_LINE(958)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::util::ZNPNode_ZPP_Shape Block( ::zpp_nape::shape::ZPP_Shape &o){
						HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",958);
						{
							HX_STACK_LINE(958)
							::zpp_nape::util::ZNPNode_ZPP_Shape ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								if (((::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool == null()))){
									HX_STACK_LINE(958)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::__new();
								}
								else{
									HX_STACK_LINE(958)
									ret = ::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool;
									HX_STACK_LINE(958)
									::zpp_nape::util::ZNPNode_ZPP_Shape_obj::zpp_pool = ret->next;
									HX_STACK_LINE(958)
									ret->next = null();
								}
								HX_STACK_LINE(958)
								Dynamic();
							}
							HX_STACK_LINE(958)
							ret->elt = o;
							HX_STACK_LINE(958)
							return ret;
						}
						return null();
					}
				};
				HX_STACK_LINE(958)
				::zpp_nape::util::ZNPNode_ZPP_Shape temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(958)
				temp->next = __this->head;
				HX_STACK_LINE(958)
				__this->head = temp;
				HX_STACK_LINE(958)
				__this->modified = true;
				HX_STACK_LINE(958)
				(__this->length)++;
				HX_STACK_LINE(958)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(958)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,add,return )

Void ZNPList_ZPP_Shape_obj::setbegin( ::zpp_nape::util::ZNPNode_ZPP_Shape i){
{
		HX_STACK_PUSH("ZNPList_ZPP_Shape::setbegin","zpp_nape/util/Lists.hx",953);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(954)
		this->head = i;
		HX_STACK_LINE(955)
		this->modified = true;
		HX_STACK_LINE(956)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZNPList_ZPP_Shape_obj,setbegin,(void))

::zpp_nape::util::ZNPNode_ZPP_Shape ZNPList_ZPP_Shape_obj::begin( ){
	HX_STACK_PUSH("ZNPList_ZPP_Shape::begin","zpp_nape/util/Lists.hx",948);
	HX_STACK_THIS(this);
	HX_STACK_LINE(948)
	return this->head;
}


HX_DEFINE_DYNAMIC_FUNC0(ZNPList_ZPP_Shape_obj,begin,return )


ZNPList_ZPP_Shape_obj::ZNPList_ZPP_Shape_obj()
{
}

void ZNPList_ZPP_Shape_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZNPList_ZPP_Shape);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ZNPList_ZPP_Shape_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic ZNPList_ZPP_Shape_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ZNPList_ZPP_Shape_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::zpp_nape::util::ZNPNode_ZPP_Shape >(); return inValue; }
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

void ZNPList_ZPP_Shape_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZNPList_ZPP_Shape_obj::__mClass,"__mClass");
};

Class ZNPList_ZPP_Shape_obj::__mClass;

void ZNPList_ZPP_Shape_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZNPList_ZPP_Shape"), hx::TCanCast< ZNPList_ZPP_Shape_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZNPList_ZPP_Shape_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
