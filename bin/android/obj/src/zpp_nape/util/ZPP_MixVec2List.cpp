#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_MixVec2List
#include <zpp_nape/util/ZPP_MixVec2List.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace zpp_nape{
namespace util{

Void ZPP_MixVec2List_obj::__construct()
{
HX_STACK_PUSH("ZPP_MixVec2List::new","zpp_nape/util/Lists.hx",15052);
{
	HX_STACK_LINE(15057)
	this->at_index = (int)0;
	HX_STACK_LINE(15056)
	this->at_ite = null();
	HX_STACK_LINE(15055)
	this->zip_length = false;
	HX_STACK_LINE(15054)
	this->_length = (int)0;
	HX_STACK_LINE(15053)
	this->inner = null();
	HX_STACK_LINE(15065)
	super::__construct();
	HX_STACK_LINE(15066)
	this->at_ite = null();
	HX_STACK_LINE(15067)
	this->at_index = (int)0;
	HX_STACK_LINE(15068)
	this->zip_length = true;
	HX_STACK_LINE(15069)
	this->_length = (int)0;
}
;
	return null();
}

ZPP_MixVec2List_obj::~ZPP_MixVec2List_obj() { }

Dynamic ZPP_MixVec2List_obj::__CreateEmpty() { return  new ZPP_MixVec2List_obj; }
hx::ObjectPtr< ZPP_MixVec2List_obj > ZPP_MixVec2List_obj::__new()
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MixVec2List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MixVec2List_obj > result = new ZPP_MixVec2List_obj();
	result->__construct();
	return result;}

Void ZPP_MixVec2List_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_MixVec2List::clear","zpp_nape/util/Lists.hx",15256);
		HX_STACK_THIS(this);
		HX_STACK_LINE(15258)
		if ((this->zpp_inner->immutable)){
			HX_STACK_LINE(15258)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
		}
		HX_STACK_LINE(15260)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(15260)
			while((!(this->empty()))){
				HX_STACK_LINE(15261)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(15263)
			while((!(this->empty()))){
				HX_STACK_LINE(15264)
				this->shift();
			}
		}
	}
return null();
}


