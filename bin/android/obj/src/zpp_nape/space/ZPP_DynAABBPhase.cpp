#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_RayResult
#include <nape/geom/RayResult.h>
#endif
#ifndef INCLUDED_nape_geom_RayResultList
#include <nape/geom/RayResultList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Collide
#include <zpp_nape/geom/ZPP_Collide.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_ConvexRayResult
#include <zpp_nape/geom/ZPP_ConvexRayResult.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Ray
#include <zpp_nape/geom/ZPP_Ray.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBNode
#include <zpp_nape/space/ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBTree
#include <zpp_nape/space/ZPP_AABBTree.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_DynAABBPhase
#include <zpp_nape/space/ZPP_DynAABBPhase.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBNode
#include <zpp_nape/util/ZNPList_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_AABBPair
#include <zpp_nape/util/ZNPList_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBNode
#include <zpp_nape/util/ZNPNode_ZPP_AABBNode.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_AABBPair
#include <zpp_nape/util/ZNPNode_ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
namespace zpp_nape{
namespace space{

Void ZPP_DynAABBPhase_obj::__construct(::zpp_nape::space::ZPP_Space space)
{
HX_STACK_PUSH("ZPP_DynAABBPhase::new","zpp_nape/space/DynAABBPhase.hx",686);
{
	HX_STACK_LINE(2812)
	this->openlist = null();
	HX_STACK_LINE(2268)
	this->failed = null();
	HX_STACK_LINE(2124)
	this->treeStack2 = null();
	HX_STACK_LINE(1923)
	this->treeStack = null();
	HX_STACK_LINE(695)
	this->moves = null();
	HX_STACK_LINE(694)
	this->syncs = null();
	HX_STACK_LINE(693)
	this->pairs = null();
	HX_STACK_LINE(692)
	this->dtree = null();
	HX_STACK_LINE(691)
	this->stree = null();
	HX_STACK_LINE(697)
	this->space = space;
	HX_STACK_LINE(698)
	this->is_sweep = false;
	HX_STACK_LINE(699)
	this->dynab = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(700)
	this->stree = ::zpp_nape::space::ZPP_AABBTree_obj::__new();
	HX_STACK_LINE(701)
	this->dtree = ::zpp_nape::space::ZPP_AABBTree_obj::__new();
}
;
	return null();
}

ZPP_DynAABBPhase_obj::~ZPP_DynAABBPhase_obj() { }

Dynamic ZPP_DynAABBPhase_obj::__CreateEmpty() { return  new ZPP_DynAABBPhase_obj; }
hx::ObjectPtr< ZPP_DynAABBPhase_obj > ZPP_DynAABBPhase_obj::__new(::zpp_nape::space::ZPP_Space space)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > result = new ZPP_DynAABBPhase_obj();
	result->__construct(space);
	return result;}

Dynamic ZPP_DynAABBPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_DynAABBPhase_obj > result = new ZPP_DynAABBPhase_obj();
	result->__construct(inArgs[0]);
	return result;}

::nape::geom::RayResultList ZPP_DynAABBPhase_obj::rayMultiCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::geom::RayResultList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::rayMultiCast","zpp_nape/space/DynAABBPhase.hx",2942);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2943)
	if (((this->openlist == null()))){
		HX_STACK_LINE(2943)
		this->openlist = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
	}
	HX_STACK_LINE(2944)
	this->sync_broadphase();
	HX_STACK_LINE(2945)
	ray->validate_dir();
	HX_STACK_LINE(2946)
	bool inf = (ray->maxdist >= ::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(inf,"inf");
	HX_STACK_LINE(2947)
	::nape::geom::RayResultList ret = (  (((output == null()))) ? ::nape::geom::RayResultList(::nape::geom::RayResultList_obj::__new()) : ::nape::geom::RayResultList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2948)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2949)
		if ((ray->aabbtest(this->dtree->root->aabb))){
			HX_STACK_LINE(2950)
			if ((inf)){
				HX_STACK_LINE(2951)
				this->openlist->add(this->dtree->root);
			}
			else{
				HX_STACK_LINE(2953)
				Float t = ray->aabbsect(this->dtree->root->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2954)
				if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
					HX_STACK_LINE(2954)
					this->openlist->add(this->dtree->root);
				}
			}
		}
	}
	HX_STACK_LINE(2959)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2960)
		if ((ray->aabbtest(this->stree->root->aabb))){
			HX_STACK_LINE(2961)
			if ((inf)){
				HX_STACK_LINE(2962)
				this->openlist->add(this->stree->root);
			}
			else{
				HX_STACK_LINE(2964)
				Float t = ray->aabbsect(this->stree->root->aabb);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(2965)
				if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
					HX_STACK_LINE(2965)
					this->openlist->add(this->stree->root);
				}
			}
		}
	}
	HX_STACK_LINE(2970)
	while((!(((this->openlist->head == null()))))){
		HX_STACK_LINE(2971)
		::zpp_nape::space::ZPP_AABBNode cnode = this->openlist->pop_unsafe();		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2972)
		if (((cnode->child1 == null()))){
			HX_STACK_LINE(2973)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2974);
					{
						HX_STACK_LINE(2974)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2974)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2974)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(2974)
				if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
					HX_STACK_LINE(2975)
					ray->circlesect2(shape->circle,inner,ret);
				}
				else{
					HX_STACK_LINE(2976)
					if ((ray->aabbtest(shape->aabb))){
						HX_STACK_LINE(2976)
						ray->polysect2(shape->polygon,inner,ret);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2980)
			if (((cnode->child1 != null()))){
				HX_STACK_LINE(2981)
				if ((ray->aabbtest(cnode->child1->aabb))){
					HX_STACK_LINE(2982)
					if ((inf)){
						HX_STACK_LINE(2983)
						this->openlist->add(cnode->child1);
					}
					else{
						HX_STACK_LINE(2985)
						Float t = ray->aabbsect(cnode->child1->aabb);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2986)
						if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
							HX_STACK_LINE(2986)
							this->openlist->add(cnode->child1);
						}
					}
				}
			}
			HX_STACK_LINE(2991)
			if (((cnode->child2 != null()))){
				HX_STACK_LINE(2992)
				if ((ray->aabbtest(cnode->child2->aabb))){
					HX_STACK_LINE(2993)
					if ((inf)){
						HX_STACK_LINE(2994)
						this->openlist->add(cnode->child2);
					}
					else{
						HX_STACK_LINE(2996)
						Float t = ray->aabbsect(cnode->child2->aabb);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2997)
						if (((bool((t >= (int)0)) && bool((t < ray->maxdist))))){
							HX_STACK_LINE(2997)
							this->openlist->add(cnode->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(3004)
	this->openlist->clear();
	HX_STACK_LINE(3005)
	return ret;
}


::nape::geom::RayResult ZPP_DynAABBPhase_obj::rayCast( ::zpp_nape::geom::ZPP_Ray ray,bool inner,::zpp_nape::dynamics::ZPP_InteractionFilter filter){
	HX_STACK_PUSH("ZPP_DynAABBPhase::rayCast","zpp_nape/space/DynAABBPhase.hx",2813);
	HX_STACK_THIS(this);
	HX_STACK_ARG(ray,"ray");
	HX_STACK_ARG(inner,"inner");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(2814)
	if (((this->openlist == null()))){
		HX_STACK_LINE(2814)
		this->openlist = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
	}
	HX_STACK_LINE(2815)
	this->sync_broadphase();
	HX_STACK_LINE(2816)
	ray->validate_dir();
	HX_STACK_LINE(2817)
	Float mint = ray->maxdist;		HX_STACK_VAR(mint,"mint");
	HX_STACK_LINE(2818)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2819)
		if ((ray->aabbtest(this->dtree->root->aabb))){
			HX_STACK_LINE(2821)
			Float t = ray->aabbsect(this->dtree->root->aabb);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2822)
			if (((bool((t >= (int)0)) && bool((t < mint))))){
				HX_STACK_LINE(2823)
				this->dtree->root->rayt = t;
				HX_STACK_LINE(2824)
				{
					HX_STACK_LINE(2825)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(2826)
					{
						HX_STACK_LINE(2827)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2828)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2829)
							::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2830)
							{
								HX_STACK_LINE(2831)
								if (((this->dtree->root->rayt < j->rayt))){
									HX_STACK_LINE(2831)
									break;
								}
								HX_STACK_LINE(2832)
								pre = cx_ite;
							}
							HX_STACK_LINE(2834)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(2837)
					{
						HX_STACK_LINE(2837)
						::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2837)
						{
						}
						struct _Function_6_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2837);
								{
									HX_STACK_LINE(2837)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(2837)
									{
										HX_STACK_LINE(2837)
										if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
											HX_STACK_LINE(2837)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
										}
										else{
											HX_STACK_LINE(2837)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
											HX_STACK_LINE(2837)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
											HX_STACK_LINE(2837)
											ret->next = null();
										}
										HX_STACK_LINE(2837)
										Dynamic();
									}
									HX_STACK_LINE(2837)
									ret->elt = __this->dtree->root;
									HX_STACK_LINE(2837)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(2837)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(2837)
						if (((pre == null()))){
							HX_STACK_LINE(2837)
							temp->next = _this->head;
							HX_STACK_LINE(2837)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(2837)
							temp->next = pre->next;
							HX_STACK_LINE(2837)
							pre->next = temp;
						}
						HX_STACK_LINE(2837)
						_this->pushmod = _this->modified = true;
						HX_STACK_LINE(2837)
						(_this->length)++;
						HX_STACK_LINE(2837)
						temp;
					}
				}
			}
		}
	}
	HX_STACK_LINE(2843)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2844)
		if ((ray->aabbtest(this->stree->root->aabb))){
			HX_STACK_LINE(2846)
			Float t = ray->aabbsect(this->stree->root->aabb);		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(2847)
			if (((bool((t >= (int)0)) && bool((t < mint))))){
				HX_STACK_LINE(2848)
				this->stree->root->rayt = t;
				HX_STACK_LINE(2849)
				{
					HX_STACK_LINE(2850)
					::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(2851)
					{
						HX_STACK_LINE(2852)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(2853)
						while(((cx_ite != null()))){
							HX_STACK_LINE(2854)
							::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
							HX_STACK_LINE(2855)
							{
								HX_STACK_LINE(2856)
								if (((this->stree->root->rayt < j->rayt))){
									HX_STACK_LINE(2856)
									break;
								}
								HX_STACK_LINE(2857)
								pre = cx_ite;
							}
							HX_STACK_LINE(2859)
							cx_ite = cx_ite->next;
						}
					}
					HX_STACK_LINE(2862)
					{
						HX_STACK_LINE(2862)
						::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2862)
						{
						}
						struct _Function_6_1{
							inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2862);
								{
									HX_STACK_LINE(2862)
									::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(2862)
									{
										HX_STACK_LINE(2862)
										if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
											HX_STACK_LINE(2862)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
										}
										else{
											HX_STACK_LINE(2862)
											ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
											HX_STACK_LINE(2862)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
											HX_STACK_LINE(2862)
											ret->next = null();
										}
										HX_STACK_LINE(2862)
										Dynamic();
									}
									HX_STACK_LINE(2862)
									ret->elt = __this->stree->root;
									HX_STACK_LINE(2862)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(2862)
						::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_6_1::Block(this);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(2862)
						if (((pre == null()))){
							HX_STACK_LINE(2862)
							temp->next = _this->head;
							HX_STACK_LINE(2862)
							_this->head = temp;
						}
						else{
							HX_STACK_LINE(2862)
							temp->next = pre->next;
							HX_STACK_LINE(2862)
							pre->next = temp;
						}
						HX_STACK_LINE(2862)
						_this->pushmod = _this->modified = true;
						HX_STACK_LINE(2862)
						(_this->length)++;
						HX_STACK_LINE(2862)
						temp;
					}
				}
			}
		}
	}
	HX_STACK_LINE(2868)
	::nape::geom::RayResult minres = null();		HX_STACK_VAR(minres,"minres");
	HX_STACK_LINE(2869)
	while((!(((this->openlist->head == null()))))){
		HX_STACK_LINE(2870)
		::zpp_nape::space::ZPP_AABBNode cnode = this->openlist->pop_unsafe();		HX_STACK_VAR(cnode,"cnode");
		HX_STACK_LINE(2871)
		if (((cnode->rayt >= mint))){
			HX_STACK_LINE(2871)
			break;
		}
		HX_STACK_LINE(2872)
		if (((cnode->child1 == null()))){
			HX_STACK_LINE(2873)
			::zpp_nape::shape::ZPP_Shape shape = cnode->shape;		HX_STACK_VAR(shape,"shape");
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &shape,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2874);
					{
						HX_STACK_LINE(2874)
						::zpp_nape::dynamics::ZPP_InteractionFilter _this = shape->filter;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2874)
						return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2874)
			if (((bool((filter == null())) || bool(_Function_3_1::Block(shape,filter))))){
				HX_STACK_LINE(2875)
				::nape::geom::RayResult result = (  (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))) ? ::nape::geom::RayResult(ray->circlesect(shape->circle,inner,mint)) : ::nape::geom::RayResult((  ((ray->aabbtest(shape->aabb))) ? ::nape::geom::RayResult(ray->polysect(shape->polygon,inner,mint)) : ::nape::geom::RayResult(null()) )) );		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(2877)
				if (((result != null()))){
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::RayResult &result){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2878);
							{
								HX_STACK_LINE(2878)
								if (((result->zpp_inner->next != null()))){
									HX_STACK_LINE(2878)
									hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
								}
								HX_STACK_LINE(2878)
								return result->zpp_inner->toiDistance;
							}
							return null();
						}
					};
					HX_STACK_LINE(2878)
					mint = _Function_5_1::Block(result);
					HX_STACK_LINE(2879)
					if (((minres != null()))){
						HX_STACK_LINE(2880)
						if (((minres->zpp_inner->next != null()))){
							HX_STACK_LINE(2880)
							hx::Throw (HX_CSTRING("Error: This object has been disposed of and cannot be used"));
						}
						HX_STACK_LINE(2880)
						minres->zpp_inner->free();
					}
					HX_STACK_LINE(2882)
					minres = result;
				}
			}
		}
		else{
			HX_STACK_LINE(2887)
			if (((cnode->child1 != null()))){
				HX_STACK_LINE(2888)
				if ((ray->aabbtest(cnode->child1->aabb))){
					HX_STACK_LINE(2890)
					Float t = ray->aabbsect(cnode->child1->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2891)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(2892)
						cnode->child1->rayt = t;
						HX_STACK_LINE(2893)
						{
							HX_STACK_LINE(2894)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
							HX_STACK_LINE(2895)
							{
								HX_STACK_LINE(2896)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(2897)
								while(((cx_ite != null()))){
									HX_STACK_LINE(2898)
									::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(2899)
									{
										HX_STACK_LINE(2900)
										if (((cnode->child1->rayt < j->rayt))){
											HX_STACK_LINE(2900)
											break;
										}
										HX_STACK_LINE(2901)
										pre = cx_ite;
									}
									HX_STACK_LINE(2903)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(2906)
							{
								HX_STACK_LINE(2906)
								::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2906)
								{
								}
								struct _Function_8_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &cnode){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2906);
										{
											HX_STACK_LINE(2906)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(2906)
											{
												HX_STACK_LINE(2906)
												if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
													HX_STACK_LINE(2906)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
												}
												else{
													HX_STACK_LINE(2906)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
													HX_STACK_LINE(2906)
													::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
													HX_STACK_LINE(2906)
													ret->next = null();
												}
												HX_STACK_LINE(2906)
												Dynamic();
											}
											HX_STACK_LINE(2906)
											ret->elt = cnode->child1;
											HX_STACK_LINE(2906)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(2906)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_8_1::Block(cnode);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(2906)
								if (((pre == null()))){
									HX_STACK_LINE(2906)
									temp->next = _this->head;
									HX_STACK_LINE(2906)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(2906)
									temp->next = pre->next;
									HX_STACK_LINE(2906)
									pre->next = temp;
								}
								HX_STACK_LINE(2906)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(2906)
								(_this->length)++;
								HX_STACK_LINE(2906)
								temp;
							}
						}
					}
				}
			}
			HX_STACK_LINE(2912)
			if (((cnode->child2 != null()))){
				HX_STACK_LINE(2913)
				if ((ray->aabbtest(cnode->child2->aabb))){
					HX_STACK_LINE(2915)
					Float t = ray->aabbsect(cnode->child2->aabb);		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2916)
					if (((bool((t >= (int)0)) && bool((t < mint))))){
						HX_STACK_LINE(2917)
						cnode->child2->rayt = t;
						HX_STACK_LINE(2918)
						{
							HX_STACK_LINE(2919)
							::zpp_nape::util::ZNPNode_ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
							HX_STACK_LINE(2920)
							{
								HX_STACK_LINE(2921)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode cx_ite = this->openlist->head;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(2922)
								while(((cx_ite != null()))){
									HX_STACK_LINE(2923)
									::zpp_nape::space::ZPP_AABBNode j = cx_ite->elt;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(2924)
									{
										HX_STACK_LINE(2925)
										if (((cnode->child2->rayt < j->rayt))){
											HX_STACK_LINE(2925)
											break;
										}
										HX_STACK_LINE(2926)
										pre = cx_ite;
									}
									HX_STACK_LINE(2928)
									cx_ite = cx_ite->next;
								}
							}
							HX_STACK_LINE(2931)
							{
								HX_STACK_LINE(2931)
								::zpp_nape::util::ZNPList_ZPP_AABBNode _this = this->openlist;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2931)
								{
								}
								struct _Function_8_1{
									inline static ::zpp_nape::util::ZNPNode_ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &cnode){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2931);
										{
											HX_STACK_LINE(2931)
											::zpp_nape::util::ZNPNode_ZPP_AABBNode ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(2931)
											{
												HX_STACK_LINE(2931)
												if (((::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool == null()))){
													HX_STACK_LINE(2931)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::__new();
												}
												else{
													HX_STACK_LINE(2931)
													ret = ::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool;
													HX_STACK_LINE(2931)
													::zpp_nape::util::ZNPNode_ZPP_AABBNode_obj::zpp_pool = ret->next;
													HX_STACK_LINE(2931)
													ret->next = null();
												}
												HX_STACK_LINE(2931)
												Dynamic();
											}
											HX_STACK_LINE(2931)
											ret->elt = cnode->child2;
											HX_STACK_LINE(2931)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(2931)
								::zpp_nape::util::ZNPNode_ZPP_AABBNode temp = _Function_8_1::Block(cnode);		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(2931)
								if (((pre == null()))){
									HX_STACK_LINE(2931)
									temp->next = _this->head;
									HX_STACK_LINE(2931)
									_this->head = temp;
								}
								else{
									HX_STACK_LINE(2931)
									temp->next = pre->next;
									HX_STACK_LINE(2931)
									pre->next = temp;
								}
								HX_STACK_LINE(2931)
								_this->pushmod = _this->modified = true;
								HX_STACK_LINE(2931)
								(_this->length)++;
								HX_STACK_LINE(2931)
								temp;
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2939)
	this->openlist->clear();
	HX_STACK_LINE(2940)
	return minres;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInShape","zpp_nape/space/DynAABBPhase.hx",2713);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shp,"shp");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2714)
	this->sync_broadphase();
	HX_STACK_LINE(2715)
	this->validateShape(shp);
	HX_STACK_LINE(2716)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2717)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2718)
	if (((this->failed == null()))){
		HX_STACK_LINE(2718)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2719)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2722)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2722)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2723)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2724)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2725)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2726)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2734);
					{
						HX_STACK_LINE(2734)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2734)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2734)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2734)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2737)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2738);
							{
								HX_STACK_LINE(2738)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2738)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2738)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2738)
						if ((containment)){
							HX_STACK_LINE(2739)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2741)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2742)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2742)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2743)
									if ((!(col))){
										HX_STACK_LINE(2744)
										ret->remove(body);
										HX_STACK_LINE(2745)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2749)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))))){
								HX_STACK_LINE(2749)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2756)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2756)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2757)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2757)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2764)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2767)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2767)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2768)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2769)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2770)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2771)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2779);
					{
						HX_STACK_LINE(2779)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2779)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2779)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2779)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2782)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2783);
							{
								HX_STACK_LINE(2783)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2783)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2783)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2783)
						if ((containment)){
							HX_STACK_LINE(2784)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2786)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2787)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2787)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2788)
									if ((!(col))){
										HX_STACK_LINE(2789)
										ret->remove(body);
										HX_STACK_LINE(2790)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2794)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))))){
								HX_STACK_LINE(2794)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2801)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2801)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2802)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2802)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2809)
	this->failed->clear();
	HX_STACK_LINE(2810)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInShape( ::zpp_nape::shape::ZPP_Shape shp,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInShape","zpp_nape/space/DynAABBPhase.hx",2636);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shp,"shp");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2637)
	this->sync_broadphase();
	HX_STACK_LINE(2638)
	this->validateShape(shp);
	HX_STACK_LINE(2639)
	::zpp_nape::geom::ZPP_AABB ab = shp->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2640)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2641)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2644)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2644)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2645)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2646)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2647)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2648)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2656);
					{
						HX_STACK_LINE(2656)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2656)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2656)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2656)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2659);
							{
								HX_STACK_LINE(2659)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2659)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2657)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2659)
						if ((containment)){
							HX_STACK_LINE(2660)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape))){
								HX_STACK_LINE(2661)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2663)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))){
								HX_STACK_LINE(2663)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2668)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2668)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2669)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2669)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2676)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2679)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2679)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2680)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2681)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2682)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2683)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2691);
					{
						HX_STACK_LINE(2691)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2691)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2691)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2691)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2694);
							{
								HX_STACK_LINE(2694)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2694)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2692)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2694)
						if ((containment)){
							HX_STACK_LINE(2695)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(shp,node->shape))){
								HX_STACK_LINE(2696)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2698)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,shp))){
								HX_STACK_LINE(2698)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2703)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2703)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2704)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2704)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2711)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInCircle","zpp_nape/space/DynAABBPhase.hx",2537);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2538)
	this->sync_broadphase();
	HX_STACK_LINE(2539)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(2540)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2541)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2542)
	if (((this->failed == null()))){
		HX_STACK_LINE(2542)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2543)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2546)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2546)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2547)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2548)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2549)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2550)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2558);
					{
						HX_STACK_LINE(2558)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2558)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2558)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2558)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2561)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2562);
							{
								HX_STACK_LINE(2562)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2562)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2562)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2562)
						if ((containment)){
							HX_STACK_LINE(2563)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2565)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2566)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2566)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2567)
									if ((!(col))){
										HX_STACK_LINE(2568)
										ret->remove(body);
										HX_STACK_LINE(2569)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2573)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))))){
								HX_STACK_LINE(2573)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2580)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2580)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2581)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2581)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2588)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2591)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2591)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2592)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2593)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2594)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2595)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2603);
					{
						HX_STACK_LINE(2603)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2603)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2603)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2603)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2606)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2607);
							{
								HX_STACK_LINE(2607)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2607)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2607)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2607)
						if ((containment)){
							HX_STACK_LINE(2608)
							if ((!(this->failed->has(body)))){
								HX_STACK_LINE(2610)
								bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
								HX_STACK_LINE(2611)
								if (((bool(!(ret->has(body))) && bool(col)))){
									HX_STACK_LINE(2611)
									ret->push(body);
								}
								else{
									HX_STACK_LINE(2612)
									if ((!(col))){
										HX_STACK_LINE(2613)
										ret->remove(body);
										HX_STACK_LINE(2614)
										this->failed->push(body);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(2618)
							if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))))){
								HX_STACK_LINE(2618)
								ret->push(body);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2625)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2625)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2626)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2626)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2633)
	this->failed->clear();
	HX_STACK_LINE(2634)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInCircle( Float x,Float y,Float r,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInCircle","zpp_nape/space/DynAABBPhase.hx",2460);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(r,"r");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2461)
	this->sync_broadphase();
	HX_STACK_LINE(2462)
	this->updateCircShape(x,y,r);
	HX_STACK_LINE(2463)
	::zpp_nape::geom::ZPP_AABB ab = this->circShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2464)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2465)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2468)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2468)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2469)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2470)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2471)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2472)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2480);
					{
						HX_STACK_LINE(2480)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2480)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2480)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2480)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2483);
							{
								HX_STACK_LINE(2483)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2483)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2481)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2483)
						if ((containment)){
							HX_STACK_LINE(2484)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape))){
								HX_STACK_LINE(2485)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2487)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))){
								HX_STACK_LINE(2487)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2492)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2492)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2493)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2493)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2500)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2503)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2503)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2504)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2505)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2506)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2507)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2515);
					{
						HX_STACK_LINE(2515)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2515)
						return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2515)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2515)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2518);
							{
								HX_STACK_LINE(2518)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2518)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2516)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2518)
						if ((containment)){
							HX_STACK_LINE(2519)
							if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->circShape->zpp_inner,node->shape))){
								HX_STACK_LINE(2520)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2522)
							if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->circShape->zpp_inner))){
								HX_STACK_LINE(2522)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2527)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2527)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2528)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2528)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2535)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesInAABB","zpp_nape/space/DynAABBPhase.hx",2269);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2270)
	this->sync_broadphase();
	HX_STACK_LINE(2271)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(2272)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2273)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2274)
	if (((this->failed == null()))){
		HX_STACK_LINE(2274)
		this->failed = ::nape::phys::BodyList_obj::__new();
	}
	HX_STACK_LINE(2275)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2278)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2278)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2279)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2280)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2281)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2282)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2290);
					{
						HX_STACK_LINE(2290)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2290)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2290)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2290)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2293);
							{
								HX_STACK_LINE(2293)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2293)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2291)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2294)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2295)
						if ((!(ret->has(body)))){
							HX_STACK_LINE(2295)
							ret->push(body);
						}
					}
				}
				else{
					HX_STACK_LINE(2300)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2300)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2303)
					this->treeStack2->add(node);
					HX_STACK_LINE(2304)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2305)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2306)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2307);
									{
										HX_STACK_LINE(2307)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2307)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2306)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2308)
								::nape::phys::Body body = node1->shape->body->outer;		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(2309)
								if ((!(ret->has(body)))){
									HX_STACK_LINE(2309)
									ret->push(body);
								}
							}
						}
						else{
							HX_STACK_LINE(2313)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2313)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2314)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2314)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2319);
						{
							HX_STACK_LINE(2319)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2319)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2319)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2319)
					if (((node->child1 == null()))){
						HX_STACK_LINE(2322)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2323);
								{
									HX_STACK_LINE(2323)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2323)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2323)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2323)
							if ((strict)){
								HX_STACK_LINE(2324)
								if ((containment)){
									HX_STACK_LINE(2325)
									if ((!(this->failed->has(body)))){
										HX_STACK_LINE(2327)
										bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2328)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2328)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2329)
											if ((!(col))){
												HX_STACK_LINE(2330)
												ret->remove(body);
												HX_STACK_LINE(2331)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2335)
									if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))))){
										HX_STACK_LINE(2335)
										ret->push(body);
									}
								}
							}
							else{
								HX_STACK_LINE(2339)
								if ((containment)){
									HX_STACK_LINE(2340)
									if ((!(this->failed->has(body)))){
										struct _Function_10_1{
											inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2342);
												{
													HX_STACK_LINE(2342)
													::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(2342)
													return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
												}
												return null();
											}
										};
										HX_STACK_LINE(2342)
										bool col = _Function_10_1::Block(node,ab);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2343)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2343)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2344)
											if ((!(col))){
												HX_STACK_LINE(2345)
												ret->remove(body);
												HX_STACK_LINE(2346)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2350);
											{
												HX_STACK_LINE(2350)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2350)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2350)
									if (((bool(!(ret->has(body))) && bool(_Function_9_1::Block(node,ab))))){
										HX_STACK_LINE(2350)
										ret->push(body);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2358)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2358)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2359)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2359)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2366)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2369)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2369)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2370)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2371)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2372)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2373)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2381);
					{
						HX_STACK_LINE(2381)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2381)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2381)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2381)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2384);
							{
								HX_STACK_LINE(2384)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2384)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2382)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2385)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						HX_STACK_LINE(2386)
						if ((!(ret->has(body)))){
							HX_STACK_LINE(2386)
							ret->push(body);
						}
					}
				}
				else{
					HX_STACK_LINE(2391)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2391)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2394)
					this->treeStack2->add(node);
					HX_STACK_LINE(2395)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2396)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2397)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2398);
									{
										HX_STACK_LINE(2398)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2398)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2397)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2399)
								::nape::phys::Body body = node1->shape->body->outer;		HX_STACK_VAR(body,"body");
								HX_STACK_LINE(2400)
								if ((!(ret->has(body)))){
									HX_STACK_LINE(2400)
									ret->push(body);
								}
							}
						}
						else{
							HX_STACK_LINE(2404)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2404)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2405)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2405)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2410);
						{
							HX_STACK_LINE(2410)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2410)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2410)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2410)
					if (((node->child1 == null()))){
						HX_STACK_LINE(2413)
						::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2414);
								{
									HX_STACK_LINE(2414)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2414)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2414)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2414)
							if ((strict)){
								HX_STACK_LINE(2415)
								if ((containment)){
									HX_STACK_LINE(2416)
									if ((!(this->failed->has(body)))){
										HX_STACK_LINE(2418)
										bool col = ::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2419)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2419)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2420)
											if ((!(col))){
												HX_STACK_LINE(2421)
												ret->remove(body);
												HX_STACK_LINE(2422)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									HX_STACK_LINE(2426)
									if (((bool(!(ret->has(body))) && bool(::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))))){
										HX_STACK_LINE(2426)
										ret->push(body);
									}
								}
							}
							else{
								HX_STACK_LINE(2430)
								if ((containment)){
									HX_STACK_LINE(2431)
									if ((!(this->failed->has(body)))){
										struct _Function_10_1{
											inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2433);
												{
													HX_STACK_LINE(2433)
													::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(2433)
													return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
												}
												return null();
											}
										};
										HX_STACK_LINE(2433)
										bool col = _Function_10_1::Block(node,ab);		HX_STACK_VAR(col,"col");
										HX_STACK_LINE(2434)
										if (((bool(!(ret->has(body))) && bool(col)))){
											HX_STACK_LINE(2434)
											ret->push(body);
										}
										else{
											HX_STACK_LINE(2435)
											if ((!(col))){
												HX_STACK_LINE(2436)
												ret->remove(body);
												HX_STACK_LINE(2437)
												this->failed->push(body);
											}
										}
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2441);
											{
												HX_STACK_LINE(2441)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2441)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2441)
									if (((bool(!(ret->has(body))) && bool(_Function_9_1::Block(node,ab))))){
										HX_STACK_LINE(2441)
										ret->push(body);
									}
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2449)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2449)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2450)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2450)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2457)
	this->failed->clear();
	HX_STACK_LINE(2458)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesInAABB( ::zpp_nape::geom::ZPP_AABB aabb,bool strict,bool containment,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesInAABB","zpp_nape/space/DynAABBPhase.hx",2125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(aabb,"aabb");
	HX_STACK_ARG(strict,"strict");
	HX_STACK_ARG(containment,"containment");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2126)
	this->sync_broadphase();
	HX_STACK_LINE(2127)
	this->updateAABBShape(aabb);
	HX_STACK_LINE(2128)
	::zpp_nape::geom::ZPP_AABB ab = this->aabbShape->zpp_inner->aabb;		HX_STACK_VAR(ab,"ab");
	HX_STACK_LINE(2129)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2130)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2133)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2133)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2134)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2135)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2136)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2137)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2145);
					{
						HX_STACK_LINE(2145)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2145)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2145)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2145)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2148);
							{
								HX_STACK_LINE(2148)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2148)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2146)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2148)
						ret->push(node->shape->outer);
					}
				}
				else{
					HX_STACK_LINE(2154)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2154)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2157)
					this->treeStack2->add(node);
					HX_STACK_LINE(2158)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2159)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2160)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2161);
									{
										HX_STACK_LINE(2161)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2161)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2160)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2161)
								ret->push(node1->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2166)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2166)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2167)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2167)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2172);
						{
							HX_STACK_LINE(2172)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2172)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2172)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2172)
					if (((node->child1 == null()))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2175);
								{
									HX_STACK_LINE(2175)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2175)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2173)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2175)
							if ((strict)){
								HX_STACK_LINE(2176)
								if ((containment)){
									HX_STACK_LINE(2177)
									if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape))){
										HX_STACK_LINE(2178)
										ret->push(node->shape->outer);
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2181);
											{
												HX_STACK_LINE(2181)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2181)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2180)
									if ((_Function_9_1::Block(node,ab))){
										HX_STACK_LINE(2181)
										ret->push(node->shape->outer);
									}
									else{
										HX_STACK_LINE(2182)
										if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))){
											HX_STACK_LINE(2182)
											ret->push(node->shape->outer);
										}
									}
								}
							}
							else{
								struct _Function_8_1{
									inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2185);
										{
											HX_STACK_LINE(2185)
											::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2185)
											return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
										}
										return null();
									}
								};
								HX_STACK_LINE(2185)
								if (((bool(!(containment)) || bool(_Function_8_1::Block(node,ab))))){
									HX_STACK_LINE(2185)
									ret->push(node->shape->outer);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2190)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2190)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2191)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2191)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2198)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2201)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2201)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2202)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2203)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2204)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2205)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2213);
					{
						HX_STACK_LINE(2213)
						::zpp_nape::geom::ZPP_AABB x = node->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(2213)
						return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2213)
			if ((_Function_3_1::Block(node,ab))){
				HX_STACK_LINE(2213)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2216);
							{
								HX_STACK_LINE(2216)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2216)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(2214)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(2216)
						ret->push(node->shape->outer);
					}
				}
				else{
					HX_STACK_LINE(2222)
					if (((this->treeStack2 == null()))){
						HX_STACK_LINE(2222)
						this->treeStack2 = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
					}
					HX_STACK_LINE(2225)
					this->treeStack2->add(node);
					HX_STACK_LINE(2226)
					while((!(((this->treeStack2->head == null()))))){
						HX_STACK_LINE(2227)
						::zpp_nape::space::ZPP_AABBNode node1 = this->treeStack2->pop_unsafe();		HX_STACK_VAR(node1,"node1");
						HX_STACK_LINE(2228)
						if (((node1->child1 == null()))){
							struct _Function_7_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2229);
									{
										HX_STACK_LINE(2229)
										::zpp_nape::dynamics::ZPP_InteractionFilter _this = node1->shape->filter;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2229)
										return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
									}
									return null();
								}
							};
							HX_STACK_LINE(2228)
							if (((bool((filter == null())) || bool(_Function_7_1::Block(node1,filter))))){
								HX_STACK_LINE(2229)
								ret->push(node1->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(2234)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(2234)
								this->treeStack2->add(node1->child1);
							}
							HX_STACK_LINE(2235)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(2235)
								this->treeStack2->add(node1->child2);
							}
						}
					}
				}
			}
			else{
				struct _Function_4_1{
					inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
						HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2240);
						{
							HX_STACK_LINE(2240)
							::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(2240)
							return (bool((bool((bool((ab->miny <= _this->maxy)) && bool((_this->miny <= ab->maxy)))) && bool((ab->minx <= _this->maxx)))) && bool((_this->minx <= ab->maxx)));
						}
						return null();
					}
				};
				HX_STACK_LINE(2240)
				if ((_Function_4_1::Block(node,ab))){
					HX_STACK_LINE(2240)
					if (((node->child1 == null()))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2243);
								{
									HX_STACK_LINE(2243)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2243)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2241)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2243)
							if ((strict)){
								HX_STACK_LINE(2244)
								if ((containment)){
									HX_STACK_LINE(2245)
									if ((::zpp_nape::geom::ZPP_Collide_obj::containTest(this->aabbShape->zpp_inner,node->shape))){
										HX_STACK_LINE(2246)
										ret->push(node->shape->outer);
									}
								}
								else{
									struct _Function_9_1{
										inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2249);
											{
												HX_STACK_LINE(2249)
												::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
												HX_STACK_LINE(2249)
												return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
											}
											return null();
										}
									};
									HX_STACK_LINE(2248)
									if ((_Function_9_1::Block(node,ab))){
										HX_STACK_LINE(2249)
										ret->push(node->shape->outer);
									}
									else{
										HX_STACK_LINE(2250)
										if ((::zpp_nape::geom::ZPP_Collide_obj::testCollide_safe(node->shape,this->aabbShape->zpp_inner))){
											HX_STACK_LINE(2250)
											ret->push(node->shape->outer);
										}
									}
								}
							}
							else{
								struct _Function_8_1{
									inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_AABB &ab){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2253);
										{
											HX_STACK_LINE(2253)
											::zpp_nape::geom::ZPP_AABB x = node->shape->aabb;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(2253)
											return (bool((bool((bool((x->minx >= ab->minx)) && bool((x->miny >= ab->miny)))) && bool((x->maxx <= ab->maxx)))) && bool((x->maxy <= ab->maxy)));
										}
										return null();
									}
								};
								HX_STACK_LINE(2253)
								if (((bool(!(containment)) || bool(_Function_8_1::Block(node,ab))))){
									HX_STACK_LINE(2253)
									ret->push(node->shape->outer);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(2258)
						if (((node->child1 != null()))){
							HX_STACK_LINE(2258)
							this->treeStack->add(node->child1);
						}
						HX_STACK_LINE(2259)
						if (((node->child2 != null()))){
							HX_STACK_LINE(2259)
							this->treeStack->add(node->child2);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(2266)
	return ret;
}


::nape::phys::BodyList ZPP_DynAABBPhase_obj::bodiesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::bodiesUnderPoint","zpp_nape/space/DynAABBPhase.hx",2021);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(2022)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2023);
			{
				HX_STACK_LINE(2023)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(2023)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(2023)
				{
					HX_STACK_LINE(2023)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(2023)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(2023)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(2023)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(2023)
						ret->next = null();
					}
					HX_STACK_LINE(2023)
					ret->weak = false;
				}
				HX_STACK_LINE(2023)
				ret->_immutable = immutable;
				HX_STACK_LINE(2023)
				{
					HX_STACK_LINE(2023)
					ret->x = x;
					HX_STACK_LINE(2023)
					ret->y = y;
					HX_STACK_LINE(2023)
					{
					}
					HX_STACK_LINE(2023)
					{
					}
				}
				HX_STACK_LINE(2023)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(2023)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(2024)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(2025)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(2028)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2028)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2029)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(2030)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2031)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2032)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2040);
					{
						HX_STACK_LINE(2040)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2040)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2040)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(2040)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2043)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2044)
					if ((!(ret->has(body)))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2045);
								{
									HX_STACK_LINE(2045)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2045)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2044)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2045)
							if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(2046)
								if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
									HX_STACK_LINE(2047)
									ret->push(body);
								}
							}
							else{
								HX_STACK_LINE(2049)
								if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
									HX_STACK_LINE(2050)
									ret->push(body);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2057)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2057)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2058)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2058)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2065)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(2068)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(2068)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(2069)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(2070)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(2071)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(2072)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2080);
					{
						HX_STACK_LINE(2080)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(2080)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(2080)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(2080)
				if (((node->child1 == null()))){
					HX_STACK_LINE(2083)
					::nape::phys::Body body = node->shape->body->outer;		HX_STACK_VAR(body,"body");
					HX_STACK_LINE(2084)
					if ((!(ret->has(body)))){
						struct _Function_6_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",2085);
								{
									HX_STACK_LINE(2085)
									::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2085)
									return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
								}
								return null();
							}
						};
						HX_STACK_LINE(2084)
						if (((bool((filter == null())) || bool(_Function_6_1::Block(node,filter))))){
							HX_STACK_LINE(2085)
							if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(2086)
								if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
									HX_STACK_LINE(2087)
									ret->push(body);
								}
							}
							else{
								HX_STACK_LINE(2089)
								if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
									HX_STACK_LINE(2090)
									ret->push(body);
								}
							}
						}
					}
				}
				else{
					HX_STACK_LINE(2097)
					if (((node->child1 != null()))){
						HX_STACK_LINE(2097)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(2098)
					if (((node->child2 != null()))){
						HX_STACK_LINE(2098)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2105)
	{
		HX_STACK_LINE(2106)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2107)
		{
		}
		HX_STACK_LINE(2115)
		{
			HX_STACK_LINE(2115)
			if (((o->outer != null()))){
				HX_STACK_LINE(2115)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2115)
				o->outer = null();
			}
			HX_STACK_LINE(2115)
			o->_isimmutable = null();
			HX_STACK_LINE(2115)
			o->_validate = null();
			HX_STACK_LINE(2115)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2116)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(2117)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2122)
	return ret;
}


