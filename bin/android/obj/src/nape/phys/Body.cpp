#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintIterator
#include <nape/constraint/ConstraintIterator.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_Arbiter
#include <nape/dynamics/Arbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterIterator
#include <nape/dynamics/ArbiterIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
#endif
#ifndef INCLUDED_nape_dynamics_CollisionArbiter
#include <nape/dynamics/CollisionArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_FluidArbiter
#include <nape/dynamics/FluidArbiter.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec3
#include <nape/geom/Vec3.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_FluidProperties
#include <nape/phys/FluidProperties.h>
#endif
#ifndef INCLUDED_nape_phys_GravMassMode
#include <nape/phys/GravMassMode.h>
#endif
#ifndef INCLUDED_nape_phys_InertiaMode
#include <nape/phys/InertiaMode.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_MassMode
#include <nape/phys/MassMode.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_CbType
#include <zpp_nape/callbacks/ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_ColArbiter
#include <zpp_nape/dynamics/ZPP_ColArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_FluidArbiter
#include <zpp_nape/dynamics/ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec3
#include <zpp_nape/geom/ZPP_Vec3.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_FluidProperties
#include <zpp_nape/phys/ZPP_FluidProperties.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Arbiter
#include <zpp_nape/util/ZNPList_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ArbiterList
#include <zpp_nape/util/ZPP_ArbiterList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ConstraintList
#include <zpp_nape/util/ZPP_ConstraintList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace nape{
namespace phys{

Void Body_obj::__construct(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{
HX_STACK_PUSH("Body::new","nape/phys/Body.hx",177);
{
	HX_STACK_LINE(189)
	this->debugDraw = true;
	HX_STACK_LINE(181)
	this->zpp_inner = null();
	HX_STACK_LINE(459)
	try{
		HX_STACK_LINE(459)
		super::__construct();
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(467)
	this->zpp_inner = ::zpp_nape::phys::ZPP_Body_obj::__new();
	HX_STACK_LINE(468)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(469)
	this->zpp_inner->outer_i = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(470)
	this->zpp_inner_i = this->zpp_inner;
	HX_STACK_LINE(471)
	if (((position != null()))){
		HX_STACK_LINE(472)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(474)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(477)
		{
			struct _Function_3_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",478);
					{
						HX_STACK_LINE(478)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(478)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(478)
						{
							HX_STACK_LINE(478)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(478)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(478)
								_this->_validate();
							}
						}
						HX_STACK_LINE(478)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(478)
			this->zpp_inner->posx = _Function_3_1::Block(position);
			struct _Function_3_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",479);
					{
						HX_STACK_LINE(479)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(479)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(479)
						{
							HX_STACK_LINE(479)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(479)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(479)
								_this->_validate();
							}
						}
						HX_STACK_LINE(479)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(479)
			this->zpp_inner->posy = _Function_3_2::Block(position);
			HX_STACK_LINE(480)
			{
			}
			HX_STACK_LINE(488)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(499)
		this->zpp_inner->posx = (int)0;
		HX_STACK_LINE(500)
		this->zpp_inner->posy = (int)0;
		HX_STACK_LINE(501)
		{
		}
		HX_STACK_LINE(509)
		{
		}
	}
	HX_STACK_LINE(518)
	{
		struct _Function_2_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		::nape::phys::BodyType type1 = (  (((type == null()))) ? ::nape::phys::BodyType(_Function_2_1::Block()) : ::nape::phys::BodyType(type) );		HX_STACK_VAR(type1,"type1");
		HX_STACK_LINE(518)
		{
			HX_STACK_LINE(518)
			this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
			HX_STACK_LINE(518)
			if ((this->zpp_inner->world)){
				HX_STACK_LINE(518)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			struct _Function_3_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
					{
						HX_STACK_LINE(518)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(518)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(518)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(518)
			if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_3_1::Block()).Add(_Function_3_2::Block()).Add(_Function_3_3::Block())->__get(this->zpp_inner->type) != type1))){
				HX_STACK_LINE(518)
				if (((type1 == null()))){
					HX_STACK_LINE(518)
					hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
				}
				struct _Function_4_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
						{
							HX_STACK_LINE(518)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(518)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				struct _Function_4_2{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
						{
							HX_STACK_LINE(518)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(518)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(518)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				int ntype = (  (((type1 == _Function_4_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type1 == _Function_4_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
				HX_STACK_LINE(518)
				if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						this->zpp_inner->velx = (int)0;
						HX_STACK_LINE(518)
						this->zpp_inner->vely = (int)0;
						HX_STACK_LINE(518)
						{
						}
						HX_STACK_LINE(518)
						{
						}
					}
					HX_STACK_LINE(518)
					this->zpp_inner->angvel = (int)0;
				}
				HX_STACK_LINE(518)
				this->zpp_inner->invalidate_type();
				HX_STACK_LINE(518)
				if (((this->zpp_inner->space != null()))){
					HX_STACK_LINE(518)
					this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
				}
				else{
					HX_STACK_LINE(518)
					this->zpp_inner->type = ntype;
				}
			}
		}
		struct _Function_2_2{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		struct _Function_2_4{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",518);
				{
					HX_STACK_LINE(518)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(518)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(518)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block()).Add(_Function_2_4::Block())->__get(this->zpp_inner->type);
	}
	HX_STACK_LINE(519)
	if (((position != null()))){
		HX_STACK_LINE(519)
		if ((position->zpp_inner->weak)){
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(523)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(523)
					if ((_this->_immutable)){
						HX_STACK_LINE(523)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(523)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(523)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(523)
				if ((position->zpp_inner->_inuse)){
					HX_STACK_LINE(523)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(523)
				::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(523)
				position->zpp_inner->outer = null();
				HX_STACK_LINE(523)
				position->zpp_inner = null();
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					{
					}
					HX_STACK_LINE(523)
					o->zpp_pool = null();
					HX_STACK_LINE(523)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(523)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(523)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(523)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(523)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(523)
				{
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(523)
					{
					}
					HX_STACK_LINE(523)
					{
						HX_STACK_LINE(523)
						if (((o->outer != null()))){
							HX_STACK_LINE(523)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(523)
							o->outer = null();
						}
						HX_STACK_LINE(523)
						o->_isimmutable = null();
						HX_STACK_LINE(523)
						o->_validate = null();
						HX_STACK_LINE(523)
						o->_invalidate = null();
					}
					HX_STACK_LINE(523)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(523)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(524)
			true;
		}
		else{
			HX_STACK_LINE(526)
			false;
		}
	}
	HX_STACK_LINE(530)
	this->zpp_inner_i->insert_cbtype(::zpp_nape::callbacks::ZPP_CbType_obj::ANY_BODY->zpp_inner);
}
;
	return null();
}

Body_obj::~Body_obj() { }

Dynamic Body_obj::__CreateEmpty() { return  new Body_obj; }
hx::ObjectPtr< Body_obj > Body_obj::__new(::nape::phys::BodyType type,::nape::geom::Vec2 position)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(type,position);
	return result;}

Dynamic Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Body_obj > result = new Body_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Body_obj::toString( ){
	HX_STACK_PUSH("Body::toString","nape/phys/Body.hx",2539);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2539)
	return ((((  ((this->zpp_inner->world)) ? ::String(HX_CSTRING("(space::world")) : ::String((HX_CSTRING("(") + ((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))) ? ::String(HX_CSTRING("dynamic")) : ::String((  (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))) ? ::String(HX_CSTRING("static")) : ::String(HX_CSTRING("kinematic")) )) )))) )) + HX_CSTRING(")#")) + this->zpp_inner_i->id);
}


bool Body_obj::contains( ::nape::geom::Vec2 point){
	HX_STACK_PUSH("Body::contains","nape/phys/Body.hx",2494);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(2495)
	if (((bool((point != null())) && bool(point->zpp_disp)))){
		HX_STACK_LINE(2497)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(2501)
	if (((point == null()))){
		HX_STACK_LINE(2501)
		hx::Throw (HX_CSTRING("Error: Cannot check containment of null point"));
	}
	HX_STACK_LINE(2503)
	bool wasWeak = point->zpp_inner->weak;		HX_STACK_VAR(wasWeak,"wasWeak");
	HX_STACK_LINE(2504)
	point->zpp_inner->weak = false;
	HX_STACK_LINE(2505)
	bool retvar;		HX_STACK_VAR(retvar,"retvar");
	HX_STACK_LINE(2506)
	{
		HX_STACK_LINE(2507)
		retvar = false;
		HX_STACK_LINE(2508)
		{
			HX_STACK_LINE(2509)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2510)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2511)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(2512)
				if ((s->outer->contains(point))){
					HX_STACK_LINE(2514)
					retvar = true;
					HX_STACK_LINE(2515)
					break;
				}
				HX_STACK_LINE(2518)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(2522)
	point->zpp_inner->weak = wasWeak;
	HX_STACK_LINE(2523)
	if ((point->zpp_inner->weak)){
		HX_STACK_LINE(2527)
		{
			HX_STACK_LINE(2527)
			if (((bool((point != null())) && bool(point->zpp_disp)))){
				HX_STACK_LINE(2527)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(2527)
			{
				HX_STACK_LINE(2527)
				::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(2527)
				if ((_this->_immutable)){
					HX_STACK_LINE(2527)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(2527)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(2527)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(2527)
			if ((point->zpp_inner->_inuse)){
				HX_STACK_LINE(2527)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(2527)
			::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(2527)
			point->zpp_inner->outer = null();
			HX_STACK_LINE(2527)
			point->zpp_inner = null();
			HX_STACK_LINE(2527)
			{
				HX_STACK_LINE(2527)
				::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2527)
				{
				}
				HX_STACK_LINE(2527)
				o->zpp_pool = null();
				HX_STACK_LINE(2527)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(2527)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(2527)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(2527)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(2527)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(2527)
			{
				HX_STACK_LINE(2527)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(2527)
				{
				}
				HX_STACK_LINE(2527)
				{
					HX_STACK_LINE(2527)
					if (((o->outer != null()))){
						HX_STACK_LINE(2527)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(2527)
						o->outer = null();
					}
					HX_STACK_LINE(2527)
					o->_isimmutable = null();
					HX_STACK_LINE(2527)
					o->_validate = null();
					HX_STACK_LINE(2527)
					o->_invalidate = null();
				}
				HX_STACK_LINE(2527)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(2527)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(2528)
		true;
	}
	else{
		HX_STACK_LINE(2530)
		false;
	}
	HX_STACK_LINE(2534)
	return retvar;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,contains,return )

::nape::geom::Vec3 Body_obj::totalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::totalImpulse","nape/phys/Body.hx",2409);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2410)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2411)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2412)
		{
		}
		HX_STACK_LINE(2420)
		{
		}
		HX_STACK_LINE(2428)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2429)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_1_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2430);
				{
					HX_STACK_LINE(2430)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2430)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2430)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2430)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_1_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2431)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2432)
				if (((arb->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))){
					HX_STACK_LINE(2432)
					continue;
				}
				HX_STACK_LINE(2433)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2433)
					continue;
				}
				HX_STACK_LINE(2434)
				::nape::geom::Vec3 imp = arb->wrapper()->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2435)
				{
					HX_STACK_LINE(2436)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2437)
					{
						HX_STACK_LINE(2438)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2439)
						{
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2447);
								{
									HX_STACK_LINE(2447)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2447)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2447)
									{
										HX_STACK_LINE(2447)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2447)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2447)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2447)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(2447)
						hx::AddEq(retx,(_Function_4_1::Block(imp) * t1));
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2448);
								{
									HX_STACK_LINE(2448)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2448)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2448)
									{
										HX_STACK_LINE(2448)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2448)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2448)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2448)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(2448)
						hx::AddEq(rety,(_Function_4_2::Block(imp) * t1));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2450);
							{
								HX_STACK_LINE(2450)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(2450)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(2450)
								{
									HX_STACK_LINE(2450)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2450)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(2450)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2450)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(2450)
					hx::AddEq(retz,(_Function_3_1::Block(imp) * t));
				}
				HX_STACK_LINE(2452)
				imp->dispose();
			}
;
		}
		HX_STACK_LINE(2454)
		{
			HX_STACK_LINE(2455)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(2456)
			while(((cx_ite != null()))){
				HX_STACK_LINE(2457)
				::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
				HX_STACK_LINE(2458)
				if ((con->active)){
					HX_STACK_LINE(2460)
					::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2461)
					{
						HX_STACK_LINE(2462)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2463)
						{
							HX_STACK_LINE(2464)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2465)
							{
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2473);
									{
										HX_STACK_LINE(2473)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2473)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2473)
										{
											HX_STACK_LINE(2473)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2473)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2473)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2473)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2473)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2474);
									{
										HX_STACK_LINE(2474)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2474)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2474)
										{
											HX_STACK_LINE(2474)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2474)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2474)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2474)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2474)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2476);
								{
									HX_STACK_LINE(2476)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2476)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2476)
									{
										HX_STACK_LINE(2476)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2476)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2476)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2476)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2476)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2478)
					imp->dispose();
				}
				HX_STACK_LINE(2481)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(2484)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalImpulse,return )

::nape::geom::Vec3 Body_obj::constraintsImpulse( ){
	HX_STACK_PUSH("Body::constraintsImpulse","nape/phys/Body.hx",2343);
	HX_STACK_THIS(this);
	HX_STACK_LINE(2344)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2345)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2346)
	{
	}
	HX_STACK_LINE(2354)
	{
	}
	HX_STACK_LINE(2362)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2363)
	{
		HX_STACK_LINE(2364)
		::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = this->zpp_inner->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(2365)
		while(((cx_ite != null()))){
			HX_STACK_LINE(2366)
			::zpp_nape::constraint::ZPP_Constraint con = cx_ite->elt;		HX_STACK_VAR(con,"con");
			HX_STACK_LINE(2367)
			{
				HX_STACK_LINE(2368)
				::nape::geom::Vec3 imp = con->outer->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
				HX_STACK_LINE(2369)
				{
					HX_STACK_LINE(2370)
					int t = (int)1;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(2371)
					{
						HX_STACK_LINE(2372)
						int t1 = t;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(2373)
						{
						}
						struct _Function_6_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2381);
								{
									HX_STACK_LINE(2381)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2381)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2381)
									{
										HX_STACK_LINE(2381)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2381)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2381)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2381)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(2381)
						hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
						struct _Function_6_2{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2382);
								{
									HX_STACK_LINE(2382)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2382)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2382)
									{
										HX_STACK_LINE(2382)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2382)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2382)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2382)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(2382)
						hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
					}
					struct _Function_5_1{
						inline static Float Block( ::nape::geom::Vec3 &imp){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2384);
							{
								HX_STACK_LINE(2384)
								if (((bool((imp != null())) && bool(imp->zpp_disp)))){
									HX_STACK_LINE(2384)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(2384)
								{
									HX_STACK_LINE(2384)
									::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2384)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(2384)
										_this->_validate();
									}
								}
								HX_STACK_LINE(2384)
								return imp->zpp_inner->z;
							}
							return null();
						}
					};
					HX_STACK_LINE(2384)
					hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
				}
				HX_STACK_LINE(2386)
				imp->dispose();
			}
			HX_STACK_LINE(2388)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(2391)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,constraintsImpulse,return )

::nape::geom::Vec3 Body_obj::totalFluidImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::totalFluidImpulse","nape/phys/Body.hx",2286);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2287)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2288)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2289)
	{
	}
	HX_STACK_LINE(2297)
	{
	}
	HX_STACK_LINE(2305)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2306)
	{
		HX_STACK_LINE(2307)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2308);
				{
					HX_STACK_LINE(2308)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2308)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2308)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2308)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2309)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2310)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2310)
					continue;
				}
				HX_STACK_LINE(2311)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2311)
					continue;
				}
				HX_STACK_LINE(2312)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2313);
							{
								HX_STACK_LINE(2313)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2313)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2313)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2314)
					{
						HX_STACK_LINE(2315)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2316)
						{
							HX_STACK_LINE(2317)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2318)
							{
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2326);
									{
										HX_STACK_LINE(2326)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2326)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2326)
										{
											HX_STACK_LINE(2326)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2326)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2326)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2326)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2326)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2327);
									{
										HX_STACK_LINE(2327)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2327)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2327)
										{
											HX_STACK_LINE(2327)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2327)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2327)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2327)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2327)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2329);
								{
									HX_STACK_LINE(2329)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2329)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2329)
									{
										HX_STACK_LINE(2329)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2329)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2329)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2329)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2329)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2331)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2335)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,totalFluidImpulse,return )

::nape::geom::Vec3 Body_obj::dragImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::dragImpulse","nape/phys/Body.hx",2224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2225)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2226)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2227)
	{
	}
	HX_STACK_LINE(2235)
	{
	}
	HX_STACK_LINE(2243)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2244)
	{
		HX_STACK_LINE(2245)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2246);
				{
					HX_STACK_LINE(2246)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2246)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2246)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2246)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2247)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2248)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2248)
					continue;
				}
				HX_STACK_LINE(2249)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2249)
					continue;
				}
				HX_STACK_LINE(2250)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2251);
							{
								HX_STACK_LINE(2251)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2251)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2251)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->dragImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2252)
					{
						HX_STACK_LINE(2253)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2254)
						{
							HX_STACK_LINE(2255)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2256)
							{
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2264);
									{
										HX_STACK_LINE(2264)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2264)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2264)
										{
											HX_STACK_LINE(2264)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2264)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2264)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2264)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2264)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2265);
									{
										HX_STACK_LINE(2265)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2265)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2265)
										{
											HX_STACK_LINE(2265)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2265)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2265)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2265)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2265)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2267);
								{
									HX_STACK_LINE(2267)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2267)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2267)
									{
										HX_STACK_LINE(2267)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2267)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2267)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2267)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2267)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2269)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2273)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,dragImpulse,return )

::nape::geom::Vec3 Body_obj::buoyancyImpulse( ::nape::phys::Body body){
	HX_STACK_PUSH("Body::buoyancyImpulse","nape/phys/Body.hx",2162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_LINE(2163)
	Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(2164)
	Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
	HX_STACK_LINE(2165)
	{
	}
	HX_STACK_LINE(2173)
	{
	}
	HX_STACK_LINE(2181)
	Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
	HX_STACK_LINE(2182)
	{
		HX_STACK_LINE(2183)
		::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
		struct _Function_2_1{
			inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2184);
				{
					HX_STACK_LINE(2184)
					if (((__this->zpp_inner->wrap_arbiters == null()))){
						HX_STACK_LINE(2184)
						__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
					}
					HX_STACK_LINE(2184)
					return __this->zpp_inner->wrap_arbiters;
				}
				return null();
			}
		};
		HX_STACK_LINE(2184)
		for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
			::nape::dynamics::Arbiter oarb = __it->next();
			{
				HX_STACK_LINE(2185)
				::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(2186)
				if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))){
					HX_STACK_LINE(2186)
					continue;
				}
				HX_STACK_LINE(2187)
				if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
					HX_STACK_LINE(2187)
					continue;
				}
				HX_STACK_LINE(2188)
				{
					struct _Function_4_1{
						inline static ::nape::dynamics::FluidArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2189);
							{
								HX_STACK_LINE(2189)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2189)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) ? ::nape::dynamics::FluidArbiter(_this->zpp_inner->fluidarb->outer_zn) : ::nape::dynamics::FluidArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2189)
					::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->buoyancyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp,"imp");
					HX_STACK_LINE(2190)
					{
						HX_STACK_LINE(2191)
						int t = (int)1;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(2192)
						{
							HX_STACK_LINE(2193)
							int t1 = t;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(2194)
							{
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2202);
									{
										HX_STACK_LINE(2202)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2202)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2202)
										{
											HX_STACK_LINE(2202)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2202)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2202)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2202)
										return imp->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(2202)
							hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
							struct _Function_6_2{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2203);
									{
										HX_STACK_LINE(2203)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2203)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2203)
										{
											HX_STACK_LINE(2203)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2203)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2203)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2203)
										return imp->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(2203)
							hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
						}
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec3 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2205);
								{
									HX_STACK_LINE(2205)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(2205)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(2205)
									{
										HX_STACK_LINE(2205)
										::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(2205)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(2205)
											_this->_validate();
										}
									}
									HX_STACK_LINE(2205)
									return imp->zpp_inner->z;
								}
								return null();
							}
						};
						HX_STACK_LINE(2205)
						hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
					}
					HX_STACK_LINE(2207)
					imp->dispose();
				}
			}
;
		}
	}
	HX_STACK_LINE(2211)
	return ::nape::geom::Vec3_obj::get(retx,rety,retz);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,buoyancyImpulse,return )

Float Body_obj::rollingImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::rollingImpulse","nape/phys/Body.hx",2136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2137)
		Float ret = 0.0;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(2138)
		{
			HX_STACK_LINE(2139)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2140);
					{
						HX_STACK_LINE(2140)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2140)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2140)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2140)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2141)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2142)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2142)
						continue;
					}
					HX_STACK_LINE(2143)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2143)
						continue;
					}
					struct _Function_3_1{
						inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2145);
							{
								HX_STACK_LINE(2145)
								::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(2145)
								return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
							}
							return null();
						}
					};
					HX_STACK_LINE(2144)
					hx::AddEq(ret,(_Function_3_1::Block(arb))->rollingImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly));
				}
;
			}
		}
		HX_STACK_LINE(2149)
		return ret;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rollingImpulse,return )

::nape::geom::Vec3 Body_obj::totalContactsImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::totalContactsImpulse","nape/phys/Body.hx",2072);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2073)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2074)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2075)
		{
		}
		HX_STACK_LINE(2083)
		{
		}
		HX_STACK_LINE(2091)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2092)
		{
			HX_STACK_LINE(2093)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2094);
					{
						HX_STACK_LINE(2094)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2094)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2094)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2094)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2095)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2096)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2096)
						continue;
					}
					HX_STACK_LINE(2097)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2097)
						continue;
					}
					HX_STACK_LINE(2098)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2099);
								{
									HX_STACK_LINE(2099)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2099)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2099)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->totalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2100)
						{
							HX_STACK_LINE(2101)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2102)
							{
								HX_STACK_LINE(2103)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2104)
								{
								}
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2112);
										{
											HX_STACK_LINE(2112)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2112)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2112)
											{
												HX_STACK_LINE(2112)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2112)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(2112)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2112)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(2112)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2113);
										{
											HX_STACK_LINE(2113)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2113)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2113)
											{
												HX_STACK_LINE(2113)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2113)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(2113)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2113)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(2113)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2115);
									{
										HX_STACK_LINE(2115)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2115)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2115)
										{
											HX_STACK_LINE(2115)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2115)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2115)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2115)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(2115)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(2117)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(2121)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,totalContactsImpulse,return )

::nape::geom::Vec3 Body_obj::tangentImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::tangentImpulse","nape/phys/Body.hx",2008);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(2009)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(2010)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(2011)
		{
		}
		HX_STACK_LINE(2019)
		{
		}
		HX_STACK_LINE(2027)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(2028)
		{
			HX_STACK_LINE(2029)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2030);
					{
						HX_STACK_LINE(2030)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(2030)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(2030)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(2030)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(2031)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(2032)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(2032)
						continue;
					}
					HX_STACK_LINE(2033)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(2033)
						continue;
					}
					HX_STACK_LINE(2034)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2035);
								{
									HX_STACK_LINE(2035)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(2035)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(2035)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->tangentImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(2036)
						{
							HX_STACK_LINE(2037)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(2038)
							{
								HX_STACK_LINE(2039)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(2040)
								{
								}
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2048);
										{
											HX_STACK_LINE(2048)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2048)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2048)
											{
												HX_STACK_LINE(2048)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2048)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(2048)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2048)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(2048)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2049);
										{
											HX_STACK_LINE(2049)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(2049)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(2049)
											{
												HX_STACK_LINE(2049)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(2049)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(2049)
													_this->_validate();
												}
											}
											HX_STACK_LINE(2049)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(2049)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",2051);
									{
										HX_STACK_LINE(2051)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(2051)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(2051)
										{
											HX_STACK_LINE(2051)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(2051)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(2051)
												_this->_validate();
											}
										}
										HX_STACK_LINE(2051)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(2051)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(2053)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(2057)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,tangentImpulse,return )

