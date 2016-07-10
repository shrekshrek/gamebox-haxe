#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_constraint_ConstraintList
#include <nape/constraint/ConstraintList.h>
#endif
#ifndef INCLUDED_nape_dynamics_ArbiterList
#include <nape/dynamics/ArbiterList.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
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
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Circle
#include <zpp_nape/shape/ZPP_Circle.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Edge
#include <zpp_nape/shape/ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Polygon
#include <zpp_nape/shape/ZPP_Polygon.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_AABBPair
#include <zpp_nape/space/ZPP_AABBPair.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Broadphase
#include <zpp_nape/space/ZPP_Broadphase.h>
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
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Body
#include <zpp_nape/util/ZNPList_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_CbType
#include <zpp_nape/util/ZNPList_ZPP_CbType.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Constraint
#include <zpp_nape/util/ZNPList_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Edge
#include <zpp_nape/util/ZNPList_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_FluidArbiter
#include <zpp_nape/util/ZNPList_ZPP_FluidArbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Shape
#include <zpp_nape/util/ZNPList_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Arbiter
#include <zpp_nape/util/ZNPNode_ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Body
#include <zpp_nape/util/ZNPNode_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Constraint
#include <zpp_nape/util/ZNPNode_ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Edge
#include <zpp_nape/util/ZNPNode_ZPP_Edge.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Shape
#include <zpp_nape/util/ZNPNode_ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Set_ZPP_Body
#include <zpp_nape/util/ZPP_Set_ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace zpp_nape{
namespace phys{

Void ZPP_Body_obj::__construct()
{
HX_STACK_PUSH("ZPP_Body::new","zpp_nape/phys/Body.hx",174);
{
	HX_STACK_LINE(1036)
	this->wrap_worldCOM = null();
	HX_STACK_LINE(1035)
	this->wrap_localCOM = null();
	HX_STACK_LINE(1034)
	this->zip_worldCOM = false;
	HX_STACK_LINE(1033)
	this->worldCOMy = 0.0;
	HX_STACK_LINE(1032)
	this->worldCOMx = 0.0;
	HX_STACK_LINE(1031)
	this->zip_localCOM = false;
	HX_STACK_LINE(1030)
	this->localCOMy = 0.0;
	HX_STACK_LINE(1029)
	this->localCOMx = 0.0;
	HX_STACK_LINE(963)
	this->zip_aabb = false;
	HX_STACK_LINE(962)
	this->aabb = null();
	HX_STACK_LINE(922)
	this->norotate = false;
	HX_STACK_LINE(921)
	this->sinertia = 0.0;
	HX_STACK_LINE(920)
	this->iinertia = 0.0;
	HX_STACK_LINE(919)
	this->cinertia = 0.0;
	HX_STACK_LINE(918)
	this->zip_inertia = false;
	HX_STACK_LINE(917)
	this->inertia = 0.0;
	HX_STACK_LINE(916)
	this->inertiaMode = (int)0;
	HX_STACK_LINE(882)
	this->zip_gravMassScale = false;
	HX_STACK_LINE(881)
	this->gravMassScale = 0.0;
	HX_STACK_LINE(880)
	this->gravMassMode = (int)0;
	HX_STACK_LINE(879)
	this->zip_gravMass = false;
	HX_STACK_LINE(878)
	this->gravMass = 0.0;
	HX_STACK_LINE(843)
	this->nomove = false;
	HX_STACK_LINE(842)
	this->cmass = 0.0;
	HX_STACK_LINE(841)
	this->smass = 0.0;
	HX_STACK_LINE(840)
	this->imass = 0.0;
	HX_STACK_LINE(839)
	this->massMode = (int)0;
	HX_STACK_LINE(838)
	this->zip_mass = false;
	HX_STACK_LINE(837)
	this->mass = 0.0;
	HX_STACK_LINE(791)
	this->zip_axis = false;
	HX_STACK_LINE(790)
	this->axisy = 0.0;
	HX_STACK_LINE(789)
	this->axisx = 0.0;
	HX_STACK_LINE(768)
	this->rot = 0.0;
	HX_STACK_LINE(767)
	this->pre_rot = 0.0;
	HX_STACK_LINE(766)
	this->kinangvel = 0.0;
	HX_STACK_LINE(765)
	this->torque = 0.0;
	HX_STACK_LINE(764)
	this->angvel = 0.0;
	HX_STACK_LINE(757)
	this->wrapcvel = null();
	HX_STACK_LINE(451)
	this->wrap_svel = null();
	HX_STACK_LINE(450)
	this->svely = 0.0;
	HX_STACK_LINE(449)
	this->svelx = 0.0;
	HX_STACK_LINE(448)
	this->wrap_kinvel = null();
	HX_STACK_LINE(447)
	this->kinvely = 0.0;
	HX_STACK_LINE(446)
	this->kinvelx = 0.0;
	HX_STACK_LINE(445)
	this->wrap_force = null();
	HX_STACK_LINE(444)
	this->forcey = 0.0;
	HX_STACK_LINE(443)
	this->forcex = 0.0;
	HX_STACK_LINE(442)
	this->wrap_vel = null();
	HX_STACK_LINE(441)
	this->vely = 0.0;
	HX_STACK_LINE(440)
	this->velx = 0.0;
	HX_STACK_LINE(439)
	this->wrap_pos = null();
	HX_STACK_LINE(438)
	this->posy = 0.0;
	HX_STACK_LINE(437)
	this->posx = 0.0;
	HX_STACK_LINE(436)
	this->pre_posy = 0.0;
	HX_STACK_LINE(435)
	this->pre_posx = 0.0;
	HX_STACK_LINE(333)
	this->disableCCD = false;
	HX_STACK_LINE(332)
	this->bulletEnabled = false;
	HX_STACK_LINE(331)
	this->bullet = false;
	HX_STACK_LINE(330)
	this->sweepRadius = 0.0;
	HX_STACK_LINE(329)
	this->sweepFrozen = false;
	HX_STACK_LINE(328)
	this->sweep_angvel = 0.0;
	HX_STACK_LINE(327)
	this->sweepTime = 0.0;
	HX_STACK_LINE(205)
	this->graph_depth = (int)0;
	HX_STACK_LINE(202)
	this->component = null();
	HX_STACK_LINE(201)
	this->wrap_constraints = null();
	HX_STACK_LINE(200)
	this->constraints = null();
	HX_STACK_LINE(199)
	this->wrap_arbiters = null();
	HX_STACK_LINE(198)
	this->arbiters = null();
	HX_STACK_LINE(197)
	this->space = null();
	HX_STACK_LINE(190)
	this->wrap_shapes = null();
	HX_STACK_LINE(189)
	this->shapes = null();
	HX_STACK_LINE(188)
	this->compound = null();
	HX_STACK_LINE(177)
	this->type = (int)0;
	HX_STACK_LINE(176)
	this->world = false;
	HX_STACK_LINE(175)
	this->outer = null();
	HX_STACK_LINE(1407)
	super::__construct();
	HX_STACK_LINE(1408)
	this->ibody = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(1409)
	this->world = false;
	HX_STACK_LINE(1410)
	this->bulletEnabled = false;
	HX_STACK_LINE(1411)
	this->sweepTime = (int)0;
	HX_STACK_LINE(1412)
	this->sweep_angvel = (int)0;
	HX_STACK_LINE(1413)
	this->norotate = this->nomove = false;
	HX_STACK_LINE(1414)
	this->disableCCD = false;
	HX_STACK_LINE(1415)
	{
		HX_STACK_LINE(1416)
		this->posx = (int)0;
		HX_STACK_LINE(1417)
		this->posy = (int)0;
		HX_STACK_LINE(1418)
		{
		}
		HX_STACK_LINE(1426)
		{
		}
	}
	HX_STACK_LINE(1435)
	this->rot = (int)0;
	HX_STACK_LINE(1436)
	{
		HX_STACK_LINE(1437)
		this->axisx = (int)0;
		HX_STACK_LINE(1438)
		this->axisy = (int)1;
		HX_STACK_LINE(1439)
		{
		}
		HX_STACK_LINE(1447)
		{
		}
	}
	HX_STACK_LINE(1456)
	{
		HX_STACK_LINE(1457)
		this->svelx = (int)0;
		HX_STACK_LINE(1458)
		this->svely = (int)0;
		HX_STACK_LINE(1459)
		{
		}
		HX_STACK_LINE(1467)
		{
		}
	}
	HX_STACK_LINE(1476)
	{
		HX_STACK_LINE(1477)
		this->velx = (int)0;
		HX_STACK_LINE(1478)
		this->vely = (int)0;
		HX_STACK_LINE(1479)
		{
		}
		HX_STACK_LINE(1487)
		{
		}
	}
	HX_STACK_LINE(1496)
	{
		HX_STACK_LINE(1497)
		this->kinvelx = (int)0;
		HX_STACK_LINE(1498)
		this->kinvely = (int)0;
		HX_STACK_LINE(1499)
		{
		}
		HX_STACK_LINE(1507)
		{
		}
	}
	HX_STACK_LINE(1516)
	{
		HX_STACK_LINE(1517)
		this->forcex = (int)0;
		HX_STACK_LINE(1518)
		this->forcey = (int)0;
		HX_STACK_LINE(1519)
		{
		}
		HX_STACK_LINE(1527)
		{
		}
	}
	HX_STACK_LINE(1536)
	this->torque = this->angvel = this->kinangvel = (int)0;
	HX_STACK_LINE(1537)
	{
		HX_STACK_LINE(1538)
		this->pre_posx = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1539)
		this->pre_posy = ::Math_obj::POSITIVE_INFINITY;
		HX_STACK_LINE(1540)
		{
		}
		HX_STACK_LINE(1548)
		{
		}
	}
	HX_STACK_LINE(1557)
	this->pre_rot = ::Math_obj::POSITIVE_INFINITY;
	HX_STACK_LINE(1558)
	{
		HX_STACK_LINE(1559)
		this->localCOMx = (int)0;
		HX_STACK_LINE(1560)
		this->localCOMy = (int)0;
		HX_STACK_LINE(1561)
		{
		}
		HX_STACK_LINE(1569)
		{
		}
	}
	HX_STACK_LINE(1578)
	{
		HX_STACK_LINE(1579)
		this->worldCOMx = (int)0;
		HX_STACK_LINE(1580)
		this->worldCOMy = (int)0;
		HX_STACK_LINE(1581)
		{
		}
		HX_STACK_LINE(1589)
		{
		}
	}
	HX_STACK_LINE(1598)
	this->zip_aabb = true;
	struct _Function_1_1{
		inline static ::zpp_nape::geom::ZPP_AABB Block( ){
			HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",1599);
			{
				HX_STACK_LINE(1599)
				::zpp_nape::geom::ZPP_AABB ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(1599)
				{
					HX_STACK_LINE(1599)
					if (((::zpp_nape::geom::ZPP_AABB_obj::zpp_pool == null()))){
						HX_STACK_LINE(1599)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::__new();
					}
					else{
						HX_STACK_LINE(1599)
						ret = ::zpp_nape::geom::ZPP_AABB_obj::zpp_pool;
						HX_STACK_LINE(1599)
						::zpp_nape::geom::ZPP_AABB_obj::zpp_pool = ret->next;
						HX_STACK_LINE(1599)
						ret->next = null();
					}
					HX_STACK_LINE(1599)
					Dynamic();
				}
				HX_STACK_LINE(1599)
				{
					HX_STACK_LINE(1599)
					ret->minx = (int)0;
					HX_STACK_LINE(1599)
					ret->miny = (int)0;
					HX_STACK_LINE(1599)
					{
					}
					HX_STACK_LINE(1599)
					{
					}
				}
				HX_STACK_LINE(1599)
				{
					HX_STACK_LINE(1599)
					ret->maxx = (int)0;
					HX_STACK_LINE(1599)
					ret->maxy = (int)0;
					HX_STACK_LINE(1599)
					{
					}
					HX_STACK_LINE(1599)
					{
					}
				}
				HX_STACK_LINE(1599)
				return ret;
			}
			return null();
		}
	};
	HX_STACK_LINE(1599)
	this->aabb = _Function_1_1::Block();
	HX_STACK_LINE(1600)
	this->aabb->_immutable = true;
	HX_STACK_LINE(1601)
	::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
	HX_STACK_LINE(1602)
	this->aabb->_validate = this->aabb_validate_dyn();
	HX_STACK_LINE(1603)
	this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
	HX_STACK_LINE(1604)
	this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
	HX_STACK_LINE(1605)
	this->gravMassScale = 1.0;
	HX_STACK_LINE(1606)
	this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
	HX_STACK_LINE(1607)
	this->arbiters = ::zpp_nape::util::ZNPList_ZPP_Arbiter_obj::__new();
	HX_STACK_LINE(1608)
	this->constraints = ::zpp_nape::util::ZNPList_ZPP_Constraint_obj::__new();
	HX_STACK_LINE(1609)
	this->shapes = ::zpp_nape::util::ZNPList_ZPP_Shape_obj::__new();
	HX_STACK_LINE(1610)
	this->wrap_shapes = ::zpp_nape::util::ZPP_ShapeList_obj::get(this->shapes,null());
	HX_STACK_LINE(1611)
	this->wrap_shapes->zpp_inner->adder = this->shapes_adder_dyn();
	HX_STACK_LINE(1612)
	this->wrap_shapes->zpp_inner->subber = this->shapes_subber_dyn();
	HX_STACK_LINE(1613)
	this->wrap_shapes->zpp_inner->_invalidate = this->shapes_invalidate_dyn();
	HX_STACK_LINE(1615)
	this->wrap_shapes->zpp_inner->_modifiable = this->shapes_modifiable_dyn();
}
;
	return null();
}

ZPP_Body_obj::~ZPP_Body_obj() { }

Dynamic ZPP_Body_obj::__CreateEmpty() { return  new ZPP_Body_obj; }
hx::ObjectPtr< ZPP_Body_obj > ZPP_Body_obj::__new()
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

Dynamic ZPP_Body_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_Body_obj > result = new ZPP_Body_obj();
	result->__construct();
	return result;}

