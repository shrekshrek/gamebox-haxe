#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_space_ZPP_Island
#include <zpp_nape/space/ZPP_Island.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Component
#include <zpp_nape/util/ZNPList_ZPP_Component.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_Island_obj::__construct()
{
HX_STACK_PUSH("ZPP_Island::new","zpp_nape/space/Space.hx",174);
{
	HX_STACK_LINE(496)
	this->waket = (int)0;
	HX_STACK_LINE(495)
	this->sleep = false;
	HX_STACK_LINE(494)
	this->comps = null();
	HX_STACK_LINE(183)
	this->length = (int)0;
	HX_STACK_LINE(182)
	this->pushmod = false;
	HX_STACK_LINE(181)
	this->modified = false;
	HX_STACK_LINE(180)
	this->_inuse = false;
	HX_STACK_LINE(175)
	this->next = null();
	HX_STACK_LINE(538)
	this->comps = ::zpp_nape::util::ZNPList_ZPP_Component_obj::__new();
}
;
	return null();
}

ZPP_Island_obj::~ZPP_Island_obj() { }

Dynamic ZPP_Island_obj::__CreateEmpty() { return  new ZPP_Island_obj; }
hx::ObjectPtr< ZPP_Island_obj > ZPP_Island_obj::__new()
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Island_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Island_obj > result = new ZPP_Island_obj();
	result->__construct();
	return result;}