::nape::geom::Vec3 Body_obj::normalImpulse( ::nape::phys::Body body,hx::Null< bool >  __o_freshOnly){
bool freshOnly = __o_freshOnly.Default(false);
	HX_STACK_PUSH("Body::normalImpulse","nape/phys/Body.hx",1944);
	HX_STACK_THIS(this);
	HX_STACK_ARG(body,"body");
	HX_STACK_ARG(freshOnly,"freshOnly");
{
		HX_STACK_LINE(1945)
		Float retx = (int)0;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(1946)
		Float rety = (int)0;		HX_STACK_VAR(rety,"rety");
		HX_STACK_LINE(1947)
		{
		}
		HX_STACK_LINE(1955)
		{
		}
		HX_STACK_LINE(1963)
		Float retz = (int)0;		HX_STACK_VAR(retz,"retz");
		HX_STACK_LINE(1964)
		{
			HX_STACK_LINE(1965)
			::zpp_nape::util::ZNPList_ZPP_Arbiter arbs = this->zpp_inner->arbiters;		HX_STACK_VAR(arbs,"arbs");
			struct _Function_2_1{
				inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1966);
					{
						HX_STACK_LINE(1966)
						if (((__this->zpp_inner->wrap_arbiters == null()))){
							HX_STACK_LINE(1966)
							__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
						}
						HX_STACK_LINE(1966)
						return __this->zpp_inner->wrap_arbiters;
					}
					return null();
				}
			};
			HX_STACK_LINE(1966)
			for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_2_1::Block(this))->iterator());  __it->hasNext(); ){
				::nape::dynamics::Arbiter oarb = __it->next();
				{
					HX_STACK_LINE(1967)
					::zpp_nape::dynamics::ZPP_Arbiter arb = oarb->zpp_inner;		HX_STACK_VAR(arb,"arb");
					HX_STACK_LINE(1968)
					if (((arb->type != ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))){
						HX_STACK_LINE(1968)
						continue;
					}
					HX_STACK_LINE(1969)
					if (((bool((bool((body != null())) && bool((arb->b2 != body->zpp_inner)))) && bool((arb->b1 != body->zpp_inner))))){
						HX_STACK_LINE(1969)
						continue;
					}
					HX_STACK_LINE(1970)
					{
						struct _Function_4_1{
							inline static ::nape::dynamics::CollisionArbiter Block( ::zpp_nape::dynamics::ZPP_Arbiter &arb){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1971);
								{
									HX_STACK_LINE(1971)
									::nape::dynamics::Arbiter _this = arb->wrapper();		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1971)
									return (  (((_this->zpp_inner->type == ::zpp_nape::dynamics::ZPP_Arbiter_obj::COL))) ? ::nape::dynamics::CollisionArbiter(_this->zpp_inner->colarb->outer_zn) : ::nape::dynamics::CollisionArbiter(null()) );
								}
								return null();
							}
						};
						HX_STACK_LINE(1971)
						::nape::geom::Vec3 imp = (_Function_4_1::Block(arb))->normalImpulse(hx::ObjectPtr<OBJ_>(this),freshOnly);		HX_STACK_VAR(imp,"imp");
						HX_STACK_LINE(1972)
						{
							HX_STACK_LINE(1973)
							int t = (int)1;		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1974)
							{
								HX_STACK_LINE(1975)
								int t1 = t;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(1976)
								{
								}
								struct _Function_6_1{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1984);
										{
											HX_STACK_LINE(1984)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(1984)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1984)
											{
												HX_STACK_LINE(1984)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1984)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1984)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1984)
											return imp->zpp_inner->x;
										}
										return null();
									}
								};
								HX_STACK_LINE(1984)
								hx::AddEq(retx,(_Function_6_1::Block(imp) * t1));
								struct _Function_6_2{
									inline static Float Block( ::nape::geom::Vec3 &imp){
										HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1985);
										{
											HX_STACK_LINE(1985)
											if (((bool((imp != null())) && bool(imp->zpp_disp)))){
												HX_STACK_LINE(1985)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1985)
											{
												HX_STACK_LINE(1985)
												::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1985)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1985)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1985)
											return imp->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1985)
								hx::AddEq(rety,(_Function_6_2::Block(imp) * t1));
							}
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec3 &imp){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1987);
									{
										HX_STACK_LINE(1987)
										if (((bool((imp != null())) && bool(imp->zpp_disp)))){
											HX_STACK_LINE(1987)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec3")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1987)
										{
											HX_STACK_LINE(1987)
											::zpp_nape::geom::ZPP_Vec3 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1987)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1987)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1987)
										return imp->zpp_inner->z;
									}
									return null();
								}
							};
							HX_STACK_LINE(1987)
							hx::AddEq(retz,(_Function_5_1::Block(imp) * t));
						}
						HX_STACK_LINE(1989)
						imp->dispose();
					}
				}
;
			}
		}
		HX_STACK_LINE(1993)
		return ::nape::geom::Vec3_obj::get(retx,rety,retz);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,normalImpulse,return )

::nape::geom::Vec2 Body_obj::get_worldCOM( ){
	HX_STACK_PUSH("Body::get_worldCOM","nape/phys/Body.hx",1919);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1921)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1921)
		hx::Throw ((HX_CSTRING("Error: Space::world has no ") + HX_CSTRING("worldCOM")));
	}
	HX_STACK_LINE(1923)
	if (((this->zpp_inner->wrap_worldCOM == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1924);
				{
					HX_STACK_LINE(1924)
					Float x = __this->zpp_inner->worldCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->zpp_inner->worldCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1924)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1924)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1924)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1924)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1924)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1924)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1924)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1924)
						ret->zpp_pool = null();
						HX_STACK_LINE(1924)
						ret->zpp_disp = false;
						HX_STACK_LINE(1924)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1924)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1924)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1924);
								{
									HX_STACK_LINE(1924)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1924)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1924)
									{
										HX_STACK_LINE(1924)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1924)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1924)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1924)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1924)
											ret1->next = null();
										}
										HX_STACK_LINE(1924)
										ret1->weak = false;
									}
									HX_STACK_LINE(1924)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1924)
									{
										HX_STACK_LINE(1924)
										ret1->x = x;
										HX_STACK_LINE(1924)
										ret1->y = y;
										HX_STACK_LINE(1924)
										{
										}
										HX_STACK_LINE(1924)
										{
										}
									}
									HX_STACK_LINE(1924)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1924)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(1924)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1924)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1924)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1924)
						{
							HX_STACK_LINE(1924)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1924)
							if ((_this->_immutable)){
								HX_STACK_LINE(1924)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1924)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1924)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1924)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1924)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1924);
								{
									HX_STACK_LINE(1924)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1924)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1924)
									{
										HX_STACK_LINE(1924)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1924)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1924)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1924)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1924);
								{
									HX_STACK_LINE(1924)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1924)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1924)
									{
										HX_STACK_LINE(1924)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1924)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1924)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1924)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1924)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(1924)
							{
								HX_STACK_LINE(1924)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1924)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1924)
								{
								}
								HX_STACK_LINE(1924)
								{
								}
							}
							HX_STACK_LINE(1924)
							{
								HX_STACK_LINE(1924)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1924)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1924)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1924)
						ret;
					}
					HX_STACK_LINE(1924)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1924)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1924)
		this->zpp_inner->wrap_worldCOM = _Function_2_1::Block(this);
		HX_STACK_LINE(1925)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1926)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1927)
		this->zpp_inner->wrap_worldCOM->zpp_inner->_validate = this->zpp_inner->getworldCOM_dyn();
	}
	HX_STACK_LINE(1929)
	return this->zpp_inner->wrap_worldCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_worldCOM,return )

::nape::geom::Vec2 Body_obj::get_localCOM( ){
	HX_STACK_PUSH("Body::get_localCOM","nape/phys/Body.hx",1897);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1899)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1899)
		hx::Throw ((HX_CSTRING("Error: Space::world has no ") + HX_CSTRING("localCOM")));
	}
	HX_STACK_LINE(1901)
	if (((this->zpp_inner->wrap_localCOM == null()))){
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1902);
				{
					HX_STACK_LINE(1902)
					Float x = __this->zpp_inner->localCOMx;		HX_STACK_VAR(x,"x");
					Float y = __this->zpp_inner->localCOMy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(1902)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1902)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1902)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1902)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1902)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1902)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1902)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1902)
						ret->zpp_pool = null();
						HX_STACK_LINE(1902)
						ret->zpp_disp = false;
						HX_STACK_LINE(1902)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1902)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1902)
					if (((ret->zpp_inner == null()))){
						struct _Function_4_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1902);
								{
									HX_STACK_LINE(1902)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1902)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1902)
									{
										HX_STACK_LINE(1902)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1902)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1902)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1902)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1902)
											ret1->next = null();
										}
										HX_STACK_LINE(1902)
										ret1->weak = false;
									}
									HX_STACK_LINE(1902)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1902)
									{
										HX_STACK_LINE(1902)
										ret1->x = x;
										HX_STACK_LINE(1902)
										ret1->y = y;
										HX_STACK_LINE(1902)
										{
										}
										HX_STACK_LINE(1902)
										{
										}
									}
									HX_STACK_LINE(1902)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1902)
						ret->zpp_inner = _Function_4_1::Block(x,y);
						HX_STACK_LINE(1902)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1902)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1902)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1902)
						{
							HX_STACK_LINE(1902)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1902)
							if ((_this->_immutable)){
								HX_STACK_LINE(1902)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1902)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1902)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1902)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1902)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1902);
								{
									HX_STACK_LINE(1902)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1902)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1902)
									{
										HX_STACK_LINE(1902)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1902)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1902)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1902)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1902);
								{
									HX_STACK_LINE(1902)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1902)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1902)
									{
										HX_STACK_LINE(1902)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1902)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1902)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1902)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1902)
						if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
							HX_STACK_LINE(1902)
							{
								HX_STACK_LINE(1902)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1902)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1902)
								{
								}
								HX_STACK_LINE(1902)
								{
								}
							}
							HX_STACK_LINE(1902)
							{
								HX_STACK_LINE(1902)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1902)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1902)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1902)
						ret;
					}
					HX_STACK_LINE(1902)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1902)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1902)
		this->zpp_inner->wrap_localCOM = _Function_2_1::Block(this);
		HX_STACK_LINE(1903)
		this->zpp_inner->wrap_localCOM->zpp_inner->_inuse = true;
		HX_STACK_LINE(1904)
		this->zpp_inner->wrap_localCOM->zpp_inner->_immutable = true;
		HX_STACK_LINE(1905)
		this->zpp_inner->wrap_localCOM->zpp_inner->_validate = this->zpp_inner->getlocalCOM_dyn();
	}
	HX_STACK_LINE(1907)
	return this->zpp_inner->wrap_localCOM;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_localCOM,return )

::nape::phys::Body Body_obj::setShapeFluidProperties( ::nape::phys::FluidProperties fluidProperties){
	HX_STACK_PUSH("Body::setShapeFluidProperties","nape/phys/Body.hx",1872);
	HX_STACK_THIS(this);
	HX_STACK_ARG(fluidProperties,"fluidProperties");
	HX_STACK_LINE(1873)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFluidProperties()"));
	HX_STACK_LINE(1875)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1875)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1877)
	{
		HX_STACK_LINE(1878)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1879)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1880)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1881)
			{
				HX_STACK_LINE(1881)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1881)
				{
					HX_STACK_LINE(1881)
					if (((fluidProperties == null()))){
						HX_STACK_LINE(1881)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape fluidProperties, disable fluids by setting fluidEnabled to false"));
					}
					HX_STACK_LINE(1881)
					_this->zpp_inner->setFluid(fluidProperties->zpp_inner);
				}
				HX_STACK_LINE(1881)
				{
					HX_STACK_LINE(1881)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::fluidProperties"));
					HX_STACK_LINE(1881)
					if (((_this->zpp_inner->fluidProperties == null()))){
						HX_STACK_LINE(1881)
						_this->zpp_inner->setFluid(::nape::phys::FluidProperties_obj::__new(null(),null())->zpp_inner);
					}
					HX_STACK_LINE(1881)
					_this->zpp_inner->fluidProperties->wrapper();
				}
			}
			HX_STACK_LINE(1882)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1885)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFluidProperties,return )

::nape::phys::Body Body_obj::setShapeFilters( ::nape::dynamics::InteractionFilter filter){
	HX_STACK_PUSH("Body::setShapeFilters","nape/phys/Body.hx",1848);
	HX_STACK_THIS(this);
	HX_STACK_ARG(filter,"filter");
	HX_STACK_LINE(1849)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeFilters()"));
	HX_STACK_LINE(1851)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1851)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1853)
	{
		HX_STACK_LINE(1854)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1855)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1856)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1857)
			{
				HX_STACK_LINE(1857)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1857)
				{
					HX_STACK_LINE(1857)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::filter"));
					HX_STACK_LINE(1857)
					if (((filter == null()))){
						HX_STACK_LINE(1857)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape filter"));
					}
					HX_STACK_LINE(1857)
					_this->zpp_inner->setFilter(filter->zpp_inner);
				}
				HX_STACK_LINE(1857)
				_this->zpp_inner->filter->wrapper();
			}
			HX_STACK_LINE(1858)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1861)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeFilters,return )

::nape::phys::Body Body_obj::setShapeMaterials( ::nape::phys::Material material){
	HX_STACK_PUSH("Body::setShapeMaterials","nape/phys/Body.hx",1824);
	HX_STACK_THIS(this);
	HX_STACK_ARG(material,"material");
	HX_STACK_LINE(1825)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::setShapeMaterials()"));
	HX_STACK_LINE(1827)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1827)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1829)
	{
		HX_STACK_LINE(1830)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1831)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1832)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1833)
			{
				HX_STACK_LINE(1833)
				::nape::shape::Shape _this = s->outer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1833)
				{
					HX_STACK_LINE(1833)
					_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::material"));
					HX_STACK_LINE(1833)
					if (((material == null()))){
						HX_STACK_LINE(1833)
						hx::Throw (HX_CSTRING("Error: Cannot assign null as Shape material"));
					}
					HX_STACK_LINE(1833)
					_this->zpp_inner->setMaterial(material->zpp_inner);
				}
				HX_STACK_LINE(1833)
				_this->zpp_inner->material->wrapper();
			}
			HX_STACK_LINE(1834)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1837)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,setShapeMaterials,return )

::nape::phys::Body Body_obj::rotate( ::nape::geom::Vec2 centre,Float angle){
	HX_STACK_PUSH("Body::rotate","nape/phys/Body.hx",1782);
	HX_STACK_THIS(this);
	HX_STACK_ARG(centre,"centre");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(1783)
	if (((bool((centre != null())) && bool(centre->zpp_disp)))){
		HX_STACK_LINE(1785)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1789)
	if (((centre == null()))){
		HX_STACK_LINE(1789)
		hx::Throw (HX_CSTRING("Error: Cannot rotate about a null Vec2"));
	}
	HX_STACK_LINE(1792)
	if (((angle != angle))){
		HX_STACK_LINE(1792)
		hx::Throw (HX_CSTRING("Error: Cannot rotate by NaN radians"));
	}
	HX_STACK_LINE(1794)
	bool weak = centre->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1795)
	centre->zpp_inner->weak = false;
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1796);
			{
				HX_STACK_LINE(1796)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1796)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1796)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1796)
	::nape::geom::Vec2 del = (_Function_1_1::Block(this))->sub(centre,null());		HX_STACK_VAR(del,"del");
	HX_STACK_LINE(1797)
	del->rotate(angle);
	HX_STACK_LINE(1798)
	{
		HX_STACK_LINE(1798)
		::nape::geom::Vec2 position = centre->add(del,true);		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1798)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(1798)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1798)
			if (((position == null()))){
				HX_STACK_LINE(1798)
				hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("position")) + HX_CSTRING(" cannot be null")));
			}
			HX_STACK_LINE(1798)
			{
				struct _Function_4_1{
					inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
						{
							HX_STACK_LINE(1798)
							if (((__this->zpp_inner->wrap_pos == null()))){
								HX_STACK_LINE(1798)
								__this->zpp_inner->setupPosition();
							}
							HX_STACK_LINE(1798)
							return __this->zpp_inner->wrap_pos;
						}
						return null();
					}
				};
				HX_STACK_LINE(1798)
				::nape::geom::Vec2 _this = _Function_4_1::Block(this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1798)
				if (((bool((_this != null())) && bool(_this->zpp_disp)))){
					HX_STACK_LINE(1798)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1798)
				if (((bool((position != null())) && bool(position->zpp_disp)))){
					HX_STACK_LINE(1798)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1798)
				{
					HX_STACK_LINE(1798)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(1798)
					if ((_this1->_immutable)){
						HX_STACK_LINE(1798)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1798)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1798)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(1798)
				if (((position == null()))){
					HX_STACK_LINE(1798)
					hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
				}
				struct _Function_4_2{
					inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &position,::nape::geom::Vec2 &_this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
						{
							struct _Function_5_1{
								inline static Float Block( ::nape::geom::Vec2 &position){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
									{
										HX_STACK_LINE(1798)
										if (((bool((position != null())) && bool(position->zpp_disp)))){
											HX_STACK_LINE(1798)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1798)
										{
											HX_STACK_LINE(1798)
											::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1798)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1798)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1798)
										return position->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ::nape::geom::Vec2 &position){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
									{
										HX_STACK_LINE(1798)
										if (((bool((position != null())) && bool(position->zpp_disp)))){
											HX_STACK_LINE(1798)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1798)
										{
											HX_STACK_LINE(1798)
											::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1798)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1798)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1798)
										return position->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1798)
							Float x = _Function_5_1::Block(position);		HX_STACK_VAR(x,"x");
							Float y = _Function_5_2::Block(position);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(1798)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(1798)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1798)
							{
								HX_STACK_LINE(1798)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(1798)
								if ((_this1->_immutable)){
									HX_STACK_LINE(1798)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1798)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1798)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(1798)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1798)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_5_3{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
									{
										HX_STACK_LINE(1798)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1798)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1798)
										{
											HX_STACK_LINE(1798)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1798)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1798)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1798)
										return _this->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_5_4{
								inline static Float Block( ::nape::geom::Vec2 &_this){
									HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1798);
									{
										HX_STACK_LINE(1798)
										if (((bool((_this != null())) && bool(_this->zpp_disp)))){
											HX_STACK_LINE(1798)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1798)
										{
											HX_STACK_LINE(1798)
											::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
											HX_STACK_LINE(1798)
											if (((_this1->_validate_dyn() != null()))){
												HX_STACK_LINE(1798)
												_this1->_validate();
											}
										}
										HX_STACK_LINE(1798)
										return _this->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1798)
							if ((!(((bool((_Function_5_3::Block(_this) == x)) && bool((_Function_5_4::Block(_this) == y))))))){
								HX_STACK_LINE(1798)
								{
									HX_STACK_LINE(1798)
									_this->zpp_inner->x = x;
									HX_STACK_LINE(1798)
									_this->zpp_inner->y = y;
									HX_STACK_LINE(1798)
									{
									}
									HX_STACK_LINE(1798)
									{
									}
								}
								HX_STACK_LINE(1798)
								{
									HX_STACK_LINE(1798)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1798)
									if (((_this1->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1798)
										_this1->_invalidate(_this1);
									}
								}
							}
							HX_STACK_LINE(1798)
							return _this;
						}
						return null();
					}
				};
				HX_STACK_LINE(1798)
				::nape::geom::Vec2 ret = _Function_4_2::Block(position,_this);		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1798)
				if ((position->zpp_inner->weak)){
					HX_STACK_LINE(1798)
					{
						HX_STACK_LINE(1798)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(1798)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1798)
						{
							HX_STACK_LINE(1798)
							::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(1798)
							if ((_this1->_immutable)){
								HX_STACK_LINE(1798)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1798)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1798)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(1798)
						if ((position->zpp_inner->_inuse)){
							HX_STACK_LINE(1798)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(1798)
						::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(1798)
						position->zpp_inner->outer = null();
						HX_STACK_LINE(1798)
						position->zpp_inner = null();
						HX_STACK_LINE(1798)
						{
							HX_STACK_LINE(1798)
							::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1798)
							{
							}
							HX_STACK_LINE(1798)
							o->zpp_pool = null();
							HX_STACK_LINE(1798)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(1798)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
							}
							else{
								HX_STACK_LINE(1798)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
							}
							HX_STACK_LINE(1798)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
							HX_STACK_LINE(1798)
							o->zpp_disp = true;
						}
						HX_STACK_LINE(1798)
						{
							HX_STACK_LINE(1798)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(1798)
							{
							}
							HX_STACK_LINE(1798)
							{
								HX_STACK_LINE(1798)
								if (((o->outer != null()))){
									HX_STACK_LINE(1798)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(1798)
									o->outer = null();
								}
								HX_STACK_LINE(1798)
								o->_isimmutable = null();
								HX_STACK_LINE(1798)
								o->_validate = null();
								HX_STACK_LINE(1798)
								o->_invalidate = null();
							}
							HX_STACK_LINE(1798)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(1798)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(1798)
					true;
				}
				else{
					HX_STACK_LINE(1798)
					false;
				}
				HX_STACK_LINE(1798)
				ret;
			}
		}
		HX_STACK_LINE(1798)
		{
			HX_STACK_LINE(1798)
			if (((this->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(1798)
				this->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(1798)
			this->zpp_inner->wrap_pos;
		}
	}
	HX_STACK_LINE(1799)
	{
		HX_STACK_LINE(1799)
		if (((bool((del != null())) && bool(del->zpp_disp)))){
			HX_STACK_LINE(1799)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1799)
		{
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2 _this = del->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1799)
			if ((_this->_immutable)){
				HX_STACK_LINE(1799)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1799)
			if (((_this->_isimmutable_dyn() != null()))){
				HX_STACK_LINE(1799)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1799)
		if ((del->zpp_inner->_inuse)){
			HX_STACK_LINE(1799)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1799)
		::zpp_nape::geom::ZPP_Vec2 inner = del->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1799)
		del->zpp_inner->outer = null();
		HX_STACK_LINE(1799)
		del->zpp_inner = null();
		HX_STACK_LINE(1799)
		{
			HX_STACK_LINE(1799)
			::nape::geom::Vec2 o = del;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1799)
			{
			}
			HX_STACK_LINE(1799)
			o->zpp_pool = null();
			HX_STACK_LINE(1799)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1799)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1799)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1799)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1799)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1799)
		{
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1799)
			{
			}
			HX_STACK_LINE(1799)
			{
				HX_STACK_LINE(1799)
				if (((o->outer != null()))){
					HX_STACK_LINE(1799)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1799)
					o->outer = null();
				}
				HX_STACK_LINE(1799)
				o->_isimmutable = null();
				HX_STACK_LINE(1799)
				o->_validate = null();
				HX_STACK_LINE(1799)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1799)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1799)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1800)
	{
		HX_STACK_LINE(1800)
		::nape::phys::Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1800)
		{
			HX_STACK_LINE(1800)
			Float rotation = (_g->zpp_inner->rot + angle);		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(1800)
			{
				HX_STACK_LINE(1800)
				_g->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
				HX_STACK_LINE(1800)
				if ((_g->zpp_inner->world)){
					HX_STACK_LINE(1800)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(1800)
				if (((bool((_g->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((_g->zpp_inner->space != null()))))){
					HX_STACK_LINE(1800)
					hx::Throw (HX_CSTRING("Error: Static objects cannot be rotated once inside a Space"));
				}
				HX_STACK_LINE(1800)
				if (((_g->zpp_inner->rot != rotation))){
					HX_STACK_LINE(1800)
					if (((rotation != rotation))){
						HX_STACK_LINE(1800)
						hx::Throw (HX_CSTRING("Error: Body::rotation cannot be NaN"));
					}
					HX_STACK_LINE(1800)
					_g->zpp_inner->rot = rotation;
					HX_STACK_LINE(1800)
					{
						HX_STACK_LINE(1800)
						::zpp_nape::phys::ZPP_Body _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1800)
						_this->zip_axis = true;
						HX_STACK_LINE(1800)
						{
							HX_STACK_LINE(1800)
							::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(1800)
							while(((cx_ite != null()))){
								HX_STACK_LINE(1800)
								::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(1800)
								{
									HX_STACK_LINE(1800)
									if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
										HX_STACK_LINE(1800)
										s->polygon->invalidate_gverts();
										HX_STACK_LINE(1800)
										s->polygon->invalidate_gaxi();
									}
									HX_STACK_LINE(1800)
									s->invalidate_worldCOM();
								}
								HX_STACK_LINE(1800)
								cx_ite = cx_ite->next;
							}
						}
						HX_STACK_LINE(1800)
						_this->zip_worldCOM = true;
					}
					HX_STACK_LINE(1800)
					_g->zpp_inner->wake();
				}
			}
			HX_STACK_LINE(1800)
			_g->zpp_inner->rot;
		}
	}
	HX_STACK_LINE(1801)
	centre->zpp_inner->weak = weak;
	HX_STACK_LINE(1802)
	if ((centre->zpp_inner->weak)){
		HX_STACK_LINE(1806)
		{
			HX_STACK_LINE(1806)
			if (((bool((centre != null())) && bool(centre->zpp_disp)))){
				HX_STACK_LINE(1806)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1806)
			{
				HX_STACK_LINE(1806)
				::zpp_nape::geom::ZPP_Vec2 _this = centre->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1806)
				if ((_this->_immutable)){
					HX_STACK_LINE(1806)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1806)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(1806)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1806)
			if ((centre->zpp_inner->_inuse)){
				HX_STACK_LINE(1806)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1806)
			::zpp_nape::geom::ZPP_Vec2 inner = centre->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1806)
			centre->zpp_inner->outer = null();
			HX_STACK_LINE(1806)
			centre->zpp_inner = null();
			HX_STACK_LINE(1806)
			{
				HX_STACK_LINE(1806)
				::nape::geom::Vec2 o = centre;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1806)
				{
				}
				HX_STACK_LINE(1806)
				o->zpp_pool = null();
				HX_STACK_LINE(1806)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1806)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1806)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1806)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1806)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1806)
			{
				HX_STACK_LINE(1806)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1806)
				{
				}
				HX_STACK_LINE(1806)
				{
					HX_STACK_LINE(1806)
					if (((o->outer != null()))){
						HX_STACK_LINE(1806)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1806)
						o->outer = null();
					}
					HX_STACK_LINE(1806)
					o->_isimmutable = null();
					HX_STACK_LINE(1806)
					o->_validate = null();
					HX_STACK_LINE(1806)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1806)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1806)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1807)
		true;
	}
	else{
		HX_STACK_LINE(1809)
		false;
	}
	HX_STACK_LINE(1813)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,rotate,return )