bool ZPP_MixVec2List_obj::remove( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::remove","zpp_nape/util/Lists.hx",15225);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(15227)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(15227)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(15229)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(15230)
	this->zpp_vm();
	HX_STACK_LINE(15231)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(15232)
	{
		HX_STACK_LINE(15233)
		ret = false;
		HX_STACK_LINE(15234)
		{
			HX_STACK_LINE(15235)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(15236)
			while(((cx_ite != null()))){
				HX_STACK_LINE(15237)
				::zpp_nape::geom::ZPP_Vec2 x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(15238)
				if (((obj->zpp_inner == x))){
					HX_STACK_LINE(15240)
					ret = true;
					HX_STACK_LINE(15241)
					break;
				}
				HX_STACK_LINE(15244)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(15248)
	if ((ret)){
		HX_STACK_LINE(15249)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(15249)
			this->zpp_inner->subber(obj);
		}
		HX_STACK_LINE(15250)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(15250)
			this->inner->remove(obj->zpp_inner);
		}
		HX_STACK_LINE(15251)
		this->zpp_inner->invalidate();
	}
	HX_STACK_LINE(15253)
	return ret;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::shift( ){
	HX_STACK_PUSH("ZPP_MixVec2List::shift","zpp_nape/util/Lists.hx",15196);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15198)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(15198)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(15200)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(15202)
	if ((this->empty())){
		HX_STACK_LINE(15202)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(15204)
	this->zpp_vm();
	HX_STACK_LINE(15205)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(15206)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(15207)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(15207)
			this->at_ite = null();
		}
		HX_STACK_LINE(15208)
		::zpp_nape::geom::ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(this->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(15209)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->inner->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15210);
				{
					HX_STACK_LINE(15210)
					if (((ret->outer == null()))){
						HX_STACK_LINE(15210)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(15210)
						{
							HX_STACK_LINE(15210)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(15210)
							{
							}
							HX_STACK_LINE(15210)
							{
								HX_STACK_LINE(15210)
								if (((o->outer != null()))){
									HX_STACK_LINE(15210)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(15210)
									o->outer = null();
								}
								HX_STACK_LINE(15210)
								o->_isimmutable = null();
								HX_STACK_LINE(15210)
								o->_validate = null();
								HX_STACK_LINE(15210)
								o->_invalidate = null();
							}
							HX_STACK_LINE(15210)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(15210)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(15210)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(15210)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(15210)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(15211)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(15211)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(15212)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(15212)
			this->inner->erase(ite);
		}
	}
	else{
		HX_STACK_LINE(15215)
		ret = this->inner->next;
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15216);
				{
					HX_STACK_LINE(15216)
					if (((ret->outer == null()))){
						HX_STACK_LINE(15216)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(15216)
						{
							HX_STACK_LINE(15216)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(15216)
							{
							}
							HX_STACK_LINE(15216)
							{
								HX_STACK_LINE(15216)
								if (((o->outer != null()))){
									HX_STACK_LINE(15216)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(15216)
									o->outer = null();
								}
								HX_STACK_LINE(15216)
								o->_isimmutable = null();
								HX_STACK_LINE(15216)
								o->_validate = null();
								HX_STACK_LINE(15216)
								o->_invalidate = null();
							}
							HX_STACK_LINE(15216)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(15216)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(15216)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(15216)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(15216)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(15217)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(15217)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(15218)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(15218)
			this->inner->pop();
		}
	}
	HX_STACK_LINE(15220)
	this->zpp_inner->invalidate();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15221);
			{
				HX_STACK_LINE(15221)
				if (((ret->outer == null()))){
					HX_STACK_LINE(15221)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(15221)
					{
						HX_STACK_LINE(15221)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(15221)
						{
						}
						HX_STACK_LINE(15221)
						{
							HX_STACK_LINE(15221)
							if (((o->outer != null()))){
								HX_STACK_LINE(15221)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(15221)
								o->outer = null();
							}
							HX_STACK_LINE(15221)
							o->_isimmutable = null();
							HX_STACK_LINE(15221)
							o->_validate = null();
							HX_STACK_LINE(15221)
							o->_invalidate = null();
						}
						HX_STACK_LINE(15221)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(15221)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(15221)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(15221)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(15221)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(15222)
	return retx;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::pop( ){
	HX_STACK_PUSH("ZPP_MixVec2List::pop","zpp_nape/util/Lists.hx",15167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15169)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(15169)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(15171)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(15173)
	if ((this->empty())){
		HX_STACK_LINE(15173)
		hx::Throw (HX_CSTRING("Error: Cannot remove from empty list"));
	}
	HX_STACK_LINE(15175)
	this->zpp_vm();
	HX_STACK_LINE(15176)
	::zpp_nape::geom::ZPP_Vec2 ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(15177)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(15178)
		ret = this->inner->next;
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15179);
				{
					HX_STACK_LINE(15179)
					if (((ret->outer == null()))){
						HX_STACK_LINE(15179)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(15179)
						{
							HX_STACK_LINE(15179)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(15179)
							{
							}
							HX_STACK_LINE(15179)
							{
								HX_STACK_LINE(15179)
								if (((o->outer != null()))){
									HX_STACK_LINE(15179)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(15179)
									o->outer = null();
								}
								HX_STACK_LINE(15179)
								o->_isimmutable = null();
								HX_STACK_LINE(15179)
								o->_validate = null();
								HX_STACK_LINE(15179)
								o->_invalidate = null();
							}
							HX_STACK_LINE(15179)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(15179)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(15179)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(15179)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(15179)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(15180)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(15180)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(15181)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(15181)
			this->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(15184)
		if (((bool((this->at_ite != null())) && bool((this->at_ite->next == null()))))){
			HX_STACK_LINE(15184)
			this->at_ite = null();
		}
		HX_STACK_LINE(15185)
		::zpp_nape::geom::ZPP_Vec2 ite = (  (((this->zpp_gl() == (int)1))) ? ::zpp_nape::geom::ZPP_Vec2(null()) : ::zpp_nape::geom::ZPP_Vec2(this->inner->iterator_at((this->zpp_gl() - (int)2))) );		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(15186)
		ret = (  (((ite == null()))) ? ::zpp_nape::geom::ZPP_Vec2(this->inner->next) : ::zpp_nape::geom::ZPP_Vec2(ite->next) );
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
				HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15187);
				{
					HX_STACK_LINE(15187)
					if (((ret->outer == null()))){
						HX_STACK_LINE(15187)
						ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
						HX_STACK_LINE(15187)
						{
							HX_STACK_LINE(15187)
							::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(15187)
							{
							}
							HX_STACK_LINE(15187)
							{
								HX_STACK_LINE(15187)
								if (((o->outer != null()))){
									HX_STACK_LINE(15187)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(15187)
									o->outer = null();
								}
								HX_STACK_LINE(15187)
								o->_isimmutable = null();
								HX_STACK_LINE(15187)
								o->_validate = null();
								HX_STACK_LINE(15187)
								o->_invalidate = null();
							}
							HX_STACK_LINE(15187)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(15187)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
						HX_STACK_LINE(15187)
						ret->outer->zpp_inner = ret;
					}
					HX_STACK_LINE(15187)
					return ret->outer;
				}
				return null();
			}
		};
		HX_STACK_LINE(15187)
		::nape::geom::Vec2 retx = _Function_2_1::Block(ret);		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(15188)
		if (((this->zpp_inner->subber_dyn() != null()))){
			HX_STACK_LINE(15188)
			this->zpp_inner->subber(retx);
		}
		HX_STACK_LINE(15189)
		if ((!(this->zpp_inner->dontremove))){
			HX_STACK_LINE(15189)
			this->inner->erase(ite);
		}
	}
	HX_STACK_LINE(15191)
	this->zpp_inner->invalidate();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &ret){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15192);
			{
				HX_STACK_LINE(15192)
				if (((ret->outer == null()))){
					HX_STACK_LINE(15192)
					ret->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(15192)
					{
						HX_STACK_LINE(15192)
						::zpp_nape::geom::ZPP_Vec2 o = ret->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(15192)
						{
						}
						HX_STACK_LINE(15192)
						{
							HX_STACK_LINE(15192)
							if (((o->outer != null()))){
								HX_STACK_LINE(15192)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(15192)
								o->outer = null();
							}
							HX_STACK_LINE(15192)
							o->_isimmutable = null();
							HX_STACK_LINE(15192)
							o->_validate = null();
							HX_STACK_LINE(15192)
							o->_invalidate = null();
						}
						HX_STACK_LINE(15192)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(15192)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(15192)
					ret->outer->zpp_inner = ret;
				}
				HX_STACK_LINE(15192)
				return ret->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(15192)
	::nape::geom::Vec2 retx = _Function_1_1::Block(ret);		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(15193)
	return retx;
}


bool ZPP_MixVec2List_obj::unshift( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::unshift","zpp_nape/util/Lists.hx",15145);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(15147)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(15147)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(15149)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(15150)
	this->zpp_vm();
	HX_STACK_LINE(15152)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(15152)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" is already in use")));
	}
	HX_STACK_LINE(15154)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(15155)
	if ((cont)){
		HX_STACK_LINE(15156)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(15157)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at((this->zpp_gl() - (int)1));		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(15158)
			this->inner->insert(ite,obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(15160)
			this->inner->add(obj->zpp_inner);
		}
		HX_STACK_LINE(15161)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(15162)
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(15162)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(15164)
	return cont;
}


bool ZPP_MixVec2List_obj::push( ::nape::geom::Vec2 obj){
	HX_STACK_PUSH("ZPP_MixVec2List::push","zpp_nape/util/Lists.hx",15123);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(15125)
	if ((this->zpp_inner->immutable)){
		HX_STACK_LINE(15125)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING("List is immutable")));
	}
	HX_STACK_LINE(15127)
	this->zpp_inner->modify_test();
	HX_STACK_LINE(15128)
	this->zpp_vm();
	HX_STACK_LINE(15130)
	if ((obj->zpp_inner->_inuse)){
		HX_STACK_LINE(15130)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" is already in use")));
	}
	HX_STACK_LINE(15132)
	bool cont = (  (((this->zpp_inner->adder_dyn() != null()))) ? bool(this->zpp_inner->adder(obj)) : bool(true) );		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(15133)
	if ((cont)){
		HX_STACK_LINE(15134)
		if ((this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(15134)
			this->inner->add(obj->zpp_inner);
		}
		else{
			HX_STACK_LINE(15136)
			::zpp_nape::geom::ZPP_Vec2 ite = this->inner->iterator_at((this->zpp_gl() - (int)1));		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(15137)
			this->inner->insert(ite,obj->zpp_inner);
		}
		HX_STACK_LINE(15139)
		this->zpp_inner->invalidate();
		HX_STACK_LINE(15140)
		if (((this->zpp_inner->post_adder_dyn() != null()))){
			HX_STACK_LINE(15140)
			this->zpp_inner->post_adder(obj);
		}
	}
	HX_STACK_LINE(15142)
	return cont;
}