::nape::phys::Body ZPP_Body_obj::copy( ){
	HX_STACK_PUSH("ZPP_Body::copy","zpp_nape/phys/Body.hx",1673);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1674)
	::zpp_nape::phys::ZPP_Body ret = ::nape::phys::Body_obj::__new(null(),null())->zpp_inner;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1675)
	ret->type = this->type;
	HX_STACK_LINE(1676)
	ret->bulletEnabled = this->bulletEnabled;
	HX_STACK_LINE(1677)
	ret->disableCCD = this->disableCCD;
	HX_STACK_LINE(1678)
	{
		HX_STACK_LINE(1679)
		::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(1680)
		while(((cx_ite != null()))){
			HX_STACK_LINE(1681)
			::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1682)
			{
				HX_STACK_LINE(1683)
				::nape::shape::ShapeList _this = ret->outer->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
				::nape::shape::Shape obj = s->outer->copy();		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(1683)
				if ((_this->zpp_inner->reverse_flag)){
					HX_STACK_LINE(1683)
					_this->push(obj);
				}
				else{
					HX_STACK_LINE(1683)
					_this->unshift(obj);
				}
			}
			HX_STACK_LINE(1685)
			cx_ite = cx_ite->next;
		}
	}
	HX_STACK_LINE(1688)
	{
		HX_STACK_LINE(1689)
		ret->posx = this->posx;
		HX_STACK_LINE(1690)
		ret->posy = this->posy;
		HX_STACK_LINE(1691)
		{
		}
		HX_STACK_LINE(1699)
		{
		}
	}
	HX_STACK_LINE(1708)
	{
		HX_STACK_LINE(1709)
		ret->velx = this->velx;
		HX_STACK_LINE(1710)
		ret->vely = this->vely;
		HX_STACK_LINE(1711)
		{
		}
		HX_STACK_LINE(1719)
		{
		}
	}
	HX_STACK_LINE(1728)
	{
		HX_STACK_LINE(1729)
		ret->forcex = this->forcex;
		HX_STACK_LINE(1730)
		ret->forcey = this->forcey;
		HX_STACK_LINE(1731)
		{
		}
		HX_STACK_LINE(1739)
		{
		}
	}
	HX_STACK_LINE(1748)
	ret->rot = this->rot;
	HX_STACK_LINE(1749)
	ret->angvel = this->angvel;
	HX_STACK_LINE(1750)
	ret->torque = this->torque;
	HX_STACK_LINE(1751)
	{
		HX_STACK_LINE(1752)
		ret->kinvelx = this->kinvelx;
		HX_STACK_LINE(1753)
		ret->kinvely = this->kinvely;
		HX_STACK_LINE(1754)
		{
		}
		HX_STACK_LINE(1762)
		{
		}
	}
	HX_STACK_LINE(1771)
	ret->kinangvel = this->kinangvel;
	HX_STACK_LINE(1772)
	{
		HX_STACK_LINE(1773)
		ret->svelx = this->svelx;
		HX_STACK_LINE(1774)
		ret->svely = this->svely;
		HX_STACK_LINE(1775)
		{
		}
		HX_STACK_LINE(1783)
		{
		}
	}
	HX_STACK_LINE(1792)
	if ((!(this->zip_axis))){
		HX_STACK_LINE(1793)
		ret->axisx = this->axisx;
		HX_STACK_LINE(1794)
		ret->axisy = this->axisy;
		HX_STACK_LINE(1795)
		{
		}
		HX_STACK_LINE(1803)
		{
		}
	}
	else{
		HX_STACK_LINE(1812)
		ret->zip_axis = true;
		HX_STACK_LINE(1812)
		{
			HX_STACK_LINE(1812)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = ret->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(1812)
			while(((cx_ite != null()))){
				HX_STACK_LINE(1812)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(1812)
				{
					HX_STACK_LINE(1812)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(1812)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(1812)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(1812)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(1812)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(1812)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1813)
	ret->rot = this->rot;
	HX_STACK_LINE(1814)
	ret->massMode = this->massMode;
	HX_STACK_LINE(1815)
	ret->gravMassMode = this->gravMassMode;
	HX_STACK_LINE(1816)
	ret->inertiaMode = this->inertiaMode;
	HX_STACK_LINE(1817)
	if ((!(this->zip_mass))){
		HX_STACK_LINE(1817)
		ret->mass = this->mass;
	}
	else{
		HX_STACK_LINE(1818)
		ret->invalidate_mass();
	}
	HX_STACK_LINE(1819)
	if ((!(this->zip_gravMass))){
		HX_STACK_LINE(1819)
		ret->gravMass = this->gravMass;
	}
	else{
		HX_STACK_LINE(1820)
		ret->invalidate_gravMass();
	}
	HX_STACK_LINE(1821)
	if ((!(this->zip_gravMassScale))){
		HX_STACK_LINE(1821)
		ret->gravMassScale = this->gravMassScale;
	}
	else{
		HX_STACK_LINE(1822)
		ret->invalidate_gravMassScale();
	}
	HX_STACK_LINE(1823)
	if ((!(this->zip_inertia))){
		HX_STACK_LINE(1823)
		ret->inertia = this->inertia;
	}
	else{
		HX_STACK_LINE(1824)
		ret->invalidate_inertia();
	}
	HX_STACK_LINE(1825)
	if ((!(this->zip_aabb))){
		HX_STACK_LINE(1826)
		{
			HX_STACK_LINE(1827)
			ret->aabb->minx = this->aabb->minx;
			HX_STACK_LINE(1828)
			ret->aabb->miny = this->aabb->miny;
			HX_STACK_LINE(1829)
			{
			}
			HX_STACK_LINE(1837)
			{
			}
		}
		HX_STACK_LINE(1846)
		{
			HX_STACK_LINE(1847)
			ret->aabb->maxx = this->aabb->maxx;
			HX_STACK_LINE(1848)
			ret->aabb->maxy = this->aabb->maxy;
			HX_STACK_LINE(1849)
			{
			}
			HX_STACK_LINE(1857)
			{
			}
		}
	}
	else{
		HX_STACK_LINE(1867)
		ret->zip_aabb = true;
	}
	HX_STACK_LINE(1868)
	if ((!(this->zip_localCOM))){
		HX_STACK_LINE(1869)
		ret->localCOMx = this->localCOMx;
		HX_STACK_LINE(1870)
		ret->localCOMy = this->localCOMy;
		HX_STACK_LINE(1871)
		{
		}
		HX_STACK_LINE(1879)
		{
		}
	}
	else{
		HX_STACK_LINE(1888)
		ret->zip_localCOM = true;
		HX_STACK_LINE(1888)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1889)
	if ((!(this->zip_worldCOM))){
		HX_STACK_LINE(1890)
		ret->worldCOMx = this->worldCOMx;
		HX_STACK_LINE(1891)
		ret->worldCOMy = this->worldCOMy;
		HX_STACK_LINE(1892)
		{
		}
		HX_STACK_LINE(1900)
		{
		}
	}
	else{
		HX_STACK_LINE(1909)
		ret->zip_worldCOM = true;
	}
	HX_STACK_LINE(1910)
	this->copyto(ret->outer);
	HX_STACK_LINE(1911)
	return ret->outer;
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,copy,return )

Void ZPP_Body_obj::removedFromSpace( ){
{
		HX_STACK_PUSH("ZPP_Body::removedFromSpace","zpp_nape/phys/Body.hx",1648);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1649)
		while((!(((this->arbiters->head == null()))))){
			HX_STACK_LINE(1650)
			::zpp_nape::dynamics::ZPP_Arbiter arb = this->arbiters->pop_unsafe();		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(1651)
			{
				HX_STACK_LINE(1651)
				{
				}
				HX_STACK_LINE(1651)
				arb->cleared = true;
				HX_STACK_LINE(1651)
				if (((arb->b2 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1651)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b1->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1651)
					{
					}
					HX_STACK_LINE(1651)
					{
						HX_STACK_LINE(1651)
						{
						}
						HX_STACK_LINE(1651)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1651)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1651)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1651)
						while(((cur != null()))){
							HX_STACK_LINE(1651)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1651)
								{
									HX_STACK_LINE(1651)
									{
									}
									HX_STACK_LINE(1651)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1651)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1651)
									if (((pre == null()))){
										HX_STACK_LINE(1651)
										old = _this->head;
										HX_STACK_LINE(1651)
										ret1 = old->next;
										HX_STACK_LINE(1651)
										_this->head = ret1;
										HX_STACK_LINE(1651)
										if (((_this->head == null()))){
											HX_STACK_LINE(1651)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1651)
										old = pre->next;
										HX_STACK_LINE(1651)
										ret1 = old->next;
										HX_STACK_LINE(1651)
										pre->next = ret1;
										HX_STACK_LINE(1651)
										if (((ret1 == null()))){
											HX_STACK_LINE(1651)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1651)
									{
									}
									HX_STACK_LINE(1651)
									{
										HX_STACK_LINE(1651)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1651)
										{
										}
										HX_STACK_LINE(1651)
										o->elt = null();
										HX_STACK_LINE(1651)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1651)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1651)
									_this->modified = true;
									HX_STACK_LINE(1651)
									(_this->length)--;
									HX_STACK_LINE(1651)
									_this->pushmod = true;
									HX_STACK_LINE(1651)
									ret1;
								}
								HX_STACK_LINE(1651)
								ret = true;
								HX_STACK_LINE(1651)
								break;
							}
							HX_STACK_LINE(1651)
							pre = cur;
							HX_STACK_LINE(1651)
							cur = cur->next;
						}
						HX_STACK_LINE(1651)
						ret;
					}
				}
				HX_STACK_LINE(1651)
				if (((arb->b1 == hx::ObjectPtr<OBJ_>(this)))){
					HX_STACK_LINE(1651)
					::zpp_nape::util::ZNPList_ZPP_Arbiter _this = arb->b2->arbiters;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1651)
					{
					}
					HX_STACK_LINE(1651)
					{
						HX_STACK_LINE(1651)
						{
						}
						HX_STACK_LINE(1651)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter pre = null();		HX_STACK_VAR(pre,"pre");
						HX_STACK_LINE(1651)
						::zpp_nape::util::ZNPNode_ZPP_Arbiter cur = _this->head;		HX_STACK_VAR(cur,"cur");
						HX_STACK_LINE(1651)
						bool ret = false;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1651)
						while(((cur != null()))){
							HX_STACK_LINE(1651)
							if (((cur->elt == arb))){
								HX_STACK_LINE(1651)
								{
									HX_STACK_LINE(1651)
									{
									}
									HX_STACK_LINE(1651)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter old;		HX_STACK_VAR(old,"old");
									HX_STACK_LINE(1651)
									::zpp_nape::util::ZNPNode_ZPP_Arbiter ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(1651)
									if (((pre == null()))){
										HX_STACK_LINE(1651)
										old = _this->head;
										HX_STACK_LINE(1651)
										ret1 = old->next;
										HX_STACK_LINE(1651)
										_this->head = ret1;
										HX_STACK_LINE(1651)
										if (((_this->head == null()))){
											HX_STACK_LINE(1651)
											_this->pushmod = true;
										}
									}
									else{
										HX_STACK_LINE(1651)
										old = pre->next;
										HX_STACK_LINE(1651)
										ret1 = old->next;
										HX_STACK_LINE(1651)
										pre->next = ret1;
										HX_STACK_LINE(1651)
										if (((ret1 == null()))){
											HX_STACK_LINE(1651)
											_this->pushmod = true;
										}
									}
									HX_STACK_LINE(1651)
									{
									}
									HX_STACK_LINE(1651)
									{
										HX_STACK_LINE(1651)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter o = old;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1651)
										{
										}
										HX_STACK_LINE(1651)
										o->elt = null();
										HX_STACK_LINE(1651)
										o->next = ::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool;
										HX_STACK_LINE(1651)
										::zpp_nape::util::ZNPNode_ZPP_Arbiter_obj::zpp_pool = o;
									}
									HX_STACK_LINE(1651)
									_this->modified = true;
									HX_STACK_LINE(1651)
									(_this->length)--;
									HX_STACK_LINE(1651)
									_this->pushmod = true;
									HX_STACK_LINE(1651)
									ret1;
								}
								HX_STACK_LINE(1651)
								ret = true;
								HX_STACK_LINE(1651)
								break;
							}
							HX_STACK_LINE(1651)
							pre = cur;
							HX_STACK_LINE(1651)
							cur = cur->next;
						}
						HX_STACK_LINE(1651)
						ret;
					}
				}
				HX_STACK_LINE(1651)
				if (((arb->pair != null()))){
					HX_STACK_LINE(1651)
					arb->pair->arb = null();
					HX_STACK_LINE(1651)
					arb->pair = null();
				}
				HX_STACK_LINE(1651)
				arb->active = false;
				HX_STACK_LINE(1651)
				this->space->f_arbiters->modified = true;
			}
		}
		HX_STACK_LINE(1653)
		{
			HX_STACK_LINE(1654)
			::zpp_nape::space::ZPP_Component o = this->component;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(1655)
			{
			}
			HX_STACK_LINE(1663)
			{
				HX_STACK_LINE(1663)
				o->body = null();
				HX_STACK_LINE(1663)
				o->constraint = null();
				HX_STACK_LINE(1663)
				Dynamic();
			}
			HX_STACK_LINE(1664)
			o->next = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
			HX_STACK_LINE(1665)
			::zpp_nape::space::ZPP_Component_obj::zpp_pool = o;
		}
		HX_STACK_LINE(1670)
		this->component = null();
		HX_STACK_LINE(1671)
		this->__iremovedFromSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,removedFromSpace,(void))

Void ZPP_Body_obj::addedToSpace( ){
{
		HX_STACK_PUSH("ZPP_Body::addedToSpace","zpp_nape/phys/Body.hx",1618);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1619)
		{
		}
		HX_STACK_LINE(1627)
		{
			HX_STACK_LINE(1628)
			if (((::zpp_nape::space::ZPP_Component_obj::zpp_pool == null()))){
				HX_STACK_LINE(1628)
				this->component = ::zpp_nape::space::ZPP_Component_obj::__new();
			}
			else{
				HX_STACK_LINE(1635)
				this->component = ::zpp_nape::space::ZPP_Component_obj::zpp_pool;
				HX_STACK_LINE(1636)
				::zpp_nape::space::ZPP_Component_obj::zpp_pool = this->component->next;
				HX_STACK_LINE(1637)
				this->component->next = null();
			}
			HX_STACK_LINE(1642)
			Dynamic();
		}
		HX_STACK_LINE(1644)
		this->component->isBody = true;
		HX_STACK_LINE(1645)
		this->component->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1646)
		this->__iaddedToSpace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,addedToSpace,(void))

Void ZPP_Body_obj::shapes_modifiable( ){
{
		HX_STACK_PUSH("ZPP_Body::shapes_modifiable","zpp_nape/phys/Body.hx",1401);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1402)
		this->immutable_midstep(HX_CSTRING("Body::shapes"));
		HX_STACK_LINE(1403)
		if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->space != null()))))){
			HX_STACK_LINE(1403)
			hx::Throw (HX_CSTRING("Error: Cannot modifiy shapes of static object once added to Space"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,shapes_modifiable,(void))

Void ZPP_Body_obj::shapes_invalidate( ::zpp_nape::util::ZPP_ShapeList _){
{
		HX_STACK_PUSH("ZPP_Body::shapes_invalidate","zpp_nape/phys/Body.hx",1397);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(1397)
		this->invalidate_shapes();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_invalidate,(void))

Void ZPP_Body_obj::shapes_subber( ::nape::shape::Shape s){
{
		HX_STACK_PUSH("ZPP_Body::shapes_subber","zpp_nape/phys/Body.hx",1392);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(1393)
		if (((this->space != null()))){
			HX_STACK_LINE(1393)
			this->space->removed_shape(s->zpp_inner,null());
		}
		HX_STACK_LINE(1394)
		s->zpp_inner->body = null();
		HX_STACK_LINE(1395)
		s->zpp_inner->removedFromBody();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_subber,(void))

bool ZPP_Body_obj::shapes_adder( ::nape::shape::Shape s){
	HX_STACK_PUSH("ZPP_Body::shapes_adder","zpp_nape/phys/Body.hx",1378);
	HX_STACK_THIS(this);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(1378)
	if (((s->zpp_inner->body != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(1380)
		if (((s->zpp_inner->body != null()))){
			HX_STACK_LINE(1380)
			s->zpp_inner->body->wrap_shapes->remove(s);
		}
		HX_STACK_LINE(1381)
		s->zpp_inner->body = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(1382)
		s->zpp_inner->addedToBody();
		HX_STACK_LINE(1383)
		if (((this->space != null()))){
			HX_STACK_LINE(1383)
			::zpp_nape::space::ZPP_Space _this = this->space;		HX_STACK_VAR(_this,"_this");
			::zpp_nape::shape::ZPP_Shape s1 = s->zpp_inner;		HX_STACK_VAR(s1,"s1");
			bool dontwake = false;		HX_STACK_VAR(dontwake,"dontwake");
			HX_STACK_LINE(1383)
			if ((!(dontwake))){
				HX_STACK_LINE(1383)
				::zpp_nape::phys::ZPP_Body o = s1->body;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(1383)
				{
				}
				HX_STACK_LINE(1383)
				if ((!(o->world))){
					HX_STACK_LINE(1383)
					{
					}
					HX_STACK_LINE(1383)
					o->component->waket = (_this->stamp + ((  ((_this->midstep)) ? int((int)0) : int((int)1) )));
					HX_STACK_LINE(1383)
					if ((o->component->sleeping)){
						HX_STACK_LINE(1383)
						_this->really_wake(o,false);
					}
				}
			}
			HX_STACK_LINE(1383)
			_this->bphase->insert(s1);
			HX_STACK_LINE(1383)
			s1->addedToSpace();
		}
		HX_STACK_LINE(1384)
		if (((s->zpp_inner->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
			HX_STACK_LINE(1385)
			s->zpp_inner->polygon->invalidate_gaxi();
			HX_STACK_LINE(1386)
			s->zpp_inner->polygon->invalidate_gverts();
		}
		HX_STACK_LINE(1388)
		return true;
	}
	else{
		HX_STACK_LINE(1390)
		return false;
	}
	HX_STACK_LINE(1378)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,shapes_adder,return )

Void ZPP_Body_obj::aabb_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::aabb_validate","zpp_nape/phys/Body.hx",1372);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1374)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1374)
			hx::Throw (HX_CSTRING("Error: bounds only makes sense when Body has shapes"));
		}
		HX_STACK_LINE(1376)
		{
			HX_STACK_LINE(1376)
			if (((this->shapes->head == null()))){
				HX_STACK_LINE(1376)
				hx::Throw (HX_CSTRING("Error: Body bounds only makes sense if it contains shapes"));
			}
			HX_STACK_LINE(1376)
			if ((this->zip_aabb)){
				HX_STACK_LINE(1376)
				this->zip_aabb = false;
				HX_STACK_LINE(1376)
				{
					HX_STACK_LINE(1376)
					this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1376)
					this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
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
					this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
					HX_STACK_LINE(1376)
					this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
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
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(1376)
					while(((cx_ite != null()))){
						HX_STACK_LINE(1376)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(1376)
						{
							HX_STACK_LINE(1376)
							if ((s->zip_aabb)){
								HX_STACK_LINE(1376)
								if (((s->body != null()))){
									HX_STACK_LINE(1376)
									s->zip_aabb = false;
									HX_STACK_LINE(1376)
									if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
										HX_STACK_LINE(1376)
										::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1376)
										if ((_this->zip_worldCOM)){
											HX_STACK_LINE(1376)
											if (((_this->body != null()))){
												HX_STACK_LINE(1376)
												_this->zip_worldCOM = false;
												HX_STACK_LINE(1376)
												if ((_this->zip_localCOM)){
													HX_STACK_LINE(1376)
													_this->zip_localCOM = false;
													HX_STACK_LINE(1376)
													if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
														HX_STACK_LINE(1376)
														::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
														HX_STACK_LINE(1376)
														if (((_this1->lverts->next == null()))){
															HX_STACK_LINE(1376)
															hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
														}
														HX_STACK_LINE(1376)
														if (((_this1->lverts->next->next == null()))){
															HX_STACK_LINE(1376)
															_this1->localCOMx = _this1->lverts->next->x;
															HX_STACK_LINE(1376)
															_this1->localCOMy = _this1->lverts->next->y;
															HX_STACK_LINE(1376)
															{
															}
															HX_STACK_LINE(1376)
															Dynamic();
														}
														else{
															HX_STACK_LINE(1376)
															if (((_this1->lverts->next->next->next == null()))){
																HX_STACK_LINE(1376)
																{
																	HX_STACK_LINE(1376)
																	_this1->localCOMx = _this1->lverts->next->x;
																	HX_STACK_LINE(1376)
																	_this1->localCOMy = _this1->lverts->next->y;
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
																	Float t = 1.0;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1376)
																	{
																	}
																	HX_STACK_LINE(1376)
																	hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																	HX_STACK_LINE(1376)
																	hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
																}
																HX_STACK_LINE(1376)
																{
																	HX_STACK_LINE(1376)
																	Float t = 0.5;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1376)
																	{
																	}
																	HX_STACK_LINE(1376)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1376)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
															else{
																HX_STACK_LINE(1376)
																{
																	HX_STACK_LINE(1376)
																	_this1->localCOMx = (int)0;
																	HX_STACK_LINE(1376)
																	_this1->localCOMy = (int)0;
																	HX_STACK_LINE(1376)
																	{
																	}
																	HX_STACK_LINE(1376)
																	{
																	}
																}
																HX_STACK_LINE(1376)
																Float area = 0.0;		HX_STACK_VAR(area,"area");
																HX_STACK_LINE(1376)
																{
																	HX_STACK_LINE(1376)
																	::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																	HX_STACK_LINE(1376)
																	::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																	HX_STACK_LINE(1376)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1376)
																	::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																	HX_STACK_LINE(1376)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1376)
																	while(((cx_ite1 != null()))){
																		HX_STACK_LINE(1376)
																		::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																		HX_STACK_LINE(1376)
																		{
																			HX_STACK_LINE(1376)
																			hx::AddEq(area,(v->x * ((w->y - u->y))));
																			HX_STACK_LINE(1376)
																			Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																			HX_STACK_LINE(1376)
																			hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																			HX_STACK_LINE(1376)
																			hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																		}
																		HX_STACK_LINE(1376)
																		u = v;
																		HX_STACK_LINE(1376)
																		v = w;
																		HX_STACK_LINE(1376)
																		cx_ite1 = cx_ite1->next;
																	}
																	HX_STACK_LINE(1376)
																	cx_ite1 = _this1->lverts->next;
																	HX_STACK_LINE(1376)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1376)
																	{
																		HX_STACK_LINE(1376)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1376)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1376)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1376)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1376)
																	u = v;
																	HX_STACK_LINE(1376)
																	v = w;
																	HX_STACK_LINE(1376)
																	cx_ite1 = cx_ite1->next;
																	HX_STACK_LINE(1376)
																	::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																	HX_STACK_LINE(1376)
																	{
																		HX_STACK_LINE(1376)
																		hx::AddEq(area,(v->x * ((w1->y - u->y))));
																		HX_STACK_LINE(1376)
																		Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1376)
																		hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																		HX_STACK_LINE(1376)
																		hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																	}
																}
																HX_STACK_LINE(1376)
																area = (Float((int)1) / Float((((int)3 * area))));
																HX_STACK_LINE(1376)
																{
																	HX_STACK_LINE(1376)
																	Float t = area;		HX_STACK_VAR(t,"t");
																	HX_STACK_LINE(1376)
																	{
																	}
																	HX_STACK_LINE(1376)
																	hx::MultEq(_this1->localCOMx,t);
																	HX_STACK_LINE(1376)
																	hx::MultEq(_this1->localCOMy,t);
																}
															}
														}
													}
												}
												HX_STACK_LINE(1376)
												{
													HX_STACK_LINE(1376)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1376)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1376)
														_this1->zip_axis = false;
														HX_STACK_LINE(1376)
														{
															HX_STACK_LINE(1376)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1376)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1376)
															{
															}
															HX_STACK_LINE(1376)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1376)
												{
													HX_STACK_LINE(1376)
													_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
													HX_STACK_LINE(1376)
													_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
												}
											}
										}
										HX_STACK_LINE(1376)
										Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
										HX_STACK_LINE(1376)
										Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
										HX_STACK_LINE(1376)
										{
										}
										HX_STACK_LINE(1376)
										{
										}
										HX_STACK_LINE(1376)
										{
											HX_STACK_LINE(1376)
											_this->aabb->minx = (_this->worldCOMx - rx);
											HX_STACK_LINE(1376)
											_this->aabb->miny = (_this->worldCOMy - ry);
										}
										HX_STACK_LINE(1376)
										{
											HX_STACK_LINE(1376)
											_this->aabb->maxx = (_this->worldCOMx + rx);
											HX_STACK_LINE(1376)
											_this->aabb->maxy = (_this->worldCOMy + ry);
										}
									}
									else{
										HX_STACK_LINE(1376)
										::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1376)
										if ((_this->zip_gverts)){
											HX_STACK_LINE(1376)
											if (((_this->body != null()))){
												HX_STACK_LINE(1376)
												_this->zip_gverts = false;
												HX_STACK_LINE(1376)
												_this->validate_lverts();
												HX_STACK_LINE(1376)
												{
													HX_STACK_LINE(1376)
													::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1376)
													if ((_this1->zip_axis)){
														HX_STACK_LINE(1376)
														_this1->zip_axis = false;
														HX_STACK_LINE(1376)
														{
															HX_STACK_LINE(1376)
															_this1->axisx = ::Math_obj::sin(_this1->rot);
															HX_STACK_LINE(1376)
															_this1->axisy = ::Math_obj::cos(_this1->rot);
															HX_STACK_LINE(1376)
															{
															}
															HX_STACK_LINE(1376)
															Dynamic();
														}
													}
												}
												HX_STACK_LINE(1376)
												::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
												HX_STACK_LINE(1376)
												{
													HX_STACK_LINE(1376)
													::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
													HX_STACK_LINE(1376)
													while(((cx_ite1 != null()))){
														HX_STACK_LINE(1376)
														::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
														HX_STACK_LINE(1376)
														{
															HX_STACK_LINE(1376)
															::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
															HX_STACK_LINE(1376)
															li = li->next;
															HX_STACK_LINE(1376)
															{
																HX_STACK_LINE(1376)
																g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
																HX_STACK_LINE(1376)
																g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
															}
														}
														HX_STACK_LINE(1376)
														cx_ite1 = cx_ite1->next;
													}
												}
											}
										}
										HX_STACK_LINE(1376)
										if (((_this->lverts->next == null()))){
											HX_STACK_LINE(1376)
											hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
										}
										HX_STACK_LINE(1376)
										::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
										HX_STACK_LINE(1376)
										{
											HX_STACK_LINE(1376)
											_this->aabb->minx = p0->x;
											HX_STACK_LINE(1376)
											_this->aabb->miny = p0->y;
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
											_this->aabb->maxx = p0->x;
											HX_STACK_LINE(1376)
											_this->aabb->maxy = p0->y;
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
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1376)
											while(((cx_ite1 != null()))){
												HX_STACK_LINE(1376)
												::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
												HX_STACK_LINE(1376)
												{
													HX_STACK_LINE(1376)
													if (((p->x < _this->aabb->minx))){
														HX_STACK_LINE(1376)
														_this->aabb->minx = p->x;
													}
													HX_STACK_LINE(1376)
													if (((p->x > _this->aabb->maxx))){
														HX_STACK_LINE(1376)
														_this->aabb->maxx = p->x;
													}
													HX_STACK_LINE(1376)
													if (((p->y < _this->aabb->miny))){
														HX_STACK_LINE(1376)
														_this->aabb->miny = p->y;
													}
													HX_STACK_LINE(1376)
													if (((p->y > _this->aabb->maxy))){
														HX_STACK_LINE(1376)
														_this->aabb->maxy = p->y;
													}
												}
												HX_STACK_LINE(1376)
												cx_ite1 = cx_ite1->next;
											}
										}
									}
								}
							}
							HX_STACK_LINE(1376)
							{
								HX_STACK_LINE(1376)
								::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
								::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(1376)
								if (((x->minx < _this->minx))){
									HX_STACK_LINE(1376)
									_this->minx = x->minx;
								}
								HX_STACK_LINE(1376)
								if (((x->maxx > _this->maxx))){
									HX_STACK_LINE(1376)
									_this->maxx = x->maxx;
								}
								HX_STACK_LINE(1376)
								if (((x->miny < _this->miny))){
									HX_STACK_LINE(1376)
									_this->miny = x->miny;
								}
								HX_STACK_LINE(1376)
								if (((x->maxy > _this->maxy))){
									HX_STACK_LINE(1376)
									_this->maxy = x->maxy;
								}
							}
						}
						HX_STACK_LINE(1376)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,aabb_validate,(void))