::nape::phys::Body Body_obj::align( ){
	HX_STACK_PUSH("Body::align","nape/phys/Body.hx",1739);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1740)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::align()"));
	HX_STACK_LINE(1742)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1742)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1745)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1745)
		hx::Throw (HX_CSTRING("Error: Cannot align empty Body"));
	}
	HX_STACK_LINE(1747)
	this->zpp_inner->validate_localCOM();
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1748);
			{
				HX_STACK_LINE(1748)
				Float x = -(__this->zpp_inner->localCOMx);		HX_STACK_VAR(x,"x");
				Float y = -(__this->zpp_inner->localCOMy);		HX_STACK_VAR(y,"y");
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1748)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1748)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1748)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1748)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1748)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1748)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1748)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1748)
					ret->zpp_pool = null();
					HX_STACK_LINE(1748)
					ret->zpp_disp = false;
					HX_STACK_LINE(1748)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1748)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1748)
				if (((ret->zpp_inner == null()))){
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1748);
							{
								HX_STACK_LINE(1748)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(1748)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1748)
								{
									HX_STACK_LINE(1748)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(1748)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
									}
									else{
										HX_STACK_LINE(1748)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1748)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1748)
										ret1->next = null();
									}
									HX_STACK_LINE(1748)
									ret1->weak = false;
								}
								HX_STACK_LINE(1748)
								ret1->_immutable = immutable;
								HX_STACK_LINE(1748)
								{
									HX_STACK_LINE(1748)
									ret1->x = x;
									HX_STACK_LINE(1748)
									ret1->y = y;
									HX_STACK_LINE(1748)
									{
									}
									HX_STACK_LINE(1748)
									{
									}
								}
								HX_STACK_LINE(1748)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1748)
					ret->zpp_inner = _Function_3_1::Block(x,y);
					HX_STACK_LINE(1748)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1748)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1748)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1748)
					{
						HX_STACK_LINE(1748)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1748)
						if ((_this->_immutable)){
							HX_STACK_LINE(1748)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1748)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(1748)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1748)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1748)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1748);
							{
								HX_STACK_LINE(1748)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1748)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1748)
								{
									HX_STACK_LINE(1748)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1748)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1748)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1748)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1748);
							{
								HX_STACK_LINE(1748)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1748)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1748)
								{
									HX_STACK_LINE(1748)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1748)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1748)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1748)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1748)
					if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
						HX_STACK_LINE(1748)
						{
							HX_STACK_LINE(1748)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1748)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1748)
							{
							}
							HX_STACK_LINE(1748)
							{
							}
						}
						HX_STACK_LINE(1748)
						{
							HX_STACK_LINE(1748)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1748)
							if (((_this->_invalidate_dyn() != null()))){
								HX_STACK_LINE(1748)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1748)
					ret;
				}
				HX_STACK_LINE(1748)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1748)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1748)
	::nape::geom::Vec2 dx = _Function_1_1::Block(this);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(1749)
	this->translateShapes(dx);
	HX_STACK_LINE(1750)
	::nape::geom::Vec2 dx2 = this->localVectorToWorld(dx,null());		HX_STACK_VAR(dx2,"dx2");
	struct _Function_1_2{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1751);
			{
				HX_STACK_LINE(1751)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(1751)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(1751)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(1751)
	(_Function_1_2::Block(this))->subeq(dx2);
	HX_STACK_LINE(1752)
	if (((this->zpp_inner->pre_posx < ::Math_obj::POSITIVE_INFINITY))){
		HX_STACK_LINE(1753)
		Float t = 1.0;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1754)
		{
		}
		struct _Function_2_1{
			inline static Float Block( ::nape::geom::Vec2 &dx2){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1762);
				{
					HX_STACK_LINE(1762)
					if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
						HX_STACK_LINE(1762)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1762)
					{
						HX_STACK_LINE(1762)
						::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1762)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(1762)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1762)
					return dx2->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(1762)
		hx::SubEq(this->zpp_inner->pre_posx,(_Function_2_1::Block(dx2) * t));
		struct _Function_2_2{
			inline static Float Block( ::nape::geom::Vec2 &dx2){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1763);
				{
					HX_STACK_LINE(1763)
					if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
						HX_STACK_LINE(1763)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1763)
					{
						HX_STACK_LINE(1763)
						::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1763)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(1763)
							_this->_validate();
						}
					}
					HX_STACK_LINE(1763)
					return dx2->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(1763)
		hx::SubEq(this->zpp_inner->pre_posy,(_Function_2_2::Block(dx2) * t));
	}
	HX_STACK_LINE(1765)
	{
		HX_STACK_LINE(1765)
		if (((bool((dx != null())) && bool(dx->zpp_disp)))){
			HX_STACK_LINE(1765)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1765)
		{
			HX_STACK_LINE(1765)
			::zpp_nape::geom::ZPP_Vec2 _this = dx->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1765)
			if ((_this->_immutable)){
				HX_STACK_LINE(1765)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1765)
			if (((_this->_isimmutable_dyn() != null()))){
				HX_STACK_LINE(1765)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1765)
		if ((dx->zpp_inner->_inuse)){
			HX_STACK_LINE(1765)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1765)
		::zpp_nape::geom::ZPP_Vec2 inner = dx->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1765)
		dx->zpp_inner->outer = null();
		HX_STACK_LINE(1765)
		dx->zpp_inner = null();
		HX_STACK_LINE(1765)
		{
			HX_STACK_LINE(1765)
			::nape::geom::Vec2 o = dx;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1765)
			{
			}
			HX_STACK_LINE(1765)
			o->zpp_pool = null();
			HX_STACK_LINE(1765)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1765)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1765)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1765)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1765)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1765)
		{
			HX_STACK_LINE(1765)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1765)
			{
			}
			HX_STACK_LINE(1765)
			{
				HX_STACK_LINE(1765)
				if (((o->outer != null()))){
					HX_STACK_LINE(1765)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1765)
					o->outer = null();
				}
				HX_STACK_LINE(1765)
				o->_isimmutable = null();
				HX_STACK_LINE(1765)
				o->_validate = null();
				HX_STACK_LINE(1765)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1765)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1765)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1766)
	{
		HX_STACK_LINE(1766)
		if (((bool((dx2 != null())) && bool(dx2->zpp_disp)))){
			HX_STACK_LINE(1766)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1766)
		{
			HX_STACK_LINE(1766)
			::zpp_nape::geom::ZPP_Vec2 _this = dx2->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1766)
			if ((_this->_immutable)){
				HX_STACK_LINE(1766)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1766)
			if (((_this->_isimmutable_dyn() != null()))){
				HX_STACK_LINE(1766)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1766)
		if ((dx2->zpp_inner->_inuse)){
			HX_STACK_LINE(1766)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1766)
		::zpp_nape::geom::ZPP_Vec2 inner = dx2->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1766)
		dx2->zpp_inner->outer = null();
		HX_STACK_LINE(1766)
		dx2->zpp_inner = null();
		HX_STACK_LINE(1766)
		{
			HX_STACK_LINE(1766)
			::nape::geom::Vec2 o = dx2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1766)
			{
			}
			HX_STACK_LINE(1766)
			o->zpp_pool = null();
			HX_STACK_LINE(1766)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1766)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1766)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1766)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1766)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1766)
		{
			HX_STACK_LINE(1766)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1766)
			{
			}
			HX_STACK_LINE(1766)
			{
				HX_STACK_LINE(1766)
				if (((o->outer != null()))){
					HX_STACK_LINE(1766)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1766)
					o->outer = null();
				}
				HX_STACK_LINE(1766)
				o->_isimmutable = null();
				HX_STACK_LINE(1766)
				o->_validate = null();
				HX_STACK_LINE(1766)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1766)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1766)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1767)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,align,return )

::nape::phys::Body Body_obj::transformShapes( ::nape::geom::Mat23 matrix){
	HX_STACK_PUSH("Body::transformShapes","nape/phys/Body.hx",1708);
	HX_STACK_THIS(this);
	HX_STACK_ARG(matrix,"matrix");
	HX_STACK_LINE(1709)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::transformShapes()"));
	HX_STACK_LINE(1711)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1711)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1713)
	{
		HX_STACK_LINE(1714)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1715)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1716)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1717)
			s->outer->transform(matrix);
			HX_STACK_LINE(1718)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1721)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,transformShapes,return )

::nape::phys::Body Body_obj::scaleShapes( Float scaleX,Float scaleY){
	HX_STACK_PUSH("Body::scaleShapes","nape/phys/Body.hx",1679);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_LINE(1680)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::scaleShapes()"));
	HX_STACK_LINE(1682)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1682)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1684)
	{
		HX_STACK_LINE(1685)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1686)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1687)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1688)
			s->outer->scale(scaleX,scaleY);
			HX_STACK_LINE(1689)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1692)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,scaleShapes,return )

::nape::phys::Body Body_obj::rotateShapes( Float angle){
	HX_STACK_PUSH("Body::rotateShapes","nape/phys/Body.hx",1651);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_LINE(1652)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotateShapes()"));
	HX_STACK_LINE(1654)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1654)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1656)
	{
		HX_STACK_LINE(1657)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1658)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1659)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1660)
			s->outer->rotate(angle);
			HX_STACK_LINE(1661)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1664)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,rotateShapes,return )

::nape::phys::Body Body_obj::translateShapes( ::nape::geom::Vec2 translation){
	HX_STACK_PUSH("Body::translateShapes","nape/phys/Body.hx",1603);
	HX_STACK_THIS(this);
	HX_STACK_ARG(translation,"translation");
	HX_STACK_LINE(1604)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::translateShapes()"));
	HX_STACK_LINE(1605)
	if (((bool((translation != null())) && bool(translation->zpp_disp)))){
		HX_STACK_LINE(1607)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(1611)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1611)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(1614)
	if (((translation == null()))){
		HX_STACK_LINE(1614)
		hx::Throw (HX_CSTRING("Error: Cannot displace by null Vec2"));
	}
	HX_STACK_LINE(1616)
	bool weak = translation->zpp_inner->weak;		HX_STACK_VAR(weak,"weak");
	HX_STACK_LINE(1617)
	translation->zpp_inner->weak = false;
	HX_STACK_LINE(1618)
	{
		HX_STACK_LINE(1619)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->zpp_inner->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1620)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1621)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1622)
			s->outer->translate(translation);
			HX_STACK_LINE(1623)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1626)
	translation->zpp_inner->weak = weak;
	HX_STACK_LINE(1627)
	if ((translation->zpp_inner->weak)){
		HX_STACK_LINE(1631)
		{
			HX_STACK_LINE(1631)
			if (((bool((translation != null())) && bool(translation->zpp_disp)))){
				HX_STACK_LINE(1631)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(1631)
			{
				HX_STACK_LINE(1631)
				::zpp_nape::geom::ZPP_Vec2 _this = translation->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1631)
				if ((_this->_immutable)){
					HX_STACK_LINE(1631)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(1631)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(1631)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(1631)
			if ((translation->zpp_inner->_inuse)){
				HX_STACK_LINE(1631)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(1631)
			::zpp_nape::geom::ZPP_Vec2 inner = translation->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(1631)
			translation->zpp_inner->outer = null();
			HX_STACK_LINE(1631)
			translation->zpp_inner = null();
			HX_STACK_LINE(1631)
			{
				HX_STACK_LINE(1631)
				::nape::geom::Vec2 o = translation;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1631)
				{
				}
				HX_STACK_LINE(1631)
				o->zpp_pool = null();
				HX_STACK_LINE(1631)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(1631)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(1631)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(1631)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(1631)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(1631)
			{
				HX_STACK_LINE(1631)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1631)
				{
				}
				HX_STACK_LINE(1631)
				{
					HX_STACK_LINE(1631)
					if (((o->outer != null()))){
						HX_STACK_LINE(1631)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(1631)
						o->outer = null();
					}
					HX_STACK_LINE(1631)
					o->_isimmutable = null();
					HX_STACK_LINE(1631)
					o->_validate = null();
					HX_STACK_LINE(1631)
					o->_invalidate = null();
				}
				HX_STACK_LINE(1631)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(1631)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(1632)
		true;
	}
	else{
		HX_STACK_LINE(1634)
		false;
	}
	HX_STACK_LINE(1638)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,translateShapes,return )

::nape::phys::Body Body_obj::applyAngularImpulse( Float impulse,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_PUSH("Body::applyAngularImpulse","nape/phys/Body.hx",1577);
	HX_STACK_THIS(this);
	HX_STACK_ARG(impulse,"impulse");
	HX_STACK_ARG(sleepable,"sleepable");
{
		HX_STACK_LINE(1579)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1579)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		struct _Function_1_1{
			inline static bool Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1581);
				{
					HX_STACK_LINE(1581)
					if (((__this->zpp_inner->space == null()))){
						HX_STACK_LINE(1581)
						hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
					}
					HX_STACK_LINE(1581)
					return __this->zpp_inner->component->sleeping;
				}
				return null();
			}
		};
		HX_STACK_LINE(1581)
		if (((bool(sleepable) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(1581)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1584)
		this->zpp_inner->validate_inertia();
		HX_STACK_LINE(1585)
		hx::AddEq(this->zpp_inner->angvel,(impulse * this->zpp_inner->iinertia));
		HX_STACK_LINE(1586)
		if ((!(sleepable))){
			HX_STACK_LINE(1586)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1587)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1589)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,applyAngularImpulse,return )

::nape::phys::Body Body_obj::applyImpulse( ::nape::geom::Vec2 impulse,::nape::geom::Vec2 pos,hx::Null< bool >  __o_sleepable){
bool sleepable = __o_sleepable.Default(false);
	HX_STACK_PUSH("Body::applyImpulse","nape/phys/Body.hx",1481);
	HX_STACK_THIS(this);
	HX_STACK_ARG(impulse,"impulse");
	HX_STACK_ARG(pos,"pos");
	HX_STACK_ARG(sleepable,"sleepable");
{
		HX_STACK_LINE(1482)
		if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
			HX_STACK_LINE(1484)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1487)
		if (((bool((pos != null())) && bool(pos->zpp_disp)))){
			HX_STACK_LINE(1489)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1493)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1493)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1496)
		if (((impulse == null()))){
			HX_STACK_LINE(1496)
			hx::Throw (HX_CSTRING("Error: Cannot apply null impulse to Body"));
		}
		struct _Function_1_1{
			inline static bool Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1498);
				{
					HX_STACK_LINE(1498)
					if (((__this->zpp_inner->space == null()))){
						HX_STACK_LINE(1498)
						hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
					}
					HX_STACK_LINE(1498)
					return __this->zpp_inner->component->sleeping;
				}
				return null();
			}
		};
		HX_STACK_LINE(1498)
		if (((bool(sleepable) && bool(_Function_1_1::Block(this))))){
			HX_STACK_LINE(1499)
			if ((impulse->zpp_inner->weak)){
				HX_STACK_LINE(1503)
				{
					HX_STACK_LINE(1503)
					if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
						HX_STACK_LINE(1503)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1503)
					{
						HX_STACK_LINE(1503)
						::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1503)
						if ((_this->_immutable)){
							HX_STACK_LINE(1503)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1503)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(1503)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1503)
					if ((impulse->zpp_inner->_inuse)){
						HX_STACK_LINE(1503)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(1503)
					::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1503)
					impulse->zpp_inner->outer = null();
					HX_STACK_LINE(1503)
					impulse->zpp_inner = null();
					HX_STACK_LINE(1503)
					{
						HX_STACK_LINE(1503)
						::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1503)
						{
						}
						HX_STACK_LINE(1503)
						o->zpp_pool = null();
						HX_STACK_LINE(1503)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(1503)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1503)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1503)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1503)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1503)
					{
						HX_STACK_LINE(1503)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1503)
						{
						}
						HX_STACK_LINE(1503)
						{
							HX_STACK_LINE(1503)
							if (((o->outer != null()))){
								HX_STACK_LINE(1503)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1503)
								o->outer = null();
							}
							HX_STACK_LINE(1503)
							o->_isimmutable = null();
							HX_STACK_LINE(1503)
							o->_validate = null();
							HX_STACK_LINE(1503)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1503)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1503)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1504)
				true;
			}
			else{
				HX_STACK_LINE(1506)
				false;
			}
			HX_STACK_LINE(1510)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(1512)
		this->zpp_inner->validate_mass();
		HX_STACK_LINE(1513)
		{
			HX_STACK_LINE(1514)
			Float t = this->zpp_inner->imass;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1515)
			{
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1523);
					{
						HX_STACK_LINE(1523)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1523)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1523)
						{
							HX_STACK_LINE(1523)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1523)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1523)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1523)
						return impulse->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1523)
			hx::AddEq(this->zpp_inner->velx,(_Function_2_1::Block(impulse) * t));
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1524);
					{
						HX_STACK_LINE(1524)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1524)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1524)
						{
							HX_STACK_LINE(1524)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1524)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1524)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1524)
						return impulse->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1524)
			hx::AddEq(this->zpp_inner->vely,(_Function_2_2::Block(impulse) * t));
		}
		HX_STACK_LINE(1526)
		if (((pos != null()))){
			HX_STACK_LINE(1527)
			Float rx = 0.0;		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1528)
			Float ry = 0.0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1529)
			{
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &pos){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1530);
						{
							HX_STACK_LINE(1530)
							if (((bool((pos != null())) && bool(pos->zpp_disp)))){
								HX_STACK_LINE(1530)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1530)
							{
								HX_STACK_LINE(1530)
								::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1530)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1530)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1530)
							return pos->zpp_inner->x;
						}
						return null();
					}
				};
				HX_STACK_LINE(1530)
				rx = (_Function_3_1::Block(pos) - this->zpp_inner->posx);
				struct _Function_3_2{
					inline static Float Block( ::nape::geom::Vec2 &pos){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1531);
						{
							HX_STACK_LINE(1531)
							if (((bool((pos != null())) && bool(pos->zpp_disp)))){
								HX_STACK_LINE(1531)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1531)
							{
								HX_STACK_LINE(1531)
								::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1531)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1531)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1531)
							return pos->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1531)
				ry = (_Function_3_2::Block(pos) - this->zpp_inner->posy);
			}
			HX_STACK_LINE(1533)
			this->zpp_inner->validate_inertia();
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1534);
					{
						HX_STACK_LINE(1534)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1534)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1534)
						{
							HX_STACK_LINE(1534)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1534)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1534)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1534)
						return impulse->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &impulse){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1534);
					{
						HX_STACK_LINE(1534)
						if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
							HX_STACK_LINE(1534)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1534)
						{
							HX_STACK_LINE(1534)
							::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1534)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1534)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1534)
						return impulse->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1534)
			hx::AddEq(this->zpp_inner->angvel,((((_Function_2_1::Block(impulse) * rx) - (_Function_2_2::Block(impulse) * ry))) * this->zpp_inner->iinertia));
			HX_STACK_LINE(1535)
			if ((pos->zpp_inner->weak)){
				HX_STACK_LINE(1539)
				{
					HX_STACK_LINE(1539)
					if (((bool((pos != null())) && bool(pos->zpp_disp)))){
						HX_STACK_LINE(1539)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1539)
					{
						HX_STACK_LINE(1539)
						::zpp_nape::geom::ZPP_Vec2 _this = pos->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1539)
						if ((_this->_immutable)){
							HX_STACK_LINE(1539)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1539)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(1539)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1539)
					if ((pos->zpp_inner->_inuse)){
						HX_STACK_LINE(1539)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(1539)
					::zpp_nape::geom::ZPP_Vec2 inner = pos->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(1539)
					pos->zpp_inner->outer = null();
					HX_STACK_LINE(1539)
					pos->zpp_inner = null();
					HX_STACK_LINE(1539)
					{
						HX_STACK_LINE(1539)
						::nape::geom::Vec2 o = pos;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1539)
						{
						}
						HX_STACK_LINE(1539)
						o->zpp_pool = null();
						HX_STACK_LINE(1539)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(1539)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(1539)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(1539)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(1539)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(1539)
					{
						HX_STACK_LINE(1539)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(1539)
						{
						}
						HX_STACK_LINE(1539)
						{
							HX_STACK_LINE(1539)
							if (((o->outer != null()))){
								HX_STACK_LINE(1539)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(1539)
								o->outer = null();
							}
							HX_STACK_LINE(1539)
							o->_isimmutable = null();
							HX_STACK_LINE(1539)
							o->_validate = null();
							HX_STACK_LINE(1539)
							o->_invalidate = null();
						}
						HX_STACK_LINE(1539)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(1539)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(1540)
				true;
			}
			else{
				HX_STACK_LINE(1542)
				false;
			}
		}
		HX_STACK_LINE(1547)
		if ((!(sleepable))){
			HX_STACK_LINE(1547)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
				HX_STACK_LINE(1548)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(1550)
		if ((impulse->zpp_inner->weak)){
			HX_STACK_LINE(1554)
			{
				HX_STACK_LINE(1554)
				if (((bool((impulse != null())) && bool(impulse->zpp_disp)))){
					HX_STACK_LINE(1554)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1554)
				{
					HX_STACK_LINE(1554)
					::zpp_nape::geom::ZPP_Vec2 _this = impulse->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1554)
					if ((_this->_immutable)){
						HX_STACK_LINE(1554)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1554)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1554)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1554)
				if ((impulse->zpp_inner->_inuse)){
					HX_STACK_LINE(1554)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1554)
				::zpp_nape::geom::ZPP_Vec2 inner = impulse->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1554)
				impulse->zpp_inner->outer = null();
				HX_STACK_LINE(1554)
				impulse->zpp_inner = null();
				HX_STACK_LINE(1554)
				{
					HX_STACK_LINE(1554)
					::nape::geom::Vec2 o = impulse;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1554)
					{
					}
					HX_STACK_LINE(1554)
					o->zpp_pool = null();
					HX_STACK_LINE(1554)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1554)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1554)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1554)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1554)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1554)
				{
					HX_STACK_LINE(1554)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1554)
					{
					}
					HX_STACK_LINE(1554)
					{
						HX_STACK_LINE(1554)
						if (((o->outer != null()))){
							HX_STACK_LINE(1554)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1554)
							o->outer = null();
						}
						HX_STACK_LINE(1554)
						o->_isimmutable = null();
						HX_STACK_LINE(1554)
						o->_validate = null();
						HX_STACK_LINE(1554)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1554)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1554)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1555)
			true;
		}
		else{
			HX_STACK_LINE(1557)
			false;
		}
		HX_STACK_LINE(1561)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,applyImpulse,return )

