#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_util_FastHash2_Hashable2_Boolfalse
#include <zpp_nape/util/FastHash2_Hashable2_Boolfalse.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Hashable2_Boolfalse
#include <zpp_nape/util/Hashable2_Boolfalse.h>
#endif
namespace zpp_nape{
namespace util{

Void FastHash2_Hashable2_Boolfalse_obj::__construct()
{
HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::new","zpp_nape/util/FastHash.hx",256);
{
	HX_STACK_LINE(258)
	this->cnt = (int)0;
	HX_STACK_LINE(257)
	this->table = null();
	HX_STACK_LINE(260)
	this->cnt = (int)0;
	HX_STACK_LINE(262)
	this->table = Array_obj< ::zpp_nape::util::Hashable2_Boolfalse >::__new();
	HX_STACK_LINE(263)
	{
		HX_STACK_LINE(263)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (int)1048576;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		while(((_g1 < _g))){
			HX_STACK_LINE(263)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(263)
			this->table->push(null());
		}
	}
}
;
	return null();
}

FastHash2_Hashable2_Boolfalse_obj::~FastHash2_Hashable2_Boolfalse_obj() { }

Dynamic FastHash2_Hashable2_Boolfalse_obj::__CreateEmpty() { return  new FastHash2_Hashable2_Boolfalse_obj; }
hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > FastHash2_Hashable2_Boolfalse_obj::__new()
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FastHash2_Hashable2_Boolfalse_obj > result = new FastHash2_Hashable2_Boolfalse_obj();
	result->__construct();
	return result;}

int FastHash2_Hashable2_Boolfalse_obj::hash( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::hash","zpp_nape/util/FastHash.hx",411);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(411)
	return (int(((id * (int)106039) + di)) & int((int)1048575));
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,hash,return )

Void FastHash2_Hashable2_Boolfalse_obj::remove( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::remove","zpp_nape/util/FastHash.hx",377);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(378)
		{
		}
		HX_STACK_LINE(386)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(387)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(388)
		if (((n == arb))){
			HX_STACK_LINE(388)
			this->table[h] = n->hnext;
		}
		else{
			HX_STACK_LINE(389)
			if (((n != null()))){
				HX_STACK_LINE(390)
				::zpp_nape::util::Hashable2_Boolfalse pre;		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(391)
				do{
					HX_STACK_LINE(392)
					pre = n;
					HX_STACK_LINE(393)
					n = n->hnext;
				}
while(((bool((n != null())) && bool((n != arb)))));
				HX_STACK_LINE(396)
				{
				}
				HX_STACK_LINE(404)
				pre->hnext = n->hnext;
			}
		}
		HX_STACK_LINE(406)
		arb->hnext = null();
		HX_STACK_LINE(407)
		(this->cnt)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,remove,(void))

Void FastHash2_Hashable2_Boolfalse_obj::add( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::add","zpp_nape/util/FastHash.hx",345);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(346)
		{
		}
		HX_STACK_LINE(354)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(355)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(356)
		if (((n == null()))){
			HX_STACK_LINE(357)
			this->table[h] = arb;
			HX_STACK_LINE(358)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(368)
			arb->hnext = n->hnext;
			HX_STACK_LINE(369)
			n->hnext = arb;
		}
		HX_STACK_LINE(375)
		(this->cnt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,add,(void))

Void FastHash2_Hashable2_Boolfalse_obj::maybeAdd( ::zpp_nape::util::Hashable2_Boolfalse arb){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::maybeAdd","zpp_nape/util/FastHash.hx",311);
		HX_STACK_THIS(this);
		HX_STACK_ARG(arb,"arb");
		HX_STACK_LINE(312)
		{
		}
		HX_STACK_LINE(320)
		int h = (int(((arb->id * (int)106039) + arb->di)) & int((int)1048575));		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(321)
		::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(h);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(322)
		bool cont = true;		HX_STACK_VAR(cont,"cont");
		HX_STACK_LINE(323)
		if (((n == null()))){
			HX_STACK_LINE(324)
			this->table[h] = arb;
			HX_STACK_LINE(325)
			arb->hnext = null();
		}
		else{
			HX_STACK_LINE(327)
			if ((cont)){
				HX_STACK_LINE(339)
				arb->hnext = n->hnext;
				HX_STACK_LINE(340)
				n->hnext = arb;
			}
		}
		HX_STACK_LINE(343)
		if ((cont)){
			HX_STACK_LINE(343)
			(this->cnt)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FastHash2_Hashable2_Boolfalse_obj,maybeAdd,(void))

bool FastHash2_Hashable2_Boolfalse_obj::has( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::has","zpp_nape/util/FastHash.hx",302);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(303)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575)));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(304)
	if (((n == null()))){
		HX_STACK_LINE(304)
		return false;
	}
	else{
		HX_STACK_LINE(305)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(305)
			return true;
		}
		else{
			HX_STACK_LINE(307)
			do{
				HX_STACK_LINE(307)
				n = n->hnext;
			}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
			HX_STACK_LINE(308)
			return (n != null());
		}
	}
	HX_STACK_LINE(304)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,has,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::ordered_get( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::ordered_get","zpp_nape/util/FastHash.hx",294);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(295)
	if (((id > di))){
		HX_STACK_LINE(296)
		int t = id;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(297)
		id = di;
		HX_STACK_LINE(298)
		di = t;
	}
	struct _Function_1_1{
		inline static ::zpp_nape::util::Hashable2_Boolfalse Block( ::zpp_nape::util::FastHash2_Hashable2_Boolfalse_obj *__this,int &id,int &di){
			HX_STACK_PUSH("*::closure","zpp_nape/util/FastHash.hx",300);
			{
				HX_STACK_LINE(300)
				::zpp_nape::util::Hashable2_Boolfalse n = __this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575)));		HX_STACK_VAR(n,"n");
				struct _Function_2_1{
					inline static ::zpp_nape::util::Hashable2_Boolfalse Block( ::zpp_nape::util::Hashable2_Boolfalse &n,int &id,int &di){
						HX_STACK_PUSH("*::closure","zpp_nape/util/FastHash.hx",300);
						{
							HX_STACK_LINE(300)
							do{
								HX_STACK_LINE(300)
								n = n->hnext;
							}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
							HX_STACK_LINE(300)
							return n;
						}
						return null();
					}
				};
				HX_STACK_LINE(300)
				return (  (((n == null()))) ? ::zpp_nape::util::Hashable2_Boolfalse(null()) : ::zpp_nape::util::Hashable2_Boolfalse((  (((bool((n->id == id)) && bool((n->di == di))))) ? ::zpp_nape::util::Hashable2_Boolfalse(n) : ::zpp_nape::util::Hashable2_Boolfalse(_Function_2_1::Block(n,id,di)) )) );
			}
			return null();
		}
	};
	HX_STACK_LINE(300)
	return _Function_1_1::Block(this,id,di);
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,ordered_get,return )

