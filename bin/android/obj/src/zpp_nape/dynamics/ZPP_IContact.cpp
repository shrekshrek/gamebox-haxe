#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_dynamics_ZPP_IContact
#include <zpp_nape/dynamics/ZPP_IContact.h>
#endif
namespace zpp_nape{
namespace dynamics{

Void ZPP_IContact_obj::__construct()
{
HX_STACK_PUSH("ZPP_IContact::new","zpp_nape/dynamics/Contact.hx",589);
{
	HX_STACK_LINE(613)
	this->length = (int)0;
	HX_STACK_LINE(612)
	this->pushmod = false;
	HX_STACK_LINE(611)
	this->modified = false;
	HX_STACK_LINE(610)
	this->_inuse = false;
	HX_STACK_LINE(605)
	this->next = null();
	HX_STACK_LINE(603)
	this->lr2y = 0.0;
	HX_STACK_LINE(602)
	this->lr2x = 0.0;
	HX_STACK_LINE(601)
	this->lr1y = 0.0;
	HX_STACK_LINE(600)
	this->lr1x = 0.0;
	HX_STACK_LINE(599)
	this->jtAcc = 0.0;
	HX_STACK_LINE(598)
	this->jnAcc = 0.0;
	HX_STACK_LINE(597)
	this->friction = 0.0;
	HX_STACK_LINE(596)
	this->bounce = 0.0;
	HX_STACK_LINE(595)
	this->tMass = 0.0;
	HX_STACK_LINE(594)
	this->nMass = 0.0;
	HX_STACK_LINE(593)
	this->r2y = 0.0;
	HX_STACK_LINE(592)
	this->r2x = 0.0;
	HX_STACK_LINE(591)
	this->r1y = 0.0;
	HX_STACK_LINE(590)
	this->r1x = 0.0;
}
;
	return null();
}

ZPP_IContact_obj::~ZPP_IContact_obj() { }

Dynamic ZPP_IContact_obj::__CreateEmpty() { return  new ZPP_IContact_obj; }
hx::ObjectPtr< ZPP_IContact_obj > ZPP_IContact_obj::__new()
{  hx::ObjectPtr< ZPP_IContact_obj > result = new ZPP_IContact_obj();
	result->__construct();
	return result;}

Dynamic ZPP_IContact_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_IContact_obj > result = new ZPP_IContact_obj();
	result->__construct();
	return result;}

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::at( int ind){
	HX_STACK_PUSH("ZPP_IContact::at","zpp_nape/dynamics/Contact.hx",912);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(913)
	{
	}
	HX_STACK_LINE(921)
	::zpp_nape::dynamics::ZPP_IContact it = this->iterator_at(ind);		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(922)
	return (  (((it != null()))) ? ::zpp_nape::dynamics::ZPP_IContact(it) : ::zpp_nape::dynamics::ZPP_IContact(null()) );
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,at,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::iterator_at( int ind){
	HX_STACK_PUSH("ZPP_IContact::iterator_at","zpp_nape/dynamics/Contact.hx",899);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ind,"ind");
	HX_STACK_LINE(900)
	{
	}
	HX_STACK_LINE(908)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(909)
	while(((bool(((ind)-- > (int)0)) && bool((ret != null()))))){
		HX_STACK_LINE(909)
		ret = ret->next;
	}
	HX_STACK_LINE(910)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,iterator_at,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::back( ){
	HX_STACK_PUSH("ZPP_IContact::back","zpp_nape/dynamics/Contact.hx",890);
	HX_STACK_THIS(this);
	HX_STACK_LINE(891)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(892)
	::zpp_nape::dynamics::ZPP_IContact cur = ret;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(893)
	while(((cur != null()))){
		HX_STACK_LINE(894)
		ret = cur;
		HX_STACK_LINE(895)
		cur = cur->next;
	}
	HX_STACK_LINE(897)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,back,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::front( ){
	HX_STACK_PUSH("ZPP_IContact::front","zpp_nape/dynamics/Contact.hx",890);
	HX_STACK_THIS(this);
	HX_STACK_LINE(890)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,front,return )

bool ZPP_IContact_obj::inlined_has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::inlined_has","zpp_nape/dynamics/Contact.hx",860);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(861)
	{
	}
	HX_STACK_LINE(869)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(870)
	{
		HX_STACK_LINE(871)
		ret = false;
		HX_STACK_LINE(872)
		{
			HX_STACK_LINE(873)
			::zpp_nape::dynamics::ZPP_IContact cx_ite = this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(874)
			while(((cx_ite != null()))){
				HX_STACK_LINE(875)
				::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
				HX_STACK_LINE(876)
				if (((npite == obj))){
					HX_STACK_LINE(878)
					ret = true;
					HX_STACK_LINE(879)
					break;
				}
				HX_STACK_LINE(882)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(886)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_has,return )

bool ZPP_IContact_obj::has( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::has","zpp_nape/dynamics/Contact.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	struct _Function_1_1{
		inline static bool Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &obj){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",858);
			{
				HX_STACK_LINE(858)
				{
				}
				HX_STACK_LINE(858)
				bool ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(858)
				{
					HX_STACK_LINE(858)
					ret = false;
					HX_STACK_LINE(858)
					{
						HX_STACK_LINE(858)
						::zpp_nape::dynamics::ZPP_IContact cx_ite = __this->next;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(858)
						while(((cx_ite != null()))){
							HX_STACK_LINE(858)
							::zpp_nape::dynamics::ZPP_IContact npite = cx_ite;		HX_STACK_VAR(npite,"npite");
							HX_STACK_LINE(858)
							if (((npite == obj))){
								HX_STACK_LINE(858)
								ret = true;
								HX_STACK_LINE(858)
								break;
							}
							HX_STACK_LINE(858)
							cx_ite = cx_ite->next;
						}
					}
				}
				HX_STACK_LINE(858)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(858)
	return _Function_1_1::Block(this,obj);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,has,return )

int ZPP_IContact_obj::size( ){
	HX_STACK_PUSH("ZPP_IContact::size","zpp_nape/dynamics/Contact.hx",858);
	HX_STACK_THIS(this);
	HX_STACK_LINE(858)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,size,return )

bool ZPP_IContact_obj::empty( ){
	HX_STACK_PUSH("ZPP_IContact::empty","zpp_nape/dynamics/Contact.hx",856);
	HX_STACK_THIS(this);
	HX_STACK_LINE(856)
	return (this->next == null());
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,empty,return )

Void ZPP_IContact_obj::reverse( ){
{
		HX_STACK_PUSH("ZPP_IContact::reverse","zpp_nape/dynamics/Contact.hx",841);
		HX_STACK_THIS(this);
		HX_STACK_LINE(842)
		::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(843)
		::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(844)
		while(((cur != null()))){
			HX_STACK_LINE(845)
			::zpp_nape::dynamics::ZPP_IContact nx = cur->next;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(846)
			cur->next = pre;
			HX_STACK_LINE(847)
			this->next = cur;
			HX_STACK_LINE(848)
			pre = cur;
			HX_STACK_LINE(849)
			cur = nx;
		}
		HX_STACK_LINE(851)
		this->modified = true;
		HX_STACK_LINE(852)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,reverse,(void))

Void ZPP_IContact_obj::inlined_clear( ){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_clear","zpp_nape/dynamics/Contact.hx",835);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_clear,(void))

Void ZPP_IContact_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_IContact::clear","zpp_nape/dynamics/Contact.hx",833);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,clear,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::splice( ::zpp_nape::dynamics::ZPP_IContact pre,int n){
	HX_STACK_PUSH("ZPP_IContact::splice","zpp_nape/dynamics/Contact.hx",829);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(830)
	while(((bool(((n)-- > (int)0)) && bool((pre->next != null()))))){
		HX_STACK_LINE(830)
		this->erase(pre);
	}
	HX_STACK_LINE(831)
	return pre->next;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,splice,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_PUSH("ZPP_IContact::inlined_erase","zpp_nape/dynamics/Contact.hx",797);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	HX_STACK_LINE(798)
	{
	}
	HX_STACK_LINE(806)
	::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(807)
	::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(808)
	if (((pre == null()))){
		HX_STACK_LINE(809)
		old = this->next;
		HX_STACK_LINE(810)
		ret = old->next;
		HX_STACK_LINE(811)
		this->next = ret;
		HX_STACK_LINE(812)
		if (((this->next == null()))){
			HX_STACK_LINE(812)
			this->pushmod = true;
		}
	}
	else{
		HX_STACK_LINE(815)
		old = pre->next;
		HX_STACK_LINE(816)
		ret = old->next;
		HX_STACK_LINE(817)
		pre->next = ret;
		HX_STACK_LINE(818)
		if (((ret == null()))){
			HX_STACK_LINE(818)
			this->pushmod = true;
		}
	}
	HX_STACK_LINE(820)
	old->_inuse = false;
	HX_STACK_LINE(823)
	{
	}
	HX_STACK_LINE(824)
	this->modified = true;
	HX_STACK_LINE(825)
	(this->length)--;
	HX_STACK_LINE(826)
	this->pushmod = true;
	HX_STACK_LINE(827)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_erase,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::erase( ::zpp_nape::dynamics::ZPP_IContact pre){
	HX_STACK_PUSH("ZPP_IContact::erase","zpp_nape/dynamics/Contact.hx",795);
	HX_STACK_THIS(this);
	HX_STACK_ARG(pre,"pre");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &pre,::zpp_nape::dynamics::ZPP_IContact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",795);
			{
				HX_STACK_LINE(795)
				{
				}
				HX_STACK_LINE(795)
				::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(795)
				::zpp_nape::dynamics::ZPP_IContact ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(795)
				if (((pre == null()))){
					HX_STACK_LINE(795)
					old = __this->next;
					HX_STACK_LINE(795)
					ret = old->next;
					HX_STACK_LINE(795)
					__this->next = ret;
					HX_STACK_LINE(795)
					if (((__this->next == null()))){
						HX_STACK_LINE(795)
						__this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(795)
					old = pre->next;
					HX_STACK_LINE(795)
					ret = old->next;
					HX_STACK_LINE(795)
					pre->next = ret;
					HX_STACK_LINE(795)
					if (((ret == null()))){
						HX_STACK_LINE(795)
						__this->pushmod = true;
					}
				}
				HX_STACK_LINE(795)
				old->_inuse = false;
				HX_STACK_LINE(795)
				{
				}
				HX_STACK_LINE(795)
				__this->modified = true;
				HX_STACK_LINE(795)
				(__this->length)--;
				HX_STACK_LINE(795)
				__this->pushmod = true;
				HX_STACK_LINE(795)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(795)
	return _Function_1_1::Block(pre,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,erase,return )

bool ZPP_IContact_obj::inlined_try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::inlined_try_remove","zpp_nape/dynamics/Contact.hx",772);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(773)
	{
	}
	HX_STACK_LINE(781)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(782)
	::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(783)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(784)
	while(((cur != null()))){
		HX_STACK_LINE(785)
		if (((cur == obj))){
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				{
				}
				HX_STACK_LINE(786)
				::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(786)
				::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
				HX_STACK_LINE(786)
				if (((pre == null()))){
					HX_STACK_LINE(786)
					old = this->next;
					HX_STACK_LINE(786)
					ret1 = old->next;
					HX_STACK_LINE(786)
					this->next = ret1;
					HX_STACK_LINE(786)
					if (((this->next == null()))){
						HX_STACK_LINE(786)
						this->pushmod = true;
					}
				}
				else{
					HX_STACK_LINE(786)
					old = pre->next;
					HX_STACK_LINE(786)
					ret1 = old->next;
					HX_STACK_LINE(786)
					pre->next = ret1;
					HX_STACK_LINE(786)
					if (((ret1 == null()))){
						HX_STACK_LINE(786)
						this->pushmod = true;
					}
				}
				HX_STACK_LINE(786)
				old->_inuse = false;
				HX_STACK_LINE(786)
				{
				}
				HX_STACK_LINE(786)
				this->modified = true;
				HX_STACK_LINE(786)
				(this->length)--;
				HX_STACK_LINE(786)
				this->pushmod = true;
				HX_STACK_LINE(786)
				ret1;
			}
			HX_STACK_LINE(787)
			ret = true;
			HX_STACK_LINE(788)
			break;
		}
		HX_STACK_LINE(790)
		pre = cur;
		HX_STACK_LINE(791)
		cur = cur->next;
	}
	HX_STACK_LINE(793)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_try_remove,return )

Void ZPP_IContact_obj::inlined_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_remove","zpp_nape/dynamics/Contact.hx",759);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(760)
		{
		}
		HX_STACK_LINE(768)
		{
			HX_STACK_LINE(768)
			{
			}
			HX_STACK_LINE(768)
			::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(768)
			::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(768)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(768)
			while(((cur != null()))){
				HX_STACK_LINE(768)
				if (((cur == obj))){
					HX_STACK_LINE(768)
					{
						HX_STACK_LINE(768)
						{
						}
						HX_STACK_LINE(768)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(768)
						::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(768)
						if (((pre == null()))){
							HX_STACK_LINE(768)
							old = this->next;
							HX_STACK_LINE(768)
							ret1 = old->next;
							HX_STACK_LINE(768)
							this->next = ret1;
							HX_STACK_LINE(768)
							if (((this->next == null()))){
								HX_STACK_LINE(768)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(768)
							old = pre->next;
							HX_STACK_LINE(768)
							ret1 = old->next;
							HX_STACK_LINE(768)
							pre->next = ret1;
							HX_STACK_LINE(768)
							if (((ret1 == null()))){
								HX_STACK_LINE(768)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(768)
						old->_inuse = false;
						HX_STACK_LINE(768)
						{
						}
						HX_STACK_LINE(768)
						this->modified = true;
						HX_STACK_LINE(768)
						(this->length)--;
						HX_STACK_LINE(768)
						this->pushmod = true;
						HX_STACK_LINE(768)
						ret1;
					}
					HX_STACK_LINE(768)
					ret = true;
					HX_STACK_LINE(768)
					break;
				}
				HX_STACK_LINE(768)
				pre = cur;
				HX_STACK_LINE(768)
				cur = cur->next;
			}
			HX_STACK_LINE(768)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_remove,(void))

bool ZPP_IContact_obj::try_remove( ::zpp_nape::dynamics::ZPP_IContact obj){
	HX_STACK_PUSH("ZPP_IContact::try_remove","zpp_nape/dynamics/Contact.hx",734);
	HX_STACK_THIS(this);
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(735)
	{
	}
	HX_STACK_LINE(743)
	::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
	HX_STACK_LINE(744)
	::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(745)
	bool ret = false;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(746)
	while(((cur != null()))){
		HX_STACK_LINE(747)
		if (((cur == obj))){
			HX_STACK_LINE(748)
			this->erase(pre);
			HX_STACK_LINE(749)
			ret = true;
			HX_STACK_LINE(750)
			break;
		}
		HX_STACK_LINE(752)
		pre = cur;
		HX_STACK_LINE(753)
		cur = cur->next;
	}
	HX_STACK_LINE(755)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,try_remove,return )

Void ZPP_IContact_obj::remove( ::zpp_nape::dynamics::ZPP_IContact obj){
{
		HX_STACK_PUSH("ZPP_IContact::remove","zpp_nape/dynamics/Contact.hx",723);
		HX_STACK_THIS(this);
		HX_STACK_ARG(obj,"obj");
		HX_STACK_LINE(724)
		{
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			{
			}
			HX_STACK_LINE(732)
			::zpp_nape::dynamics::ZPP_IContact pre = null();		HX_STACK_VAR(pre,"pre");
			HX_STACK_LINE(732)
			::zpp_nape::dynamics::ZPP_IContact cur = this->next;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(732)
			bool ret = false;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(732)
			while(((cur != null()))){
				HX_STACK_LINE(732)
				if (((cur == obj))){
					HX_STACK_LINE(732)
					{
						HX_STACK_LINE(732)
						{
						}
						HX_STACK_LINE(732)
						::zpp_nape::dynamics::ZPP_IContact old;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(732)
						::zpp_nape::dynamics::ZPP_IContact ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(732)
						if (((pre == null()))){
							HX_STACK_LINE(732)
							old = this->next;
							HX_STACK_LINE(732)
							ret1 = old->next;
							HX_STACK_LINE(732)
							this->next = ret1;
							HX_STACK_LINE(732)
							if (((this->next == null()))){
								HX_STACK_LINE(732)
								this->pushmod = true;
							}
						}
						else{
							HX_STACK_LINE(732)
							old = pre->next;
							HX_STACK_LINE(732)
							ret1 = old->next;
							HX_STACK_LINE(732)
							pre->next = ret1;
							HX_STACK_LINE(732)
							if (((ret1 == null()))){
								HX_STACK_LINE(732)
								this->pushmod = true;
							}
						}
						HX_STACK_LINE(732)
						old->_inuse = false;
						HX_STACK_LINE(732)
						{
						}
						HX_STACK_LINE(732)
						this->modified = true;
						HX_STACK_LINE(732)
						(this->length)--;
						HX_STACK_LINE(732)
						this->pushmod = true;
						HX_STACK_LINE(732)
						ret1;
					}
					HX_STACK_LINE(732)
					ret = true;
					HX_STACK_LINE(732)
					break;
				}
				HX_STACK_LINE(732)
				pre = cur;
				HX_STACK_LINE(732)
				cur = cur->next;
			}
			HX_STACK_LINE(732)
			ret;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,remove,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_pop_unsafe( ){
	HX_STACK_PUSH("ZPP_IContact::inlined_pop_unsafe","zpp_nape/dynamics/Contact.hx",710);
	HX_STACK_THIS(this);
	HX_STACK_LINE(711)
	{
	}
	HX_STACK_LINE(719)
	::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(720)
	this->pop();
	HX_STACK_LINE(721)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop_unsafe,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::pop_unsafe( ){
	HX_STACK_PUSH("ZPP_IContact::pop_unsafe","zpp_nape/dynamics/Contact.hx",708);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",708);
			{
				HX_STACK_LINE(708)
				{
				}
				HX_STACK_LINE(708)
				::zpp_nape::dynamics::ZPP_IContact ret = __this->next;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(708)
				__this->pop();
				HX_STACK_LINE(708)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(708)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop_unsafe,return )

Void ZPP_IContact_obj::inlined_pop( ){
{
		HX_STACK_PUSH("ZPP_IContact::inlined_pop","zpp_nape/dynamics/Contact.hx",689);
		HX_STACK_THIS(this);
		HX_STACK_LINE(690)
		{
		}
		HX_STACK_LINE(698)
		::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(699)
		this->next = ret->next;
		HX_STACK_LINE(700)
		ret->_inuse = false;
		HX_STACK_LINE(703)
		{
		}
		HX_STACK_LINE(704)
		if (((this->next == null()))){
			HX_STACK_LINE(704)
			this->pushmod = true;
		}
		HX_STACK_LINE(705)
		this->modified = true;
		HX_STACK_LINE(706)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,inlined_pop,(void))

Void ZPP_IContact_obj::pop( ){
{
		HX_STACK_PUSH("ZPP_IContact::pop","zpp_nape/dynamics/Contact.hx",687);
		HX_STACK_THIS(this);
		HX_STACK_LINE(687)
		{
		}
		HX_STACK_LINE(687)
		::zpp_nape::dynamics::ZPP_IContact ret = this->next;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(687)
		this->next = ret->next;
		HX_STACK_LINE(687)
		ret->_inuse = false;
		HX_STACK_LINE(687)
		{
		}
		HX_STACK_LINE(687)
		if (((this->next == null()))){
			HX_STACK_LINE(687)
			this->pushmod = true;
		}
		HX_STACK_LINE(687)
		this->modified = true;
		HX_STACK_LINE(687)
		(this->length)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,pop,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::inlined_insert","zpp_nape/dynamics/Contact.hx",662);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(663)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",671);
			{
				HX_STACK_LINE(672)
				o->_inuse = true;
				HX_STACK_LINE(673)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(671)
	::zpp_nape::dynamics::ZPP_IContact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(675)
	if (((cur == null()))){
		HX_STACK_LINE(676)
		temp->next = this->next;
		HX_STACK_LINE(677)
		this->next = temp;
	}
	else{
		HX_STACK_LINE(680)
		temp->next = cur->next;
		HX_STACK_LINE(681)
		cur->next = temp;
	}
	HX_STACK_LINE(683)
	this->pushmod = this->modified = true;
	HX_STACK_LINE(684)
	(this->length)++;
	HX_STACK_LINE(685)
	return temp;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,inlined_insert,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::insert( ::zpp_nape::dynamics::ZPP_IContact cur,::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::insert","zpp_nape/dynamics/Contact.hx",660);
	HX_STACK_THIS(this);
	HX_STACK_ARG(cur,"cur");
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact_obj *__this,::zpp_nape::dynamics::ZPP_IContact &o,::zpp_nape::dynamics::ZPP_IContact &cur){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",660);
			{
				HX_STACK_LINE(660)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",660);
						{
							HX_STACK_LINE(660)
							o->_inuse = true;
							HX_STACK_LINE(660)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(660)
				::zpp_nape::dynamics::ZPP_IContact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(660)
				if (((cur == null()))){
					HX_STACK_LINE(660)
					temp->next = __this->next;
					HX_STACK_LINE(660)
					__this->next = temp;
				}
				else{
					HX_STACK_LINE(660)
					temp->next = cur->next;
					HX_STACK_LINE(660)
					cur->next = temp;
				}
				HX_STACK_LINE(660)
				__this->pushmod = __this->modified = true;
				HX_STACK_LINE(660)
				(__this->length)++;
				HX_STACK_LINE(660)
				return temp;
			}
			return null();
		}
	};
	HX_STACK_LINE(660)
	return _Function_1_1::Block(this,o,cur);
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_IContact_obj,insert,return )

Void ZPP_IContact_obj::addAll( ::zpp_nape::dynamics::ZPP_IContact x){
{
		HX_STACK_PUSH("ZPP_IContact::addAll","zpp_nape/dynamics/Contact.hx",642);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(643)
		{
		}
		HX_STACK_LINE(651)
		{
			HX_STACK_LINE(652)
			::zpp_nape::dynamics::ZPP_IContact cx_ite = x->next;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(653)
			while(((cx_ite != null()))){
				HX_STACK_LINE(654)
				::zpp_nape::dynamics::ZPP_IContact i = cx_ite;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(655)
				this->add(i);
				HX_STACK_LINE(656)
				cx_ite = cx_ite->next;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,addAll,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::inlined_add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::inlined_add","zpp_nape/dynamics/Contact.hx",623);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	HX_STACK_LINE(624)
	{
	}
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",632);
			{
				HX_STACK_LINE(633)
				o->_inuse = true;
				HX_STACK_LINE(634)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(632)
	::zpp_nape::dynamics::ZPP_IContact temp = _Function_1_1::Block(o);		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(636)
	temp->next = this->next;
	HX_STACK_LINE(637)
	this->next = temp;
	HX_STACK_LINE(638)
	this->modified = true;
	HX_STACK_LINE(639)
	(this->length)++;
	HX_STACK_LINE(640)
	return o;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,inlined_add,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::add( ::zpp_nape::dynamics::ZPP_IContact o){
	HX_STACK_PUSH("ZPP_IContact::add","zpp_nape/dynamics/Contact.hx",621);
	HX_STACK_THIS(this);
	HX_STACK_ARG(o,"o");
	struct _Function_1_1{
		inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o,::zpp_nape::dynamics::ZPP_IContact_obj *__this){
			HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",621);
			{
				HX_STACK_LINE(621)
				{
				}
				struct _Function_2_1{
					inline static ::zpp_nape::dynamics::ZPP_IContact Block( ::zpp_nape::dynamics::ZPP_IContact &o){
						HX_STACK_PUSH("*::closure","zpp_nape/dynamics/Contact.hx",621);
						{
							HX_STACK_LINE(621)
							o->_inuse = true;
							HX_STACK_LINE(621)
							return o;
						}
						return null();
					}
				};
				HX_STACK_LINE(621)
				::zpp_nape::dynamics::ZPP_IContact temp = _Function_2_1::Block(o);		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(621)
				temp->next = __this->next;
				HX_STACK_LINE(621)
				__this->next = temp;
				HX_STACK_LINE(621)
				__this->modified = true;
				HX_STACK_LINE(621)
				(__this->length)++;
				HX_STACK_LINE(621)
				return o;
			}
			return null();
		}
	};
	HX_STACK_LINE(621)
	return _Function_1_1::Block(o,this);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,add,return )

Void ZPP_IContact_obj::setbegin( ::zpp_nape::dynamics::ZPP_IContact i){
{
		HX_STACK_PUSH("ZPP_IContact::setbegin","zpp_nape/dynamics/Contact.hx",616);
		HX_STACK_THIS(this);
		HX_STACK_ARG(i,"i");
		HX_STACK_LINE(617)
		this->next = i;
		HX_STACK_LINE(618)
		this->modified = true;
		HX_STACK_LINE(619)
		this->pushmod = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_IContact_obj,setbegin,(void))

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::begin( ){
	HX_STACK_PUSH("ZPP_IContact::begin","zpp_nape/dynamics/Contact.hx",610);
	HX_STACK_THIS(this);
	HX_STACK_LINE(610)
	return this->next;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,begin,return )

::zpp_nape::dynamics::ZPP_IContact ZPP_IContact_obj::elem( ){
	HX_STACK_PUSH("ZPP_IContact::elem","zpp_nape/dynamics/Contact.hx",608);
	HX_STACK_THIS(this);
	HX_STACK_LINE(608)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_IContact_obj,elem,return )


ZPP_IContact_obj::ZPP_IContact_obj()
{
}

void ZPP_IContact_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_IContact);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pushmod,"pushmod");
	HX_MARK_MEMBER_NAME(modified,"modified");
	HX_MARK_MEMBER_NAME(_inuse,"_inuse");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(lr2y,"lr2y");
	HX_MARK_MEMBER_NAME(lr2x,"lr2x");
	HX_MARK_MEMBER_NAME(lr1y,"lr1y");
	HX_MARK_MEMBER_NAME(lr1x,"lr1x");
	HX_MARK_MEMBER_NAME(jtAcc,"jtAcc");
	HX_MARK_MEMBER_NAME(jnAcc,"jnAcc");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(tMass,"tMass");
	HX_MARK_MEMBER_NAME(nMass,"nMass");
	HX_MARK_MEMBER_NAME(r2y,"r2y");
	HX_MARK_MEMBER_NAME(r2x,"r2x");
	HX_MARK_MEMBER_NAME(r1y,"r1y");
	HX_MARK_MEMBER_NAME(r1x,"r1x");
	HX_MARK_END_CLASS();
}

void ZPP_IContact_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(pushmod,"pushmod");
	HX_VISIT_MEMBER_NAME(modified,"modified");
	HX_VISIT_MEMBER_NAME(_inuse,"_inuse");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(lr2y,"lr2y");
	HX_VISIT_MEMBER_NAME(lr2x,"lr2x");
	HX_VISIT_MEMBER_NAME(lr1y,"lr1y");
	HX_VISIT_MEMBER_NAME(lr1x,"lr1x");
	HX_VISIT_MEMBER_NAME(jtAcc,"jtAcc");
	HX_VISIT_MEMBER_NAME(jnAcc,"jnAcc");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(tMass,"tMass");
	HX_VISIT_MEMBER_NAME(nMass,"nMass");
	HX_VISIT_MEMBER_NAME(r2y,"r2y");
	HX_VISIT_MEMBER_NAME(r2x,"r2x");
	HX_VISIT_MEMBER_NAME(r1y,"r1y");
	HX_VISIT_MEMBER_NAME(r1x,"r1x");
}

Dynamic ZPP_IContact_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"r2y") ) { return r2y; }
		if (HX_FIELD_EQ(inName,"r2x") ) { return r2x; }
		if (HX_FIELD_EQ(inName,"r1y") ) { return r1y; }
		if (HX_FIELD_EQ(inName,"r1x") ) { return r1x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"elem") ) { return elem_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { return lr2y; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { return lr2x; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { return lr1y; }
		if (HX_FIELD_EQ(inName,"lr1x") ) { return lr1x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"front") ) { return front_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"erase") ) { return erase_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"jtAcc") ) { return jtAcc; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { return jnAcc; }
		if (HX_FIELD_EQ(inName,"tMass") ) { return tMass; }
		if (HX_FIELD_EQ(inName,"nMass") ) { return nMass; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splice") ) { return splice_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"insert") ) { return insert_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { return _inuse; }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"pushmod") ) { return pushmod; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setbegin") ) { return setbegin_dyn(); }
		if (HX_FIELD_EQ(inName,"modified") ) { return modified; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
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

Dynamic ZPP_IContact_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"r2y") ) { r2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r2x") ) { r2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1y") ) { r1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r1x") ) { r1x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::zpp_nape::dynamics::ZPP_IContact >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2y") ) { lr2y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr2x") ) { lr2x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr1y") ) { lr1y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lr1x") ) { lr1x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"jtAcc") ) { jtAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jnAcc") ) { jnAcc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tMass") ) { tMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nMass") ) { nMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inuse") ) { _inuse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pushmod") ) { pushmod=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"modified") ) { modified=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_IContact_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pushmod"));
	outFields->push(HX_CSTRING("modified"));
	outFields->push(HX_CSTRING("_inuse"));
	outFields->push(HX_CSTRING("next"));
	outFields->push(HX_CSTRING("lr2y"));
	outFields->push(HX_CSTRING("lr2x"));
	outFields->push(HX_CSTRING("lr1y"));
	outFields->push(HX_CSTRING("lr1x"));
	outFields->push(HX_CSTRING("jtAcc"));
	outFields->push(HX_CSTRING("jnAcc"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("bounce"));
	outFields->push(HX_CSTRING("tMass"));
	outFields->push(HX_CSTRING("nMass"));
	outFields->push(HX_CSTRING("r2y"));
	outFields->push(HX_CSTRING("r2x"));
	outFields->push(HX_CSTRING("r1y"));
	outFields->push(HX_CSTRING("r1x"));
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
	HX_CSTRING("_inuse"),
	HX_CSTRING("begin"),
	HX_CSTRING("elem"),
	HX_CSTRING("next"),
	HX_CSTRING("lr2y"),
	HX_CSTRING("lr2x"),
	HX_CSTRING("lr1y"),
	HX_CSTRING("lr1x"),
	HX_CSTRING("jtAcc"),
	HX_CSTRING("jnAcc"),
	HX_CSTRING("friction"),
	HX_CSTRING("bounce"),
	HX_CSTRING("tMass"),
	HX_CSTRING("nMass"),
	HX_CSTRING("r2y"),
	HX_CSTRING("r2x"),
	HX_CSTRING("r1y"),
	HX_CSTRING("r1x"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_IContact_obj::__mClass,"__mClass");
};

Class ZPP_IContact_obj::__mClass;

void ZPP_IContact_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.dynamics.ZPP_IContact"), hx::TCanCast< ZPP_IContact_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_IContact_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace dynamics