::nape::geom::Vec2 Body_obj::worldVectorToLocal( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::worldVectorToLocal","nape/phys/Body.hx",1431);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1432)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1434)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1438)
		if (((vector == null()))){
			HX_STACK_LINE(1438)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1440)
		{
			HX_STACK_LINE(1440)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1440)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1440)
				_this->zip_axis = false;
				HX_STACK_LINE(1440)
				{
					HX_STACK_LINE(1440)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1440)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1440)
					{
					}
					HX_STACK_LINE(1440)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1441)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1442)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1443)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1444);
					{
						HX_STACK_LINE(1444)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1444)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1444)
						{
							HX_STACK_LINE(1444)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1444)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1444)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1444)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1444);
					{
						HX_STACK_LINE(1444)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1444)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1444)
						{
							HX_STACK_LINE(1444)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1444)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1444)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1444)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1444)
			tempx = ((_Function_2_1::Block(vector) * this->zpp_inner->axisy) + (_Function_2_2::Block(vector) * this->zpp_inner->axisx));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1445);
					{
						HX_STACK_LINE(1445)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1445)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1445)
						{
							HX_STACK_LINE(1445)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1445)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1445)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1445)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1445);
					{
						HX_STACK_LINE(1445)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1445)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1445)
						{
							HX_STACK_LINE(1445)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1445)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1445)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1445)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1445)
			tempy = ((_Function_2_3::Block(vector) * this->zpp_inner->axisy) - (_Function_2_4::Block(vector) * this->zpp_inner->axisx));
		}
		HX_STACK_LINE(1447)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1451)
			{
				HX_STACK_LINE(1451)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1451)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1451)
				{
					HX_STACK_LINE(1451)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1451)
					if ((_this->_immutable)){
						HX_STACK_LINE(1451)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1451)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1451)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1451)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1451)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1451)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1451)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1451)
				vector->zpp_inner = null();
				HX_STACK_LINE(1451)
				{
					HX_STACK_LINE(1451)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1451)
					{
					}
					HX_STACK_LINE(1451)
					o->zpp_pool = null();
					HX_STACK_LINE(1451)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1451)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1451)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1451)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1451)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1451)
				{
					HX_STACK_LINE(1451)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1451)
					{
					}
					HX_STACK_LINE(1451)
					{
						HX_STACK_LINE(1451)
						if (((o->outer != null()))){
							HX_STACK_LINE(1451)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1451)
							o->outer = null();
						}
						HX_STACK_LINE(1451)
						o->_isimmutable = null();
						HX_STACK_LINE(1451)
						o->_validate = null();
						HX_STACK_LINE(1451)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1451)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1451)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1452)
			true;
		}
		else{
			HX_STACK_LINE(1454)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,bool &weak,Float &tempx){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1458);
				{
					HX_STACK_LINE(1458)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1458)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1458)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1458)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1458)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1458)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1458)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1458)
						ret->zpp_pool = null();
						HX_STACK_LINE(1458)
						ret->zpp_disp = false;
						HX_STACK_LINE(1458)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1458)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1458)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempx,Float &tempy){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1458);
								{
									HX_STACK_LINE(1458)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1458)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1458)
									{
										HX_STACK_LINE(1458)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1458)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1458)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1458)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1458)
											ret1->next = null();
										}
										HX_STACK_LINE(1458)
										ret1->weak = false;
									}
									HX_STACK_LINE(1458)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1458)
									{
										HX_STACK_LINE(1458)
										ret1->x = tempx;
										HX_STACK_LINE(1458)
										ret1->y = tempy;
										HX_STACK_LINE(1458)
										{
										}
										HX_STACK_LINE(1458)
										{
										}
									}
									HX_STACK_LINE(1458)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1458)
						ret->zpp_inner = _Function_3_1::Block(tempx,tempy);
						HX_STACK_LINE(1458)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1458)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1458)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1458)
						{
							HX_STACK_LINE(1458)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1458)
							if ((_this->_immutable)){
								HX_STACK_LINE(1458)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1458)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1458)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1458)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1458)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1458);
								{
									HX_STACK_LINE(1458)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1458)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1458)
									{
										HX_STACK_LINE(1458)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1458)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1458)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1458)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1458);
								{
									HX_STACK_LINE(1458)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1458)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1458)
									{
										HX_STACK_LINE(1458)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1458)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1458)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1458)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1458)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1458)
							{
								HX_STACK_LINE(1458)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1458)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1458)
								{
								}
								HX_STACK_LINE(1458)
								{
								}
							}
							HX_STACK_LINE(1458)
							{
								HX_STACK_LINE(1458)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1458)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1458)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1458)
						ret;
					}
					HX_STACK_LINE(1458)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1458)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1458)
		return _Function_1_1::Block(tempy,weak,tempx);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldVectorToLocal,return )

::nape::geom::Vec2 Body_obj::localVectorToWorld( ::nape::geom::Vec2 vector,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::localVectorToWorld","nape/phys/Body.hx",1390);
	HX_STACK_THIS(this);
	HX_STACK_ARG(vector,"vector");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1391)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(1393)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1397)
		if (((vector == null()))){
			HX_STACK_LINE(1397)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1399)
		{
			HX_STACK_LINE(1399)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1399)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1399)
				_this->zip_axis = false;
				HX_STACK_LINE(1399)
				{
					HX_STACK_LINE(1399)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1399)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1399)
					{
					}
					HX_STACK_LINE(1399)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1400)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1401)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1402)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1403);
					{
						HX_STACK_LINE(1403)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1403)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1403)
						{
							HX_STACK_LINE(1403)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1403)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1403)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1403)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1403);
					{
						HX_STACK_LINE(1403)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1403)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1403)
						{
							HX_STACK_LINE(1403)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1403)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1403)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1403)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1403)
			tempx = ((this->zpp_inner->axisy * _Function_2_1::Block(vector)) - (this->zpp_inner->axisx * _Function_2_2::Block(vector)));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1404);
					{
						HX_STACK_LINE(1404)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1404)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1404)
						{
							HX_STACK_LINE(1404)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1404)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1404)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1404)
						return vector->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &vector){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1404);
					{
						HX_STACK_LINE(1404)
						if (((bool((vector != null())) && bool(vector->zpp_disp)))){
							HX_STACK_LINE(1404)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1404)
						{
							HX_STACK_LINE(1404)
							::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1404)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1404)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1404)
						return vector->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1404)
			tempy = ((_Function_2_3::Block(vector) * this->zpp_inner->axisx) + (_Function_2_4::Block(vector) * this->zpp_inner->axisy));
		}
		HX_STACK_LINE(1406)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(1410)
			{
				HX_STACK_LINE(1410)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(1410)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1410)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::geom::ZPP_Vec2 _this = vector->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1410)
					if ((_this->_immutable)){
						HX_STACK_LINE(1410)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1410)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1410)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1410)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(1410)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1410)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1410)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(1410)
				vector->zpp_inner = null();
				HX_STACK_LINE(1410)
				{
					HX_STACK_LINE(1410)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1410)
					{
					}
					HX_STACK_LINE(1410)
					o->zpp_pool = null();
					HX_STACK_LINE(1410)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1410)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1410)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1410)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1410)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1410)
				{
					HX_STACK_LINE(1410)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1410)
					{
					}
					HX_STACK_LINE(1410)
					{
						HX_STACK_LINE(1410)
						if (((o->outer != null()))){
							HX_STACK_LINE(1410)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1410)
							o->outer = null();
						}
						HX_STACK_LINE(1410)
						o->_isimmutable = null();
						HX_STACK_LINE(1410)
						o->_validate = null();
						HX_STACK_LINE(1410)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1410)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1410)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1411)
			true;
		}
		else{
			HX_STACK_LINE(1413)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,bool &weak,Float &tempx){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1417);
				{
					HX_STACK_LINE(1417)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1417)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1417)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1417)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1417)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1417)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1417)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1417)
						ret->zpp_pool = null();
						HX_STACK_LINE(1417)
						ret->zpp_disp = false;
						HX_STACK_LINE(1417)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1417)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1417)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempx,Float &tempy){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1417);
								{
									HX_STACK_LINE(1417)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1417)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1417)
									{
										HX_STACK_LINE(1417)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1417)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1417)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1417)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1417)
											ret1->next = null();
										}
										HX_STACK_LINE(1417)
										ret1->weak = false;
									}
									HX_STACK_LINE(1417)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1417)
									{
										HX_STACK_LINE(1417)
										ret1->x = tempx;
										HX_STACK_LINE(1417)
										ret1->y = tempy;
										HX_STACK_LINE(1417)
										{
										}
										HX_STACK_LINE(1417)
										{
										}
									}
									HX_STACK_LINE(1417)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1417)
						ret->zpp_inner = _Function_3_1::Block(tempx,tempy);
						HX_STACK_LINE(1417)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1417)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1417)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1417)
						{
							HX_STACK_LINE(1417)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1417)
							if ((_this->_immutable)){
								HX_STACK_LINE(1417)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1417)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1417)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1417)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1417)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1417);
								{
									HX_STACK_LINE(1417)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1417)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1417)
									{
										HX_STACK_LINE(1417)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1417)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1417)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1417)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1417);
								{
									HX_STACK_LINE(1417)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1417)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1417)
									{
										HX_STACK_LINE(1417)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1417)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1417)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1417)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1417)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1417)
							{
								HX_STACK_LINE(1417)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1417)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1417)
								{
								}
								HX_STACK_LINE(1417)
								{
								}
							}
							HX_STACK_LINE(1417)
							{
								HX_STACK_LINE(1417)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1417)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1417)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1417)
						ret;
					}
					HX_STACK_LINE(1417)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1417)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1417)
		return _Function_1_1::Block(tempy,weak,tempx);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localVectorToWorld,return )

::nape::geom::Vec2 Body_obj::worldPointToLocal( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::worldPointToLocal","nape/phys/Body.hx",1343);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1344)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(1346)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1350)
		if (((point == null()))){
			HX_STACK_LINE(1350)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1352)
		{
			HX_STACK_LINE(1352)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1352)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1352)
				_this->zip_axis = false;
				HX_STACK_LINE(1352)
				{
					HX_STACK_LINE(1352)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1352)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1352)
					{
					}
					HX_STACK_LINE(1352)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1353)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1354)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1355)
		Float pointx = 0.0;		HX_STACK_VAR(pointx,"pointx");
		HX_STACK_LINE(1356)
		Float pointy = 0.0;		HX_STACK_VAR(pointy,"pointy");
		HX_STACK_LINE(1357)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1358);
					{
						HX_STACK_LINE(1358)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1358)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1358)
						{
							HX_STACK_LINE(1358)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1358)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1358)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1358)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1358)
			pointx = (_Function_2_1::Block(point) - this->zpp_inner->posx);
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1359);
					{
						HX_STACK_LINE(1359)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1359)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1359)
						{
							HX_STACK_LINE(1359)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1359)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1359)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1359)
			pointy = (_Function_2_2::Block(point) - this->zpp_inner->posy);
		}
		HX_STACK_LINE(1361)
		{
			HX_STACK_LINE(1362)
			tempx = ((pointx * this->zpp_inner->axisy) + (pointy * this->zpp_inner->axisx));
			HX_STACK_LINE(1363)
			tempy = ((pointy * this->zpp_inner->axisy) - (pointx * this->zpp_inner->axisx));
		}
		HX_STACK_LINE(1365)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1369)
			{
				HX_STACK_LINE(1369)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(1369)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1369)
				{
					HX_STACK_LINE(1369)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1369)
					if ((_this->_immutable)){
						HX_STACK_LINE(1369)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1369)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1369)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1369)
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(1369)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1369)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1369)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1369)
				point->zpp_inner = null();
				HX_STACK_LINE(1369)
				{
					HX_STACK_LINE(1369)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1369)
					{
					}
					HX_STACK_LINE(1369)
					o->zpp_pool = null();
					HX_STACK_LINE(1369)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1369)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1369)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1369)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1369)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1369)
				{
					HX_STACK_LINE(1369)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1369)
					{
					}
					HX_STACK_LINE(1369)
					{
						HX_STACK_LINE(1369)
						if (((o->outer != null()))){
							HX_STACK_LINE(1369)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1369)
							o->outer = null();
						}
						HX_STACK_LINE(1369)
						o->_isimmutable = null();
						HX_STACK_LINE(1369)
						o->_validate = null();
						HX_STACK_LINE(1369)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1369)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1369)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1370)
			true;
		}
		else{
			HX_STACK_LINE(1372)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( Float &tempy,bool &weak,Float &tempx){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1376);
				{
					HX_STACK_LINE(1376)
					if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
						HX_STACK_LINE(1376)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1376)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1376)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1376)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1376)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1376)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1376)
						ret->zpp_pool = null();
						HX_STACK_LINE(1376)
						ret->zpp_disp = false;
						HX_STACK_LINE(1376)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1376)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1376)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &tempx,Float &tempy){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1376);
								{
									HX_STACK_LINE(1376)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1376)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1376)
									{
										HX_STACK_LINE(1376)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1376)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1376)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1376)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1376)
											ret1->next = null();
										}
										HX_STACK_LINE(1376)
										ret1->weak = false;
									}
									HX_STACK_LINE(1376)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1376)
									{
										HX_STACK_LINE(1376)
										ret1->x = tempx;
										HX_STACK_LINE(1376)
										ret1->y = tempy;
										HX_STACK_LINE(1376)
										{
										}
										HX_STACK_LINE(1376)
										{
										}
									}
									HX_STACK_LINE(1376)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1376)
						ret->zpp_inner = _Function_3_1::Block(tempx,tempy);
						HX_STACK_LINE(1376)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1376)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1376)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1376)
						{
							HX_STACK_LINE(1376)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1376)
							if ((_this->_immutable)){
								HX_STACK_LINE(1376)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1376)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1376)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1376)
						if (((bool((tempx != tempx)) || bool((tempy != tempy))))){
							HX_STACK_LINE(1376)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1376);
								{
									HX_STACK_LINE(1376)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1376)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1376)
									{
										HX_STACK_LINE(1376)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1376)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1376)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1376)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1376);
								{
									HX_STACK_LINE(1376)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1376)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1376)
									{
										HX_STACK_LINE(1376)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1376)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1376)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1376)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1376)
						if ((!(((bool((_Function_3_1::Block(ret) == tempx)) && bool((_Function_3_2::Block(ret) == tempy))))))){
							HX_STACK_LINE(1376)
							{
								HX_STACK_LINE(1376)
								ret->zpp_inner->x = tempx;
								HX_STACK_LINE(1376)
								ret->zpp_inner->y = tempy;
								HX_STACK_LINE(1376)
								{
								}
								HX_STACK_LINE(1376)
								{
								}
							}
							HX_STACK_LINE(1376)
							{
								HX_STACK_LINE(1376)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1376)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1376)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1376)
						ret;
					}
					HX_STACK_LINE(1376)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1376)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1376)
		return _Function_1_1::Block(tempy,weak,tempx);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,worldPointToLocal,return )

::nape::geom::Vec2 Body_obj::localPointToWorld( ::nape::geom::Vec2 point,hx::Null< bool >  __o_weak){
bool weak = __o_weak.Default(false);
	HX_STACK_PUSH("Body::localPointToWorld","nape/phys/Body.hx",1303);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_ARG(weak,"weak");
{
		HX_STACK_LINE(1304)
		if (((bool((point != null())) && bool(point->zpp_disp)))){
			HX_STACK_LINE(1306)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1310)
		if (((point == null()))){
			HX_STACK_LINE(1310)
			hx::Throw (HX_CSTRING("Error: Cannot transform null Vec2"));
		}
		HX_STACK_LINE(1312)
		{
			HX_STACK_LINE(1312)
			::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1312)
			if ((_this->zip_axis)){
				HX_STACK_LINE(1312)
				_this->zip_axis = false;
				HX_STACK_LINE(1312)
				{
					HX_STACK_LINE(1312)
					_this->axisx = ::Math_obj::sin(_this->rot);
					HX_STACK_LINE(1312)
					_this->axisy = ::Math_obj::cos(_this->rot);
					HX_STACK_LINE(1312)
					{
					}
					HX_STACK_LINE(1312)
					Dynamic();
				}
			}
		}
		HX_STACK_LINE(1313)
		Float tempx = 0.0;		HX_STACK_VAR(tempx,"tempx");
		HX_STACK_LINE(1314)
		Float tempy = 0.0;		HX_STACK_VAR(tempy,"tempy");
		HX_STACK_LINE(1315)
		{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1316);
					{
						HX_STACK_LINE(1316)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1316)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1316)
						{
							HX_STACK_LINE(1316)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1316)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1316)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1316)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1316);
					{
						HX_STACK_LINE(1316)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1316)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1316)
						{
							HX_STACK_LINE(1316)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1316)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1316)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1316)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1316)
			tempx = ((this->zpp_inner->axisy * _Function_2_1::Block(point)) - (this->zpp_inner->axisx * _Function_2_2::Block(point)));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1317);
					{
						HX_STACK_LINE(1317)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1317)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1317)
						{
							HX_STACK_LINE(1317)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1317)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1317)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1317)
						return point->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &point){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1317);
					{
						HX_STACK_LINE(1317)
						if (((bool((point != null())) && bool(point->zpp_disp)))){
							HX_STACK_LINE(1317)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1317)
						{
							HX_STACK_LINE(1317)
							::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1317)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1317)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1317)
						return point->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1317)
			tempy = ((_Function_2_3::Block(point) * this->zpp_inner->axisx) + (_Function_2_4::Block(point) * this->zpp_inner->axisy));
		}
		HX_STACK_LINE(1319)
		if ((point->zpp_inner->weak)){
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				if (((bool((point != null())) && bool(point->zpp_disp)))){
					HX_STACK_LINE(1323)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_Vec2 _this = point->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1323)
					if ((_this->_immutable)){
						HX_STACK_LINE(1323)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1323)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1323)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1323)
				if ((point->zpp_inner->_inuse)){
					HX_STACK_LINE(1323)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1323)
				::zpp_nape::geom::ZPP_Vec2 inner = point->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1323)
				point->zpp_inner->outer = null();
				HX_STACK_LINE(1323)
				point->zpp_inner = null();
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					::nape::geom::Vec2 o = point;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1323)
					{
					}
					HX_STACK_LINE(1323)
					o->zpp_pool = null();
					HX_STACK_LINE(1323)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1323)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1323)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1323)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1323)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1323)
				{
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1323)
					{
					}
					HX_STACK_LINE(1323)
					{
						HX_STACK_LINE(1323)
						if (((o->outer != null()))){
							HX_STACK_LINE(1323)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1323)
							o->outer = null();
						}
						HX_STACK_LINE(1323)
						o->_isimmutable = null();
						HX_STACK_LINE(1323)
						o->_validate = null();
						HX_STACK_LINE(1323)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1323)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1323)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1324)
			true;
		}
		else{
			HX_STACK_LINE(1326)
			false;
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this,Float &tempy,bool &weak,Float &tempx){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1330);
				{
					HX_STACK_LINE(1330)
					Float x = (tempx + __this->zpp_inner->posx);		HX_STACK_VAR(x,"x");
					Float y = (tempy + __this->zpp_inner->posy);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1330)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1330)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(1330)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(1330)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(1330)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(1330)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(1330)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(1330)
						ret->zpp_pool = null();
						HX_STACK_LINE(1330)
						ret->zpp_disp = false;
						HX_STACK_LINE(1330)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(1330)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(1330)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1330);
								{
									HX_STACK_LINE(1330)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(1330)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1330)
									{
										HX_STACK_LINE(1330)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(1330)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(1330)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1330)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(1330)
											ret1->next = null();
										}
										HX_STACK_LINE(1330)
										ret1->weak = false;
									}
									HX_STACK_LINE(1330)
									ret1->_immutable = immutable;
									HX_STACK_LINE(1330)
									{
										HX_STACK_LINE(1330)
										ret1->x = x;
										HX_STACK_LINE(1330)
										ret1->y = y;
										HX_STACK_LINE(1330)
										{
										}
										HX_STACK_LINE(1330)
										{
										}
									}
									HX_STACK_LINE(1330)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(1330)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(1330)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(1330)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(1330)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1330)
						{
							HX_STACK_LINE(1330)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1330)
							if ((_this->_immutable)){
								HX_STACK_LINE(1330)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(1330)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(1330)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(1330)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1330)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1330);
								{
									HX_STACK_LINE(1330)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1330)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1330)
									{
										HX_STACK_LINE(1330)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1330)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1330)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1330)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1330);
								{
									HX_STACK_LINE(1330)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(1330)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1330)
									{
										HX_STACK_LINE(1330)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1330)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1330)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1330)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1330)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(1330)
							{
								HX_STACK_LINE(1330)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(1330)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(1330)
								{
								}
								HX_STACK_LINE(1330)
								{
								}
							}
							HX_STACK_LINE(1330)
							{
								HX_STACK_LINE(1330)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1330)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(1330)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(1330)
						ret;
					}
					HX_STACK_LINE(1330)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(1330)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(1330)
		return _Function_1_1::Block(this,tempy,weak,tempx);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,localPointToWorld,return )

Float Body_obj::crushFactor( ){
	HX_STACK_PUSH("Body::crushFactor","nape/phys/Body.hx",1266);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1268)
	if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) == null()))){
		HX_STACK_LINE(1268)
		hx::Throw (HX_CSTRING("Error: Makes no sense to see how much an object not taking part in a simulation is being crushed"));
	}
	HX_STACK_LINE(1270)
	Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1271);
			{
				HX_STACK_LINE(1271)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				bool weak = false;		HX_STACK_VAR(weak,"weak");
				HX_STACK_LINE(1271)
				if (((bool((x != x)) || bool((y != y))))){
					HX_STACK_LINE(1271)
					hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
				}
				HX_STACK_LINE(1271)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1271)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(1271)
					ret = ::nape::geom::Vec2_obj::__new(null(),null());
				}
				else{
					HX_STACK_LINE(1271)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(1271)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(1271)
					ret->zpp_pool = null();
					HX_STACK_LINE(1271)
					ret->zpp_disp = false;
					HX_STACK_LINE(1271)
					if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
						HX_STACK_LINE(1271)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
					}
				}
				HX_STACK_LINE(1271)
				if (((ret->zpp_inner == null()))){
					struct _Function_3_1{
						inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1271);
							{
								HX_STACK_LINE(1271)
								bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
								HX_STACK_LINE(1271)
								::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
								HX_STACK_LINE(1271)
								{
									HX_STACK_LINE(1271)
									if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
										HX_STACK_LINE(1271)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
									}
									else{
										HX_STACK_LINE(1271)
										ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1271)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
										HX_STACK_LINE(1271)
										ret1->next = null();
									}
									HX_STACK_LINE(1271)
									ret1->weak = false;
								}
								HX_STACK_LINE(1271)
								ret1->_immutable = immutable;
								HX_STACK_LINE(1271)
								{
									HX_STACK_LINE(1271)
									ret1->x = x;
									HX_STACK_LINE(1271)
									ret1->y = y;
									HX_STACK_LINE(1271)
									{
									}
									HX_STACK_LINE(1271)
									{
									}
								}
								HX_STACK_LINE(1271)
								return ret1;
							}
							return null();
						}
					};
					HX_STACK_LINE(1271)
					ret->zpp_inner = _Function_3_1::Block(x,y);
					HX_STACK_LINE(1271)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(1271)
					if (((bool((ret != null())) && bool(ret->zpp_disp)))){
						HX_STACK_LINE(1271)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(1271)
					{
						HX_STACK_LINE(1271)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(1271)
						if ((_this->_immutable)){
							HX_STACK_LINE(1271)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(1271)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(1271)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(1271)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(1271)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1271);
							{
								HX_STACK_LINE(1271)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1271)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1271)
								{
									HX_STACK_LINE(1271)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1271)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1271)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1271)
								return ret->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &ret){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1271);
							{
								HX_STACK_LINE(1271)
								if (((bool((ret != null())) && bool(ret->zpp_disp)))){
									HX_STACK_LINE(1271)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1271)
								{
									HX_STACK_LINE(1271)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1271)
									if (((_this->_validate_dyn() != null()))){
										HX_STACK_LINE(1271)
										_this->_validate();
									}
								}
								HX_STACK_LINE(1271)
								return ret->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(1271)
					if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
						HX_STACK_LINE(1271)
						{
							HX_STACK_LINE(1271)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(1271)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(1271)
							{
							}
							HX_STACK_LINE(1271)
							{
							}
						}
						HX_STACK_LINE(1271)
						{
							HX_STACK_LINE(1271)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1271)
							if (((_this->_invalidate_dyn() != null()))){
								HX_STACK_LINE(1271)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(1271)
					ret;
				}
				HX_STACK_LINE(1271)
				ret->zpp_inner->weak = weak;
				HX_STACK_LINE(1271)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1271)
	::nape::geom::Vec2 jsum = _Function_1_1::Block();		HX_STACK_VAR(jsum,"jsum");
	struct _Function_1_2{
		inline static ::nape::dynamics::ArbiterList Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1272);
			{
				HX_STACK_LINE(1272)
				if (((__this->zpp_inner->wrap_arbiters == null()))){
					HX_STACK_LINE(1272)
					__this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(__this->zpp_inner->arbiters,true);
				}
				HX_STACK_LINE(1272)
				return __this->zpp_inner->wrap_arbiters;
			}
			return null();
		}
	};
	HX_STACK_LINE(1272)
	for(::cpp::FastIterator_obj< ::nape::dynamics::Arbiter > *__it = ::cpp::CreateFastIterator< ::nape::dynamics::Arbiter >((_Function_1_2::Block(this))->iterator());  __it->hasNext(); ){
		::nape::dynamics::Arbiter arb = __it->next();
		{
			HX_STACK_LINE(1273)
			::nape::geom::Vec3 imp3 = arb->totalImpulse(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1274)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1275)
			jsum->addeq(imp);
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &imp){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1276);
					{
						HX_STACK_LINE(1276)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(1276)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1276);
								{
									HX_STACK_LINE(1276)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1276)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1276)
									{
										HX_STACK_LINE(1276)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1276)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1276)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1276)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1276);
								{
									HX_STACK_LINE(1276)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1276)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1276)
									{
										HX_STACK_LINE(1276)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1276)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1276)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1276)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1276);
								{
									HX_STACK_LINE(1276)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1276)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1276)
									{
										HX_STACK_LINE(1276)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1276)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1276)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1276)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1276);
								{
									HX_STACK_LINE(1276)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1276)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1276)
									{
										HX_STACK_LINE(1276)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1276)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1276)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1276)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1276)
						return ::Math_obj::sqrt(((_Function_3_1::Block(imp) * _Function_3_2::Block(imp)) + (_Function_3_3::Block(imp) * _Function_3_4::Block(imp))));
					}
					return null();
				}
			};
			HX_STACK_LINE(1276)
			hx::AddEq(msum,_Function_2_1::Block(imp));
			HX_STACK_LINE(1277)
			{
				HX_STACK_LINE(1277)
				if (((bool((imp != null())) && bool(imp->zpp_disp)))){
					HX_STACK_LINE(1277)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1277)
				{
					HX_STACK_LINE(1277)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1277)
					if ((_this->_immutable)){
						HX_STACK_LINE(1277)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1277)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1277)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1277)
				if ((imp->zpp_inner->_inuse)){
					HX_STACK_LINE(1277)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1277)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1277)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1277)
				imp->zpp_inner = null();
				HX_STACK_LINE(1277)
				{
					HX_STACK_LINE(1277)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1277)
					{
					}
					HX_STACK_LINE(1277)
					o->zpp_pool = null();
					HX_STACK_LINE(1277)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1277)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1277)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1277)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1277)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1277)
				{
					HX_STACK_LINE(1277)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1277)
					{
					}
					HX_STACK_LINE(1277)
					{
						HX_STACK_LINE(1277)
						if (((o->outer != null()))){
							HX_STACK_LINE(1277)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1277)
							o->outer = null();
						}
						HX_STACK_LINE(1277)
						o->_isimmutable = null();
						HX_STACK_LINE(1277)
						o->_validate = null();
						HX_STACK_LINE(1277)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1277)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1277)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1278)
			imp3->dispose();
		}