::zpp_nape::util::Hashable2_Boolfalse FastHash2_Hashable2_Boolfalse_obj::get( int id,int di){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::get","zpp_nape/util/FastHash.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(di,"di");
	HX_STACK_LINE(284)
	::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get((int(((id * (int)106039) + di)) & int((int)1048575)));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(285)
	if (((n == null()))){
		HX_STACK_LINE(285)
		return null();
	}
	else{
		HX_STACK_LINE(286)
		if (((bool((n->id == id)) && bool((n->di == di))))){
			HX_STACK_LINE(286)
			return n;
		}
		else{
			HX_STACK_LINE(288)
			do{
				HX_STACK_LINE(288)
				n = n->hnext;
			}
while(((bool((n != null())) && bool(((bool((n->id != id)) || bool((n->di != di))))))));
			HX_STACK_LINE(289)
			return n;
		}
	}
	HX_STACK_LINE(285)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FastHash2_Hashable2_Boolfalse_obj,get,return )

Void FastHash2_Hashable2_Boolfalse_obj::clear( ){
{
		HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::clear","zpp_nape/util/FastHash.hx",268);
		HX_STACK_THIS(this);
		HX_STACK_LINE(269)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->table->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(269)
		while(((_g1 < _g))){
			HX_STACK_LINE(269)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(270)
			::zpp_nape::util::Hashable2_Boolfalse n = this->table->__get(i);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(271)
			if (((n == null()))){
				HX_STACK_LINE(271)
				continue;
			}
			HX_STACK_LINE(272)
			while(((n != null()))){
				HX_STACK_LINE(273)
				::zpp_nape::util::Hashable2_Boolfalse t = n->hnext;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(274)
				n->hnext = null();
				HX_STACK_LINE(275)
				n;
				HX_STACK_LINE(276)
				n = t;
			}
			HX_STACK_LINE(278)
			this->table[i] = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,clear,(void))

bool FastHash2_Hashable2_Boolfalse_obj::empty( ){
	HX_STACK_PUSH("FastHash2_Hashable2_Boolfalse::empty","zpp_nape/util/FastHash.hx",268);
	HX_STACK_THIS(this);
	HX_STACK_LINE(268)
	return (this->cnt == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FastHash2_Hashable2_Boolfalse_obj,empty,return )


FastHash2_Hashable2_Boolfalse_obj::FastHash2_Hashable2_Boolfalse_obj()
{
}

void FastHash2_Hashable2_Boolfalse_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FastHash2_Hashable2_Boolfalse);
	HX_MARK_MEMBER_NAME(cnt,"cnt");
	HX_MARK_MEMBER_NAME(table,"table");
	HX_MARK_END_CLASS();
}

void FastHash2_Hashable2_Boolfalse_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cnt,"cnt");
	HX_VISIT_MEMBER_NAME(table,"table");
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"cnt") ) { return cnt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"table") ) { return table; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maybeAdd") ) { return maybeAdd_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ordered_get") ) { return ordered_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FastHash2_Hashable2_Boolfalse_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cnt") ) { cnt=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"table") ) { table=inValue.Cast< Array< ::zpp_nape::util::Hashable2_Boolfalse > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FastHash2_Hashable2_Boolfalse_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cnt"));
	outFields->push(HX_CSTRING("table"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("hash"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("maybeAdd"),
	HX_CSTRING("has"),
	HX_CSTRING("ordered_get"),
	HX_CSTRING("get"),
	HX_CSTRING("clear"),
	HX_CSTRING("empty"),
	HX_CSTRING("cnt"),
	HX_CSTRING("table"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FastHash2_Hashable2_Boolfalse_obj::__mClass,"__mClass");
};

Class FastHash2_Hashable2_Boolfalse_obj::__mClass;

void FastHash2_Hashable2_Boolfalse_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.FastHash2_Hashable2_Boolfalse"), hx::TCanCast< FastHash2_Hashable2_Boolfalse_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FastHash2_Hashable2_Boolfalse_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
