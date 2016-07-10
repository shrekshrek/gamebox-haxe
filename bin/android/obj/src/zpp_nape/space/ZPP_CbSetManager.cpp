#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSet
#include <zpp_nape/callbacks/ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbSetPair
#include <zpp_nape/callbacks/ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Listener
#include <zpp_nape/callbacks/ZPP_Listener.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_CbSetManager
#include <zpp_nape/space/ZPP_CbSetManager.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_BodyListener
#include <zpp_nape/util/ZNPList_ZPP_BodyListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSet
#include <zpp_nape/util/ZNPList_ZPP_CbSet.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbSetPair
#include <zpp_nape/util/ZNPList_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_ConstraintListener
#include <zpp_nape/util/ZNPList_ZPP_ConstraintListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_InteractionListener
#include <zpp_nape/util/ZNPList_ZPP_InteractionListener.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbSetPair
#include <zpp_nape/util/ZNPNode_ZPP_CbSetPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_CbType
#include <zpp_nape/util/ZNPNode_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_CbSet
#include <zpp_nape/util/ZPP_Set_ZPP_CbSet.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_CbSetManager_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_PUSH("ZPP_CbSetManager::new","zpp_nape/space/Space.hx",1116);
{
	HX_STACK_LINE(1118)
	this->space = null();
	HX_STACK_LINE(1117)
	this->cbsets = null();
	HX_STACK_LINE(1221)
	{
		HX_STACK_LINE(1222)
		if (((::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1222)
			this->cbsets = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(1229)
			this->cbsets = ::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1230)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet_obj::zpp_pool = this->cbsets->next;
			HX_STACK_LINE(1231)
			this->cbsets->next = null();
		}
		HX_STACK_LINE(1236)
		Dynamic();
	}
	HX_STACK_LINE(1238)
	this->cbsets->lt = ::zpp_nape::callbacks::ZPP_CbSet_obj::setlt_dyn();
	HX_STACK_LINE(1239)
	this->space = space;
}
;
	return null();
}

ZPP_CbSetManager_obj::~ZPP_CbSetManager_obj() { }

Dynamic ZPP_CbSetManager_obj::__CreateEmpty() { return  new ZPP_CbSetManager_obj; }
hx::ObjectPtr< ZPP_CbSetManager_obj > ZPP_CbSetManager_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_CbSetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_CbSetManager_obj > result = new ZPP_CbSetManager_obj();
	result->__construct(inArgs[0]);
	return result;}

bool ZPP_CbSetManager_obj::valid_listener( ::zpp_nape::callbacks::ZPP_Listener i){
	HX_STACK_PUSH("ZPP_CbSetManager::valid_listener","zpp_nape/space/Space.hx",1299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(i,"i");
	HX_STACK_LINE(1299)
	return (i->space == this->space);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,valid_listener,return )

::zpp_nape::callbacks::ZPP_CbSetPair ZPP_CbSetManager_obj::pair( ::zpp_nape::callbacks::ZPP_CbSet a,::zpp_nape::callbacks::ZPP_CbSet b){
	HX_STACK_PUSH("ZPP_CbSetManager::pair","zpp_nape/space/Space.hx",1273);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(1274)
	::zpp_nape::callbacks::ZPP_CbSetPair ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1275)
	::zpp_nape::util::ZNPList_ZPP_CbSetPair pairs = (  (((a->cbpairs->length < b->cbpairs->length))) ? ::zpp_nape::util::ZNPList_ZPP_CbSetPair(a->cbpairs) : ::zpp_nape::util::ZNPList_ZPP_CbSetPair(b->cbpairs) );		HX_STACK_VAR(pairs,"pairs");
	HX_STACK_LINE(1276)
	{
		HX_STACK_LINE(1277)
		::zpp_nape::util::ZNPNode_ZPP_CbSetPair cx_ite = pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1278)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1279)
			::zpp_nape::callbacks::ZPP_CbSetPair p = cx_ite->elt;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(1280)
			if (((bool((bool((p->a == a)) && bool((p->b == b)))) || bool((bool((p->a == b)) && bool((p->b == a))))))){
				HX_STACK_LINE(1282)
				ret = p;
				HX_STACK_LINE(1283)
				break;
			}
			HX_STACK_LINE(1286)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1289)
	if (((ret == null()))){
		struct _Function_2_1{
			inline static ::zpp_nape::callbacks::ZPP_CbSetPair Block( ::zpp_nape::callbacks::ZPP_CbSet &a,::zpp_nape::callbacks::ZPP_CbSet &b){
				HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1290);
				{
					HX_STACK_LINE(1290)
					::zpp_nape::callbacks::ZPP_CbSetPair ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(1290)
					{
						HX_STACK_LINE(1290)
						if (((::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool == null()))){
							HX_STACK_LINE(1290)
							ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::__new();
						}
						else{
							HX_STACK_LINE(1290)
							ret1 = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
							HX_STACK_LINE(1290)
							::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(1290)
							ret1->next = null();
						}
						HX_STACK_LINE(1290)
						ret1->zip_listeners = true;
					}
					HX_STACK_LINE(1290)
					if ((::zpp_nape::callbacks::ZPP_CbSet_obj::setlt(a,b))){
						HX_STACK_LINE(1290)
						ret1->a = a;
						HX_STACK_LINE(1290)
						ret1->b = b;
					}
					else{
						HX_STACK_LINE(1290)
						ret1->a = b;
						HX_STACK_LINE(1290)
						ret1->b = a;
					}
					HX_STACK_LINE(1290)
					return ret1;
				}
				return null();
			}
		};
		HX_STACK_LINE(1290)
		ret = _Function_2_1::Block(a,b);
		HX_STACK_LINE(1291)
		a->cbpairs->add(ret);
		HX_STACK_LINE(1292)
		if (((b != a))){
			HX_STACK_LINE(1292)
			b->cbpairs->add(ret);
		}
	}
	HX_STACK_LINE(1294)
	if ((ret->zip_listeners)){
		HX_STACK_LINE(1294)
		ret->zip_listeners = false;
		HX_STACK_LINE(1294)
		ret->__validate();
	}
	HX_STACK_LINE(1295)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_CbSetManager_obj,pair,return )