::nape::geom::Vec2 ZPP_MixVec2List_obj::at( int index){
	HX_STACK_PUSH("ZPP_MixVec2List::at","zpp_nape/util/Lists.hx",15096);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(15097)
	this->zpp_vm();
	HX_STACK_LINE(15099)
	if (((bool((index < (int)0)) || bool((index >= this->zpp_gl()))))){
		HX_STACK_LINE(15099)
		hx::Throw (HX_CSTRING("Error: Index out of bounds"));
	}
	HX_STACK_LINE(15101)
	if ((this->zpp_inner->reverse_flag)){
		HX_STACK_LINE(15101)
		index = ((this->zpp_gl() - (int)1) - index);
	}
	HX_STACK_LINE(15102)
	if (((bool((index < this->at_index)) || bool((this->at_ite == null()))))){
		HX_STACK_LINE(15103)
		this->at_index = (int)0;
		HX_STACK_LINE(15104)
		this->at_ite = this->inner->next;
		HX_STACK_LINE(15105)
		while((true)){
			HX_STACK_LINE(15106)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(15107)
			break;
			HX_STACK_LINE(15108)
			this->at_ite = this->at_ite->next;
		}
	}
	HX_STACK_LINE(15111)
	while(((this->at_index != index))){
		HX_STACK_LINE(15112)
		(this->at_index)++;
		HX_STACK_LINE(15113)
		this->at_ite = this->at_ite->next;
		HX_STACK_LINE(15114)
		while((true)){
			HX_STACK_LINE(15115)
			::zpp_nape::geom::ZPP_Vec2 x = this->at_ite;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(15116)
			break;
			HX_STACK_LINE(15117)
			this->at_ite = this->at_ite->next;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::zpp_nape::util::ZPP_MixVec2List_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/util/Lists.hx",15120);
			{
				HX_STACK_LINE(15120)
				::zpp_nape::geom::ZPP_Vec2 _this = __this->at_ite;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(15120)
				if (((_this->outer == null()))){
					HX_STACK_LINE(15120)
					_this->outer = ::nape::geom::Vec2_obj::__new(null(),null());
					HX_STACK_LINE(15120)
					{
						HX_STACK_LINE(15120)
						::zpp_nape::geom::ZPP_Vec2 o = _this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(15120)
						{
						}
						HX_STACK_LINE(15120)
						{
							HX_STACK_LINE(15120)
							if (((o->outer != null()))){
								HX_STACK_LINE(15120)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(15120)
								o->outer = null();
							}
							HX_STACK_LINE(15120)
							o->_isimmutable = null();
							HX_STACK_LINE(15120)
							o->_validate = null();
							HX_STACK_LINE(15120)
							o->_invalidate = null();
						}
						HX_STACK_LINE(15120)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(15120)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
					HX_STACK_LINE(15120)
					_this->outer->zpp_inner = _this;
				}
				HX_STACK_LINE(15120)
				return _this->outer;
			}
			return null();
		}
	};
	HX_STACK_LINE(15120)
	return _Function_1_1::Block(this);
}


Void ZPP_MixVec2List_obj::zpp_vm( ){
{
		HX_STACK_PUSH("ZPP_MixVec2List::zpp_vm","zpp_nape/util/Lists.hx",15087);
		HX_STACK_THIS(this);
		HX_STACK_LINE(15088)
		this->zpp_inner->validate();
		HX_STACK_LINE(15089)
		if ((this->inner->modified)){
			HX_STACK_LINE(15090)
			this->zip_length = true;
			HX_STACK_LINE(15091)
			this->_length = (int)0;
			HX_STACK_LINE(15092)
			this->at_ite = null();
		}
	}
return null();
}


int ZPP_MixVec2List_obj::zpp_gl( ){
	HX_STACK_PUSH("ZPP_MixVec2List::zpp_gl","zpp_nape/util/Lists.hx",15071);
	HX_STACK_THIS(this);
	HX_STACK_LINE(15072)
	this->zpp_vm();
	HX_STACK_LINE(15073)
	if ((this->zip_length)){
		HX_STACK_LINE(15074)
		this->_length = (int)0;
		HX_STACK_LINE(15075)
		{
			HX_STACK_LINE(15076)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->inner->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(15077)
			while(((cx_ite != null()))){
				HX_STACK_LINE(15078)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(15079)
				(this->_length)++;
				HX_STACK_LINE(15080)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(15083)
		this->zip_length = false;
	}
	HX_STACK_LINE(15085)
	return this->_length;
}


::zpp_nape::util::ZPP_MixVec2List ZPP_MixVec2List_obj::get( ::zpp_nape::geom::ZPP_Vec2 list,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_PUSH("ZPP_MixVec2List::get","zpp_nape/util/Lists.hx",15058);
	HX_STACK_ARG(list,"list");
	HX_STACK_ARG(immutable,"immutable");
{
		HX_STACK_LINE(15059)
		::zpp_nape::util::ZPP_MixVec2List ret = ::zpp_nape::util::ZPP_MixVec2List_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(15060)
		ret->inner = list;
		HX_STACK_LINE(15061)
		ret->zpp_inner->immutable = immutable;
		HX_STACK_LINE(15062)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_MixVec2List_obj,get,return )


ZPP_MixVec2List_obj::ZPP_MixVec2List_obj()
{
}

void ZPP_MixVec2List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MixVec2List);
	HX_MARK_MEMBER_NAME(at_index,"at_index");
	HX_MARK_MEMBER_NAME(at_ite,"at_ite");
	HX_MARK_MEMBER_NAME(zip_length,"zip_length");
	HX_MARK_MEMBER_NAME(_length,"_length");
	HX_MARK_MEMBER_NAME(inner,"inner");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_MixVec2List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(at_index,"at_index");
	HX_VISIT_MEMBER_NAME(at_ite,"at_ite");
	HX_VISIT_MEMBER_NAME(zip_length,"zip_length");
	HX_VISIT_MEMBER_NAME(_length,"_length");
	HX_VISIT_MEMBER_NAME(inner,"inner");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_MixVec2List_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_vm") ) { return zpp_vm_dyn(); }
		if (HX_FIELD_EQ(inName,"zpp_gl") ) { return zpp_gl_dyn(); }
		if (HX_FIELD_EQ(inName,"at_ite") ) { return at_ite; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"_length") ) { return _length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { return at_index; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { return zip_length; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MixVec2List_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"at_ite") ) { at_ite=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_length") ) { _length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"at_index") ) { at_index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"zip_length") ) { zip_length=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MixVec2List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("at_index"));
	outFields->push(HX_CSTRING("at_ite"));
	outFields->push(HX_CSTRING("zip_length"));
	outFields->push(HX_CSTRING("_length"));
	outFields->push(HX_CSTRING("inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("clear"),
	HX_CSTRING("remove"),
	HX_CSTRING("shift"),
	HX_CSTRING("pop"),
	HX_CSTRING("unshift"),
	HX_CSTRING("push"),
	HX_CSTRING("at"),
	HX_CSTRING("zpp_vm"),
	HX_CSTRING("zpp_gl"),
	HX_CSTRING("at_index"),
	HX_CSTRING("at_ite"),
	HX_CSTRING("zip_length"),
	HX_CSTRING("_length"),
	HX_CSTRING("inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MixVec2List_obj::__mClass,"__mClass");
};

Class ZPP_MixVec2List_obj::__mClass;

void ZPP_MixVec2List_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.ZPP_MixVec2List"), hx::TCanCast< ZPP_MixVec2List_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MixVec2List_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