::nape::shape::ShapeList ZPP_DynAABBPhase_obj::shapesUnderPoint( Float x,Float y,::zpp_nape::dynamics::ZPP_InteractionFilter filter,::nape::shape::ShapeList output){
	HX_STACK_PUSH("ZPP_DynAABBPhase::shapesUnderPoint","zpp_nape/space/DynAABBPhase.hx",1924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(filter,"filter");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(1925)
	this->sync_broadphase();
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1926);
			{
				HX_STACK_LINE(1926)
				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
				HX_STACK_LINE(1926)
				::zpp_nape::geom::ZPP_Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1926)
				{
					HX_STACK_LINE(1926)
					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
						HX_STACK_LINE(1926)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
					}
					else{
						HX_STACK_LINE(1926)
						ret = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1926)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1926)
						ret->next = null();
					}
					HX_STACK_LINE(1926)
					ret->weak = false;
				}
				HX_STACK_LINE(1926)
				ret->_immutable = immutable;
				HX_STACK_LINE(1926)
				{
					HX_STACK_LINE(1926)
					ret->x = x;
					HX_STACK_LINE(1926)
					ret->y = y;
					HX_STACK_LINE(1926)
					{
					}
					HX_STACK_LINE(1926)
					{
					}
				}
				HX_STACK_LINE(1926)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1926)
	::zpp_nape::geom::ZPP_Vec2 v = _Function_1_1::Block(x,y);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(1927)
	::nape::shape::ShapeList ret = (  (((output == null()))) ? ::nape::shape::ShapeList(::nape::shape::ShapeList_obj::__new()) : ::nape::shape::ShapeList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1928)
	if (((this->stree->root != null()))){
		HX_STACK_LINE(1931)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(1931)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(1932)
		this->treeStack->add(this->stree->root);
		HX_STACK_LINE(1933)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(1934)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(1935)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1943);
					{
						HX_STACK_LINE(1943)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1943)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1943)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(1943)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1946);
							{
								HX_STACK_LINE(1946)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1946)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1944)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(1946)
						if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(1947)
							if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
								HX_STACK_LINE(1948)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(1950)
							if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
								HX_STACK_LINE(1951)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1957)
					if (((node->child1 != null()))){
						HX_STACK_LINE(1957)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(1958)
					if (((node->child2 != null()))){
						HX_STACK_LINE(1958)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1965)
	if (((this->dtree->root != null()))){
		HX_STACK_LINE(1968)
		if (((this->treeStack == null()))){
			HX_STACK_LINE(1968)
			this->treeStack = ::zpp_nape::util::ZNPList_ZPP_AABBNode_obj::__new();
		}
		HX_STACK_LINE(1969)
		this->treeStack->add(this->dtree->root);
		HX_STACK_LINE(1970)
		while((!(((this->treeStack->head == null()))))){
			HX_STACK_LINE(1971)
			::zpp_nape::space::ZPP_AABBNode node = this->treeStack->pop_unsafe();		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(1972)
			{
			}
			struct _Function_3_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::geom::ZPP_Vec2 &v){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1980);
					{
						HX_STACK_LINE(1980)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1980)
						return (bool((bool((bool((v->x >= _this->minx)) && bool((v->x <= _this->maxx)))) && bool((v->y >= _this->miny)))) && bool((v->y <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1980)
			if ((_Function_3_1::Block(node,v))){
				HX_STACK_LINE(1980)
				if (((node->child1 == null()))){
					struct _Function_5_1{
						inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::dynamics::ZPP_InteractionFilter &filter){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1983);
							{
								HX_STACK_LINE(1983)
								::zpp_nape::dynamics::ZPP_InteractionFilter _this = node->shape->filter;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1983)
								return (bool((((int(_this->collisionMask) & int(filter->collisionGroup))) != (int)0)) && bool((((int(filter->collisionMask) & int(_this->collisionGroup))) != (int)0)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1981)
					if (((bool((filter == null())) || bool(_Function_5_1::Block(node,filter))))){
						HX_STACK_LINE(1983)
						if (((node->shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(1984)
							if ((::zpp_nape::geom::ZPP_Collide_obj::circleContains(node->shape->circle,v))){
								HX_STACK_LINE(1985)
								ret->push(node->shape->outer);
							}
						}
						else{
							HX_STACK_LINE(1987)
							if ((::zpp_nape::geom::ZPP_Collide_obj::polyContains(node->shape->polygon,v))){
								HX_STACK_LINE(1988)
								ret->push(node->shape->outer);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1994)
					if (((node->child1 != null()))){
						HX_STACK_LINE(1994)
						this->treeStack->add(node->child1);
					}
					HX_STACK_LINE(1995)
					if (((node->child2 != null()))){
						HX_STACK_LINE(1995)
						this->treeStack->add(node->child2);
					}
				}
			}
		}
	}
	HX_STACK_LINE(2002)
	{
		HX_STACK_LINE(2003)
		::zpp_nape::geom::ZPP_Vec2 o = v;		HX_STACK_VAR(o,"o");
		HX_STACK_LINE(2004)
		{
		}
		HX_STACK_LINE(2012)
		{
			HX_STACK_LINE(2012)
			if (((o->outer != null()))){
				HX_STACK_LINE(2012)
				o->outer->zpp_inner = null();
				HX_STACK_LINE(2012)
				o->outer = null();
			}
			HX_STACK_LINE(2012)
			o->_isimmutable = null();
			HX_STACK_LINE(2012)
			o->_validate = null();
			HX_STACK_LINE(2012)
			o->_invalidate = null();
		}
		HX_STACK_LINE(2013)
		o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
		HX_STACK_LINE(2014)
		::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
	}
	HX_STACK_LINE(2019)
	return ret;
}


Void ZPP_DynAABBPhase_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::clear","zpp_nape/space/DynAABBPhase.hx",1874);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1875)
		while(((this->syncs != null()))){
			HX_STACK_LINE(1876)
			::zpp_nape::space::ZPP_AABBNode next = this->syncs->snext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1877)
			this->syncs->snext = null();
			HX_STACK_LINE(1878)
			if ((this->syncs->first_sync)){
				HX_STACK_LINE(1879)
				this->syncs->shape->node = null();
				HX_STACK_LINE(1880)
				this->syncs->shape->removedFromSpace();
				HX_STACK_LINE(1881)
				this->syncs->shape = null();
			}
			HX_STACK_LINE(1883)
			this->syncs = next;
		}
		HX_STACK_LINE(1885)
		while(((this->moves != null()))){
			HX_STACK_LINE(1886)
			::zpp_nape::space::ZPP_AABBNode next = this->moves->mnext;		HX_STACK_VAR(next,"next");
			HX_STACK_LINE(1887)
			this->moves->mnext = null();
			HX_STACK_LINE(1888)
			if ((this->moves->first_sync)){
				HX_STACK_LINE(1889)
				this->moves->shape->node = null();
				HX_STACK_LINE(1890)
				this->moves->shape->removedFromSpace();
				HX_STACK_LINE(1891)
				this->moves->shape = null();
			}
			HX_STACK_LINE(1893)
			this->moves = next;
		}
		HX_STACK_LINE(1895)
		while(((this->pairs != null()))){
			HX_STACK_LINE(1896)
			::zpp_nape::space::ZPP_AABBPair nxt = this->pairs->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(1897)
			if (((this->pairs->arb != null()))){
				HX_STACK_LINE(1897)
				this->pairs->arb->pair = null();
			}
			HX_STACK_LINE(1898)
			this->pairs->arb = null();
			HX_STACK_LINE(1899)
			{
				HX_STACK_LINE(1899)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = this->pairs->n1->shape->pairs;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::space::ZPP_AABBPair obj = this->pairs;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1899)
				{
				}
				HX_STACK_LINE(1899)
				{
					HX_STACK_LINE(1899)
					{
					}
					HX_STACK_LINE(1899)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1899)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1899)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1899)
					while(((cur != null()))){
						HX_STACK_LINE(1899)
						if (((cur->elt == obj))){
							HX_STACK_LINE(1899)
							{
								HX_STACK_LINE(1899)
								{
								}
								HX_STACK_LINE(1899)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1899)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1899)
								if (((pre == null()))){
									HX_STACK_LINE(1899)
									old = _this->head;
									HX_STACK_LINE(1899)
									ret1 = old->next;
									HX_STACK_LINE(1899)
									_this->head = ret1;
									HX_STACK_LINE(1899)
									if (((_this->head == null()))){
										HX_STACK_LINE(1899)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1899)
									old = pre->next;
									HX_STACK_LINE(1899)
									ret1 = old->next;
									HX_STACK_LINE(1899)
									pre->next = ret1;
									HX_STACK_LINE(1899)
									if (((ret1 == null()))){
										HX_STACK_LINE(1899)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1899)
								{
								}
								HX_STACK_LINE(1899)
								{
									HX_STACK_LINE(1899)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1899)
									{
									}
									HX_STACK_LINE(1899)
									o->elt = null();
									HX_STACK_LINE(1899)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(1899)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1899)
								_this->modified = true;
								HX_STACK_LINE(1899)
								(_this->length)--;
								HX_STACK_LINE(1899)
								_this->pushmod = true;
								HX_STACK_LINE(1899)
								ret1;
							}
							HX_STACK_LINE(1899)
							ret = true;
							HX_STACK_LINE(1899)
							break;
						}
						HX_STACK_LINE(1899)
						pre = cur;
						HX_STACK_LINE(1899)
						cur = cur->next;
					}
					HX_STACK_LINE(1899)
					ret;
				}
			}
			HX_STACK_LINE(1900)
			{
				HX_STACK_LINE(1900)
				::zpp_nape::util::ZNPList_ZPP_AABBPair _this = this->pairs->n2->shape->pairs;		HX_STACK_VAR(_this,"_this");
				::zpp_nape::space::ZPP_AABBPair obj = this->pairs;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1900)
				{
				}
				HX_STACK_LINE(1900)
				{
					HX_STACK_LINE(1900)
					{
					}
					HX_STACK_LINE(1900)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
					HX_STACK_LINE(1900)
					::zpp_nape::util::ZNPNode_ZPP_AABBPair cur = _this->head;		HX_STACK_VAR(cur,"cur");
					HX_STACK_LINE(1900)
					bool ret = false;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1900)
					while(((cur != null()))){
						HX_STACK_LINE(1900)
						if (((cur->elt == obj))){
							HX_STACK_LINE(1900)
							{
								HX_STACK_LINE(1900)
								{
								}
								HX_STACK_LINE(1900)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
								HX_STACK_LINE(1900)
								::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1900)
								if (((pre == null()))){
									HX_STACK_LINE(1900)
									old = _this->head;
									HX_STACK_LINE(1900)
									ret1 = old->next;
									HX_STACK_LINE(1900)
									_this->head = ret1;
									HX_STACK_LINE(1900)
									if (((_this->head == null()))){
										HX_STACK_LINE(1900)
										_this->pushmod = true;
									}
								}
								else{
									HX_STACK_LINE(1900)
									old = pre->next;
									HX_STACK_LINE(1900)
									ret1 = old->next;
									HX_STACK_LINE(1900)
									pre->next = ret1;
									HX_STACK_LINE(1900)
									if (((ret1 == null()))){
										HX_STACK_LINE(1900)
										_this->pushmod = true;
									}
								}
								HX_STACK_LINE(1900)
								{
								}
								HX_STACK_LINE(1900)
								{
									HX_STACK_LINE(1900)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1900)
									{
									}
									HX_STACK_LINE(1900)
									o->elt = null();
									HX_STACK_LINE(1900)
									o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
									HX_STACK_LINE(1900)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
								}
								HX_STACK_LINE(1900)
								_this->modified = true;
								HX_STACK_LINE(1900)
								(_this->length)--;
								HX_STACK_LINE(1900)
								_this->pushmod = true;
								HX_STACK_LINE(1900)
								ret1;
							}
							HX_STACK_LINE(1900)
							ret = true;
							HX_STACK_LINE(1900)
							break;
						}
						HX_STACK_LINE(1900)
						pre = cur;
						HX_STACK_LINE(1900)
						cur = cur->next;
					}
					HX_STACK_LINE(1900)
					ret;
				}
			}
			HX_STACK_LINE(1901)
			{
				HX_STACK_LINE(1902)
				::zpp_nape::space::ZPP_AABBPair o = this->pairs;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1903)
				{
				}
				HX_STACK_LINE(1911)
				{
					HX_STACK_LINE(1911)
					{
					}
					HX_STACK_LINE(1911)
					o->n1 = o->n2 = null();
					HX_STACK_LINE(1911)
					o->sleeping = false;
				}
				HX_STACK_LINE(1912)
				o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(1913)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
			HX_STACK_LINE(1918)
			this->pairs = nxt;
		}
		HX_STACK_LINE(1920)
		this->dtree->clear();
		HX_STACK_LINE(1921)
		this->stree->clear();
	}