Void ZPP_CbSetManager_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_CbSetManager::validate","zpp_nape/space/Space.hx",1243);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1245)
		{
		}
		HX_STACK_LINE(1253)
		if ((!(this->cbsets->empty()))){
			HX_STACK_LINE(1254)
			::zpp_nape::util::ZPP_Set_ZPP_CbSet set_ite = this->cbsets->parent;		HX_STACK_VAR(set_ite,"set_ite");
			HX_STACK_LINE(1255)
			while(((set_ite->prev != null()))){
				HX_STACK_LINE(1255)
				set_ite = set_ite->prev;
			}
			HX_STACK_LINE(1256)
			while(((set_ite != null()))){
				HX_STACK_LINE(1257)
				::zpp_nape::callbacks::ZPP_CbSet cb = set_ite->data;		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1258)
				cb->validate();
				HX_STACK_LINE(1259)
				if (((set_ite->next != null()))){
					HX_STACK_LINE(1260)
					set_ite = set_ite->next;
					HX_STACK_LINE(1261)
					while(((set_ite->prev != null()))){
						HX_STACK_LINE(1261)
						set_ite = set_ite->prev;
					}
				}
				else{
					HX_STACK_LINE(1264)
					while(((bool((set_ite->parent != null())) && bool((set_ite == set_ite->parent->next))))){
						HX_STACK_LINE(1264)
						set_ite = set_ite->parent;
					}
					HX_STACK_LINE(1265)
					set_ite = set_ite->parent;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,validate,(void))

Void ZPP_CbSetManager_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_CbSetManager::clear","zpp_nape/space/Space.hx",1210);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_CbSetManager_obj,clear,(void))

Void ZPP_CbSetManager_obj::remove( ::zpp_nape::callbacks::ZPP_CbSet set){
{
		HX_STACK_PUSH("ZPP_CbSetManager::remove","zpp_nape/space/Space.hx",1178);
		HX_STACK_THIS(this);
		HX_STACK_ARG(set,"set");
		HX_STACK_LINE(1179)
		this->cbsets->remove(set);
		HX_STACK_LINE(1180)
		while((!(((set->cbpairs->head == null()))))){
			HX_STACK_LINE(1182)
			::zpp_nape::callbacks::ZPP_CbSetPair pair = set->cbpairs->pop_unsafe();		HX_STACK_VAR(pair,"pair");
			HX_STACK_LINE(1183)
			{
				HX_STACK_LINE(1184)
				if (((pair->a != pair->b))){
					HX_STACK_LINE(1184)
					if (((set == pair->a))){
						HX_STACK_LINE(1185)
						pair->b->cbpairs->remove(pair);
					}
					else{
						HX_STACK_LINE(1186)
						pair->a->cbpairs->remove(pair);
					}
				}
				HX_STACK_LINE(1188)
				{
					HX_STACK_LINE(1189)
					::zpp_nape::callbacks::ZPP_CbSetPair o = pair;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1190)
					{
					}
					HX_STACK_LINE(1198)
					{
						HX_STACK_LINE(1198)
						o->a = o->b = null();
						HX_STACK_LINE(1198)
						o->listeners->clear();
					}
					HX_STACK_LINE(1199)
					o->next = ::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool;
					HX_STACK_LINE(1200)
					::zpp_nape::callbacks::ZPP_CbSetPair_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1208)
		set->manager = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,remove,(void))

::zpp_nape::callbacks::ZPP_CbSet ZPP_CbSetManager_obj::get( ::zpp_nape::util::ZNPList_ZPP_CbType cbTypes){
	HX_STACK_PUSH("ZPP_CbSetManager::get","zpp_nape/space/Space.hx",1119);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cbTypes,"cbTypes");
	HX_STACK_LINE(1120)
	if (((cbTypes->head == null()))){
		HX_STACK_LINE(1120)
		return null();
	}
	HX_STACK_LINE(1123)
	::zpp_nape::callbacks::ZPP_CbSet fake;		HX_STACK_VAR(fake,"fake");
	HX_STACK_LINE(1124)
	{
		HX_STACK_LINE(1125)
		if (((::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool == null()))){
			HX_STACK_LINE(1125)
			fake = ::zpp_nape::callbacks::ZPP_CbSet_obj::__new();
		}
		else{
			HX_STACK_LINE(1132)
			fake = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
			HX_STACK_LINE(1133)
			::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = fake->next;
			HX_STACK_LINE(1134)
			fake->next = null();
		}
		HX_STACK_LINE(1139)
		Dynamic();
	}
	HX_STACK_LINE(1141)
	::zpp_nape::util::ZNPList_ZPP_CbType faketypes = fake->cbTypes;		HX_STACK_VAR(faketypes,"faketypes");
	HX_STACK_LINE(1142)
	fake->cbTypes = cbTypes;
	HX_STACK_LINE(1143)
	::zpp_nape::util::ZPP_Set_ZPP_CbSet res = this->cbsets->find_weak(fake);		HX_STACK_VAR(res,"res");
	struct _Function_1_1{
		inline static ::zpp_nape::callbacks::ZPP_CbSet Block( ::zpp_nape::util::ZNPList_ZPP_CbType &cbTypes,::zpp_nape::space::ZPP_CbSetManager_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",1144);
			{
				HX_STACK_LINE(1145)
				::zpp_nape::callbacks::ZPP_CbSet set = ::zpp_nape::callbacks::ZPP_CbSet_obj::get(cbTypes);		HX_STACK_VAR(set,"set");
				HX_STACK_LINE(1146)
				{
				}
				HX_STACK_LINE(1154)
				__this->cbsets->insert(set);
				HX_STACK_LINE(1155)
				set->manager = __this;
				HX_STACK_LINE(1156)
				return set;
			}
			return null();
		}
	};
	HX_STACK_LINE(1144)
	::zpp_nape::callbacks::ZPP_CbSet ret = (  (((res != null()))) ? ::zpp_nape::callbacks::ZPP_CbSet(res->data) : ::zpp_nape::callbacks::ZPP_CbSet(_Function_1_1::Block(cbTypes,this)) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1158)
	fake->cbTypes = faketypes;
	HX_STACK_LINE(1159)
	{
		HX_STACK_LINE(1160)
		::zpp_nape::callbacks::ZPP_CbSet o = fake;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(1161)
		{
		}
		HX_STACK_LINE(1169)
		{
			HX_STACK_LINE(1169)
			{
			}
			HX_STACK_LINE(1169)
			{
			}
			HX_STACK_LINE(1169)
			{
			}
			HX_STACK_LINE(1169)
			o->listeners->clear();
			HX_STACK_LINE(1169)
			o->zip_listeners = true;
			HX_STACK_LINE(1169)
			o->bodylisteners->clear();
			HX_STACK_LINE(1169)
			o->zip_bodylisteners = true;
			HX_STACK_LINE(1169)
			o->conlisteners->clear();
			HX_STACK_LINE(1169)
			o->zip_conlisteners = true;
			HX_STACK_LINE(1169)
			while((!(((o->cbTypes->head == null()))))){
				HX_STACK_LINE(1169)
				::zpp_nape::callbacks::ZPP_CbType cb = o->cbTypes->pop_unsafe();		HX_STACK_VAR(cb,"cb");
				HX_STACK_LINE(1169)
				cb->cbsets->remove(o);
			}
			HX_STACK_LINE(1169)
			Dynamic();
		}
		HX_STACK_LINE(1170)
		o->next = ::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool;
		HX_STACK_LINE(1171)
		::zpp_nape::callbacks::ZPP_CbSet_obj::zpp_pool = o;
	}
	HX_STACK_LINE(1176)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_CbSetManager_obj,get,return )


ZPP_CbSetManager_obj::ZPP_CbSetManager_obj()
{
}

void ZPP_CbSetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_CbSetManager);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(cbsets,"cbsets");
	HX_MARK_END_CLASS();
}

void ZPP_CbSetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(cbsets,"cbsets");
}

Dynamic ZPP_CbSetManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pair") ) { return pair_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"cbsets") ) { return cbsets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"valid_listener") ) { return valid_listener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_CbSetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbsets") ) { cbsets=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_CbSet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_CbSetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("cbsets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("valid_listener"),
	HX_CSTRING("pair"),
	HX_CSTRING("validate"),
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("get"),
	HX_CSTRING("space"),
	HX_CSTRING("cbsets"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_CbSetManager_obj::__mClass,"__mClass");
};

Class ZPP_CbSetManager_obj::__mClass;

void ZPP_CbSetManager_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_CbSetManager"), hx::TCanCast< ZPP_CbSetManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_CbSetManager_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace space
