#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_Vec2_obj::__construct()
{
HX_STACK_PUSH("ZPP_Vec2::new","zpp_nape/geom/Vec2.hx",174);
{
	HX_STACK_LINE(593)
	this->y = 0.0;
	HX_STACK_LINE(592)
	this->x = 0.0;
	HX_STACK_LINE(281)
	this->length = (int)0;
	HX_STACK_LINE(280)
	this->pushmod = false;
	HX_STACK_LINE(279)
	this->modified = false;
	HX_STACK_LINE(278)
	this->_inuse = false;
	HX_STACK_LINE(273)
	this->next = null();
	HX_STACK_LINE(232)
	this->weak = false;
	HX_STACK_LINE(205)
	this->outer = null();
	HX_STACK_LINE(192)
	this->_isimmutable = null();
	HX_STACK_LINE(191)
	this->_immutable = false;
	HX_STACK_LINE(176)
	this->_validate = null();
	HX_STACK_LINE(175)
	this->_invalidate = null();
}
;
	return null();
}

ZPP_Vec2_obj::~ZPP_Vec2_obj() { }

Dynamic ZPP_Vec2_obj::__CreateEmpty() { return  new ZPP_Vec2_obj; }
hx::ObjectPtr< ZPP_Vec2_obj > ZPP_Vec2_obj::__new()
{  hx::ObjectPtr< ZPP_Vec2_obj > result = new ZPP_Vec2_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Vec2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Vec2_obj > result = new ZPP_Vec2_obj();
	result->__construct();
	return result;}