Void ZPP_Body_obj::clear( ){
{
		HX_STACK_PUSH("ZPP_Body::clear","zpp_nape/phys/Body.hx",1194);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1196)
		if (((this->space != null()))){
			HX_STACK_LINE(1196)
			hx::Throw (HX_CSTRING("Error: Cannot clear a Body if it is currently being used by a Space!"));
		}
		HX_STACK_LINE(1199)
		if ((!(((this->constraints->head == null()))))){
			HX_STACK_LINE(1199)
			hx::Throw (HX_CSTRING("Error: Cannot clear a Body if it is currently being used by a constraint!"));
		}
		HX_STACK_LINE(1201)
		while((!(((this->shapes->head == null()))))){
			HX_STACK_LINE(1203)
			::zpp_nape::shape::ZPP_Shape s = this->shapes->pop_unsafe();		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1204)
			{
				HX_STACK_LINE(1205)
				s->removedFromBody();
				HX_STACK_LINE(1206)
				s->body = null();
			}
		}
		HX_STACK_LINE(1210)
		this->invalidate_shapes();
		HX_STACK_LINE(1211)
		{
			HX_STACK_LINE(1212)
			this->pre_posx = (int)0;
			HX_STACK_LINE(1213)
			this->pre_posy = (int)0;
			HX_STACK_LINE(1214)
			{
			}
			HX_STACK_LINE(1222)
			{
			}
		}
		HX_STACK_LINE(1231)
		{
			HX_STACK_LINE(1232)
			this->posx = (int)0;
			HX_STACK_LINE(1233)
			this->posy = (int)0;
			HX_STACK_LINE(1234)
			{
			}
			HX_STACK_LINE(1242)
			{
			}
		}
		HX_STACK_LINE(1251)
		{
			HX_STACK_LINE(1252)
			this->velx = (int)0;
			HX_STACK_LINE(1253)
			this->vely = (int)0;
			HX_STACK_LINE(1254)
			{
			}
			HX_STACK_LINE(1262)
			{
			}
		}
		HX_STACK_LINE(1271)
		{
			HX_STACK_LINE(1272)
			this->forcex = (int)0;
			HX_STACK_LINE(1273)
			this->forcey = (int)0;
			HX_STACK_LINE(1274)
			{
			}
			HX_STACK_LINE(1282)
			{
			}
		}
		HX_STACK_LINE(1291)
		{
			HX_STACK_LINE(1292)
			this->kinvelx = (int)0;
			HX_STACK_LINE(1293)
			this->kinvely = (int)0;
			HX_STACK_LINE(1294)
			{
			}
			HX_STACK_LINE(1302)
			{
			}
		}
		HX_STACK_LINE(1311)
		{
			HX_STACK_LINE(1312)
			this->svelx = (int)0;
			HX_STACK_LINE(1313)
			this->svely = (int)0;
			HX_STACK_LINE(1314)
			{
			}
			HX_STACK_LINE(1322)
			{
			}
		}
		HX_STACK_LINE(1331)
		this->angvel = this->torque = this->kinangvel = this->pre_rot = this->rot = (int)0;
		HX_STACK_LINE(1332)
		{
			HX_STACK_LINE(1332)
			{
				HX_STACK_LINE(1332)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1332)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1332)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1332)
					{
						HX_STACK_LINE(1332)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1332)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1332)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1332)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1332)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1332)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1333)
		{
			HX_STACK_LINE(1333)
			this->zip_axis = true;
			HX_STACK_LINE(1333)
			{
				HX_STACK_LINE(1333)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1333)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1333)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1333)
					{
						HX_STACK_LINE(1333)
						if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
							HX_STACK_LINE(1333)
							s->polygon->invalidate_gverts();
							HX_STACK_LINE(1333)
							s->polygon->invalidate_gaxi();
						}
						HX_STACK_LINE(1333)
						s->invalidate_worldCOM();
					}
					HX_STACK_LINE(1333)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1333)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(1334)
		{
			HX_STACK_LINE(1335)
			this->axisx = (int)0;
			HX_STACK_LINE(1336)
			this->axisy = (int)1;
			HX_STACK_LINE(1337)
			{
			}
			HX_STACK_LINE(1345)
			{
			}
		}
		HX_STACK_LINE(1354)
		this->zip_axis = false;
		HX_STACK_LINE(1355)
		this->massMode = ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT;
		HX_STACK_LINE(1356)
		this->gravMassMode = ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT;
		HX_STACK_LINE(1357)
		this->gravMassScale = 1.0;
		HX_STACK_LINE(1358)
		this->inertiaMode = ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT;
		HX_STACK_LINE(1359)
		this->norotate = false;
		HX_STACK_LINE(1360)
		this->nomove = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,clear,(void))

Void ZPP_Body_obj::__immutable_midstep( ::String name){
{
		HX_STACK_PUSH("ZPP_Body::__immutable_midstep","zpp_nape/phys/Body.hx",1189);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(1189)
		if (((bool((this->space != null())) && bool(this->space->midstep)))){
			HX_STACK_LINE(1191)
			hx::Throw (((HX_CSTRING("Error: ") + name) + HX_CSTRING(" cannot be set during a space step()")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,__immutable_midstep,(void))

Void ZPP_Body_obj::getworldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::getworldCOM","zpp_nape/phys/Body.hx",1181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1183)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1183)
			hx::Throw (HX_CSTRING("Error: worldCOM only makes sense when Body has Shapes"));
		}
		HX_STACK_LINE(1185)
		this->validate_worldCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getworldCOM,(void))

Void ZPP_Body_obj::getlocalCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::getlocalCOM","zpp_nape/phys/Body.hx",1175);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1177)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(1177)
			hx::Throw (HX_CSTRING("Error: localCOM only makes sense when Body has Shapes"));
		}
		HX_STACK_LINE(1179)
		this->validate_localCOM();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,getlocalCOM,(void))

Void ZPP_Body_obj::validate_worldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_worldCOM","zpp_nape/phys/Body.hx",1144);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1144)
		if ((this->zip_worldCOM)){
			HX_STACK_LINE(1146)
			this->zip_worldCOM = false;
			HX_STACK_LINE(1147)
			this->validate_localCOM();
			HX_STACK_LINE(1148)
			if ((this->zip_axis)){
				HX_STACK_LINE(1148)
				this->zip_axis = false;
				HX_STACK_LINE(1148)
				{
					HX_STACK_LINE(1148)
					this->axisx = ::Math_obj::sin(this->rot);
					HX_STACK_LINE(1148)
					this->axisy = ::Math_obj::cos(this->rot);
					HX_STACK_LINE(1148)
					{
					}
					HX_STACK_LINE(1148)
					Dynamic();
				}
			}
			HX_STACK_LINE(1149)
			{
				HX_STACK_LINE(1150)
				this->worldCOMx = (this->posx + (((this->axisy * this->localCOMx) - (this->axisx * this->localCOMy))));
				HX_STACK_LINE(1151)
				this->worldCOMy = (this->posy + (((this->localCOMx * this->axisx) + (this->localCOMy * this->axisy))));
			}
			HX_STACK_LINE(1153)
			if (((this->wrap_worldCOM != null()))){
				HX_STACK_LINE(1154)
				this->wrap_worldCOM->zpp_inner->x = this->worldCOMx;
				HX_STACK_LINE(1155)
				this->wrap_worldCOM->zpp_inner->y = this->worldCOMy;
				HX_STACK_LINE(1156)
				{
				}
				HX_STACK_LINE(1164)
				{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_worldCOM,(void))

Void ZPP_Body_obj::validate_localCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_localCOM","zpp_nape/phys/Body.hx",1048);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1048)
		if ((this->zip_localCOM)){
			HX_STACK_LINE(1050)
			this->zip_localCOM = false;
			HX_STACK_LINE(1051)
			Float tempx = (int)0;		HX_STACK_VAR(tempx,"tempx");
			HX_STACK_LINE(1052)
			Float tempy = (int)0;		HX_STACK_VAR(tempy,"tempy");
			HX_STACK_LINE(1053)
			{
			}
			HX_STACK_LINE(1061)
			{
			}
			HX_STACK_LINE(1069)
			Float msum = 0.0;		HX_STACK_VAR(msum,"msum");
			HX_STACK_LINE(1070)
			{
				HX_STACK_LINE(1071)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1072)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1073)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1074)
					{
						HX_STACK_LINE(1075)
						if ((s->zip_localCOM)){
							HX_STACK_LINE(1075)
							s->zip_localCOM = false;
							HX_STACK_LINE(1075)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(1075)
								::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1075)
								if (((_this->lverts->next == null()))){
									HX_STACK_LINE(1075)
									hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
								}
								HX_STACK_LINE(1075)
								if (((_this->lverts->next->next == null()))){
									HX_STACK_LINE(1075)
									_this->localCOMx = _this->lverts->next->x;
									HX_STACK_LINE(1075)
									_this->localCOMy = _this->lverts->next->y;
									HX_STACK_LINE(1075)
									{
									}
									HX_STACK_LINE(1075)
									Dynamic();
								}
								else{
									HX_STACK_LINE(1075)
									if (((_this->lverts->next->next->next == null()))){
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											_this->localCOMx = _this->lverts->next->x;
											HX_STACK_LINE(1075)
											_this->localCOMy = _this->lverts->next->y;
											HX_STACK_LINE(1075)
											{
											}
											HX_STACK_LINE(1075)
											{
											}
										}
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											Float t = 1.0;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1075)
											{
											}
											HX_STACK_LINE(1075)
											hx::AddEq(_this->localCOMx,(_this->lverts->next->next->x * t));
											HX_STACK_LINE(1075)
											hx::AddEq(_this->localCOMy,(_this->lverts->next->next->y * t));
										}
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											Float t = 0.5;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1075)
											{
											}
											HX_STACK_LINE(1075)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1075)
											hx::MultEq(_this->localCOMy,t);
										}
									}
									else{
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											_this->localCOMx = (int)0;
											HX_STACK_LINE(1075)
											_this->localCOMy = (int)0;
											HX_STACK_LINE(1075)
											{
											}
											HX_STACK_LINE(1075)
											{
											}
										}
										HX_STACK_LINE(1075)
										Float area = 0.0;		HX_STACK_VAR(area,"area");
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
											HX_STACK_LINE(1075)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(1075)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1075)
											while(((cx_ite1 != null()))){
												HX_STACK_LINE(1075)
												::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
												HX_STACK_LINE(1075)
												{
													HX_STACK_LINE(1075)
													hx::AddEq(area,(v->x * ((w->y - u->y))));
													HX_STACK_LINE(1075)
													Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
													HX_STACK_LINE(1075)
													hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
													HX_STACK_LINE(1075)
													hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
												}
												HX_STACK_LINE(1075)
												u = v;
												HX_STACK_LINE(1075)
												v = w;
												HX_STACK_LINE(1075)
												cx_ite1 = cx_ite1->next;
											}
											HX_STACK_LINE(1075)
											cx_ite1 = _this->lverts->next;
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												hx::AddEq(area,(v->x * ((w->y - u->y))));
												HX_STACK_LINE(1075)
												Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1075)
												hx::AddEq(_this->localCOMx,(((v->x + w->x)) * cf));
												HX_STACK_LINE(1075)
												hx::AddEq(_this->localCOMy,(((v->y + w->y)) * cf));
											}
											HX_STACK_LINE(1075)
											u = v;
											HX_STACK_LINE(1075)
											v = w;
											HX_STACK_LINE(1075)
											cx_ite1 = cx_ite1->next;
											HX_STACK_LINE(1075)
											::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
											HX_STACK_LINE(1075)
											{
												HX_STACK_LINE(1075)
												hx::AddEq(area,(v->x * ((w1->y - u->y))));
												HX_STACK_LINE(1075)
												Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
												HX_STACK_LINE(1075)
												hx::AddEq(_this->localCOMx,(((v->x + w1->x)) * cf));
												HX_STACK_LINE(1075)
												hx::AddEq(_this->localCOMy,(((v->y + w1->y)) * cf));
											}
										}
										HX_STACK_LINE(1075)
										area = (Float((int)1) / Float((((int)3 * area))));
										HX_STACK_LINE(1075)
										{
											HX_STACK_LINE(1075)
											Float t = area;		HX_STACK_VAR(t,"t");
											HX_STACK_LINE(1075)
											{
											}
											HX_STACK_LINE(1075)
											hx::MultEq(_this->localCOMx,t);
											HX_STACK_LINE(1075)
											hx::MultEq(_this->localCOMy,t);
										}
									}
								}
							}
						}
						HX_STACK_LINE(1076)
						s->validate_area_inertia();
						HX_STACK_LINE(1077)
						{
							HX_STACK_LINE(1078)
							Float t = (s->area * s->material->density);		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(1079)
							{
							}
							HX_STACK_LINE(1087)
							hx::AddEq(tempx,(s->localCOMx * t));
							HX_STACK_LINE(1088)
							hx::AddEq(tempy,(s->localCOMy * t));
						}
						HX_STACK_LINE(1090)
						hx::AddEq(msum,(s->area * s->material->density));
					}
					HX_STACK_LINE(1092)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(1095)
			if (((msum != (int)0))){
				HX_STACK_LINE(1097)
				Float t = (Float(1.0) / Float(msum));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1098)
				{
				}
				HX_STACK_LINE(1106)
				this->localCOMx = (tempx * t);
				HX_STACK_LINE(1107)
				this->localCOMy = (tempy * t);
			}
			HX_STACK_LINE(1110)
			if (((this->wrap_localCOM != null()))){
				HX_STACK_LINE(1111)
				this->wrap_localCOM->zpp_inner->x = this->localCOMx;
				HX_STACK_LINE(1112)
				this->wrap_localCOM->zpp_inner->y = this->localCOMy;
				HX_STACK_LINE(1113)
				{
				}
				HX_STACK_LINE(1121)
				{
				}
			}
			HX_STACK_LINE(1130)
			if (((bool(this->zip_mass) && bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))))){
				HX_STACK_LINE(1131)
				this->zip_mass = false;
				HX_STACK_LINE(1132)
				this->cmass = msum;
				HX_STACK_LINE(1133)
				if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))){
					HX_STACK_LINE(1134)
					this->mass = this->cmass;
					HX_STACK_LINE(1135)
					this->imass = this->smass = (Float(1.0) / Float(this->mass));
				}
				else{
					HX_STACK_LINE(1138)
					this->mass = ::Math_obj::POSITIVE_INFINITY;
					HX_STACK_LINE(1139)
					this->imass = this->smass = 0.0;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_localCOM,(void))

Void ZPP_Body_obj::invalidate_worldCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_worldCOM","zpp_nape/phys/Body.hx",1045);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1045)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_worldCOM,(void))

Void ZPP_Body_obj::invalidate_localCOM( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_localCOM","zpp_nape/phys/Body.hx",1039);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1040)
		this->zip_localCOM = true;
		HX_STACK_LINE(1041)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_localCOM,(void))

Void ZPP_Body_obj::invalidate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_aabb","zpp_nape/phys/Body.hx",1026);
		HX_STACK_THIS(this);
		HX_STACK_LINE(1026)
		this->zip_aabb = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_aabb,(void))