;
	}
	struct _Function_1_3{
		inline static Dynamic Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1280);
			{
				struct _Function_2_1{
					inline static ::nape::constraint::ConstraintList Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1280);
						{
							HX_STACK_LINE(1280)
							if (((__this->zpp_inner->wrap_constraints == null()))){
								HX_STACK_LINE(1280)
								__this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(__this->zpp_inner->constraints,true);
							}
							HX_STACK_LINE(1280)
							return __this->zpp_inner->wrap_constraints;
						}
						return null();
					}
				};
				HX_STACK_LINE(1280)
				::nape::constraint::ConstraintList _this = _Function_2_1::Block(__this);		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1280)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(1280)
				return ::nape::constraint::ConstraintIterator_obj::get(_this);
			}
			return null();
		}
	};
	HX_STACK_LINE(1280)
	for(::cpp::FastIterator_obj< ::nape::constraint::Constraint > *__it = ::cpp::CreateFastIterator< ::nape::constraint::Constraint >(_Function_1_3::Block(this));  __it->hasNext(); ){
		::nape::constraint::Constraint con = __it->next();
		{
			HX_STACK_LINE(1281)
			::nape::geom::Vec3 imp3 = con->bodyImpulse(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(imp3,"imp3");
			HX_STACK_LINE(1282)
			::nape::geom::Vec2 imp = imp3->xy(null());		HX_STACK_VAR(imp,"imp");
			HX_STACK_LINE(1283)
			jsum->addeq(imp);
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &imp){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1284);
					{
						HX_STACK_LINE(1284)
						if (((bool((imp != null())) && bool(imp->zpp_disp)))){
							HX_STACK_LINE(1284)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1284);
								{
									HX_STACK_LINE(1284)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1284)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1284)
									{
										HX_STACK_LINE(1284)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1284)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1284)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1284)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1284);
								{
									HX_STACK_LINE(1284)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1284)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1284)
									{
										HX_STACK_LINE(1284)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1284)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1284)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1284)
									return imp->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_3{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1284);
								{
									HX_STACK_LINE(1284)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1284)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1284)
									{
										HX_STACK_LINE(1284)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1284)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1284)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1284)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						struct _Function_3_4{
							inline static Float Block( ::nape::geom::Vec2 &imp){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1284);
								{
									HX_STACK_LINE(1284)
									if (((bool((imp != null())) && bool(imp->zpp_disp)))){
										HX_STACK_LINE(1284)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1284)
									{
										HX_STACK_LINE(1284)
										::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1284)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1284)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1284)
									return imp->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1284)
						return ::Math_obj::sqrt(((_Function_3_1::Block(imp) * _Function_3_2::Block(imp)) + (_Function_3_3::Block(imp) * _Function_3_4::Block(imp))));
					}
					return null();
				}
			};
			HX_STACK_LINE(1284)
			hx::AddEq(msum,_Function_2_1::Block(imp));
			HX_STACK_LINE(1285)
			{
				HX_STACK_LINE(1285)
				if (((bool((imp != null())) && bool(imp->zpp_disp)))){
					HX_STACK_LINE(1285)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1285)
				{
					HX_STACK_LINE(1285)
					::zpp_nape::geom::ZPP_Vec2 _this = imp->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1285)
					if ((_this->_immutable)){
						HX_STACK_LINE(1285)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1285)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1285)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1285)
				if ((imp->zpp_inner->_inuse)){
					HX_STACK_LINE(1285)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1285)
				::zpp_nape::geom::ZPP_Vec2 inner = imp->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1285)
				imp->zpp_inner->outer = null();
				HX_STACK_LINE(1285)
				imp->zpp_inner = null();
				HX_STACK_LINE(1285)
				{
					HX_STACK_LINE(1285)
					::nape::geom::Vec2 o = imp;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1285)
					{
					}
					HX_STACK_LINE(1285)
					o->zpp_pool = null();
					HX_STACK_LINE(1285)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1285)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1285)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1285)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1285)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1285)
				{
					HX_STACK_LINE(1285)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1285)
					{
					}
					HX_STACK_LINE(1285)
					{
						HX_STACK_LINE(1285)
						if (((o->outer != null()))){
							HX_STACK_LINE(1285)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1285)
							o->outer = null();
						}
						HX_STACK_LINE(1285)
						o->_isimmutable = null();
						HX_STACK_LINE(1285)
						o->_validate = null();
						HX_STACK_LINE(1285)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1285)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1285)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1286)
			imp3->dispose();
		}
;
	}
	struct _Function_1_4{
		inline static Float Block( ::nape::geom::Vec2 &jsum){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
			{
				HX_STACK_LINE(1288)
				if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
					HX_STACK_LINE(1288)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				struct _Function_2_1{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
						{
							HX_STACK_LINE(1288)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1288)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1288)
							{
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1288)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1288)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1288)
							return jsum->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
						{
							HX_STACK_LINE(1288)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1288)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1288)
							{
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1288)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1288)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1288)
							return jsum->zpp_inner->x;
						}
						return null();
					}
				};
				struct _Function_2_3{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
						{
							HX_STACK_LINE(1288)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1288)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1288)
							{
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1288)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1288)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1288)
							return jsum->zpp_inner->y;
						}
						return null();
					}
				};
				struct _Function_2_4{
					inline static Float Block( ::nape::geom::Vec2 &jsum){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
						{
							HX_STACK_LINE(1288)
							if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
								HX_STACK_LINE(1288)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1288)
							{
								HX_STACK_LINE(1288)
								::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1288)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1288)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1288)
							return jsum->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(1288)
				return ::Math_obj::sqrt(((_Function_2_1::Block(jsum) * _Function_2_2::Block(jsum)) + (_Function_2_3::Block(jsum) * _Function_2_4::Block(jsum))));
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1288);
			{
				HX_STACK_LINE(1288)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1288)
					hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
				}
				HX_STACK_LINE(1288)
				__this->zpp_inner->validate_mass();
				HX_STACK_LINE(1288)
				if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->shapes->head == null()))))){
					HX_STACK_LINE(1288)
					hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
				}
				HX_STACK_LINE(1288)
				return __this->zpp_inner->cmass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1288)
	Float ret = (Float(((msum - _Function_1_4::Block(jsum)))) / Float(((_Function_1_5::Block(this) * ((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->pre_dt))));		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1289)
	{
		HX_STACK_LINE(1289)
		if (((bool((jsum != null())) && bool(jsum->zpp_disp)))){
			HX_STACK_LINE(1289)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1289)
		{
			HX_STACK_LINE(1289)
			::zpp_nape::geom::ZPP_Vec2 _this = jsum->zpp_inner;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1289)
			if ((_this->_immutable)){
				HX_STACK_LINE(1289)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(1289)
			if (((_this->_isimmutable_dyn() != null()))){
				HX_STACK_LINE(1289)
				_this->_isimmutable();
			}
		}
		HX_STACK_LINE(1289)
		if ((jsum->zpp_inner->_inuse)){
			HX_STACK_LINE(1289)
			hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
		}
		HX_STACK_LINE(1289)
		::zpp_nape::geom::ZPP_Vec2 inner = jsum->zpp_inner;		HX_STACK_VAR(inner,"inner");
		HX_STACK_LINE(1289)
		jsum->zpp_inner->outer = null();
		HX_STACK_LINE(1289)
		jsum->zpp_inner = null();
		HX_STACK_LINE(1289)
		{
			HX_STACK_LINE(1289)
			::nape::geom::Vec2 o = jsum;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1289)
			{
			}
			HX_STACK_LINE(1289)
			o->zpp_pool = null();
			HX_STACK_LINE(1289)
			if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
				HX_STACK_LINE(1289)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
			}
			else{
				HX_STACK_LINE(1289)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
			}
			HX_STACK_LINE(1289)
			::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
			HX_STACK_LINE(1289)
			o->zpp_disp = true;
		}
		HX_STACK_LINE(1289)
		{
			HX_STACK_LINE(1289)
			::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1289)
			{
			}
			HX_STACK_LINE(1289)
			{
				HX_STACK_LINE(1289)
				if (((o->outer != null()))){
					HX_STACK_LINE(1289)
					o->outer->zpp_inner = null();
					HX_STACK_LINE(1289)
					o->outer = null();
				}
				HX_STACK_LINE(1289)
				o->_isimmutable = null();
				HX_STACK_LINE(1289)
				o->_validate = null();
				HX_STACK_LINE(1289)
				o->_invalidate = null();
			}
			HX_STACK_LINE(1289)
			o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
			HX_STACK_LINE(1289)
			::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
		}
	}
	HX_STACK_LINE(1290)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,crushFactor,return )

::nape::phys::BodyList Body_obj::interactingBodies( ::nape::callbacks::InteractionType type,hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_PUSH("Body::interactingBodies","nape/phys/Body.hx",1244);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
{
		struct _Function_1_1{
			inline static ::nape::callbacks::InteractionType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1248);
				{
					HX_STACK_LINE(1248)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION == null()))){
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1248)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_COLLISION;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static ::nape::callbacks::InteractionType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1248);
				{
					HX_STACK_LINE(1248)
					if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR == null()))){
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR = ::nape::callbacks::InteractionType_obj::__new();
						HX_STACK_LINE(1248)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1248)
					return ::zpp_nape::util::ZPP_Flags_obj::InteractionType_SENSOR;
				}
				return null();
			}
		};
		HX_STACK_LINE(1245)
		int arbiter_type = (  (((type == null()))) ? int((int((int(::zpp_nape::dynamics::ZPP_Arbiter_obj::COL) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR))) | int(::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID))) : int((  (((type == _Function_1_1::Block()))) ? int(::zpp_nape::dynamics::ZPP_Arbiter_obj::COL) : int((  (((type == _Function_1_2::Block()))) ? int(::zpp_nape::dynamics::ZPP_Arbiter_obj::SENSOR) : int(::zpp_nape::dynamics::ZPP_Arbiter_obj::FLUID) )) )) );		HX_STACK_VAR(arbiter_type,"arbiter_type");
		HX_STACK_LINE(1249)
		return this->zpp_inner->interactingBodies(arbiter_type,depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,interactingBodies,return )

::nape::phys::BodyList Body_obj::connectedBodies( hx::Null< int >  __o_depth,::nape::phys::BodyList output){
int depth = __o_depth.Default(-1);
	HX_STACK_PUSH("Body::connectedBodies","nape/phys/Body.hx",1226);
	HX_STACK_THIS(this);
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
{
		HX_STACK_LINE(1226)
		return this->zpp_inner->connectedBodies(depth,output);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Body_obj,connectedBodies,return )

Float Body_obj::set_inertia( Float inertia){
	HX_STACK_PUSH("Body::set_inertia","nape/phys/Body.hx",1192);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inertia,"inertia");
	HX_STACK_LINE(1193)
	{
		HX_STACK_LINE(1194)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertia"));
		HX_STACK_LINE(1196)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1196)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1199)
		if (((inertia != inertia))){
			HX_STACK_LINE(1199)
			hx::Throw (HX_CSTRING("Error: Inertia cannot be NaN"));
		}
		HX_STACK_LINE(1200)
		if (((inertia <= (int)0))){
			HX_STACK_LINE(1200)
			hx::Throw (HX_CSTRING("Error: Inertia must be strictly positive"));
		}
		HX_STACK_LINE(1201)
		if (((inertia >= ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(1201)
			hx::Throw (HX_CSTRING("Error: Inertia cannot be infinite, use allowRotation = false instead"));
		}
		HX_STACK_LINE(1203)
		this->zpp_inner->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED;
		HX_STACK_LINE(1204)
		this->zpp_inner->cinertia = inertia;
		HX_STACK_LINE(1205)
		this->zpp_inner->invalidate_inertia();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1207);
			{
				HX_STACK_LINE(1207)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1207)
					hx::Throw (HX_CSTRING("Error: Space::world has no inertia"));
				}
				HX_STACK_LINE(1207)
				__this->zpp_inner->validate_inertia();
				struct _Function_2_1{
					inline static bool Block( ::nape::phys::Body_obj *__this){
						HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1207);
						{
							HX_STACK_LINE(1207)
							::nape::shape::ShapeList _this = __this->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1207)
							return (_this->zpp_inner->inner->head == null());
						}
						return null();
					}
				};
				HX_STACK_LINE(1207)
				if (((bool((__this->zpp_inner->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(_Function_2_1::Block(__this))))){
					HX_STACK_LINE(1207)
					hx::Throw (HX_CSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes"));
				}
				HX_STACK_LINE(1207)
				return __this->zpp_inner->cinertia;
			}
			return null();
		}
	};
	HX_STACK_LINE(1207)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertia,return )

Float Body_obj::get_inertia( ){
	HX_STACK_PUSH("Body::get_inertia","nape/phys/Body.hx",1182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1184)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1184)
		hx::Throw (HX_CSTRING("Error: Space::world has no inertia"));
	}
	HX_STACK_LINE(1186)
	this->zpp_inner->validate_inertia();
	struct _Function_1_1{
		inline static bool Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1188);
			{
				HX_STACK_LINE(1188)
				::nape::shape::ShapeList _this = __this->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1188)
				return (_this->zpp_inner->inner->head == null());
			}
			return null();
		}
	};
	HX_STACK_LINE(1188)
	if (((bool((this->zpp_inner->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(_Function_1_1::Block(this))))){
		HX_STACK_LINE(1188)
		hx::Throw (HX_CSTRING("Error: Given current inertia mode flag, Body::inertia only makes sense if Body contains Shapes"));
	}
	HX_STACK_LINE(1190)
	return this->zpp_inner->cinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertia,return )

Float Body_obj::get_constraintInertia( ){
	HX_STACK_PUSH("Body::get_constraintInertia","nape/phys/Body.hx",1171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1172)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(1172)
		this->zpp_inner->validate_inertia();
	}
	HX_STACK_LINE(1173)
	return this->zpp_inner->sinertia;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintInertia,return )

::nape::phys::InertiaMode Body_obj::set_inertiaMode( ::nape::phys::InertiaMode inertiaMode){
	HX_STACK_PUSH("Body::set_inertiaMode","nape/phys/Body.hx",1148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(inertiaMode,"inertiaMode");
	HX_STACK_LINE(1149)
	{
		HX_STACK_LINE(1150)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::inertiaMode"));
		HX_STACK_LINE(1152)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1152)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1155)
		if (((inertiaMode == null()))){
			HX_STACK_LINE(1155)
			hx::Throw (HX_CSTRING("Error: Cannot use null InertiaMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::InertiaMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1157);
				{
					HX_STACK_LINE(1157)
					if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
						HX_STACK_LINE(1157)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1157)
						::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
						HX_STACK_LINE(1157)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1157)
					return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
				}
				return null();
			}
		};
		HX_STACK_LINE(1157)
		this->zpp_inner->inertiaMode = (  (((inertiaMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED) : int(::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT) );
		HX_STACK_LINE(1158)
		this->zpp_inner->invalidate_inertia();
	}
	struct _Function_1_1{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1160);
			{
				HX_STACK_LINE(1160)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1160)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1160);
			{
				HX_STACK_LINE(1160)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1160)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1160)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1160)
	return Array_obj< ::nape::phys::InertiaMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->inertiaMode);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_inertiaMode,return )

::nape::phys::InertiaMode Body_obj::get_inertiaMode( ){
	HX_STACK_PUSH("Body::get_inertiaMode","nape/phys/Body.hx",1145);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1146);
			{
				HX_STACK_LINE(1146)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT == null()))){
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1146)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::InertiaMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1146);
			{
				HX_STACK_LINE(1146)
				if (((::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED == null()))){
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED = ::nape::phys::InertiaMode_obj::__new();
					HX_STACK_LINE(1146)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1146)
				return ::zpp_nape::util::ZPP_Flags_obj::InertiaMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1145)
	return Array_obj< ::nape::phys::InertiaMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->inertiaMode);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_inertiaMode,return )

Float Body_obj::set_gravMassScale( Float gravMassScale){
	HX_STACK_PUSH("Body::set_gravMassScale","nape/phys/Body.hx",1121);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMassScale,"gravMassScale");
	HX_STACK_LINE(1122)
	{
		HX_STACK_LINE(1123)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassScale"));
		HX_STACK_LINE(1125)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1125)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1128)
		if (((gravMassScale != gravMassScale))){
			HX_STACK_LINE(1128)
			hx::Throw (HX_CSTRING("Error: gravMassScale cannot be NaN"));
		}
		HX_STACK_LINE(1130)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED;
		HX_STACK_LINE(1131)
		this->zpp_inner->gravMassScale = gravMassScale;
		HX_STACK_LINE(1132)
		this->zpp_inner->invalidate_gravMassScale();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1134);
			{
				HX_STACK_LINE(1134)
				__this->zpp_inner->validate_gravMassScale();
				HX_STACK_LINE(1134)
				if (((__this->zpp_inner->shapes->head == null()))){
					HX_STACK_LINE(1134)
					if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))))){
						HX_STACK_LINE(1134)
						hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes"));
					}
				}
				HX_STACK_LINE(1134)
				return __this->zpp_inner->gravMassScale;
			}
			return null();
		}
	};
	HX_STACK_LINE(1134)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassScale,return )

Float Body_obj::get_gravMassScale( ){
	HX_STACK_PUSH("Body::get_gravMassScale","nape/phys/Body.hx",1112);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1113)
	this->zpp_inner->validate_gravMassScale();
	HX_STACK_LINE(1115)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1115)
		if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))))){
			HX_STACK_LINE(1116)
			hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMassScale only makes sense if it contains Shapes"));
		}
	}
	HX_STACK_LINE(1119)
	return this->zpp_inner->gravMassScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassScale,return )

Float Body_obj::set_gravMass( Float gravMass){
	HX_STACK_PUSH("Body::set_gravMass","nape/phys/Body.hx",1087);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMass,"gravMass");
	HX_STACK_LINE(1088)
	{
		HX_STACK_LINE(1089)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMass"));
		HX_STACK_LINE(1091)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1091)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1094)
		if (((gravMass != gravMass))){
			HX_STACK_LINE(1094)
			hx::Throw (HX_CSTRING("Error: gravMass cannot be NaN"));
		}
		HX_STACK_LINE(1096)
		this->zpp_inner->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED;
		HX_STACK_LINE(1097)
		this->zpp_inner->gravMass = gravMass;
		HX_STACK_LINE(1098)
		this->zpp_inner->invalidate_gravMass();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1100);
			{
				HX_STACK_LINE(1100)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1100)
					hx::Throw (HX_CSTRING("Error: Space::world has no gravMass"));
				}
				HX_STACK_LINE(1100)
				__this->zpp_inner->validate_gravMass();
				HX_STACK_LINE(1100)
				if (((__this->zpp_inner->shapes->head == null()))){
					HX_STACK_LINE(1100)
					if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))))){
						HX_STACK_LINE(1100)
						hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes"));
					}
				}
				HX_STACK_LINE(1100)
				return __this->zpp_inner->gravMass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1100)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMass,return )

Float Body_obj::get_gravMass( ){
	HX_STACK_PUSH("Body::get_gravMass","nape/phys/Body.hx",1075);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1077)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1077)
		hx::Throw (HX_CSTRING("Error: Space::world has no gravMass"));
	}
	HX_STACK_LINE(1079)
	this->zpp_inner->validate_gravMass();
	HX_STACK_LINE(1081)
	if (((this->zpp_inner->shapes->head == null()))){
		HX_STACK_LINE(1081)
		if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))))){
			HX_STACK_LINE(1082)
			hx::Throw (HX_CSTRING("Error: Given current mass/gravMass modes; Body::gravMass only makes sense if it contains Shapes"));
		}
	}
	HX_STACK_LINE(1085)
	return this->zpp_inner->gravMass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMass,return )

::nape::phys::GravMassMode Body_obj::set_gravMassMode( ::nape::phys::GravMassMode gravMassMode){
	HX_STACK_PUSH("Body::set_gravMassMode","nape/phys/Body.hx",1052);
	HX_STACK_THIS(this);
	HX_STACK_ARG(gravMassMode,"gravMassMode");
	HX_STACK_LINE(1053)
	{
		HX_STACK_LINE(1054)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::gravMassMode"));
		HX_STACK_LINE(1056)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1056)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1059)
		if (((gravMassMode == null()))){
			HX_STACK_LINE(1059)
			hx::Throw (HX_CSTRING("Error: Cannot use null gravMassMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1061);
				{
					HX_STACK_LINE(1061)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1061)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::phys::GravMassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1061);
				{
					HX_STACK_LINE(1061)
					if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
						HX_STACK_LINE(1061)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(1061)
					return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
				}
				return null();
			}
		};
		HX_STACK_LINE(1061)
		this->zpp_inner->gravMassMode = (  (((gravMassMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED) : int((  (((gravMassMode == _Function_2_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT) : int(::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED) )) );
		HX_STACK_LINE(1062)
		this->zpp_inner->invalidate_gravMass();
	}
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1064);
			{
				HX_STACK_LINE(1064)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1064)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1064);
			{
				HX_STACK_LINE(1064)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1064)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1064);
			{
				HX_STACK_LINE(1064)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1064)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1064)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1064)
	return Array_obj< ::nape::phys::GravMassMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->massMode);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_gravMassMode,return )

::nape::phys::GravMassMode Body_obj::get_gravMassMode( ){
	HX_STACK_PUSH("Body::get_gravMassMode","nape/phys/Body.hx",1049);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1050);
			{
				HX_STACK_LINE(1050)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT == null()))){
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1050)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1050);
			{
				HX_STACK_LINE(1050)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED == null()))){
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1050)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_FIXED;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::GravMassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1050);
			{
				HX_STACK_LINE(1050)
				if (((::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED == null()))){
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED = ::nape::phys::GravMassMode_obj::__new();
					HX_STACK_LINE(1050)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1050)
				return ::zpp_nape::util::ZPP_Flags_obj::GravMassMode_SCALED;
			}
			return null();
		}
	};
	HX_STACK_LINE(1049)
	return Array_obj< ::nape::phys::GravMassMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->massMode);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_gravMassMode,return )