::String ZPP_Vec2_obj::toString( ){
	HX_STACK_PUSH("ZPP_Vec2::toString","zpp_nape/geom/Vec2.hx",643);
	HX_STACK_THIS(this);
	HX_STACK_LINE(643)
	return ((((HX_CSTRING("{ x: ") + this->x) + HX_CSTRING(" y: ")) + this->y) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,toString,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::copy( ){
	HX_STACK_PUSH("ZPP_Vec2::copy","zpp_nape/geom/Vec2.hx",640);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",641);
			{
				HX_STACK_LINE(641)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(641)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(641)
				{
					HX_STACK_LINE(641)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(641)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(641)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(641)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(641)
						ret->next = null();
					}
					HX_STACK_LINE(641)
					ret->weak = false;
				}
				HX_STACK_LINE(641)
				ret->_immutable = immutable;
				HX_STACK_LINE(641)
				{
					HX_STACK_LINE(641)
					ret->x = __this->x;
					HX_STACK_LINE(641)
					ret->y = __this->y;
					HX_STACK_LINE(641)
					{
					}
					HX_STACK_LINE(641)
					{
					}
				}
				HX_STACK_LINE(641)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(640)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,copy,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::at( int ind){
	HX_STACK_PUSH("ZPP_Vec2::at","zpp_nape/geom/Vec2.hx",580);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(581)
	{
	}
	HX_STACK_LINE(589)
	::zpp_nape::geom::ZPP_Vec2 it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(590)
	return (  (((it != null()))) ? ::zpp_nape::geom::ZPP_Vec2(it) : ::zpp_nape::geom::ZPP_Vec2(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_Vec2::iterator_at","zpp_nape/geom/Vec2.hx",567);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(568)
	{
	}
	HX_STACK_LINE(576)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(577)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(577)
		ret = ret->next;
	}
	HX_STACK_LINE(578)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,iterator_at,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::back( ){
	HX_STACK_PUSH("ZPP_Vec2::back","zpp_nape/geom/Vec2.hx",558);
	HX_STACK_THIS(this);
	HX_STACK_LINE(559)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(560)
	::zpp_nape::geom::ZPP_Vec2 cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(561)
	while(((cur != null()))){
		HX_STACK_LINE(562)
		ret = cur;
		HX_STACK_LINE(563)
		cur = cur->next;
	}
	HX_STACK_LINE(565)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,back,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::front( ){
	HX_STACK_PUSH("ZPP_Vec2::front","zpp_nape/geom/Vec2.hx",558);
	HX_STACK_THIS(this);
	HX_STACK_LINE(558)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,front,return )

bool ZPP_Vec2_obj::inlined_has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::inlined_has","zpp_nape/geom/Vec2.hx",528);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(529)
	{
	}
	HX_STACK_LINE(537)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(538)
	{
		HX_STACK_LINE(539)
		ret = false;
		HX_STACK_LINE(540)
		{
			HX_STACK_LINE(541)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(542)
			while(((cx_ite != null()))){
				HX_STACK_LINE(543)
				::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(544)
				if (((npite == obj))){
					HX_STACK_LINE(546)
					ret = true;
					HX_STACK_LINE(547)
					break;
				}
				HX_STACK_LINE(550)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(554)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_has,return )

bool ZPP_Vec2_obj::has( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::has","zpp_nape/geom/Vec2.hx",526);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",526);
			{
				HX_STACK_LINE(526)
				{
				}
				HX_STACK_LINE(526)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(526)
				{
					HX_STACK_LINE(526)
					ret = false;
					HX_STACK_LINE(526)
					{
						HX_STACK_LINE(526)
						::zpp_nape::geom::ZPP_Vec2 cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(526)
						while(((cx_ite != null()))){
							HX_STACK_LINE(526)
							::zpp_nape::geom::ZPP_Vec2 npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(526)
							if (((npite == obj))){
								HX_STACK_LINE(526)
								ret = true;
								HX_STACK_LINE(526)
								break;
							}
							HX_STACK_LINE(526)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(526)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(526)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,has,return )

int ZPP_Vec2_obj::size( ){
	HX_STACK_PUSH("ZPP_Vec2::size","zpp_nape/geom/Vec2.hx",526);
	HX_STACK_THIS(this);
	HX_STACK_LINE(526)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,size,return )

bool ZPP_Vec2_obj::empty( ){
	HX_STACK_PUSH("ZPP_Vec2::empty","zpp_nape/geom/Vec2.hx",524);
	HX_STACK_THIS(this);
	HX_STACK_LINE(524)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,empty,return )

Void ZPP_Vec2_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_Vec2::reverse","zpp_nape/geom/Vec2.hx",509);
		HX_STACK_THIS(this);
		HX_STACK_LINE(510)
		::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(511)
		::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(512)
		while(((cur != null()))){
			HX_STACK_LINE(513)
			::zpp_nape::geom::ZPP_Vec2 nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(514)
			cur->next = pre;
			HX_STACK_LINE(515)
			this->next = cur;
			HX_STACK_LINE(516)
			pre = cur;
			HX_STACK_LINE(517)
			cur = nx;
		}
		HX_STACK_LINE(519)
		this->modified = true;
		HX_STACK_LINE(520)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,reverse,(void))

Void ZPP_Vec2_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_clear","zpp_nape/geom/Vec2.hx",503);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_clear,(void))

Void ZPP_Vec2_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Vec2::clear","zpp_nape/geom/Vec2.hx",501);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,clear,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::splice( ::zpp_nape::geom::ZPP_Vec2 pre,int n){
	HX_STACK_PUSH("ZPP_Vec2::splice","zpp_nape/geom/Vec2.hx",497);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(498)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(498)
		this->erase(pre);
	}
	HX_STACK_LINE(499)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,splice,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_PUSH("ZPP_Vec2::inlined_erase","zpp_nape/geom/Vec2.hx",465);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(466)
	{
	}
	HX_STACK_LINE(474)
	::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(475)
	::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(476)
	if (((pre == null()))){
		HX_STACK_LINE(477)
		old = this->next;
		HX_STACK_LINE(478)
		ret = old->next;
		HX_STACK_LINE(479)
		this->next = ret;
		HX_STACK_LINE(480)
		if (((this->next == null()))){
			HX_STACK_LINE(480)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(483)
		old = pre->next;
		HX_STACK_LINE(484)
		ret = old->next;
		HX_STACK_LINE(485)
		pre->next = ret;
		HX_STACK_LINE(486)
		if (((ret == null()))){
			HX_STACK_LINE(486)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(488)
	old->_inuse = false;
	HX_STACK_LINE(491)
	{
	}
	HX_STACK_LINE(492)
	this->modified = true;
	HX_STACK_LINE(493)
	(this->length)--;
	HX_STACK_LINE(494)
	this->pushmod = true;
	HX_STACK_LINE(495)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_erase,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::erase( ::zpp_nape::geom::ZPP_Vec2 pre){
	HX_STACK_PUSH("ZPP_Vec2::erase","zpp_nape/geom/Vec2.hx",463);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &pre,::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",463);
			{
				HX_STACK_LINE(463)
				{
				}
				HX_STACK_LINE(463)
				::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(463)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(463)
				if (((pre == null()))){
					HX_STACK_LINE(463)
					old = __this->next;
					HX_STACK_LINE(463)
					ret = old->next;
					HX_STACK_LINE(463)
					__this->next = ret;
					HX_STACK_LINE(463)
					if (((__this->next == null()))){
						HX_STACK_LINE(463)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(463)
					old = pre->next;
					HX_STACK_LINE(463)
					ret = old->next;
					HX_STACK_LINE(463)
					pre->next = ret;
					HX_STACK_LINE(463)
					if (((ret == null()))){
						HX_STACK_LINE(463)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(463)
				old->_inuse = false;
				HX_STACK_LINE(463)
				{
				}
				HX_STACK_LINE(463)
				__this->modified = true;
				HX_STACK_LINE(463)
				(__this->length)--;
				HX_STACK_LINE(463)
				__this->pushmod = true;
				HX_STACK_LINE(463)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(463)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,erase,return )

bool ZPP_Vec2_obj::inlined_try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::inlined_try_remove","zpp_nape/geom/Vec2.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(441)
	{
	}
	HX_STACK_LINE(449)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(450)
	::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(451)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(452)
	while(((cur != null()))){
		HX_STACK_LINE(453)
		if (((cur == obj))){
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				{
				}
				HX_STACK_LINE(454)
				::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(454)
				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(454)
				if (((pre == null()))){
					HX_STACK_LINE(454)
					old = this->next;
					HX_STACK_LINE(454)
					ret1 = old->next;
					HX_STACK_LINE(454)
					this->next = ret1;
					HX_STACK_LINE(454)
					if (((this->next == null()))){
						HX_STACK_LINE(454)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(454)
					old = pre->next;
					HX_STACK_LINE(454)
					ret1 = old->next;
					HX_STACK_LINE(454)
					pre->next = ret1;
					HX_STACK_LINE(454)
					if (((ret1 == null()))){
						HX_STACK_LINE(454)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(454)
				old->_inuse = false;
				HX_STACK_LINE(454)
				{
				}
				HX_STACK_LINE(454)
				this->modified = true;
				HX_STACK_LINE(454)
				(this->length)--;
				HX_STACK_LINE(454)
				this->pushmod = true;
				HX_STACK_LINE(454)
				ret1;
			}
			HX_STACK_LINE(455)
			ret = true;
			HX_STACK_LINE(456)
			break;
		}
		HX_STACK_LINE(458)
		pre = cur;
		HX_STACK_LINE(459)
		cur = cur->next;
	}
	HX_STACK_LINE(461)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_try_remove,return )

Void ZPP_Vec2_obj::inlined_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_remove","zpp_nape/geom/Vec2.hx",427);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(428)
		{
		}
		HX_STACK_LINE(436)
		{
			HX_STACK_LINE(436)
			{
			}
			HX_STACK_LINE(436)
			::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(436)
			::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(436)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(436)
			while(((cur != null()))){
				HX_STACK_LINE(436)
				if (((cur == obj))){
					HX_STACK_LINE(436)
					{
						HX_STACK_LINE(436)
						{
						}
						HX_STACK_LINE(436)
						::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(436)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(436)
						if (((pre == null()))){
							HX_STACK_LINE(436)
							old = this->next;
							HX_STACK_LINE(436)
							ret1 = old->next;
							HX_STACK_LINE(436)
							this->next = ret1;
							HX_STACK_LINE(436)
							if (((this->next == null()))){
								HX_STACK_LINE(436)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(436)
							old = pre->next;
							HX_STACK_LINE(436)
							ret1 = old->next;
							HX_STACK_LINE(436)
							pre->next = ret1;
							HX_STACK_LINE(436)
							if (((ret1 == null()))){
								HX_STACK_LINE(436)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(436)
						old->_inuse = false;
						HX_STACK_LINE(436)
						{
						}
						HX_STACK_LINE(436)
						this->modified = true;
						HX_STACK_LINE(436)
						(this->length)--;
						HX_STACK_LINE(436)
						this->pushmod = true;
						HX_STACK_LINE(436)
						ret1;
					}
					HX_STACK_LINE(436)
					ret = true;
					HX_STACK_LINE(436)
					break;
				}
				HX_STACK_LINE(436)
				pre = cur;
				HX_STACK_LINE(436)
				cur = cur->next;
			}
			HX_STACK_LINE(436)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_remove,(void))

bool ZPP_Vec2_obj::try_remove( ::zpp_nape::geom::ZPP_Vec2 obj){
	HX_STACK_PUSH("ZPP_Vec2::try_remove","zpp_nape/geom/Vec2.hx",402);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(403)
	{
	}
	HX_STACK_LINE(411)
	::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(412)
	::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(413)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(414)
	while(((cur != null()))){
		HX_STACK_LINE(415)
		if (((cur == obj))){
			HX_STACK_LINE(416)
			this->erase(pre);
			HX_STACK_LINE(417)
			ret = true;
			HX_STACK_LINE(418)
			break;
		}
		HX_STACK_LINE(420)
		pre = cur;
		HX_STACK_LINE(421)
		cur = cur->next;
	}
	HX_STACK_LINE(423)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,try_remove,return )

Void ZPP_Vec2_obj::remove( ::zpp_nape::geom::ZPP_Vec2 obj){
{
		HX_STACK_PUSH("ZPP_Vec2::remove","zpp_nape/geom/Vec2.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(392)
		{
		}
		HX_STACK_LINE(400)
		{
			HX_STACK_LINE(400)
			{
			}
			HX_STACK_LINE(400)
			::zpp_nape::geom::ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(400)
			::zpp_nape::geom::ZPP_Vec2 cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(400)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(400)
			while(((cur != null()))){
				HX_STACK_LINE(400)
				if (((cur == obj))){
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(400)
						{
						}
						HX_STACK_LINE(400)
						::zpp_nape::geom::ZPP_Vec2 old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(400)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(400)
						if (((pre == null()))){
							HX_STACK_LINE(400)
							old = this->next;
							HX_STACK_LINE(400)
							ret1 = old->next;
							HX_STACK_LINE(400)
							this->next = ret1;
							HX_STACK_LINE(400)
							if (((this->next == null()))){
								HX_STACK_LINE(400)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(400)
							old = pre->next;
							HX_STACK_LINE(400)
							ret1 = old->next;
							HX_STACK_LINE(400)
							pre->next = ret1;
							HX_STACK_LINE(400)
							if (((ret1 == null()))){
								HX_STACK_LINE(400)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(400)
						old->_inuse = false;
						HX_STACK_LINE(400)
						{
						}
						HX_STACK_LINE(400)
						this->modified = true;
						HX_STACK_LINE(400)
						(this->length)--;
						HX_STACK_LINE(400)
						this->pushmod = true;
						HX_STACK_LINE(400)
						ret1;
					}
					HX_STACK_LINE(400)
					ret = true;
					HX_STACK_LINE(400)
					break;
				}
				HX_STACK_LINE(400)
				pre = cur;
				HX_STACK_LINE(400)
				cur = cur->next;
			}
			HX_STACK_LINE(400)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,remove,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Vec2::inlined_pop_unsafe","zpp_nape/geom/Vec2.hx",378);
	HX_STACK_THIS(this);
	HX_STACK_LINE(379)
	{
	}
	HX_STACK_LINE(387)
	::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(388)
	this->pop();
	HX_STACK_LINE(389)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop_unsafe,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Vec2::pop_unsafe","zpp_nape/geom/Vec2.hx",376);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",376);
			{
				HX_STACK_LINE(376)
				{
				}
				HX_STACK_LINE(376)
				::zpp_nape::geom::ZPP_Vec2 ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(376)
				__this->pop();
				HX_STACK_LINE(376)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(376)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop_unsafe,return )

Void ZPP_Vec2_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_Vec2::inlined_pop","zpp_nape/geom/Vec2.hx",357);
		HX_STACK_THIS(this);
		HX_STACK_LINE(358)
		{
		}
		HX_STACK_LINE(366)
		::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(367)
		this->next = ret->next;
		HX_STACK_LINE(368)
		ret->_inuse = false;
		HX_STACK_LINE(371)
		{
		}
		HX_STACK_LINE(372)
		if (((this->next == null()))){
			HX_STACK_LINE(372)
			this->pushmod = true;
		}
		HX_STACK_LINE(373)
		this->modified = true;
		HX_STACK_LINE(374)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,inlined_pop,(void))

Void ZPP_Vec2_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_Vec2::pop","zpp_nape/geom/Vec2.hx",355);
		HX_STACK_THIS(this);
		HX_STACK_LINE(355)
		{
		}
		HX_STACK_LINE(355)
		::zpp_nape::geom::ZPP_Vec2 ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(355)
		this->next = ret->next;
		HX_STACK_LINE(355)
		ret->_inuse = false;
		HX_STACK_LINE(355)
		{
		}
		HX_STACK_LINE(355)
		if (((this->next == null()))){
			HX_STACK_LINE(355)
			this->pushmod = true;
		}
		HX_STACK_LINE(355)
		this->modified = true;
		HX_STACK_LINE(355)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,pop,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::inlined_insert","zpp_nape/geom/Vec2.hx",330);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(331)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",339);
			{
				HX_STACK_LINE(340)
				o->_inuse = true;
				HX_STACK_LINE(341)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(339)
	::zpp_nape::geom::ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(343)
	if (((cur == null()))){
		HX_STACK_LINE(344)
		temp->next = this->next;
		HX_STACK_LINE(345)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(348)
		temp->next = cur->next;
		HX_STACK_LINE(349)
		cur->next = temp;
	}
	HX_STACK_LINE(351)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(352)
	(this->length)++;
	HX_STACK_LINE(353)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,inlined_insert,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::insert( ::zpp_nape::geom::ZPP_Vec2 cur,::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::insert","zpp_nape/geom/Vec2.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2_obj *__this,::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::geom::ZPP_Vec2 &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",328);
			{
				HX_STACK_LINE(328)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",328);
						{
							HX_STACK_LINE(328)
							o->_inuse = true;
							HX_STACK_LINE(328)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(328)
				::zpp_nape::geom::ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(328)
				if (((cur == null()))){
					HX_STACK_LINE(328)
					temp->next = __this->next;
					HX_STACK_LINE(328)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(328)
					temp->next = cur->next;
					HX_STACK_LINE(328)
					cur->next = temp;
				}
				HX_STACK_LINE(328)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(328)
				(__this->length)++;
				HX_STACK_LINE(328)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(328)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Vec2_obj,insert,return )

Void ZPP_Vec2_obj::addAll( ::zpp_nape::geom::ZPP_Vec2 x){
{
		HX_STACK_PUSH("ZPP_Vec2::addAll","zpp_nape/geom/Vec2.hx",310);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(311)
		{
		}
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(320)
			::zpp_nape::geom::ZPP_Vec2 cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(321)
			while(((cx_ite != null()))){
				HX_STACK_LINE(322)
				::zpp_nape::geom::ZPP_Vec2 i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(323)
				this->add(i);
				HX_STACK_LINE(324)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,addAll,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::inlined_add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::inlined_add","zpp_nape/geom/Vec2.hx",291);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(292)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",300);
			{
				HX_STACK_LINE(301)
				o->_inuse = true;
				HX_STACK_LINE(302)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(300)
	::zpp_nape::geom::ZPP_Vec2 temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(304)
	temp->next = this->next;
	HX_STACK_LINE(305)
	this->next = temp;
	HX_STACK_LINE(306)
	this->modified = true;
	HX_STACK_LINE(307)
	(this->length)++;
	HX_STACK_LINE(308)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,inlined_add,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::add( ::zpp_nape::geom::ZPP_Vec2 o){
	HX_STACK_PUSH("ZPP_Vec2::add","zpp_nape/geom/Vec2.hx",289);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o,::zpp_nape::geom::ZPP_Vec2_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",289);
			{
				HX_STACK_LINE(289)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::geom::ZPP_Vec2 Block( ::zpp_nape::geom::ZPP_Vec2 &o){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/Vec2.hx",289);
						{
							HX_STACK_LINE(289)
							o->_inuse = true;
							HX_STACK_LINE(289)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(289)
				::zpp_nape::geom::ZPP_Vec2 temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(289)
				temp->next = __this->next;
				HX_STACK_LINE(289)
				__this->next = temp;
				HX_STACK_LINE(289)
				__this->modified = true;
				HX_STACK_LINE(289)
				(__this->length)++;
				HX_STACK_LINE(289)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(289)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,add,return )

Void ZPP_Vec2_obj::setbegin( ::zpp_nape::geom::ZPP_Vec2 i){
{
		HX_STACK_PUSH("ZPP_Vec2::setbegin","zpp_nape/geom/Vec2.hx",284);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(285)
		this->next = i;
		HX_STACK_LINE(286)
		this->modified = true;
		HX_STACK_LINE(287)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Vec2_obj,setbegin,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::begin( ){
	HX_STACK_PUSH("ZPP_Vec2::begin","zpp_nape/geom/Vec2.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,begin,return )

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::elem( ){
	HX_STACK_PUSH("ZPP_Vec2::elem","zpp_nape/geom/Vec2.hx",276);
	HX_STACK_THIS(this);
	HX_STACK_LINE(276)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,elem,return )

Void ZPP_Vec2_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Vec2::alloc","zpp_nape/geom/Vec2.hx",270);
		HX_STACK_THIS(this);
		HX_STACK_LINE(270)
		this->weak = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,alloc,(void))

Void ZPP_Vec2_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Vec2::free","zpp_nape/geom/Vec2.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_LINE(260)
		if (((this->outer != null()))){
			HX_STACK_LINE(261)
			this->outer->zpp_inner = null();
			HX_STACK_LINE(262)
			this->outer = null();
		}
		HX_STACK_LINE(264)
		this->_isimmutable = null();
		HX_STACK_LINE(265)
		this->_validate = null();
		HX_STACK_LINE(266)
		this->_invalidate = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,free,(void))

::nape::geom::Vec2 ZPP_Vec2_obj::wrapper( ){
	HX_STACK_PUSH("ZPP_Vec2::wrapper","zpp_nape/geom/Vec2.hx",208);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	if (((this->outer == null()))){
		HX_STACK_LINE(210)
		this->outer = ::nape::geom::Vec2_obj::__new(null(),null());
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(212)
			::zpp_nape::geom::ZPP_Vec2 o = this->outer->zpp_inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(213)
			{
			}
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				if (((o->outer != null()))){
					HX_STACK_LINE(221)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(221)
					o->outer = null();
				}
				HX_STACK_LINE(221)
				o->_isimmutable = null();
				HX_STACK_LINE(221)
				o->_validate = null();
				HX_STACK_LINE(221)
				o->_invalidate = null();
			}
			HX_STACK_LINE(222)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(223)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
		HX_STACK_LINE(228)
		this->outer->zpp_inner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(230)
	return this->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,wrapper,return )

Void ZPP_Vec2_obj::immutable( ){
{
		HX_STACK_PUSH("ZPP_Vec2::immutable","zpp_nape/geom/Vec2.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_LINE(197)
		if ((this->_immutable)){
			HX_STACK_LINE(197)
			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
		}
		HX_STACK_LINE(200)
		if (((this->_isimmutable_dyn() != null()))){
			HX_STACK_LINE(200)
			this->_isimmutable();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,immutable,(void))

Void ZPP_Vec2_obj::invalidate( ){
{
		HX_STACK_PUSH("ZPP_Vec2::invalidate","zpp_nape/geom/Vec2.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_LINE(186)
		if (((this->_invalidate_dyn() != null()))){
			HX_STACK_LINE(187)
			this->_invalidate(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,invalidate,(void))

Void ZPP_Vec2_obj::validate( ){
{
		HX_STACK_PUSH("ZPP_Vec2::validate","zpp_nape/geom/Vec2.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_LINE(179)
		if (((this->_validate_dyn() != null()))){
			HX_STACK_LINE(180)
			this->_validate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Vec2_obj,validate,(void))

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::zpp_pool;

::zpp_nape::geom::ZPP_Vec2 ZPP_Vec2_obj::get( Float x,Float y,hx::Null< bool >  __o_immutable){
bool immutable = __o_immutable.Default(false);
	HX_STACK_PUSH("ZPP_Vec2::get","zpp_nape/geom/Vec2.hx",596);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(immutable,"immutable");
{
		HX_STACK_LINE(597)
		::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(599)
			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
				HX_STACK_LINE(599)
				ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
			}
			else{
				HX_STACK_LINE(606)
				ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(607)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
				HX_STACK_LINE(608)
				ret->next = null();
			}
			HX_STACK_LINE(613)
			ret->weak = false;
		}
		HX_STACK_LINE(615)
		ret->_immutable = immutable;
		HX_STACK_LINE(616)
		{
			HX_STACK_LINE(617)
			ret->x = x;
			HX_STACK_LINE(618)
			ret->y = y;
			HX_STACK_LINE(619)
			{
			}
			HX_STACK_LINE(627)
			{
			}
		}
		HX_STACK_LINE(636)
		return ret;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_Vec2_obj,get,return )


ZPP_Vec2_obj::ZPP_Vec2_obj()
{
}

void ZPP_Vec2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Vec2);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(weak,"weak");
	HX_MARK_MEMBER_NAME(outer,"outer");
	HX_MARK_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_MARK_MEMBER_NAME(_immutable,"_immutable");
	HX_MARK_MEMBER_NAME(_validate,"_validate");
	HX_MARK_MEMBER_NAME(_invalidate,"_invalidate");
	HX_MARK_END_CLASS();
}

void ZPP_Vec2_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(weak,"weak");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	HX_VISIT_MEMBER_NAME(_isimmutable,"_isimmutable");
	HX_VISIT_MEMBER_NAME(_immutable,"_immutable");
	HX_VISIT_MEMBER_NAME(_validate,"_validate");
	HX_VISIT_MEMBER_NAME(_invalidate,"_invalidate");
}

Dynamic ZPP_Vec2_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"weak") ) { return weak; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		if (HX_FIELD_EQ(inName,"wrapper") ) { return wrapper_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"validate") ) { return validate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"immutable") ) { return immutable_dyn(); }
		if (HX_FIELD_EQ(inName,"_validate") ) { return _validate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"try_remove") ) { return try_remove_dyn(); }
		if (HX_FIELD_EQ(inName,"pop_unsafe") ) { return pop_unsafe_dyn(); }
		if (HX_FIELD_EQ(inName,"_immutable") ) { return _immutable; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterator_at") ) { return iterator_at_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_has") ) { return inlined_has_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_pop") ) { return inlined_pop_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_add") ) { return inlined_add_dyn(); }
		if (HX_FIELD_EQ(inName,"_invalidate") ) { return _invalidate; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { return _isimmutable; }
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

Dynamic ZPP_Vec2_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weak") ) { weak=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::geom::ZPP_Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_validate") ) { _validate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_immutable") ) { _immutable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_invalidate") ) { _invalidate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isimmutable") ) { _isimmutable=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Vec2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("weak"));
	outFields->push(HX_CSTRING("outer"));
	outFields->push(HX_CSTRING("_immutable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	HX_CSTRING("get"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("copy"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
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
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("weak"),
	HX_CSTRING("wrapper"),
	HX_CSTRING("outer"),
	HX_CSTRING("immutable"),
	HX_CSTRING("_isimmutable"),
	HX_CSTRING("_immutable"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("validate"),
	HX_CSTRING("_validate"),
	HX_CSTRING("_invalidate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Vec2_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Vec2_obj::__mClass;

void ZPP_Vec2_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_Vec2"), hx::TCanCast< ZPP_Vec2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Vec2_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace geom