return null();
}


Void ZPP_DynAABBPhase_obj::broadphase( ::zpp_nape::space::ZPP_Space space,bool discrete){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::broadphase","zpp_nape/space/DynAABBPhase.hx",1098);
		HX_STACK_THIS(this);
		HX_STACK_ARG(space,"space");
		HX_STACK_ARG(discrete,"discrete");
		HX_STACK_LINE(1099)
		::zpp_nape::space::ZPP_AABBNode node = this->syncs;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1100)
		while(((node != null()))){
			HX_STACK_LINE(1101)
			{
				HX_STACK_LINE(1102)
				::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
				HX_STACK_LINE(1103)
				{
				}
				HX_STACK_LINE(1111)
				{
				}
				HX_STACK_LINE(1119)
				if ((!(node->first_sync))){
					HX_STACK_LINE(1120)
					::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
					HX_STACK_LINE(1121)
					if (((node == tree->root))){
						HX_STACK_LINE(1121)
						tree->root = null();
						HX_STACK_LINE(1121)
						Dynamic();
					}
					else{
						HX_STACK_LINE(1121)
						::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
						HX_STACK_LINE(1121)
						::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
						HX_STACK_LINE(1121)
						::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
						HX_STACK_LINE(1121)
						if (((gparent != null()))){
							HX_STACK_LINE(1121)
							if (((gparent->child1 == parent))){
								HX_STACK_LINE(1121)
								gparent->child1 = sibling;
							}
							else{
								HX_STACK_LINE(1121)
								gparent->child2 = sibling;
							}
							HX_STACK_LINE(1121)
							sibling->parent = gparent;
							HX_STACK_LINE(1121)
							{
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1121)
								{
								}
								HX_STACK_LINE(1121)
								{
									HX_STACK_LINE(1121)
									o->height = (int)-1;
									HX_STACK_LINE(1121)
									{
										HX_STACK_LINE(1121)
										::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1121)
										{
										}
										HX_STACK_LINE(1121)
										{
											HX_STACK_LINE(1121)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1121)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1121)
												o1->outer = null();
											}
											HX_STACK_LINE(1121)
											o1->wrap_min = o1->wrap_max = null();
											HX_STACK_LINE(1121)
											o1->_invalidate = null();
											HX_STACK_LINE(1121)
											o1->_validate = null();
										}
										HX_STACK_LINE(1121)
										o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
										HX_STACK_LINE(1121)
										::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
									}
									HX_STACK_LINE(1121)
									o->child1 = o->child2 = o->parent = null();
									HX_STACK_LINE(1121)
									o->next = null();
									HX_STACK_LINE(1121)
									o->snext = null();
									HX_STACK_LINE(1121)
									o->mnext = null();
								}
								HX_STACK_LINE(1121)
								o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
							}
							HX_STACK_LINE(1121)
							::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1121)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
										{
											HX_STACK_LINE(1121)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1121)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1121)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
													{
														HX_STACK_LINE(1121)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1121)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1121)
														c->child1 = node1;
														HX_STACK_LINE(1121)
														c->parent = node1->parent;
														HX_STACK_LINE(1121)
														node1->parent = c;
														HX_STACK_LINE(1121)
														if (((c->parent != null()))){
															HX_STACK_LINE(1121)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1121)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1121)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1121)
															tree->root = c;
														}
														HX_STACK_LINE(1121)
														if (((f->height > g->height))){
															HX_STACK_LINE(1121)
															c->child2 = f;
															HX_STACK_LINE(1121)
															node1->child2 = g;
															HX_STACK_LINE(1121)
															g->parent = node1;
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1121)
															c->child2 = g;
															HX_STACK_LINE(1121)
															node1->child2 = f;
															HX_STACK_LINE(1121)
															f->parent = node1;
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1121)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
													{
														HX_STACK_LINE(1121)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1121)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1121)
														b->child1 = node1;
														HX_STACK_LINE(1121)
														b->parent = node1->parent;
														HX_STACK_LINE(1121)
														node1->parent = b;
														HX_STACK_LINE(1121)
														if (((b->parent != null()))){
															HX_STACK_LINE(1121)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1121)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1121)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1121)
															tree->root = b;
														}
														HX_STACK_LINE(1121)
														if (((f->height > g->height))){
															HX_STACK_LINE(1121)
															b->child2 = f;
															HX_STACK_LINE(1121)
															node1->child1 = g;
															HX_STACK_LINE(1121)
															g->parent = node1;
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1121)
															b->child2 = g;
															HX_STACK_LINE(1121)
															node1->child1 = f;
															HX_STACK_LINE(1121)
															f->parent = node1;
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1121)
															{
																HX_STACK_LINE(1121)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1121)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1121)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1121)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1121)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
																	{
																		HX_STACK_LINE(1121)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1121)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1121)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1121)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1121)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1121)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1121)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								HX_STACK_LINE(1121)
								{
									HX_STACK_LINE(1121)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1121)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1121)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1121)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1121)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1121);
										{
											HX_STACK_LINE(1121)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1121)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1121)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1121)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1121)
								node1 = node1->parent;
							}
						}
						else{
							HX_STACK_LINE(1121)
							tree->root = sibling;
							HX_STACK_LINE(1121)
							sibling->parent = null();
							HX_STACK_LINE(1121)
							{
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(1121)
								{
								}
								HX_STACK_LINE(1121)
								{
									HX_STACK_LINE(1121)
									o->height = (int)-1;
									HX_STACK_LINE(1121)
									{
										HX_STACK_LINE(1121)
										::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
										HX_STACK_LINE(1121)
										{
										}
										HX_STACK_LINE(1121)
										{
											HX_STACK_LINE(1121)
											if (((o1->outer != null()))){
												HX_STACK_LINE(1121)
												o1->outer->zpp_inner = null();
												HX_STACK_LINE(1121)
												o1->outer = null();
											}
											HX_STACK_LINE(1121)
											o1->wrap_min = o1->wrap_max = null();
											HX_STACK_LINE(1121)
											o1->_invalidate = null();
											HX_STACK_LINE(1121)
											o1->_validate = null();
										}
										HX_STACK_LINE(1121)
										o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
										HX_STACK_LINE(1121)
										::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
									}
									HX_STACK_LINE(1121)
									o->child1 = o->child2 = o->parent = null();
									HX_STACK_LINE(1121)
									o->next = null();
									HX_STACK_LINE(1121)
									o->snext = null();
									HX_STACK_LINE(1121)
									o->mnext = null();
								}
								HX_STACK_LINE(1121)
								o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
								HX_STACK_LINE(1121)
								::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(1123)
					node->first_sync = false;
				}
				HX_STACK_LINE(1124)
				::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
				HX_STACK_LINE(1125)
				if ((!(space->continuous))){
					HX_STACK_LINE(1125)
					if ((shape->zip_aabb)){
						HX_STACK_LINE(1125)
						if (((shape->body != null()))){
							HX_STACK_LINE(1125)
							shape->zip_aabb = false;
							HX_STACK_LINE(1125)
							if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
								HX_STACK_LINE(1125)
								::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1125)
								if ((_this->zip_worldCOM)){
									HX_STACK_LINE(1125)
									if (((_this->body != null()))){
										HX_STACK_LINE(1125)
										_this->zip_worldCOM = false;
										HX_STACK_LINE(1125)
										if ((_this->zip_localCOM)){
											HX_STACK_LINE(1125)
											_this->zip_localCOM = false;
											HX_STACK_LINE(1125)
											if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
												HX_STACK_LINE(1125)
												::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1125)
												if (((_this1->lverts->next == null()))){
													HX_STACK_LINE(1125)
													hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
												}
												HX_STACK_LINE(1125)
												if (((_this1->lverts->next->next == null()))){
													HX_STACK_LINE(1125)
													_this1->localCOMx = _this1->lverts->next->x;
													HX_STACK_LINE(1125)
													_this1->localCOMy = _this1->lverts->next->y;
													HX_STACK_LINE(1125)
													{
													}
													HX_STACK_LINE(1125)
													Dynamic();
												}
												else{
													HX_STACK_LINE(1125)
													if (((_this1->lverts->next->next->next == null()))){
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1125)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1125)
															{
															}
															HX_STACK_LINE(1125)
															{
															}
														}
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															Float t = 1.0;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1125)
															{
															}
															HX_STACK_LINE(1125)
															hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
															HX_STACK_LINE(1125)
															hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
														}
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															Float t = 0.5;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1125)
															{
															}
															HX_STACK_LINE(1125)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1125)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
													else{
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															_this1->localCOMx = (int)0;
															HX_STACK_LINE(1125)
															_this1->localCOMy = (int)0;
															HX_STACK_LINE(1125)
															{
															}
															HX_STACK_LINE(1125)
															{
															}
														}
														HX_STACK_LINE(1125)
														Float area = 0.0;		HX_STACK_VAR(area,"area");
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
															HX_STACK_LINE(1125)
															::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
															HX_STACK_LINE(1125)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1125)
															::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
															HX_STACK_LINE(1125)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1125)
															while(((cx_ite != null()))){
																HX_STACK_LINE(1125)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1125)
																{
																	HX_STACK_LINE(1125)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1125)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1125)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1125)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1125)
																u = v;
																HX_STACK_LINE(1125)
																v = w;
																HX_STACK_LINE(1125)
																cx_ite = cx_ite->next;
															}
															HX_STACK_LINE(1125)
															cx_ite = _this1->lverts->next;
															HX_STACK_LINE(1125)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(1125)
															{
																HX_STACK_LINE(1125)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(1125)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1125)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(1125)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(1125)
															u = v;
															HX_STACK_LINE(1125)
															v = w;
															HX_STACK_LINE(1125)
															cx_ite = cx_ite->next;
															HX_STACK_LINE(1125)
															::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
															HX_STACK_LINE(1125)
															{
																HX_STACK_LINE(1125)
																hx::AddEq(area,(v->x * ((w1->y - u->y))));
																HX_STACK_LINE(1125)
																Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(1125)
																hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																HX_STACK_LINE(1125)
																hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
															}
														}
														HX_STACK_LINE(1125)
														area = (Float((int)1) / Float((((int)3 * area))));
														HX_STACK_LINE(1125)
														{
															HX_STACK_LINE(1125)
															Float t = area;		HX_STACK_VAR(t,"t");
															HX_STACK_LINE(1125)
															{
															}
															HX_STACK_LINE(1125)
															hx::MultEq(_this1->localCOMx,t);
															HX_STACK_LINE(1125)
															hx::MultEq(_this1->localCOMy,t);
														}
													}
												}
											}
										}
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1125)
											if ((_this1->zip_axis)){
												HX_STACK_LINE(1125)
												_this1->zip_axis = false;
												HX_STACK_LINE(1125)
												{
													HX_STACK_LINE(1125)
													_this1->axisx = ::Math_obj::sin(_this1->rot);
													HX_STACK_LINE(1125)
													_this1->axisy = ::Math_obj::cos(_this1->rot);
													HX_STACK_LINE(1125)
													{
													}
													HX_STACK_LINE(1125)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
											HX_STACK_LINE(1125)
											_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
										}
									}
								}
								HX_STACK_LINE(1125)
								Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
								HX_STACK_LINE(1125)
								Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
								HX_STACK_LINE(1125)
								{
								}
								HX_STACK_LINE(1125)
								{
								}
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									_this->aabb->minx = (_this->worldCOMx - rx);
									HX_STACK_LINE(1125)
									_this->aabb->miny = (_this->worldCOMy - ry);
								}
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									_this->aabb->maxx = (_this->worldCOMx + rx);
									HX_STACK_LINE(1125)
									_this->aabb->maxy = (_this->worldCOMy + ry);
								}
							}
							else{
								HX_STACK_LINE(1125)
								::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1125)
								if ((_this->zip_gverts)){
									HX_STACK_LINE(1125)
									if (((_this->body != null()))){
										HX_STACK_LINE(1125)
										_this->zip_gverts = false;
										HX_STACK_LINE(1125)
										_this->validate_lverts();
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1125)
											if ((_this1->zip_axis)){
												HX_STACK_LINE(1125)
												_this1->zip_axis = false;
												HX_STACK_LINE(1125)
												{
													HX_STACK_LINE(1125)
													_this1->axisx = ::Math_obj::sin(_this1->rot);
													HX_STACK_LINE(1125)
													_this1->axisy = ::Math_obj::cos(_this1->rot);
													HX_STACK_LINE(1125)
													{
													}
													HX_STACK_LINE(1125)
													Dynamic();
												}
											}
										}
										HX_STACK_LINE(1125)
										::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1125)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1125)
												::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1125)
												{
													HX_STACK_LINE(1125)
													::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
													HX_STACK_LINE(1125)
													li = li->next;
													HX_STACK_LINE(1125)
													{
														HX_STACK_LINE(1125)
														g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
														HX_STACK_LINE(1125)
														g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
													}
												}
												HX_STACK_LINE(1125)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
								HX_STACK_LINE(1125)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(1125)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
								}
								HX_STACK_LINE(1125)
								::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									_this->aabb->minx = p0->x;
									HX_STACK_LINE(1125)
									_this->aabb->miny = p0->y;
									HX_STACK_LINE(1125)
									{
									}
									HX_STACK_LINE(1125)
									{
									}
								}
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									_this->aabb->maxx = p0->x;
									HX_STACK_LINE(1125)
									_this->aabb->maxy = p0->y;
									HX_STACK_LINE(1125)
									{
									}
									HX_STACK_LINE(1125)
									{
									}
								}
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1125)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1125)
										::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1125)
										{
											HX_STACK_LINE(1125)
											if (((p->x < _this->aabb->minx))){
												HX_STACK_LINE(1125)
												_this->aabb->minx = p->x;
											}
											HX_STACK_LINE(1125)
											if (((p->x > _this->aabb->maxx))){
												HX_STACK_LINE(1125)
												_this->aabb->maxx = p->x;
											}
											HX_STACK_LINE(1125)
											if (((p->y < _this->aabb->miny))){
												HX_STACK_LINE(1125)
												_this->aabb->miny = p->y;
											}
											HX_STACK_LINE(1125)
											if (((p->y > _this->aabb->maxy))){
												HX_STACK_LINE(1125)
												_this->aabb->maxy = p->y;
											}
										}
										HX_STACK_LINE(1125)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(1126)
				{
					HX_STACK_LINE(1126)
					::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(1126)
					aabb->minx = (a->minx - 3.0);
					HX_STACK_LINE(1126)
					aabb->miny = (a->miny - 3.0);
					HX_STACK_LINE(1126)
					aabb->maxx = (a->maxx + 3.0);
					HX_STACK_LINE(1126)
					aabb->maxy = (a->maxy + 3.0);
				}
				HX_STACK_LINE(1127)
				::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
				HX_STACK_LINE(1128)
				if (((tree->root == null()))){
					HX_STACK_LINE(1128)
					tree->root = node;
					HX_STACK_LINE(1128)
					tree->root->parent = null();
				}
				else{
					HX_STACK_LINE(1128)
					::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1128)
					while((!(((node1->child1 == null()))))){
						HX_STACK_LINE(1128)
						::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
						HX_STACK_LINE(1128)
						::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
						struct _Function_5_1{
							inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1128)
									return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						Float area = _Function_5_1::Block(node1);		HX_STACK_VAR(area,"area");
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1128)
							_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
							HX_STACK_LINE(1128)
							_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
							HX_STACK_LINE(1128)
							_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
							HX_STACK_LINE(1128)
							_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
						}
						struct _Function_5_2{
							inline static Float Block( ){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1128)
									return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						Float carea = _Function_5_2::Block();		HX_STACK_VAR(carea,"carea");
						HX_STACK_LINE(1128)
						Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
						HX_STACK_LINE(1128)
						Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
						struct _Function_5_3{
							inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									{
										HX_STACK_LINE(1128)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1128)
										_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
										HX_STACK_LINE(1128)
										_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
										HX_STACK_LINE(1128)
										_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
										HX_STACK_LINE(1128)
										_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
									}
									struct _Function_6_1{
										inline static Float Block( ){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												HX_STACK_LINE(1128)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1128)
												return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												struct _Function_7_1{
													inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
														{
															HX_STACK_LINE(1128)
															::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1128)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1128)
												Float oarea = _Function_7_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
												struct _Function_7_2{
													inline static Float Block( ){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
														{
															HX_STACK_LINE(1128)
															::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1128)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1128)
												Float narea = _Function_7_2::Block();		HX_STACK_VAR(narea,"narea");
												HX_STACK_LINE(1128)
												return ((narea - oarea) + icost);
											}
											return null();
										}
									};
									HX_STACK_LINE(1128)
									return (  (((child1->child1 == null()))) ? Float((_Function_6_1::Block() + icost)) : Float(_Function_6_2::Block(child1,icost)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						Float cost1 = _Function_5_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
						struct _Function_5_4{
							inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									{
										HX_STACK_LINE(1128)
										::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
										::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1128)
										_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
										HX_STACK_LINE(1128)
										_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
										HX_STACK_LINE(1128)
										_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
										HX_STACK_LINE(1128)
										_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
									}
									struct _Function_6_1{
										inline static Float Block( ){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												HX_STACK_LINE(1128)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1128)
												return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												struct _Function_7_1{
													inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
														{
															HX_STACK_LINE(1128)
															::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1128)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1128)
												Float oarea = _Function_7_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
												struct _Function_7_2{
													inline static Float Block( ){
														HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
														{
															HX_STACK_LINE(1128)
															::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
															HX_STACK_LINE(1128)
															return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
														}
														return null();
													}
												};
												HX_STACK_LINE(1128)
												Float narea = _Function_7_2::Block();		HX_STACK_VAR(narea,"narea");
												HX_STACK_LINE(1128)
												return ((narea - oarea) + icost);
											}
											return null();
										}
									};
									HX_STACK_LINE(1128)
									return (  (((child2->child1 == null()))) ? Float((_Function_6_1::Block() + icost)) : Float(_Function_6_2::Block(child2,icost)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						Float cost2 = _Function_5_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
						HX_STACK_LINE(1128)
						if (((bool((cost < cost1)) && bool((cost < cost2))))){
							HX_STACK_LINE(1128)
							break;
						}
						else{
							HX_STACK_LINE(1128)
							node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
						}
					}
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
					HX_STACK_LINE(1128)
					::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
					HX_STACK_LINE(1128)
					{
						HX_STACK_LINE(1128)
						if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
							HX_STACK_LINE(1128)
							nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
						}
						else{
							HX_STACK_LINE(1128)
							nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
							HX_STACK_LINE(1128)
							::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
							HX_STACK_LINE(1128)
							nparent->next = null();
						}
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							{
								HX_STACK_LINE(1128)
								if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
									HX_STACK_LINE(1128)
									nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
								}
								else{
									HX_STACK_LINE(1128)
									nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
									HX_STACK_LINE(1128)
									::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
									HX_STACK_LINE(1128)
									nparent->aabb->next = null();
								}
								HX_STACK_LINE(1128)
								Dynamic();
							}
							HX_STACK_LINE(1128)
							nparent->moved = false;
							HX_STACK_LINE(1128)
							nparent->synced = false;
							HX_STACK_LINE(1128)
							nparent->first_sync = false;
						}
					}
					HX_STACK_LINE(1128)
					nparent->parent = oparent;
					HX_STACK_LINE(1128)
					{
						HX_STACK_LINE(1128)
						::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(1128)
						_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
						HX_STACK_LINE(1128)
						_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
						HX_STACK_LINE(1128)
						_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
						HX_STACK_LINE(1128)
						_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
					}
					HX_STACK_LINE(1128)
					nparent->height = (sibling->height + (int)1);
					HX_STACK_LINE(1128)
					if (((oparent != null()))){
						HX_STACK_LINE(1128)
						if (((oparent->child1 == sibling))){
							HX_STACK_LINE(1128)
							oparent->child1 = nparent;
						}
						else{
							HX_STACK_LINE(1128)
							oparent->child2 = nparent;
						}
						HX_STACK_LINE(1128)
						nparent->child1 = sibling;
						HX_STACK_LINE(1128)
						nparent->child2 = node;
						HX_STACK_LINE(1128)
						sibling->parent = nparent;
						HX_STACK_LINE(1128)
						node->parent = nparent;
					}
					else{
						HX_STACK_LINE(1128)
						nparent->child1 = sibling;
						HX_STACK_LINE(1128)
						nparent->child2 = node;
						HX_STACK_LINE(1128)
						sibling->parent = nparent;
						HX_STACK_LINE(1128)
						node->parent = nparent;
						HX_STACK_LINE(1128)
						tree->root = nparent;
					}
					HX_STACK_LINE(1128)
					node1 = node->parent;
					HX_STACK_LINE(1128)
					while(((node1 != null()))){
						struct _Function_5_1{
							inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1128)
									::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
									HX_STACK_LINE(1128)
									int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
									struct _Function_6_1{
										inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												HX_STACK_LINE(1128)
												::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1128)
												::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1128)
												c->child1 = node1;
												HX_STACK_LINE(1128)
												c->parent = node1->parent;
												HX_STACK_LINE(1128)
												node1->parent = c;
												HX_STACK_LINE(1128)
												if (((c->parent != null()))){
													HX_STACK_LINE(1128)
													if (((c->parent->child1 == node1))){
														HX_STACK_LINE(1128)
														c->parent->child1 = c;
													}
													else{
														HX_STACK_LINE(1128)
														c->parent->child2 = c;
													}
												}
												else{
													HX_STACK_LINE(1128)
													tree->root = c;
												}
												HX_STACK_LINE(1128)
												if (((f->height > g->height))){
													HX_STACK_LINE(1128)
													c->child2 = f;
													HX_STACK_LINE(1128)
													node1->child2 = g;
													HX_STACK_LINE(1128)
													g->parent = node1;
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = b->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													node1->height = ((int)1 + _Function_8_1::Block(b,g));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													c->height = ((int)1 + _Function_8_2::Block(node1,f));
												}
												else{
													HX_STACK_LINE(1128)
													c->child2 = g;
													HX_STACK_LINE(1128)
													node1->child2 = f;
													HX_STACK_LINE(1128)
													f->parent = node1;
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = b->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													node1->height = ((int)1 + _Function_8_1::Block(b,f));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													c->height = ((int)1 + _Function_8_2::Block(node1,g));
												}
												HX_STACK_LINE(1128)
												return c;
											}
											return null();
										}
									};
									struct _Function_6_2{
										inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
											{
												HX_STACK_LINE(1128)
												::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(1128)
												::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(1128)
												b->child1 = node1;
												HX_STACK_LINE(1128)
												b->parent = node1->parent;
												HX_STACK_LINE(1128)
												node1->parent = b;
												HX_STACK_LINE(1128)
												if (((b->parent != null()))){
													HX_STACK_LINE(1128)
													if (((b->parent->child1 == node1))){
														HX_STACK_LINE(1128)
														b->parent->child1 = b;
													}
													else{
														HX_STACK_LINE(1128)
														b->parent->child2 = b;
													}
												}
												else{
													HX_STACK_LINE(1128)
													tree->root = b;
												}
												HX_STACK_LINE(1128)
												if (((f->height > g->height))){
													HX_STACK_LINE(1128)
													b->child2 = f;
													HX_STACK_LINE(1128)
													node1->child1 = g;
													HX_STACK_LINE(1128)
													g->parent = node1;
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													node1->height = ((int)1 + _Function_8_1::Block(c,g));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													b->height = ((int)1 + _Function_8_2::Block(node1,f));
												}
												else{
													HX_STACK_LINE(1128)
													b->child2 = g;
													HX_STACK_LINE(1128)
													node1->child1 = f;
													HX_STACK_LINE(1128)
													f->parent = node1;
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													HX_STACK_LINE(1128)
													{
														HX_STACK_LINE(1128)
														::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
														::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
														::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
														HX_STACK_LINE(1128)
														_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
														HX_STACK_LINE(1128)
														_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
														HX_STACK_LINE(1128)
														_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
														HX_STACK_LINE(1128)
														_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
													}
													struct _Function_8_1{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = c->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = f->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													node1->height = ((int)1 + _Function_8_1::Block(c,f));
													struct _Function_8_2{
														inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
															{
																HX_STACK_LINE(1128)
																int x = node1->height;		HX_STACK_VAR(x,"x");
																HX_STACK_LINE(1128)
																int y = g->height;		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(1128)
																return (  (((x > y))) ? int(x) : int(y) );
															}
															return null();
														}
													};
													HX_STACK_LINE(1128)
													b->height = ((int)1 + _Function_8_2::Block(node1,g));
												}
												HX_STACK_LINE(1128)
												return b;
											}
											return null();
										}
									};
									HX_STACK_LINE(1128)
									return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_6_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_6_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_5_1::Block(node1,tree)) );
						HX_STACK_LINE(1128)
						::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
						HX_STACK_LINE(1128)
						::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
						struct _Function_5_2{
							inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1128);
								{
									HX_STACK_LINE(1128)
									int x = child1->height;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1128)
									int y = child2->height;		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1128)
									return (  (((x > y))) ? int(x) : int(y) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1128)
						node1->height = ((int)1 + _Function_5_2::Block(child1,child2));
						HX_STACK_LINE(1128)
						{
							HX_STACK_LINE(1128)
							::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
							::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(1128)
							_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
							HX_STACK_LINE(1128)
							_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
							HX_STACK_LINE(1128)
							_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
							HX_STACK_LINE(1128)
							_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
						}
						HX_STACK_LINE(1128)
						node1 = node1->parent;
					}
				}
				HX_STACK_LINE(1129)
				node->synced = false;
			}
			HX_STACK_LINE(1131)
			node = node->snext;
		}
		HX_STACK_LINE(1133)
		while(((this->syncs != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1135);
					{
						HX_STACK_LINE(1136)
						{
						}
						HX_STACK_LINE(1144)
						::zpp_nape::space::ZPP_AABBNode ret = __this->syncs;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1145)
						__this->syncs = ret->snext;
						HX_STACK_LINE(1146)
						ret->snext = null();
						HX_STACK_LINE(1147)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1135)
			::zpp_nape::space::ZPP_AABBNode leaf = _Function_2_1::Block(this);		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1149)
			if ((leaf->moved)){
				HX_STACK_LINE(1149)
				continue;
			}
			HX_STACK_LINE(1150)
			leaf->moved = false;
			HX_STACK_LINE(1151)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1152)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1153)
			{
			}
			HX_STACK_LINE(1161)
			if ((lbody->component->sleeping)){
				HX_STACK_LINE(1161)
				continue;
			}
			HX_STACK_LINE(1162)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1163)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1164)
			{
				HX_STACK_LINE(1165)
				if (((this->dtree->root != null()))){
					HX_STACK_LINE(1166)
					{
					}
					HX_STACK_LINE(1174)
					this->dtree->root->next = stack;
					HX_STACK_LINE(1175)
					stack = this->dtree->root;
				}
				HX_STACK_LINE(1177)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1178);
							{
								HX_STACK_LINE(1179)
								{
								}
								HX_STACK_LINE(1187)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1188)
								stack = ret->next;
								HX_STACK_LINE(1189)
								ret->next = null();
								HX_STACK_LINE(1190)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1178)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1192)
					if (((node1 == leaf))){
						HX_STACK_LINE(1192)
						continue;
					}
					HX_STACK_LINE(1193)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1194)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1195)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1196);
									{
										HX_STACK_LINE(1196)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1196)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1195)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1197)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1198)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1199)
								{
								}
								HX_STACK_LINE(1207)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1208)
									id = lshape->id;
									HX_STACK_LINE(1209)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1212)
									id = shape->id;
									HX_STACK_LINE(1213)
									di = lshape->id;
								}
								HX_STACK_LINE(1215)
								{
								}
								HX_STACK_LINE(1223)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1224)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1225)
								{
									HX_STACK_LINE(1226)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1227)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1228)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1229)
										{
											HX_STACK_LINE(1230)
											{
											}
											HX_STACK_LINE(1238)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1239)
												p = px;
												HX_STACK_LINE(1240)
												break;
											}
										}
										HX_STACK_LINE(1243)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1246)
								if (((p != null()))){
									HX_STACK_LINE(1247)
									if ((p->sleeping)){
										HX_STACK_LINE(1248)
										p->sleeping = false;
										HX_STACK_LINE(1249)
										p->next = this->pairs;
										HX_STACK_LINE(1250)
										this->pairs = p;
										HX_STACK_LINE(1251)
										p->first = true;
									}
									HX_STACK_LINE(1253)
									continue;
								}
								HX_STACK_LINE(1255)
								{
									HX_STACK_LINE(1256)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1256)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1263)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1264)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1265)
										p->next = null();
									}
									HX_STACK_LINE(1270)
									Dynamic();
								}
								HX_STACK_LINE(1272)
								p->n1 = leaf;
								HX_STACK_LINE(1273)
								p->n2 = node1;
								HX_STACK_LINE(1274)
								p->id = id;
								HX_STACK_LINE(1275)
								p->di = di;
								HX_STACK_LINE(1276)
								p->next = this->pairs;
								HX_STACK_LINE(1277)
								this->pairs = p;
								HX_STACK_LINE(1278)
								p->first = true;
								HX_STACK_LINE(1279)
								{
									HX_STACK_LINE(1279)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1279)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1279);
											{
												HX_STACK_LINE(1279)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1279)
												{
													HX_STACK_LINE(1279)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1279)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1279)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1279)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1279)
														ret->next = null();
													}
													HX_STACK_LINE(1279)
													Dynamic();
												}
												HX_STACK_LINE(1279)
												ret->elt = p;
												HX_STACK_LINE(1279)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1279)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1279)
									temp->next = _this->head;
									HX_STACK_LINE(1279)
									_this->head = temp;
									HX_STACK_LINE(1279)
									_this->modified = true;
									HX_STACK_LINE(1279)
									(_this->length)++;
									HX_STACK_LINE(1279)
									p;
								}
								HX_STACK_LINE(1280)
								{
									HX_STACK_LINE(1280)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1280)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1280);
											{
												HX_STACK_LINE(1280)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1280)
												{
													HX_STACK_LINE(1280)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1280)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1280)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1280)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1280)
														ret->next = null();
													}
													HX_STACK_LINE(1280)
													Dynamic();
												}
												HX_STACK_LINE(1280)
												ret->elt = p;
												HX_STACK_LINE(1280)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1280)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1280)
									temp->next = _this->head;
									HX_STACK_LINE(1280)
									_this->head = temp;
									HX_STACK_LINE(1280)
									_this->modified = true;
									HX_STACK_LINE(1280)
									(_this->length)++;
									HX_STACK_LINE(1280)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1284);
								{
									HX_STACK_LINE(1284)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1284)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1284)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1285)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1286)
								{
								}
								HX_STACK_LINE(1294)
								node1->child1->next = stack;
								HX_STACK_LINE(1295)
								stack = node1->child1;
							}
							HX_STACK_LINE(1297)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1298)
								{
								}
								HX_STACK_LINE(1306)
								node1->child2->next = stack;
								HX_STACK_LINE(1307)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1312)
			{
				HX_STACK_LINE(1313)
				if (((this->stree->root != null()))){
					HX_STACK_LINE(1314)
					{
					}
					HX_STACK_LINE(1322)
					this->stree->root->next = stack;
					HX_STACK_LINE(1323)
					stack = this->stree->root;
				}
				HX_STACK_LINE(1325)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1326);
							{
								HX_STACK_LINE(1327)
								{
								}
								HX_STACK_LINE(1335)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1336)
								stack = ret->next;
								HX_STACK_LINE(1337)
								ret->next = null();
								HX_STACK_LINE(1338)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1326)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1340)
					if (((node1 == leaf))){
						HX_STACK_LINE(1340)
						continue;
					}
					HX_STACK_LINE(1341)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1342)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1343)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1344);
									{
										HX_STACK_LINE(1344)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1344)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1343)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1345)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1346)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1347)
								{
								}
								HX_STACK_LINE(1355)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1356)
									id = lshape->id;
									HX_STACK_LINE(1357)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1360)
									id = shape->id;
									HX_STACK_LINE(1361)
									di = lshape->id;
								}
								HX_STACK_LINE(1363)
								{
								}
								HX_STACK_LINE(1371)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1372)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1373)
								{
									HX_STACK_LINE(1374)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1375)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1376)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1377)
										{
											HX_STACK_LINE(1378)
											{
											}
											HX_STACK_LINE(1386)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1387)
												p = px;
												HX_STACK_LINE(1388)
												break;
											}
										}
										HX_STACK_LINE(1391)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1394)
								if (((p != null()))){
									HX_STACK_LINE(1395)
									if ((p->sleeping)){
										HX_STACK_LINE(1396)
										p->sleeping = false;
										HX_STACK_LINE(1397)
										p->next = this->pairs;
										HX_STACK_LINE(1398)
										this->pairs = p;
										HX_STACK_LINE(1399)
										p->first = true;
									}
									HX_STACK_LINE(1401)
									continue;
								}
								HX_STACK_LINE(1403)
								{
									HX_STACK_LINE(1404)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1404)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1411)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1412)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1413)
										p->next = null();
									}
									HX_STACK_LINE(1418)
									Dynamic();
								}
								HX_STACK_LINE(1420)
								p->n1 = leaf;
								HX_STACK_LINE(1421)
								p->n2 = node1;
								HX_STACK_LINE(1422)
								p->id = id;
								HX_STACK_LINE(1423)
								p->di = di;
								HX_STACK_LINE(1424)
								p->next = this->pairs;
								HX_STACK_LINE(1425)
								this->pairs = p;
								HX_STACK_LINE(1426)
								p->first = true;
								HX_STACK_LINE(1427)
								{
									HX_STACK_LINE(1427)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1427)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1427);
											{
												HX_STACK_LINE(1427)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1427)
												{
													HX_STACK_LINE(1427)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1427)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1427)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1427)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1427)
														ret->next = null();
													}
													HX_STACK_LINE(1427)
													Dynamic();
												}
												HX_STACK_LINE(1427)
												ret->elt = p;
												HX_STACK_LINE(1427)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1427)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1427)
									temp->next = _this->head;
									HX_STACK_LINE(1427)
									_this->head = temp;
									HX_STACK_LINE(1427)
									_this->modified = true;
									HX_STACK_LINE(1427)
									(_this->length)++;
									HX_STACK_LINE(1427)
									p;
								}
								HX_STACK_LINE(1428)
								{
									HX_STACK_LINE(1428)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1428)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1428);
											{
												HX_STACK_LINE(1428)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1428)
												{
													HX_STACK_LINE(1428)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1428)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1428)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1428)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1428)
														ret->next = null();
													}
													HX_STACK_LINE(1428)
													Dynamic();
												}
												HX_STACK_LINE(1428)
												ret->elt = p;
												HX_STACK_LINE(1428)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1428)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1428)
									temp->next = _this->head;
									HX_STACK_LINE(1428)
									_this->head = temp;
									HX_STACK_LINE(1428)
									_this->modified = true;
									HX_STACK_LINE(1428)
									(_this->length)++;
									HX_STACK_LINE(1428)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1432);
								{
									HX_STACK_LINE(1432)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1432)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1432)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1433)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1434)
								{
								}
								HX_STACK_LINE(1442)
								node1->child1->next = stack;
								HX_STACK_LINE(1443)
								stack = node1->child1;
							}
							HX_STACK_LINE(1445)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1446)
								{
								}
								HX_STACK_LINE(1454)
								node1->child2->next = stack;
								HX_STACK_LINE(1455)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1462)
		while(((this->moves != null()))){
			struct _Function_2_1{
				inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1464);
					{
						HX_STACK_LINE(1465)
						{
						}
						HX_STACK_LINE(1473)
						::zpp_nape::space::ZPP_AABBNode ret = __this->moves;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1474)
						__this->moves = ret->mnext;
						HX_STACK_LINE(1475)
						ret->mnext = null();
						HX_STACK_LINE(1476)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1464)
			::zpp_nape::space::ZPP_AABBNode leaf = _Function_2_1::Block(this);		HX_STACK_VAR(leaf,"leaf");
			HX_STACK_LINE(1478)
			{
			}
			HX_STACK_LINE(1479)
			leaf->moved = false;
			HX_STACK_LINE(1480)
			::zpp_nape::shape::ZPP_Shape lshape = leaf->shape;		HX_STACK_VAR(lshape,"lshape");
			HX_STACK_LINE(1481)
			::zpp_nape::phys::ZPP_Body lbody = lshape->body;		HX_STACK_VAR(lbody,"lbody");
			HX_STACK_LINE(1482)
			{
			}
			HX_STACK_LINE(1490)
			if ((lbody->component->sleeping)){
				HX_STACK_LINE(1490)
				continue;
			}
			HX_STACK_LINE(1491)
			::zpp_nape::geom::ZPP_AABB ab = leaf->aabb;		HX_STACK_VAR(ab,"ab");
			HX_STACK_LINE(1492)
			::zpp_nape::space::ZPP_AABBNode stack = null();		HX_STACK_VAR(stack,"stack");
			HX_STACK_LINE(1493)
			{
				HX_STACK_LINE(1494)
				if (((this->dtree->root != null()))){
					HX_STACK_LINE(1495)
					{
					}
					HX_STACK_LINE(1503)
					this->dtree->root->next = stack;
					HX_STACK_LINE(1504)
					stack = this->dtree->root;
				}
				HX_STACK_LINE(1506)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1507);
							{
								HX_STACK_LINE(1508)
								{
								}
								HX_STACK_LINE(1516)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1517)
								stack = ret->next;
								HX_STACK_LINE(1518)
								ret->next = null();
								HX_STACK_LINE(1519)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1507)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1521)
					if (((node1 == leaf))){
						HX_STACK_LINE(1521)
						continue;
					}
					HX_STACK_LINE(1522)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1523)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1524)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1525);
									{
										HX_STACK_LINE(1525)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1525)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1524)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1526)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1527)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1528)
								{
								}
								HX_STACK_LINE(1536)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1537)
									id = lshape->id;
									HX_STACK_LINE(1538)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1541)
									id = shape->id;
									HX_STACK_LINE(1542)
									di = lshape->id;
								}
								HX_STACK_LINE(1544)
								{
								}
								HX_STACK_LINE(1552)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1553)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1554)
								{
									HX_STACK_LINE(1555)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1556)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1557)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1558)
										{
											HX_STACK_LINE(1559)
											{
											}
											HX_STACK_LINE(1567)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1568)
												p = px;
												HX_STACK_LINE(1569)
												break;
											}
										}
										HX_STACK_LINE(1572)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1575)
								if (((p != null()))){
									HX_STACK_LINE(1576)
									if ((p->sleeping)){
										HX_STACK_LINE(1577)
										p->sleeping = false;
										HX_STACK_LINE(1578)
										p->next = this->pairs;
										HX_STACK_LINE(1579)
										this->pairs = p;
										HX_STACK_LINE(1580)
										p->first = true;
									}
									HX_STACK_LINE(1582)
									continue;
								}
								HX_STACK_LINE(1584)
								{
									HX_STACK_LINE(1585)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1585)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1592)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1593)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1594)
										p->next = null();
									}
									HX_STACK_LINE(1599)
									Dynamic();
								}
								HX_STACK_LINE(1601)
								p->n1 = leaf;
								HX_STACK_LINE(1602)
								p->n2 = node1;
								HX_STACK_LINE(1603)
								p->id = id;
								HX_STACK_LINE(1604)
								p->di = di;
								HX_STACK_LINE(1605)
								p->next = this->pairs;
								HX_STACK_LINE(1606)
								this->pairs = p;
								HX_STACK_LINE(1607)
								p->first = true;
								HX_STACK_LINE(1608)
								{
									HX_STACK_LINE(1608)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1608)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1608);
											{
												HX_STACK_LINE(1608)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1608)
												{
													HX_STACK_LINE(1608)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1608)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1608)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1608)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1608)
														ret->next = null();
													}
													HX_STACK_LINE(1608)
													Dynamic();
												}
												HX_STACK_LINE(1608)
												ret->elt = p;
												HX_STACK_LINE(1608)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1608)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1608)
									temp->next = _this->head;
									HX_STACK_LINE(1608)
									_this->head = temp;
									HX_STACK_LINE(1608)
									_this->modified = true;
									HX_STACK_LINE(1608)
									(_this->length)++;
									HX_STACK_LINE(1608)
									p;
								}
								HX_STACK_LINE(1609)
								{
									HX_STACK_LINE(1609)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1609)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1609);
											{
												HX_STACK_LINE(1609)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1609)
												{
													HX_STACK_LINE(1609)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1609)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1609)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1609)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1609)
														ret->next = null();
													}
													HX_STACK_LINE(1609)
													Dynamic();
												}
												HX_STACK_LINE(1609)
												ret->elt = p;
												HX_STACK_LINE(1609)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1609)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1609)
									temp->next = _this->head;
									HX_STACK_LINE(1609)
									_this->head = temp;
									HX_STACK_LINE(1609)
									_this->modified = true;
									HX_STACK_LINE(1609)
									(_this->length)++;
									HX_STACK_LINE(1609)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1613);
								{
									HX_STACK_LINE(1613)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1613)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1613)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1614)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1615)
								{
								}
								HX_STACK_LINE(1623)
								node1->child1->next = stack;
								HX_STACK_LINE(1624)
								stack = node1->child1;
							}
							HX_STACK_LINE(1626)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1627)
								{
								}
								HX_STACK_LINE(1635)
								node1->child2->next = stack;
								HX_STACK_LINE(1636)
								stack = node1->child2;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1641)
			{
				HX_STACK_LINE(1642)
				if (((this->stree->root != null()))){
					HX_STACK_LINE(1643)
					{
					}
					HX_STACK_LINE(1651)
					this->stree->root->next = stack;
					HX_STACK_LINE(1652)
					stack = this->stree->root;
				}
				HX_STACK_LINE(1654)
				while(((stack != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &stack){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1655);
							{
								HX_STACK_LINE(1656)
								{
								}
								HX_STACK_LINE(1664)
								::zpp_nape::space::ZPP_AABBNode ret = stack;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1665)
								stack = ret->next;
								HX_STACK_LINE(1666)
								ret->next = null();
								HX_STACK_LINE(1667)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1655)
					::zpp_nape::space::ZPP_AABBNode node1 = _Function_4_1::Block(stack);		HX_STACK_VAR(node1,"node1");
					HX_STACK_LINE(1669)
					if (((node1 == leaf))){
						HX_STACK_LINE(1669)
						continue;
					}
					HX_STACK_LINE(1670)
					if (((node1->child1 == null()))){
						HX_STACK_LINE(1671)
						::zpp_nape::shape::ZPP_Shape shape = node1->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1672)
						if (((bool((shape->body != lshape->body)) && bool(!(((bool((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((lshape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))))))){
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
									HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1673);
									{
										HX_STACK_LINE(1673)
										::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(1673)
										return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
									}
									return null();
								}
							};
							HX_STACK_LINE(1672)
							if ((_Function_6_1::Block(node1,ab))){
								HX_STACK_LINE(1674)
								int id;		HX_STACK_VAR(id,"id");
								HX_STACK_LINE(1675)
								int di;		HX_STACK_VAR(di,"di");
								HX_STACK_LINE(1676)
								{
								}
								HX_STACK_LINE(1684)
								if (((lshape->id < shape->id))){
									HX_STACK_LINE(1685)
									id = lshape->id;
									HX_STACK_LINE(1686)
									di = shape->id;
								}
								else{
									HX_STACK_LINE(1689)
									id = shape->id;
									HX_STACK_LINE(1690)
									di = lshape->id;
								}
								HX_STACK_LINE(1692)
								{
								}
								HX_STACK_LINE(1700)
								::zpp_nape::shape::ZPP_Shape s = (  (((lshape->pairs->length < shape->pairs->length))) ? ::zpp_nape::shape::ZPP_Shape(lshape) : ::zpp_nape::shape::ZPP_Shape(shape) );		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1701)
								::zpp_nape::space::ZPP_AABBPair p = null();		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1702)
								{
									HX_STACK_LINE(1703)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair cx_ite = s->pairs->head;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(1704)
									while(((cx_ite != null()))){
										HX_STACK_LINE(1705)
										::zpp_nape::space::ZPP_AABBPair px = cx_ite->elt;		HX_STACK_VAR(px,"px");
										HX_STACK_LINE(1706)
										{
											HX_STACK_LINE(1707)
											{
											}
											HX_STACK_LINE(1715)
											if (((bool((px->id == id)) && bool((px->di == di))))){
												HX_STACK_LINE(1716)
												p = px;
												HX_STACK_LINE(1717)
												break;
											}
										}
										HX_STACK_LINE(1720)
										cx_ite = cx_ite->next;
									}
								}
								HX_STACK_LINE(1723)
								if (((p != null()))){
									HX_STACK_LINE(1724)
									if ((p->sleeping)){
										HX_STACK_LINE(1725)
										p->sleeping = false;
										HX_STACK_LINE(1726)
										p->next = this->pairs;
										HX_STACK_LINE(1727)
										this->pairs = p;
										HX_STACK_LINE(1728)
										p->first = true;
									}
									HX_STACK_LINE(1730)
									continue;
								}
								HX_STACK_LINE(1732)
								{
									HX_STACK_LINE(1733)
									if (((::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool == null()))){
										HX_STACK_LINE(1733)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::__new();
									}
									else{
										HX_STACK_LINE(1740)
										p = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1741)
										::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = p->next;
										HX_STACK_LINE(1742)
										p->next = null();
									}
									HX_STACK_LINE(1747)
									Dynamic();
								}
								HX_STACK_LINE(1749)
								p->n1 = leaf;
								HX_STACK_LINE(1750)
								p->n2 = node1;
								HX_STACK_LINE(1751)
								p->id = id;
								HX_STACK_LINE(1752)
								p->di = di;
								HX_STACK_LINE(1753)
								p->next = this->pairs;
								HX_STACK_LINE(1754)
								this->pairs = p;
								HX_STACK_LINE(1755)
								p->first = true;
								HX_STACK_LINE(1756)
								{
									HX_STACK_LINE(1756)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = lshape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1756)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1756);
											{
												HX_STACK_LINE(1756)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1756)
												{
													HX_STACK_LINE(1756)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1756)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1756)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1756)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1756)
														ret->next = null();
													}
													HX_STACK_LINE(1756)
													Dynamic();
												}
												HX_STACK_LINE(1756)
												ret->elt = p;
												HX_STACK_LINE(1756)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1756)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1756)
									temp->next = _this->head;
									HX_STACK_LINE(1756)
									_this->head = temp;
									HX_STACK_LINE(1756)
									_this->modified = true;
									HX_STACK_LINE(1756)
									(_this->length)++;
									HX_STACK_LINE(1756)
									p;
								}
								HX_STACK_LINE(1757)
								{
									HX_STACK_LINE(1757)
									::zpp_nape::util::ZNPList_ZPP_AABBPair _this = shape->pairs;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1757)
									{
									}
									struct _Function_8_1{
										inline static ::zpp_nape::util::ZNPNode_ZPP_AABBPair Block( ::zpp_nape::space::ZPP_AABBPair &p){
											HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1757);
											{
												HX_STACK_LINE(1757)
												::zpp_nape::util::ZNPNode_ZPP_AABBPair ret;		HX_STACK_VAR(ret,"ret");
												HX_STACK_LINE(1757)
												{
													HX_STACK_LINE(1757)
													if (((::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool == null()))){
														HX_STACK_LINE(1757)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::__new();
													}
													else{
														HX_STACK_LINE(1757)
														ret = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
														HX_STACK_LINE(1757)
														::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = ret->next;
														HX_STACK_LINE(1757)
														ret->next = null();
													}
													HX_STACK_LINE(1757)
													Dynamic();
												}
												HX_STACK_LINE(1757)
												ret->elt = p;
												HX_STACK_LINE(1757)
												return ret;
											}
											return null();
										}
									};
									HX_STACK_LINE(1757)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair temp = _Function_8_1::Block(p);		HX_STACK_VAR(temp,"temp");
									HX_STACK_LINE(1757)
									temp->next = _this->head;
									HX_STACK_LINE(1757)
									_this->head = temp;
									HX_STACK_LINE(1757)
									_this->modified = true;
									HX_STACK_LINE(1757)
									(_this->length)++;
									HX_STACK_LINE(1757)
									p;
								}
							}
						}
					}
					else{
						struct _Function_5_1{
							inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::geom::ZPP_AABB &ab){
								HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1761);
								{
									HX_STACK_LINE(1761)
									::zpp_nape::geom::ZPP_AABB x = node1->aabb;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(1761)
									return (bool((bool((bool((x->miny <= ab->maxy)) && bool((ab->miny <= x->maxy)))) && bool((x->minx <= ab->maxx)))) && bool((ab->minx <= x->maxx)));
								}
								return null();
							}
						};
						HX_STACK_LINE(1761)
						if ((_Function_5_1::Block(node1,ab))){
							HX_STACK_LINE(1762)
							if (((node1->child1 != null()))){
								HX_STACK_LINE(1763)
								{
								}
								HX_STACK_LINE(1771)
								node1->child1->next = stack;
								HX_STACK_LINE(1772)
								stack = node1->child1;
							}
							HX_STACK_LINE(1774)
							if (((node1->child2 != null()))){
								HX_STACK_LINE(1775)
								{
								}
								HX_STACK_LINE(1783)
								node1->child2->next = stack;
								HX_STACK_LINE(1784)
								stack = node1->child2;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1791)
		::zpp_nape::space::ZPP_AABBPair pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(1792)
		::zpp_nape::space::ZPP_AABBPair cur = this->pairs;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(1793)
		while(((cur != null()))){
			HX_STACK_LINE(1794)
			{
			}
			struct _Function_2_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBPair &cur){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1802);
					{
						HX_STACK_LINE(1802)
						::zpp_nape::geom::ZPP_AABB _this = cur->n1->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = cur->n2->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1802)
						return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1802)
			if (((bool(!(cur->first)) && bool(!(_Function_2_1::Block(cur)))))){
				HX_STACK_LINE(1803)
				if (((pre == null()))){
					HX_STACK_LINE(1803)
					this->pairs = cur->next;
				}
				else{
					HX_STACK_LINE(1804)
					pre->next = cur->next;
				}
				HX_STACK_LINE(1805)
				{
					HX_STACK_LINE(1805)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = cur->n1->shape->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1805)
					{
					}
					HX_STACK_LINE(1805)
					{
						HX_STACK_LINE(1805)
						{
						}
						HX_STACK_LINE(1805)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1805)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1805)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1805)
						while(((cur1 != null()))){
							HX_STACK_LINE(1805)
							if (((cur1->elt == cur))){
								HX_STACK_LINE(1805)
								{
									HX_STACK_LINE(1805)
									{
									}
									HX_STACK_LINE(1805)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1805)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1805)
									if (((pre1 == null()))){
										HX_STACK_LINE(1805)
										old = _this->head;
										HX_STACK_LINE(1805)
										ret1 = old->next;
										HX_STACK_LINE(1805)
										_this->head = ret1;
										HX_STACK_LINE(1805)
										if (((_this->head == null()))){
											HX_STACK_LINE(1805)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1805)
										old = pre1->next;
										HX_STACK_LINE(1805)
										ret1 = old->next;
										HX_STACK_LINE(1805)
										pre1->next = ret1;
										HX_STACK_LINE(1805)
										if (((ret1 == null()))){
											HX_STACK_LINE(1805)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1805)
									{
									}
									HX_STACK_LINE(1805)
									{
										HX_STACK_LINE(1805)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1805)
										{
										}
										HX_STACK_LINE(1805)
										o->elt = null();
										HX_STACK_LINE(1805)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1805)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1805)
									_this->modified = true;
									HX_STACK_LINE(1805)
									(_this->length)--;
									HX_STACK_LINE(1805)
									_this->pushmod = true;
									HX_STACK_LINE(1805)
									ret1;
								}
								HX_STACK_LINE(1805)
								ret = true;
								HX_STACK_LINE(1805)
								break;
							}
							HX_STACK_LINE(1805)
							pre1 = cur1;
							HX_STACK_LINE(1805)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1805)
						ret;
					}
				}
				HX_STACK_LINE(1806)
				{
					HX_STACK_LINE(1806)
					::zpp_nape::util::ZNPList_ZPP_AABBPair _this = cur->n2->shape->pairs;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1806)
					{
					}
					HX_STACK_LINE(1806)
					{
						HX_STACK_LINE(1806)
						{
						}
						HX_STACK_LINE(1806)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair pre1 = null();		HX_STACK_VAR(pre1,"pre1");
						HX_STACK_LINE(1806)
						::zpp_nape::util::ZNPNode_ZPP_AABBPair cur1 = _this->head;		HX_STACK_VAR(cur1,"cur1");
						HX_STACK_LINE(1806)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1806)
						while(((cur1 != null()))){
							HX_STACK_LINE(1806)
							if (((cur1->elt == cur))){
								HX_STACK_LINE(1806)
								{
									HX_STACK_LINE(1806)
									{
									}
									HX_STACK_LINE(1806)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1806)
									::zpp_nape::util::ZNPNode_ZPP_AABBPair ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1806)
									if (((pre1 == null()))){
										HX_STACK_LINE(1806)
										old = _this->head;
										HX_STACK_LINE(1806)
										ret1 = old->next;
										HX_STACK_LINE(1806)
										_this->head = ret1;
										HX_STACK_LINE(1806)
										if (((_this->head == null()))){
											HX_STACK_LINE(1806)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1806)
										old = pre1->next;
										HX_STACK_LINE(1806)
										ret1 = old->next;
										HX_STACK_LINE(1806)
										pre1->next = ret1;
										HX_STACK_LINE(1806)
										if (((ret1 == null()))){
											HX_STACK_LINE(1806)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1806)
									{
									}
									HX_STACK_LINE(1806)
									{
										HX_STACK_LINE(1806)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1806)
										{
										}
										HX_STACK_LINE(1806)
										o->elt = null();
										HX_STACK_LINE(1806)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool;
										HX_STACK_LINE(1806)
										::zpp_nape::util::ZNPNode_ZPP_AABBPair_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1806)
									_this->modified = true;
									HX_STACK_LINE(1806)
									(_this->length)--;
									HX_STACK_LINE(1806)
									_this->pushmod = true;
									HX_STACK_LINE(1806)
									ret1;
								}
								HX_STACK_LINE(1806)
								ret = true;
								HX_STACK_LINE(1806)
								break;
							}
							HX_STACK_LINE(1806)
							pre1 = cur1;
							HX_STACK_LINE(1806)
							cur1 = cur1->next;
						}
						HX_STACK_LINE(1806)
						ret;
					}
				}
				HX_STACK_LINE(1807)
				::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
				HX_STACK_LINE(1808)
				if (((cur->arb != null()))){
					HX_STACK_LINE(1808)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(1809)
				cur->arb = null();
				HX_STACK_LINE(1810)
				{
					HX_STACK_LINE(1811)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1812)
					{
					}
					HX_STACK_LINE(1820)
					{
						HX_STACK_LINE(1820)
						{
						}
						HX_STACK_LINE(1820)
						o->n1 = o->n2 = null();
						HX_STACK_LINE(1820)
						o->sleeping = false;
					}
					HX_STACK_LINE(1821)
					o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(1822)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(1827)
				cur = nxt;
				HX_STACK_LINE(1828)
				continue;
			}
			HX_STACK_LINE(1830)
			::zpp_nape::shape::ZPP_Shape s1 = cur->n1->shape;		HX_STACK_VAR(s1,"s1");
			HX_STACK_LINE(1831)
			::zpp_nape::phys::ZPP_Body b1 = s1->body;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(1832)
			::zpp_nape::shape::ZPP_Shape s2 = cur->n2->shape;		HX_STACK_VAR(s2,"s2");
			HX_STACK_LINE(1833)
			::zpp_nape::phys::ZPP_Body b2 = s2->body;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(1834)
			if ((!(cur->first))){
				HX_STACK_LINE(1834)
				if (((bool(((bool(b1->component->sleeping) || bool((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))))) && bool(((bool(b2->component->sleeping) || bool((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)))))))){
					HX_STACK_LINE(1836)
					cur->sleeping = true;
					HX_STACK_LINE(1837)
					if (((pre == null()))){
						HX_STACK_LINE(1837)
						this->pairs = cur->next;
					}
					else{
						HX_STACK_LINE(1838)
						pre->next = cur->next;
					}
					HX_STACK_LINE(1839)
					cur = cur->next;
					HX_STACK_LINE(1840)
					continue;
				}
			}
			HX_STACK_LINE(1843)
			cur->first = false;
			struct _Function_2_2{
				inline static bool Block( ::zpp_nape::shape::ZPP_Shape &s1,::zpp_nape::shape::ZPP_Shape &s2){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1844);
					{
						HX_STACK_LINE(1844)
						::zpp_nape::geom::ZPP_AABB _this = s1->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = s2->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1844)
						return (bool((bool((bool((x->miny <= _this->maxy)) && bool((_this->miny <= x->maxy)))) && bool((x->minx <= _this->maxx)))) && bool((_this->minx <= x->maxx)));
					}
					return null();
				}
			};
			HX_STACK_LINE(1844)
			if ((_Function_2_2::Block(s1,s2))){
				HX_STACK_LINE(1845)
				{
				}
				HX_STACK_LINE(1853)
				::zpp_nape::dynamics::ZPP_Arbiter oarb = cur->arb;		HX_STACK_VAR(oarb,"oarb");
				HX_STACK_LINE(1854)
				if ((discrete)){
					HX_STACK_LINE(1854)
					cur->arb = space->narrowPhase(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),cur->arb,false);
				}
				else{
					HX_STACK_LINE(1855)
					cur->arb = space->continuousEvent(s1,s2,(bool(!(((b1->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)))) || bool(!(((b2->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))),cur->arb,false);
				}
				HX_STACK_LINE(1856)
				if (((cur->arb == null()))){
					HX_STACK_LINE(1856)
					if (((oarb != null()))){
						HX_STACK_LINE(1857)
						oarb->pair = null();
					}
				}
				else{
					HX_STACK_LINE(1859)
					cur->arb->pair = cur;
				}
			}
			HX_STACK_LINE(1870)
			pre = cur;
			HX_STACK_LINE(1871)
			cur = cur->next;
		}
	}