Void ZPP_Island_obj::alloc( ){
{
		HX_STACK_PUSH("ZPP_Island::alloc","zpp_nape/space/Space.hx",535);
		HX_STACK_THIS(this);
		HX_STACK_LINE(535)
		this->waket = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,alloc,(void))

Void ZPP_Island_obj::free( ){
{
		HX_STACK_PUSH("ZPP_Island::free","zpp_nape/space/Space.hx",523);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,free,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::at( int ind){
	HX_STACK_PUSH("ZPP_Island::at","zpp_nape/space/Space.hx",482);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(483)
	{
	}
	HX_STACK_LINE(491)
	::zpp_nape::space::ZPP_Island it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(492)
	return (  (((it != null()))) ? ::zpp_nape::space::ZPP_Island(it) : ::zpp_nape::space::ZPP_Island(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_Island::iterator_at","zpp_nape/space/Space.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(470)
	{
	}
	HX_STACK_LINE(478)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(479)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(479)
		ret = ret->next;
	}
	HX_STACK_LINE(480)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,iterator_at,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::back( ){
	HX_STACK_PUSH("ZPP_Island::back","zpp_nape/space/Space.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_LINE(461)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(462)
	::zpp_nape::space::ZPP_Island cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(463)
	while(((cur != null()))){
		HX_STACK_LINE(464)
		ret = cur;
		HX_STACK_LINE(465)
		cur = cur->next;
	}
	HX_STACK_LINE(467)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,back,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::front( ){
	HX_STACK_PUSH("ZPP_Island::front","zpp_nape/space/Space.hx",460);
	HX_STACK_THIS(this);
	HX_STACK_LINE(460)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,front,return )

bool ZPP_Island_obj::inlined_has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::inlined_has","zpp_nape/space/Space.hx",430);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(431)
	{
	}
	HX_STACK_LINE(439)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(440)
	{
		HX_STACK_LINE(441)
		ret = false;
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(443)
			::zpp_nape::space::ZPP_Island cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(444)
			while(((cx_ite != null()))){
				HX_STACK_LINE(445)
				::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(446)
				if (((npite == obj))){
					HX_STACK_LINE(448)
					ret = true;
					HX_STACK_LINE(449)
					break;
				}
				HX_STACK_LINE(452)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(456)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_has,return )

bool ZPP_Island_obj::has( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::has","zpp_nape/space/Space.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",428);
			{
				HX_STACK_LINE(428)
				{
				}
				HX_STACK_LINE(428)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					ret = false;
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::space::ZPP_Island cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(428)
						while(((cx_ite != null()))){
							HX_STACK_LINE(428)
							::zpp_nape::space::ZPP_Island npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(428)
							if (((npite == obj))){
								HX_STACK_LINE(428)
								ret = true;
								HX_STACK_LINE(428)
								break;
							}
							HX_STACK_LINE(428)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(428)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(428)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,has,return )

int ZPP_Island_obj::size( ){
	HX_STACK_PUSH("ZPP_Island::size","zpp_nape/space/Space.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_LINE(428)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,size,return )

bool ZPP_Island_obj::empty( ){
	HX_STACK_PUSH("ZPP_Island::empty","zpp_nape/space/Space.hx",426);
	HX_STACK_THIS(this);
	HX_STACK_LINE(426)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,empty,return )

Void ZPP_Island_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_Island::reverse","zpp_nape/space/Space.hx",411);
		HX_STACK_THIS(this);
		HX_STACK_LINE(412)
		::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(413)
		::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(414)
		while(((cur != null()))){
			HX_STACK_LINE(415)
			::zpp_nape::space::ZPP_Island nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(416)
			cur->next = pre;
			HX_STACK_LINE(417)
			this->next = cur;
			HX_STACK_LINE(418)
			pre = cur;
			HX_STACK_LINE(419)
			cur = nx;
		}
		HX_STACK_LINE(421)
		this->modified = true;
		HX_STACK_LINE(422)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,reverse,(void))

Void ZPP_Island_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_Island::inlined_clear","zpp_nape/space/Space.hx",405);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_clear,(void))

Void ZPP_Island_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Island::clear","zpp_nape/space/Space.hx",403);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,clear,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::splice( ::zpp_nape::space::ZPP_Island pre,int n){
	HX_STACK_PUSH("ZPP_Island::splice","zpp_nape/space/Space.hx",399);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(400)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(400)
		this->erase(pre);
	}
	HX_STACK_LINE(401)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,splice,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_PUSH("ZPP_Island::inlined_erase","zpp_nape/space/Space.hx",367);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(368)
	{
	}
	HX_STACK_LINE(376)
	::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(377)
	::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(378)
	if (((pre == null()))){
		HX_STACK_LINE(379)
		old = this->next;
		HX_STACK_LINE(380)
		ret = old->next;
		HX_STACK_LINE(381)
		this->next = ret;
		HX_STACK_LINE(382)
		if (((this->next == null()))){
			HX_STACK_LINE(382)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(385)
		old = pre->next;
		HX_STACK_LINE(386)
		ret = old->next;
		HX_STACK_LINE(387)
		pre->next = ret;
		HX_STACK_LINE(388)
		if (((ret == null()))){
			HX_STACK_LINE(388)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(390)
	old->_inuse = false;
	HX_STACK_LINE(393)
	{
	}
	HX_STACK_LINE(394)
	this->modified = true;
	HX_STACK_LINE(395)
	(this->length)--;
	HX_STACK_LINE(396)
	this->pushmod = true;
	HX_STACK_LINE(397)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_erase,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::erase( ::zpp_nape::space::ZPP_Island pre){
	HX_STACK_PUSH("ZPP_Island::erase","zpp_nape/space/Space.hx",365);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &pre,::zpp_nape::space::ZPP_Island_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",365);
			{
				HX_STACK_LINE(365)
				{
				}
				HX_STACK_LINE(365)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(365)
				::zpp_nape::space::ZPP_Island ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(365)
				if (((pre == null()))){
					HX_STACK_LINE(365)
					old = __this->next;
					HX_STACK_LINE(365)
					ret = old->next;
					HX_STACK_LINE(365)
					__this->next = ret;
					HX_STACK_LINE(365)
					if (((__this->next == null()))){
						HX_STACK_LINE(365)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(365)
					old = pre->next;
					HX_STACK_LINE(365)
					ret = old->next;
					HX_STACK_LINE(365)
					pre->next = ret;
					HX_STACK_LINE(365)
					if (((ret == null()))){
						HX_STACK_LINE(365)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(365)
				old->_inuse = false;
				HX_STACK_LINE(365)
				{
				}
				HX_STACK_LINE(365)
				__this->modified = true;
				HX_STACK_LINE(365)
				(__this->length)--;
				HX_STACK_LINE(365)
				__this->pushmod = true;
				HX_STACK_LINE(365)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(365)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,erase,return )

bool ZPP_Island_obj::inlined_try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::inlined_try_remove","zpp_nape/space/Space.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(343)
	{
	}
	HX_STACK_LINE(351)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(352)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(353)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(354)
	while(((cur != null()))){
		HX_STACK_LINE(355)
		if (((cur == obj))){
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(356)
				{
				}
				HX_STACK_LINE(356)
				::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(356)
				::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(356)
				if (((pre == null()))){
					HX_STACK_LINE(356)
					old = this->next;
					HX_STACK_LINE(356)
					ret1 = old->next;
					HX_STACK_LINE(356)
					this->next = ret1;
					HX_STACK_LINE(356)
					if (((this->next == null()))){
						HX_STACK_LINE(356)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(356)
					old = pre->next;
					HX_STACK_LINE(356)
					ret1 = old->next;
					HX_STACK_LINE(356)
					pre->next = ret1;
					HX_STACK_LINE(356)
					if (((ret1 == null()))){
						HX_STACK_LINE(356)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(356)
				old->_inuse = false;
				HX_STACK_LINE(356)
				{
				}
				HX_STACK_LINE(356)
				this->modified = true;
				HX_STACK_LINE(356)
				(this->length)--;
				HX_STACK_LINE(356)
				this->pushmod = true;
				HX_STACK_LINE(356)
				ret1;
			}
			HX_STACK_LINE(357)
			ret = true;
			HX_STACK_LINE(358)
			break;
		}
		HX_STACK_LINE(360)
		pre = cur;
		HX_STACK_LINE(361)
		cur = cur->next;
	}
	HX_STACK_LINE(363)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_try_remove,return )

Void ZPP_Island_obj::inlined_remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_PUSH("ZPP_Island::inlined_remove","zpp_nape/space/Space.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(330)
		{
		}
		HX_STACK_LINE(338)
		{
			HX_STACK_LINE(338)
			{
			}
			HX_STACK_LINE(338)
			::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(338)
			::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(338)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(338)
			while(((cur != null()))){
				HX_STACK_LINE(338)
				if (((cur == obj))){
					HX_STACK_LINE(338)
					{
						HX_STACK_LINE(338)
						{
						}
						HX_STACK_LINE(338)
						::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(338)
						::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(338)
						if (((pre == null()))){
							HX_STACK_LINE(338)
							old = this->next;
							HX_STACK_LINE(338)
							ret1 = old->next;
							HX_STACK_LINE(338)
							this->next = ret1;
							HX_STACK_LINE(338)
							if (((this->next == null()))){
								HX_STACK_LINE(338)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(338)
							old = pre->next;
							HX_STACK_LINE(338)
							ret1 = old->next;
							HX_STACK_LINE(338)
							pre->next = ret1;
							HX_STACK_LINE(338)
							if (((ret1 == null()))){
								HX_STACK_LINE(338)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(338)
						old->_inuse = false;
						HX_STACK_LINE(338)
						{
						}
						HX_STACK_LINE(338)
						this->modified = true;
						HX_STACK_LINE(338)
						(this->length)--;
						HX_STACK_LINE(338)
						this->pushmod = true;
						HX_STACK_LINE(338)
						ret1;
					}
					HX_STACK_LINE(338)
					ret = true;
					HX_STACK_LINE(338)
					break;
				}
				HX_STACK_LINE(338)
				pre = cur;
				HX_STACK_LINE(338)
				cur = cur->next;
			}
			HX_STACK_LINE(338)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_remove,(void))

bool ZPP_Island_obj::try_remove( ::zpp_nape::space::ZPP_Island obj){
	HX_STACK_PUSH("ZPP_Island::try_remove","zpp_nape/space/Space.hx",304);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(305)
	{
	}
	HX_STACK_LINE(313)
	::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(314)
	::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(315)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(316)
	while(((cur != null()))){
		HX_STACK_LINE(317)
		if (((cur == obj))){
			HX_STACK_LINE(318)
			this->erase(pre);
			HX_STACK_LINE(319)
			ret = true;
			HX_STACK_LINE(320)
			break;
		}
		HX_STACK_LINE(322)
		pre = cur;
		HX_STACK_LINE(323)
		cur = cur->next;
	}
	HX_STACK_LINE(325)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,try_remove,return )

Void ZPP_Island_obj::remove( ::zpp_nape::space::ZPP_Island obj){
{
		HX_STACK_PUSH("ZPP_Island::remove","zpp_nape/space/Space.hx",293);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(294)
		{
		}
		HX_STACK_LINE(302)
		{
			HX_STACK_LINE(302)
			{
			}
			HX_STACK_LINE(302)
			::zpp_nape::space::ZPP_Island pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(302)
			::zpp_nape::space::ZPP_Island cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(302)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(302)
			while(((cur != null()))){
				HX_STACK_LINE(302)
				if (((cur == obj))){
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						{
						}
						HX_STACK_LINE(302)
						::zpp_nape::space::ZPP_Island old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(302)
						::zpp_nape::space::ZPP_Island ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(302)
						if (((pre == null()))){
							HX_STACK_LINE(302)
							old = this->next;
							HX_STACK_LINE(302)
							ret1 = old->next;
							HX_STACK_LINE(302)
							this->next = ret1;
							HX_STACK_LINE(302)
							if (((this->next == null()))){
								HX_STACK_LINE(302)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(302)
							old = pre->next;
							HX_STACK_LINE(302)
							ret1 = old->next;
							HX_STACK_LINE(302)
							pre->next = ret1;
							HX_STACK_LINE(302)
							if (((ret1 == null()))){
								HX_STACK_LINE(302)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(302)
						old->_inuse = false;
						HX_STACK_LINE(302)
						{
						}
						HX_STACK_LINE(302)
						this->modified = true;
						HX_STACK_LINE(302)
						(this->length)--;
						HX_STACK_LINE(302)
						this->pushmod = true;
						HX_STACK_LINE(302)
						ret1;
					}
					HX_STACK_LINE(302)
					ret = true;
					HX_STACK_LINE(302)
					break;
				}
				HX_STACK_LINE(302)
				pre = cur;
				HX_STACK_LINE(302)
				cur = cur->next;
			}
			HX_STACK_LINE(302)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,remove,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Island::inlined_pop_unsafe","zpp_nape/space/Space.hx",280);
	HX_STACK_THIS(this);
	HX_STACK_LINE(281)
	{
	}
	HX_STACK_LINE(289)
	::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(290)
	this->pop();
	HX_STACK_LINE(291)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop_unsafe,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_Island::pop_unsafe","zpp_nape/space/Space.hx",278);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",278);
			{
				HX_STACK_LINE(278)
				{
				}
				HX_STACK_LINE(278)
				::zpp_nape::space::ZPP_Island ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(278)
				__this->pop();
				HX_STACK_LINE(278)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(278)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop_unsafe,return )

Void ZPP_Island_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_Island::inlined_pop","zpp_nape/space/Space.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_LINE(260)
		{
		}
		HX_STACK_LINE(268)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(269)
		this->next = ret->next;
		HX_STACK_LINE(270)
		ret->_inuse = false;
		HX_STACK_LINE(273)
		{
		}
		HX_STACK_LINE(274)
		if (((this->next == null()))){
			HX_STACK_LINE(274)
			this->pushmod = true;
		}
		HX_STACK_LINE(275)
		this->modified = true;
		HX_STACK_LINE(276)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,inlined_pop,(void))

Void ZPP_Island_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_Island::pop","zpp_nape/space/Space.hx",257);
		HX_STACK_THIS(this);
		HX_STACK_LINE(257)
		{
		}
		HX_STACK_LINE(257)
		::zpp_nape::space::ZPP_Island ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(257)
		this->next = ret->next;
		HX_STACK_LINE(257)
		ret->_inuse = false;
		HX_STACK_LINE(257)
		{
		}
		HX_STACK_LINE(257)
		if (((this->next == null()))){
			HX_STACK_LINE(257)
			this->pushmod = true;
		}
		HX_STACK_LINE(257)
		this->modified = true;
		HX_STACK_LINE(257)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,pop,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::inlined_insert","zpp_nape/space/Space.hx",232);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(233)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",241);
			{
				HX_STACK_LINE(242)
				o->_inuse = true;
				HX_STACK_LINE(243)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(241)
	::zpp_nape::space::ZPP_Island temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(245)
	if (((cur == null()))){
		HX_STACK_LINE(246)
		temp->next = this->next;
		HX_STACK_LINE(247)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(250)
		temp->next = cur->next;
		HX_STACK_LINE(251)
		cur->next = temp;
	}
	HX_STACK_LINE(253)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(254)
	(this->length)++;
	HX_STACK_LINE(255)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,inlined_insert,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::insert( ::zpp_nape::space::ZPP_Island cur,::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::insert","zpp_nape/space/Space.hx",230);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island_obj *__this,::zpp_nape::space::ZPP_Island &o,::zpp_nape::space::ZPP_Island &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",230);
			{
				HX_STACK_LINE(230)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",230);
						{
							HX_STACK_LINE(230)
							o->_inuse = true;
							HX_STACK_LINE(230)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(230)
				::zpp_nape::space::ZPP_Island temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(230)
				if (((cur == null()))){
					HX_STACK_LINE(230)
					temp->next = __this->next;
					HX_STACK_LINE(230)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(230)
					temp->next = cur->next;
					HX_STACK_LINE(230)
					cur->next = temp;
				}
				HX_STACK_LINE(230)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(230)
				(__this->length)++;
				HX_STACK_LINE(230)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(230)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Island_obj,insert,return )

Void ZPP_Island_obj::addAll( ::zpp_nape::space::ZPP_Island x){
{
		HX_STACK_PUSH("ZPP_Island::addAll","zpp_nape/space/Space.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(213)
		{
		}
		HX_STACK_LINE(221)
		{
			HX_STACK_LINE(222)
			::zpp_nape::space::ZPP_Island cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(223)
			while(((cx_ite != null()))){
				HX_STACK_LINE(224)
				::zpp_nape::space::ZPP_Island i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(225)
				this->add(i);
				HX_STACK_LINE(226)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,addAll,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::inlined_add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::inlined_add","zpp_nape/space/Space.hx",193);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(194)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",202);
			{
				HX_STACK_LINE(203)
				o->_inuse = true;
				HX_STACK_LINE(204)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(202)
	::zpp_nape::space::ZPP_Island temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(206)
	temp->next = this->next;
	HX_STACK_LINE(207)
	this->next = temp;
	HX_STACK_LINE(208)
	this->modified = true;
	HX_STACK_LINE(209)
	(this->length)++;
	HX_STACK_LINE(210)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,inlined_add,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::add( ::zpp_nape::space::ZPP_Island o){
	HX_STACK_PUSH("ZPP_Island::add","zpp_nape/space/Space.hx",191);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o,::zpp_nape::space::ZPP_Island_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",191);
			{
				HX_STACK_LINE(191)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::space::ZPP_Island Block( ::zpp_nape::space::ZPP_Island &o){
						HX_STACK_PUSH("*::closure","zpp_nape/space/Space.hx",191);
						{
							HX_STACK_LINE(191)
							o->_inuse = true;
							HX_STACK_LINE(191)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(191)
				::zpp_nape::space::ZPP_Island temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(191)
				temp->next = __this->next;
				HX_STACK_LINE(191)
				__this->next = temp;
				HX_STACK_LINE(191)
				__this->modified = true;
				HX_STACK_LINE(191)
				(__this->length)++;
				HX_STACK_LINE(191)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(191)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,add,return )

Void ZPP_Island_obj::setbegin( ::zpp_nape::space::ZPP_Island i){
{
		HX_STACK_PUSH("ZPP_Island::setbegin","zpp_nape/space/Space.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(187)
		this->next = i;
		HX_STACK_LINE(188)
		this->modified = true;
		HX_STACK_LINE(189)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Island_obj,setbegin,(void))

::zpp_nape::space::ZPP_Island ZPP_Island_obj::begin( ){
	HX_STACK_PUSH("ZPP_Island::begin","zpp_nape/space/Space.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,begin,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::elem( ){
	HX_STACK_PUSH("ZPP_Island::elem","zpp_nape/space/Space.hx",178);
	HX_STACK_THIS(this);
	HX_STACK_LINE(178)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Island_obj,elem,return )

::zpp_nape::space::ZPP_Island ZPP_Island_obj::zpp_pool;


ZPP_Island_obj::ZPP_Island_obj()
{
}

void ZPP_Island_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Island);
	HX_MARK_MEMBER_NAME(waket,"waket");
	HX_MARK_MEMBER_NAME(sleep,"sleep");
	HX_MARK_MEMBER_NAME(comps,"comps");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void ZPP_Island_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(waket,"waket");
	HX_VISIT_MEMBER_NAME(sleep,"sleep");
	HX_VISIT_MEMBER_NAME(comps,"comps");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic ZPP_Island_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { return alloc_dyn(); }
		if (HX_FIELD_EQ(inName,"waket") ) { return waket; }
		if (HX_FIELD_EQ(inName,"sleep") ) { return sleep; }
		if (HX_FIELD_EQ(inName,"comps") ) { return comps; }
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
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { return zpp_pool; }
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

Dynamic ZPP_Island_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"waket") ) { waket=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sleep") ) { sleep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"comps") ) { comps=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Component >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zpp_pool") ) { zpp_pool=inValue.Cast< ::zpp_nape::space::ZPP_Island >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Island_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("waket"));
	outFields->push(HX_CSTRING("sleep"));
	outFields->push(HX_CSTRING("comps"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("zpp_pool"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("alloc"),
	HX_CSTRING("free"),
	HX_CSTRING("waket"),
	HX_CSTRING("sleep"),
	HX_CSTRING("comps"),
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
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Island_obj::zpp_pool,"zpp_pool");
};

Class ZPP_Island_obj::__mClass;

void ZPP_Island_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_Island"), hx::TCanCast< ZPP_Island_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Island_obj::__boot()
{
	zpp_pool= null();
}

} // end namespace zpp_nape
} // end namespace space