Float Body_obj::set_mass( Float mass){
	HX_STACK_PUSH("Body::set_mass","nape/phys/Body.hx",1023);
	HX_STACK_THIS(this);
	HX_STACK_ARG(mass,"mass");
	HX_STACK_LINE(1024)
	{
		HX_STACK_LINE(1025)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::mass"));
		HX_STACK_LINE(1027)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(1027)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(1030)
		if (((mass != mass))){
			HX_STACK_LINE(1030)
			hx::Throw (HX_CSTRING("Error: Mass cannot be NaN"));
		}
		HX_STACK_LINE(1031)
		if (((mass <= (int)0))){
			HX_STACK_LINE(1031)
			hx::Throw (HX_CSTRING("Error: Mass must be strictly positive"));
		}
		HX_STACK_LINE(1032)
		if (((mass >= ::Math_obj::POSITIVE_INFINITY))){
			HX_STACK_LINE(1032)
			hx::Throw (HX_CSTRING("Error: Mass cannot be infinite, use allowMovement = false instead"));
		}
		HX_STACK_LINE(1034)
		this->zpp_inner->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED;
		HX_STACK_LINE(1035)
		this->zpp_inner->cmass = mass;
		HX_STACK_LINE(1036)
		this->zpp_inner->invalidate_mass();
	}
	struct _Function_1_1{
		inline static Float Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",1038);
			{
				HX_STACK_LINE(1038)
				if ((__this->zpp_inner->world)){
					HX_STACK_LINE(1038)
					hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
				}
				HX_STACK_LINE(1038)
				__this->zpp_inner->validate_mass();
				HX_STACK_LINE(1038)
				if (((bool((__this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((__this->zpp_inner->shapes->head == null()))))){
					HX_STACK_LINE(1038)
					hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
				}
				HX_STACK_LINE(1038)
				return __this->zpp_inner->cmass;
			}
			return null();
		}
	};
	HX_STACK_LINE(1038)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_mass,return )

Float Body_obj::get_mass( ){
	HX_STACK_PUSH("Body::get_mass","nape/phys/Body.hx",1013);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1015)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(1015)
		hx::Throw (HX_CSTRING("Error: Space::world has no mass"));
	}
	HX_STACK_LINE(1017)
	this->zpp_inner->validate_mass();
	HX_STACK_LINE(1019)
	if (((bool((this->zpp_inner->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool((this->zpp_inner->shapes->head == null()))))){
		HX_STACK_LINE(1019)
		hx::Throw (HX_CSTRING("Error: Given current mass mode, Body::mass only makes sense if it contains shapes"));
	}
	HX_STACK_LINE(1021)
	return this->zpp_inner->cmass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_mass,return )

Float Body_obj::get_constraintMass( ){
	HX_STACK_PUSH("Body::get_constraintMass","nape/phys/Body.hx",995);
	HX_STACK_THIS(this);
	HX_STACK_LINE(996)
	if ((!(this->zpp_inner->world))){
		HX_STACK_LINE(996)
		this->zpp_inner->validate_mass();
	}
	HX_STACK_LINE(997)
	return this->zpp_inner->smass;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintMass,return )

::nape::phys::MassMode Body_obj::set_massMode( ::nape::phys::MassMode massMode){
	HX_STACK_PUSH("Body::set_massMode","nape/phys/Body.hx",972);
	HX_STACK_THIS(this);
	HX_STACK_ARG(massMode,"massMode");
	HX_STACK_LINE(973)
	{
		HX_STACK_LINE(974)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::massMode"));
		HX_STACK_LINE(976)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(976)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(979)
		if (((massMode == null()))){
			HX_STACK_LINE(979)
			hx::Throw (HX_CSTRING("Error: cannot use null massMode"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::MassMode Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",981);
				{
					HX_STACK_LINE(981)
					if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
						HX_STACK_LINE(981)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(981)
						::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
						HX_STACK_LINE(981)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(981)
					return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
				}
				return null();
			}
		};
		HX_STACK_LINE(981)
		this->zpp_inner->massMode = (  (((massMode == _Function_2_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT) : int(::zpp_nape::util::ZPP_Flags_obj::id_MassMode_FIXED) );
		HX_STACK_LINE(982)
		this->zpp_inner->invalidate_mass();
	}
	struct _Function_1_1{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",984);
			{
				HX_STACK_LINE(984)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(984)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",984);
			{
				HX_STACK_LINE(984)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(984)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(984)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(984)
	return Array_obj< ::nape::phys::MassMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->massMode);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_massMode,return )

::nape::phys::MassMode Body_obj::get_massMode( ){
	HX_STACK_PUSH("Body::get_massMode","nape/phys/Body.hx",969);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",970);
			{
				HX_STACK_LINE(970)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT == null()))){
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(970)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_DEFAULT;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::MassMode Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",970);
			{
				HX_STACK_LINE(970)
				if (((::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED == null()))){
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED = ::nape::phys::MassMode_obj::__new();
					HX_STACK_LINE(970)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(970)
				return ::zpp_nape::util::ZPP_Flags_obj::MassMode_FIXED;
			}
			return null();
		}
	};
	HX_STACK_LINE(969)
	return Array_obj< ::nape::phys::MassMode >::__new().Add(_Function_1_1::Block()).Add(_Function_1_2::Block())->__get(this->zpp_inner->massMode);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_massMode,return )

bool Body_obj::set_allowRotation( bool allowRotation){
	HX_STACK_PUSH("Body::set_allowRotation","nape/phys/Body.hx",948);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowRotation,"allowRotation");
	HX_STACK_LINE(949)
	{
		HX_STACK_LINE(950)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + ::Std_obj::string(allowRotation)));
		HX_STACK_LINE(951)
		if (((!(this->zpp_inner->norotate) != allowRotation))){
			HX_STACK_LINE(952)
			this->zpp_inner->norotate = !(allowRotation);
			HX_STACK_LINE(953)
			this->zpp_inner->invalidate_inertia();
		}
	}
	HX_STACK_LINE(956)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowRotation,return )

bool Body_obj::get_allowRotation( ){
	HX_STACK_PUSH("Body::get_allowRotation","nape/phys/Body.hx",945);
	HX_STACK_THIS(this);
	HX_STACK_LINE(945)
	return !(this->zpp_inner->norotate);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowRotation,return )

bool Body_obj::set_allowMovement( bool allowMovement){
	HX_STACK_PUSH("Body::set_allowMovement","nape/phys/Body.hx",924);
	HX_STACK_THIS(this);
	HX_STACK_ARG(allowMovement,"allowMovement");
	HX_STACK_LINE(925)
	{
		HX_STACK_LINE(926)
		this->zpp_inner->immutable_midstep((HX_CSTRING("Body::") + ::Std_obj::string(allowMovement)));
		HX_STACK_LINE(927)
		if (((!(this->zpp_inner->nomove) != allowMovement))){
			HX_STACK_LINE(928)
			this->zpp_inner->nomove = !(allowMovement);
			HX_STACK_LINE(929)
			this->zpp_inner->invalidate_mass();
		}
	}
	HX_STACK_LINE(932)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_allowMovement,return )

bool Body_obj::get_allowMovement( ){
	HX_STACK_PUSH("Body::get_allowMovement","nape/phys/Body.hx",921);
	HX_STACK_THIS(this);
	HX_STACK_LINE(921)
	return !(this->zpp_inner->nomove);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_allowMovement,return )

::nape::geom::AABB Body_obj::get_bounds( ){
	HX_STACK_PUSH("Body::get_bounds","nape/phys/Body.hx",904);
	HX_STACK_THIS(this);
	HX_STACK_LINE(906)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(906)
		hx::Throw (HX_CSTRING("Error: Space::world has no bounds"));
	}
	HX_STACK_LINE(908)
	return this->zpp_inner->aabb->wrapper();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_bounds,return )

