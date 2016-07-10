#include <hxcpp.h>

#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_AABBTree_obj::__construct()
{
HX_STACK_PUSH("ZPP_AABBTree::new","zpp_nape/space/DynAABBPhase.hx",333);
{
	HX_STACK_LINE(334)
	this->root = null();
}
;
	return null();
}

ZPP_AABBTree_obj::~ZPP_AABBTree_obj() { }

Dynamic ZPP_AABBTree_obj::__CreateEmpty() { return  new ZPP_AABBTree_obj; }
hx::ObjectPtr< ZPP_AABBTree_obj > ZPP_AABBTree_obj::__new()
{  hx::ObjectPtr< ZPP_AABBTree_obj > result = new ZPP_AABBTree_obj();
	result->__construct();
	return result;}

Dynamic ZPP_AABBTree_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_AABBTree_obj > result = new ZPP_AABBTree_obj();
	result->__construct();
	return result;}

::zpp_nape::space::ZPP_AABBNode ZPP_AABBTree_obj::balance( ::zpp_nape::space::ZPP_AABBNode a){
	HX_STACK_PUSH("ZPP_AABBTree::balance","zpp_nape/space/DynAABBPhase.hx",581);
	HX_STACK_THIS(this);
	HX_STACK_ARG(a,"a");
	HX_STACK_LINE(581)
	if (((bool((a->child1 == null())) || bool((a->height < (int)2))))){
		HX_STACK_LINE(582)
		return a;
	}
	else{
		HX_STACK_LINE(584)
		::zpp_nape::space::ZPP_AABBNode b = a->child1;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(585)
		::zpp_nape::space::ZPP_AABBNode c = a->child2;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(586)
		int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
		HX_STACK_LINE(587)
		if (((balance > (int)1))){
			HX_STACK_LINE(588)
			::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(589)
			::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(590)
			c->child1 = a;
			HX_STACK_LINE(591)
			c->parent = a->parent;
			HX_STACK_LINE(592)
			a->parent = c;
			HX_STACK_LINE(593)
			if (((c->parent != null()))){
				HX_STACK_LINE(593)
				if (((c->parent->child1 == a))){
					HX_STACK_LINE(594)
					c->parent->child1 = c;
				}
				else{
					HX_STACK_LINE(595)
					c->parent->child2 = c;
				}
			}
			else{
				HX_STACK_LINE(597)
				this->root = c;
			}
			HX_STACK_LINE(598)
			if (((f->height > g->height))){
				HX_STACK_LINE(599)
				c->child2 = f;
				HX_STACK_LINE(600)
				a->child2 = g;
				HX_STACK_LINE(601)
				g->parent = a;
				HX_STACK_LINE(602)
				{
					HX_STACK_LINE(602)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(602)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(602)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(602)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(602)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(603)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(603)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(603)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(603)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				struct _Function_4_1{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",604);
						{
							HX_STACK_LINE(605)
							int x = b->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(606)
							int y = g->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(607)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(604)
				a->height = ((int)1 + _Function_4_1::Block(b,g));
				struct _Function_4_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &a,::zpp_nape::space::ZPP_AABBNode &f){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",609);
						{
							HX_STACK_LINE(610)
							int x = a->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(611)
							int y = f->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(612)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(609)
				c->height = ((int)1 + _Function_4_2::Block(a,f));
			}
			else{
				HX_STACK_LINE(616)
				c->child2 = g;
				HX_STACK_LINE(617)
				a->child2 = f;
				HX_STACK_LINE(618)
				f->parent = a;
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = b->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(619)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(619)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(619)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(619)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				HX_STACK_LINE(620)
				{
					HX_STACK_LINE(620)
					::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
					::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
					HX_STACK_LINE(620)
					_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
					HX_STACK_LINE(620)
					_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
					HX_STACK_LINE(620)
					_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
					HX_STACK_LINE(620)
					_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
				}
				struct _Function_4_1{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",621);
						{
							HX_STACK_LINE(622)
							int x = b->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(623)
							int y = f->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(624)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(621)
				a->height = ((int)1 + _Function_4_1::Block(b,f));
				struct _Function_4_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &a,::zpp_nape::space::ZPP_AABBNode &g){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",626);
						{
							HX_STACK_LINE(627)
							int x = a->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(628)
							int y = g->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(629)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(626)
				c->height = ((int)1 + _Function_4_2::Block(a,g));
			}
			HX_STACK_LINE(632)
			return c;
		}
		else{
			HX_STACK_LINE(634)
			if (((balance < (int)-1))){
				HX_STACK_LINE(635)
				::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(636)
				::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(637)
				b->child1 = a;
				HX_STACK_LINE(638)
				b->parent = a->parent;
				HX_STACK_LINE(639)
				a->parent = b;
				HX_STACK_LINE(640)
				if (((b->parent != null()))){
					HX_STACK_LINE(640)
					if (((b->parent->child1 == a))){
						HX_STACK_LINE(641)
						b->parent->child1 = b;
					}
					else{
						HX_STACK_LINE(642)
						b->parent->child2 = b;
					}
				}
				else{
					HX_STACK_LINE(644)
					this->root = b;
				}
				HX_STACK_LINE(645)
				if (((f->height > g->height))){
					HX_STACK_LINE(646)
					b->child2 = f;
					HX_STACK_LINE(647)
					a->child1 = g;
					HX_STACK_LINE(648)
					g->parent = a;
					HX_STACK_LINE(649)
					{
						HX_STACK_LINE(649)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(649)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(649)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(649)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(649)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					HX_STACK_LINE(650)
					{
						HX_STACK_LINE(650)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(650)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(650)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(650)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(650)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					struct _Function_5_1{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",651);
							{
								HX_STACK_LINE(652)
								int x = c->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(653)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(654)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(651)
					a->height = ((int)1 + _Function_5_1::Block(c,g));
					struct _Function_5_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &a,::zpp_nape::space::ZPP_AABBNode &f){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",656);
							{
								HX_STACK_LINE(657)
								int x = a->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(658)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(659)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(656)
					b->height = ((int)1 + _Function_5_2::Block(a,f));
				}
				else{
					HX_STACK_LINE(663)
					b->child2 = g;
					HX_STACK_LINE(664)
					a->child1 = f;
					HX_STACK_LINE(665)
					f->parent = a;
					HX_STACK_LINE(666)
					{
						HX_STACK_LINE(666)
						::zpp_nape::geom::ZPP_AABB _this = a->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = c->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(666)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(666)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(666)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(666)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					HX_STACK_LINE(667)
					{
						HX_STACK_LINE(667)
						::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a1 = a->aabb;		HX_STACK_VAR(a1,"a1");
						::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(667)
						_this->minx = (  (((a1->minx < b1->minx))) ? Float(a1->minx) : Float(b1->minx) );
						HX_STACK_LINE(667)
						_this->miny = (  (((a1->miny < b1->miny))) ? Float(a1->miny) : Float(b1->miny) );
						HX_STACK_LINE(667)
						_this->maxx = (  (((a1->maxx > b1->maxx))) ? Float(a1->maxx) : Float(b1->maxx) );
						HX_STACK_LINE(667)
						_this->maxy = (  (((a1->maxy > b1->maxy))) ? Float(a1->maxy) : Float(b1->maxy) );
					}
					struct _Function_5_1{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",668);
							{
								HX_STACK_LINE(669)
								int x = c->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(670)
								int y = f->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(671)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(668)
					a->height = ((int)1 + _Function_5_1::Block(c,f));
					struct _Function_5_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &a,::zpp_nape::space::ZPP_AABBNode &g){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",673);
							{
								HX_STACK_LINE(674)
								int x = a->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(675)
								int y = g->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(676)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(673)
					b->height = ((int)1 + _Function_5_2::Block(a,g));
				}
				HX_STACK_LINE(679)
				return b;
			}
			else{
				HX_STACK_LINE(681)
				return a;
			}
		}
	}
	HX_STACK_LINE(581)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,balance,return )

Void ZPP_AABBTree_obj::inlined_removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::inlined_removeLeaf","zpp_nape/space/DynAABBPhase.hx",512);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(512)
		if (((leaf == this->root))){
			HX_STACK_LINE(514)
			this->root = null();
			HX_STACK_LINE(515)
			return null();
		}
		else{
			HX_STACK_LINE(518)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(519)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(520)
			::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == leaf))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(521)
			if (((gparent != null()))){
				HX_STACK_LINE(522)
				if (((gparent->child1 == parent))){
					HX_STACK_LINE(522)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(523)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(524)
				sibling->parent = gparent;
				HX_STACK_LINE(525)
				{
					HX_STACK_LINE(526)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(527)
					{
					}
					HX_STACK_LINE(535)
					{
						HX_STACK_LINE(535)
						o->height = (int)-1;
						HX_STACK_LINE(535)
						{
							HX_STACK_LINE(535)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(535)
							{
							}
							HX_STACK_LINE(535)
							{
								HX_STACK_LINE(535)
								if (((o1->outer != null()))){
									HX_STACK_LINE(535)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(535)
									o1->outer = null();
								}
								HX_STACK_LINE(535)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(535)
								o1->_invalidate = null();
								HX_STACK_LINE(535)
								o1->_validate = null();
							}
							HX_STACK_LINE(535)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(535)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(535)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(535)
						o->next = null();
						HX_STACK_LINE(535)
						o->snext = null();
						HX_STACK_LINE(535)
						o->mnext = null();
					}
					HX_STACK_LINE(536)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(537)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(542)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(543)
				while(((node != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
							{
								HX_STACK_LINE(544)
								::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(544)
								::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(544)
								int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
								struct _Function_5_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
										{
											HX_STACK_LINE(544)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(544)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(544)
											c->child1 = node;
											HX_STACK_LINE(544)
											c->parent = node->parent;
											HX_STACK_LINE(544)
											node->parent = c;
											HX_STACK_LINE(544)
											if (((c->parent != null()))){
												HX_STACK_LINE(544)
												if (((c->parent->child1 == node))){
													HX_STACK_LINE(544)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(544)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(544)
												__this->root = c;
											}
											HX_STACK_LINE(544)
											if (((f->height > g->height))){
												HX_STACK_LINE(544)
												c->child2 = f;
												HX_STACK_LINE(544)
												node->child2 = g;
												HX_STACK_LINE(544)
												g->parent = node;
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												node->height = ((int)1 + _Function_7_1::Block(b,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												c->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(544)
												c->child2 = g;
												HX_STACK_LINE(544)
												node->child2 = f;
												HX_STACK_LINE(544)
												f->parent = node;
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												node->height = ((int)1 + _Function_7_1::Block(b,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												c->height = ((int)1 + _Function_7_2::Block(node,g));
											}
											HX_STACK_LINE(544)
											return c;
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
										{
											HX_STACK_LINE(544)
											::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(544)
											::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(544)
											b->child1 = node;
											HX_STACK_LINE(544)
											b->parent = node->parent;
											HX_STACK_LINE(544)
											node->parent = b;
											HX_STACK_LINE(544)
											if (((b->parent != null()))){
												HX_STACK_LINE(544)
												if (((b->parent->child1 == node))){
													HX_STACK_LINE(544)
													b->parent->child1 = b;
												}
												else{
													HX_STACK_LINE(544)
													b->parent->child2 = b;
												}
											}
											else{
												HX_STACK_LINE(544)
												__this->root = b;
											}
											HX_STACK_LINE(544)
											if (((f->height > g->height))){
												HX_STACK_LINE(544)
												b->child2 = f;
												HX_STACK_LINE(544)
												node->child1 = g;
												HX_STACK_LINE(544)
												g->parent = node;
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												node->height = ((int)1 + _Function_7_1::Block(c,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												b->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(544)
												b->child2 = g;
												HX_STACK_LINE(544)
												node->child1 = f;
												HX_STACK_LINE(544)
												f->parent = node;
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(544)
												{
													HX_STACK_LINE(544)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(544)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(544)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(544)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(544)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												node->height = ((int)1 + _Function_7_1::Block(c,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",544);
														{
															HX_STACK_LINE(544)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(544)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(544)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(544)
												b->height = ((int)1 + _Function_7_2::Block(node,g));
											}
											HX_STACK_LINE(544)
											return b;
										}
										return null();
									}
								};
								HX_STACK_LINE(544)
								return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(node,__this,b,c)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_2::Block(b,node,__this,c)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(544)
					node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(node,this)) );
					HX_STACK_LINE(545)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(546)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(547)
					{
						HX_STACK_LINE(547)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(547)
						_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
						HX_STACK_LINE(547)
						_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
						HX_STACK_LINE(547)
						_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
						HX_STACK_LINE(547)
						_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
					}
					struct _Function_4_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",548);
							{
								HX_STACK_LINE(549)
								int x = child1->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(550)
								int y = child2->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(551)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(548)
					node->height = ((int)1 + _Function_4_2::Block(child1,child2));
					HX_STACK_LINE(553)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(557)
				this->root = sibling;
				HX_STACK_LINE(558)
				sibling->parent = null();
				HX_STACK_LINE(559)
				{
					HX_STACK_LINE(560)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(561)
					{
					}
					HX_STACK_LINE(569)
					{
						HX_STACK_LINE(569)
						o->height = (int)-1;
						HX_STACK_LINE(569)
						{
							HX_STACK_LINE(569)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(569)
							{
							}
							HX_STACK_LINE(569)
							{
								HX_STACK_LINE(569)
								if (((o1->outer != null()))){
									HX_STACK_LINE(569)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(569)
									o1->outer = null();
								}
								HX_STACK_LINE(569)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(569)
								o1->_invalidate = null();
								HX_STACK_LINE(569)
								o1->_validate = null();
							}
							HX_STACK_LINE(569)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(569)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(569)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(569)
						o->next = null();
						HX_STACK_LINE(569)
						o->snext = null();
						HX_STACK_LINE(569)
						o->mnext = null();
					}
					HX_STACK_LINE(570)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(571)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_removeLeaf,(void))

Void ZPP_AABBTree_obj::removeLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::removeLeaf","zpp_nape/space/DynAABBPhase.hx",510);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(510)
		if (((leaf == this->root))){
			HX_STACK_LINE(510)
			this->root = null();
			HX_STACK_LINE(510)
			Dynamic();
		}
		else{
			HX_STACK_LINE(510)
			::zpp_nape::space::ZPP_AABBNode parent = leaf->parent;		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(510)
			::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
			HX_STACK_LINE(510)
			::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == leaf))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(510)
			if (((gparent != null()))){
				HX_STACK_LINE(510)
				if (((gparent->child1 == parent))){
					HX_STACK_LINE(510)
					gparent->child1 = sibling;
				}
				else{
					HX_STACK_LINE(510)
					gparent->child2 = sibling;
				}
				HX_STACK_LINE(510)
				sibling->parent = gparent;
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						o->height = (int)-1;
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(510)
							{
							}
							HX_STACK_LINE(510)
							{
								HX_STACK_LINE(510)
								if (((o1->outer != null()))){
									HX_STACK_LINE(510)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(510)
									o1->outer = null();
								}
								HX_STACK_LINE(510)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(510)
								o1->_invalidate = null();
								HX_STACK_LINE(510)
								o1->_validate = null();
							}
							HX_STACK_LINE(510)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(510)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(510)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(510)
						o->next = null();
						HX_STACK_LINE(510)
						o->snext = null();
						HX_STACK_LINE(510)
						o->mnext = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
				HX_STACK_LINE(510)
				::zpp_nape::space::ZPP_AABBNode node = gparent;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(510)
				while(((node != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
							{
								HX_STACK_LINE(510)
								::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(510)
								::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(510)
								int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
								struct _Function_5_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
										{
											HX_STACK_LINE(510)
											::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(510)
											::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(510)
											c->child1 = node;
											HX_STACK_LINE(510)
											c->parent = node->parent;
											HX_STACK_LINE(510)
											node->parent = c;
											HX_STACK_LINE(510)
											if (((c->parent != null()))){
												HX_STACK_LINE(510)
												if (((c->parent->child1 == node))){
													HX_STACK_LINE(510)
													c->parent->child1 = c;
												}
												else{
													HX_STACK_LINE(510)
													c->parent->child2 = c;
												}
											}
											else{
												HX_STACK_LINE(510)
												__this->root = c;
											}
											HX_STACK_LINE(510)
											if (((f->height > g->height))){
												HX_STACK_LINE(510)
												c->child2 = f;
												HX_STACK_LINE(510)
												node->child2 = g;
												HX_STACK_LINE(510)
												g->parent = node;
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												node->height = ((int)1 + _Function_7_1::Block(b,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												c->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(510)
												c->child2 = g;
												HX_STACK_LINE(510)
												node->child2 = f;
												HX_STACK_LINE(510)
												f->parent = node;
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = b->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												node->height = ((int)1 + _Function_7_1::Block(b,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												c->height = ((int)1 + _Function_7_2::Block(node,g));
											}
											HX_STACK_LINE(510)
											return c;
										}
										return null();
									}
								};
								struct _Function_5_2{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
										{
											HX_STACK_LINE(510)
											::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(510)
											::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(510)
											b->child1 = node;
											HX_STACK_LINE(510)
											b->parent = node->parent;
											HX_STACK_LINE(510)
											node->parent = b;
											HX_STACK_LINE(510)
											if (((b->parent != null()))){
												HX_STACK_LINE(510)
												if (((b->parent->child1 == node))){
													HX_STACK_LINE(510)
													b->parent->child1 = b;
												}
												else{
													HX_STACK_LINE(510)
													b->parent->child2 = b;
												}
											}
											else{
												HX_STACK_LINE(510)
												__this->root = b;
											}
											HX_STACK_LINE(510)
											if (((f->height > g->height))){
												HX_STACK_LINE(510)
												b->child2 = f;
												HX_STACK_LINE(510)
												node->child1 = g;
												HX_STACK_LINE(510)
												g->parent = node;
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												node->height = ((int)1 + _Function_7_1::Block(c,g));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												b->height = ((int)1 + _Function_7_2::Block(node,f));
											}
											else{
												HX_STACK_LINE(510)
												b->child2 = g;
												HX_STACK_LINE(510)
												node->child1 = f;
												HX_STACK_LINE(510)
												f->parent = node;
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
													::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
													::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(510)
													_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
													HX_STACK_LINE(510)
													_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
													HX_STACK_LINE(510)
													_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
													HX_STACK_LINE(510)
													_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
												}
												struct _Function_7_1{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = c->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = f->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												node->height = ((int)1 + _Function_7_1::Block(c,f));
												struct _Function_7_2{
													inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
														{
															HX_STACK_LINE(510)
															int x = node->height;		HX_STACK_VAR(x,"x");
															HX_STACK_LINE(510)
															int y = g->height;		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(510)
															return (  (((x > y))) ? int(x) : int(y) );
														}
														return null();
													}
												};
												HX_STACK_LINE(510)
												b->height = ((int)1 + _Function_7_2::Block(node,g));
											}
											HX_STACK_LINE(510)
											return b;
										}
										return null();
									}
								};
								HX_STACK_LINE(510)
								return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(node,__this,b,c)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_5_2::Block(b,node,__this,c)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(510)
					node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(node,this)) );
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
						::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(510)
						_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
						HX_STACK_LINE(510)
						_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
						HX_STACK_LINE(510)
						_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
						HX_STACK_LINE(510)
						_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
					}
					struct _Function_4_2{
						inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",510);
							{
								HX_STACK_LINE(510)
								int x = child1->height;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(510)
								int y = child2->height;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(510)
								return (  (((x > y))) ? int(x) : int(y) );
							}
							return null();
						}
					};
					HX_STACK_LINE(510)
					node->height = ((int)1 + _Function_4_2::Block(child1,child2));
					HX_STACK_LINE(510)
					node = node->parent;
				}
			}
			else{
				HX_STACK_LINE(510)
				this->root = sibling;
				HX_STACK_LINE(510)
				sibling->parent = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						o->height = (int)-1;
						HX_STACK_LINE(510)
						{
							HX_STACK_LINE(510)
							::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(510)
							{
							}
							HX_STACK_LINE(510)
							{
								HX_STACK_LINE(510)
								if (((o1->outer != null()))){
									HX_STACK_LINE(510)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(510)
									o1->outer = null();
								}
								HX_STACK_LINE(510)
								o1->wrap_min = o1->wrap_max = null();
								HX_STACK_LINE(510)
								o1->_invalidate = null();
								HX_STACK_LINE(510)
								o1->_validate = null();
							}
							HX_STACK_LINE(510)
							o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(510)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
						}
						HX_STACK_LINE(510)
						o->child1 = o->child2 = o->parent = null();
						HX_STACK_LINE(510)
						o->next = null();
						HX_STACK_LINE(510)
						o->snext = null();
						HX_STACK_LINE(510)
						o->mnext = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,removeLeaf,(void))

Void ZPP_AABBTree_obj::inlined_insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::inlined_insertLeaf","zpp_nape/space/DynAABBPhase.hx",420);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(420)
		if (((this->root == null()))){
			HX_STACK_LINE(422)
			this->root = leaf;
			HX_STACK_LINE(423)
			this->root->parent = null();
		}
		else{
			HX_STACK_LINE(426)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(427)
			::zpp_nape::space::ZPP_AABBNode node = this->root;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(428)
			while((!(((node->child1 == null()))))){
				HX_STACK_LINE(429)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(430)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",431);
						{
							HX_STACK_LINE(431)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(431)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(431)
				Float area = _Function_3_1::Block(node);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(432)
					_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
					HX_STACK_LINE(432)
					_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
					HX_STACK_LINE(432)
					_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
					HX_STACK_LINE(432)
					_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
				}
				struct _Function_3_2{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",433);
						{
							HX_STACK_LINE(433)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(433)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(433)
				Float carea = _Function_3_2::Block();		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(434)
				Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(435)
				Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
				struct _Function_3_3{
					inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",436);
						{
							HX_STACK_LINE(437)
							{
								HX_STACK_LINE(437)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(437)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(437)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(437)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(437)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",438);
									{
										HX_STACK_LINE(438)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(438)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",439);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",440);
												{
													HX_STACK_LINE(440)
													::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(440)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(440)
										Float oarea = _Function_5_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",441);
												{
													HX_STACK_LINE(441)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(441)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(441)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(442)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(438)
							return (  (((child1->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child1,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(436)
				Float cost1 = _Function_3_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
				struct _Function_3_4{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",445);
						{
							HX_STACK_LINE(446)
							{
								HX_STACK_LINE(446)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(446)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(446)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(446)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(446)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",447);
									{
										HX_STACK_LINE(447)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(447)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",448);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",449);
												{
													HX_STACK_LINE(449)
													::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(449)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(449)
										Float oarea = _Function_5_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",450);
												{
													HX_STACK_LINE(450)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(450)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(450)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(451)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(447)
							return (  (((child2->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child2,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(445)
				Float cost2 = _Function_3_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(454)
				if (((bool((cost < cost1)) && bool((cost < cost2))))){
					HX_STACK_LINE(454)
					break;
				}
				else{
					HX_STACK_LINE(455)
					node = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
				}
			}
			HX_STACK_LINE(457)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(458)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(459)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(460)
			{
				HX_STACK_LINE(461)
				if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
					HX_STACK_LINE(461)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
				}
				else{
					HX_STACK_LINE(468)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(469)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(470)
					nparent->next = null();
				}
				HX_STACK_LINE(475)
				{
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
							HX_STACK_LINE(475)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
						}
						else{
							HX_STACK_LINE(475)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(475)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
							HX_STACK_LINE(475)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(475)
						Dynamic();
					}
					HX_STACK_LINE(475)
					nparent->moved = false;
					HX_STACK_LINE(475)
					nparent->synced = false;
					HX_STACK_LINE(475)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(477)
			nparent->parent = oparent;
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(478)
				_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
				HX_STACK_LINE(478)
				_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
				HX_STACK_LINE(478)
				_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
				HX_STACK_LINE(478)
				_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
			}
			HX_STACK_LINE(479)
			nparent->height = (sibling->height + (int)1);
			HX_STACK_LINE(480)
			if (((oparent != null()))){
				HX_STACK_LINE(481)
				if (((oparent->child1 == sibling))){
					HX_STACK_LINE(481)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(482)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(483)
				nparent->child1 = sibling;
				HX_STACK_LINE(484)
				nparent->child2 = leaf;
				HX_STACK_LINE(485)
				sibling->parent = nparent;
				HX_STACK_LINE(486)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(489)
				nparent->child1 = sibling;
				HX_STACK_LINE(490)
				nparent->child2 = leaf;
				HX_STACK_LINE(491)
				sibling->parent = nparent;
				HX_STACK_LINE(492)
				leaf->parent = nparent;
				HX_STACK_LINE(493)
				this->root = nparent;
			}
			HX_STACK_LINE(495)
			node = leaf->parent;
			HX_STACK_LINE(496)
			while(((node != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
						{
							HX_STACK_LINE(497)
							::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(497)
							::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(497)
							int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
							struct _Function_4_1{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
									{
										HX_STACK_LINE(497)
										::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(497)
										::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(497)
										c->child1 = node;
										HX_STACK_LINE(497)
										c->parent = node->parent;
										HX_STACK_LINE(497)
										node->parent = c;
										HX_STACK_LINE(497)
										if (((c->parent != null()))){
											HX_STACK_LINE(497)
											if (((c->parent->child1 == node))){
												HX_STACK_LINE(497)
												c->parent->child1 = c;
											}
											else{
												HX_STACK_LINE(497)
												c->parent->child2 = c;
											}
										}
										else{
											HX_STACK_LINE(497)
											__this->root = c;
										}
										HX_STACK_LINE(497)
										if (((f->height > g->height))){
											HX_STACK_LINE(497)
											c->child2 = f;
											HX_STACK_LINE(497)
											node->child2 = g;
											HX_STACK_LINE(497)
											g->parent = node;
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											node->height = ((int)1 + _Function_6_1::Block(b,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											c->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(497)
											c->child2 = g;
											HX_STACK_LINE(497)
											node->child2 = f;
											HX_STACK_LINE(497)
											f->parent = node;
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											node->height = ((int)1 + _Function_6_1::Block(b,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											c->height = ((int)1 + _Function_6_2::Block(node,g));
										}
										HX_STACK_LINE(497)
										return c;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
									{
										HX_STACK_LINE(497)
										::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(497)
										::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(497)
										b->child1 = node;
										HX_STACK_LINE(497)
										b->parent = node->parent;
										HX_STACK_LINE(497)
										node->parent = b;
										HX_STACK_LINE(497)
										if (((b->parent != null()))){
											HX_STACK_LINE(497)
											if (((b->parent->child1 == node))){
												HX_STACK_LINE(497)
												b->parent->child1 = b;
											}
											else{
												HX_STACK_LINE(497)
												b->parent->child2 = b;
											}
										}
										else{
											HX_STACK_LINE(497)
											__this->root = b;
										}
										HX_STACK_LINE(497)
										if (((f->height > g->height))){
											HX_STACK_LINE(497)
											b->child2 = f;
											HX_STACK_LINE(497)
											node->child1 = g;
											HX_STACK_LINE(497)
											g->parent = node;
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											node->height = ((int)1 + _Function_6_1::Block(c,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											b->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(497)
											b->child2 = g;
											HX_STACK_LINE(497)
											node->child1 = f;
											HX_STACK_LINE(497)
											f->parent = node;
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(497)
											{
												HX_STACK_LINE(497)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(497)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(497)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(497)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(497)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											node->height = ((int)1 + _Function_6_1::Block(c,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",497);
													{
														HX_STACK_LINE(497)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(497)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(497)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(497)
											b->height = ((int)1 + _Function_6_2::Block(node,g));
										}
										HX_STACK_LINE(497)
										return b;
									}
									return null();
								}
							};
							HX_STACK_LINE(497)
							return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(node,__this,b,c)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_2::Block(b,node,__this,c)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(497)
				node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_3_1::Block(node,this)) );
				HX_STACK_LINE(498)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(499)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",500);
						{
							HX_STACK_LINE(501)
							int x = child1->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(502)
							int y = child2->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(503)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(500)
				node->height = ((int)1 + _Function_3_2::Block(child1,child2));
				HX_STACK_LINE(505)
				{
					HX_STACK_LINE(505)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(505)
					_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
					HX_STACK_LINE(505)
					_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
					HX_STACK_LINE(505)
					_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
					HX_STACK_LINE(505)
					_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
				}
				HX_STACK_LINE(506)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,inlined_insertLeaf,(void))

Void ZPP_AABBTree_obj::insertLeaf( ::zpp_nape::space::ZPP_AABBNode leaf){
{
		HX_STACK_PUSH("ZPP_AABBTree::insertLeaf","zpp_nape/space/DynAABBPhase.hx",418);
		HX_STACK_THIS(this);
		HX_STACK_ARG(leaf,"leaf");
		HX_STACK_LINE(418)
		if (((this->root == null()))){
			HX_STACK_LINE(418)
			this->root = leaf;
			HX_STACK_LINE(418)
			this->root->parent = null();
		}
		else{
			HX_STACK_LINE(418)
			::zpp_nape::geom::ZPP_AABB leafaabb = leaf->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
			HX_STACK_LINE(418)
			::zpp_nape::space::ZPP_AABBNode node = this->root;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(418)
			while((!(((node->child1 == null()))))){
				HX_STACK_LINE(418)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(418)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_1{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(418)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				Float area = _Function_3_1::Block(node);		HX_STACK_VAR(area,"area");
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(418)
					_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
					HX_STACK_LINE(418)
					_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
					HX_STACK_LINE(418)
					_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
					HX_STACK_LINE(418)
					_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
				}
				struct _Function_3_2{
					inline static Float Block( ){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(418)
							return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				Float carea = _Function_3_2::Block();		HX_STACK_VAR(carea,"carea");
				HX_STACK_LINE(418)
				Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
				HX_STACK_LINE(418)
				Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
				struct _Function_3_3{
					inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(418)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(418)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(418)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(418)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										HX_STACK_LINE(418)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(418)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
												{
													HX_STACK_LINE(418)
													::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(418)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										Float oarea = _Function_5_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
												{
													HX_STACK_LINE(418)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(418)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(418)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							return (  (((child1->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child1,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				Float cost1 = _Function_3_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
				struct _Function_3_4{
					inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							{
								HX_STACK_LINE(418)
								::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(418)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(418)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(418)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(418)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							struct _Function_4_1{
								inline static Float Block( ){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										HX_STACK_LINE(418)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(418)
										return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										struct _Function_5_1{
											inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
												{
													HX_STACK_LINE(418)
													::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(418)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										Float oarea = _Function_5_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
										struct _Function_5_2{
											inline static Float Block( ){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
												{
													HX_STACK_LINE(418)
													::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(418)
													return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										Float narea = _Function_5_2::Block();		HX_STACK_VAR(narea,"narea");
										HX_STACK_LINE(418)
										return ((narea - oarea) + icost);
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							return (  (((child2->child1 == null()))) ? Float((_Function_4_1::Block() + icost)) : Float(_Function_4_2::Block(child2,icost)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				Float cost2 = _Function_3_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
				HX_STACK_LINE(418)
				if (((bool((cost < cost1)) && bool((cost < cost2))))){
					HX_STACK_LINE(418)
					break;
				}
				else{
					HX_STACK_LINE(418)
					node = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
				}
			}
			HX_STACK_LINE(418)
			::zpp_nape::space::ZPP_AABBNode sibling = node;		HX_STACK_VAR(sibling,"sibling");
			HX_STACK_LINE(418)
			::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
			HX_STACK_LINE(418)
			::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
					HX_STACK_LINE(418)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
				}
				else{
					HX_STACK_LINE(418)
					nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
					HX_STACK_LINE(418)
					::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
					HX_STACK_LINE(418)
					nparent->next = null();
				}
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					{
						HX_STACK_LINE(418)
						if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
							HX_STACK_LINE(418)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
						}
						else{
							HX_STACK_LINE(418)
							nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
							HX_STACK_LINE(418)
							::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
							HX_STACK_LINE(418)
							nparent->aabb->next = null();
						}
						HX_STACK_LINE(418)
						Dynamic();
					}
					HX_STACK_LINE(418)
					nparent->moved = false;
					HX_STACK_LINE(418)
					nparent->synced = false;
					HX_STACK_LINE(418)
					nparent->first_sync = false;
				}
			}
			HX_STACK_LINE(418)
			nparent->parent = oparent;
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(418)
				::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(418)
				_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
				HX_STACK_LINE(418)
				_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
				HX_STACK_LINE(418)
				_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
				HX_STACK_LINE(418)
				_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
			}
			HX_STACK_LINE(418)
			nparent->height = (sibling->height + (int)1);
			HX_STACK_LINE(418)
			if (((oparent != null()))){
				HX_STACK_LINE(418)
				if (((oparent->child1 == sibling))){
					HX_STACK_LINE(418)
					oparent->child1 = nparent;
				}
				else{
					HX_STACK_LINE(418)
					oparent->child2 = nparent;
				}
				HX_STACK_LINE(418)
				nparent->child1 = sibling;
				HX_STACK_LINE(418)
				nparent->child2 = leaf;
				HX_STACK_LINE(418)
				sibling->parent = nparent;
				HX_STACK_LINE(418)
				leaf->parent = nparent;
			}
			else{
				HX_STACK_LINE(418)
				nparent->child1 = sibling;
				HX_STACK_LINE(418)
				nparent->child2 = leaf;
				HX_STACK_LINE(418)
				sibling->parent = nparent;
				HX_STACK_LINE(418)
				leaf->parent = nparent;
				HX_STACK_LINE(418)
				this->root = nparent;
			}
			HX_STACK_LINE(418)
			node = leaf->parent;
			HX_STACK_LINE(418)
			while(((node != null()))){
				struct _Function_3_1{
					inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							::zpp_nape::space::ZPP_AABBNode b = node->child1;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(418)
							::zpp_nape::space::ZPP_AABBNode c = node->child2;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(418)
							int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
							struct _Function_4_1{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										HX_STACK_LINE(418)
										::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(418)
										::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(418)
										c->child1 = node;
										HX_STACK_LINE(418)
										c->parent = node->parent;
										HX_STACK_LINE(418)
										node->parent = c;
										HX_STACK_LINE(418)
										if (((c->parent != null()))){
											HX_STACK_LINE(418)
											if (((c->parent->child1 == node))){
												HX_STACK_LINE(418)
												c->parent->child1 = c;
											}
											else{
												HX_STACK_LINE(418)
												c->parent->child2 = c;
											}
										}
										else{
											HX_STACK_LINE(418)
											__this->root = c;
										}
										HX_STACK_LINE(418)
										if (((f->height > g->height))){
											HX_STACK_LINE(418)
											c->child2 = f;
											HX_STACK_LINE(418)
											node->child2 = g;
											HX_STACK_LINE(418)
											g->parent = node;
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											node->height = ((int)1 + _Function_6_1::Block(b,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											c->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(418)
											c->child2 = g;
											HX_STACK_LINE(418)
											node->child2 = f;
											HX_STACK_LINE(418)
											f->parent = node;
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = b->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											node->height = ((int)1 + _Function_6_1::Block(b,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											c->height = ((int)1 + _Function_6_2::Block(node,g));
										}
										HX_STACK_LINE(418)
										return c;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBTree_obj *__this,::zpp_nape::space::ZPP_AABBNode &c){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
									{
										HX_STACK_LINE(418)
										::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(418)
										::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(418)
										b->child1 = node;
										HX_STACK_LINE(418)
										b->parent = node->parent;
										HX_STACK_LINE(418)
										node->parent = b;
										HX_STACK_LINE(418)
										if (((b->parent != null()))){
											HX_STACK_LINE(418)
											if (((b->parent->child1 == node))){
												HX_STACK_LINE(418)
												b->parent->child1 = b;
											}
											else{
												HX_STACK_LINE(418)
												b->parent->child2 = b;
											}
										}
										else{
											HX_STACK_LINE(418)
											__this->root = b;
										}
										HX_STACK_LINE(418)
										if (((f->height > g->height))){
											HX_STACK_LINE(418)
											b->child2 = f;
											HX_STACK_LINE(418)
											node->child1 = g;
											HX_STACK_LINE(418)
											g->parent = node;
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											node->height = ((int)1 + _Function_6_1::Block(c,g));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											b->height = ((int)1 + _Function_6_2::Block(node,f));
										}
										else{
											HX_STACK_LINE(418)
											b->child2 = g;
											HX_STACK_LINE(418)
											node->child1 = f;
											HX_STACK_LINE(418)
											f->parent = node;
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											HX_STACK_LINE(418)
											{
												HX_STACK_LINE(418)
												::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB a = node->aabb;		HX_STACK_VAR(a,"a");
												::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(418)
												_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
												HX_STACK_LINE(418)
												_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
												HX_STACK_LINE(418)
												_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
												HX_STACK_LINE(418)
												_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
											}
											struct _Function_6_1{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = c->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = f->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											node->height = ((int)1 + _Function_6_1::Block(c,f));
											struct _Function_6_2{
												inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::space::ZPP_AABBNode &g){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
													{
														HX_STACK_LINE(418)
														int x = node->height;		HX_STACK_VAR(x,"x");
														HX_STACK_LINE(418)
														int y = g->height;		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(418)
														return (  (((x > y))) ? int(x) : int(y) );
													}
													return null();
												}
											};
											HX_STACK_LINE(418)
											b->height = ((int)1 + _Function_6_2::Block(node,g));
										}
										HX_STACK_LINE(418)
										return b;
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_1::Block(node,__this,b,c)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_4_2::Block(b,node,__this,c)) : ::zpp_nape::space::ZPP_AABBNode(node) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				node = (  (((bool((node->child1 == null())) || bool((node->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node) : ::zpp_nape::space::ZPP_AABBNode(_Function_3_1::Block(node,this)) );
				HX_STACK_LINE(418)
				::zpp_nape::space::ZPP_AABBNode child1 = node->child1;		HX_STACK_VAR(child1,"child1");
				HX_STACK_LINE(418)
				::zpp_nape::space::ZPP_AABBNode child2 = node->child2;		HX_STACK_VAR(child2,"child2");
				struct _Function_3_2{
					inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",418);
						{
							HX_STACK_LINE(418)
							int x = child1->height;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(418)
							int y = child2->height;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(418)
							return (  (((x > y))) ? int(x) : int(y) );
						}
						return null();
					}
				};
				HX_STACK_LINE(418)
				node->height = ((int)1 + _Function_3_2::Block(child1,child2));
				HX_STACK_LINE(418)
				{
					HX_STACK_LINE(418)
					::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
					::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
					::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(418)
					_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
					HX_STACK_LINE(418)
					_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
					HX_STACK_LINE(418)
					_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
					HX_STACK_LINE(418)
					_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
				}
				HX_STACK_LINE(418)
				node = node->parent;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_AABBTree_obj,insertLeaf,(void))

Void ZPP_AABBTree_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_AABBTree::clear","zpp_nape/space/DynAABBPhase.hx",336);
		HX_STACK_THIS(this);
		HX_STACK_LINE(337)
		if (((this->root == null()))){
			HX_STACK_LINE(337)
			return null();
		}
		HX_STACK_LINE(338)
		::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(339)
		{
			HX_STACK_LINE(340)
			{
			}
			HX_STACK_LINE(348)
			this->root->next = stack;
			HX_STACK_LINE(349)
			stack = this->root;
		}
		HX_STACK_LINE(351)
		while(((stack != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",352);
					{
						HX_STACK_LINE(353)
						{
						}
						HX_STACK_LINE(361)
						::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(362)
						stack = ret->next;
						HX_STACK_LINE(363)
						ret->next = null();
						HX_STACK_LINE(364)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(352)
			::zpp_nape::space::ZPP_AABBNode node = _Function_2_1::Block(stack);		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(366)
			if (((node->child1 == null()))){
				HX_STACK_LINE(367)
				node->shape->node = null();
				HX_STACK_LINE(368)
				node->shape->removedFromSpace();
				HX_STACK_LINE(369)
				node->shape = null();
			}
			else{
				HX_STACK_LINE(372)
				if (((node->child1 != null()))){
					HX_STACK_LINE(373)
					{
					}
					HX_STACK_LINE(381)
					node->child1->next = stack;
					HX_STACK_LINE(382)
					stack = node->child1;
				}
				HX_STACK_LINE(384)
				if (((node->child2 != null()))){
					HX_STACK_LINE(385)
					{
					}
					HX_STACK_LINE(393)
					node->child2->next = stack;
					HX_STACK_LINE(394)
					stack = node->child2;
				}
			}
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(398)
				::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(399)
				{
				}
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					o->height = (int)-1;
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
						HX_STACK_LINE(407)
						{
						}
						HX_STACK_LINE(407)
						{
							HX_STACK_LINE(407)
							if (((o1->outer != null()))){
								HX_STACK_LINE(407)
								o1->outer->zpp_inner = null();
								HX_STACK_LINE(407)
								o1->outer = null();
							}
							HX_STACK_LINE(407)
							o1->wrap_min = o1->wrap_max = null();
							HX_STACK_LINE(407)
							o1->_invalidate = null();
							HX_STACK_LINE(407)
							o1->_validate = null();
						}
						HX_STACK_LINE(407)
						o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(407)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
					}
					HX_STACK_LINE(407)
					o->child1 = o->child2 = o->parent = null();
					HX_STACK_LINE(407)
					o->next = null();
					HX_STACK_LINE(407)
					o->snext = null();
					HX_STACK_LINE(407)
					o->mnext = null();
				}
				HX_STACK_LINE(408)
				o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(409)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(415)
		this->root = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_AABBTree_obj,clear,(void))

::zpp_nape::geom::ZPP_AABB ZPP_AABBTree_obj::tmpaabb;


ZPP_AABBTree_obj::ZPP_AABBTree_obj()
{
}

void ZPP_AABBTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_AABBTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void ZPP_AABBTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

Dynamic ZPP_AABBTree_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { return tmpaabb; }
		if (HX_FIELD_EQ(inName,"balance") ) { return balance_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeLeaf") ) { return removeLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"insertLeaf") ) { return insertLeaf_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inlined_removeLeaf") ) { return inlined_removeLeaf_dyn(); }
		if (HX_FIELD_EQ(inName,"inlined_insertLeaf") ) { return inlined_insertLeaf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_AABBTree_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tmpaabb") ) { tmpaabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_AABBTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("root"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("tmpaabb"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("balance"),
	HX_CSTRING("inlined_removeLeaf"),
	HX_CSTRING("removeLeaf"),
	HX_CSTRING("inlined_insertLeaf"),
	HX_CSTRING("insertLeaf"),
	HX_CSTRING("clear"),
	HX_CSTRING("root"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_AABBTree_obj::tmpaabb,"tmpaabb");
};

Class ZPP_AABBTree_obj::__mClass;

void ZPP_AABBTree_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_AABBTree"), hx::TCanCast< ZPP_AABBTree_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_AABBTree_obj::__boot()
{
	tmpaabb= ::zpp_nape::geom::ZPP_AABB_obj::__new();
}

} // end namespace zpp_nape
} // end namespace space