Void ZPP_Body_obj::validate_aabb( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_aabb","zpp_nape/phys/Body.hx",965);
		HX_STACK_THIS(this);
		HX_STACK_LINE(967)
		if (((this->shapes->head == null()))){
			HX_STACK_LINE(967)
			hx::Throw (HX_CSTRING("Error: Body bounds only makes sense if it contains shapes"));
		}
		HX_STACK_LINE(969)
		if ((this->zip_aabb)){
			HX_STACK_LINE(970)
			this->zip_aabb = false;
			HX_STACK_LINE(971)
			{
				HX_STACK_LINE(972)
				this->aabb->minx = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(973)
				this->aabb->miny = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(974)
				{
				}
				HX_STACK_LINE(982)
				{
				}
			}
			HX_STACK_LINE(991)
			{
				HX_STACK_LINE(992)
				this->aabb->maxx = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(993)
				this->aabb->maxy = ::Math_obj::NEGATIVE_INFINITY;
				HX_STACK_LINE(994)
				{
				}
				HX_STACK_LINE(1002)
				{
				}
			}
			HX_STACK_LINE(1011)
			{
				HX_STACK_LINE(1012)
				::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(1013)
				while(((cx_ite != null()))){
					HX_STACK_LINE(1014)
					::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(1015)
					{
						HX_STACK_LINE(1016)
						if ((s->zip_aabb)){
							HX_STACK_LINE(1016)
							if (((s->body != null()))){
								HX_STACK_LINE(1016)
								s->zip_aabb = false;
								HX_STACK_LINE(1016)
								if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
									HX_STACK_LINE(1016)
									::zpp_nape::shape::ZPP_Circle _this = s->circle;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1016)
									if ((_this->zip_worldCOM)){
										HX_STACK_LINE(1016)
										if (((_this->body != null()))){
											HX_STACK_LINE(1016)
											_this->zip_worldCOM = false;
											HX_STACK_LINE(1016)
											if ((_this->zip_localCOM)){
												HX_STACK_LINE(1016)
												_this->zip_localCOM = false;
												HX_STACK_LINE(1016)
												if (((_this->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
													HX_STACK_LINE(1016)
													::zpp_nape::shape::ZPP_Polygon _this1 = _this->polygon;		HX_STACK_VAR(_this1,"_this1");
													HX_STACK_LINE(1016)
													if (((_this1->lverts->next == null()))){
														HX_STACK_LINE(1016)
														hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful localCOM"));
													}
													HX_STACK_LINE(1016)
													if (((_this1->lverts->next->next == null()))){
														HX_STACK_LINE(1016)
														_this1->localCOMx = _this1->lverts->next->x;
														HX_STACK_LINE(1016)
														_this1->localCOMy = _this1->lverts->next->y;
														HX_STACK_LINE(1016)
														{
														}
														HX_STACK_LINE(1016)
														Dynamic();
													}
													else{
														HX_STACK_LINE(1016)
														if (((_this1->lverts->next->next->next == null()))){
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																_this1->localCOMx = _this1->lverts->next->x;
																HX_STACK_LINE(1016)
																_this1->localCOMy = _this1->lverts->next->y;
																HX_STACK_LINE(1016)
																{
																}
																HX_STACK_LINE(1016)
																{
																}
															}
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																Float t = 1.0;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1016)
																{
																}
																HX_STACK_LINE(1016)
																hx::AddEq(_this1->localCOMx,(_this1->lverts->next->next->x * t));
																HX_STACK_LINE(1016)
																hx::AddEq(_this1->localCOMy,(_this1->lverts->next->next->y * t));
															}
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																Float t = 0.5;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1016)
																{
																}
																HX_STACK_LINE(1016)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1016)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
														else{
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																_this1->localCOMx = (int)0;
																HX_STACK_LINE(1016)
																_this1->localCOMy = (int)0;
																HX_STACK_LINE(1016)
																{
																}
																HX_STACK_LINE(1016)
																{
																}
															}
															HX_STACK_LINE(1016)
															Float area = 0.0;		HX_STACK_VAR(area,"area");
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this1->lverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 u = cx_ite1;		HX_STACK_VAR(u,"u");
																HX_STACK_LINE(1016)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 v = cx_ite1;		HX_STACK_VAR(v,"v");
																HX_STACK_LINE(1016)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1016)
																while(((cx_ite1 != null()))){
																	HX_STACK_LINE(1016)
																	::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																	HX_STACK_LINE(1016)
																	{
																		HX_STACK_LINE(1016)
																		hx::AddEq(area,(v->x * ((w->y - u->y))));
																		HX_STACK_LINE(1016)
																		Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																		HX_STACK_LINE(1016)
																		hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																	}
																	HX_STACK_LINE(1016)
																	u = v;
																	HX_STACK_LINE(1016)
																	v = w;
																	HX_STACK_LINE(1016)
																	cx_ite1 = cx_ite1->next;
																}
																HX_STACK_LINE(1016)
																cx_ite1 = _this1->lverts->next;
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 w = cx_ite1;		HX_STACK_VAR(w,"w");
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	hx::AddEq(area,(v->x * ((w->y - u->y))));
																	HX_STACK_LINE(1016)
																	Float cf = ((w->y * v->x) - (w->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMx,(((v->x + w->x)) * cf));
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMy,(((v->y + w->y)) * cf));
																}
																HX_STACK_LINE(1016)
																u = v;
																HX_STACK_LINE(1016)
																v = w;
																HX_STACK_LINE(1016)
																cx_ite1 = cx_ite1->next;
																HX_STACK_LINE(1016)
																::zpp_nape::geom::ZPP_Vec2 w1 = cx_ite1;		HX_STACK_VAR(w1,"w1");
																HX_STACK_LINE(1016)
																{
																	HX_STACK_LINE(1016)
																	hx::AddEq(area,(v->x * ((w1->y - u->y))));
																	HX_STACK_LINE(1016)
																	Float cf = ((w1->y * v->x) - (w1->x * v->y));		HX_STACK_VAR(cf,"cf");
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMx,(((v->x + w1->x)) * cf));
																	HX_STACK_LINE(1016)
																	hx::AddEq(_this1->localCOMy,(((v->y + w1->y)) * cf));
																}
															}
															HX_STACK_LINE(1016)
															area = (Float((int)1) / Float((((int)3 * area))));
															HX_STACK_LINE(1016)
															{
																HX_STACK_LINE(1016)
																Float t = area;		HX_STACK_VAR(t,"t");
																HX_STACK_LINE(1016)
																{
																}
																HX_STACK_LINE(1016)
																hx::MultEq(_this1->localCOMx,t);
																HX_STACK_LINE(1016)
																hx::MultEq(_this1->localCOMy,t);
															}
														}
													}
												}
											}
											HX_STACK_LINE(1016)
											{
												HX_STACK_LINE(1016)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1016)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1016)
													_this1->zip_axis = false;
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														_this1->axisx = ::Math_obj::sin(_this1->rot);
														HX_STACK_LINE(1016)
														_this1->axisy = ::Math_obj::cos(_this1->rot);
														HX_STACK_LINE(1016)
														{
														}
														HX_STACK_LINE(1016)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1016)
											{
												HX_STACK_LINE(1016)
												_this->worldCOMx = (_this->body->posx + (((_this->body->axisy * _this->localCOMx) - (_this->body->axisx * _this->localCOMy))));
												HX_STACK_LINE(1016)
												_this->worldCOMy = (_this->body->posy + (((_this->localCOMx * _this->body->axisx) + (_this->localCOMy * _this->body->axisy))));
											}
										}
									}
									HX_STACK_LINE(1016)
									Float rx = _this->radius;		HX_STACK_VAR(rx,"rx");
									HX_STACK_LINE(1016)
									Float ry = _this->radius;		HX_STACK_VAR(ry,"ry");
									HX_STACK_LINE(1016)
									{
									}
									HX_STACK_LINE(1016)
									{
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										_this->aabb->minx = (_this->worldCOMx - rx);
										HX_STACK_LINE(1016)
										_this->aabb->miny = (_this->worldCOMy - ry);
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										_this->aabb->maxx = (_this->worldCOMx + rx);
										HX_STACK_LINE(1016)
										_this->aabb->maxy = (_this->worldCOMy + ry);
									}
								}
								else{
									HX_STACK_LINE(1016)
									::zpp_nape::shape::ZPP_Polygon _this = s->polygon;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1016)
									if ((_this->zip_gverts)){
										HX_STACK_LINE(1016)
										if (((_this->body != null()))){
											HX_STACK_LINE(1016)
											_this->zip_gverts = false;
											HX_STACK_LINE(1016)
											_this->validate_lverts();
											HX_STACK_LINE(1016)
											{
												HX_STACK_LINE(1016)
												::zpp_nape::phys::ZPP_Body _this1 = _this->body;		HX_STACK_VAR(_this1,"_this1");
												HX_STACK_LINE(1016)
												if ((_this1->zip_axis)){
													HX_STACK_LINE(1016)
													_this1->zip_axis = false;
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														_this1->axisx = ::Math_obj::sin(_this1->rot);
														HX_STACK_LINE(1016)
														_this1->axisy = ::Math_obj::cos(_this1->rot);
														HX_STACK_LINE(1016)
														{
														}
														HX_STACK_LINE(1016)
														Dynamic();
													}
												}
											}
											HX_STACK_LINE(1016)
											::zpp_nape::geom::ZPP_Vec2 li = _this->lverts->next;		HX_STACK_VAR(li,"li");
											HX_STACK_LINE(1016)
											{
												HX_STACK_LINE(1016)
												::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
												HX_STACK_LINE(1016)
												while(((cx_ite1 != null()))){
													HX_STACK_LINE(1016)
													::zpp_nape::geom::ZPP_Vec2 g = cx_ite1;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(1016)
													{
														HX_STACK_LINE(1016)
														::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
														HX_STACK_LINE(1016)
														li = li->next;
														HX_STACK_LINE(1016)
														{
															HX_STACK_LINE(1016)
															g->x = (_this->body->posx + (((_this->body->axisy * l->x) - (_this->body->axisx * l->y))));
															HX_STACK_LINE(1016)
															g->y = (_this->body->posy + (((l->x * _this->body->axisx) + (l->y * _this->body->axisy))));
														}
													}
													HX_STACK_LINE(1016)
													cx_ite1 = cx_ite1->next;
												}
											}
										}
									}
									HX_STACK_LINE(1016)
									if (((_this->lverts->next == null()))){
										HX_STACK_LINE(1016)
										hx::Throw (HX_CSTRING("Error: An empty polygon has no meaningful bounds"));
									}
									HX_STACK_LINE(1016)
									::zpp_nape::geom::ZPP_Vec2 p0 = _this->gverts->next;		HX_STACK_VAR(p0,"p0");
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										_this->aabb->minx = p0->x;
										HX_STACK_LINE(1016)
										_this->aabb->miny = p0->y;
										HX_STACK_LINE(1016)
										{
										}
										HX_STACK_LINE(1016)
										{
										}
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										_this->aabb->maxx = p0->x;
										HX_STACK_LINE(1016)
										_this->aabb->maxy = p0->y;
										HX_STACK_LINE(1016)
										{
										}
										HX_STACK_LINE(1016)
										{
										}
									}
									HX_STACK_LINE(1016)
									{
										HX_STACK_LINE(1016)
										::zpp_nape::geom::ZPP_Vec2 cx_ite1 = _this->gverts->next->next;		HX_STACK_VAR(cx_ite1,"cx_ite1");
										HX_STACK_LINE(1016)
										while(((cx_ite1 != null()))){
											HX_STACK_LINE(1016)
											::zpp_nape::geom::ZPP_Vec2 p = cx_ite1;		HX_STACK_VAR(p,"p");
											HX_STACK_LINE(1016)
											{
												HX_STACK_LINE(1016)
												if (((p->x < _this->aabb->minx))){
													HX_STACK_LINE(1016)
													_this->aabb->minx = p->x;
												}
												HX_STACK_LINE(1016)
												if (((p->x > _this->aabb->maxx))){
													HX_STACK_LINE(1016)
													_this->aabb->maxx = p->x;
												}
												HX_STACK_LINE(1016)
												if (((p->y < _this->aabb->miny))){
													HX_STACK_LINE(1016)
													_this->aabb->miny = p->y;
												}
												HX_STACK_LINE(1016)
												if (((p->y > _this->aabb->maxy))){
													HX_STACK_LINE(1016)
													_this->aabb->maxy = p->y;
												}
											}
											HX_STACK_LINE(1016)
											cx_ite1 = cx_ite1->next;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1017)
						{
							HX_STACK_LINE(1017)
							::zpp_nape::geom::ZPP_AABB _this = this->aabb;		HX_STACK_VAR(_this,"_this");
							::zpp_nape::geom::ZPP_AABB x = s->aabb;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1017)
							if (((x->minx < _this->minx))){
								HX_STACK_LINE(1017)
								_this->minx = x->minx;
							}
							HX_STACK_LINE(1017)
							if (((x->maxx > _this->maxx))){
								HX_STACK_LINE(1017)
								_this->maxx = x->maxx;
							}
							HX_STACK_LINE(1017)
							if (((x->miny < _this->miny))){
								HX_STACK_LINE(1017)
								_this->miny = x->miny;
							}
							HX_STACK_LINE(1017)
							if (((x->maxy > _this->maxy))){
								HX_STACK_LINE(1017)
								_this->maxy = x->maxy;
							}
						}
					}
					HX_STACK_LINE(1019)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_aabb,(void))

Void ZPP_Body_obj::invalidate_wake( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_wake","zpp_nape/phys/Body.hx",959);
		HX_STACK_THIS(this);
		HX_STACK_LINE(959)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_wake,(void))