return null();
}


Void ZPP_DynAABBPhase_obj::sync_broadphase( ){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::sync_broadphase","zpp_nape/space/DynAABBPhase.hx",978);
		HX_STACK_THIS(this);
		HX_STACK_LINE(979)
		this->space->validation();
		HX_STACK_LINE(980)
		if (((this->syncs != null()))){
			HX_STACK_LINE(980)
			if (((this->moves == null()))){
				HX_STACK_LINE(982)
				::zpp_nape::space::ZPP_AABBNode node = this->syncs;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(983)
				while(((node != null()))){
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(985)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(986)
						{
						}
						HX_STACK_LINE(994)
						{
						}
						HX_STACK_LINE(1002)
						if ((!(node->first_sync))){
							HX_STACK_LINE(1003)
							::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1004)
							if (((node == tree->root))){
								HX_STACK_LINE(1004)
								tree->root = null();
								HX_STACK_LINE(1004)
								Dynamic();
							}
							else{
								HX_STACK_LINE(1004)
								::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
								HX_STACK_LINE(1004)
								::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
								HX_STACK_LINE(1004)
								::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1004)
								if (((gparent != null()))){
									HX_STACK_LINE(1004)
									if (((gparent->child1 == parent))){
										HX_STACK_LINE(1004)
										gparent->child1 = sibling;
									}
									else{
										HX_STACK_LINE(1004)
										gparent->child2 = sibling;
									}
									HX_STACK_LINE(1004)
									sibling->parent = gparent;
									HX_STACK_LINE(1004)
									{
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1004)
										{
										}
										HX_STACK_LINE(1004)
										{
											HX_STACK_LINE(1004)
											o->height = (int)-1;
											HX_STACK_LINE(1004)
											{
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1004)
												{
												}
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1004)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1004)
														o1->outer = null();
													}
													HX_STACK_LINE(1004)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1004)
													o1->_invalidate = null();
													HX_STACK_LINE(1004)
													o1->_validate = null();
												}
												HX_STACK_LINE(1004)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1004)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1004)
											o->next = null();
											HX_STACK_LINE(1004)
											o->snext = null();
											HX_STACK_LINE(1004)
											o->mnext = null();
										}
										HX_STACK_LINE(1004)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1004)
									::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
									HX_STACK_LINE(1004)
									while(((node1 != null()))){
										struct _Function_9_1{
											inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
												{
													HX_STACK_LINE(1004)
													::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(1004)
													::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(1004)
													int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
													struct _Function_10_1{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
															{
																HX_STACK_LINE(1004)
																::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1004)
																::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1004)
																c->child1 = node1;
																HX_STACK_LINE(1004)
																c->parent = node1->parent;
																HX_STACK_LINE(1004)
																node1->parent = c;
																HX_STACK_LINE(1004)
																if (((c->parent != null()))){
																	HX_STACK_LINE(1004)
																	if (((c->parent->child1 == node1))){
																		HX_STACK_LINE(1004)
																		c->parent->child1 = c;
																	}
																	else{
																		HX_STACK_LINE(1004)
																		c->parent->child2 = c;
																	}
																}
																else{
																	HX_STACK_LINE(1004)
																	tree->root = c;
																}
																HX_STACK_LINE(1004)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1004)
																	c->child2 = f;
																	HX_STACK_LINE(1004)
																	node1->child2 = g;
																	HX_STACK_LINE(1004)
																	g->parent = node1;
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	node1->height = ((int)1 + _Function_12_1::Block(b,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	c->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1004)
																	c->child2 = g;
																	HX_STACK_LINE(1004)
																	node1->child2 = f;
																	HX_STACK_LINE(1004)
																	f->parent = node1;
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	node1->height = ((int)1 + _Function_12_1::Block(b,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	c->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1004)
																return c;
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
															{
																HX_STACK_LINE(1004)
																::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1004)
																::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1004)
																b->child1 = node1;
																HX_STACK_LINE(1004)
																b->parent = node1->parent;
																HX_STACK_LINE(1004)
																node1->parent = b;
																HX_STACK_LINE(1004)
																if (((b->parent != null()))){
																	HX_STACK_LINE(1004)
																	if (((b->parent->child1 == node1))){
																		HX_STACK_LINE(1004)
																		b->parent->child1 = b;
																	}
																	else{
																		HX_STACK_LINE(1004)
																		b->parent->child2 = b;
																	}
																}
																else{
																	HX_STACK_LINE(1004)
																	tree->root = b;
																}
																HX_STACK_LINE(1004)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1004)
																	b->child2 = f;
																	HX_STACK_LINE(1004)
																	node1->child1 = g;
																	HX_STACK_LINE(1004)
																	g->parent = node1;
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	node1->height = ((int)1 + _Function_12_1::Block(c,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	b->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1004)
																	b->child2 = g;
																	HX_STACK_LINE(1004)
																	node1->child1 = f;
																	HX_STACK_LINE(1004)
																	f->parent = node1;
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1004)
																	{
																		HX_STACK_LINE(1004)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1004)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1004)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1004)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1004)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	node1->height = ((int)1 + _Function_12_1::Block(c,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
																			{
																				HX_STACK_LINE(1004)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1004)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1004)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1004)
																	b->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1004)
																return b;
															}
															return null();
														}
													};
													HX_STACK_LINE(1004)
													return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1004)
										node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_9_1::Block(node1,tree)) );
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
										HX_STACK_LINE(1004)
										{
											HX_STACK_LINE(1004)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1004)
											_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
											HX_STACK_LINE(1004)
											_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
											HX_STACK_LINE(1004)
											_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
											HX_STACK_LINE(1004)
											_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
										}
										struct _Function_9_2{
											inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1004);
												{
													HX_STACK_LINE(1004)
													int x = child1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1004)
													int y = child2->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1004)
													return (  (((x > y))) ? int(x) : int(y) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1004)
										node1->height = ((int)1 + _Function_9_2::Block(child1,child2));
										HX_STACK_LINE(1004)
										node1 = node1->parent;
									}
								}
								else{
									HX_STACK_LINE(1004)
									tree->root = sibling;
									HX_STACK_LINE(1004)
									sibling->parent = null();
									HX_STACK_LINE(1004)
									{
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1004)
										{
										}
										HX_STACK_LINE(1004)
										{
											HX_STACK_LINE(1004)
											o->height = (int)-1;
											HX_STACK_LINE(1004)
											{
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1004)
												{
												}
												HX_STACK_LINE(1004)
												{
													HX_STACK_LINE(1004)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1004)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1004)
														o1->outer = null();
													}
													HX_STACK_LINE(1004)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1004)
													o1->_invalidate = null();
													HX_STACK_LINE(1004)
													o1->_validate = null();
												}
												HX_STACK_LINE(1004)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1004)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1004)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1004)
											o->next = null();
											HX_STACK_LINE(1004)
											o->snext = null();
											HX_STACK_LINE(1004)
											o->mnext = null();
										}
										HX_STACK_LINE(1004)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1004)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1006)
							node->first_sync = false;
						}
						HX_STACK_LINE(1007)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1008)
						if ((!(this->space->continuous))){
							HX_STACK_LINE(1008)
							if ((shape->zip_aabb)){
								HX_STACK_LINE(1008)
								if (((shape->body != null()))){
									HX_STACK_LINE(1008)
									shape->zip_aabb = false;
									HX_STACK_LINE(1008)
									if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1008)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1008)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1008)
											if (((_this->body != null()))){
												HX_STACK_LINE(1008)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1008)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1008)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1008)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1008)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1008)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1008)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1008)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1008)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1008)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1008)
															{
															}
															HX_STACK_LINE(1008)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1008)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1008)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1008)
																	{
																	}
																	HX_STACK_LINE(1008)
																	{
																	}
																}
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1008)
																	{
																	}
																	HX_STACK_LINE(1008)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1008)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1008)
																	{
																	}
																	HX_STACK_LINE(1008)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1008)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1008)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1008)
																	{
																	}
																	HX_STACK_LINE(1008)
																	{
																	}
																}
																HX_STACK_LINE(1008)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(1008)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1008)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1008)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1008)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1008)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(1008)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1008)
																		{
																			HX_STACK_LINE(1008)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1008)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1008)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1008)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1008)
																		u = v;
																		HX_STACK_LINE(1008)
																		v = w;
																		HX_STACK_LINE(1008)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(1008)
																	cx_ite = _this1->lverts->next;
																	HX_STACK_LINE(1008)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1008)
																	{
																		HX_STACK_LINE(1008)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1008)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1008)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1008)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1008)
																	u = v;
																	HX_STACK_LINE(1008)
																	v = w;
																	HX_STACK_LINE(1008)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1008)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1008)
																	{
																		HX_STACK_LINE(1008)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1008)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1008)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1008)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1008)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1008)
																{
																	HX_STACK_LINE(1008)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1008)
																	{
																	}
																	HX_STACK_LINE(1008)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1008)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1008)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1008)
														_this1->zip_axis = false;
														HX_STACK_LINE(1008)
														{
															HX_STACK_LINE(1008)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1008)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1008)
															{
															}
															HX_STACK_LINE(1008)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1008)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1008)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1008)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1008)
										{
										}
										HX_STACK_LINE(1008)
										{
										}
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1008)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1008)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1008)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1008)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1008)
											if (((_this->body != null()))){
												HX_STACK_LINE(1008)
												_this->zip_gverts = false;
												HX_STACK_LINE(1008)
												_this->validate_lverts();
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1008)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1008)
														_this1->zip_axis = false;
														HX_STACK_LINE(1008)
														{
															HX_STACK_LINE(1008)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1008)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1008)
															{
															}
															HX_STACK_LINE(1008)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1008)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(1008)
													while(((cx_ite != null()))){
														HX_STACK_LINE(1008)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1008)
														{
															HX_STACK_LINE(1008)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1008)
															li = li->next;
															HX_STACK_LINE(1008)
															{
																HX_STACK_LINE(1008)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1008)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1008)
														cx_ite = cx_ite->next;
													}
												}
											}
										}
										HX_STACK_LINE(1008)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1008)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1008)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1008)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1008)
											{
											}
											HX_STACK_LINE(1008)
											{
											}
										}
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1008)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1008)
											{
											}
											HX_STACK_LINE(1008)
											{
											}
										}
										HX_STACK_LINE(1008)
										{
											HX_STACK_LINE(1008)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1008)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1008)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1008)
												{
													HX_STACK_LINE(1008)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1008)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1008)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1008)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1008)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1008)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1008)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1008)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1008)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1009)
						{
							HX_STACK_LINE(1009)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1009)
							aabb->minx = (a->minx - 3.0);
							HX_STACK_LINE(1009)
							aabb->miny = (a->miny - 3.0);
							HX_STACK_LINE(1009)
							aabb->maxx = (a->maxx + 3.0);
							HX_STACK_LINE(1009)
							aabb->maxy = (a->maxy + 3.0);
						}
						HX_STACK_LINE(1010)
						::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1011)
						if (((tree->root == null()))){
							HX_STACK_LINE(1011)
							tree->root = node;
							HX_STACK_LINE(1011)
							tree->root->parent = null();
						}
						else{
							HX_STACK_LINE(1011)
							::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1011)
							while((!(((node1->child1 == null()))))){
								HX_STACK_LINE(1011)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1011)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_1{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1011)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								Float area = _Function_7_1::Block(node1);		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(1011)
								{
									HX_STACK_LINE(1011)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1011)
									_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
									HX_STACK_LINE(1011)
									_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
									HX_STACK_LINE(1011)
									_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
									HX_STACK_LINE(1011)
									_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
								}
								struct _Function_7_2{
									inline static Float Block( ){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1011)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								Float carea = _Function_7_2::Block();		HX_STACK_VAR(carea,"carea");
								HX_STACK_LINE(1011)
								Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
								HX_STACK_LINE(1011)
								Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
								struct _Function_7_3{
									inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											{
												HX_STACK_LINE(1011)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1011)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1011)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1011)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1011)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														HX_STACK_LINE(1011)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1011)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																{
																	HX_STACK_LINE(1011)
																	::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1011)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1011)
														Float oarea = _Function_9_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																{
																	HX_STACK_LINE(1011)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1011)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1011)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1011)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1011)
											return (  (((child1->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child1,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								Float cost1 = _Function_7_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
								struct _Function_7_4{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											{
												HX_STACK_LINE(1011)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1011)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1011)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1011)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1011)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														HX_STACK_LINE(1011)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1011)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																{
																	HX_STACK_LINE(1011)
																	::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1011)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1011)
														Float oarea = _Function_9_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																{
																	HX_STACK_LINE(1011)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1011)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1011)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1011)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1011)
											return (  (((child2->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child2,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								Float cost2 = _Function_7_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
								HX_STACK_LINE(1011)
								if (((bool((cost < cost1)) && bool((cost < cost2))))){
									HX_STACK_LINE(1011)
									break;
								}
								else{
									HX_STACK_LINE(1011)
									node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
								}
							}
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
							HX_STACK_LINE(1011)
							::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
							HX_STACK_LINE(1011)
							{
								HX_STACK_LINE(1011)
								if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(1011)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(1011)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(1011)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
									HX_STACK_LINE(1011)
									nparent->next = null();
								}
								HX_STACK_LINE(1011)
								{
									HX_STACK_LINE(1011)
									{
										HX_STACK_LINE(1011)
										if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
											HX_STACK_LINE(1011)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
										}
										else{
											HX_STACK_LINE(1011)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
											HX_STACK_LINE(1011)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
											HX_STACK_LINE(1011)
											nparent->aabb->next = null();
										}
										HX_STACK_LINE(1011)
										Dynamic();
									}
									HX_STACK_LINE(1011)
									nparent->moved = false;
									HX_STACK_LINE(1011)
									nparent->synced = false;
									HX_STACK_LINE(1011)
									nparent->first_sync = false;
								}
							}
							HX_STACK_LINE(1011)
							nparent->parent = oparent;
							HX_STACK_LINE(1011)
							{
								HX_STACK_LINE(1011)
								::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1011)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(1011)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(1011)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(1011)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							HX_STACK_LINE(1011)
							nparent->height = (sibling->height + (int)1);
							HX_STACK_LINE(1011)
							if (((oparent != null()))){
								HX_STACK_LINE(1011)
								if (((oparent->child1 == sibling))){
									HX_STACK_LINE(1011)
									oparent->child1 = nparent;
								}
								else{
									HX_STACK_LINE(1011)
									oparent->child2 = nparent;
								}
								HX_STACK_LINE(1011)
								nparent->child1 = sibling;
								HX_STACK_LINE(1011)
								nparent->child2 = node;
								HX_STACK_LINE(1011)
								sibling->parent = nparent;
								HX_STACK_LINE(1011)
								node->parent = nparent;
							}
							else{
								HX_STACK_LINE(1011)
								nparent->child1 = sibling;
								HX_STACK_LINE(1011)
								nparent->child2 = node;
								HX_STACK_LINE(1011)
								sibling->parent = nparent;
								HX_STACK_LINE(1011)
								node->parent = nparent;
								HX_STACK_LINE(1011)
								tree->root = nparent;
							}
							HX_STACK_LINE(1011)
							node1 = node->parent;
							HX_STACK_LINE(1011)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1011)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1011)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														HX_STACK_LINE(1011)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1011)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1011)
														c->child1 = node1;
														HX_STACK_LINE(1011)
														c->parent = node1->parent;
														HX_STACK_LINE(1011)
														node1->parent = c;
														HX_STACK_LINE(1011)
														if (((c->parent != null()))){
															HX_STACK_LINE(1011)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1011)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1011)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1011)
															tree->root = c;
														}
														HX_STACK_LINE(1011)
														if (((f->height > g->height))){
															HX_STACK_LINE(1011)
															c->child2 = f;
															HX_STACK_LINE(1011)
															node1->child2 = g;
															HX_STACK_LINE(1011)
															g->parent = node1;
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1011)
															c->child2 = g;
															HX_STACK_LINE(1011)
															node1->child2 = f;
															HX_STACK_LINE(1011)
															f->parent = node1;
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1011)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
													{
														HX_STACK_LINE(1011)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1011)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1011)
														b->child1 = node1;
														HX_STACK_LINE(1011)
														b->parent = node1->parent;
														HX_STACK_LINE(1011)
														node1->parent = b;
														HX_STACK_LINE(1011)
														if (((b->parent != null()))){
															HX_STACK_LINE(1011)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1011)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1011)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1011)
															tree->root = b;
														}
														HX_STACK_LINE(1011)
														if (((f->height > g->height))){
															HX_STACK_LINE(1011)
															b->child2 = f;
															HX_STACK_LINE(1011)
															node1->child1 = g;
															HX_STACK_LINE(1011)
															g->parent = node1;
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1011)
															b->child2 = g;
															HX_STACK_LINE(1011)
															node1->child1 = f;
															HX_STACK_LINE(1011)
															f->parent = node1;
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1011)
															{
																HX_STACK_LINE(1011)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1011)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1011)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1011)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1011)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
																	{
																		HX_STACK_LINE(1011)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1011)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1011)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1011)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1011)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1011)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1011)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1011)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1011);
										{
											HX_STACK_LINE(1011)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1011)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1011)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1011)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1011)
								{
									HX_STACK_LINE(1011)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1011)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1011)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1011)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1011)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								HX_STACK_LINE(1011)
								node1 = node1->parent;
							}
						}
						HX_STACK_LINE(1012)
						node->synced = false;
					}
					HX_STACK_LINE(1014)
					{
					}
					HX_STACK_LINE(1022)
					node->moved = true;
					HX_STACK_LINE(1023)
					node->mnext = node->snext;
					HX_STACK_LINE(1024)
					node->snext = null();
					HX_STACK_LINE(1025)
					node = node->mnext;
				}
				HX_STACK_LINE(1027)
				{
					HX_STACK_LINE(1028)
					::zpp_nape::space::ZPP_AABBNode t = this->syncs;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1029)
					this->syncs = this->moves;
					HX_STACK_LINE(1030)
					this->moves = t;
				}
			}
			else{
				HX_STACK_LINE(1033)
				while(((this->syncs != null()))){
					struct _Function_4_1{
						inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_DynAABBPhase_obj *__this){
							HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1035);
							{
								HX_STACK_LINE(1036)
								{
								}
								HX_STACK_LINE(1044)
								::zpp_nape::space::ZPP_AABBNode ret = __this->syncs;		HX_STACK_VAR(ret,"ret");
								HX_STACK_LINE(1045)
								__this->syncs = ret->snext;
								HX_STACK_LINE(1046)
								ret->snext = null();
								HX_STACK_LINE(1047)
								return ret;
							}
							return null();
						}
					};
					HX_STACK_LINE(1035)
					::zpp_nape::space::ZPP_AABBNode node = _Function_4_1::Block(this);		HX_STACK_VAR(node,"node");
					HX_STACK_LINE(1049)
					{
						HX_STACK_LINE(1050)
						::zpp_nape::shape::ZPP_Shape shape = node->shape;		HX_STACK_VAR(shape,"shape");
						HX_STACK_LINE(1051)
						{
						}
						HX_STACK_LINE(1059)
						{
						}
						HX_STACK_LINE(1067)
						if ((!(node->first_sync))){
							HX_STACK_LINE(1068)
							::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn)) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
							HX_STACK_LINE(1069)
							if (((node == tree->root))){
								HX_STACK_LINE(1069)
								tree->root = null();
								HX_STACK_LINE(1069)
								Dynamic();
							}
							else{
								HX_STACK_LINE(1069)
								::zpp_nape::space::ZPP_AABBNode parent = node->parent;		HX_STACK_VAR(parent,"parent");
								HX_STACK_LINE(1069)
								::zpp_nape::space::ZPP_AABBNode gparent = parent->parent;		HX_STACK_VAR(gparent,"gparent");
								HX_STACK_LINE(1069)
								::zpp_nape::space::ZPP_AABBNode sibling = (  (((parent->child1 == node))) ? ::zpp_nape::space::ZPP_AABBNode(parent->child2) : ::zpp_nape::space::ZPP_AABBNode(parent->child1) );		HX_STACK_VAR(sibling,"sibling");
								HX_STACK_LINE(1069)
								if (((gparent != null()))){
									HX_STACK_LINE(1069)
									if (((gparent->child1 == parent))){
										HX_STACK_LINE(1069)
										gparent->child1 = sibling;
									}
									else{
										HX_STACK_LINE(1069)
										gparent->child2 = sibling;
									}
									HX_STACK_LINE(1069)
									sibling->parent = gparent;
									HX_STACK_LINE(1069)
									{
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1069)
										{
										}
										HX_STACK_LINE(1069)
										{
											HX_STACK_LINE(1069)
											o->height = (int)-1;
											HX_STACK_LINE(1069)
											{
												HX_STACK_LINE(1069)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1069)
												{
												}
												HX_STACK_LINE(1069)
												{
													HX_STACK_LINE(1069)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1069)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1069)
														o1->outer = null();
													}
													HX_STACK_LINE(1069)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1069)
													o1->_invalidate = null();
													HX_STACK_LINE(1069)
													o1->_validate = null();
												}
												HX_STACK_LINE(1069)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1069)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1069)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1069)
											o->next = null();
											HX_STACK_LINE(1069)
											o->snext = null();
											HX_STACK_LINE(1069)
											o->mnext = null();
										}
										HX_STACK_LINE(1069)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1069)
									::zpp_nape::space::ZPP_AABBNode node1 = gparent;		HX_STACK_VAR(node1,"node1");
									HX_STACK_LINE(1069)
									while(((node1 != null()))){
										struct _Function_9_1{
											inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
												{
													HX_STACK_LINE(1069)
													::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(1069)
													::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
													HX_STACK_LINE(1069)
													int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
													struct _Function_10_1{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
															{
																HX_STACK_LINE(1069)
																::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1069)
																::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1069)
																c->child1 = node1;
																HX_STACK_LINE(1069)
																c->parent = node1->parent;
																HX_STACK_LINE(1069)
																node1->parent = c;
																HX_STACK_LINE(1069)
																if (((c->parent != null()))){
																	HX_STACK_LINE(1069)
																	if (((c->parent->child1 == node1))){
																		HX_STACK_LINE(1069)
																		c->parent->child1 = c;
																	}
																	else{
																		HX_STACK_LINE(1069)
																		c->parent->child2 = c;
																	}
																}
																else{
																	HX_STACK_LINE(1069)
																	tree->root = c;
																}
																HX_STACK_LINE(1069)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1069)
																	c->child2 = f;
																	HX_STACK_LINE(1069)
																	node1->child2 = g;
																	HX_STACK_LINE(1069)
																	g->parent = node1;
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	node1->height = ((int)1 + _Function_12_1::Block(b,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	c->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1069)
																	c->child2 = g;
																	HX_STACK_LINE(1069)
																	node1->child2 = f;
																	HX_STACK_LINE(1069)
																	f->parent = node1;
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = b->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	node1->height = ((int)1 + _Function_12_1::Block(b,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	c->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1069)
																return c;
															}
															return null();
														}
													};
													struct _Function_10_2{
														inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
															HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
															{
																HX_STACK_LINE(1069)
																::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
																HX_STACK_LINE(1069)
																::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
																HX_STACK_LINE(1069)
																b->child1 = node1;
																HX_STACK_LINE(1069)
																b->parent = node1->parent;
																HX_STACK_LINE(1069)
																node1->parent = b;
																HX_STACK_LINE(1069)
																if (((b->parent != null()))){
																	HX_STACK_LINE(1069)
																	if (((b->parent->child1 == node1))){
																		HX_STACK_LINE(1069)
																		b->parent->child1 = b;
																	}
																	else{
																		HX_STACK_LINE(1069)
																		b->parent->child2 = b;
																	}
																}
																else{
																	HX_STACK_LINE(1069)
																	tree->root = b;
																}
																HX_STACK_LINE(1069)
																if (((f->height > g->height))){
																	HX_STACK_LINE(1069)
																	b->child2 = f;
																	HX_STACK_LINE(1069)
																	node1->child1 = g;
																	HX_STACK_LINE(1069)
																	g->parent = node1;
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	node1->height = ((int)1 + _Function_12_1::Block(c,g));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	b->height = ((int)1 + _Function_12_2::Block(node1,f));
																}
																else{
																	HX_STACK_LINE(1069)
																	b->child2 = g;
																	HX_STACK_LINE(1069)
																	node1->child1 = f;
																	HX_STACK_LINE(1069)
																	f->parent = node1;
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	HX_STACK_LINE(1069)
																	{
																		HX_STACK_LINE(1069)
																		::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																		::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																		::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																		HX_STACK_LINE(1069)
																		_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																		HX_STACK_LINE(1069)
																		_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																		HX_STACK_LINE(1069)
																		_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																		HX_STACK_LINE(1069)
																		_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
																	}
																	struct _Function_12_1{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = c->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = f->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	node1->height = ((int)1 + _Function_12_1::Block(c,f));
																	struct _Function_12_2{
																		inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																			HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
																			{
																				HX_STACK_LINE(1069)
																				int x = node1->height;		HX_STACK_VAR(x,"x");
																				HX_STACK_LINE(1069)
																				int y = g->height;		HX_STACK_VAR(y,"y");
																				HX_STACK_LINE(1069)
																				return (  (((x > y))) ? int(x) : int(y) );
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1069)
																	b->height = ((int)1 + _Function_12_2::Block(node1,g));
																}
																HX_STACK_LINE(1069)
																return b;
															}
															return null();
														}
													};
													HX_STACK_LINE(1069)
													return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_10_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1069)
										node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_9_1::Block(node1,tree)) );
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
										HX_STACK_LINE(1069)
										{
											HX_STACK_LINE(1069)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
											::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1069)
											_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
											HX_STACK_LINE(1069)
											_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
											HX_STACK_LINE(1069)
											_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
											HX_STACK_LINE(1069)
											_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
										}
										struct _Function_9_2{
											inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
												HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1069);
												{
													HX_STACK_LINE(1069)
													int x = child1->height;		HX_STACK_VAR(x,"x");
													HX_STACK_LINE(1069)
													int y = child2->height;		HX_STACK_VAR(y,"y");
													HX_STACK_LINE(1069)
													return (  (((x > y))) ? int(x) : int(y) );
												}
												return null();
											}
										};
										HX_STACK_LINE(1069)
										node1->height = ((int)1 + _Function_9_2::Block(child1,child2));
										HX_STACK_LINE(1069)
										node1 = node1->parent;
									}
								}
								else{
									HX_STACK_LINE(1069)
									tree->root = sibling;
									HX_STACK_LINE(1069)
									sibling->parent = null();
									HX_STACK_LINE(1069)
									{
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode o = parent;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1069)
										{
										}
										HX_STACK_LINE(1069)
										{
											HX_STACK_LINE(1069)
											o->height = (int)-1;
											HX_STACK_LINE(1069)
											{
												HX_STACK_LINE(1069)
												::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
												HX_STACK_LINE(1069)
												{
												}
												HX_STACK_LINE(1069)
												{
													HX_STACK_LINE(1069)
													if (((o1->outer != null()))){
														HX_STACK_LINE(1069)
														o1->outer->zpp_inner = null();
														HX_STACK_LINE(1069)
														o1->outer = null();
													}
													HX_STACK_LINE(1069)
													o1->wrap_min = o1->wrap_max = null();
													HX_STACK_LINE(1069)
													o1->_invalidate = null();
													HX_STACK_LINE(1069)
													o1->_validate = null();
												}
												HX_STACK_LINE(1069)
												o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
												HX_STACK_LINE(1069)
												::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
											}
											HX_STACK_LINE(1069)
											o->child1 = o->child2 = o->parent = null();
											HX_STACK_LINE(1069)
											o->next = null();
											HX_STACK_LINE(1069)
											o->snext = null();
											HX_STACK_LINE(1069)
											o->mnext = null();
										}
										HX_STACK_LINE(1069)
										o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
										HX_STACK_LINE(1069)
										::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
									}
								}
							}
						}
						else{
							HX_STACK_LINE(1071)
							node->first_sync = false;
						}
						HX_STACK_LINE(1072)
						::zpp_nape::geom::ZPP_AABB aabb = node->aabb;		HX_STACK_VAR(aabb,"aabb");
						HX_STACK_LINE(1073)
						if ((!(this->space->continuous))){
							HX_STACK_LINE(1073)
							if ((shape->zip_aabb)){
								HX_STACK_LINE(1073)
								if (((shape->body != null()))){
									HX_STACK_LINE(1073)
									shape->zip_aabb = false;
									HX_STACK_LINE(1073)
									if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1073)
										::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1073)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1073)
											if (((_this->body != null()))){
												HX_STACK_LINE(1073)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1073)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1073)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1073)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1073)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1073)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1073)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1073)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1073)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1073)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1073)
															{
															}
															HX_STACK_LINE(1073)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1073)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1073)
																	_this1->localCOMy = _this1->lverts->next->y;
																	HX_STACK_LINE(1073)
																	{
																	}
																	HX_STACK_LINE(1073)
																	{
																	}
																}
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1073)
																	{
																	}
																	HX_STACK_LINE(1073)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1073)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1073)
																	{
																	}
																	HX_STACK_LINE(1073)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1073)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1073)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1073)
																	{
																	}
																	HX_STACK_LINE(1073)
																	{
																	}
																}
																HX_STACK_LINE(1073)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
																	HX_STACK_LINE(1073)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1073)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1073)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1073)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1073)
																	while(((cx_ite != null()))){
																		HX_STACK_LINE(1073)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1073)
																		{
																			HX_STACK_LINE(1073)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1073)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1073)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1073)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1073)
																		u = v;
																		HX_STACK_LINE(1073)
																		v = w;
																		HX_STACK_LINE(1073)
																		cx_ite = cx_ite->next;
																	}
																	HX_STACK_LINE(1073)
																	cx_ite = _this1->lverts->next;
																	HX_STACK_LINE(1073)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1073)
																	{
																		HX_STACK_LINE(1073)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1073)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1073)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1073)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1073)
																	u = v;
																	HX_STACK_LINE(1073)
																	v = w;
																	HX_STACK_LINE(1073)
																	cx_ite = cx_ite->next;
																	HX_STACK_LINE(1073)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1073)
																	{
																		HX_STACK_LINE(1073)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1073)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1073)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1073)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1073)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1073)
																{
																	HX_STACK_LINE(1073)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1073)
																	{
																	}
																	HX_STACK_LINE(1073)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1073)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1073)
												{
													HX_STACK_LINE(1073)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1073)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1073)
														_this1->zip_axis = false;
														HX_STACK_LINE(1073)
														{
															HX_STACK_LINE(1073)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1073)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1073)
															{
															}
															HX_STACK_LINE(1073)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1073)
												{
													HX_STACK_LINE(1073)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1073)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1073)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1073)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1073)
										{
										}
										HX_STACK_LINE(1073)
										{
										}
										HX_STACK_LINE(1073)
										{
											HX_STACK_LINE(1073)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1073)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1073)
										{
											HX_STACK_LINE(1073)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1073)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1073)
										::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1073)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1073)
											if (((_this->body != null()))){
												HX_STACK_LINE(1073)
												_this->zip_gverts = false;
												HX_STACK_LINE(1073)
												_this->validate_lverts();
												HX_STACK_LINE(1073)
												{
													HX_STACK_LINE(1073)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1073)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1073)
														_this1->zip_axis = false;
														HX_STACK_LINE(1073)
														{
															HX_STACK_LINE(1073)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1073)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1073)
															{
															}
															HX_STACK_LINE(1073)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1073)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1073)
												{
													HX_STACK_LINE(1073)
													::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
													HX_STACK_LINE(1073)
													while(((cx_ite != null()))){
														HX_STACK_LINE(1073)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1073)
														{
															HX_STACK_LINE(1073)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1073)
															li = li->next;
															HX_STACK_LINE(1073)
															{
																HX_STACK_LINE(1073)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1073)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1073)
														cx_ite = cx_ite->next;
													}
												}
											}
										}
										HX_STACK_LINE(1073)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1073)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1073)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1073)
										{
											HX_STACK_LINE(1073)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1073)
											_this->aabb->miny = p0->y;
											HX_STACK_LINE(1073)
											{
											}
											HX_STACK_LINE(1073)
											{
											}
										}
										HX_STACK_LINE(1073)
										{
											HX_STACK_LINE(1073)
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1073)
											_this->aabb->maxy = p0->y;
											HX_STACK_LINE(1073)
											{
											}
											HX_STACK_LINE(1073)
											{
											}
										}
										HX_STACK_LINE(1073)
										{
											HX_STACK_LINE(1073)
											::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
											HX_STACK_LINE(1073)
											while(((cx_ite != null()))){
												HX_STACK_LINE(1073)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1073)
												{
													HX_STACK_LINE(1073)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1073)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1073)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1073)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1073)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1073)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1073)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1073)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1073)
												cx_ite = cx_ite->next;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(1074)
						{
							HX_STACK_LINE(1074)
							::zpp_nape::geom::ZPP_AABB a = shape->aabb;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(1074)
							aabb->minx = (a->minx - 3.0);
							HX_STACK_LINE(1074)
							aabb->miny = (a->miny - 3.0);
							HX_STACK_LINE(1074)
							aabb->maxx = (a->maxx + 3.0);
							HX_STACK_LINE(1074)
							aabb->maxy = (a->maxy + 3.0);
						}
						HX_STACK_LINE(1075)
						::zpp_nape::space::ZPP_AABBTree tree = (  ((node->dyn = (  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) ))) ? ::zpp_nape::space::ZPP_AABBTree(this->dtree) : ::zpp_nape::space::ZPP_AABBTree(this->stree) );		HX_STACK_VAR(tree,"tree");
						HX_STACK_LINE(1076)
						if (((tree->root == null()))){
							HX_STACK_LINE(1076)
							tree->root = node;
							HX_STACK_LINE(1076)
							tree->root->parent = null();
						}
						else{
							HX_STACK_LINE(1076)
							::zpp_nape::geom::ZPP_AABB leafaabb = node->aabb;		HX_STACK_VAR(leafaabb,"leafaabb");
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBNode node1 = tree->root;		HX_STACK_VAR(node1,"node1");
							HX_STACK_LINE(1076)
							while((!(((node1->child1 == null()))))){
								HX_STACK_LINE(1076)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1076)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_1{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &node1){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1076)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								Float area = _Function_7_1::Block(node1);		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(1076)
								{
									HX_STACK_LINE(1076)
									::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1076)
									_this->minx = (  (((a->minx < leafaabb->minx))) ? Float(a->minx) : Float(leafaabb->minx) );
									HX_STACK_LINE(1076)
									_this->miny = (  (((a->miny < leafaabb->miny))) ? Float(a->miny) : Float(leafaabb->miny) );
									HX_STACK_LINE(1076)
									_this->maxx = (  (((a->maxx > leafaabb->maxx))) ? Float(a->maxx) : Float(leafaabb->maxx) );
									HX_STACK_LINE(1076)
									_this->maxy = (  (((a->maxy > leafaabb->maxy))) ? Float(a->maxy) : Float(leafaabb->maxy) );
								}
								struct _Function_7_2{
									inline static Float Block( ){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1076)
											return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								Float carea = _Function_7_2::Block();		HX_STACK_VAR(carea,"carea");
								HX_STACK_LINE(1076)
								Float cost = ((int)2 * carea);		HX_STACK_VAR(cost,"cost");
								HX_STACK_LINE(1076)
								Float icost = ((int)2 * ((carea - area)));		HX_STACK_VAR(icost,"icost");
								struct _Function_7_3{
									inline static Float Block( ::zpp_nape::geom::ZPP_AABB &leafaabb,::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child1->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1076)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1076)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1076)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1076)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														HX_STACK_LINE(1076)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1076)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child1){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																{
																	HX_STACK_LINE(1076)
																	::zpp_nape::geom::ZPP_AABB _this = child1->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1076)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1076)
														Float oarea = _Function_9_1::Block(child1);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																{
																	HX_STACK_LINE(1076)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1076)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1076)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1076)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1076)
											return (  (((child1->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child1,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								Float cost1 = _Function_7_3::Block(leafaabb,child1,icost);		HX_STACK_VAR(cost1,"cost1");
								struct _Function_7_4{
									inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,::zpp_nape::geom::ZPP_AABB &leafaabb,Float &icost){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											{
												HX_STACK_LINE(1076)
												::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
												::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(1076)
												_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
												HX_STACK_LINE(1076)
												_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
												HX_STACK_LINE(1076)
												_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
												HX_STACK_LINE(1076)
												_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
											}
											struct _Function_8_1{
												inline static Float Block( ){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														HX_STACK_LINE(1076)
														::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1076)
														return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2,Float &icost){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														struct _Function_9_1{
															inline static Float Block( ::zpp_nape::space::ZPP_AABBNode &child2){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																{
																	HX_STACK_LINE(1076)
																	::zpp_nape::geom::ZPP_AABB _this = child2->aabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1076)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1076)
														Float oarea = _Function_9_1::Block(child2);		HX_STACK_VAR(oarea,"oarea");
														struct _Function_9_2{
															inline static Float Block( ){
																HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																{
																	HX_STACK_LINE(1076)
																	::zpp_nape::geom::ZPP_AABB _this = ::zpp_nape::space::ZPP_AABBTree_obj::tmpaabb;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(1076)
																	return ((((_this->maxx - _this->minx) + ((_this->maxy - _this->miny)))) * (int)2);
																}
																return null();
															}
														};
														HX_STACK_LINE(1076)
														Float narea = _Function_9_2::Block();		HX_STACK_VAR(narea,"narea");
														HX_STACK_LINE(1076)
														return ((narea - oarea) + icost);
													}
													return null();
												}
											};
											HX_STACK_LINE(1076)
											return (  (((child2->child1 == null()))) ? Float((_Function_8_1::Block() + icost)) : Float(_Function_8_2::Block(child2,icost)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								Float cost2 = _Function_7_4::Block(child2,leafaabb,icost);		HX_STACK_VAR(cost2,"cost2");
								HX_STACK_LINE(1076)
								if (((bool((cost < cost1)) && bool((cost < cost2))))){
									HX_STACK_LINE(1076)
									break;
								}
								else{
									HX_STACK_LINE(1076)
									node1 = (  (((cost1 < cost2))) ? ::zpp_nape::space::ZPP_AABBNode(child1) : ::zpp_nape::space::ZPP_AABBNode(child2) );
								}
							}
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBNode sibling = node1;		HX_STACK_VAR(sibling,"sibling");
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBNode oparent = sibling->parent;		HX_STACK_VAR(oparent,"oparent");
							HX_STACK_LINE(1076)
							::zpp_nape::space::ZPP_AABBNode nparent;		HX_STACK_VAR(nparent,"nparent");
							HX_STACK_LINE(1076)
							{
								HX_STACK_LINE(1076)
								if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
									HX_STACK_LINE(1076)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
								}
								else{
									HX_STACK_LINE(1076)
									nparent = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
									HX_STACK_LINE(1076)
									::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = nparent->next;
									HX_STACK_LINE(1076)
									nparent->next = null();
								}
								HX_STACK_LINE(1076)
								{
									HX_STACK_LINE(1076)
									{
										HX_STACK_LINE(1076)
										if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
											HX_STACK_LINE(1076)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
										}
										else{
											HX_STACK_LINE(1076)
											nparent->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
											HX_STACK_LINE(1076)
											::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = nparent->aabb->next;
											HX_STACK_LINE(1076)
											nparent->aabb->next = null();
										}
										HX_STACK_LINE(1076)
										Dynamic();
									}
									HX_STACK_LINE(1076)
									nparent->moved = false;
									HX_STACK_LINE(1076)
									nparent->synced = false;
									HX_STACK_LINE(1076)
									nparent->first_sync = false;
								}
							}
							HX_STACK_LINE(1076)
							nparent->parent = oparent;
							HX_STACK_LINE(1076)
							{
								HX_STACK_LINE(1076)
								::zpp_nape::geom::ZPP_AABB _this = nparent->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB b = sibling->aabb;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1076)
								_this->minx = (  (((leafaabb->minx < b->minx))) ? Float(leafaabb->minx) : Float(b->minx) );
								HX_STACK_LINE(1076)
								_this->miny = (  (((leafaabb->miny < b->miny))) ? Float(leafaabb->miny) : Float(b->miny) );
								HX_STACK_LINE(1076)
								_this->maxx = (  (((leafaabb->maxx > b->maxx))) ? Float(leafaabb->maxx) : Float(b->maxx) );
								HX_STACK_LINE(1076)
								_this->maxy = (  (((leafaabb->maxy > b->maxy))) ? Float(leafaabb->maxy) : Float(b->maxy) );
							}
							HX_STACK_LINE(1076)
							nparent->height = (sibling->height + (int)1);
							HX_STACK_LINE(1076)
							if (((oparent != null()))){
								HX_STACK_LINE(1076)
								if (((oparent->child1 == sibling))){
									HX_STACK_LINE(1076)
									oparent->child1 = nparent;
								}
								else{
									HX_STACK_LINE(1076)
									oparent->child2 = nparent;
								}
								HX_STACK_LINE(1076)
								nparent->child1 = sibling;
								HX_STACK_LINE(1076)
								nparent->child2 = node;
								HX_STACK_LINE(1076)
								sibling->parent = nparent;
								HX_STACK_LINE(1076)
								node->parent = nparent;
							}
							else{
								HX_STACK_LINE(1076)
								nparent->child1 = sibling;
								HX_STACK_LINE(1076)
								nparent->child2 = node;
								HX_STACK_LINE(1076)
								sibling->parent = nparent;
								HX_STACK_LINE(1076)
								node->parent = nparent;
								HX_STACK_LINE(1076)
								tree->root = nparent;
							}
							HX_STACK_LINE(1076)
							node1 = node->parent;
							HX_STACK_LINE(1076)
							while(((node1 != null()))){
								struct _Function_7_1{
									inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											::zpp_nape::space::ZPP_AABBNode b = node1->child1;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(1076)
											::zpp_nape::space::ZPP_AABBNode c = node1->child2;		HX_STACK_VAR(c,"c");
											HX_STACK_LINE(1076)
											int balance = (c->height - b->height);		HX_STACK_VAR(balance,"balance");
											struct _Function_8_1{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														HX_STACK_LINE(1076)
														::zpp_nape::space::ZPP_AABBNode f = c->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1076)
														::zpp_nape::space::ZPP_AABBNode g = c->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1076)
														c->child1 = node1;
														HX_STACK_LINE(1076)
														c->parent = node1->parent;
														HX_STACK_LINE(1076)
														node1->parent = c;
														HX_STACK_LINE(1076)
														if (((c->parent != null()))){
															HX_STACK_LINE(1076)
															if (((c->parent->child1 == node1))){
																HX_STACK_LINE(1076)
																c->parent->child1 = c;
															}
															else{
																HX_STACK_LINE(1076)
																c->parent->child2 = c;
															}
														}
														else{
															HX_STACK_LINE(1076)
															tree->root = c;
														}
														HX_STACK_LINE(1076)
														if (((f->height > g->height))){
															HX_STACK_LINE(1076)
															c->child2 = f;
															HX_STACK_LINE(1076)
															node1->child2 = g;
															HX_STACK_LINE(1076)
															g->parent = node1;
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															node1->height = ((int)1 + _Function_10_1::Block(b,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															c->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1076)
															c->child2 = g;
															HX_STACK_LINE(1076)
															node1->child2 = f;
															HX_STACK_LINE(1076)
															f->parent = node1;
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = b->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = c->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = b->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															node1->height = ((int)1 + _Function_10_1::Block(b,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															c->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1076)
														return c;
													}
													return null();
												}
											};
											struct _Function_8_2{
												inline static ::zpp_nape::space::ZPP_AABBNode Block( ::zpp_nape::space::ZPP_AABBNode &b,::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBTree &tree,::zpp_nape::space::ZPP_AABBNode &c){
													HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
													{
														HX_STACK_LINE(1076)
														::zpp_nape::space::ZPP_AABBNode f = b->child1;		HX_STACK_VAR(f,"f");
														HX_STACK_LINE(1076)
														::zpp_nape::space::ZPP_AABBNode g = b->child2;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1076)
														b->child1 = node1;
														HX_STACK_LINE(1076)
														b->parent = node1->parent;
														HX_STACK_LINE(1076)
														node1->parent = b;
														HX_STACK_LINE(1076)
														if (((b->parent != null()))){
															HX_STACK_LINE(1076)
															if (((b->parent->child1 == node1))){
																HX_STACK_LINE(1076)
																b->parent->child1 = b;
															}
															else{
																HX_STACK_LINE(1076)
																b->parent->child2 = b;
															}
														}
														else{
															HX_STACK_LINE(1076)
															tree->root = b;
														}
														HX_STACK_LINE(1076)
														if (((f->height > g->height))){
															HX_STACK_LINE(1076)
															b->child2 = f;
															HX_STACK_LINE(1076)
															node1->child1 = g;
															HX_STACK_LINE(1076)
															g->parent = node1;
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															node1->height = ((int)1 + _Function_10_1::Block(c,g));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															b->height = ((int)1 + _Function_10_2::Block(node1,f));
														}
														else{
															HX_STACK_LINE(1076)
															b->child2 = g;
															HX_STACK_LINE(1076)
															node1->child1 = f;
															HX_STACK_LINE(1076)
															f->parent = node1;
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = c->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = f->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															HX_STACK_LINE(1076)
															{
																HX_STACK_LINE(1076)
																::zpp_nape::geom::ZPP_AABB _this = b->aabb;		HX_STACK_VAR(_this,"_this");
																::zpp_nape::geom::ZPP_AABB a = node1->aabb;		HX_STACK_VAR(a,"a");
																::zpp_nape::geom::ZPP_AABB b1 = g->aabb;		HX_STACK_VAR(b1,"b1");
																HX_STACK_LINE(1076)
																_this->minx = (  (((a->minx < b1->minx))) ? Float(a->minx) : Float(b1->minx) );
																HX_STACK_LINE(1076)
																_this->miny = (  (((a->miny < b1->miny))) ? Float(a->miny) : Float(b1->miny) );
																HX_STACK_LINE(1076)
																_this->maxx = (  (((a->maxx > b1->maxx))) ? Float(a->maxx) : Float(b1->maxx) );
																HX_STACK_LINE(1076)
																_this->maxy = (  (((a->maxy > b1->maxy))) ? Float(a->maxy) : Float(b1->maxy) );
															}
															struct _Function_10_1{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &c,::zpp_nape::space::ZPP_AABBNode &f){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = c->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = f->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															node1->height = ((int)1 + _Function_10_1::Block(c,f));
															struct _Function_10_2{
																inline static int Block( ::zpp_nape::space::ZPP_AABBNode &node1,::zpp_nape::space::ZPP_AABBNode &g){
																	HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
																	{
																		HX_STACK_LINE(1076)
																		int x = node1->height;		HX_STACK_VAR(x,"x");
																		HX_STACK_LINE(1076)
																		int y = g->height;		HX_STACK_VAR(y,"y");
																		HX_STACK_LINE(1076)
																		return (  (((x > y))) ? int(x) : int(y) );
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1076)
															b->height = ((int)1 + _Function_10_2::Block(node1,g));
														}
														HX_STACK_LINE(1076)
														return b;
													}
													return null();
												}
											};
											HX_STACK_LINE(1076)
											return (  (((balance > (int)1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_1::Block(b,c,node1,tree)) : ::zpp_nape::space::ZPP_AABBNode((  (((balance < (int)-1))) ? ::zpp_nape::space::ZPP_AABBNode(_Function_8_2::Block(b,node1,tree,c)) : ::zpp_nape::space::ZPP_AABBNode(node1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								node1 = (  (((bool((node1->child1 == null())) || bool((node1->height < (int)2))))) ? ::zpp_nape::space::ZPP_AABBNode(node1) : ::zpp_nape::space::ZPP_AABBNode(_Function_7_1::Block(node1,tree)) );
								HX_STACK_LINE(1076)
								::zpp_nape::space::ZPP_AABBNode child1 = node1->child1;		HX_STACK_VAR(child1,"child1");
								HX_STACK_LINE(1076)
								::zpp_nape::space::ZPP_AABBNode child2 = node1->child2;		HX_STACK_VAR(child2,"child2");
								struct _Function_7_2{
									inline static int Block( ::zpp_nape::space::ZPP_AABBNode &child1,::zpp_nape::space::ZPP_AABBNode &child2){
										HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",1076);
										{
											HX_STACK_LINE(1076)
											int x = child1->height;		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(1076)
											int y = child2->height;		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(1076)
											return (  (((x > y))) ? int(x) : int(y) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1076)
								node1->height = ((int)1 + _Function_7_2::Block(child1,child2));
								HX_STACK_LINE(1076)
								{
									HX_STACK_LINE(1076)
									::zpp_nape::geom::ZPP_AABB _this = node1->aabb;		HX_STACK_VAR(_this,"_this");
									::zpp_nape::geom::ZPP_AABB a = child1->aabb;		HX_STACK_VAR(a,"a");
									::zpp_nape::geom::ZPP_AABB b = child2->aabb;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1076)
									_this->minx = (  (((a->minx < b->minx))) ? Float(a->minx) : Float(b->minx) );
									HX_STACK_LINE(1076)
									_this->miny = (  (((a->miny < b->miny))) ? Float(a->miny) : Float(b->miny) );
									HX_STACK_LINE(1076)
									_this->maxx = (  (((a->maxx > b->maxx))) ? Float(a->maxx) : Float(b->maxx) );
									HX_STACK_LINE(1076)
									_this->maxy = (  (((a->maxy > b->maxy))) ? Float(a->maxy) : Float(b->maxy) );
								}
								HX_STACK_LINE(1076)
								node1 = node1->parent;
							}
						}
						HX_STACK_LINE(1077)
						node->synced = false;
					}
					HX_STACK_LINE(1079)
					if ((!(node->moved))){
						HX_STACK_LINE(1080)
						node->moved = true;
						HX_STACK_LINE(1081)
						{
							HX_STACK_LINE(1082)
							{
							}
							HX_STACK_LINE(1090)
							node->mnext = this->moves;
							HX_STACK_LINE(1091)
							this->moves = node;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_DynAABBPhase_obj,sync_broadphase,(void))

Void ZPP_DynAABBPhase_obj::__sync( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__sync","zpp_nape/space/DynAABBPhase.hx",936);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(937)
		{
		}
		HX_STACK_LINE(945)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(946)
		{
		}
		HX_STACK_LINE(954)
		if ((!(node->synced))){
			HX_STACK_LINE(955)
			if ((!(this->space->continuous))){
				HX_STACK_LINE(955)
				if ((shape->zip_aabb)){
					HX_STACK_LINE(955)
					if (((shape->body != null()))){
						HX_STACK_LINE(955)
						shape->zip_aabb = false;
						HX_STACK_LINE(955)
						if (((shape->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
							HX_STACK_LINE(955)
							::zpp_nape::shape::ZPP_Circle _this = shape->circle;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(955)
							if ((_this->zip_worldCOM)){
								HX_STACK_LINE(955)
								if (((_this->body != null()))){
									HX_STACK_LINE(955)
									_this->zip_worldCOM = false;
									HX_STACK_LINE(955)
									if ((_this->zip_localCOM)){
										HX_STACK_LINE(955)
										_this->zip_localCOM = false;
										HX_STACK_LINE(955)
										if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
											HX_STACK_LINE(955)
											::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(955)
											if (((_this1->lverts->next == null()))){
												HX_STACK_LINE(955)
												hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
											}
											HX_STACK_LINE(955)
											if (((_this1->lverts->next->next == null()))){
												HX_STACK_LINE(955)
												_this1->localCOMx = _this1->lverts->next->x;
												HX_STACK_LINE(955)
												_this1->localCOMy = _this1->lverts->next->y;
												HX_STACK_LINE(955)
												{
												}
												HX_STACK_LINE(955)
												Dynamic();
											}
											else{
												HX_STACK_LINE(955)
												if (((_this1->lverts->next->next->next == null()))){
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(955)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(955)
														{
														}
														HX_STACK_LINE(955)
														{
														}
													}
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														Float t = 1.0;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(955)
														{
														}
														HX_STACK_LINE(955)
														hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
														HX_STACK_LINE(955)
														hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
													}
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														Float t = 0.5;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(955)
														{
														}
														HX_STACK_LINE(955)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(955)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
												else{
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														_this1->localCOMx = (int)0;
														HX_STACK_LINE(955)
														_this1->localCOMy = (int)0;
														HX_STACK_LINE(955)
														{
														}
														HX_STACK_LINE(955)
														{
														}
													}
													HX_STACK_LINE(955)
													Float area = 0.0;		HX_STACK_VAR(area,"area");
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														::zpp_nape::geom::ZPP_Vec2 cx_ite = _this1->lverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
														HX_STACK_LINE(955)
														::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
														HX_STACK_LINE(955)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(955)
														::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
														HX_STACK_LINE(955)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(955)
														while(((cx_ite != null()))){
															HX_STACK_LINE(955)
															::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
															HX_STACK_LINE(955)
															{
																HX_STACK_LINE(955)
																hx::AddEq(area,(v->x * ((w->y - u->y))));
																HX_STACK_LINE(955)
																Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																HX_STACK_LINE(955)
																hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																HX_STACK_LINE(955)
																hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
															}
															HX_STACK_LINE(955)
															u = v;
															HX_STACK_LINE(955)
															v = w;
															HX_STACK_LINE(955)
															cx_ite = cx_ite->next;
														}
														HX_STACK_LINE(955)
														cx_ite = _this1->lverts->next;
														HX_STACK_LINE(955)
														::zpp_nape::geom::ZPP_Vec2 w = cx_ite;		HX_STACK_VAR(w,"w");
														HX_STACK_LINE(955)
														{
															HX_STACK_LINE(955)
															hx::AddEq(area,(v->x * ((w->y - u->y))));
															HX_STACK_LINE(955)
															Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(955)
															hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
															HX_STACK_LINE(955)
															hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
														}
														HX_STACK_LINE(955)
														u = v;
														HX_STACK_LINE(955)
														v = w;
														HX_STACK_LINE(955)
														cx_ite = cx_ite->next;
														HX_STACK_LINE(955)
														::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite;		HX_STACK_VAR(w1,"w1");
														HX_STACK_LINE(955)
														{
															HX_STACK_LINE(955)
															hx::AddEq(area,(v->x * ((w1->y - u->y))));
															HX_STACK_LINE(955)
															Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
															HX_STACK_LINE(955)
															hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
															HX_STACK_LINE(955)
															hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
														}
													}
													HX_STACK_LINE(955)
													area = (Float((int)1) / Float((((int)3 * area))));
													HX_STACK_LINE(955)
													{
														HX_STACK_LINE(955)
														Float t = area;		HX_STACK_VAR(t,"t");
														HX_STACK_LINE(955)
														{
														}
														HX_STACK_LINE(955)
														hx::MultEq(_this1->localCOMx,t);
														HX_STACK_LINE(955)
														hx::MultEq(_this1->localCOMy,t);
													}
												}
											}
										}
									}
									HX_STACK_LINE(955)
									{
										HX_STACK_LINE(955)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(955)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(955)
											_this1->zip_axis = false;
											HX_STACK_LINE(955)
											{
												HX_STACK_LINE(955)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(955)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(955)
												{
												}
												HX_STACK_LINE(955)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(955)
									{
										HX_STACK_LINE(955)
										_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
										HX_STACK_LINE(955)
										_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
									}
								}
							}
							HX_STACK_LINE(955)
							Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
							HX_STACK_LINE(955)
							Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
							HX_STACK_LINE(955)
							{
							}
							HX_STACK_LINE(955)
							{
							}
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								_this->aabb->minx = (_this->worldCOMx - rx);
								HX_STACK_LINE(955)
								_this->aabb->miny = (_this->worldCOMy - ry);
							}
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								_this->aabb->maxx = (_this->worldCOMx + rx);
								HX_STACK_LINE(955)
								_this->aabb->maxy = (_this->worldCOMy + ry);
							}
						}
						else{
							HX_STACK_LINE(955)
							::zpp_nape::shape::ZPP_Polygon _this = shape->polygon;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(955)
							if ((_this->zip_gverts)){
								HX_STACK_LINE(955)
								if (((_this->body != null()))){
									HX_STACK_LINE(955)
									_this->zip_gverts = false;
									HX_STACK_LINE(955)
									_this->validate_lverts();
									HX_STACK_LINE(955)
									{
										HX_STACK_LINE(955)
										::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(955)
										if ((_this1->zip_axis)){
											HX_STACK_LINE(955)
											_this1->zip_axis = false;
											HX_STACK_LINE(955)
											{
												HX_STACK_LINE(955)
												_this1->axisx = ::Math_obj::sin(_this1->rot);
												HX_STACK_LINE(955)
												_this1->axisy = ::Math_obj::cos(_this1->rot);
												HX_STACK_LINE(955)
												{
												}
												HX_STACK_LINE(955)
												Dynamic();
											}
										}
									}
									HX_STACK_LINE(955)
									::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
									HX_STACK_LINE(955)
									{
										HX_STACK_LINE(955)
										::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
										HX_STACK_LINE(955)
										while(((cx_ite != null()))){
											HX_STACK_LINE(955)
											::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(955)
											{
												HX_STACK_LINE(955)
												::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(955)
												li = li->next;
												HX_STACK_LINE(955)
												{
													HX_STACK_LINE(955)
													g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
													HX_STACK_LINE(955)
													g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
												}
											}
											HX_STACK_LINE(955)
											cx_ite = cx_ite->next;
										}
									}
								}
							}
							HX_STACK_LINE(955)
							if (((_this->lverts->next == null()))){
								HX_STACK_LINE(955)
								hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
							}
							HX_STACK_LINE(955)
							::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								_this->aabb->minx = p0->x;
								HX_STACK_LINE(955)
								_this->aabb->miny = p0->y;
								HX_STACK_LINE(955)
								{
								}
								HX_STACK_LINE(955)
								{
								}
							}
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								_this->aabb->maxx = p0->x;
								HX_STACK_LINE(955)
								_this->aabb->maxy = p0->y;
								HX_STACK_LINE(955)
								{
								}
								HX_STACK_LINE(955)
								{
								}
							}
							HX_STACK_LINE(955)
							{
								HX_STACK_LINE(955)
								::zpp_nape::geom::ZPP_Vec2 cx_ite = _this->gverts->next->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(955)
								while(((cx_ite != null()))){
									HX_STACK_LINE(955)
									::zpp_nape::geom::ZPP_Vec2 p = cx_ite;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(955)
									{
										HX_STACK_LINE(955)
										if (((p->x < _this->aabb->minx))){
											HX_STACK_LINE(955)
											_this->aabb->minx = p->x;
										}
										HX_STACK_LINE(955)
										if (((p->x > _this->aabb->maxx))){
											HX_STACK_LINE(955)
											_this->aabb->maxx = p->x;
										}
										HX_STACK_LINE(955)
										if (((p->y < _this->aabb->miny))){
											HX_STACK_LINE(955)
											_this->aabb->miny = p->y;
										}
										HX_STACK_LINE(955)
										if (((p->y > _this->aabb->maxy))){
											HX_STACK_LINE(955)
											_this->aabb->maxy = p->y;
										}
									}
									HX_STACK_LINE(955)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
				}
			}
			struct _Function_2_1{
				inline static bool Block( ::zpp_nape::space::ZPP_AABBNode &node,::zpp_nape::shape::ZPP_Shape &shape){
					HX_STACK_PUSH("*::closure","zpp_nape/space/DynAABBPhase.hx",956);
					{
						HX_STACK_LINE(956)
						::zpp_nape::geom::ZPP_AABB _this = node->aabb;		HX_STACK_VAR(_this,"_this");
						::zpp_nape::geom::ZPP_AABB x = shape->aabb;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(956)
						return (bool((bool((bool((x->minx >= _this->minx)) && bool((x->miny >= _this->miny)))) && bool((x->maxx <= _this->maxx)))) && bool((x->maxy <= _this->maxy)));
					}
					return null();
				}
			};
			HX_STACK_LINE(956)
			bool sync = (bool((node->dyn != ((  (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? bool(false) : bool(!(shape->body->component->sleeping)) )))) || bool(!(_Function_2_1::Block(node,shape))));		HX_STACK_VAR(sync,"sync");
			HX_STACK_LINE(957)
			if ((sync)){
				HX_STACK_LINE(960)
				node->synced = true;
				HX_STACK_LINE(961)
				{
					HX_STACK_LINE(962)
					{
					}
					HX_STACK_LINE(970)
					node->snext = this->syncs;
					HX_STACK_LINE(971)
					this->syncs = node;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__sync,(void))

Void ZPP_DynAABBPhase_obj::__remove( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__remove","zpp_nape/space/DynAABBPhase.hx",769);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(770)
		{
		}
		HX_STACK_LINE(778)
		{
		}
		HX_STACK_LINE(786)
		::zpp_nape::space::ZPP_AABBNode node = shape->node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(787)
		if ((!(node->first_sync))){
			HX_STACK_LINE(787)
			if ((node->dyn)){
				HX_STACK_LINE(788)
				this->dtree->removeLeaf(node);
			}
			else{
				HX_STACK_LINE(789)
				this->stree->removeLeaf(node);
			}
		}
		HX_STACK_LINE(791)
		shape->node = null();
		HX_STACK_LINE(792)
		if ((node->synced)){
			HX_STACK_LINE(793)
			{
				HX_STACK_LINE(794)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(795)
				::zpp_nape::space::ZPP_AABBNode cur = this->syncs;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(796)
				while(((cur != null()))){
					HX_STACK_LINE(797)
					if (((cur == node))){
						HX_STACK_LINE(797)
						break;
					}
					HX_STACK_LINE(798)
					pre = cur;
					HX_STACK_LINE(799)
					cur = cur->snext;
				}
				HX_STACK_LINE(801)
				{
					HX_STACK_LINE(802)
					{
					}
					HX_STACK_LINE(810)
					if (((pre == null()))){
						HX_STACK_LINE(810)
						this->syncs = cur->snext;
					}
					else{
						HX_STACK_LINE(811)
						pre->snext = cur->snext;
					}
					HX_STACK_LINE(812)
					cur->snext = null();
				}
			}
			HX_STACK_LINE(815)
			node->synced = false;
		}
		HX_STACK_LINE(817)
		if ((node->moved)){
			HX_STACK_LINE(818)
			{
				HX_STACK_LINE(819)
				::zpp_nape::space::ZPP_AABBNode pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(820)
				::zpp_nape::space::ZPP_AABBNode cur = this->moves;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(821)
				while(((cur != null()))){
					HX_STACK_LINE(822)
					if (((cur == node))){
						HX_STACK_LINE(822)
						break;
					}
					HX_STACK_LINE(823)
					pre = cur;
					HX_STACK_LINE(824)
					cur = cur->mnext;
				}
				HX_STACK_LINE(826)
				{
					HX_STACK_LINE(827)
					{
					}
					HX_STACK_LINE(835)
					if (((pre == null()))){
						HX_STACK_LINE(835)
						this->moves = cur->mnext;
					}
					else{
						HX_STACK_LINE(836)
						pre->mnext = cur->mnext;
					}
					HX_STACK_LINE(837)
					cur->mnext = null();
				}
			}
			HX_STACK_LINE(840)
			node->moved = false;
		}
		HX_STACK_LINE(842)
		Dynamic pre = null();		HX_STACK_VAR(pre,"pre");
		HX_STACK_LINE(843)
		::zpp_nape::space::ZPP_AABBPair cur = this->pairs;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(844)
		while(((cur != null()))){
			HX_STACK_LINE(845)
			{
			}
			HX_STACK_LINE(853)
			::zpp_nape::space::ZPP_AABBPair nxt = cur->next;		HX_STACK_VAR(nxt,"nxt");
			HX_STACK_LINE(854)
			if (((bool((cur->n1 == node)) || bool((cur->n2 == node))))){
				HX_STACK_LINE(855)
				if (((pre == null()))){
					HX_STACK_LINE(855)
					this->pairs = nxt;
				}
				else{
					HX_STACK_LINE(856)
					pre->__FieldRef(HX_CSTRING("next")) = nxt;
				}
				HX_STACK_LINE(857)
				if (((cur->arb != null()))){
					HX_STACK_LINE(857)
					cur->arb->pair = null();
				}
				HX_STACK_LINE(858)
				cur->arb = null();
				HX_STACK_LINE(859)
				cur->n1->shape->pairs->remove(cur);
				HX_STACK_LINE(860)
				cur->n2->shape->pairs->remove(cur);
				HX_STACK_LINE(861)
				{
					HX_STACK_LINE(862)
					::zpp_nape::space::ZPP_AABBPair o = cur;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(863)
					{
					}
					HX_STACK_LINE(871)
					{
						HX_STACK_LINE(871)
						{
						}
						HX_STACK_LINE(871)
						o->n1 = o->n2 = null();
						HX_STACK_LINE(871)
						o->sleeping = false;
					}
					HX_STACK_LINE(872)
					o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
					HX_STACK_LINE(873)
					::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
				}
				HX_STACK_LINE(878)
				cur = nxt;
				HX_STACK_LINE(879)
				continue;
			}
			HX_STACK_LINE(881)
			pre = cur;
			HX_STACK_LINE(882)
			cur = nxt;
		}
		HX_STACK_LINE(884)
		while((!(((shape->pairs->head == null()))))){
			HX_STACK_LINE(885)
			::zpp_nape::space::ZPP_AABBPair cur1 = shape->pairs->pop_unsafe();		HX_STACK_VAR(cur1,"cur1");
			HX_STACK_LINE(886)
			{
			}
			HX_STACK_LINE(894)
			if (((cur1->n1 == node))){
				HX_STACK_LINE(894)
				cur1->n2->shape->pairs->remove(cur1);
			}
			else{
				HX_STACK_LINE(895)
				cur1->n1->shape->pairs->remove(cur1);
			}
			HX_STACK_LINE(896)
			if (((cur1->arb != null()))){
				HX_STACK_LINE(896)
				cur1->arb->pair = null();
			}
			HX_STACK_LINE(897)
			cur1->arb = null();
			HX_STACK_LINE(898)
			{
				HX_STACK_LINE(899)
				::zpp_nape::space::ZPP_AABBPair o = cur1;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(900)
				{
				}
				HX_STACK_LINE(908)
				{
					HX_STACK_LINE(908)
					{
					}
					HX_STACK_LINE(908)
					o->n1 = o->n2 = null();
					HX_STACK_LINE(908)
					o->sleeping = false;
				}
				HX_STACK_LINE(909)
				o->next = ::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool;
				HX_STACK_LINE(910)
				::zpp_nape::space::ZPP_AABBPair_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(916)
		{
			HX_STACK_LINE(917)
			::zpp_nape::space::ZPP_AABBNode o = node;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(918)
			{
			}
			HX_STACK_LINE(926)
			{
				HX_STACK_LINE(926)
				o->height = (int)-1;
				HX_STACK_LINE(926)
				{
					HX_STACK_LINE(926)
					::zpp_nape::geom::ZPP_AABB o1 = o->aabb;		HX_STACK_VAR(o1,"o1");
					HX_STACK_LINE(926)
					{
					}
					HX_STACK_LINE(926)
					{
						HX_STACK_LINE(926)
						if (((o1->outer != null()))){
							HX_STACK_LINE(926)
							o1->outer->zpp_inner = null();
							HX_STACK_LINE(926)
							o1->outer = null();
						}
						HX_STACK_LINE(926)
						o1->wrap_min = o1->wrap_max = null();
						HX_STACK_LINE(926)
						o1->_invalidate = null();
						HX_STACK_LINE(926)
						o1->_validate = null();
					}
					HX_STACK_LINE(926)
					o1->next = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
					HX_STACK_LINE(926)
					::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = o1;
				}
				HX_STACK_LINE(926)
				o->child1 = o->child2 = o->parent = null();
				HX_STACK_LINE(926)
				o->next = null();
				HX_STACK_LINE(926)
				o->snext = null();
				HX_STACK_LINE(926)
				o->mnext = null();
			}
			HX_STACK_LINE(927)
			o->next = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
			HX_STACK_LINE(928)
			::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__remove,(void))

Void ZPP_DynAABBPhase_obj::__insert( ::zpp_nape::shape::ZPP_Shape shape){
{
		HX_STACK_PUSH("ZPP_DynAABBPhase::__insert","zpp_nape/space/DynAABBPhase.hx",709);
		HX_STACK_THIS(this);
		HX_STACK_ARG(shape,"shape");
		HX_STACK_LINE(710)
		{
		}
		HX_STACK_LINE(718)
		{
		}
		HX_STACK_LINE(726)
		::zpp_nape::space::ZPP_AABBNode node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(727)
		{
			HX_STACK_LINE(728)
			if (((::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool == null()))){
				HX_STACK_LINE(728)
				node = ::zpp_nape::space::ZPP_AABBNode_obj::__new();
			}
			else{
				HX_STACK_LINE(735)
				node = ::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool;
				HX_STACK_LINE(736)
				::zpp_nape::space::ZPP_AABBNode_obj::zpp_pool = node->next;
				HX_STACK_LINE(737)
				node->next = null();
			}
			HX_STACK_LINE(742)
			{
				HX_STACK_LINE(742)
				{
					HX_STACK_LINE(742)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(742)
						node->aabb = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(742)
						node->aabb = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(742)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = node->aabb->next;
						HX_STACK_LINE(742)
						node->aabb->next = null();
					}
					HX_STACK_LINE(742)
					Dynamic();
				}
				HX_STACK_LINE(742)
				node->moved = false;
				HX_STACK_LINE(742)
				node->synced = false;
				HX_STACK_LINE(742)
				node->first_sync = false;
			}
		}
		HX_STACK_LINE(744)
		node->shape = shape;
		HX_STACK_LINE(745)
		shape->node = node;
		HX_STACK_LINE(746)
		{
		}
		HX_STACK_LINE(754)
		node->synced = true;
		HX_STACK_LINE(755)
		node->first_sync = true;
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(757)
			{
			}
			HX_STACK_LINE(765)
			node->snext = this->syncs;
			HX_STACK_LINE(766)
			this->syncs = node;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,__insert,(void))

bool ZPP_DynAABBPhase_obj::dyn( ::zpp_nape::shape::ZPP_Shape shape){
	HX_STACK_PUSH("ZPP_DynAABBPhase::dyn","zpp_nape/space/DynAABBPhase.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(shape,"shape");
	HX_STACK_LINE(705)
	if (((shape->body->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
		HX_STACK_LINE(706)
		return false;
	}
	else{
		HX_STACK_LINE(707)
		return !(shape->body->component->sleeping);
	}
	HX_STACK_LINE(705)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_DynAABBPhase_obj,dyn,return )

Float ZPP_DynAABBPhase_obj::FATTEN;

Float ZPP_DynAABBPhase_obj::VEL_STEPS;


ZPP_DynAABBPhase_obj::ZPP_DynAABBPhase_obj()
{
}

void ZPP_DynAABBPhase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_DynAABBPhase);
	HX_MARK_MEMBER_NAME(openlist,"openlist");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(treeStack2,"treeStack2");
	HX_MARK_MEMBER_NAME(treeStack,"treeStack");
	HX_MARK_MEMBER_NAME(moves,"moves");
	HX_MARK_MEMBER_NAME(syncs,"syncs");
	HX_MARK_MEMBER_NAME(pairs,"pairs");
	HX_MARK_MEMBER_NAME(dtree,"dtree");
	HX_MARK_MEMBER_NAME(stree,"stree");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_DynAABBPhase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(openlist,"openlist");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(treeStack2,"treeStack2");
	HX_VISIT_MEMBER_NAME(treeStack,"treeStack");
	HX_VISIT_MEMBER_NAME(moves,"moves");
	HX_VISIT_MEMBER_NAME(syncs,"syncs");
	HX_VISIT_MEMBER_NAME(pairs,"pairs");
	HX_VISIT_MEMBER_NAME(dtree,"dtree");
	HX_VISIT_MEMBER_NAME(stree,"stree");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_DynAABBPhase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dyn") ) { return dyn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"moves") ) { return moves; }
		if (HX_FIELD_EQ(inName,"syncs") ) { return syncs; }
		if (HX_FIELD_EQ(inName,"pairs") ) { return pairs; }
		if (HX_FIELD_EQ(inName,"dtree") ) { return dtree; }
		if (HX_FIELD_EQ(inName,"stree") ) { return stree; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FATTEN") ) { return FATTEN; }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rayCast") ) { return rayCast_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openlist") ) { return openlist; }
		if (HX_FIELD_EQ(inName,"__remove") ) { return __remove_dyn(); }
		if (HX_FIELD_EQ(inName,"__insert") ) { return __insert_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"VEL_STEPS") ) { return VEL_STEPS; }
		if (HX_FIELD_EQ(inName,"treeStack") ) { return treeStack; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"treeStack2") ) { return treeStack2; }
		if (HX_FIELD_EQ(inName,"broadphase") ) { return broadphase_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rayMultiCast") ) { return rayMultiCast_dyn(); }
		if (HX_FIELD_EQ(inName,"bodiesInAABB") ) { return bodiesInAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInAABB") ) { return shapesInAABB_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bodiesInShape") ) { return bodiesInShape_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInShape") ) { return shapesInShape_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bodiesInCircle") ) { return bodiesInCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesInCircle") ) { return shapesInCircle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sync_broadphase") ) { return sync_broadphase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bodiesUnderPoint") ) { return bodiesUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"shapesUnderPoint") ) { return shapesUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_DynAABBPhase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"moves") ) { moves=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syncs") ) { syncs=inValue.Cast< ::zpp_nape::space::ZPP_AABBNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pairs") ) { pairs=inValue.Cast< ::zpp_nape::space::ZPP_AABBPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dtree") ) { dtree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stree") ) { stree=inValue.Cast< ::zpp_nape::space::ZPP_AABBTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"FATTEN") ) { FATTEN=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< ::nape::phys::BodyList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openlist") ) { openlist=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"VEL_STEPS") ) { VEL_STEPS=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"treeStack") ) { treeStack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"treeStack2") ) { treeStack2=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_AABBNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_DynAABBPhase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("openlist"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("treeStack2"));
	outFields->push(HX_CSTRING("treeStack"));
	outFields->push(HX_CSTRING("moves"));
	outFields->push(HX_CSTRING("syncs"));
	outFields->push(HX_CSTRING("pairs"));
	outFields->push(HX_CSTRING("dtree"));
	outFields->push(HX_CSTRING("stree"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FATTEN"),
	HX_CSTRING("VEL_STEPS"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("rayMultiCast"),
	HX_CSTRING("rayCast"),
	HX_CSTRING("openlist"),
	HX_CSTRING("bodiesInShape"),
	HX_CSTRING("shapesInShape"),
	HX_CSTRING("bodiesInCircle"),
	HX_CSTRING("shapesInCircle"),
	HX_CSTRING("bodiesInAABB"),
	HX_CSTRING("failed"),
	HX_CSTRING("shapesInAABB"),
	HX_CSTRING("treeStack2"),
	HX_CSTRING("bodiesUnderPoint"),
	HX_CSTRING("shapesUnderPoint"),
	HX_CSTRING("treeStack"),
	HX_CSTRING("clear"),
	HX_CSTRING("broadphase"),
	HX_CSTRING("sync_broadphase"),
	HX_CSTRING("__sync"),
	HX_CSTRING("__remove"),
	HX_CSTRING("__insert"),
	HX_CSTRING("dyn"),
	HX_CSTRING("moves"),
	HX_CSTRING("syncs"),
	HX_CSTRING("pairs"),
	HX_CSTRING("dtree"),
	HX_CSTRING("stree"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_MARK_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::FATTEN,"FATTEN");
	HX_VISIT_MEMBER_NAME(ZPP_DynAABBPhase_obj::VEL_STEPS,"VEL_STEPS");
};

Class ZPP_DynAABBPhase_obj::__mClass;

void ZPP_DynAABBPhase_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.space.ZPP_DynAABBPhase"), hx::TCanCast< ZPP_DynAABBPhase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_DynAABBPhase_obj::__boot()
{
	FATTEN= 3.0;
	VEL_STEPS= 2.0;
}

} // end namespace zpp_nape
} // end namespace space