Float Body_obj::set_torque( Float torque){
	HX_STACK_PUSH("Body::set_torque","nape/phys/Body.hx",875);
	HX_STACK_THIS(this);
	HX_STACK_ARG(torque,"torque");
	HX_STACK_LINE(876)
	{
		HX_STACK_LINE(878)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(878)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(881)
		if ((!(((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(881)
			hx::Throw (HX_CSTRING("Error: Non-dynamic body cannot have torque applied."));
		}
		HX_STACK_LINE(884)
		if (((torque != torque))){
			HX_STACK_LINE(884)
			hx::Throw (HX_CSTRING("Error: Body::torque cannot be NaN"));
		}
		HX_STACK_LINE(886)
		if (((this->zpp_inner->torque != torque))){
			HX_STACK_LINE(887)
			this->zpp_inner->torque = torque;
			HX_STACK_LINE(888)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(891)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_torque,return )

Float Body_obj::get_torque( ){
	HX_STACK_PUSH("Body::get_torque","nape/phys/Body.hx",872);
	HX_STACK_THIS(this);
	HX_STACK_LINE(872)
	return this->zpp_inner->torque;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_torque,return )

Float Body_obj::set_kinAngVel( Float kinAngVel){
	HX_STACK_PUSH("Body::set_kinAngVel","nape/phys/Body.hx",845);
	HX_STACK_THIS(this);
	HX_STACK_ARG(kinAngVel,"kinAngVel");
	HX_STACK_LINE(846)
	{
		HX_STACK_LINE(848)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(848)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(850)
		if (((this->zpp_inner->kinangvel != kinAngVel))){
			HX_STACK_LINE(852)
			if (((kinAngVel != kinAngVel))){
				HX_STACK_LINE(852)
				hx::Throw (HX_CSTRING("Error: Body::kinAngVel cannot be NaN"));
			}
			HX_STACK_LINE(854)
			this->zpp_inner->kinangvel = kinAngVel;
			HX_STACK_LINE(855)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(858)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinAngVel,return )

Float Body_obj::get_kinAngVel( ){
	HX_STACK_PUSH("Body::get_kinAngVel","nape/phys/Body.hx",842);
	HX_STACK_THIS(this);
	HX_STACK_LINE(842)
	return this->zpp_inner->kinangvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinAngVel,return )

Float Body_obj::set_angularVel( Float angularVel){
	HX_STACK_PUSH("Body::set_angularVel","nape/phys/Body.hx",810);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angularVel,"angularVel");
	HX_STACK_LINE(811)
	{
		HX_STACK_LINE(813)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(813)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(815)
		if (((this->zpp_inner->angvel != angularVel))){
			HX_STACK_LINE(817)
			if (((angularVel != angularVel))){
				HX_STACK_LINE(817)
				hx::Throw (HX_CSTRING("Error: Body::angularVel cannot be NaN"));
			}
			HX_STACK_LINE(820)
			if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
				HX_STACK_LINE(820)
				hx::Throw (HX_CSTRING("Error: A static object cannot be given a velocity"));
			}
			HX_STACK_LINE(822)
			this->zpp_inner->angvel = angularVel;
			HX_STACK_LINE(823)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(826)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_angularVel,return )

Float Body_obj::get_angularVel( ){
	HX_STACK_PUSH("Body::get_angularVel","nape/phys/Body.hx",807);
	HX_STACK_THIS(this);
	HX_STACK_LINE(807)
	return this->zpp_inner->angvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_angularVel,return )

Float Body_obj::set_rotation( Float rotation){
	HX_STACK_PUSH("Body::set_rotation","nape/phys/Body.hx",778);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_LINE(779)
	{
		HX_STACK_LINE(780)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::rotation"));
		HX_STACK_LINE(782)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(782)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(785)
		if (((bool((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
			HX_STACK_LINE(785)
			hx::Throw (HX_CSTRING("Error: Static objects cannot be rotated once inside a Space"));
		}
		HX_STACK_LINE(787)
		if (((this->zpp_inner->rot != rotation))){
			HX_STACK_LINE(789)
			if (((rotation != rotation))){
				HX_STACK_LINE(789)
				hx::Throw (HX_CSTRING("Error: Body::rotation cannot be NaN"));
			}
			HX_STACK_LINE(791)
			this->zpp_inner->rot = rotation;
			HX_STACK_LINE(792)
			{
				HX_STACK_LINE(792)
				::zpp_nape::phys::ZPP_Body _this = this->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(792)
				_this->zip_axis = true;
				HX_STACK_LINE(792)
				{
					HX_STACK_LINE(792)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = _this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(792)
					while(((cx_ite != null()))){
						HX_STACK_LINE(792)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(792)
						{
							HX_STACK_LINE(792)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(792)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(792)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(792)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(792)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(792)
				_this->zip_worldCOM = true;
			}
			HX_STACK_LINE(793)
			this->zpp_inner->wake();
		}
	}
	HX_STACK_LINE(796)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_rotation,return )

Float Body_obj::get_rotation( ){
	HX_STACK_PUSH("Body::get_rotation","nape/phys/Body.hx",775);
	HX_STACK_THIS(this);
	HX_STACK_LINE(775)
	return this->zpp_inner->rot;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_rotation,return )

::nape::geom::Vec3 Body_obj::get_constraintVelocity( ){
	HX_STACK_PUSH("Body::get_constraintVelocity","nape/phys/Body.hx",757);
	HX_STACK_THIS(this);
	HX_STACK_LINE(758)
	if (((this->zpp_inner->wrapcvel == null()))){
		HX_STACK_LINE(758)
		this->zpp_inner->setup_cvel();
	}
	HX_STACK_LINE(759)
	return this->zpp_inner->wrapcvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraintVelocity,return )

::nape::geom::Vec2 Body_obj::set_force( ::nape::geom::Vec2 force){
	HX_STACK_PUSH("Body::set_force","nape/phys/Body.hx",735);
	HX_STACK_THIS(this);
	HX_STACK_ARG(force,"force");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(737)
		if (((bool((force != null())) && bool(force->zpp_disp)))){
			HX_STACK_LINE(739)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(743)
		if (((force == null()))){
			HX_STACK_LINE(743)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("force")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(745)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
					{
						HX_STACK_LINE(745)
						if (((__this->zpp_inner->wrap_force == null()))){
							HX_STACK_LINE(745)
							__this->zpp_inner->setupForce();
						}
						HX_STACK_LINE(745)
						return __this->zpp_inner->wrap_force;
					}
					return null();
				}
			};
			HX_STACK_LINE(745)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(745)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(745)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(745)
			if (((bool((force != null())) && bool(force->zpp_disp)))){
				HX_STACK_LINE(745)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(745)
			{
				HX_STACK_LINE(745)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(745)
				if ((_this1->_immutable)){
					HX_STACK_LINE(745)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(745)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(745)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(745)
			if (((force == null()))){
				HX_STACK_LINE(745)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &force,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &force){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
								{
									HX_STACK_LINE(745)
									if (((bool((force != null())) && bool(force->zpp_disp)))){
										HX_STACK_LINE(745)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(745)
									{
										HX_STACK_LINE(745)
										::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(745)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(745)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(745)
									return force->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &force){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
								{
									HX_STACK_LINE(745)
									if (((bool((force != null())) && bool(force->zpp_disp)))){
										HX_STACK_LINE(745)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(745)
									{
										HX_STACK_LINE(745)
										::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(745)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(745)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(745)
									return force->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(745)
						Float x = _Function_4_1::Block(force);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(force);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(745)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(745)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(745)
							if ((_this1->_immutable)){
								HX_STACK_LINE(745)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(745)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(745)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(745)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(745)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
								{
									HX_STACK_LINE(745)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(745)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(745)
									{
										HX_STACK_LINE(745)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(745)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(745)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(745)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",745);
								{
									HX_STACK_LINE(745)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(745)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(745)
									{
										HX_STACK_LINE(745)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(745)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(745)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(745)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(745)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(745)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(745)
								{
								}
								HX_STACK_LINE(745)
								{
								}
							}
							HX_STACK_LINE(745)
							{
								HX_STACK_LINE(745)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(745)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(745)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(745)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(745)
			::nape::geom::Vec2 ret = _Function_3_2::Block(force,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(745)
			if ((force->zpp_inner->weak)){
				HX_STACK_LINE(745)
				{
					HX_STACK_LINE(745)
					if (((bool((force != null())) && bool(force->zpp_disp)))){
						HX_STACK_LINE(745)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(745)
					{
						HX_STACK_LINE(745)
						::zpp_nape::geom::ZPP_Vec2 _this1 = force->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(745)
						if ((_this1->_immutable)){
							HX_STACK_LINE(745)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(745)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(745)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(745)
					if ((force->zpp_inner->_inuse)){
						HX_STACK_LINE(745)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(745)
					::zpp_nape::geom::ZPP_Vec2 inner = force->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(745)
					force->zpp_inner->outer = null();
					HX_STACK_LINE(745)
					force->zpp_inner = null();
					HX_STACK_LINE(745)
					{
						HX_STACK_LINE(745)
						::nape::geom::Vec2 o = force;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(745)
						{
						}
						HX_STACK_LINE(745)
						o->zpp_pool = null();
						HX_STACK_LINE(745)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(745)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(745)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(745)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(745)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(745)
					{
						HX_STACK_LINE(745)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(745)
						{
						}
						HX_STACK_LINE(745)
						{
							HX_STACK_LINE(745)
							if (((o->outer != null()))){
								HX_STACK_LINE(745)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(745)
								o->outer = null();
							}
							HX_STACK_LINE(745)
							o->_isimmutable = null();
							HX_STACK_LINE(745)
							o->_validate = null();
							HX_STACK_LINE(745)
							o->_invalidate = null();
						}
						HX_STACK_LINE(745)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(745)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(745)
				true;
			}
			else{
				HX_STACK_LINE(745)
				false;
			}
			HX_STACK_LINE(745)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",747);
			{
				HX_STACK_LINE(747)
				if (((__this->zpp_inner->wrap_force == null()))){
					HX_STACK_LINE(747)
					__this->zpp_inner->setupForce();
				}
				HX_STACK_LINE(747)
				return __this->zpp_inner->wrap_force;
			}
			return null();
		}
	};
	HX_STACK_LINE(747)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_force,return )

::nape::geom::Vec2 Body_obj::get_force( ){
	HX_STACK_PUSH("Body::get_force","nape/phys/Body.hx",731);
	HX_STACK_THIS(this);
	HX_STACK_LINE(732)
	if (((this->zpp_inner->wrap_force == null()))){
		HX_STACK_LINE(732)
		this->zpp_inner->setupForce();
	}
	HX_STACK_LINE(733)
	return this->zpp_inner->wrap_force;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_force,return )

::nape::geom::Vec2 Body_obj::set_surfaceVel( ::nape::geom::Vec2 surfaceVel){
	HX_STACK_PUSH("Body::set_surfaceVel","nape/phys/Body.hx",705);
	HX_STACK_THIS(this);
	HX_STACK_ARG(surfaceVel,"surfaceVel");
	HX_STACK_LINE(706)
	{
		HX_STACK_LINE(707)
		if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
			HX_STACK_LINE(709)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(713)
		if (((surfaceVel == null()))){
			HX_STACK_LINE(713)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("surfaceVel")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(715)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
					{
						HX_STACK_LINE(715)
						if (((__this->zpp_inner->wrap_svel == null()))){
							HX_STACK_LINE(715)
							__this->zpp_inner->setupsvel();
						}
						HX_STACK_LINE(715)
						return __this->zpp_inner->wrap_svel;
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(715)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(715)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(715)
			if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
				HX_STACK_LINE(715)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(715)
				if ((_this1->_immutable)){
					HX_STACK_LINE(715)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(715)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(715)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(715)
			if (((surfaceVel == null()))){
				HX_STACK_LINE(715)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &surfaceVel,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &surfaceVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return surfaceVel->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &surfaceVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return surfaceVel->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(715)
						Float x = _Function_4_1::Block(surfaceVel);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(surfaceVel);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(715)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(715)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(715)
						{
							HX_STACK_LINE(715)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(715)
							if ((_this1->_immutable)){
								HX_STACK_LINE(715)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(715)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(715)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(715)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(715)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",715);
								{
									HX_STACK_LINE(715)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(715)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(715)
									{
										HX_STACK_LINE(715)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(715)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(715)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(715)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(715)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(715)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(715)
								{
								}
								HX_STACK_LINE(715)
								{
								}
							}
							HX_STACK_LINE(715)
							{
								HX_STACK_LINE(715)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(715)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(715)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(715)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(715)
			::nape::geom::Vec2 ret = _Function_3_2::Block(surfaceVel,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(715)
			if ((surfaceVel->zpp_inner->weak)){
				HX_STACK_LINE(715)
				{
					HX_STACK_LINE(715)
					if (((bool((surfaceVel != null())) && bool(surfaceVel->zpp_disp)))){
						HX_STACK_LINE(715)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2 _this1 = surfaceVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(715)
						if ((_this1->_immutable)){
							HX_STACK_LINE(715)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(715)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(715)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(715)
					if ((surfaceVel->zpp_inner->_inuse)){
						HX_STACK_LINE(715)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(715)
					::zpp_nape::geom::ZPP_Vec2 inner = surfaceVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(715)
					surfaceVel->zpp_inner->outer = null();
					HX_STACK_LINE(715)
					surfaceVel->zpp_inner = null();
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::nape::geom::Vec2 o = surfaceVel;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(715)
						{
						}
						HX_STACK_LINE(715)
						o->zpp_pool = null();
						HX_STACK_LINE(715)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(715)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(715)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(715)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(715)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(715)
					{
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(715)
						{
						}
						HX_STACK_LINE(715)
						{
							HX_STACK_LINE(715)
							if (((o->outer != null()))){
								HX_STACK_LINE(715)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(715)
								o->outer = null();
							}
							HX_STACK_LINE(715)
							o->_isimmutable = null();
							HX_STACK_LINE(715)
							o->_validate = null();
							HX_STACK_LINE(715)
							o->_invalidate = null();
						}
						HX_STACK_LINE(715)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(715)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(715)
				true;
			}
			else{
				HX_STACK_LINE(715)
				false;
			}
			HX_STACK_LINE(715)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",717);
			{
				HX_STACK_LINE(717)
				if (((__this->zpp_inner->wrap_svel == null()))){
					HX_STACK_LINE(717)
					__this->zpp_inner->setupsvel();
				}
				HX_STACK_LINE(717)
				return __this->zpp_inner->wrap_svel;
			}
			return null();
		}
	};
	HX_STACK_LINE(717)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_surfaceVel,return )

::nape::geom::Vec2 Body_obj::get_surfaceVel( ){
	HX_STACK_PUSH("Body::get_surfaceVel","nape/phys/Body.hx",701);
	HX_STACK_THIS(this);
	HX_STACK_LINE(702)
	if (((this->zpp_inner->wrap_svel == null()))){
		HX_STACK_LINE(702)
		this->zpp_inner->setupsvel();
	}
	HX_STACK_LINE(703)
	return this->zpp_inner->wrap_svel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_surfaceVel,return )

::nape::geom::Vec2 Body_obj::set_kinematicVel( ::nape::geom::Vec2 kinematicVel){
	HX_STACK_PUSH("Body::set_kinematicVel","nape/phys/Body.hx",673);
	HX_STACK_THIS(this);
	HX_STACK_ARG(kinematicVel,"kinematicVel");
	HX_STACK_LINE(674)
	{
		HX_STACK_LINE(675)
		if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
			HX_STACK_LINE(677)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(681)
		if (((kinematicVel == null()))){
			HX_STACK_LINE(681)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("kinematicVel")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(683)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
					{
						HX_STACK_LINE(683)
						if (((__this->zpp_inner->wrap_kinvel == null()))){
							HX_STACK_LINE(683)
							__this->zpp_inner->setupkinvel();
						}
						HX_STACK_LINE(683)
						return __this->zpp_inner->wrap_kinvel;
					}
					return null();
				}
			};
			HX_STACK_LINE(683)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(683)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(683)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(683)
			if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
				HX_STACK_LINE(683)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(683)
			{
				HX_STACK_LINE(683)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(683)
				if ((_this1->_immutable)){
					HX_STACK_LINE(683)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(683)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(683)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(683)
			if (((kinematicVel == null()))){
				HX_STACK_LINE(683)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &kinematicVel,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &kinematicVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return kinematicVel->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &kinematicVel){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return kinematicVel->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(683)
						Float x = _Function_4_1::Block(kinematicVel);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(kinematicVel);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(683)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(683)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(683)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(683)
							if ((_this1->_immutable)){
								HX_STACK_LINE(683)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(683)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(683)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(683)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",683);
								{
									HX_STACK_LINE(683)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(683)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(683)
									{
										HX_STACK_LINE(683)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(683)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(683)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(683)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(683)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(683)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(683)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(683)
								{
								}
								HX_STACK_LINE(683)
								{
								}
							}
							HX_STACK_LINE(683)
							{
								HX_STACK_LINE(683)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(683)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(683)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(683)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(683)
			::nape::geom::Vec2 ret = _Function_3_2::Block(kinematicVel,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(683)
			if ((kinematicVel->zpp_inner->weak)){
				HX_STACK_LINE(683)
				{
					HX_STACK_LINE(683)
					if (((bool((kinematicVel != null())) && bool(kinematicVel->zpp_disp)))){
						HX_STACK_LINE(683)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2 _this1 = kinematicVel->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(683)
						if ((_this1->_immutable)){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(683)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(683)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(683)
					if ((kinematicVel->zpp_inner->_inuse)){
						HX_STACK_LINE(683)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(683)
					::zpp_nape::geom::ZPP_Vec2 inner = kinematicVel->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(683)
					kinematicVel->zpp_inner->outer = null();
					HX_STACK_LINE(683)
					kinematicVel->zpp_inner = null();
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::nape::geom::Vec2 o = kinematicVel;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(683)
						{
						}
						HX_STACK_LINE(683)
						o->zpp_pool = null();
						HX_STACK_LINE(683)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(683)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(683)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(683)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(683)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(683)
					{
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(683)
						{
						}
						HX_STACK_LINE(683)
						{
							HX_STACK_LINE(683)
							if (((o->outer != null()))){
								HX_STACK_LINE(683)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(683)
								o->outer = null();
							}
							HX_STACK_LINE(683)
							o->_isimmutable = null();
							HX_STACK_LINE(683)
							o->_validate = null();
							HX_STACK_LINE(683)
							o->_invalidate = null();
						}
						HX_STACK_LINE(683)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(683)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(683)
				true;
			}
			else{
				HX_STACK_LINE(683)
				false;
			}
			HX_STACK_LINE(683)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",685);
			{
				HX_STACK_LINE(685)
				if (((__this->zpp_inner->wrap_kinvel == null()))){
					HX_STACK_LINE(685)
					__this->zpp_inner->setupkinvel();
				}
				HX_STACK_LINE(685)
				return __this->zpp_inner->wrap_kinvel;
			}
			return null();
		}
	};
	HX_STACK_LINE(685)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_kinematicVel,return )

::nape::geom::Vec2 Body_obj::get_kinematicVel( ){
	HX_STACK_PUSH("Body::get_kinematicVel","nape/phys/Body.hx",669);
	HX_STACK_THIS(this);
	HX_STACK_LINE(670)
	if (((this->zpp_inner->wrap_kinvel == null()))){
		HX_STACK_LINE(670)
		this->zpp_inner->setupkinvel();
	}
	HX_STACK_LINE(671)
	return this->zpp_inner->wrap_kinvel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_kinematicVel,return )

::nape::phys::Body Body_obj::setVelocityFromTarget( ::nape::geom::Vec2 targetPosition,Float targetRotation,Float deltaTime){
	HX_STACK_PUSH("Body::setVelocityFromTarget","nape/phys/Body.hx",629);
	HX_STACK_THIS(this);
	HX_STACK_ARG(targetPosition,"targetPosition");
	HX_STACK_ARG(targetRotation,"targetRotation");
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_LINE(630)
	if (((bool((targetPosition != null())) && bool(targetPosition->zpp_disp)))){
		HX_STACK_LINE(632)
		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
	}
	HX_STACK_LINE(636)
	if (((targetPosition == null()))){
		HX_STACK_LINE(636)
		hx::Throw (HX_CSTRING("Cannot set velocity for null target position"));
	}
	HX_STACK_LINE(637)
	if (((deltaTime == (int)0))){
		HX_STACK_LINE(637)
		hx::Throw (HX_CSTRING("deltaTime cannot be 0 for setVelocityFromTarget"));
	}
	HX_STACK_LINE(639)
	Float idt = (Float((int)1) / Float(deltaTime));		HX_STACK_VAR(idt,"idt");
	HX_STACK_LINE(640)
	{
		struct _Function_2_1{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					HX_STACK_LINE(640)
					if (((__this->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(640)
						__this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(640)
					return __this->zpp_inner->wrap_vel;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					HX_STACK_LINE(640)
					if (((__this->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(640)
						__this->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(640)
					return __this->zpp_inner->wrap_pos;
				}
				return null();
			}
		};
		HX_STACK_LINE(640)
		::nape::geom::Vec2 _this = _Function_2_1::Block(this);		HX_STACK_VAR(_this,"_this");
		::nape::geom::Vec2 vector = targetPosition->sub(_Function_2_2::Block(this),true)->muleq(idt);		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(640)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(640)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(640)
		if (((bool((vector != null())) && bool(vector->zpp_disp)))){
			HX_STACK_LINE(640)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(640)
		{
			HX_STACK_LINE(640)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(640)
			if ((_this1->_immutable)){
				HX_STACK_LINE(640)
				hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(640)
			if (((_this1->_isimmutable_dyn() != null()))){
				HX_STACK_LINE(640)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(640)
		if (((vector == null()))){
			HX_STACK_LINE(640)
			hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
		}
		struct _Function_2_3{
			inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &vector,::nape::geom::Vec2 &_this){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
				{
					struct _Function_3_1{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return vector->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_2{
						inline static Float Block( ::nape::geom::Vec2 &vector){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((vector != null())) && bool(vector->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return vector->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(640)
					Float x = _Function_3_1::Block(vector);		HX_STACK_VAR(x,"x");
					Float y = _Function_3_2::Block(vector);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(640)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(640)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(640)
						if ((_this1->_immutable)){
							HX_STACK_LINE(640)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(640)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(640)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(640)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(640)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_3_3{
						inline static Float Block( ::nape::geom::Vec2 &_this){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_3_4{
						inline static Float Block( ::nape::geom::Vec2 &_this){
							HX_STACK_PUSH("*::closure","nape/phys/Body.hx",640);
							{
								HX_STACK_LINE(640)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(640)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(640)
								{
									HX_STACK_LINE(640)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(640)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(640)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(640)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(640)
					if ((!(((bool((_Function_3_3::Block(_this) == x)) && bool((_Function_3_4::Block(_this) == y))))))){
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(640)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(640)
							{
							}
							HX_STACK_LINE(640)
							{
							}
						}
						HX_STACK_LINE(640)
						{
							HX_STACK_LINE(640)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(640)
							if (((_this1->_invalidate_dyn() != null()))){
								HX_STACK_LINE(640)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(640)
					return _this;
				}
				return null();
			}
		};
		HX_STACK_LINE(640)
		::nape::geom::Vec2 ret = _Function_2_3::Block(vector,_this);		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(640)
		if ((vector->zpp_inner->weak)){
			HX_STACK_LINE(640)
			{
				HX_STACK_LINE(640)
				if (((bool((vector != null())) && bool(vector->zpp_disp)))){
					HX_STACK_LINE(640)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 _this1 = vector->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(640)
					if ((_this1->_immutable)){
						HX_STACK_LINE(640)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(640)
					if (((_this1->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(640)
						_this1->_isimmutable();
					}
				}
				HX_STACK_LINE(640)
				if ((vector->zpp_inner->_inuse)){
					HX_STACK_LINE(640)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(640)
				::zpp_nape::geom::ZPP_Vec2 inner = vector->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(640)
				vector->zpp_inner->outer = null();
				HX_STACK_LINE(640)
				vector->zpp_inner = null();
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::nape::geom::Vec2 o = vector;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					{
					}
					HX_STACK_LINE(640)
					o->zpp_pool = null();
					HX_STACK_LINE(640)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(640)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(640)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(640)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(640)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(640)
				{
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(640)
					{
					}
					HX_STACK_LINE(640)
					{
						HX_STACK_LINE(640)
						if (((o->outer != null()))){
							HX_STACK_LINE(640)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(640)
							o->outer = null();
						}
						HX_STACK_LINE(640)
						o->_isimmutable = null();
						HX_STACK_LINE(640)
						o->_validate = null();
						HX_STACK_LINE(640)
						o->_invalidate = null();
					}
					HX_STACK_LINE(640)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(640)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(640)
			true;
		}
		else{
			HX_STACK_LINE(640)
			false;
		}
		HX_STACK_LINE(640)
		ret;
	}
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(641)
		Float angularVel = (((targetRotation - this->zpp_inner->rot)) * idt);		HX_STACK_VAR(angularVel,"angularVel");
		HX_STACK_LINE(641)
		{
			HX_STACK_LINE(641)
			if ((this->zpp_inner->world)){
				HX_STACK_LINE(641)
				hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(641)
			if (((this->zpp_inner->angvel != angularVel))){
				HX_STACK_LINE(641)
				if (((angularVel != angularVel))){
					HX_STACK_LINE(641)
					hx::Throw (HX_CSTRING("Error: Body::angularVel cannot be NaN"));
				}
				HX_STACK_LINE(641)
				if (((this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
					HX_STACK_LINE(641)
					hx::Throw (HX_CSTRING("Error: A static object cannot be given a velocity"));
				}
				HX_STACK_LINE(641)
				this->zpp_inner->angvel = angularVel;
				HX_STACK_LINE(641)
				this->zpp_inner->wake();
			}
		}
		HX_STACK_LINE(641)
		this->zpp_inner->angvel;
	}
	HX_STACK_LINE(642)
	if ((targetPosition->zpp_inner->weak)){
		HX_STACK_LINE(646)
		{
			HX_STACK_LINE(646)
			if (((bool((targetPosition != null())) && bool(targetPosition->zpp_disp)))){
				HX_STACK_LINE(646)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2 _this = targetPosition->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(646)
				if ((_this->_immutable)){
					HX_STACK_LINE(646)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(646)
				if (((_this->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(646)
					_this->_isimmutable();
				}
			}
			HX_STACK_LINE(646)
			if ((targetPosition->zpp_inner->_inuse)){
				HX_STACK_LINE(646)
				hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
			}
			HX_STACK_LINE(646)
			::zpp_nape::geom::ZPP_Vec2 inner = targetPosition->zpp_inner;		HX_STACK_VAR(inner,"inner");
			HX_STACK_LINE(646)
			targetPosition->zpp_inner->outer = null();
			HX_STACK_LINE(646)
			targetPosition->zpp_inner = null();
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::nape::geom::Vec2 o = targetPosition;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				{
				}
				HX_STACK_LINE(646)
				o->zpp_pool = null();
				HX_STACK_LINE(646)
				if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
					HX_STACK_LINE(646)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
				}
				else{
					HX_STACK_LINE(646)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
				}
				HX_STACK_LINE(646)
				::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
				HX_STACK_LINE(646)
				o->zpp_disp = true;
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(646)
				{
				}
				HX_STACK_LINE(646)
				{
					HX_STACK_LINE(646)
					if (((o->outer != null()))){
						HX_STACK_LINE(646)
						o->outer->zpp_inner = null();
						HX_STACK_LINE(646)
						o->outer = null();
					}
					HX_STACK_LINE(646)
					o->_isimmutable = null();
					HX_STACK_LINE(646)
					o->_validate = null();
					HX_STACK_LINE(646)
					o->_invalidate = null();
				}
				HX_STACK_LINE(646)
				o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
				HX_STACK_LINE(646)
				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
			}
		}
		HX_STACK_LINE(647)
		true;
	}
	else{
		HX_STACK_LINE(649)
		false;
	}
	HX_STACK_LINE(653)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(Body_obj,setVelocityFromTarget,return )

::nape::geom::Vec2 Body_obj::set_velocity( ::nape::geom::Vec2 velocity){
	HX_STACK_PUSH("Body::set_velocity","nape/phys/Body.hx",598);
	HX_STACK_THIS(this);
	HX_STACK_ARG(velocity,"velocity");
	HX_STACK_LINE(599)
	{
		HX_STACK_LINE(600)
		if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
			HX_STACK_LINE(602)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(606)
		if (((velocity == null()))){
			HX_STACK_LINE(606)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("velocity")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(608)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
					{
						HX_STACK_LINE(608)
						if (((__this->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(608)
							__this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(608)
						return __this->zpp_inner->wrap_vel;
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(608)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(608)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(608)
			if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
				HX_STACK_LINE(608)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(608)
				if ((_this1->_immutable)){
					HX_STACK_LINE(608)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(608)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(608)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(608)
			if (((velocity == null()))){
				HX_STACK_LINE(608)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &velocity,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &velocity){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return velocity->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &velocity){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return velocity->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(608)
						Float x = _Function_4_1::Block(velocity);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(velocity);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(608)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(608)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(608)
							if ((_this1->_immutable)){
								HX_STACK_LINE(608)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(608)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(608)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(608)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(608)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",608);
								{
									HX_STACK_LINE(608)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(608)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(608)
									{
										HX_STACK_LINE(608)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(608)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(608)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(608)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(608)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(608)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(608)
								{
								}
								HX_STACK_LINE(608)
								{
								}
							}
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(608)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(608)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(608)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(608)
			::nape::geom::Vec2 ret = _Function_3_2::Block(velocity,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(608)
			if ((velocity->zpp_inner->weak)){
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					if (((bool((velocity != null())) && bool(velocity->zpp_disp)))){
						HX_STACK_LINE(608)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2 _this1 = velocity->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(608)
						if ((_this1->_immutable)){
							HX_STACK_LINE(608)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(608)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(608)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(608)
					if ((velocity->zpp_inner->_inuse)){
						HX_STACK_LINE(608)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(608)
					::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(608)
					velocity->zpp_inner->outer = null();
					HX_STACK_LINE(608)
					velocity->zpp_inner = null();
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(608)
						{
						}
						HX_STACK_LINE(608)
						o->zpp_pool = null();
						HX_STACK_LINE(608)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(608)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(608)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(608)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(608)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(608)
						{
						}
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							if (((o->outer != null()))){
								HX_STACK_LINE(608)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(608)
								o->outer = null();
							}
							HX_STACK_LINE(608)
							o->_isimmutable = null();
							HX_STACK_LINE(608)
							o->_validate = null();
							HX_STACK_LINE(608)
							o->_invalidate = null();
						}
						HX_STACK_LINE(608)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(608)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(608)
				true;
			}
			else{
				HX_STACK_LINE(608)
				false;
			}
			HX_STACK_LINE(608)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",610);
			{
				HX_STACK_LINE(610)
				if (((__this->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(610)
					__this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(610)
				return __this->zpp_inner->wrap_vel;
			}
			return null();
		}
	};
	HX_STACK_LINE(610)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_velocity,return )

::nape::geom::Vec2 Body_obj::get_velocity( ){
	HX_STACK_PUSH("Body::get_velocity","nape/phys/Body.hx",594);
	HX_STACK_THIS(this);
	HX_STACK_LINE(595)
	if (((this->zpp_inner->wrap_vel == null()))){
		HX_STACK_LINE(595)
		this->zpp_inner->setupVelocity();
	}
	HX_STACK_LINE(596)
	return this->zpp_inner->wrap_vel;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_velocity,return )

::nape::geom::Vec2 Body_obj::set_position( ::nape::geom::Vec2 position){
	HX_STACK_PUSH("Body::set_position","nape/phys/Body.hx",569);
	HX_STACK_THIS(this);
	HX_STACK_ARG(position,"position");
	HX_STACK_LINE(570)
	{
		HX_STACK_LINE(571)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(573)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(577)
		if (((position == null()))){
			HX_STACK_LINE(577)
			hx::Throw (((HX_CSTRING("Error: Body::") + HX_CSTRING("position")) + HX_CSTRING(" cannot be null")));
		}
		HX_STACK_LINE(579)
		{
			struct _Function_3_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
					{
						HX_STACK_LINE(579)
						if (((__this->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(579)
							__this->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(579)
						return __this->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			::nape::geom::Vec2 _this = _Function_3_1::Block(this);		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(579)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(579)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(579)
			if (((bool((position != null())) && bool(position->zpp_disp)))){
				HX_STACK_LINE(579)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(579)
				if ((_this1->_immutable)){
					HX_STACK_LINE(579)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(579)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(579)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(579)
			if (((position == null()))){
				HX_STACK_LINE(579)
				hx::Throw (HX_CSTRING("Error: Cannot assign null Vec2"));
			}
			struct _Function_3_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &position,::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
					{
						struct _Function_4_1{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return position->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ::nape::geom::Vec2 &position){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((position != null())) && bool(position->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return position->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(579)
						Float x = _Function_4_1::Block(position);		HX_STACK_VAR(x,"x");
						Float y = _Function_4_2::Block(position);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(579)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(579)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(579)
							if ((_this1->_immutable)){
								HX_STACK_LINE(579)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(579)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(579)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(579)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(579)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_4_3{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return _this->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_4_4{
							inline static Float Block( ::nape::geom::Vec2 &_this){
								HX_STACK_PUSH("*::closure","nape/phys/Body.hx",579);
								{
									HX_STACK_LINE(579)
									if (((bool((_this != null())) && bool(_this->zpp_disp)))){
										HX_STACK_LINE(579)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(579)
									{
										HX_STACK_LINE(579)
										::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
										HX_STACK_LINE(579)
										if (((_this1->_validate_dyn() != null()))){
											HX_STACK_LINE(579)
											_this1->_validate();
										}
									}
									HX_STACK_LINE(579)
									return _this->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(579)
						if ((!(((bool((_Function_4_3::Block(_this) == x)) && bool((_Function_4_4::Block(_this) == y))))))){
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								_this->zpp_inner->x = x;
								HX_STACK_LINE(579)
								_this->zpp_inner->y = y;
								HX_STACK_LINE(579)
								{
								}
								HX_STACK_LINE(579)
								{
								}
							}
							HX_STACK_LINE(579)
							{
								HX_STACK_LINE(579)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(579)
								if (((_this1->_invalidate_dyn() != null()))){
									HX_STACK_LINE(579)
									_this1->_invalidate(_this1);
								}
							}
						}
						HX_STACK_LINE(579)
						return _this;
					}
					return null();
				}
			};
			HX_STACK_LINE(579)
			::nape::geom::Vec2 ret = _Function_3_2::Block(position,_this);		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(579)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(579)
				{
					HX_STACK_LINE(579)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(579)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2 _this1 = position->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(579)
						if ((_this1->_immutable)){
							HX_STACK_LINE(579)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(579)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(579)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(579)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(579)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(579)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(579)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(579)
					position->zpp_inner = null();
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(579)
						{
						}
						HX_STACK_LINE(579)
						o->zpp_pool = null();
						HX_STACK_LINE(579)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(579)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(579)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(579)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(579)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(579)
					{
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(579)
						{
						}
						HX_STACK_LINE(579)
						{
							HX_STACK_LINE(579)
							if (((o->outer != null()))){
								HX_STACK_LINE(579)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(579)
								o->outer = null();
							}
							HX_STACK_LINE(579)
							o->_isimmutable = null();
							HX_STACK_LINE(579)
							o->_validate = null();
							HX_STACK_LINE(579)
							o->_invalidate = null();
						}
						HX_STACK_LINE(579)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(579)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(579)
				true;
			}
			else{
				HX_STACK_LINE(579)
				false;
			}
			HX_STACK_LINE(579)
			ret;
		}
	}
	struct _Function_1_1{
		inline static ::nape::geom::Vec2 Block( ::nape::phys::Body_obj *__this){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",581);
			{
				HX_STACK_LINE(581)
				if (((__this->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(581)
					__this->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(581)
				return __this->zpp_inner->wrap_pos;
			}
			return null();
		}
	};
	HX_STACK_LINE(581)
	return _Function_1_1::Block(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_position,return )

::nape::geom::Vec2 Body_obj::get_position( ){
	HX_STACK_PUSH("Body::get_position","nape/phys/Body.hx",565);
	HX_STACK_THIS(this);
	HX_STACK_LINE(566)
	if (((this->zpp_inner->wrap_pos == null()))){
		HX_STACK_LINE(566)
		this->zpp_inner->setupPosition();
	}
	HX_STACK_LINE(567)
	return this->zpp_inner->wrap_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_position,return )

::nape::phys::Body Body_obj::copy( ){
	HX_STACK_PUSH("Body::copy","nape/phys/Body.hx",543);
	HX_STACK_THIS(this);
	HX_STACK_LINE(545)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(545)
		hx::Throw (HX_CSTRING("Error: Space::world cannot be copied"));
	}
	HX_STACK_LINE(547)
	return this->zpp_inner->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,copy,return )

::nape::constraint::ConstraintList Body_obj::get_constraints( ){
	HX_STACK_PUSH("Body::get_constraints","nape/phys/Body.hx",443);
	HX_STACK_THIS(this);
	HX_STACK_LINE(444)
	if (((this->zpp_inner->wrap_constraints == null()))){
		HX_STACK_LINE(444)
		this->zpp_inner->wrap_constraints = ::zpp_nape::util::ZPP_ConstraintList_obj::get(this->zpp_inner->constraints,true);
	}
	HX_STACK_LINE(445)
	return this->zpp_inner->wrap_constraints;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_constraints,return )

bool Body_obj::get_isSleeping( ){
	HX_STACK_PUSH("Body::get_isSleeping","nape/phys/Body.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_LINE(430)
	if (((this->zpp_inner->space == null()))){
		HX_STACK_LINE(430)
		hx::Throw (HX_CSTRING("Error: isSleeping makes no sense if the object is not contained within a Space"));
	}
	HX_STACK_LINE(432)
	return this->zpp_inner->component->sleeping;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isSleeping,return )

::nape::dynamics::ArbiterList Body_obj::get_arbiters( ){
	HX_STACK_PUSH("Body::get_arbiters","nape/phys/Body.hx",412);
	HX_STACK_THIS(this);
	HX_STACK_LINE(413)
	if (((this->zpp_inner->wrap_arbiters == null()))){
		HX_STACK_LINE(413)
		this->zpp_inner->wrap_arbiters = ::zpp_nape::util::ZPP_ArbiterList_obj::get(this->zpp_inner->arbiters,true);
	}
	HX_STACK_LINE(414)
	return this->zpp_inner->wrap_arbiters;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_arbiters,return )

::nape::space::Space Body_obj::set_space( ::nape::space::Space space){
	HX_STACK_PUSH("Body::set_space","nape/phys/Body.hx",388);
	HX_STACK_THIS(this);
	HX_STACK_ARG(space,"space");
	HX_STACK_LINE(389)
	{
		HX_STACK_LINE(391)
		if (((this->zpp_inner->compound != null()))){
			HX_STACK_LINE(391)
			hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
		}
		HX_STACK_LINE(393)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
		HX_STACK_LINE(395)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(395)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		HX_STACK_LINE(397)
		if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != space))){
			HX_STACK_LINE(398)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(398)
				this->zpp_inner->component->woken = false;
			}
			HX_STACK_LINE(399)
			if (((((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) )) != null()))){
				HX_STACK_LINE(399)
				((  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(400)
			if (((space != null()))){
				HX_STACK_LINE(400)
				::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(400)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(400)
					_this->push(hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(400)
					_this->unshift(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(403)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_space,return )

::nape::space::Space Body_obj::get_space( ){
	HX_STACK_PUSH("Body::get_space","nape/phys/Body.hx",385);
	HX_STACK_THIS(this);
	HX_STACK_LINE(385)
	return (  (((this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(this->zpp_inner->space->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_space,return )

::nape::phys::Compound Body_obj::set_compound( ::nape::phys::Compound compound){
	HX_STACK_PUSH("Body::set_compound","nape/phys/Body.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(compound,"compound");
	HX_STACK_LINE(367)
	if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != compound))){
		HX_STACK_LINE(369)
		if (((((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) )) != null()))){
			HX_STACK_LINE(369)
			((  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) ))->zpp_inner->wrap_bodies->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(370)
		if (((compound != null()))){
			HX_STACK_LINE(370)
			::nape::phys::BodyList _this = compound->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(370)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(370)
				_this->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(370)
				_this->unshift(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(373)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_compound,return )

::nape::phys::Compound Body_obj::get_compound( ){
	HX_STACK_PUSH("Body::get_compound","nape/phys/Body.hx",363);
	HX_STACK_THIS(this);
	HX_STACK_LINE(363)
	return (  (((this->zpp_inner->compound == null()))) ? ::nape::phys::Compound(null()) : ::nape::phys::Compound(this->zpp_inner->compound->outer) );
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_compound,return )

::nape::shape::ShapeList Body_obj::get_shapes( ){
	HX_STACK_PUSH("Body::get_shapes","nape/phys/Body.hx",349);
	HX_STACK_THIS(this);
	HX_STACK_LINE(349)
	return this->zpp_inner->wrap_shapes;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_shapes,return )

bool Body_obj::isKinematic( ){
	HX_STACK_PUSH("Body::isKinematic","nape/phys/Body.hx",337);
	HX_STACK_THIS(this);
	HX_STACK_LINE(337)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isKinematic,return )

bool Body_obj::isDynamic( ){
	HX_STACK_PUSH("Body::isDynamic","nape/phys/Body.hx",328);
	HX_STACK_THIS(this);
	HX_STACK_LINE(328)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isDynamic,return )

bool Body_obj::isStatic( ){
	HX_STACK_PUSH("Body::isStatic","nape/phys/Body.hx",319);
	HX_STACK_THIS(this);
	HX_STACK_LINE(319)
	return (this->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,isStatic,return )

::nape::phys::Body Body_obj::integrate( Float deltaTime){
	HX_STACK_PUSH("Body::integrate","nape/phys/Body.hx",295);
	HX_STACK_THIS(this);
	HX_STACK_ARG(deltaTime,"deltaTime");
	HX_STACK_LINE(297)
	if (((deltaTime != deltaTime))){
		HX_STACK_LINE(297)
		hx::Throw (HX_CSTRING("Cannot integrate by NaN time"));
	}
	HX_STACK_LINE(299)
	this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
	HX_STACK_LINE(301)
	if ((this->zpp_inner->world)){
		HX_STACK_LINE(301)
		hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
	}
	HX_STACK_LINE(303)
	if (((deltaTime == (int)0))){
		HX_STACK_LINE(303)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(304)
	::zpp_nape::phys::ZPP_Body cur = this->zpp_inner;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(305)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(306)
	cur->sweep_angvel = cur->angvel;
	HX_STACK_LINE(307)
	{
		HX_STACK_LINE(307)
		Float delta = (deltaTime - cur->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(307)
		if (((delta != (int)0))){
			HX_STACK_LINE(307)
			{
			}
			HX_STACK_LINE(307)
			cur->sweepTime = deltaTime;
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(307)
				{
				}
				HX_STACK_LINE(307)
				hx::AddEq(cur->posx,(cur->velx * t));
				HX_STACK_LINE(307)
				hx::AddEq(cur->posy,(cur->vely * t));
			}
			HX_STACK_LINE(307)
			if (((cur->angvel != (int)0))){
				HX_STACK_LINE(307)
				Float dr = (cur->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(307)
				hx::AddEq(cur->rot,dr);
				HX_STACK_LINE(307)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(307)
					cur->axisx = ::Math_obj::sin(cur->rot);
					HX_STACK_LINE(307)
					cur->axisy = ::Math_obj::cos(cur->rot);
					HX_STACK_LINE(307)
					{
					}
					HX_STACK_LINE(307)
					Dynamic();
				}
				else{
					HX_STACK_LINE(307)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(307)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(307)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(307)
					Float nx = ((((p * cur->axisx) + (dr * cur->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(307)
					cur->axisy = ((((p * cur->axisy) - (dr * cur->axisx))) * m);
					HX_STACK_LINE(307)
					cur->axisx = nx;
				}
			}
		}
	}
	HX_STACK_LINE(308)
	{
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(308)
			while(((cx_ite != null()))){
				HX_STACK_LINE(308)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(308)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(308)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(308)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(308)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(308)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(309)
	{
		HX_STACK_LINE(309)
		cur->zip_axis = true;
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = cur->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(309)
			while(((cx_ite != null()))){
				HX_STACK_LINE(309)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(309)
				{
					HX_STACK_LINE(309)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(309)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(309)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(309)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(309)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(309)
		cur->zip_worldCOM = true;
	}
	HX_STACK_LINE(310)
	cur->sweepTime = (int)0;
	HX_STACK_LINE(311)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,integrate,return )

bool Body_obj::set_disableCCD( bool disableCCD){
	HX_STACK_PUSH("Body::set_disableCCD","nape/phys/Body.hx",281);
	HX_STACK_THIS(this);
	HX_STACK_ARG(disableCCD,"disableCCD");
	HX_STACK_LINE(282)
	this->zpp_inner->disableCCD = disableCCD;
	HX_STACK_LINE(285)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_disableCCD,return )

bool Body_obj::get_disableCCD( ){
	HX_STACK_PUSH("Body::get_disableCCD","nape/phys/Body.hx",278);
	HX_STACK_THIS(this);
	HX_STACK_LINE(278)
	return this->zpp_inner->disableCCD;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_disableCCD,return )

bool Body_obj::set_isBullet( bool isBullet){
	HX_STACK_PUSH("Body::set_isBullet","nape/phys/Body.hx",262);
	HX_STACK_THIS(this);
	HX_STACK_ARG(isBullet,"isBullet");
	HX_STACK_LINE(263)
	this->zpp_inner->bulletEnabled = isBullet;
	HX_STACK_LINE(266)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_isBullet,return )

bool Body_obj::get_isBullet( ){
	HX_STACK_PUSH("Body::get_isBullet","nape/phys/Body.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_LINE(259)
	return this->zpp_inner->bulletEnabled;
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_isBullet,return )

::nape::phys::BodyType Body_obj::set_type( ::nape::phys::BodyType type){
	HX_STACK_PUSH("Body::set_type","nape/phys/Body.hx",200);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(202)
		this->zpp_inner->immutable_midstep(HX_CSTRING("Body::type"));
		HX_STACK_LINE(204)
		if ((this->zpp_inner->world)){
			HX_STACK_LINE(204)
			hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
		}
		struct _Function_2_1{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
				}
				return null();
			}
		};
		struct _Function_2_3{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","nape/phys/Body.hx",206);
				{
					HX_STACK_LINE(206)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(206)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(206)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(206)
		if (((Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_2_1::Block()).Add(_Function_2_2::Block()).Add(_Function_2_3::Block())->__get(this->zpp_inner->type) != type))){
			HX_STACK_LINE(208)
			if (((type == null()))){
				HX_STACK_LINE(208)
				hx::Throw (HX_CSTRING("Error: Cannot use null BodyType"));
			}
			struct _Function_3_1{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",210);
					{
						HX_STACK_LINE(210)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(210)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static ::nape::phys::BodyType Block( ){
					HX_STACK_PUSH("*::closure","nape/phys/Body.hx",210);
					{
						HX_STACK_LINE(210)
						if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = true;
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
							HX_STACK_LINE(210)
							::zpp_nape::util::ZPP_Flags_obj::internal = false;
						}
						HX_STACK_LINE(210)
						return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
					}
					return null();
				}
			};
			HX_STACK_LINE(210)
			int ntype = (  (((type == _Function_3_1::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC) : int((  (((type == _Function_3_2::Block()))) ? int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC) : int(::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC) )) );		HX_STACK_VAR(ntype,"ntype");
			HX_STACK_LINE(211)
			if (((bool((ntype == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->zpp_inner->space != null()))))){
				HX_STACK_LINE(212)
				{
					HX_STACK_LINE(213)
					this->zpp_inner->velx = (int)0;
					HX_STACK_LINE(214)
					this->zpp_inner->vely = (int)0;
					HX_STACK_LINE(215)
					{
					}
					HX_STACK_LINE(223)
					{
					}
				}
				HX_STACK_LINE(232)
				this->zpp_inner->angvel = (int)0;
			}
			HX_STACK_LINE(234)
			this->zpp_inner->invalidate_type();
			HX_STACK_LINE(235)
			if (((this->zpp_inner->space != null()))){
				HX_STACK_LINE(235)
				this->zpp_inner->space->transmitType(this->zpp_inner,ntype);
			}
			else{
				HX_STACK_LINE(236)
				this->zpp_inner->type = ntype;
			}
		}
	}
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",239);
			{
				HX_STACK_LINE(239)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(239)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(239)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(239)
	return Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->type);
}


HX_DEFINE_DYNAMIC_FUNC1(Body_obj,set_type,return )

::nape::phys::BodyType Body_obj::get_type( ){
	HX_STACK_PUSH("Body::get_type","nape/phys/Body.hx",197);
	HX_STACK_THIS(this);
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","nape/phys/Body.hx",198);
			{
				HX_STACK_LINE(198)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC == null()))){
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(198)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(198)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_KINEMATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(197)
	return Array_obj< ::nape::phys::BodyType >::__new().Add(null()).Add(_Function_1_1::Block()).Add(_Function_1_2::Block()).Add(_Function_1_3::Block())->__get(this->zpp_inner->type);
}


HX_DEFINE_DYNAMIC_FUNC0(Body_obj,get_type,return )


Body_obj::Body_obj()
{
}

void Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Body);
	HX_MARK_MEMBER_NAME(worldCOM,"worldCOM");
	HX_MARK_MEMBER_NAME(localCOM,"localCOM");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(constraintInertia,"constraintInertia");
	HX_MARK_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_MARK_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_MARK_MEMBER_NAME(gravMass,"gravMass");
	HX_MARK_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(constraintMass,"constraintMass");
	HX_MARK_MEMBER_NAME(massMode,"massMode");
	HX_MARK_MEMBER_NAME(allowRotation,"allowRotation");
	HX_MARK_MEMBER_NAME(allowMovement,"allowMovement");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(torque,"torque");
	HX_MARK_MEMBER_NAME(kinAngVel,"kinAngVel");
	HX_MARK_MEMBER_NAME(angularVel,"angularVel");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(constraintVelocity,"constraintVelocity");
	HX_MARK_MEMBER_NAME(force,"force");
	HX_MARK_MEMBER_NAME(surfaceVel,"surfaceVel");
	HX_MARK_MEMBER_NAME(kinematicVel,"kinematicVel");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(isSleeping,"isSleeping");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(disableCCD,"disableCCD");
	HX_MARK_MEMBER_NAME(isBullet,"isBullet");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(worldCOM,"worldCOM");
	HX_VISIT_MEMBER_NAME(localCOM,"localCOM");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(constraintInertia,"constraintInertia");
	HX_VISIT_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_VISIT_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_VISIT_MEMBER_NAME(gravMass,"gravMass");
	HX_VISIT_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(constraintMass,"constraintMass");
	HX_VISIT_MEMBER_NAME(massMode,"massMode");
	HX_VISIT_MEMBER_NAME(allowRotation,"allowRotation");
	HX_VISIT_MEMBER_NAME(allowMovement,"allowMovement");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(torque,"torque");
	HX_VISIT_MEMBER_NAME(kinAngVel,"kinAngVel");
	HX_VISIT_MEMBER_NAME(angularVel,"angularVel");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(constraintVelocity,"constraintVelocity");
	HX_VISIT_MEMBER_NAME(force,"force");
	HX_VISIT_MEMBER_NAME(surfaceVel,"surfaceVel");
	HX_VISIT_MEMBER_NAME(kinematicVel,"kinematicVel");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(isSleeping,"isSleeping");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(disableCCD,"disableCCD");
	HX_VISIT_MEMBER_NAME(isBullet,"isBullet");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { return inCallProp ? get_mass() : mass; }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align_dyn(); }
		if (HX_FIELD_EQ(inName,"force") ) { return inCallProp ? get_force() : force; }
		if (HX_FIELD_EQ(inName,"space") ) { return inCallProp ? get_space() : space; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return inCallProp ? get_bounds() : bounds; }
		if (HX_FIELD_EQ(inName,"torque") ) { return inCallProp ? get_torque() : torque; }
		if (HX_FIELD_EQ(inName,"shapes") ) { return inCallProp ? get_shapes() : shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { return inCallProp ? get_inertia() : inertia; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"worldCOM") ) { return inCallProp ? get_worldCOM() : worldCOM; }
		if (HX_FIELD_EQ(inName,"localCOM") ) { return inCallProp ? get_localCOM() : localCOM; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return inCallProp ? get_gravMass() : gravMass; }
		if (HX_FIELD_EQ(inName,"set_mass") ) { return set_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mass") ) { return get_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"massMode") ) { return inCallProp ? get_massMode() : massMode; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return inCallProp ? get_rotation() : rotation; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return inCallProp ? get_velocity() : velocity; }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return inCallProp ? get_arbiters() : arbiters; }
		if (HX_FIELD_EQ(inName,"compound") ) { return inCallProp ? get_compound() : compound; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"isBullet") ) { return inCallProp ? get_isBullet() : isBullet; }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { return inCallProp ? get_kinAngVel() : kinAngVel; }
		if (HX_FIELD_EQ(inName,"set_force") ) { return set_force_dyn(); }
		if (HX_FIELD_EQ(inName,"get_force") ) { return get_force_dyn(); }
		if (HX_FIELD_EQ(inName,"set_space") ) { return set_space_dyn(); }
		if (HX_FIELD_EQ(inName,"get_space") ) { return get_space_dyn(); }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		if (HX_FIELD_EQ(inName,"integrate") ) { return integrate_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_bounds") ) { return get_bounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set_torque") ) { return set_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"get_torque") ) { return get_torque_dyn(); }
		if (HX_FIELD_EQ(inName,"angularVel") ) { return inCallProp ? get_angularVel() : angularVel; }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { return inCallProp ? get_surfaceVel() : surfaceVel; }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { return inCallProp ? get_isSleeping() : isSleeping; }
		if (HX_FIELD_EQ(inName,"get_shapes") ) { return get_shapes_dyn(); }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return inCallProp ? get_disableCCD() : disableCCD; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dragImpulse") ) { return dragImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleShapes") ) { return scaleShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"crushFactor") ) { return crushFactor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertia") ) { return set_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertia") ) { return get_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return inCallProp ? get_inertiaMode() : inertiaMode; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return inCallProp ? get_constraints() : constraints; }
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalImpulse") ) { return totalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worldCOM") ) { return get_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_localCOM") ) { return get_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateShapes") ) { return rotateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"applyImpulse") ) { return applyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravMass") ) { return set_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMass") ) { return get_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return inCallProp ? get_gravMassMode() : gravMassMode; }
		if (HX_FIELD_EQ(inName,"set_massMode") ) { return set_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_massMode") ) { return get_massMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { return inCallProp ? get_kinematicVel() : kinematicVel; }
		if (HX_FIELD_EQ(inName,"set_velocity") ) { return set_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"get_arbiters") ) { return get_arbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_compound") ) { return set_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_compound") ) { return get_compound_dyn(); }
		if (HX_FIELD_EQ(inName,"set_isBullet") ) { return set_isBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isBullet") ) { return get_isBullet_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"normalImpulse") ) { return normalImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return inCallProp ? get_gravMassScale() : gravMassScale; }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { return inCallProp ? get_allowRotation() : allowRotation; }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { return inCallProp ? get_allowMovement() : allowMovement; }
		if (HX_FIELD_EQ(inName,"set_kinAngVel") ) { return set_kinAngVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_kinAngVel") ) { return get_kinAngVel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rollingImpulse") ) { return rollingImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"tangentImpulse") ) { return tangentImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintMass") ) { return inCallProp ? get_constraintMass() : constraintMass; }
		if (HX_FIELD_EQ(inName,"set_angularVel") ) { return set_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angularVel") ) { return get_angularVel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_surfaceVel") ) { return set_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_surfaceVel") ) { return get_surfaceVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isSleeping") ) { return get_isSleeping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_disableCCD") ) { return set_disableCCD_dyn(); }
		if (HX_FIELD_EQ(inName,"get_disableCCD") ) { return get_disableCCD_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buoyancyImpulse") ) { return buoyancyImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeFilters") ) { return setShapeFilters_dyn(); }
		if (HX_FIELD_EQ(inName,"transformShapes") ) { return transformShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"translateShapes") ) { return translateShapes_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertiaMode") ) { return set_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inertiaMode") ) { return get_inertiaMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraints") ) { return get_constraints_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_gravMassMode") ) { return set_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassMode") ) { return get_gravMassMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_kinematicVel") ) { return set_kinematicVel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_kinematicVel") ) { return get_kinematicVel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"totalFluidImpulse") ) { return totalFluidImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"setShapeMaterials") ) { return setShapeMaterials_dyn(); }
		if (HX_FIELD_EQ(inName,"worldPointToLocal") ) { return worldPointToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localPointToWorld") ) { return localPointToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintInertia") ) { return inCallProp ? get_constraintInertia() : constraintInertia; }
		if (HX_FIELD_EQ(inName,"set_gravMassScale") ) { return set_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravMassScale") ) { return get_gravMassScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowRotation") ) { return set_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowRotation") ) { return get_allowRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowMovement") ) { return set_allowMovement_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowMovement") ) { return get_allowMovement_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constraintsImpulse") ) { return constraintsImpulse_dyn(); }
		if (HX_FIELD_EQ(inName,"worldVectorToLocal") ) { return worldVectorToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localVectorToWorld") ) { return localVectorToWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"get_constraintMass") ) { return get_constraintMass_dyn(); }
		if (HX_FIELD_EQ(inName,"constraintVelocity") ) { return inCallProp ? get_constraintVelocity() : constraintVelocity; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"applyAngularImpulse") ) { return applyAngularImpulse_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalContactsImpulse") ) { return totalContactsImpulse_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_constraintInertia") ) { return get_constraintInertia_dyn(); }
		if (HX_FIELD_EQ(inName,"setVelocityFromTarget") ) { return setVelocityFromTarget_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_constraintVelocity") ) { return get_constraintVelocity_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setShapeFluidProperties") ) { return setShapeFluidProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mass") ) { if (inCallProp) return set_mass(inValue);mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return set_type(inValue);type=inValue.Cast< ::nape::phys::BodyType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"force") ) { if (inCallProp) return set_force(inValue);force=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { if (inCallProp) return set_space(inValue);space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::nape::geom::AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"torque") ) { if (inCallProp) return set_torque(inValue);torque=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inertia") ) { if (inCallProp) return set_inertia(inValue);inertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"worldCOM") ) { worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOM") ) { localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { if (inCallProp) return set_gravMass(inValue);gravMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"massMode") ) { if (inCallProp) return set_massMode(inValue);massMode=inValue.Cast< ::nape::phys::MassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp) return set_rotation(inValue);rotation=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp) return set_velocity(inValue);velocity=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp) return set_position(inValue);position=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { if (inCallProp) return set_compound(inValue);compound=inValue.Cast< ::nape::phys::Compound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBullet") ) { if (inCallProp) return set_isBullet(inValue);isBullet=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"kinAngVel") ) { if (inCallProp) return set_kinAngVel(inValue);kinAngVel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::phys::ZPP_Body >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angularVel") ) { if (inCallProp) return set_angularVel(inValue);angularVel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"surfaceVel") ) { if (inCallProp) return set_surfaceVel(inValue);surfaceVel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSleeping") ) { isSleeping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { if (inCallProp) return set_disableCCD(inValue);disableCCD=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { if (inCallProp) return set_inertiaMode(inValue);inertiaMode=inValue.Cast< ::nape::phys::InertiaMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { if (inCallProp) return set_gravMassMode(inValue);gravMassMode=inValue.Cast< ::nape::phys::GravMassMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinematicVel") ) { if (inCallProp) return set_kinematicVel(inValue);kinematicVel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { if (inCallProp) return set_gravMassScale(inValue);gravMassScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowRotation") ) { if (inCallProp) return set_allowRotation(inValue);allowRotation=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowMovement") ) { if (inCallProp) return set_allowMovement(inValue);allowMovement=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"constraintMass") ) { constraintMass=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"constraintInertia") ) { constraintInertia=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"constraintVelocity") ) { constraintVelocity=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("worldCOM"));
	outFields->push(HX_CSTRING("localCOM"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("constraintInertia"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("constraintMass"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("allowRotation"));
	outFields->push(HX_CSTRING("allowMovement"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("kinAngVel"));
	outFields->push(HX_CSTRING("angularVel"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("constraintVelocity"));
	outFields->push(HX_CSTRING("force"));
	outFields->push(HX_CSTRING("surfaceVel"));
	outFields->push(HX_CSTRING("kinematicVel"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("isSleeping"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("isBullet"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("debugDraw"));
	outFields->push(HX_CSTRING("zpp_inner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("contains"),
	HX_CSTRING("totalImpulse"),
	HX_CSTRING("constraintsImpulse"),
	HX_CSTRING("totalFluidImpulse"),
	HX_CSTRING("dragImpulse"),
	HX_CSTRING("buoyancyImpulse"),
	HX_CSTRING("rollingImpulse"),
	HX_CSTRING("totalContactsImpulse"),
	HX_CSTRING("tangentImpulse"),
	HX_CSTRING("normalImpulse"),
	HX_CSTRING("get_worldCOM"),
	HX_CSTRING("worldCOM"),
	HX_CSTRING("get_localCOM"),
	HX_CSTRING("localCOM"),
	HX_CSTRING("setShapeFluidProperties"),
	HX_CSTRING("setShapeFilters"),
	HX_CSTRING("setShapeMaterials"),
	HX_CSTRING("rotate"),
	HX_CSTRING("align"),
	HX_CSTRING("transformShapes"),
	HX_CSTRING("scaleShapes"),
	HX_CSTRING("rotateShapes"),
	HX_CSTRING("translateShapes"),
	HX_CSTRING("applyAngularImpulse"),
	HX_CSTRING("applyImpulse"),
	HX_CSTRING("worldVectorToLocal"),
	HX_CSTRING("localVectorToWorld"),
	HX_CSTRING("worldPointToLocal"),
	HX_CSTRING("localPointToWorld"),
	HX_CSTRING("crushFactor"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("set_inertia"),
	HX_CSTRING("get_inertia"),
	HX_CSTRING("inertia"),
	HX_CSTRING("get_constraintInertia"),
	HX_CSTRING("constraintInertia"),
	HX_CSTRING("set_inertiaMode"),
	HX_CSTRING("get_inertiaMode"),
	HX_CSTRING("inertiaMode"),
	HX_CSTRING("set_gravMassScale"),
	HX_CSTRING("get_gravMassScale"),
	HX_CSTRING("gravMassScale"),
	HX_CSTRING("set_gravMass"),
	HX_CSTRING("get_gravMass"),
	HX_CSTRING("gravMass"),
	HX_CSTRING("set_gravMassMode"),
	HX_CSTRING("get_gravMassMode"),
	HX_CSTRING("gravMassMode"),
	HX_CSTRING("set_mass"),
	HX_CSTRING("get_mass"),
	HX_CSTRING("mass"),
	HX_CSTRING("get_constraintMass"),
	HX_CSTRING("constraintMass"),
	HX_CSTRING("set_massMode"),
	HX_CSTRING("get_massMode"),
	HX_CSTRING("massMode"),
	HX_CSTRING("set_allowRotation"),
	HX_CSTRING("get_allowRotation"),
	HX_CSTRING("allowRotation"),
	HX_CSTRING("set_allowMovement"),
	HX_CSTRING("get_allowMovement"),
	HX_CSTRING("allowMovement"),
	HX_CSTRING("get_bounds"),
	HX_CSTRING("bounds"),
	HX_CSTRING("set_torque"),
	HX_CSTRING("get_torque"),
	HX_CSTRING("torque"),
	HX_CSTRING("set_kinAngVel"),
	HX_CSTRING("get_kinAngVel"),
	HX_CSTRING("kinAngVel"),
	HX_CSTRING("set_angularVel"),
	HX_CSTRING("get_angularVel"),
	HX_CSTRING("angularVel"),
	HX_CSTRING("set_rotation"),
	HX_CSTRING("get_rotation"),
	HX_CSTRING("rotation"),
	HX_CSTRING("get_constraintVelocity"),
	HX_CSTRING("constraintVelocity"),
	HX_CSTRING("set_force"),
	HX_CSTRING("get_force"),
	HX_CSTRING("force"),
	HX_CSTRING("set_surfaceVel"),
	HX_CSTRING("get_surfaceVel"),
	HX_CSTRING("surfaceVel"),
	HX_CSTRING("set_kinematicVel"),
	HX_CSTRING("get_kinematicVel"),
	HX_CSTRING("kinematicVel"),
	HX_CSTRING("setVelocityFromTarget"),
	HX_CSTRING("set_velocity"),
	HX_CSTRING("get_velocity"),
	HX_CSTRING("velocity"),
	HX_CSTRING("set_position"),
	HX_CSTRING("get_position"),
	HX_CSTRING("position"),
	HX_CSTRING("copy"),
	HX_CSTRING("get_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("get_isSleeping"),
	HX_CSTRING("isSleeping"),
	HX_CSTRING("get_arbiters"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("set_space"),
	HX_CSTRING("get_space"),
	HX_CSTRING("space"),
	HX_CSTRING("set_compound"),
	HX_CSTRING("get_compound"),
	HX_CSTRING("compound"),
	HX_CSTRING("get_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("integrate"),
	HX_CSTRING("set_disableCCD"),
	HX_CSTRING("get_disableCCD"),
	HX_CSTRING("disableCCD"),
	HX_CSTRING("set_isBullet"),
	HX_CSTRING("get_isBullet"),
	HX_CSTRING("isBullet"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_type"),
	HX_CSTRING("type"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("zpp_inner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Body_obj::__mClass,"__mClass");
};

Class Body_obj::__mClass;

void Body_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.phys.Body"), hx::TCanCast< Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Body_obj::__boot()
{
}

} // end namespace nape
} // end namespace phys