Void ZPP_Body_obj::validate_inertia( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_inertia","zpp_nape/phys/Body.hx",927);
		HX_STACK_THIS(this);
		HX_STACK_LINE(928)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(929)
		if (((bool(this->zip_inertia) || bool((bool((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(930)
			this->zip_inertia = false;
			HX_STACK_LINE(931)
			if (((this->inertiaMode == ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_DEFAULT))){
				HX_STACK_LINE(932)
				this->cinertia = (int)0;
				HX_STACK_LINE(933)
				{
					HX_STACK_LINE(934)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(935)
					while(((cx_ite != null()))){
						HX_STACK_LINE(936)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(937)
						{
							HX_STACK_LINE(938)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(939)
							s->validate_area_inertia();
							HX_STACK_LINE(940)
							hx::AddEq(this->cinertia,((s->inertia * s->area) * s->material->density));
						}
						HX_STACK_LINE(942)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(946)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->norotate))))){
				HX_STACK_LINE(947)
				this->inertia = this->cinertia;
				HX_STACK_LINE(948)
				this->sinertia = this->iinertia = (Float(1.0) / Float(this->inertia));
			}
			else{
				HX_STACK_LINE(951)
				this->inertia = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(952)
				this->sinertia = this->iinertia = (int)0;
			}
			HX_STACK_LINE(954)
			if ((exist)){
				HX_STACK_LINE(954)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_inertia,(void))

Void ZPP_Body_obj::invalidate_inertia( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_inertia","zpp_nape/phys/Body.hx",923);
		HX_STACK_THIS(this);
		HX_STACK_LINE(924)
		if (((this->inertiaMode != ::zpp_nape::util::ZPP_Flags_obj::id_InertiaMode_FIXED))){
			HX_STACK_LINE(924)
			this->zip_inertia = true;
		}
		HX_STACK_LINE(925)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_inertia,(void))

Void ZPP_Body_obj::validate_gravMassScale( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_gravMassScale","zpp_nape/phys/Body.hx",906);
		HX_STACK_THIS(this);
		HX_STACK_LINE(906)
		if ((this->zip_gravMassScale)){
			HX_STACK_LINE(908)
			this->zip_gravMassScale = false;
			HX_STACK_LINE(909)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(909)
				this->gravMassScale = 1.0;
			}
			else{
				HX_STACK_LINE(910)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
					HX_STACK_LINE(911)
					this->validate_mass();
					HX_STACK_LINE(912)
					this->gravMassScale = (Float(this->gravMass) / Float(this->cmass));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMassScale,(void))

Void ZPP_Body_obj::invalidate_gravMassScale( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_gravMassScale","zpp_nape/phys/Body.hx",902);
		HX_STACK_THIS(this);
		HX_STACK_LINE(902)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(903)
			this->zip_gravMassScale = true;
		}
		else{
			HX_STACK_LINE(904)
			this->invalidate_gravMass();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMassScale,(void))

Void ZPP_Body_obj::validate_gravMass( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_gravMass","zpp_nape/phys/Body.hx",888);
		HX_STACK_THIS(this);
		HX_STACK_LINE(888)
		if ((this->zip_gravMass)){
			HX_STACK_LINE(890)
			this->zip_gravMass = false;
			HX_STACK_LINE(891)
			this->validate_mass();
			HX_STACK_LINE(892)
			if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_DEFAULT))){
				HX_STACK_LINE(893)
				this->validate_mass();
				HX_STACK_LINE(894)
				this->gravMass = this->cmass;
			}
			else{
				HX_STACK_LINE(896)
				if (((this->gravMassMode == ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
					HX_STACK_LINE(897)
					this->validate_mass();
					HX_STACK_LINE(898)
					this->gravMass = (this->cmass * this->gravMassScale);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_gravMass,(void))

Void ZPP_Body_obj::invalidate_gravMass( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_gravMass","zpp_nape/phys/Body.hx",883);
		HX_STACK_THIS(this);
		HX_STACK_LINE(884)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_FIXED))){
			HX_STACK_LINE(884)
			this->zip_gravMass = true;
		}
		HX_STACK_LINE(885)
		if (((this->gravMassMode != ::zpp_nape::util::ZPP_Flags_obj::id_GravMassMode_SCALED))){
			HX_STACK_LINE(885)
			this->zip_gravMassScale = true;
		}
		HX_STACK_LINE(886)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_gravMass,(void))

Void ZPP_Body_obj::validate_mass( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_mass","zpp_nape/phys/Body.hx",848);
		HX_STACK_THIS(this);
		HX_STACK_LINE(849)
		bool exist = false;		HX_STACK_VAR(exist,"exist");
		HX_STACK_LINE(850)
		if (((bool(this->zip_mass) || bool((bool((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT)) && bool(exist)))))){
			HX_STACK_LINE(851)
			this->zip_mass = false;
			HX_STACK_LINE(852)
			if (((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))){
				HX_STACK_LINE(853)
				this->cmass = (int)0;
				HX_STACK_LINE(854)
				{
					HX_STACK_LINE(855)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(856)
					while(((cx_ite != null()))){
						HX_STACK_LINE(857)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(858)
						{
							HX_STACK_LINE(859)
							s->refmaterial->density = s->material->density;
							HX_STACK_LINE(860)
							s->validate_area_inertia();
							HX_STACK_LINE(861)
							hx::AddEq(this->cmass,(s->area * s->material->density));
						}
						HX_STACK_LINE(863)
						cx_ite = cx_ite->next;
					}
				}
			}
			HX_STACK_LINE(867)
			if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC)) && bool(!(this->nomove))))){
				HX_STACK_LINE(868)
				this->mass = this->cmass;
				HX_STACK_LINE(869)
				this->imass = this->smass = (Float(1.0) / Float(this->mass));
			}
			else{
				HX_STACK_LINE(872)
				this->mass = ::Math_obj::POSITIVE_INFINITY;
				HX_STACK_LINE(873)
				this->imass = this->smass = 0.0;
			}
			HX_STACK_LINE(875)
			if ((exist)){
				HX_STACK_LINE(875)
				this->invalidate_inertia();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_mass,(void))

Void ZPP_Body_obj::invalidate_mass( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_mass","zpp_nape/phys/Body.hx",844);
		HX_STACK_THIS(this);
		HX_STACK_LINE(845)
		if (((this->massMode == ::zpp_nape::util::ZPP_Flags_obj::id_MassMode_DEFAULT))){
			HX_STACK_LINE(845)
			this->zip_mass = true;
		}
		HX_STACK_LINE(846)
		this->invalidate_gravMass();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_mass,(void))

Void ZPP_Body_obj::delta_rot( Float dr){
{
		HX_STACK_PUSH("ZPP_Body::delta_rot","zpp_nape/phys/Body.hx",825);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dr,"dr");
		HX_STACK_LINE(826)
		hx::AddEq(this->rot,dr);
		HX_STACK_LINE(827)
		if ((((dr * dr) > 0.0001))){
			HX_STACK_LINE(827)
			this->axisx = ::Math_obj::sin(this->rot);
			HX_STACK_LINE(827)
			this->axisy = ::Math_obj::cos(this->rot);
			HX_STACK_LINE(827)
			{
			}
			HX_STACK_LINE(827)
			Dynamic();
		}
		else{
			HX_STACK_LINE(829)
			Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
			HX_STACK_LINE(830)
			Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(831)
			Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(832)
			Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(833)
			this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
			HX_STACK_LINE(834)
			this->axisx = nx;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,delta_rot,(void))

Void ZPP_Body_obj::quick_validate_axis( ){
{
		HX_STACK_PUSH("ZPP_Body::quick_validate_axis","zpp_nape/phys/Body.hx",801);
		HX_STACK_THIS(this);
		HX_STACK_LINE(803)
		this->axisx = ::Math_obj::sin(this->rot);
		HX_STACK_LINE(804)
		this->axisy = ::Math_obj::cos(this->rot);
		HX_STACK_LINE(805)
		{
		}
		HX_STACK_LINE(813)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,quick_validate_axis,(void))

Void ZPP_Body_obj::validate_axis( ){
{
		HX_STACK_PUSH("ZPP_Body::validate_axis","zpp_nape/phys/Body.hx",793);
		HX_STACK_THIS(this);
		HX_STACK_LINE(793)
		if ((this->zip_axis)){
			HX_STACK_LINE(795)
			this->zip_axis = false;
			HX_STACK_LINE(796)
			{
				HX_STACK_LINE(796)
				this->axisx = ::Math_obj::sin(this->rot);
				HX_STACK_LINE(796)
				this->axisy = ::Math_obj::cos(this->rot);
				HX_STACK_LINE(796)
				{
				}
				HX_STACK_LINE(796)
				Dynamic();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,validate_axis,(void))

Void ZPP_Body_obj::invalidate_rot( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_rot","zpp_nape/phys/Body.hx",771);
		HX_STACK_THIS(this);
		HX_STACK_LINE(772)
		this->zip_axis = true;
		HX_STACK_LINE(773)
		{
			HX_STACK_LINE(774)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(775)
			while(((cx_ite != null()))){
				HX_STACK_LINE(776)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(777)
				{
					HX_STACK_LINE(778)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(779)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(780)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(782)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(784)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(787)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_rot,(void))

Void ZPP_Body_obj::setup_cvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setup_cvel","zpp_nape/phys/Body.hx",758);
		HX_STACK_THIS(this);
		HX_STACK_LINE(759)
		::zpp_nape::phys::ZPP_Body me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(760)
		this->wrapcvel = ::nape::geom::Vec3_obj::get(null(),null(),null());
		HX_STACK_LINE(761)
		this->wrapcvel->zpp_inner->immutable = true;
		HX_STACK_LINE(762)
		this->wrapcvel->zpp_inner->_validate = this->cvel_validate_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setup_cvel,(void))

Void ZPP_Body_obj::cvel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::cvel_validate","zpp_nape/phys/Body.hx",752);
		HX_STACK_THIS(this);
		HX_STACK_LINE(753)
		this->wrapcvel->zpp_inner->x = (this->velx + this->kinvelx);
		HX_STACK_LINE(754)
		this->wrapcvel->zpp_inner->y = (this->vely + this->kinvely);
		HX_STACK_LINE(755)
		this->wrapcvel->zpp_inner->z = (this->angvel + this->kinangvel);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,cvel_validate,(void))

Void ZPP_Body_obj::setupForce( ){
{
		HX_STACK_PUSH("ZPP_Body::setupForce","zpp_nape/phys/Body.hx",743);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",744);
				{
					HX_STACK_LINE(744)
					Float x = __this->forcex;		HX_STACK_VAR(x,"x");
					Float y = __this->forcey;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(744)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(744)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(744)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(744)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(744)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(744)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(744)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(744)
						ret->zpp_pool = null();
						HX_STACK_LINE(744)
						ret->zpp_disp = false;
						HX_STACK_LINE(744)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(744)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(744)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(744)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(744)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(744)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(744)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(744)
											ret1->next = null();
										}
										HX_STACK_LINE(744)
										ret1->weak = false;
									}
									HX_STACK_LINE(744)
									ret1->_immutable = immutable;
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										ret1->x = x;
										HX_STACK_LINE(744)
										ret1->y = y;
										HX_STACK_LINE(744)
										{
										}
										HX_STACK_LINE(744)
										{
										}
									}
									HX_STACK_LINE(744)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(744)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(744)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(744)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(744)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(744)
						{
							HX_STACK_LINE(744)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(744)
							if ((_this->_immutable)){
								HX_STACK_LINE(744)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(744)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(744)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(744)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(744)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(744)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(744)
											_this->_validate();
										}
									}
									HX_STACK_LINE(744)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",744);
								{
									HX_STACK_LINE(744)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(744)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(744)
									{
										HX_STACK_LINE(744)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(744)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(744)
											_this->_validate();
										}
									}
									HX_STACK_LINE(744)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(744)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(744)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(744)
								{
								}
								HX_STACK_LINE(744)
								{
								}
							}
							HX_STACK_LINE(744)
							{
								HX_STACK_LINE(744)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(744)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(744)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(744)
						ret;
					}
					HX_STACK_LINE(744)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(744)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(744)
		this->wrap_force = _Function_1_1::Block(this);
		HX_STACK_LINE(745)
		this->wrap_force->zpp_inner->_inuse = true;
		HX_STACK_LINE(746)
		if ((this->world)){
			HX_STACK_LINE(746)
			this->wrap_force->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(748)
			this->wrap_force->zpp_inner->_invalidate = this->force_invalidate_dyn();
			HX_STACK_LINE(749)
			this->wrap_force->zpp_inner->_validate = this->force_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupForce,(void))

Void ZPP_Body_obj::setupsvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setupsvel","zpp_nape/phys/Body.hx",734);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",735);
				{
					HX_STACK_LINE(735)
					Float x = __this->svelx;		HX_STACK_VAR(x,"x");
					Float y = __this->svely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(735)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(735)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(735)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(735)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(735)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(735)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(735)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(735)
						ret->zpp_pool = null();
						HX_STACK_LINE(735)
						ret->zpp_disp = false;
						HX_STACK_LINE(735)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(735)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(735)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",735);
								{
									HX_STACK_LINE(735)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(735)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(735)
									{
										HX_STACK_LINE(735)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(735)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(735)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(735)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(735)
											ret1->next = null();
										}
										HX_STACK_LINE(735)
										ret1->weak = false;
									}
									HX_STACK_LINE(735)
									ret1->_immutable = immutable;
									HX_STACK_LINE(735)
									{
										HX_STACK_LINE(735)
										ret1->x = x;
										HX_STACK_LINE(735)
										ret1->y = y;
										HX_STACK_LINE(735)
										{
										}
										HX_STACK_LINE(735)
										{
										}
									}
									HX_STACK_LINE(735)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(735)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(735)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(735)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(735)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(735)
						{
							HX_STACK_LINE(735)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(735)
							if ((_this->_immutable)){
								HX_STACK_LINE(735)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(735)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(735)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(735)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(735)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",735);
								{
									HX_STACK_LINE(735)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(735)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(735)
									{
										HX_STACK_LINE(735)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(735)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(735)
											_this->_validate();
										}
									}
									HX_STACK_LINE(735)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",735);
								{
									HX_STACK_LINE(735)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(735)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(735)
									{
										HX_STACK_LINE(735)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(735)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(735)
											_this->_validate();
										}
									}
									HX_STACK_LINE(735)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(735)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(735)
							{
								HX_STACK_LINE(735)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(735)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(735)
								{
								}
								HX_STACK_LINE(735)
								{
								}
							}
							HX_STACK_LINE(735)
							{
								HX_STACK_LINE(735)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(735)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(735)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(735)
						ret;
					}
					HX_STACK_LINE(735)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(735)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(735)
		this->wrap_svel = _Function_1_1::Block(this);
		HX_STACK_LINE(736)
		this->wrap_svel->zpp_inner->_inuse = true;
		HX_STACK_LINE(737)
		if ((this->world)){
			HX_STACK_LINE(737)
			this->wrap_svel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(739)
			this->wrap_svel->zpp_inner->_invalidate = this->svel_invalidate_dyn();
			HX_STACK_LINE(740)
			this->wrap_svel->zpp_inner->_validate = this->svel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupsvel,(void))

Void ZPP_Body_obj::setupkinvel( ){
{
		HX_STACK_PUSH("ZPP_Body::setupkinvel","zpp_nape/phys/Body.hx",725);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",726);
				{
					HX_STACK_LINE(726)
					Float x = __this->kinvelx;		HX_STACK_VAR(x,"x");
					Float y = __this->kinvely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(726)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(726)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(726)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(726)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(726)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(726)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(726)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(726)
						ret->zpp_pool = null();
						HX_STACK_LINE(726)
						ret->zpp_disp = false;
						HX_STACK_LINE(726)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(726)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(726)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",726);
								{
									HX_STACK_LINE(726)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(726)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(726)
									{
										HX_STACK_LINE(726)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(726)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(726)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(726)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(726)
											ret1->next = null();
										}
										HX_STACK_LINE(726)
										ret1->weak = false;
									}
									HX_STACK_LINE(726)
									ret1->_immutable = immutable;
									HX_STACK_LINE(726)
									{
										HX_STACK_LINE(726)
										ret1->x = x;
										HX_STACK_LINE(726)
										ret1->y = y;
										HX_STACK_LINE(726)
										{
										}
										HX_STACK_LINE(726)
										{
										}
									}
									HX_STACK_LINE(726)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(726)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(726)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(726)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(726)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(726)
						{
							HX_STACK_LINE(726)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(726)
							if ((_this->_immutable)){
								HX_STACK_LINE(726)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(726)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(726)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(726)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(726)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",726);
								{
									HX_STACK_LINE(726)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(726)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(726)
									{
										HX_STACK_LINE(726)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(726)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(726)
											_this->_validate();
										}
									}
									HX_STACK_LINE(726)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",726);
								{
									HX_STACK_LINE(726)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(726)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(726)
									{
										HX_STACK_LINE(726)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(726)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(726)
											_this->_validate();
										}
									}
									HX_STACK_LINE(726)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(726)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(726)
							{
								HX_STACK_LINE(726)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(726)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(726)
								{
								}
								HX_STACK_LINE(726)
								{
								}
							}
							HX_STACK_LINE(726)
							{
								HX_STACK_LINE(726)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(726)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(726)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(726)
						ret;
					}
					HX_STACK_LINE(726)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(726)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(726)
		this->wrap_kinvel = _Function_1_1::Block(this);
		HX_STACK_LINE(727)
		this->wrap_kinvel->zpp_inner->_inuse = true;
		HX_STACK_LINE(728)
		if ((this->world)){
			HX_STACK_LINE(728)
			this->wrap_kinvel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(730)
			this->wrap_kinvel->zpp_inner->_invalidate = this->kinvel_invalidate_dyn();
			HX_STACK_LINE(731)
			this->wrap_kinvel->zpp_inner->_validate = this->kinvel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupkinvel,(void))

Void ZPP_Body_obj::setupVelocity( ){
{
		HX_STACK_PUSH("ZPP_Body::setupVelocity","zpp_nape/phys/Body.hx",716);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",717);
				{
					HX_STACK_LINE(717)
					Float x = __this->velx;		HX_STACK_VAR(x,"x");
					Float y = __this->vely;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(717)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(717)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(717)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(717)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(717)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(717)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(717)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(717)
						ret->zpp_pool = null();
						HX_STACK_LINE(717)
						ret->zpp_disp = false;
						HX_STACK_LINE(717)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(717)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(717)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",717);
								{
									HX_STACK_LINE(717)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(717)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(717)
									{
										HX_STACK_LINE(717)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(717)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(717)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(717)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(717)
											ret1->next = null();
										}
										HX_STACK_LINE(717)
										ret1->weak = false;
									}
									HX_STACK_LINE(717)
									ret1->_immutable = immutable;
									HX_STACK_LINE(717)
									{
										HX_STACK_LINE(717)
										ret1->x = x;
										HX_STACK_LINE(717)
										ret1->y = y;
										HX_STACK_LINE(717)
										{
										}
										HX_STACK_LINE(717)
										{
										}
									}
									HX_STACK_LINE(717)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(717)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(717)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(717)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(717)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(717)
						{
							HX_STACK_LINE(717)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(717)
							if ((_this->_immutable)){
								HX_STACK_LINE(717)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(717)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(717)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(717)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(717)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",717);
								{
									HX_STACK_LINE(717)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(717)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(717)
									{
										HX_STACK_LINE(717)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(717)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(717)
											_this->_validate();
										}
									}
									HX_STACK_LINE(717)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",717);
								{
									HX_STACK_LINE(717)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(717)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(717)
									{
										HX_STACK_LINE(717)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(717)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(717)
											_this->_validate();
										}
									}
									HX_STACK_LINE(717)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(717)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(717)
							{
								HX_STACK_LINE(717)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(717)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(717)
								{
								}
								HX_STACK_LINE(717)
								{
								}
							}
							HX_STACK_LINE(717)
							{
								HX_STACK_LINE(717)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(717)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(717)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(717)
						ret;
					}
					HX_STACK_LINE(717)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(717)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(717)
		this->wrap_vel = _Function_1_1::Block(this);
		HX_STACK_LINE(718)
		this->wrap_vel->zpp_inner->_inuse = true;
		HX_STACK_LINE(719)
		if ((this->world)){
			HX_STACK_LINE(719)
			this->wrap_vel->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(721)
			this->wrap_vel->zpp_inner->_invalidate = this->vel_invalidate_dyn();
			HX_STACK_LINE(722)
			this->wrap_vel->zpp_inner->_validate = this->vel_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupVelocity,(void))

Void ZPP_Body_obj::setupPosition( ){
{
		HX_STACK_PUSH("ZPP_Body::setupPosition","zpp_nape/phys/Body.hx",707);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",708);
				{
					HX_STACK_LINE(708)
					Float x = __this->posx;		HX_STACK_VAR(x,"x");
					Float y = __this->posy;		HX_STACK_VAR(y,"y");
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(708)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(708)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					HX_STACK_LINE(708)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(708)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(708)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(708)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(708)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(708)
						ret->zpp_pool = null();
						HX_STACK_LINE(708)
						ret->zpp_disp = false;
						HX_STACK_LINE(708)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(708)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(708)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",708);
								{
									HX_STACK_LINE(708)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(708)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(708)
									{
										HX_STACK_LINE(708)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(708)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(708)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(708)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(708)
											ret1->next = null();
										}
										HX_STACK_LINE(708)
										ret1->weak = false;
									}
									HX_STACK_LINE(708)
									ret1->_immutable = immutable;
									HX_STACK_LINE(708)
									{
										HX_STACK_LINE(708)
										ret1->x = x;
										HX_STACK_LINE(708)
										ret1->y = y;
										HX_STACK_LINE(708)
										{
										}
										HX_STACK_LINE(708)
										{
										}
									}
									HX_STACK_LINE(708)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(708)
						ret->zpp_inner = _Function_3_1::Block(x,y);
						HX_STACK_LINE(708)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(708)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(708)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(708)
						{
							HX_STACK_LINE(708)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(708)
							if ((_this->_immutable)){
								HX_STACK_LINE(708)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(708)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(708)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(708)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(708)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",708);
								{
									HX_STACK_LINE(708)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(708)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(708)
									{
										HX_STACK_LINE(708)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(708)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(708)
											_this->_validate();
										}
									}
									HX_STACK_LINE(708)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",708);
								{
									HX_STACK_LINE(708)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(708)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(708)
									{
										HX_STACK_LINE(708)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(708)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(708)
											_this->_validate();
										}
									}
									HX_STACK_LINE(708)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(708)
						if ((!(((bool((_Function_3_1::Block(ret) == x)) && bool((_Function_3_2::Block(ret) == y))))))){
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(708)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(708)
								{
								}
								HX_STACK_LINE(708)
								{
								}
							}
							HX_STACK_LINE(708)
							{
								HX_STACK_LINE(708)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(708)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(708)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(708)
						ret;
					}
					HX_STACK_LINE(708)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(708)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(708)
		this->wrap_pos = _Function_1_1::Block(this);
		HX_STACK_LINE(709)
		this->wrap_pos->zpp_inner->_inuse = true;
		HX_STACK_LINE(710)
		if ((this->world)){
			HX_STACK_LINE(710)
			this->wrap_pos->zpp_inner->_immutable = true;
		}
		else{
			HX_STACK_LINE(712)
			this->wrap_pos->zpp_inner->_invalidate = this->pos_invalidate_dyn();
			HX_STACK_LINE(713)
			this->wrap_pos->zpp_inner->_validate = this->pos_validate_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,setupPosition,(void))

Void ZPP_Body_obj::force_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::force_validate","zpp_nape/phys/Body.hx",687);
		HX_STACK_THIS(this);
		HX_STACK_LINE(688)
		this->wrap_force->zpp_inner->x = this->forcex;
		HX_STACK_LINE(689)
		this->wrap_force->zpp_inner->y = this->forcey;
		HX_STACK_LINE(690)
		{
		}
		HX_STACK_LINE(698)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,force_validate,(void))

Void ZPP_Body_obj::force_invalidate( ::zpp_nape::geom::ZPP_Vec2 force){
{
		HX_STACK_PUSH("ZPP_Body::force_invalidate","zpp_nape/phys/Body.hx",661);
		HX_STACK_THIS(this);
		HX_STACK_ARG(force,"force");
		HX_STACK_LINE(663)
		if ((!(((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
			HX_STACK_LINE(663)
			hx::Throw (HX_CSTRING("Error: Non-dynamic body cannot have force applied."));
		}
		HX_STACK_LINE(665)
		{
			HX_STACK_LINE(666)
			this->forcex = force->x;
			HX_STACK_LINE(667)
			this->forcey = force->y;
			HX_STACK_LINE(668)
			{
			}
			HX_STACK_LINE(676)
			{
			}
		}
		HX_STACK_LINE(685)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,force_invalidate,(void))

Void ZPP_Body_obj::svel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::svel_validate","zpp_nape/phys/Body.hx",639);
		HX_STACK_THIS(this);
		HX_STACK_LINE(641)
		this->wrap_svel->zpp_inner->x = this->svelx;
		HX_STACK_LINE(642)
		this->wrap_svel->zpp_inner->y = this->svely;
		HX_STACK_LINE(643)
		{
		}
		HX_STACK_LINE(651)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,svel_validate,(void))

Void ZPP_Body_obj::svel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::svel_invalidate","zpp_nape/phys/Body.hx",616);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(617)
		{
			HX_STACK_LINE(618)
			this->svelx = vel->x;
			HX_STACK_LINE(619)
			this->svely = vel->y;
			HX_STACK_LINE(620)
			{
			}
			HX_STACK_LINE(628)
			{
			}
		}
		HX_STACK_LINE(637)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,svel_invalidate,(void))

Void ZPP_Body_obj::kinvel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::kinvel_validate","zpp_nape/phys/Body.hx",594);
		HX_STACK_THIS(this);
		HX_STACK_LINE(596)
		this->wrap_kinvel->zpp_inner->x = this->kinvelx;
		HX_STACK_LINE(597)
		this->wrap_kinvel->zpp_inner->y = this->kinvely;
		HX_STACK_LINE(598)
		{
		}
		HX_STACK_LINE(606)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,kinvel_validate,(void))

Void ZPP_Body_obj::kinvel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::kinvel_invalidate","zpp_nape/phys/Body.hx",571);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(573)
			this->kinvelx = vel->x;
			HX_STACK_LINE(574)
			this->kinvely = vel->y;
			HX_STACK_LINE(575)
			{
			}
			HX_STACK_LINE(583)
			{
			}
		}
		HX_STACK_LINE(592)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,kinvel_invalidate,(void))

Void ZPP_Body_obj::vel_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::vel_validate","zpp_nape/phys/Body.hx",549);
		HX_STACK_THIS(this);
		HX_STACK_LINE(551)
		this->wrap_vel->zpp_inner->x = this->velx;
		HX_STACK_LINE(552)
		this->wrap_vel->zpp_inner->y = this->vely;
		HX_STACK_LINE(553)
		{
		}
		HX_STACK_LINE(561)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,vel_validate,(void))

Void ZPP_Body_obj::vel_invalidate( ::zpp_nape::geom::ZPP_Vec2 vel){
{
		HX_STACK_PUSH("ZPP_Body::vel_invalidate","zpp_nape/phys/Body.hx",523);
		HX_STACK_THIS(this);
		HX_STACK_ARG(vel,"vel");
		HX_STACK_LINE(525)
		if (((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC))){
			HX_STACK_LINE(525)
			hx::Throw (HX_CSTRING("Error: Static body cannot have its velocity set."));
		}
		HX_STACK_LINE(527)
		{
			HX_STACK_LINE(528)
			this->velx = vel->x;
			HX_STACK_LINE(529)
			this->vely = vel->y;
			HX_STACK_LINE(530)
			{
			}
			HX_STACK_LINE(538)
			{
			}
		}
		HX_STACK_LINE(547)
		this->wake();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,vel_invalidate,(void))

Void ZPP_Body_obj::pos_validate( ){
{
		HX_STACK_PUSH("ZPP_Body::pos_validate","zpp_nape/phys/Body.hx",501);
		HX_STACK_THIS(this);
		HX_STACK_LINE(503)
		this->wrap_pos->zpp_inner->x = this->posx;
		HX_STACK_LINE(504)
		this->wrap_pos->zpp_inner->y = this->posy;
		HX_STACK_LINE(505)
		{
		}
		HX_STACK_LINE(513)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,pos_validate,(void))

Void ZPP_Body_obj::pos_invalidate( ::zpp_nape::geom::ZPP_Vec2 pos){
{
		HX_STACK_PUSH("ZPP_Body::pos_invalidate","zpp_nape/phys/Body.hx",471);
		HX_STACK_THIS(this);
		HX_STACK_ARG(pos,"pos");
		HX_STACK_LINE(472)
		this->immutable_midstep(HX_CSTRING("Body::position"));
		HX_STACK_LINE(474)
		if (((bool((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC)) && bool((this->space != null()))))){
			HX_STACK_LINE(474)
			hx::Throw (HX_CSTRING("Error: Cannot move a static object once inside a Space"));
		}
		HX_STACK_LINE(476)
		if ((!(((bool((this->posx == pos->x)) && bool((this->posy == pos->y))))))){
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(478)
				this->posx = pos->x;
				HX_STACK_LINE(479)
				this->posy = pos->y;
				HX_STACK_LINE(480)
				{
				}
				HX_STACK_LINE(488)
				{
				}
			}
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				{
					HX_STACK_LINE(497)
					::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(497)
					while(((cx_ite != null()))){
						HX_STACK_LINE(497)
						::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(497)
						{
							HX_STACK_LINE(497)
							if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
								HX_STACK_LINE(497)
								s->polygon->invalidate_gverts();
								HX_STACK_LINE(497)
								s->polygon->invalidate_gaxi();
							}
							HX_STACK_LINE(497)
							s->invalidate_worldCOM();
						}
						HX_STACK_LINE(497)
						cx_ite = cx_ite->next;
					}
				}
				HX_STACK_LINE(497)
				this->zip_worldCOM = true;
			}
			HX_STACK_LINE(498)
			this->wake();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,pos_invalidate,(void))

Void ZPP_Body_obj::invalidate_pos( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_pos","zpp_nape/phys/Body.hx",454);
		HX_STACK_THIS(this);
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(456)
			::zpp_nape::util::ZNPNode_ZPP_Shape cx_ite = this->shapes->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(457)
			while(((cx_ite != null()))){
				HX_STACK_LINE(458)
				::zpp_nape::shape::ZPP_Shape s = cx_ite->elt;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(459)
				{
					HX_STACK_LINE(460)
					if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_POLYGON))){
						HX_STACK_LINE(461)
						s->polygon->invalidate_gverts();
						HX_STACK_LINE(462)
						s->polygon->invalidate_gaxi();
					}
					HX_STACK_LINE(464)
					s->invalidate_worldCOM();
				}
				HX_STACK_LINE(466)
				cx_ite = cx_ite->next;
			}
		}
		HX_STACK_LINE(469)
		this->zip_worldCOM = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_pos,(void))

Void ZPP_Body_obj::sweepValidate( ::zpp_nape::shape::ZPP_Shape s){
{
		HX_STACK_PUSH("ZPP_Body::sweepValidate","zpp_nape/phys/Body.hx",366);
		HX_STACK_THIS(this);
		HX_STACK_ARG(s,"s");
		HX_STACK_LINE(367)
		{
		}
		HX_STACK_LINE(375)
		if (((s->type == ::zpp_nape::util::ZPP_Flags_obj::id_ShapeType_CIRCLE))){
			HX_STACK_LINE(377)
			s->worldCOMx = (this->posx + (((this->axisy * s->localCOMx) - (this->axisx * s->localCOMy))));
			HX_STACK_LINE(378)
			s->worldCOMy = (this->posy + (((s->localCOMx * this->axisx) + (s->localCOMy * this->axisy))));
		}
		else{
			HX_STACK_LINE(382)
			::zpp_nape::shape::ZPP_Polygon p = s->polygon;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(383)
			::zpp_nape::geom::ZPP_Vec2 li = p->lverts->next;		HX_STACK_VAR(li,"li");
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(385)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(386)
				while(((cx_ite != null()))){
					HX_STACK_LINE(387)
					::zpp_nape::geom::ZPP_Vec2 g = cx_ite;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(388)
					{
						HX_STACK_LINE(389)
						::zpp_nape::geom::ZPP_Vec2 l = li;		HX_STACK_VAR(l,"l");
						HX_STACK_LINE(390)
						li = li->next;
						HX_STACK_LINE(391)
						{
							HX_STACK_LINE(392)
							g->x = (this->posx + (((this->axisy * l->x) - (this->axisx * l->y))));
							HX_STACK_LINE(393)
							g->y = (this->posy + (((l->x * this->axisx) + (l->y * this->axisy))));
						}
					}
					HX_STACK_LINE(396)
					cx_ite = cx_ite->next;
				}
			}
			HX_STACK_LINE(399)
			::zpp_nape::util::ZNPNode_ZPP_Edge ite = p->edges->head;		HX_STACK_VAR(ite,"ite");
			HX_STACK_LINE(400)
			{
				HX_STACK_LINE(401)
				::zpp_nape::geom::ZPP_Vec2 cx_ite = p->gverts->next;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(402)
				::zpp_nape::geom::ZPP_Vec2 u = cx_ite;		HX_STACK_VAR(u,"u");
				HX_STACK_LINE(403)
				cx_ite = cx_ite->next;
				HX_STACK_LINE(404)
				while(((cx_ite != null()))){
					HX_STACK_LINE(405)
					::zpp_nape::geom::ZPP_Vec2 v = cx_ite;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(407)
						::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(408)
						ite = ite->next;
						HX_STACK_LINE(409)
						{
							HX_STACK_LINE(410)
							e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
							HX_STACK_LINE(411)
							e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
						}
						HX_STACK_LINE(413)
						e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
						HX_STACK_LINE(414)
						e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
						HX_STACK_LINE(415)
						e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
					}
					HX_STACK_LINE(417)
					u = v;
					HX_STACK_LINE(418)
					cx_ite = cx_ite->next;
				}
				HX_STACK_LINE(420)
				::zpp_nape::geom::ZPP_Vec2 v = p->gverts->next;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(421)
				{
					HX_STACK_LINE(422)
					::zpp_nape::shape::ZPP_Edge e = ite->elt;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(423)
					ite = ite->next;
					HX_STACK_LINE(424)
					{
						HX_STACK_LINE(425)
						e->gnormx = ((this->axisy * e->lnormx) - (this->axisx * e->lnormy));
						HX_STACK_LINE(426)
						e->gnormy = ((e->lnormx * this->axisx) + (e->lnormy * this->axisy));
					}
					HX_STACK_LINE(428)
					e->gprojection = (((this->posx * e->gnormx) + (this->posy * e->gnormy)) + e->lprojection);
					HX_STACK_LINE(429)
					e->tp0 = ((u->y * e->gnormx) - (u->x * e->gnormy));
					HX_STACK_LINE(430)
					e->tp1 = ((v->y * e->gnormx) - (v->x * e->gnormy));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepValidate,(void))

Void ZPP_Body_obj::sweepIntegrate( Float dt){
{
		HX_STACK_PUSH("ZPP_Body::sweepIntegrate","zpp_nape/phys/Body.hx",336);
		HX_STACK_THIS(this);
		HX_STACK_ARG(dt,"dt");
		HX_STACK_LINE(337)
		Float delta = (dt - this->sweepTime);		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(338)
		if (((delta != (int)0))){
			HX_STACK_LINE(339)
			{
			}
			HX_STACK_LINE(347)
			this->sweepTime = dt;
			HX_STACK_LINE(348)
			{
				HX_STACK_LINE(349)
				Float t = delta;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(350)
				{
				}
				HX_STACK_LINE(358)
				hx::AddEq(this->posx,(this->velx * t));
				HX_STACK_LINE(359)
				hx::AddEq(this->posy,(this->vely * t));
			}
			HX_STACK_LINE(361)
			if (((this->angvel != (int)0))){
				HX_STACK_LINE(361)
				Float dr = (this->sweep_angvel * delta);		HX_STACK_VAR(dr,"dr");
				HX_STACK_LINE(361)
				hx::AddEq(this->rot,dr);
				HX_STACK_LINE(361)
				if ((((dr * dr) > 0.0001))){
					HX_STACK_LINE(361)
					this->axisx = ::Math_obj::sin(this->rot);
					HX_STACK_LINE(361)
					this->axisy = ::Math_obj::cos(this->rot);
					HX_STACK_LINE(361)
					{
					}
					HX_STACK_LINE(361)
					Dynamic();
				}
				else{
					HX_STACK_LINE(361)
					Float d2 = (dr * dr);		HX_STACK_VAR(d2,"d2");
					HX_STACK_LINE(361)
					Float p = ((int)1 - (0.5 * d2));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(361)
					Float m = ((int)1 - (Float((d2 * d2)) / Float((int)8)));		HX_STACK_VAR(m,"m");
					HX_STACK_LINE(361)
					Float nx = ((((p * this->axisx) + (dr * this->axisy))) * m);		HX_STACK_VAR(nx,"nx");
					HX_STACK_LINE(361)
					this->axisy = ((((p * this->axisy) - (dr * this->axisx))) * m);
					HX_STACK_LINE(361)
					this->axisx = nx;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,sweepIntegrate,(void))

Void ZPP_Body_obj::refreshArbiters( ){
{
		HX_STACK_PUSH("ZPP_Body::refreshArbiters","zpp_nape/phys/Body.hx",317);
		HX_STACK_THIS(this);
		HX_STACK_LINE(319)
		::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = this->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
		HX_STACK_LINE(320)
		while(((cx_ite != null()))){
			HX_STACK_LINE(321)
			::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
			HX_STACK_LINE(322)
			arb->invalidated = true;
			HX_STACK_LINE(323)
			cx_ite = cx_ite->next;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,refreshArbiters,(void))

bool ZPP_Body_obj::atRest( Float dt){
	HX_STACK_PUSH("ZPP_Body::atRest","zpp_nape/phys/Body.hx",292);
	HX_STACK_THIS(this);
	HX_STACK_ARG(dt,"dt");
	HX_STACK_LINE(292)
	if ((!(((this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC))))){
		HX_STACK_LINE(293)
		return this->component->sleeping;
	}
	else{
		HX_STACK_LINE(295)
		Float linSq = ::nape::Config_obj::linearSleepThreshold;		HX_STACK_VAR(linSq,"linSq");
		HX_STACK_LINE(296)
		hx::MultEq(linSq,linSq);
		struct _Function_2_1{
			inline static Float Block( ::zpp_nape::phys::ZPP_Body_obj *__this){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",298);
				{
					HX_STACK_LINE(298)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(298)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(298)
					{
						HX_STACK_LINE(298)
						dx = (__this->posx - __this->pre_posx);
						HX_STACK_LINE(298)
						dy = (__this->posy - __this->pre_posy);
					}
					HX_STACK_LINE(298)
					return ((dx * dx) + (dy * dy));
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( ::zpp_nape::phys::ZPP_Body_obj *__this,Float &dt){
				HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",298);
				{
					HX_STACK_LINE(299)
					Float dx = 0.0;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(300)
					Float dy = 0.0;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(302)
						dx = (__this->aabb->maxx - __this->aabb->minx);
						HX_STACK_LINE(303)
						dy = (__this->aabb->maxy - __this->aabb->miny);
					}
					HX_STACK_LINE(305)
					Float idl = ((dx * dx) + (dy * dy));		HX_STACK_VAR(idl,"idl");
					HX_STACK_LINE(306)
					Float angSq = ::nape::Config_obj::angularSleepThreshold;		HX_STACK_VAR(angSq,"angSq");
					HX_STACK_LINE(307)
					hx::MultEq(angSq,angSq);
					struct _Function_3_1{
						inline static bool Block( ::zpp_nape::phys::ZPP_Body_obj *__this,Float &angSq,Float &idl,Float &dt){
							HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",308);
							{
								HX_STACK_LINE(309)
								Float dr = (__this->rot - __this->pre_rot);		HX_STACK_VAR(dr,"dr");
								HX_STACK_LINE(310)
								return (  (((((dr * dr) * idl) > ((angSq * dt) * dt)))) ? bool(false) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(308)
					return (  (((((((int)4 * __this->angvel) * __this->angvel) * idl) > angSq))) ? bool(false) : bool(_Function_3_1::Block(__this,angSq,idl,dt)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(297)
		bool cansleep = (  (((((this->velx * this->velx) + (this->vely * this->vely)) > linSq))) ? bool(false) : bool((  (((_Function_2_1::Block(this) > (((0.25 * linSq) * dt) * dt)))) ? bool(false) : bool(_Function_2_2::Block(this,dt)) )) );		HX_STACK_VAR(cansleep,"cansleep");
		HX_STACK_LINE(313)
		if ((!(cansleep))){
			HX_STACK_LINE(313)
			this->component->waket = this->space->stamp;
		}
		HX_STACK_LINE(314)
		return ((this->component->waket + ::nape::Config_obj::sleepDelay) < this->space->stamp);
	}
	HX_STACK_LINE(292)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,atRest,return )

::nape::phys::BodyList ZPP_Body_obj::interactingBodies( int arbiter_type,int depth,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_Body::interactingBodies","zpp_nape/phys/Body.hx",261);
	HX_STACK_THIS(this);
	HX_STACK_ARG(arbiter_type,"arbiter_type");
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(261)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(262)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(262)
		{
		}
		HX_STACK_LINE(262)
		Dynamic();
	}
	HX_STACK_LINE(263)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(264)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(265)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(266)
	this->graph_depth = (int)0;
	HX_STACK_LINE(267)
	while((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))){
		HX_STACK_LINE(268)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(269)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(269)
			continue;
		}
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(271)
			::zpp_nape::util::ZNPNode_ZPP_Arbiter cx_ite = cur->arbiters->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(272)
			while(((cx_ite != null()))){
				HX_STACK_LINE(273)
				::zpp_nape::dynamics::ZPP_Arbiter arb = cx_ite->elt;		HX_STACK_VAR(arb,"arb");
				HX_STACK_LINE(274)
				if (((((int(arb->type) & int(arbiter_type))) != (int)0))){
					HX_STACK_LINE(276)
					::zpp_nape::phys::ZPP_Body other = (  (((arb->b1 == cur))) ? ::zpp_nape::phys::ZPP_Body(arb->b2) : ::zpp_nape::phys::ZPP_Body(arb->b1) );		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(277)
					if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(other))){
						HX_STACK_LINE(278)
						::zpp_nape::phys::ZPP_Body_obj::bodystack->add(other);
						HX_STACK_LINE(279)
						other->graph_depth = (cur->graph_depth + (int)1);
					}
				}
				HX_STACK_LINE(283)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(287)
	{
		HX_STACK_LINE(287)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(287)
		if (((_this->parent == null()))){
			HX_STACK_LINE(287)
			Dynamic();
		}
		else{
			HX_STACK_LINE(287)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(287)
			while(((cur != null()))){
				struct _Function_4_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::nape::phys::BodyList &ret,::zpp_nape::util::ZPP_Set_ZPP_Body &cur,::zpp_nape::phys::ZPP_Body &_g){
						HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",287);
						{
							HX_STACK_LINE(287)
							{
							}
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(287)
								if (((b != _g))){
									HX_STACK_LINE(287)
									::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(287)
									if ((ret->zpp_inner->reverse_flag)){
										HX_STACK_LINE(287)
										ret->push(obj);
									}
									else{
										HX_STACK_LINE(287)
										ret->unshift(obj);
									}
								}
							}
							HX_STACK_LINE(287)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(287)
							if (((ret1 != null()))){
								HX_STACK_LINE(287)
								if (((cur == ret1->prev))){
									HX_STACK_LINE(287)
									ret1->prev = null();
								}
								else{
									HX_STACK_LINE(287)
									ret1->next = null();
								}
								HX_STACK_LINE(287)
								cur->parent = null();
							}
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(287)
								{
								}
								HX_STACK_LINE(287)
								{
									HX_STACK_LINE(287)
									o->data = null();
									HX_STACK_LINE(287)
									o->lt = null();
									HX_STACK_LINE(287)
									o->swapped = null();
								}
								HX_STACK_LINE(287)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(287)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(287)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(287)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_4_1::Block(ret,cur,_g)) )) );
			}
			HX_STACK_LINE(287)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(290)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC3(ZPP_Body_obj,interactingBodies,return )

::nape::phys::BodyList ZPP_Body_obj::connectedBodies( int depth,::nape::phys::BodyList output){
	HX_STACK_PUSH("ZPP_Body::connectedBodies","zpp_nape/phys/Body.hx",237);
	HX_STACK_THIS(this);
	HX_STACK_ARG(depth,"depth");
	HX_STACK_ARG(output,"output");
	HX_STACK_LINE(237)
	::zpp_nape::phys::ZPP_Body _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(238)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(238)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(238)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(238)
		{
		}
		HX_STACK_LINE(238)
		Dynamic();
	}
	HX_STACK_LINE(239)
	::nape::phys::BodyList ret = (  (((output == null()))) ? ::nape::phys::BodyList(::nape::phys::BodyList_obj::__new()) : ::nape::phys::BodyList(output) );		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(240)
	::zpp_nape::phys::ZPP_Body_obj::bodystack->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(241)
	::zpp_nape::phys::ZPP_Body_obj::bodyset->insert(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(242)
	this->graph_depth = (int)0;
	HX_STACK_LINE(243)
	while((!(((::zpp_nape::phys::ZPP_Body_obj::bodystack->head == null()))))){
		HX_STACK_LINE(244)
		::zpp_nape::phys::ZPP_Body cur = ::zpp_nape::phys::ZPP_Body_obj::bodystack->pop_unsafe();		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(245)
		if (((cur->graph_depth == depth))){
			HX_STACK_LINE(245)
			continue;
		}
		HX_STACK_LINE(246)
		::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth = cur->graph_depth;
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(248)
			::zpp_nape::util::ZNPNode_ZPP_Constraint cx_ite = cur->constraints->head;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(249)
			while(((cx_ite != null()))){
				HX_STACK_LINE(250)
				::zpp_nape::constraint::ZPP_Constraint c = cx_ite->elt;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(251)
				c->outer->visitBodies(this->connectedBodies_cont_dyn());
				HX_STACK_LINE(252)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		::zpp_nape::util::ZPP_Set_ZPP_Body _this = ::zpp_nape::phys::ZPP_Body_obj::bodyset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(256)
		if (((_this->parent == null()))){
			HX_STACK_LINE(256)
			Dynamic();
		}
		else{
			HX_STACK_LINE(256)
			::zpp_nape::util::ZPP_Set_ZPP_Body cur = _this->parent;		HX_STACK_VAR(cur,"cur");
			HX_STACK_LINE(256)
			while(((cur != null()))){
				struct _Function_4_1{
					inline static ::zpp_nape::util::ZPP_Set_ZPP_Body Block( ::nape::phys::BodyList &ret,::zpp_nape::util::ZPP_Set_ZPP_Body &cur,::zpp_nape::phys::ZPP_Body &_g){
						HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",256);
						{
							HX_STACK_LINE(256)
							{
							}
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(256)
								::zpp_nape::phys::ZPP_Body b = cur->data;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(256)
								if (((b != _g))){
									HX_STACK_LINE(256)
									::nape::phys::Body obj = b->outer;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(256)
									if ((ret->zpp_inner->reverse_flag)){
										HX_STACK_LINE(256)
										ret->push(obj);
									}
									else{
										HX_STACK_LINE(256)
										ret->unshift(obj);
									}
								}
							}
							HX_STACK_LINE(256)
							::zpp_nape::util::ZPP_Set_ZPP_Body ret1 = cur->parent;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(256)
							if (((ret1 != null()))){
								HX_STACK_LINE(256)
								if (((cur == ret1->prev))){
									HX_STACK_LINE(256)
									ret1->prev = null();
								}
								else{
									HX_STACK_LINE(256)
									ret1->next = null();
								}
								HX_STACK_LINE(256)
								cur->parent = null();
							}
							HX_STACK_LINE(256)
							{
								HX_STACK_LINE(256)
								::zpp_nape::util::ZPP_Set_ZPP_Body o = cur;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(256)
								{
								}
								HX_STACK_LINE(256)
								{
									HX_STACK_LINE(256)
									o->data = null();
									HX_STACK_LINE(256)
									o->lt = null();
									HX_STACK_LINE(256)
									o->swapped = null();
								}
								HX_STACK_LINE(256)
								o->next = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool;
								HX_STACK_LINE(256)
								::zpp_nape::util::ZPP_Set_ZPP_Body_obj::zpp_pool = o;
							}
							HX_STACK_LINE(256)
							return ret1;
						}
						return null();
					}
				};
				HX_STACK_LINE(256)
				cur = (  (((cur->prev != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->prev) : ::zpp_nape::util::ZPP_Set_ZPP_Body((  (((cur->next != null()))) ? ::zpp_nape::util::ZPP_Set_ZPP_Body(cur->next) : ::zpp_nape::util::ZPP_Set_ZPP_Body(_Function_4_1::Block(ret,cur,_g)) )) );
			}
			HX_STACK_LINE(256)
			_this->parent = null();
		}
	}
	HX_STACK_LINE(259)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,connectedBodies,return )

Void ZPP_Body_obj::connectedBodies_cont( ::nape::phys::Body b){
{
		HX_STACK_PUSH("ZPP_Body::connectedBodies_cont","zpp_nape/phys/Body.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(231)
		if ((::zpp_nape::phys::ZPP_Body_obj::bodyset->try_insert_bool(b->zpp_inner))){
			HX_STACK_LINE(233)
			::zpp_nape::phys::ZPP_Body_obj::bodystack->add(b->zpp_inner);
			HX_STACK_LINE(234)
			b->zpp_inner->graph_depth = (::zpp_nape::phys::ZPP_Body_obj::cur_graph_depth + (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_Body_obj,connectedBodies_cont,(void))

Void ZPP_Body_obj::init_bodysetlist( ){
{
		HX_STACK_PUSH("ZPP_Body::init_bodysetlist","zpp_nape/phys/Body.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		if (((::zpp_nape::phys::ZPP_Body_obj::bodyset == null()))){
			HX_STACK_LINE(209)
			::zpp_nape::phys::ZPP_Body_obj::bodyset = ::zpp_nape::util::ZPP_Set_ZPP_Body_obj::__new();
			HX_STACK_LINE(210)
			::zpp_nape::phys::ZPP_Body_obj::bodyset->lt = ::zpp_nape::phys::ZPP_Body_obj::bodysetlt_dyn();
			HX_STACK_LINE(211)
			::zpp_nape::phys::ZPP_Body_obj::bodystack = ::zpp_nape::util::ZNPList_ZPP_Body_obj::__new();
		}
		HX_STACK_LINE(213)
		{
		}
		HX_STACK_LINE(221)
		{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,init_bodysetlist,(void))

Void ZPP_Body_obj::invalidate_shapes( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_shapes","zpp_nape/phys/Body.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_LINE(192)
		this->zip_aabb = true;
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			this->zip_localCOM = true;
			HX_STACK_LINE(193)
			this->zip_worldCOM = true;
		}
		HX_STACK_LINE(194)
		this->invalidate_mass();
		HX_STACK_LINE(195)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_shapes,(void))

Void ZPP_Body_obj::invalidate_type( ){
{
		HX_STACK_PUSH("ZPP_Body::invalidate_type","zpp_nape/phys/Body.hx",184);
		HX_STACK_THIS(this);
		HX_STACK_LINE(185)
		this->invalidate_mass();
		HX_STACK_LINE(186)
		this->invalidate_inertia();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,invalidate_type,(void))

bool ZPP_Body_obj::isKinematic( ){
	HX_STACK_PUSH("ZPP_Body::isKinematic","zpp_nape/phys/Body.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_LINE(184)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_KINEMATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isKinematic,return )

bool ZPP_Body_obj::isDynamic( ){
	HX_STACK_PUSH("ZPP_Body::isDynamic","zpp_nape/phys/Body.hx",182);
	HX_STACK_THIS(this);
	HX_STACK_LINE(182)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_DYNAMIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isDynamic,return )

bool ZPP_Body_obj::isStatic( ){
	HX_STACK_PUSH("ZPP_Body::isStatic","zpp_nape/phys/Body.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return (this->type == ::zpp_nape::util::ZPP_Flags_obj::id_BodyType_STATIC);
}


HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,isStatic,return )

::zpp_nape::util::ZNPList_ZPP_Body ZPP_Body_obj::bodystack;

::zpp_nape::util::ZPP_Set_ZPP_Body ZPP_Body_obj::bodyset;

bool ZPP_Body_obj::bodysetlt( ::zpp_nape::phys::ZPP_Body a,::zpp_nape::phys::ZPP_Body b){
	HX_STACK_PUSH("ZPP_Body::bodysetlt","zpp_nape/phys/Body.hx",205);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(205)
	return (a->id < b->id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ZPP_Body_obj,bodysetlt,return )

int ZPP_Body_obj::cur_graph_depth;

::nape::phys::Body ZPP_Body_obj::__static( ){
	HX_STACK_PUSH("ZPP_Body::__static","zpp_nape/phys/Body.hx",1362);
	struct _Function_1_1{
		inline static ::nape::phys::BodyType Block( ){
			HX_STACK_PUSH("*::closure","zpp_nape/phys/Body.hx",1363);
			{
				HX_STACK_LINE(1363)
				if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
					HX_STACK_LINE(1363)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(1363)
				return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
			}
			return null();
		}
	};
	HX_STACK_LINE(1363)
	::nape::phys::Body ret = ::nape::phys::Body_obj::__new(_Function_1_1::Block(),null());		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(1364)
	::zpp_nape::phys::ZPP_Body si = ret->zpp_inner;		HX_STACK_VAR(si,"si");
	HX_STACK_LINE(1365)
	si->world = true;
	HX_STACK_LINE(1366)
	si->wrap_shapes->zpp_inner->immutable = true;
	HX_STACK_LINE(1367)
	si->smass = si->imass = si->cmass = si->mass = si->gravMass = 0.0;
	HX_STACK_LINE(1368)
	si->sinertia = si->iinertia = si->cinertia = si->inertia = 0.0;
	HX_STACK_LINE(1369)
	si->cbTypes->clear();
	HX_STACK_LINE(1370)
	return ret;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ZPP_Body_obj,__static,return )


ZPP_Body_obj::ZPP_Body_obj()
{
}

void ZPP_Body_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_Body);
	HX_MARK_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_MARK_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_MARK_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_MARK_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_MARK_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_MARK_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_MARK_MEMBER_NAME(localCOMy,"localCOMy");
	HX_MARK_MEMBER_NAME(localCOMx,"localCOMx");
	HX_MARK_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_MARK_MEMBER_NAME(aabb,"aabb");
	HX_MARK_MEMBER_NAME(norotate,"norotate");
	HX_MARK_MEMBER_NAME(sinertia,"sinertia");
	HX_MARK_MEMBER_NAME(iinertia,"iinertia");
	HX_MARK_MEMBER_NAME(cinertia,"cinertia");
	HX_MARK_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_MARK_MEMBER_NAME(inertia,"inertia");
	HX_MARK_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_MARK_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_MARK_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_MARK_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_MARK_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_MARK_MEMBER_NAME(gravMass,"gravMass");
	HX_MARK_MEMBER_NAME(nomove,"nomove");
	HX_MARK_MEMBER_NAME(cmass,"cmass");
	HX_MARK_MEMBER_NAME(smass,"smass");
	HX_MARK_MEMBER_NAME(imass,"imass");
	HX_MARK_MEMBER_NAME(massMode,"massMode");
	HX_MARK_MEMBER_NAME(zip_mass,"zip_mass");
	HX_MARK_MEMBER_NAME(mass,"mass");
	HX_MARK_MEMBER_NAME(zip_axis,"zip_axis");
	HX_MARK_MEMBER_NAME(axisy,"axisy");
	HX_MARK_MEMBER_NAME(axisx,"axisx");
	HX_MARK_MEMBER_NAME(rot,"rot");
	HX_MARK_MEMBER_NAME(pre_rot,"pre_rot");
	HX_MARK_MEMBER_NAME(kinangvel,"kinangvel");
	HX_MARK_MEMBER_NAME(torque,"torque");
	HX_MARK_MEMBER_NAME(angvel,"angvel");
	HX_MARK_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_MARK_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_MARK_MEMBER_NAME(svely,"svely");
	HX_MARK_MEMBER_NAME(svelx,"svelx");
	HX_MARK_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_MARK_MEMBER_NAME(kinvely,"kinvely");
	HX_MARK_MEMBER_NAME(kinvelx,"kinvelx");
	HX_MARK_MEMBER_NAME(wrap_force,"wrap_force");
	HX_MARK_MEMBER_NAME(forcey,"forcey");
	HX_MARK_MEMBER_NAME(forcex,"forcex");
	HX_MARK_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_MARK_MEMBER_NAME(vely,"vely");
	HX_MARK_MEMBER_NAME(velx,"velx");
	HX_MARK_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_MARK_MEMBER_NAME(posy,"posy");
	HX_MARK_MEMBER_NAME(posx,"posx");
	HX_MARK_MEMBER_NAME(pre_posy,"pre_posy");
	HX_MARK_MEMBER_NAME(pre_posx,"pre_posx");
	HX_MARK_MEMBER_NAME(disableCCD,"disableCCD");
	HX_MARK_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_MARK_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_MARK_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_MARK_MEMBER_NAME(sweepTime,"sweepTime");
	HX_MARK_MEMBER_NAME(graph_depth,"graph_depth");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_MARK_MEMBER_NAME(arbiters,"arbiters");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_MARK_MEMBER_NAME(shapes,"shapes");
	HX_MARK_MEMBER_NAME(compound,"compound");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(outer,"outer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ZPP_Body_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap_worldCOM,"wrap_worldCOM");
	HX_VISIT_MEMBER_NAME(wrap_localCOM,"wrap_localCOM");
	HX_VISIT_MEMBER_NAME(zip_worldCOM,"zip_worldCOM");
	HX_VISIT_MEMBER_NAME(worldCOMy,"worldCOMy");
	HX_VISIT_MEMBER_NAME(worldCOMx,"worldCOMx");
	HX_VISIT_MEMBER_NAME(zip_localCOM,"zip_localCOM");
	HX_VISIT_MEMBER_NAME(localCOMy,"localCOMy");
	HX_VISIT_MEMBER_NAME(localCOMx,"localCOMx");
	HX_VISIT_MEMBER_NAME(zip_aabb,"zip_aabb");
	HX_VISIT_MEMBER_NAME(aabb,"aabb");
	HX_VISIT_MEMBER_NAME(norotate,"norotate");
	HX_VISIT_MEMBER_NAME(sinertia,"sinertia");
	HX_VISIT_MEMBER_NAME(iinertia,"iinertia");
	HX_VISIT_MEMBER_NAME(cinertia,"cinertia");
	HX_VISIT_MEMBER_NAME(zip_inertia,"zip_inertia");
	HX_VISIT_MEMBER_NAME(inertia,"inertia");
	HX_VISIT_MEMBER_NAME(inertiaMode,"inertiaMode");
	HX_VISIT_MEMBER_NAME(zip_gravMassScale,"zip_gravMassScale");
	HX_VISIT_MEMBER_NAME(gravMassScale,"gravMassScale");
	HX_VISIT_MEMBER_NAME(gravMassMode,"gravMassMode");
	HX_VISIT_MEMBER_NAME(zip_gravMass,"zip_gravMass");
	HX_VISIT_MEMBER_NAME(gravMass,"gravMass");
	HX_VISIT_MEMBER_NAME(nomove,"nomove");
	HX_VISIT_MEMBER_NAME(cmass,"cmass");
	HX_VISIT_MEMBER_NAME(smass,"smass");
	HX_VISIT_MEMBER_NAME(imass,"imass");
	HX_VISIT_MEMBER_NAME(massMode,"massMode");
	HX_VISIT_MEMBER_NAME(zip_mass,"zip_mass");
	HX_VISIT_MEMBER_NAME(mass,"mass");
	HX_VISIT_MEMBER_NAME(zip_axis,"zip_axis");
	HX_VISIT_MEMBER_NAME(axisy,"axisy");
	HX_VISIT_MEMBER_NAME(axisx,"axisx");
	HX_VISIT_MEMBER_NAME(rot,"rot");
	HX_VISIT_MEMBER_NAME(pre_rot,"pre_rot");
	HX_VISIT_MEMBER_NAME(kinangvel,"kinangvel");
	HX_VISIT_MEMBER_NAME(torque,"torque");
	HX_VISIT_MEMBER_NAME(angvel,"angvel");
	HX_VISIT_MEMBER_NAME(wrapcvel,"wrapcvel");
	HX_VISIT_MEMBER_NAME(wrap_svel,"wrap_svel");
	HX_VISIT_MEMBER_NAME(svely,"svely");
	HX_VISIT_MEMBER_NAME(svelx,"svelx");
	HX_VISIT_MEMBER_NAME(wrap_kinvel,"wrap_kinvel");
	HX_VISIT_MEMBER_NAME(kinvely,"kinvely");
	HX_VISIT_MEMBER_NAME(kinvelx,"kinvelx");
	HX_VISIT_MEMBER_NAME(wrap_force,"wrap_force");
	HX_VISIT_MEMBER_NAME(forcey,"forcey");
	HX_VISIT_MEMBER_NAME(forcex,"forcex");
	HX_VISIT_MEMBER_NAME(wrap_vel,"wrap_vel");
	HX_VISIT_MEMBER_NAME(vely,"vely");
	HX_VISIT_MEMBER_NAME(velx,"velx");
	HX_VISIT_MEMBER_NAME(wrap_pos,"wrap_pos");
	HX_VISIT_MEMBER_NAME(posy,"posy");
	HX_VISIT_MEMBER_NAME(posx,"posx");
	HX_VISIT_MEMBER_NAME(pre_posy,"pre_posy");
	HX_VISIT_MEMBER_NAME(pre_posx,"pre_posx");
	HX_VISIT_MEMBER_NAME(disableCCD,"disableCCD");
	HX_VISIT_MEMBER_NAME(bulletEnabled,"bulletEnabled");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(sweepRadius,"sweepRadius");
	HX_VISIT_MEMBER_NAME(sweepFrozen,"sweepFrozen");
	HX_VISIT_MEMBER_NAME(sweep_angvel,"sweep_angvel");
	HX_VISIT_MEMBER_NAME(sweepTime,"sweepTime");
	HX_VISIT_MEMBER_NAME(graph_depth,"graph_depth");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(wrap_constraints,"wrap_constraints");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
	HX_VISIT_MEMBER_NAME(wrap_arbiters,"wrap_arbiters");
	HX_VISIT_MEMBER_NAME(arbiters,"arbiters");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(wrap_shapes,"wrap_shapes");
	HX_VISIT_MEMBER_NAME(shapes,"shapes");
	HX_VISIT_MEMBER_NAME(compound,"compound");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(outer,"outer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ZPP_Body_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { return rot; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb") ) { return aabb; }
		if (HX_FIELD_EQ(inName,"mass") ) { return mass; }
		if (HX_FIELD_EQ(inName,"vely") ) { return vely; }
		if (HX_FIELD_EQ(inName,"velx") ) { return velx; }
		if (HX_FIELD_EQ(inName,"posy") ) { return posy; }
		if (HX_FIELD_EQ(inName,"posx") ) { return posx; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"cmass") ) { return cmass; }
		if (HX_FIELD_EQ(inName,"smass") ) { return smass; }
		if (HX_FIELD_EQ(inName,"imass") ) { return imass; }
		if (HX_FIELD_EQ(inName,"axisy") ) { return axisy; }
		if (HX_FIELD_EQ(inName,"axisx") ) { return axisx; }
		if (HX_FIELD_EQ(inName,"svely") ) { return svely; }
		if (HX_FIELD_EQ(inName,"svelx") ) { return svelx; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		if (HX_FIELD_EQ(inName,"outer") ) { return outer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nomove") ) { return nomove; }
		if (HX_FIELD_EQ(inName,"torque") ) { return torque; }
		if (HX_FIELD_EQ(inName,"angvel") ) { return angvel; }
		if (HX_FIELD_EQ(inName,"forcey") ) { return forcey; }
		if (HX_FIELD_EQ(inName,"forcex") ) { return forcex; }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet; }
		if (HX_FIELD_EQ(inName,"atRest") ) { return atRest_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes") ) { return shapes; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { return bodyset; }
		if (HX_FIELD_EQ(inName,"inertia") ) { return inertia; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { return pre_rot; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { return kinvely; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { return kinvelx; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__static") ) { return __static_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { return zip_aabb; }
		if (HX_FIELD_EQ(inName,"norotate") ) { return norotate; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { return sinertia; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { return iinertia; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { return cinertia; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { return gravMass; }
		if (HX_FIELD_EQ(inName,"massMode") ) { return massMode; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { return zip_mass; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { return zip_axis; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { return wrapcvel; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { return wrap_vel; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { return wrap_pos; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { return pre_posy; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { return pre_posx; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { return arbiters; }
		if (HX_FIELD_EQ(inName,"compound") ) { return compound; }
		if (HX_FIELD_EQ(inName,"isStatic") ) { return isStatic_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { return bodystack; }
		if (HX_FIELD_EQ(inName,"bodysetlt") ) { return bodysetlt_dyn(); }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { return worldCOMy; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { return worldCOMx; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { return localCOMy; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { return localCOMx; }
		if (HX_FIELD_EQ(inName,"delta_rot") ) { return delta_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { return kinangvel; }
		if (HX_FIELD_EQ(inName,"setupsvel") ) { return setupsvel_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { return wrap_svel; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { return sweepTime; }
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		if (HX_FIELD_EQ(inName,"isDynamic") ) { return isDynamic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setup_cvel") ) { return setup_cvel_dyn(); }
		if (HX_FIELD_EQ(inName,"setupForce") ) { return setupForce_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_force") ) { return wrap_force; }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { return disableCCD; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getworldCOM") ) { return getworldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"getlocalCOM") ) { return getlocalCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { return zip_inertia; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { return inertiaMode; }
		if (HX_FIELD_EQ(inName,"setupkinvel") ) { return setupkinvel_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { return wrap_kinvel; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { return sweepRadius; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { return sweepFrozen; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { return graph_depth; }
		if (HX_FIELD_EQ(inName,"constraints") ) { return constraints; }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { return wrap_shapes; }
		if (HX_FIELD_EQ(inName,"isKinematic") ) { return isKinematic_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addedToSpace") ) { return addedToSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_adder") ) { return shapes_adder_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { return zip_worldCOM; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { return zip_localCOM; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { return gravMassMode; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { return zip_gravMass; }
		if (HX_FIELD_EQ(inName,"vel_validate") ) { return vel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_validate") ) { return pos_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { return sweep_angvel; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shapes_subber") ) { return shapes_subber_dyn(); }
		if (HX_FIELD_EQ(inName,"aabb_validate") ) { return aabb_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { return wrap_worldCOM; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { return wrap_localCOM; }
		if (HX_FIELD_EQ(inName,"validate_aabb") ) { return validate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { return gravMassScale; }
		if (HX_FIELD_EQ(inName,"validate_mass") ) { return validate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_axis") ) { return validate_axis_dyn(); }
		if (HX_FIELD_EQ(inName,"cvel_validate") ) { return cvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"setupVelocity") ) { return setupVelocity_dyn(); }
		if (HX_FIELD_EQ(inName,"setupPosition") ) { return setupPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_validate") ) { return svel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepValidate") ) { return sweepValidate_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { return bulletEnabled; }
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { return wrap_arbiters; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidate_rot") ) { return invalidate_rot_dyn(); }
		if (HX_FIELD_EQ(inName,"force_validate") ) { return force_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"vel_invalidate") ) { return vel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"pos_invalidate") ) { return pos_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_pos") ) { return invalidate_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"sweepIntegrate") ) { return sweepIntegrate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { return cur_graph_depth; }
		if (HX_FIELD_EQ(inName,"invalidate_aabb") ) { return invalidate_aabb_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_wake") ) { return invalidate_wake_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_mass") ) { return invalidate_mass_dyn(); }
		if (HX_FIELD_EQ(inName,"svel_invalidate") ) { return svel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"kinvel_validate") ) { return kinvel_validate_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshArbiters") ) { return refreshArbiters_dyn(); }
		if (HX_FIELD_EQ(inName,"connectedBodies") ) { return connectedBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_type") ) { return invalidate_type_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removedFromSpace") ) { return removedFromSpace_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_inertia") ) { return validate_inertia_dyn(); }
		if (HX_FIELD_EQ(inName,"force_invalidate") ) { return force_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"init_bodysetlist") ) { return init_bodysetlist_dyn(); }
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { return wrap_constraints; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"shapes_modifiable") ) { return shapes_modifiable_dyn(); }
		if (HX_FIELD_EQ(inName,"shapes_invalidate") ) { return shapes_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_worldCOM") ) { return validate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_localCOM") ) { return validate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"validate_gravMass") ) { return validate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { return zip_gravMassScale; }
		if (HX_FIELD_EQ(inName,"kinvel_invalidate") ) { return kinvel_invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"interactingBodies") ) { return interactingBodies_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_shapes") ) { return invalidate_shapes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"invalidate_inertia") ) { return invalidate_inertia_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__immutable_midstep") ) { return __immutable_midstep_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_worldCOM") ) { return invalidate_worldCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_localCOM") ) { return invalidate_localCOM_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate_gravMass") ) { return invalidate_gravMass_dyn(); }
		if (HX_FIELD_EQ(inName,"quick_validate_axis") ) { return quick_validate_axis_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"connectedBodies_cont") ) { return connectedBodies_cont_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validate_gravMassScale") ) { return validate_gravMassScale_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"invalidate_gravMassScale") ) { return invalidate_gravMassScale_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_Body_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rot") ) { rot=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"aabb") ) { aabb=inValue.Cast< ::zpp_nape::geom::ZPP_AABB >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mass") ) { mass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vely") ) { vely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velx") ) { velx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posy") ) { posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posx") ) { posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cmass") ) { cmass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smass") ) { smass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imass") ) { imass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisy") ) { axisy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"axisx") ) { axisx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svely") ) { svely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"svelx") ) { svelx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::zpp_nape::space::ZPP_Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outer") ) { outer=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nomove") ) { nomove=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"torque") ) { torque=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angvel") ) { angvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcey") ) { forcey=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forcex") ) { forcex=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Shape >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bodyset") ) { bodyset=inValue.Cast< ::zpp_nape::util::ZPP_Set_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertia") ) { inertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_rot") ) { pre_rot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvely") ) { kinvely=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinvelx") ) { kinvelx=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"zip_aabb") ) { zip_aabb=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"norotate") ) { norotate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sinertia") ) { sinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iinertia") ) { iinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cinertia") ) { cinertia=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMass") ) { gravMass=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"massMode") ) { massMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_mass") ) { zip_mass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_axis") ) { zip_axis=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapcvel") ) { wrapcvel=inValue.Cast< ::nape::geom::Vec3 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_vel") ) { wrap_vel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_pos") ) { wrap_pos=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posy") ) { pre_posy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pre_posx") ) { pre_posx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arbiters") ) { arbiters=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Arbiter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compound") ) { compound=inValue.Cast< ::zpp_nape::phys::ZPP_Compound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bodystack") ) { bodystack=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Body >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMy") ) { worldCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldCOMx") ) { worldCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMy") ) { localCOMy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localCOMx") ) { localCOMx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kinangvel") ) { kinangvel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_svel") ) { wrap_svel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepTime") ) { sweepTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::zpp_nape::space::ZPP_Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wrap_force") ) { wrap_force=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableCCD") ) { disableCCD=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"zip_inertia") ) { zip_inertia=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertiaMode") ) { inertiaMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_kinvel") ) { wrap_kinvel=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepRadius") ) { sweepRadius=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweepFrozen") ) { sweepFrozen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graph_depth") ) { graph_depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::zpp_nape::util::ZNPList_ZPP_Constraint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_shapes") ) { wrap_shapes=inValue.Cast< ::nape::shape::ShapeList >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zip_worldCOM") ) { zip_worldCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_localCOM") ) { zip_localCOM=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassMode") ) { gravMassMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zip_gravMass") ) { zip_gravMass=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sweep_angvel") ) { sweep_angvel=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wrap_worldCOM") ) { wrap_worldCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_localCOM") ) { wrap_localCOM=inValue.Cast< ::nape::geom::Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravMassScale") ) { gravMassScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletEnabled") ) { bulletEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrap_arbiters") ) { wrap_arbiters=inValue.Cast< ::nape::dynamics::ArbiterList >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cur_graph_depth") ) { cur_graph_depth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"wrap_constraints") ) { wrap_constraints=inValue.Cast< ::nape::constraint::ConstraintList >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"zip_gravMassScale") ) { zip_gravMassScale=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_Body_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap_worldCOM"));
	outFields->push(HX_CSTRING("wrap_localCOM"));
	outFields->push(HX_CSTRING("zip_worldCOM"));
	outFields->push(HX_CSTRING("worldCOMy"));
	outFields->push(HX_CSTRING("worldCOMx"));
	outFields->push(HX_CSTRING("zip_localCOM"));
	outFields->push(HX_CSTRING("localCOMy"));
	outFields->push(HX_CSTRING("localCOMx"));
	outFields->push(HX_CSTRING("zip_aabb"));
	outFields->push(HX_CSTRING("aabb"));
	outFields->push(HX_CSTRING("norotate"));
	outFields->push(HX_CSTRING("sinertia"));
	outFields->push(HX_CSTRING("iinertia"));
	outFields->push(HX_CSTRING("cinertia"));
	outFields->push(HX_CSTRING("zip_inertia"));
	outFields->push(HX_CSTRING("inertia"));
	outFields->push(HX_CSTRING("inertiaMode"));
	outFields->push(HX_CSTRING("zip_gravMassScale"));
	outFields->push(HX_CSTRING("gravMassScale"));
	outFields->push(HX_CSTRING("gravMassMode"));
	outFields->push(HX_CSTRING("zip_gravMass"));
	outFields->push(HX_CSTRING("gravMass"));
	outFields->push(HX_CSTRING("nomove"));
	outFields->push(HX_CSTRING("cmass"));
	outFields->push(HX_CSTRING("smass"));
	outFields->push(HX_CSTRING("imass"));
	outFields->push(HX_CSTRING("massMode"));
	outFields->push(HX_CSTRING("zip_mass"));
	outFields->push(HX_CSTRING("mass"));
	outFields->push(HX_CSTRING("zip_axis"));
	outFields->push(HX_CSTRING("axisy"));
	outFields->push(HX_CSTRING("axisx"));
	outFields->push(HX_CSTRING("rot"));
	outFields->push(HX_CSTRING("pre_rot"));
	outFields->push(HX_CSTRING("kinangvel"));
	outFields->push(HX_CSTRING("torque"));
	outFields->push(HX_CSTRING("angvel"));
	outFields->push(HX_CSTRING("wrapcvel"));
	outFields->push(HX_CSTRING("wrap_svel"));
	outFields->push(HX_CSTRING("svely"));
	outFields->push(HX_CSTRING("svelx"));
	outFields->push(HX_CSTRING("wrap_kinvel"));
	outFields->push(HX_CSTRING("kinvely"));
	outFields->push(HX_CSTRING("kinvelx"));
	outFields->push(HX_CSTRING("wrap_force"));
	outFields->push(HX_CSTRING("forcey"));
	outFields->push(HX_CSTRING("forcex"));
	outFields->push(HX_CSTRING("wrap_vel"));
	outFields->push(HX_CSTRING("vely"));
	outFields->push(HX_CSTRING("velx"));
	outFields->push(HX_CSTRING("wrap_pos"));
	outFields->push(HX_CSTRING("posy"));
	outFields->push(HX_CSTRING("posx"));
	outFields->push(HX_CSTRING("pre_posy"));
	outFields->push(HX_CSTRING("pre_posx"));
	outFields->push(HX_CSTRING("disableCCD"));
	outFields->push(HX_CSTRING("bulletEnabled"));
	outFields->push(HX_CSTRING("bullet"));
	outFields->push(HX_CSTRING("sweepRadius"));
	outFields->push(HX_CSTRING("sweepFrozen"));
	outFields->push(HX_CSTRING("sweep_angvel"));
	outFields->push(HX_CSTRING("sweepTime"));
	outFields->push(HX_CSTRING("graph_depth"));
	outFields->push(HX_CSTRING("component"));
	outFields->push(HX_CSTRING("wrap_constraints"));
	outFields->push(HX_CSTRING("constraints"));
	outFields->push(HX_CSTRING("wrap_arbiters"));
	outFields->push(HX_CSTRING("arbiters"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("wrap_shapes"));
	outFields->push(HX_CSTRING("shapes"));
	outFields->push(HX_CSTRING("compound"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("outer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bodystack"),
	HX_CSTRING("bodyset"),
	HX_CSTRING("bodysetlt"),
	HX_CSTRING("cur_graph_depth"),
	HX_CSTRING("__static"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("removedFromSpace"),
	HX_CSTRING("addedToSpace"),
	HX_CSTRING("shapes_modifiable"),
	HX_CSTRING("shapes_invalidate"),
	HX_CSTRING("shapes_subber"),
	HX_CSTRING("shapes_adder"),
	HX_CSTRING("aabb_validate"),
	HX_CSTRING("clear"),
	HX_CSTRING("__immutable_midstep"),
	HX_CSTRING("getworldCOM"),
	HX_CSTRING("getlocalCOM"),
	HX_CSTRING("validate_worldCOM"),
	HX_CSTRING("validate_localCOM"),
	HX_CSTRING("invalidate_worldCOM"),
	HX_CSTRING("invalidate_localCOM"),
	HX_CSTRING("wrap_worldCOM"),
	HX_CSTRING("wrap_localCOM"),
	HX_CSTRING("zip_worldCOM"),
	HX_CSTRING("worldCOMy"),
	HX_CSTRING("worldCOMx"),
	HX_CSTRING("zip_localCOM"),
	HX_CSTRING("localCOMy"),
	HX_CSTRING("localCOMx"),
	HX_CSTRING("invalidate_aabb"),
	HX_CSTRING("validate_aabb"),
	HX_CSTRING("zip_aabb"),
	HX_CSTRING("aabb"),
	HX_CSTRING("invalidate_wake"),
	HX_CSTRING("validate_inertia"),
	HX_CSTRING("invalidate_inertia"),
	HX_CSTRING("norotate"),
	HX_CSTRING("sinertia"),
	HX_CSTRING("iinertia"),
	HX_CSTRING("cinertia"),
	HX_CSTRING("zip_inertia"),
	HX_CSTRING("inertia"),
	HX_CSTRING("inertiaMode"),
	HX_CSTRING("validate_gravMassScale"),
	HX_CSTRING("invalidate_gravMassScale"),
	HX_CSTRING("validate_gravMass"),
	HX_CSTRING("invalidate_gravMass"),
	HX_CSTRING("zip_gravMassScale"),
	HX_CSTRING("gravMassScale"),
	HX_CSTRING("gravMassMode"),
	HX_CSTRING("zip_gravMass"),
	HX_CSTRING("gravMass"),
	HX_CSTRING("validate_mass"),
	HX_CSTRING("invalidate_mass"),
	HX_CSTRING("nomove"),
	HX_CSTRING("cmass"),
	HX_CSTRING("smass"),
	HX_CSTRING("imass"),
	HX_CSTRING("massMode"),
	HX_CSTRING("zip_mass"),
	HX_CSTRING("mass"),
	HX_CSTRING("delta_rot"),
	HX_CSTRING("quick_validate_axis"),
	HX_CSTRING("validate_axis"),
	HX_CSTRING("zip_axis"),
	HX_CSTRING("axisy"),
	HX_CSTRING("axisx"),
	HX_CSTRING("invalidate_rot"),
	HX_CSTRING("rot"),
	HX_CSTRING("pre_rot"),
	HX_CSTRING("kinangvel"),
	HX_CSTRING("torque"),
	HX_CSTRING("angvel"),
	HX_CSTRING("setup_cvel"),
	HX_CSTRING("wrapcvel"),
	HX_CSTRING("cvel_validate"),
	HX_CSTRING("setupForce"),
	HX_CSTRING("setupsvel"),
	HX_CSTRING("setupkinvel"),
	HX_CSTRING("setupVelocity"),
	HX_CSTRING("setupPosition"),
	HX_CSTRING("force_validate"),
	HX_CSTRING("force_invalidate"),
	HX_CSTRING("svel_validate"),
	HX_CSTRING("svel_invalidate"),
	HX_CSTRING("kinvel_validate"),
	HX_CSTRING("kinvel_invalidate"),
	HX_CSTRING("vel_validate"),
	HX_CSTRING("vel_invalidate"),
	HX_CSTRING("pos_validate"),
	HX_CSTRING("pos_invalidate"),
	HX_CSTRING("invalidate_pos"),
	HX_CSTRING("wrap_svel"),
	HX_CSTRING("svely"),
	HX_CSTRING("svelx"),
	HX_CSTRING("wrap_kinvel"),
	HX_CSTRING("kinvely"),
	HX_CSTRING("kinvelx"),
	HX_CSTRING("wrap_force"),
	HX_CSTRING("forcey"),
	HX_CSTRING("forcex"),
	HX_CSTRING("wrap_vel"),
	HX_CSTRING("vely"),
	HX_CSTRING("velx"),
	HX_CSTRING("wrap_pos"),
	HX_CSTRING("posy"),
	HX_CSTRING("posx"),
	HX_CSTRING("pre_posy"),
	HX_CSTRING("pre_posx"),
	HX_CSTRING("sweepValidate"),
	HX_CSTRING("sweepIntegrate"),
	HX_CSTRING("disableCCD"),
	HX_CSTRING("bulletEnabled"),
	HX_CSTRING("bullet"),
	HX_CSTRING("sweepRadius"),
	HX_CSTRING("sweepFrozen"),
	HX_CSTRING("sweep_angvel"),
	HX_CSTRING("sweepTime"),
	HX_CSTRING("refreshArbiters"),
	HX_CSTRING("atRest"),
	HX_CSTRING("interactingBodies"),
	HX_CSTRING("connectedBodies"),
	HX_CSTRING("connectedBodies_cont"),
	HX_CSTRING("init_bodysetlist"),
	HX_CSTRING("graph_depth"),
	HX_CSTRING("component"),
	HX_CSTRING("wrap_constraints"),
	HX_CSTRING("constraints"),
	HX_CSTRING("wrap_arbiters"),
	HX_CSTRING("arbiters"),
	HX_CSTRING("space"),
	HX_CSTRING("invalidate_shapes"),
	HX_CSTRING("wrap_shapes"),
	HX_CSTRING("shapes"),
	HX_CSTRING("compound"),
	HX_CSTRING("invalidate_type"),
	HX_CSTRING("isKinematic"),
	HX_CSTRING("isDynamic"),
	HX_CSTRING("isStatic"),
	HX_CSTRING("type"),
	HX_CSTRING("world"),
	HX_CSTRING("outer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_MARK_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodystack,"bodystack");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::bodyset,"bodyset");
	HX_VISIT_MEMBER_NAME(ZPP_Body_obj::cur_graph_depth,"cur_graph_depth");
};

Class ZPP_Body_obj::__mClass;

void ZPP_Body_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.phys.ZPP_Body"), hx::TCanCast< ZPP_Body_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_Body_obj::__boot()
{
	bodystack= null();
	bodyset= null();
	cur_graph_depth= (int)0;
}

} // end namespace zpp_nape
} // end namespace phys
