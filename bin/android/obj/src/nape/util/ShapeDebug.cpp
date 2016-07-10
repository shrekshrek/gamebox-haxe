#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_constraint_Constraint
#include <nape/constraint/Constraint.h>
#endif
#ifndef INCLUDED_nape_geom_AABB
#include <nape/geom/AABB.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_Mat23
#include <nape/geom/Mat23.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2Iterator
#include <nape/geom/Vec2Iterator.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2List
#include <nape/geom/Vec2List.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_Compound
#include <nape/phys/Compound.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_native_display_CapsStyle
#include <native/display/CapsStyle.h>
#endif
#ifndef INCLUDED_native_display_Graphics
#include <native/display/Graphics.h>
#endif
#ifndef INCLUDED_native_display_JointStyle
#include <native/display/JointStyle.h>
#endif
#ifndef INCLUDED_native_display_LineScaleMode
#include <native/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_zpp_nape_constraint_ZPP_Constraint
#include <zpp_nape/constraint/ZPP_Constraint.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_AABB
#include <zpp_nape/geom/ZPP_AABB.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Mat23
#include <zpp_nape/geom/ZPP_Mat23.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPList_ZPP_Vec2
#include <zpp_nape/util/ZNPList_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZNPNode_ZPP_Vec2
#include <zpp_nape/util/ZNPNode_ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Vec2List
#include <zpp_nape/util/ZPP_Vec2List.h>
#endif
namespace nape{
namespace util{

Void ShapeDebug_obj::__construct(int width,int height,hx::Null< int >  __o_bgColour)
{
HX_STACK_PUSH("ShapeDebug::new","nape/util/ShapeDebug.hx",182);
int bgColour = __o_bgColour.Default(3355443);
{
	HX_STACK_LINE(191)
	this->thickness = 0.0;
	HX_STACK_LINE(186)
	this->zpp_inner_zn = null();
	HX_STACK_LINE(209)
	if (((width <= (int)0))){
		HX_STACK_LINE(209)
		hx::Throw (HX_CSTRING("Error: Debug width must be > 0"));
	}
	HX_STACK_LINE(212)
	if (((height <= (int)0))){
		HX_STACK_LINE(212)
		hx::Throw (HX_CSTRING("Error: Debug height must be > 0"));
	}
	HX_STACK_LINE(215)
	::zpp_nape::util::ZPP_Debug_obj::internal = true;
	HX_STACK_LINE(217)
	super::__construct();
	HX_STACK_LINE(219)
	::zpp_nape::util::ZPP_Debug_obj::internal = false;
	HX_STACK_LINE(221)
	this->zpp_inner_zn = ::zpp_nape::util::ZPP_ShapeDebug_obj::__new(width,height);
	HX_STACK_LINE(222)
	this->zpp_inner_zn->outer_zn = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(223)
	this->zpp_inner = this->zpp_inner_zn;
	HX_STACK_LINE(224)
	this->zpp_inner->outer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(225)
	{
		HX_STACK_LINE(225)
		this->zpp_inner->d_shape->setbg(bgColour);
		HX_STACK_LINE(225)
		this->zpp_inner->bg_col;
	}
	HX_STACK_LINE(226)
	this->thickness = 0.1;
}
;
	return null();
}

ShapeDebug_obj::~ShapeDebug_obj() { }

Dynamic ShapeDebug_obj::__CreateEmpty() { return  new ShapeDebug_obj; }
hx::ObjectPtr< ShapeDebug_obj > ShapeDebug_obj::__new(int width,int height,hx::Null< int >  __o_bgColour)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(width,height,__o_bgColour);
	return result;}

Dynamic ShapeDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShapeDebug_obj > result = new ShapeDebug_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ShapeDebug_obj::drawSpring( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour,hx::Null< int >  __o_coils,hx::Null< Float >  __o_radius){
int coils = __o_coils.Default(3);
Float radius = __o_radius.Default(3.0);
	HX_STACK_PUSH("ShapeDebug::drawSpring","nape/util/ShapeDebug.hx",1218);
	HX_STACK_THIS(this);
	HX_STACK_ARG(start,"start");
	HX_STACK_ARG(end,"end");
	HX_STACK_ARG(colour,"colour");
	HX_STACK_ARG(coils,"coils");
	HX_STACK_ARG(radius,"radius");
{
		HX_STACK_LINE(1219)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(1221)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1224)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(1226)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(1230)
		if (((start == null()))){
			HX_STACK_LINE(1230)
			hx::Throw (HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(1233)
		if (((end == null()))){
			HX_STACK_LINE(1233)
			hx::Throw (HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(1236)
		if (((coils < (int)0))){
			HX_STACK_LINE(1236)
			hx::Throw (HX_CSTRING("Error: drawCurve::coils must be >= 0"));
		}
		HX_STACK_LINE(1238)
		if (((coils == (int)0))){
			HX_STACK_LINE(1238)
			this->drawLine(start,end,colour);
		}
		else{
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1240);
					{
						HX_STACK_LINE(1240)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(1240)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1240)
						{
							HX_STACK_LINE(1240)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1240)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1240)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1240)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1240);
					{
						HX_STACK_LINE(1240)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1240)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1240)
						{
							HX_STACK_LINE(1240)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1240)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1240)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1240)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			HX_STACK_LINE(1240)
			Float dx = (_Function_2_1::Block(end) - _Function_2_2::Block(start));		HX_STACK_VAR(dx,"dx");
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1241);
					{
						HX_STACK_LINE(1241)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(1241)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1241)
						{
							HX_STACK_LINE(1241)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1241)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1241)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1241)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1241);
					{
						HX_STACK_LINE(1241)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1241)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1241)
						{
							HX_STACK_LINE(1241)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1241)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1241)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1241)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1241)
			Float dy = (_Function_2_3::Block(end) - _Function_2_4::Block(start));		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1242)
			{
			}
			HX_STACK_LINE(1250)
			{
			}
			HX_STACK_LINE(1258)
			{
				HX_STACK_LINE(1259)
				Float t = (Float(1.0) / Float(((coils * (int)4))));		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1260)
				{
				}
				HX_STACK_LINE(1268)
				hx::MultEq(dx,t);
				HX_STACK_LINE(1269)
				hx::MultEq(dy,t);
			}
			HX_STACK_LINE(1271)
			Float nx = 0.0;		HX_STACK_VAR(nx,"nx");
			HX_STACK_LINE(1272)
			Float ny = 0.0;		HX_STACK_VAR(ny,"ny");
			HX_STACK_LINE(1273)
			{
				HX_STACK_LINE(1274)
				nx = dx;
				HX_STACK_LINE(1275)
				ny = dy;
				HX_STACK_LINE(1276)
				{
				}
				HX_STACK_LINE(1284)
				{
				}
			}
			HX_STACK_LINE(1293)
			if (((((nx * nx) + (ny * ny)) < 0.1))){
				HX_STACK_LINE(1293)
				return null();
			}
			HX_STACK_LINE(1294)
			{
				HX_STACK_LINE(1295)
				{
					HX_STACK_LINE(1296)
					Float d = ((nx * nx) + (ny * ny));		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(1297)
					{
					}
					struct _Function_4_1{
						inline static Float Block( Float &d){
							HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1305);
							{
								HX_STACK_LINE(1305)
								{
								}
								struct _Function_5_1{
									inline static Float Block( Float &d){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1305);
										{
											HX_STACK_LINE(1305)
											{
											}
											HX_STACK_LINE(1305)
											return ::Math_obj::sqrt(d);
										}
										return null();
									}
								};
								HX_STACK_LINE(1305)
								return (Float(1.0) / Float(_Function_5_1::Block(d)));
							}
							return null();
						}
					};
					HX_STACK_LINE(1305)
					Float imag = _Function_4_1::Block(d);		HX_STACK_VAR(imag,"imag");
					HX_STACK_LINE(1306)
					{
						HX_STACK_LINE(1307)
						Float t = imag;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(1308)
						{
						}
						HX_STACK_LINE(1316)
						hx::MultEq(nx,t);
						HX_STACK_LINE(1317)
						hx::MultEq(ny,t);
					}
				}
				HX_STACK_LINE(1320)
				{
					HX_STACK_LINE(1321)
					Float t = nx;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1322)
					nx = -(ny);
					HX_STACK_LINE(1323)
					ny = t;
				}
			}
			HX_STACK_LINE(1326)
			{
				HX_STACK_LINE(1327)
				Float t = (radius * (int)2);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1328)
				{
				}
				HX_STACK_LINE(1336)
				hx::MultEq(nx,t);
				HX_STACK_LINE(1337)
				hx::MultEq(ny,t);
			}
			struct _Function_2_5{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
					{
						HX_STACK_LINE(1339)
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1339)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(1339)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						struct _Function_3_1{
							inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &start,bool &weak){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
								{
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::Vec2 &start){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
											{
												HX_STACK_LINE(1339)
												if ((start->zpp_disp)){
													HX_STACK_LINE(1339)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1339)
												{
													HX_STACK_LINE(1339)
													::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1339)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1339)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1339)
												return start->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_4_2{
										inline static Float Block( ::nape::geom::Vec2 &start){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
											{
												HX_STACK_LINE(1339)
												if ((start->zpp_disp)){
													HX_STACK_LINE(1339)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1339)
												{
													HX_STACK_LINE(1339)
													::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1339)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1339)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1339)
												return start->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1339)
									Float x = _Function_4_1::Block(start);		HX_STACK_VAR(x,"x");
									Float y = _Function_4_2::Block(start);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(1339)
									if (((bool((x != x)) || bool((y != y))))){
										HX_STACK_LINE(1339)
										hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
									}
									HX_STACK_LINE(1339)
									::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
									HX_STACK_LINE(1339)
									if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
										HX_STACK_LINE(1339)
										ret = ::nape::geom::Vec2_obj::__new(null(),null());
									}
									else{
										HX_STACK_LINE(1339)
										ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
										HX_STACK_LINE(1339)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
										HX_STACK_LINE(1339)
										ret->zpp_pool = null();
										HX_STACK_LINE(1339)
										ret->zpp_disp = false;
										HX_STACK_LINE(1339)
										if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
											HX_STACK_LINE(1339)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
										}
									}
									HX_STACK_LINE(1339)
									if (((ret->zpp_inner == null()))){
										struct _Function_5_1{
											inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
												{
													HX_STACK_LINE(1339)
													bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
													HX_STACK_LINE(1339)
													::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1339)
													{
														HX_STACK_LINE(1339)
														if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
															HX_STACK_LINE(1339)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
														}
														else{
															HX_STACK_LINE(1339)
															ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
															HX_STACK_LINE(1339)
															::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1339)
															ret1->next = null();
														}
														HX_STACK_LINE(1339)
														ret1->weak = false;
													}
													HX_STACK_LINE(1339)
													ret1->_immutable = immutable;
													HX_STACK_LINE(1339)
													{
														HX_STACK_LINE(1339)
														ret1->x = x;
														HX_STACK_LINE(1339)
														ret1->y = y;
														HX_STACK_LINE(1339)
														{
														}
														HX_STACK_LINE(1339)
														{
														}
													}
													HX_STACK_LINE(1339)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1339)
										ret->zpp_inner = _Function_5_1::Block(x,y);
										HX_STACK_LINE(1339)
										ret->zpp_inner->outer = ret;
									}
									else{
										HX_STACK_LINE(1339)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1339)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1339)
										{
											HX_STACK_LINE(1339)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1339)
											if ((_this->_immutable)){
												HX_STACK_LINE(1339)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1339)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(1339)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1339)
										if (((bool((x != x)) || bool((y != y))))){
											HX_STACK_LINE(1339)
											hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
										}
										struct _Function_5_1{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
												{
													HX_STACK_LINE(1339)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1339)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1339)
													{
														HX_STACK_LINE(1339)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1339)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1339)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1339)
													return ret->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_5_2{
											inline static Float Block( ::nape::geom::Vec2 &ret){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1339);
												{
													HX_STACK_LINE(1339)
													if (((bool((ret != null())) && bool(ret->zpp_disp)))){
														HX_STACK_LINE(1339)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1339)
													{
														HX_STACK_LINE(1339)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1339)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1339)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1339)
													return ret->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1339)
										if ((!(((bool((_Function_5_1::Block(ret) == x)) && bool((_Function_5_2::Block(ret) == y))))))){
											HX_STACK_LINE(1339)
											{
												HX_STACK_LINE(1339)
												ret->zpp_inner->x = x;
												HX_STACK_LINE(1339)
												ret->zpp_inner->y = y;
												HX_STACK_LINE(1339)
												{
												}
												HX_STACK_LINE(1339)
												{
												}
											}
											HX_STACK_LINE(1339)
											{
												HX_STACK_LINE(1339)
												::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1339)
												if (((_this->_invalidate_dyn() != null()))){
													HX_STACK_LINE(1339)
													_this->_invalidate(_this);
												}
											}
										}
										HX_STACK_LINE(1339)
										ret;
									}
									HX_STACK_LINE(1339)
									ret->zpp_inner->weak = weak;
									HX_STACK_LINE(1339)
									return ret;
								}
								return null();
							}
						};
						HX_STACK_LINE(1339)
						return _Function_3_1::Block(start,weak);
					}
					return null();
				}
			};
			HX_STACK_LINE(1339)
			::nape::geom::Vec2 u = _Function_2_5::Block(start);		HX_STACK_VAR(u,"u");
			struct _Function_2_6{
				inline static ::nape::geom::Vec2 Block( ){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1340);
					{
						HX_STACK_LINE(1340)
						Float x = (int)0;		HX_STACK_VAR(x,"x");
						Float y = (int)0;		HX_STACK_VAR(y,"y");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1340)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1340)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(1340)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1340)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(1340)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(1340)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1340)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1340)
							ret->zpp_pool = null();
							HX_STACK_LINE(1340)
							ret->zpp_disp = false;
							HX_STACK_LINE(1340)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(1340)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(1340)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1340);
									{
										HX_STACK_LINE(1340)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1340)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1340)
										{
											HX_STACK_LINE(1340)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1340)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(1340)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1340)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1340)
												ret1->next = null();
											}
											HX_STACK_LINE(1340)
											ret1->weak = false;
										}
										HX_STACK_LINE(1340)
										ret1->_immutable = immutable;
										HX_STACK_LINE(1340)
										{
											HX_STACK_LINE(1340)
											ret1->x = x;
											HX_STACK_LINE(1340)
											ret1->y = y;
											HX_STACK_LINE(1340)
											{
											}
											HX_STACK_LINE(1340)
											{
											}
										}
										HX_STACK_LINE(1340)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(1340)
							ret->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(1340)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(1340)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(1340)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1340)
							{
								HX_STACK_LINE(1340)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1340)
								if ((_this->_immutable)){
									HX_STACK_LINE(1340)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1340)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1340)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(1340)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1340)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1340);
									{
										HX_STACK_LINE(1340)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1340)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1340)
										{
											HX_STACK_LINE(1340)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1340)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1340)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1340)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1340);
									{
										HX_STACK_LINE(1340)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1340)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1340)
										{
											HX_STACK_LINE(1340)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1340)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1340)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1340)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1340)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
								HX_STACK_LINE(1340)
								{
									HX_STACK_LINE(1340)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(1340)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(1340)
									{
									}
									HX_STACK_LINE(1340)
									{
									}
								}
								HX_STACK_LINE(1340)
								{
									HX_STACK_LINE(1340)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1340)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1340)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(1340)
							ret;
						}
						HX_STACK_LINE(1340)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(1340)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1340)
			::nape::geom::Vec2 v = _Function_2_6::Block();		HX_STACK_VAR(v,"v");
			struct _Function_2_7{
				inline static ::nape::geom::Vec2 Block( ){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1341);
					{
						HX_STACK_LINE(1341)
						Float x = (int)0;		HX_STACK_VAR(x,"x");
						Float y = (int)0;		HX_STACK_VAR(y,"y");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(1341)
						if (((bool((x != x)) || bool((y != y))))){
							HX_STACK_LINE(1341)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(1341)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(1341)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(1341)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(1341)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(1341)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(1341)
							ret->zpp_pool = null();
							HX_STACK_LINE(1341)
							ret->zpp_disp = false;
							HX_STACK_LINE(1341)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(1341)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(1341)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1341);
									{
										HX_STACK_LINE(1341)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(1341)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(1341)
										{
											HX_STACK_LINE(1341)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(1341)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(1341)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(1341)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(1341)
												ret1->next = null();
											}
											HX_STACK_LINE(1341)
											ret1->weak = false;
										}
										HX_STACK_LINE(1341)
										ret1->_immutable = immutable;
										HX_STACK_LINE(1341)
										{
											HX_STACK_LINE(1341)
											ret1->x = x;
											HX_STACK_LINE(1341)
											ret1->y = y;
											HX_STACK_LINE(1341)
											{
											}
											HX_STACK_LINE(1341)
											{
											}
										}
										HX_STACK_LINE(1341)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(1341)
							ret->zpp_inner = _Function_4_1::Block(x,y);
							HX_STACK_LINE(1341)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(1341)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(1341)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1341)
							{
								HX_STACK_LINE(1341)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1341)
								if ((_this->_immutable)){
									HX_STACK_LINE(1341)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1341)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1341)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(1341)
							if (((bool((x != x)) || bool((y != y))))){
								HX_STACK_LINE(1341)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1341);
									{
										HX_STACK_LINE(1341)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1341)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1341)
										{
											HX_STACK_LINE(1341)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1341)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1341)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1341)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1341);
									{
										HX_STACK_LINE(1341)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(1341)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1341)
										{
											HX_STACK_LINE(1341)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1341)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1341)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1341)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1341)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == y))))))){
								HX_STACK_LINE(1341)
								{
									HX_STACK_LINE(1341)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(1341)
									ret->zpp_inner->y = y;
									HX_STACK_LINE(1341)
									{
									}
									HX_STACK_LINE(1341)
									{
									}
								}
								HX_STACK_LINE(1341)
								{
									HX_STACK_LINE(1341)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1341)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1341)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(1341)
							ret;
						}
						HX_STACK_LINE(1341)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(1341)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(1341)
			::nape::geom::Vec2 q = _Function_2_7::Block();		HX_STACK_VAR(q,"q");
			HX_STACK_LINE(1342)
			{
				HX_STACK_LINE(1342)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1342)
				while(((_g < coils))){
					HX_STACK_LINE(1342)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1343)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1343);
								{
									HX_STACK_LINE(1343)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1343)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1343)
									{
										HX_STACK_LINE(1343)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1343)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1343)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1343)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1343)
						Float x = ((_Function_5_1::Block(u) + dx) + nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1343)
						{
							HX_STACK_LINE(1343)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1343)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1343)
							{
								HX_STACK_LINE(1343)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1343)
								if ((_this->_immutable)){
									HX_STACK_LINE(1343)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1343)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1343)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1343);
									{
										HX_STACK_LINE(1343)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1343)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1343)
										{
											HX_STACK_LINE(1343)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1343)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1343)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1343)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1343)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1343)
								if (((x != x))){
									HX_STACK_LINE(1343)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1343)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1343)
								{
									HX_STACK_LINE(1343)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1343)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1343)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1343)
						{
							HX_STACK_LINE(1343)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1343)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1343)
							{
								HX_STACK_LINE(1343)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1343)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1343)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1343)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1344)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
								{
									HX_STACK_LINE(1344)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1344)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1344)
									{
										HX_STACK_LINE(1344)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1344)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1344)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1344)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1344)
						Float y = ((_Function_5_1::Block(u) + dy) + ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1344)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								if ((_this->_immutable)){
									HX_STACK_LINE(1344)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1344)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1344)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1344);
									{
										HX_STACK_LINE(1344)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1344)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1344)
										{
											HX_STACK_LINE(1344)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1344)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1344)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1344)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1344)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1344)
								if (((y != y))){
									HX_STACK_LINE(1344)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1344)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1344)
								{
									HX_STACK_LINE(1344)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1344)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1344)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1344)
						{
							HX_STACK_LINE(1344)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1344)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1344)
							{
								HX_STACK_LINE(1344)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1344)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1344)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1344)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1345)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
								{
									HX_STACK_LINE(1345)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1345)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1345)
									{
										HX_STACK_LINE(1345)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1345)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1345)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1345)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1345)
						Float x = (_Function_5_1::Block(u) + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1345)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1345)
							{
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1345)
								if ((_this->_immutable)){
									HX_STACK_LINE(1345)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1345)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1345)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1345);
									{
										HX_STACK_LINE(1345)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1345)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1345)
										{
											HX_STACK_LINE(1345)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1345)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1345)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1345)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1345)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1345)
								if (((x != x))){
									HX_STACK_LINE(1345)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1345)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1345)
								{
									HX_STACK_LINE(1345)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1345)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1345)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1345)
						{
							HX_STACK_LINE(1345)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1345)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1345)
							{
								HX_STACK_LINE(1345)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1345)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1345)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1345)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1346)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
								{
									HX_STACK_LINE(1346)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1346)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1346)
									{
										HX_STACK_LINE(1346)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1346)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1346)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1346)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1346)
						Float y = (_Function_5_1::Block(u) + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1346)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1346)
							{
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1346)
								if ((_this->_immutable)){
									HX_STACK_LINE(1346)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1346)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1346)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1346);
									{
										HX_STACK_LINE(1346)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1346)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1346)
										{
											HX_STACK_LINE(1346)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1346)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1346)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1346)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1346)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1346)
								if (((y != y))){
									HX_STACK_LINE(1346)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1346)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1346)
								{
									HX_STACK_LINE(1346)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1346)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1346)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1346)
						{
							HX_STACK_LINE(1346)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1346)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1346)
							{
								HX_STACK_LINE(1346)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1346)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1346)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1346)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1347)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1348)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1348);
								{
									HX_STACK_LINE(1348)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1348)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1348)
									{
										HX_STACK_LINE(1348)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1348)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1348)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1348)
									return q->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1348)
						Float x = _Function_5_1::Block(q);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1348)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if ((_this->_immutable)){
									HX_STACK_LINE(1348)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1348)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1348)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1348);
									{
										HX_STACK_LINE(1348)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1348)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1348)
										{
											HX_STACK_LINE(1348)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1348)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1348)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1348)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1348)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1348)
								if (((x != x))){
									HX_STACK_LINE(1348)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1348)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1348)
								{
									HX_STACK_LINE(1348)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1348)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1348)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1348)
						{
							HX_STACK_LINE(1348)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1348)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1348)
							{
								HX_STACK_LINE(1348)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1348)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1348)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1348)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1349)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1349);
								{
									HX_STACK_LINE(1349)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1349)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1349)
									{
										HX_STACK_LINE(1349)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1349)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1349)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1349)
									return q->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1349)
						Float y = _Function_5_1::Block(q);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1349)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if ((_this->_immutable)){
									HX_STACK_LINE(1349)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1349)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1349)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1349);
									{
										HX_STACK_LINE(1349)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1349)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1349)
										{
											HX_STACK_LINE(1349)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1349)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1349)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1349)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1349)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1349)
								if (((y != y))){
									HX_STACK_LINE(1349)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1349)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1349)
								{
									HX_STACK_LINE(1349)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1349)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1349)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1349)
						{
							HX_STACK_LINE(1349)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1349)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1349)
							{
								HX_STACK_LINE(1349)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1349)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1349)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1349)
							u->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1350)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1350);
								{
									HX_STACK_LINE(1350)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1350)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1350)
									{
										HX_STACK_LINE(1350)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1350)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1350)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1350)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1350)
						Float x = ((_Function_5_1::Block(u) + dx) - nx);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1350)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if ((_this->_immutable)){
									HX_STACK_LINE(1350)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1350)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1350)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1350);
									{
										HX_STACK_LINE(1350)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1350)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1350)
										{
											HX_STACK_LINE(1350)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1350)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1350)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1350)
										return v->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1350)
							if (((_Function_6_1::Block(v) != x))){
								HX_STACK_LINE(1350)
								if (((x != x))){
									HX_STACK_LINE(1350)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1350)
								v->zpp_inner->x = x;
								HX_STACK_LINE(1350)
								{
									HX_STACK_LINE(1350)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1350)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1350)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1350)
						{
							HX_STACK_LINE(1350)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1350)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1350)
							{
								HX_STACK_LINE(1350)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1350)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1350)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1350)
							v->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1351)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1351);
								{
									HX_STACK_LINE(1351)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1351)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1351)
									{
										HX_STACK_LINE(1351)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1351)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1351)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1351)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1351)
						Float y = ((_Function_5_1::Block(u) + dy) - ny);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1351)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if ((_this->_immutable)){
									HX_STACK_LINE(1351)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1351)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1351)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &v){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1351);
									{
										HX_STACK_LINE(1351)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1351)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1351)
										{
											HX_STACK_LINE(1351)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1351)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1351)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1351)
										return v->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1351)
							if (((_Function_6_1::Block(v) != y))){
								HX_STACK_LINE(1351)
								if (((y != y))){
									HX_STACK_LINE(1351)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1351)
								v->zpp_inner->y = y;
								HX_STACK_LINE(1351)
								{
									HX_STACK_LINE(1351)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1351)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1351)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1351)
						{
							HX_STACK_LINE(1351)
							if (((bool((v != null())) && bool(v->zpp_disp)))){
								HX_STACK_LINE(1351)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1351)
							{
								HX_STACK_LINE(1351)
								::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1351)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1351)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1351)
							v->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1352)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1352);
								{
									HX_STACK_LINE(1352)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1352)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1352)
									{
										HX_STACK_LINE(1352)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1352)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1352)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1352)
									return u->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1352)
						Float x = (_Function_5_1::Block(u) + (dx * (int)2));		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1352)
						{
							HX_STACK_LINE(1352)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1352)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1352)
							{
								HX_STACK_LINE(1352)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1352)
								if ((_this->_immutable)){
									HX_STACK_LINE(1352)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1352)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1352)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1352);
									{
										HX_STACK_LINE(1352)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1352)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1352)
										{
											HX_STACK_LINE(1352)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1352)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1352)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1352)
										return q->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1352)
							if (((_Function_6_1::Block(q) != x))){
								HX_STACK_LINE(1352)
								if (((x != x))){
									HX_STACK_LINE(1352)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1352)
								q->zpp_inner->x = x;
								HX_STACK_LINE(1352)
								{
									HX_STACK_LINE(1352)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1352)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1352)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1352)
						{
							HX_STACK_LINE(1352)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1352)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1352)
							{
								HX_STACK_LINE(1352)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1352)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1352)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1352)
							q->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1353)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &u){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1353);
								{
									HX_STACK_LINE(1353)
									if (((bool((u != null())) && bool(u->zpp_disp)))){
										HX_STACK_LINE(1353)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1353)
									{
										HX_STACK_LINE(1353)
										::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1353)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1353)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1353)
									return u->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1353)
						Float y = (_Function_5_1::Block(u) + (dy * (int)2));		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1353)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if ((_this->_immutable)){
									HX_STACK_LINE(1353)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1353)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1353)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &q){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1353);
									{
										HX_STACK_LINE(1353)
										if (((bool((q != null())) && bool(q->zpp_disp)))){
											HX_STACK_LINE(1353)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1353)
										{
											HX_STACK_LINE(1353)
											::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1353)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1353)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1353)
										return q->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1353)
							if (((_Function_6_1::Block(q) != y))){
								HX_STACK_LINE(1353)
								if (((y != y))){
									HX_STACK_LINE(1353)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1353)
								q->zpp_inner->y = y;
								HX_STACK_LINE(1353)
								{
									HX_STACK_LINE(1353)
									::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1353)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1353)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1353)
						{
							HX_STACK_LINE(1353)
							if (((bool((q != null())) && bool(q->zpp_disp)))){
								HX_STACK_LINE(1353)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1353)
							{
								HX_STACK_LINE(1353)
								::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1353)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1353)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1353)
							q->zpp_inner->y;
						}
					}
					HX_STACK_LINE(1354)
					this->drawCurve(u,v,q,colour);
					HX_STACK_LINE(1355)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1355);
								{
									HX_STACK_LINE(1355)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1355)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1355)
									{
										HX_STACK_LINE(1355)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1355)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1355)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1355)
									return q->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(1355)
						Float x = _Function_5_1::Block(q);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1355)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if ((_this->_immutable)){
									HX_STACK_LINE(1355)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1355)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1355)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1355);
									{
										HX_STACK_LINE(1355)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1355)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1355)
										{
											HX_STACK_LINE(1355)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1355)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1355)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1355)
										return u->zpp_inner->x;
									}
									return null();
								}
							};
							HX_STACK_LINE(1355)
							if (((_Function_6_1::Block(u) != x))){
								HX_STACK_LINE(1355)
								if (((x != x))){
									HX_STACK_LINE(1355)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("x")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1355)
								u->zpp_inner->x = x;
								HX_STACK_LINE(1355)
								{
									HX_STACK_LINE(1355)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1355)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1355)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1355)
						{
							HX_STACK_LINE(1355)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1355)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1355)
							{
								HX_STACK_LINE(1355)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1355)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1355)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1355)
							u->zpp_inner->x;
						}
					}
					HX_STACK_LINE(1356)
					{
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &q){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1356);
								{
									HX_STACK_LINE(1356)
									if (((bool((q != null())) && bool(q->zpp_disp)))){
										HX_STACK_LINE(1356)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1356)
									{
										HX_STACK_LINE(1356)
										::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1356)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(1356)
											_this->_validate();
										}
									}
									HX_STACK_LINE(1356)
									return q->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(1356)
						Float y = _Function_5_1::Block(q);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1356)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if ((_this->_immutable)){
									HX_STACK_LINE(1356)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(1356)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(1356)
									_this->_isimmutable();
								}
							}
							struct _Function_6_1{
								inline static Float Block( ::nape::geom::Vec2 &u){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1356);
									{
										HX_STACK_LINE(1356)
										if (((bool((u != null())) && bool(u->zpp_disp)))){
											HX_STACK_LINE(1356)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1356)
										{
											HX_STACK_LINE(1356)
											::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1356)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(1356)
												_this->_validate();
											}
										}
										HX_STACK_LINE(1356)
										return u->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(1356)
							if (((_Function_6_1::Block(u) != y))){
								HX_STACK_LINE(1356)
								if (((y != y))){
									HX_STACK_LINE(1356)
									hx::Throw (((HX_CSTRING("Error: Vec2::") + HX_CSTRING("y")) + HX_CSTRING(" cannot be NaN")));
								}
								HX_STACK_LINE(1356)
								u->zpp_inner->y = y;
								HX_STACK_LINE(1356)
								{
									HX_STACK_LINE(1356)
									::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1356)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(1356)
										_this->_invalidate(_this);
									}
								}
							}
						}
						HX_STACK_LINE(1356)
						{
							HX_STACK_LINE(1356)
							if (((bool((u != null())) && bool(u->zpp_disp)))){
								HX_STACK_LINE(1356)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1356)
							{
								HX_STACK_LINE(1356)
								::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1356)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(1356)
									_this->_validate();
								}
							}
							HX_STACK_LINE(1356)
							u->zpp_inner->y;
						}
					}
				}
			}
			HX_STACK_LINE(1358)
			{
				HX_STACK_LINE(1358)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(1358)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1358)
				{
					HX_STACK_LINE(1358)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1358)
					if ((_this->_immutable)){
						HX_STACK_LINE(1358)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1358)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1358)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1358)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(1358)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1358)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1358)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(1358)
				u->zpp_inner = null();
				HX_STACK_LINE(1358)
				{
					HX_STACK_LINE(1358)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1358)
					{
					}
					HX_STACK_LINE(1358)
					o->zpp_pool = null();
					HX_STACK_LINE(1358)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1358)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1358)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1358)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1358)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1358)
				{
					HX_STACK_LINE(1358)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1358)
					{
					}
					HX_STACK_LINE(1358)
					{
						HX_STACK_LINE(1358)
						if (((o->outer != null()))){
							HX_STACK_LINE(1358)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1358)
							o->outer = null();
						}
						HX_STACK_LINE(1358)
						o->_isimmutable = null();
						HX_STACK_LINE(1358)
						o->_validate = null();
						HX_STACK_LINE(1358)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1358)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1358)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1359)
			{
				HX_STACK_LINE(1359)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(1359)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1359)
				{
					HX_STACK_LINE(1359)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1359)
					if ((_this->_immutable)){
						HX_STACK_LINE(1359)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1359)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1359)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1359)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(1359)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1359)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1359)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(1359)
				v->zpp_inner = null();
				HX_STACK_LINE(1359)
				{
					HX_STACK_LINE(1359)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1359)
					{
					}
					HX_STACK_LINE(1359)
					o->zpp_pool = null();
					HX_STACK_LINE(1359)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1359)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1359)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1359)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1359)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1359)
				{
					HX_STACK_LINE(1359)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1359)
					{
					}
					HX_STACK_LINE(1359)
					{
						HX_STACK_LINE(1359)
						if (((o->outer != null()))){
							HX_STACK_LINE(1359)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1359)
							o->outer = null();
						}
						HX_STACK_LINE(1359)
						o->_isimmutable = null();
						HX_STACK_LINE(1359)
						o->_validate = null();
						HX_STACK_LINE(1359)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1359)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1359)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1360)
			{
				HX_STACK_LINE(1360)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(1360)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1360)
				{
					HX_STACK_LINE(1360)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1360)
					if ((_this->_immutable)){
						HX_STACK_LINE(1360)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1360)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1360)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1360)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(1360)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1360)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1360)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(1360)
				q->zpp_inner = null();
				HX_STACK_LINE(1360)
				{
					HX_STACK_LINE(1360)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1360)
					{
					}
					HX_STACK_LINE(1360)
					o->zpp_pool = null();
					HX_STACK_LINE(1360)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1360)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1360)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1360)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1360)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1360)
				{
					HX_STACK_LINE(1360)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1360)
					{
					}
					HX_STACK_LINE(1360)
					{
						HX_STACK_LINE(1360)
						if (((o->outer != null()))){
							HX_STACK_LINE(1360)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1360)
							o->outer = null();
						}
						HX_STACK_LINE(1360)
						o->_isimmutable = null();
						HX_STACK_LINE(1360)
						o->_validate = null();
						HX_STACK_LINE(1360)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1360)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1360)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1362)
		if ((start->zpp_inner->weak)){
			HX_STACK_LINE(1366)
			{
				HX_STACK_LINE(1366)
				if (((bool((start != null())) && bool(start->zpp_disp)))){
					HX_STACK_LINE(1366)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1366)
					::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1366)
					if ((_this->_immutable)){
						HX_STACK_LINE(1366)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1366)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1366)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1366)
				if ((start->zpp_inner->_inuse)){
					HX_STACK_LINE(1366)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1366)
				::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1366)
				start->zpp_inner->outer = null();
				HX_STACK_LINE(1366)
				start->zpp_inner = null();
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1366)
					::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1366)
					{
					}
					HX_STACK_LINE(1366)
					o->zpp_pool = null();
					HX_STACK_LINE(1366)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1366)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1366)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1366)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1366)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1366)
				{
					HX_STACK_LINE(1366)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1366)
					{
					}
					HX_STACK_LINE(1366)
					{
						HX_STACK_LINE(1366)
						if (((o->outer != null()))){
							HX_STACK_LINE(1366)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1366)
							o->outer = null();
						}
						HX_STACK_LINE(1366)
						o->_isimmutable = null();
						HX_STACK_LINE(1366)
						o->_validate = null();
						HX_STACK_LINE(1366)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1366)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1366)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1367)
			true;
		}
		else{
			HX_STACK_LINE(1369)
			false;
		}
		HX_STACK_LINE(1373)
		if ((end->zpp_inner->weak)){
			HX_STACK_LINE(1377)
			{
				HX_STACK_LINE(1377)
				if (((bool((end != null())) && bool(end->zpp_disp)))){
					HX_STACK_LINE(1377)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1377)
				{
					HX_STACK_LINE(1377)
					::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1377)
					if ((_this->_immutable)){
						HX_STACK_LINE(1377)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1377)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1377)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1377)
				if ((end->zpp_inner->_inuse)){
					HX_STACK_LINE(1377)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1377)
				::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1377)
				end->zpp_inner->outer = null();
				HX_STACK_LINE(1377)
				end->zpp_inner = null();
				HX_STACK_LINE(1377)
				{
					HX_STACK_LINE(1377)
					::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1377)
					{
					}
					HX_STACK_LINE(1377)
					o->zpp_pool = null();
					HX_STACK_LINE(1377)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1377)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1377)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1377)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1377)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1377)
				{
					HX_STACK_LINE(1377)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1377)
					{
					}
					HX_STACK_LINE(1377)
					{
						HX_STACK_LINE(1377)
						if (((o->outer != null()))){
							HX_STACK_LINE(1377)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1377)
							o->outer = null();
						}
						HX_STACK_LINE(1377)
						o->_isimmutable = null();
						HX_STACK_LINE(1377)
						o->_validate = null();
						HX_STACK_LINE(1377)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1377)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1377)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(1378)
			true;
		}
		else{
			HX_STACK_LINE(1380)
			false;
		}
	}
return null();
}


Void ShapeDebug_obj::draw( Dynamic object){
{
		HX_STACK_PUSH("ShapeDebug::draw","nape/util/ShapeDebug.hx",1187);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_LINE(1189)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(1189)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(1191)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(1191)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1192)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,null(),1.0,true);
			}
			else{
				HX_STACK_LINE(1193)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Compound >()))){
					HX_STACK_LINE(1193)
					this->zpp_inner_zn->draw_compound((hx::TCast< nape::phys::Compound >::cast(object))->zpp_inner,null(),1.0,true);
				}
				else{
					HX_STACK_LINE(1194)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
						HX_STACK_LINE(1194)
						this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,null(),1.0,true);
					}
					else{
						HX_STACK_LINE(1195)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
							HX_STACK_LINE(1195)
							this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,null(),1.0,true);
						}
						else{
							HX_STACK_LINE(1196)
							if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
								HX_STACK_LINE(1196)
								(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
							}
							else{
								HX_STACK_LINE(1197)
								hx::Throw (HX_CSTRING("Error: Unhandled object type for Debug draw"));
							}
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(1203)
			if ((::Std_obj::is(object,hx::ClassOf< ::nape::space::Space >()))){
				HX_STACK_LINE(1204)
				this->zpp_inner_zn->draw_space((hx::TCast< nape::space::Space >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
			}
			else{
				HX_STACK_LINE(1205)
				if ((::Std_obj::is(object,hx::ClassOf< ::nape::phys::Body >()))){
					HX_STACK_LINE(1205)
					this->zpp_inner_zn->draw_body((hx::TCast< nape::phys::Body >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
				}
				else{
					HX_STACK_LINE(1206)
					if ((::Std_obj::is(object,hx::ClassOf< ::nape::shape::Shape >()))){
						HX_STACK_LINE(1206)
						this->zpp_inner_zn->draw_shape((hx::TCast< nape::shape::Shape >::cast(object))->zpp_inner,this->zpp_inner->xform,this->zpp_inner->xdet,false);
					}
					else{
						HX_STACK_LINE(1207)
						if ((::Std_obj::is(object,hx::ClassOf< ::nape::constraint::Constraint >()))){
							HX_STACK_LINE(1207)
							(hx::TCast< nape::constraint::Constraint >::cast(object))->zpp_inner->draw(hx::ObjectPtr<OBJ_>(this));
						}
						else{
							HX_STACK_LINE(1208)
							hx::Throw (HX_CSTRING("Error: Unhandled object type for Debug draw"));
						}
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledPolygon( Dynamic polygon,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledPolygon","nape/util/ShapeDebug.hx",871);
		HX_STACK_THIS(this);
		HX_STACK_ARG(polygon,"polygon");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(873)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(873)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(876)
		if (((polygon == null()))){
			HX_STACK_LINE(876)
			hx::Throw (HX_CSTRING("Error: Cannot draw null polygon!"));
		}
		HX_STACK_LINE(878)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(879)
		g->beginFill((int(colour) & int((int)16777215)),1.0);
		HX_STACK_LINE(880)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(881)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(882)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(883)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(884)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(886)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(887)
				{
					HX_STACK_LINE(887)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(887)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(887)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(887)
						++(_g);
						HX_STACK_LINE(889)
						if (((vite == null()))){
							HX_STACK_LINE(889)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(892)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(892)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(894)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(895)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(897)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(900)
						{
							HX_STACK_LINE(901)
							if ((fsttime)){
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
										{
											HX_STACK_LINE(902)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(902)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(902)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
													HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
													{
														struct _Function_9_1{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
																{
																	HX_STACK_LINE(902)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(902)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(902)
																	{
																		HX_STACK_LINE(902)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(902)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(902)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(902)
																	return p->zpp_inner->x;
																}
																return null();
															}
														};
														struct _Function_9_2{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
																{
																	HX_STACK_LINE(902)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(902)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(902)
																	{
																		HX_STACK_LINE(902)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(902)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(902)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(902)
																	return p->zpp_inner->y;
																}
																return null();
															}
														};
														HX_STACK_LINE(902)
														Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
														Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(902)
														if (((bool((x != x)) || bool((y != y))))){
															HX_STACK_LINE(902)
															hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
														}
														HX_STACK_LINE(902)
														::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(902)
														if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
															HX_STACK_LINE(902)
															ret = ::nape::geom::Vec2_obj::__new(null(),null());
														}
														else{
															HX_STACK_LINE(902)
															ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
															HX_STACK_LINE(902)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(902)
															ret->zpp_pool = null();
															HX_STACK_LINE(902)
															ret->zpp_disp = false;
															HX_STACK_LINE(902)
															if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																HX_STACK_LINE(902)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
															}
														}
														HX_STACK_LINE(902)
														if (((ret->zpp_inner == null()))){
															struct _Function_10_1{
																inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
																	{
																		HX_STACK_LINE(902)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(902)
																		::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(902)
																		{
																			HX_STACK_LINE(902)
																			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																				HX_STACK_LINE(902)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(902)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																				HX_STACK_LINE(902)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(902)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(902)
																			ret1->weak = false;
																		}
																		HX_STACK_LINE(902)
																		ret1->_immutable = immutable;
																		HX_STACK_LINE(902)
																		{
																			HX_STACK_LINE(902)
																			ret1->x = x;
																			HX_STACK_LINE(902)
																			ret1->y = y;
																			HX_STACK_LINE(902)
																			{
																			}
																			HX_STACK_LINE(902)
																			{
																			}
																		}
																		HX_STACK_LINE(902)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(902)
															ret->zpp_inner = _Function_10_1::Block(x,y);
															HX_STACK_LINE(902)
															ret->zpp_inner->outer = ret;
														}
														else{
															HX_STACK_LINE(902)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(902)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(902)
															{
																HX_STACK_LINE(902)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(902)
																if ((_this->_immutable)){
																	HX_STACK_LINE(902)
																	hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																}
																HX_STACK_LINE(902)
																if (((_this->_isimmutable_dyn() != null()))){
																	HX_STACK_LINE(902)
																	_this->_isimmutable();
																}
															}
															HX_STACK_LINE(902)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(902)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															struct _Function_10_1{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
																	{
																		HX_STACK_LINE(902)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(902)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(902)
																		{
																			HX_STACK_LINE(902)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(902)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(902)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(902)
																		return ret->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_10_2{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",902);
																	{
																		HX_STACK_LINE(902)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(902)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(902)
																		{
																			HX_STACK_LINE(902)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(902)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(902)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(902)
																		return ret->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(902)
															if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																HX_STACK_LINE(902)
																{
																	HX_STACK_LINE(902)
																	ret->zpp_inner->x = x;
																	HX_STACK_LINE(902)
																	ret->zpp_inner->y = y;
																	HX_STACK_LINE(902)
																	{
																	}
																	HX_STACK_LINE(902)
																	{
																	}
																}
																HX_STACK_LINE(902)
																{
																	HX_STACK_LINE(902)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(902)
																	if (((_this->_invalidate_dyn() != null()))){
																		HX_STACK_LINE(902)
																		_this->_invalidate(_this);
																	}
																}
															}
															HX_STACK_LINE(902)
															ret;
														}
														HX_STACK_LINE(902)
														ret->zpp_inner->weak = weak;
														HX_STACK_LINE(902)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(902)
											return _Function_8_1::Block(p,weak);
										}
										return null();
									}
								};
								HX_STACK_LINE(902)
								fst = _Function_7_1::Block(p);
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",903);
										{
											HX_STACK_LINE(903)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(903)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(903)
											{
												HX_STACK_LINE(903)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(903)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(903)
													_this->_validate();
												}
											}
											HX_STACK_LINE(903)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",903);
										{
											HX_STACK_LINE(903)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(903)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(903)
											{
												HX_STACK_LINE(903)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(903)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(903)
													_this->_validate();
												}
											}
											HX_STACK_LINE(903)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(903)
								g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
										{
											HX_STACK_LINE(905)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(905)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",905);
										{
											HX_STACK_LINE(905)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(905)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(905)
											{
												HX_STACK_LINE(905)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(905)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(905)
													_this->_validate();
												}
											}
											HX_STACK_LINE(905)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(905)
								g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
							}
							HX_STACK_LINE(906)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(933)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(934)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(935)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(937)
							if (((p == null()))){
								HX_STACK_LINE(937)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(939)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(941)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(944)
							{
								HX_STACK_LINE(945)
								if ((fsttime)){
									struct _Function_7_1{
										inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
											{
												HX_STACK_LINE(946)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(946)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(946)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												struct _Function_8_1{
													inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
														{
															struct _Function_9_1{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
																	{
																		HX_STACK_LINE(946)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(946)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(946)
																		{
																			HX_STACK_LINE(946)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(946)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(946)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(946)
																		return p->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_9_2{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
																	{
																		HX_STACK_LINE(946)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(946)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(946)
																		{
																			HX_STACK_LINE(946)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(946)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(946)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(946)
																		return p->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(946)
															Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
															Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(946)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(946)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(946)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(946)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(946)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(946)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(946)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(946)
																ret->zpp_pool = null();
																HX_STACK_LINE(946)
																ret->zpp_disp = false;
																HX_STACK_LINE(946)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(946)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(946)
															if (((ret->zpp_inner == null()))){
																struct _Function_10_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
																		{
																			HX_STACK_LINE(946)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(946)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(946)
																			{
																				HX_STACK_LINE(946)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(946)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(946)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(946)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(946)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(946)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(946)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(946)
																			{
																				HX_STACK_LINE(946)
																				ret1->x = x;
																				HX_STACK_LINE(946)
																				ret1->y = y;
																				HX_STACK_LINE(946)
																				{
																				}
																				HX_STACK_LINE(946)
																				{
																				}
																			}
																			HX_STACK_LINE(946)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(946)
																ret->zpp_inner = _Function_10_1::Block(x,y);
																HX_STACK_LINE(946)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(946)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(946)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(946)
																{
																	HX_STACK_LINE(946)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(946)
																	if ((_this->_immutable)){
																		HX_STACK_LINE(946)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(946)
																	if (((_this->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(946)
																		_this->_isimmutable();
																	}
																}
																HX_STACK_LINE(946)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(946)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_10_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
																		{
																			HX_STACK_LINE(946)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(946)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(946)
																			{
																				HX_STACK_LINE(946)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(946)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(946)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(946)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_10_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",946);
																		{
																			HX_STACK_LINE(946)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(946)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(946)
																			{
																				HX_STACK_LINE(946)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(946)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(946)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(946)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(946)
																if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																	HX_STACK_LINE(946)
																	{
																		HX_STACK_LINE(946)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(946)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(946)
																		{
																		}
																		HX_STACK_LINE(946)
																		{
																		}
																	}
																	HX_STACK_LINE(946)
																	{
																		HX_STACK_LINE(946)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(946)
																		if (((_this->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(946)
																			_this->_invalidate(_this);
																		}
																	}
																}
																HX_STACK_LINE(946)
																ret;
															}
															HX_STACK_LINE(946)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(946)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(946)
												return _Function_8_1::Block(p,weak);
											}
											return null();
										}
									};
									HX_STACK_LINE(946)
									fst = _Function_7_1::Block(p);
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",947);
											{
												HX_STACK_LINE(947)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(947)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(947)
												{
													HX_STACK_LINE(947)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(947)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(947)
														_this->_validate();
													}
												}
												HX_STACK_LINE(947)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_3{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",947);
											{
												HX_STACK_LINE(947)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(947)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(947)
												{
													HX_STACK_LINE(947)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(947)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(947)
														_this->_validate();
													}
												}
												HX_STACK_LINE(947)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(947)
									g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
											{
												HX_STACK_LINE(949)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(949)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",949);
											{
												HX_STACK_LINE(949)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(949)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(949)
												{
													HX_STACK_LINE(949)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(949)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(949)
														_this->_validate();
													}
												}
												HX_STACK_LINE(949)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(949)
									g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
								}
								HX_STACK_LINE(950)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(954)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(955)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(956)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(958)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(961)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(962)
						if (((verts != null()))){
							HX_STACK_LINE(963)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(964)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",965);
										{
											HX_STACK_LINE(965)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(965)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(965)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(965)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(965)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(965)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(965)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(965)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(965)
												ret->zpp_pool = null();
												HX_STACK_LINE(965)
												ret->zpp_disp = false;
												HX_STACK_LINE(965)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(965)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(965)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",965);
														{
															HX_STACK_LINE(965)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(965)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(965)
															{
																HX_STACK_LINE(965)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(965)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(965)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(965)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(965)
																	ret1->next = null();
																}
																HX_STACK_LINE(965)
																ret1->weak = false;
															}
															HX_STACK_LINE(965)
															ret1->_immutable = immutable;
															HX_STACK_LINE(965)
															{
																HX_STACK_LINE(965)
																ret1->x = x;
																HX_STACK_LINE(965)
																ret1->y = y;
																HX_STACK_LINE(965)
																{
																}
																HX_STACK_LINE(965)
																{
																}
															}
															HX_STACK_LINE(965)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(965)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(965)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(965)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(965)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(965)
												{
													HX_STACK_LINE(965)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(965)
													if ((_this->_immutable)){
														HX_STACK_LINE(965)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(965)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(965)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(965)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(965)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",965);
														{
															HX_STACK_LINE(965)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(965)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(965)
															{
																HX_STACK_LINE(965)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(965)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(965)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(965)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",965);
														{
															HX_STACK_LINE(965)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(965)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(965)
															{
																HX_STACK_LINE(965)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(965)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(965)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(965)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(965)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(965)
													{
														HX_STACK_LINE(965)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(965)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(965)
														{
														}
														HX_STACK_LINE(965)
														{
														}
													}
													HX_STACK_LINE(965)
													{
														HX_STACK_LINE(965)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(965)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(965)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(965)
												ret;
											}
											HX_STACK_LINE(965)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(965)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(965)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(966)
								vite = vite->next;
								HX_STACK_LINE(967)
								{
									HX_STACK_LINE(968)
									if ((fsttime)){
										struct _Function_9_1{
											inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
												{
													HX_STACK_LINE(969)
													bool weak = false;		HX_STACK_VAR(weak,"weak");
													HX_STACK_LINE(969)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(969)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													struct _Function_10_1{
														inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
															HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
															{
																struct _Function_11_1{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
																		{
																			HX_STACK_LINE(969)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(969)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(969)
																			{
																				HX_STACK_LINE(969)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(969)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(969)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(969)
																			return p->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_11_2{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
																		{
																			HX_STACK_LINE(969)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(969)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(969)
																			{
																				HX_STACK_LINE(969)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(969)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(969)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(969)
																			return p->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(969)
																Float x = _Function_11_1::Block(p);		HX_STACK_VAR(x,"x");
																Float y = _Function_11_2::Block(p);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(969)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(969)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																HX_STACK_LINE(969)
																::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(969)
																if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																	HX_STACK_LINE(969)
																	ret = ::nape::geom::Vec2_obj::__new(null(),null());
																}
																else{
																	HX_STACK_LINE(969)
																	ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																	HX_STACK_LINE(969)
																	::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																	HX_STACK_LINE(969)
																	ret->zpp_pool = null();
																	HX_STACK_LINE(969)
																	ret->zpp_disp = false;
																	HX_STACK_LINE(969)
																	if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																		HX_STACK_LINE(969)
																		::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																	}
																}
																HX_STACK_LINE(969)
																if (((ret->zpp_inner == null()))){
																	struct _Function_12_1{
																		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
																			{
																				HX_STACK_LINE(969)
																				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																				HX_STACK_LINE(969)
																				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(969)
																				{
																					HX_STACK_LINE(969)
																					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																						HX_STACK_LINE(969)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(969)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																						HX_STACK_LINE(969)
																						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(969)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(969)
																					ret1->weak = false;
																				}
																				HX_STACK_LINE(969)
																				ret1->_immutable = immutable;
																				HX_STACK_LINE(969)
																				{
																					HX_STACK_LINE(969)
																					ret1->x = x;
																					HX_STACK_LINE(969)
																					ret1->y = y;
																					HX_STACK_LINE(969)
																					{
																					}
																					HX_STACK_LINE(969)
																					{
																					}
																				}
																				HX_STACK_LINE(969)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(969)
																	ret->zpp_inner = _Function_12_1::Block(x,y);
																	HX_STACK_LINE(969)
																	ret->zpp_inner->outer = ret;
																}
																else{
																	HX_STACK_LINE(969)
																	if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																		HX_STACK_LINE(969)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(969)
																	{
																		HX_STACK_LINE(969)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(969)
																		if ((_this->_immutable)){
																			HX_STACK_LINE(969)
																			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																		}
																		HX_STACK_LINE(969)
																		if (((_this->_isimmutable_dyn() != null()))){
																			HX_STACK_LINE(969)
																			_this->_isimmutable();
																		}
																	}
																	HX_STACK_LINE(969)
																	if (((bool((x != x)) || bool((y != y))))){
																		HX_STACK_LINE(969)
																		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																	}
																	struct _Function_12_1{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
																			{
																				HX_STACK_LINE(969)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(969)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(969)
																				{
																					HX_STACK_LINE(969)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(969)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(969)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(969)
																				return ret->zpp_inner->x;
																			}
																			return null();
																		}
																	};
																	struct _Function_12_2{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",969);
																			{
																				HX_STACK_LINE(969)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(969)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(969)
																				{
																					HX_STACK_LINE(969)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(969)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(969)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(969)
																				return ret->zpp_inner->y;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(969)
																	if ((!(((bool((_Function_12_1::Block(ret) == x)) && bool((_Function_12_2::Block(ret) == y))))))){
																		HX_STACK_LINE(969)
																		{
																			HX_STACK_LINE(969)
																			ret->zpp_inner->x = x;
																			HX_STACK_LINE(969)
																			ret->zpp_inner->y = y;
																			HX_STACK_LINE(969)
																			{
																			}
																			HX_STACK_LINE(969)
																			{
																			}
																		}
																		HX_STACK_LINE(969)
																		{
																			HX_STACK_LINE(969)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(969)
																			if (((_this->_invalidate_dyn() != null()))){
																				HX_STACK_LINE(969)
																				_this->_invalidate(_this);
																			}
																		}
																	}
																	HX_STACK_LINE(969)
																	ret;
																}
																HX_STACK_LINE(969)
																ret->zpp_inner->weak = weak;
																HX_STACK_LINE(969)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(969)
													return _Function_10_1::Block(p,weak);
												}
												return null();
											}
										};
										HX_STACK_LINE(969)
										fst = _Function_9_1::Block(p);
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",970);
												{
													HX_STACK_LINE(970)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(970)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(970)
													{
														HX_STACK_LINE(970)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(970)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(970)
															_this->_validate();
														}
													}
													HX_STACK_LINE(970)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_3{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",970);
												{
													HX_STACK_LINE(970)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(970)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(970)
													{
														HX_STACK_LINE(970)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(970)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(970)
															_this->_validate();
														}
													}
													HX_STACK_LINE(970)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(970)
										g->moveTo(_Function_9_2::Block(p),_Function_9_3::Block(p));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
												{
													HX_STACK_LINE(972)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(972)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",972);
												{
													HX_STACK_LINE(972)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(972)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(972)
													{
														HX_STACK_LINE(972)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(972)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(972)
															_this->_validate();
														}
													}
													HX_STACK_LINE(972)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(972)
										g->lineTo(_Function_9_1::Block(p),_Function_9_2::Block(p));
									}
									HX_STACK_LINE(973)
									fsttime = false;
								}
								HX_STACK_LINE(975)
								{
									HX_STACK_LINE(975)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(975)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(975)
										if ((_this->_immutable)){
											HX_STACK_LINE(975)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(975)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(975)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(975)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(975)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(975)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(975)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(975)
									p->zpp_inner = null();
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(975)
										{
										}
										HX_STACK_LINE(975)
										o->zpp_pool = null();
										HX_STACK_LINE(975)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(975)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(975)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(975)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(975)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(975)
									{
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(975)
										{
										}
										HX_STACK_LINE(975)
										{
											HX_STACK_LINE(975)
											if (((o->outer != null()))){
												HX_STACK_LINE(975)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(975)
												o->outer = null();
											}
											HX_STACK_LINE(975)
											o->_isimmutable = null();
											HX_STACK_LINE(975)
											o->_validate = null();
											HX_STACK_LINE(975)
											o->_invalidate = null();
										}
										HX_STACK_LINE(975)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(975)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(980)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",986);
					{
						HX_STACK_LINE(986)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(986)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(986)
						{
							HX_STACK_LINE(986)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(986)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(986)
								_this->_validate();
							}
						}
						HX_STACK_LINE(986)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",986);
					{
						HX_STACK_LINE(986)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(986)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(986)
						{
							HX_STACK_LINE(986)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(986)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(986)
								_this->_validate();
							}
						}
						HX_STACK_LINE(986)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(986)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(987)
			{
				HX_STACK_LINE(987)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(987)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(987)
				{
					HX_STACK_LINE(987)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(987)
					if ((_this->_immutable)){
						HX_STACK_LINE(987)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(987)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(987)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(987)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(987)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(987)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(987)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(987)
				fst->zpp_inner = null();
				HX_STACK_LINE(987)
				{
					HX_STACK_LINE(987)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(987)
					{
					}
					HX_STACK_LINE(987)
					o->zpp_pool = null();
					HX_STACK_LINE(987)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(987)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(987)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(987)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(987)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(987)
				{
					HX_STACK_LINE(987)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(987)
					{
					}
					HX_STACK_LINE(987)
					{
						HX_STACK_LINE(987)
						if (((o->outer != null()))){
							HX_STACK_LINE(987)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(987)
							o->outer = null();
						}
						HX_STACK_LINE(987)
						o->_isimmutable = null();
						HX_STACK_LINE(987)
						o->_validate = null();
						HX_STACK_LINE(987)
						o->_invalidate = null();
					}
					HX_STACK_LINE(987)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(987)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(990)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(992)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(993)
				{
					HX_STACK_LINE(993)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(993)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(993)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(993)
						++(_g);
						HX_STACK_LINE(995)
						if (((vite == null()))){
							HX_STACK_LINE(995)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(998)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(998)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(1000)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(1001)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(1003)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1006)
						{
							HX_STACK_LINE(1007)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(1008)
							if ((fsttime)){
								HX_STACK_LINE(1009)
								fst = v;
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1010);
										{
											HX_STACK_LINE(1010)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1010)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1010)
											{
												HX_STACK_LINE(1010)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1010)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1010)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1010)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1010);
										{
											HX_STACK_LINE(1010)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1010)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1010)
											{
												HX_STACK_LINE(1010)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1010)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1010)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1010)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1010)
								g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1012);
										{
											HX_STACK_LINE(1012)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1012)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1012)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1012)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1012)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1012);
										{
											HX_STACK_LINE(1012)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(1012)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(1012)
											{
												HX_STACK_LINE(1012)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(1012)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(1012)
													_this->_validate();
												}
											}
											HX_STACK_LINE(1012)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(1012)
								g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							HX_STACK_LINE(1013)
							if ((!(fsttime))){
								HX_STACK_LINE(1013)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(1013)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1013)
									if ((_this->_immutable)){
										HX_STACK_LINE(1013)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1013)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1013)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1013)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(1013)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1013)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1013)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(1013)
								v->zpp_inner = null();
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1013)
									{
									}
									HX_STACK_LINE(1013)
									o->zpp_pool = null();
									HX_STACK_LINE(1013)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1013)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1013)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1013)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1013)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1013)
								{
									HX_STACK_LINE(1013)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1013)
									{
									}
									HX_STACK_LINE(1013)
									{
										HX_STACK_LINE(1013)
										if (((o->outer != null()))){
											HX_STACK_LINE(1013)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1013)
											o->outer = null();
										}
										HX_STACK_LINE(1013)
										o->_isimmutable = null();
										HX_STACK_LINE(1013)
										o->_validate = null();
										HX_STACK_LINE(1013)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1013)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1013)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1014)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1043)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(1044)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(1045)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(1047)
							if (((p == null()))){
								HX_STACK_LINE(1047)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(1049)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(1051)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(1054)
							{
								HX_STACK_LINE(1055)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(1056)
								if ((fsttime)){
									HX_STACK_LINE(1057)
									fst = v;
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1058);
											{
												HX_STACK_LINE(1058)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1058)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1058)
												{
													HX_STACK_LINE(1058)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1058)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1058)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1058)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1058);
											{
												HX_STACK_LINE(1058)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1058)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1058)
												{
													HX_STACK_LINE(1058)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1058)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1058)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1058)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1058)
									g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1060);
											{
												HX_STACK_LINE(1060)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1060)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1060)
												{
													HX_STACK_LINE(1060)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1060)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1060)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1060)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1060);
											{
												HX_STACK_LINE(1060)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(1060)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1060)
												{
													HX_STACK_LINE(1060)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1060)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(1060)
														_this->_validate();
													}
												}
												HX_STACK_LINE(1060)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(1060)
									g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								HX_STACK_LINE(1061)
								if ((!(fsttime))){
									HX_STACK_LINE(1061)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(1061)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1061)
										if ((_this->_immutable)){
											HX_STACK_LINE(1061)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1061)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(1061)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1061)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(1061)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1061)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1061)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(1061)
									v->zpp_inner = null();
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1061)
										{
										}
										HX_STACK_LINE(1061)
										o->zpp_pool = null();
										HX_STACK_LINE(1061)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1061)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1061)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1061)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1061)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1061)
									{
										HX_STACK_LINE(1061)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1061)
										{
										}
										HX_STACK_LINE(1061)
										{
											HX_STACK_LINE(1061)
											if (((o->outer != null()))){
												HX_STACK_LINE(1061)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1061)
												o->outer = null();
											}
											HX_STACK_LINE(1061)
											o->_isimmutable = null();
											HX_STACK_LINE(1061)
											o->_validate = null();
											HX_STACK_LINE(1061)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1061)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1061)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(1062)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(1066)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(1067)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(1068)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(1070)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1073)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(1074)
						if (((verts != null()))){
							HX_STACK_LINE(1075)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(1076)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1077);
										{
											HX_STACK_LINE(1077)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(1077)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(1077)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(1077)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(1077)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(1077)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(1077)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(1077)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(1077)
												ret->zpp_pool = null();
												HX_STACK_LINE(1077)
												ret->zpp_disp = false;
												HX_STACK_LINE(1077)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(1077)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(1077)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1077);
														{
															HX_STACK_LINE(1077)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(1077)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1077)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(1077)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(1077)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1077)
																	ret1->next = null();
																}
																HX_STACK_LINE(1077)
																ret1->weak = false;
															}
															HX_STACK_LINE(1077)
															ret1->_immutable = immutable;
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																ret1->x = x;
																HX_STACK_LINE(1077)
																ret1->y = y;
																HX_STACK_LINE(1077)
																{
																}
																HX_STACK_LINE(1077)
																{
																}
															}
															HX_STACK_LINE(1077)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1077)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(1077)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(1077)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(1077)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(1077)
												{
													HX_STACK_LINE(1077)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(1077)
													if ((_this->_immutable)){
														HX_STACK_LINE(1077)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(1077)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(1077)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(1077)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(1077)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1077);
														{
															HX_STACK_LINE(1077)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(1077)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(1077)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(1077)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1077);
														{
															HX_STACK_LINE(1077)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(1077)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(1077)
															{
																HX_STACK_LINE(1077)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(1077)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(1077)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(1077)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(1077)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(1077)
													{
														HX_STACK_LINE(1077)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(1077)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(1077)
														{
														}
														HX_STACK_LINE(1077)
														{
														}
													}
													HX_STACK_LINE(1077)
													{
														HX_STACK_LINE(1077)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1077)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(1077)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(1077)
												ret;
											}
											HX_STACK_LINE(1077)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(1077)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(1077)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(1078)
								vite = vite->next;
								HX_STACK_LINE(1079)
								{
									HX_STACK_LINE(1080)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1081)
									if ((fsttime)){
										HX_STACK_LINE(1082)
										fst = v;
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1083);
												{
													HX_STACK_LINE(1083)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1083)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1083)
													{
														HX_STACK_LINE(1083)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1083)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1083)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1083)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1083);
												{
													HX_STACK_LINE(1083)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1083)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1083)
													{
														HX_STACK_LINE(1083)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1083)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1083)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1083)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1083)
										g->moveTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1085);
												{
													HX_STACK_LINE(1085)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1085)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1085)
													{
														HX_STACK_LINE(1085)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1085)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1085)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1085)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1085);
												{
													HX_STACK_LINE(1085)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(1085)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(1085)
													{
														HX_STACK_LINE(1085)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(1085)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(1085)
															_this->_validate();
														}
													}
													HX_STACK_LINE(1085)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(1085)
										g->lineTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									HX_STACK_LINE(1086)
									if ((!(fsttime))){
										HX_STACK_LINE(1086)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(1086)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(1086)
											if ((_this->_immutable)){
												HX_STACK_LINE(1086)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(1086)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(1086)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(1086)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(1086)
											hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(1086)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(1086)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(1086)
										v->zpp_inner = null();
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1086)
											{
											}
											HX_STACK_LINE(1086)
											o->zpp_pool = null();
											HX_STACK_LINE(1086)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(1086)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(1086)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(1086)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(1086)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(1086)
										{
											HX_STACK_LINE(1086)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(1086)
											{
											}
											HX_STACK_LINE(1086)
											{
												HX_STACK_LINE(1086)
												if (((o->outer != null()))){
													HX_STACK_LINE(1086)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(1086)
													o->outer = null();
												}
												HX_STACK_LINE(1086)
												o->_isimmutable = null();
												HX_STACK_LINE(1086)
												o->_validate = null();
												HX_STACK_LINE(1086)
												o->_invalidate = null();
											}
											HX_STACK_LINE(1086)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(1086)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(1087)
									fsttime = false;
								}
								HX_STACK_LINE(1089)
								{
									HX_STACK_LINE(1089)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(1089)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(1089)
									{
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1089)
										if ((_this->_immutable)){
											HX_STACK_LINE(1089)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(1089)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(1089)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(1089)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(1089)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(1089)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(1089)
									p->zpp_inner = null();
									HX_STACK_LINE(1089)
									{
										HX_STACK_LINE(1089)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1089)
										{
										}
										HX_STACK_LINE(1089)
										o->zpp_pool = null();
										HX_STACK_LINE(1089)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(1089)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(1089)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(1089)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(1089)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(1089)
									{
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1089)
										{
										}
										HX_STACK_LINE(1089)
										{
											HX_STACK_LINE(1089)
											if (((o->outer != null()))){
												HX_STACK_LINE(1089)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(1089)
												o->outer = null();
											}
											HX_STACK_LINE(1089)
											o->_isimmutable = null();
											HX_STACK_LINE(1089)
											o->_validate = null();
											HX_STACK_LINE(1089)
											o->_invalidate = null();
										}
										HX_STACK_LINE(1089)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(1089)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(1094)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1100);
					{
						HX_STACK_LINE(1100)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(1100)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1100)
						{
							HX_STACK_LINE(1100)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1100)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1100)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1100)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1100);
					{
						HX_STACK_LINE(1100)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(1100)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(1100)
						{
							HX_STACK_LINE(1100)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1100)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(1100)
								_this->_validate();
							}
						}
						HX_STACK_LINE(1100)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(1100)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(1101)
			{
				HX_STACK_LINE(1101)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(1101)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(1101)
				{
					HX_STACK_LINE(1101)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1101)
					if ((_this->_immutable)){
						HX_STACK_LINE(1101)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(1101)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(1101)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(1101)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(1101)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(1101)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(1101)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(1101)
				fst->zpp_inner = null();
				HX_STACK_LINE(1101)
				{
					HX_STACK_LINE(1101)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1101)
					{
					}
					HX_STACK_LINE(1101)
					o->zpp_pool = null();
					HX_STACK_LINE(1101)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(1101)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(1101)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(1101)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(1101)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(1101)
				{
					HX_STACK_LINE(1101)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(1101)
					{
					}
					HX_STACK_LINE(1101)
					{
						HX_STACK_LINE(1101)
						if (((o->outer != null()))){
							HX_STACK_LINE(1101)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(1101)
							o->outer = null();
						}
						HX_STACK_LINE(1101)
						o->_isimmutable = null();
						HX_STACK_LINE(1101)
						o->_validate = null();
						HX_STACK_LINE(1101)
						o->_invalidate = null();
					}
					HX_STACK_LINE(1101)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(1101)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(1103)
		g->endFill();
		HX_STACK_LINE(1104)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(1106)
			Array< ::nape::geom::Vec2 > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(1107)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1108)
			while(((i < lv->length))){
				HX_STACK_LINE(1109)
				::nape::geom::Vec2 cur = lv->__get(i);		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",1113);
						{
							HX_STACK_LINE(1114)
							{
								HX_STACK_LINE(1114)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(1114)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1114)
								{
									HX_STACK_LINE(1114)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1114)
									if ((_this->_immutable)){
										HX_STACK_LINE(1114)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1114)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1114)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(1114)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(1114)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1114)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1114)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(1114)
								cur->zpp_inner = null();
								HX_STACK_LINE(1114)
								{
									HX_STACK_LINE(1114)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1114)
									{
									}
									HX_STACK_LINE(1114)
									o->zpp_pool = null();
									HX_STACK_LINE(1114)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1114)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1114)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1114)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1114)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1114)
								{
									HX_STACK_LINE(1114)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1114)
									{
									}
									HX_STACK_LINE(1114)
									{
										HX_STACK_LINE(1114)
										if (((o->outer != null()))){
											HX_STACK_LINE(1114)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1114)
											o->outer = null();
										}
										HX_STACK_LINE(1114)
										o->_isimmutable = null();
										HX_STACK_LINE(1114)
										o->_validate = null();
										HX_STACK_LINE(1114)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1114)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1114)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1115)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(1110)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(1121)
					lv->splice(i,(int)1);
					HX_STACK_LINE(1122)
					continue;
				}
				HX_STACK_LINE(1124)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(1152)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(1153)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(1154)
				if (((lv->zpp_inner->_validate_dyn() != null()))){
					HX_STACK_LINE(1154)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(1155)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(1156)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(1157)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(1158)
				while(((cur != null()))){
					HX_STACK_LINE(1159)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(1160)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(1163)
						cur = ins->erase(pre);
						HX_STACK_LINE(1164)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(1168)
							{
								HX_STACK_LINE(1168)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1168)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(1168)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(1168)
									if ((_this1->_immutable)){
										HX_STACK_LINE(1168)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(1168)
									if (((_this1->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(1168)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(1168)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(1168)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(1168)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(1168)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(1168)
								_this->zpp_inner = null();
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1168)
									{
									}
									HX_STACK_LINE(1168)
									o->zpp_pool = null();
									HX_STACK_LINE(1168)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(1168)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(1168)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(1168)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(1168)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(1168)
								{
									HX_STACK_LINE(1168)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(1168)
									{
									}
									HX_STACK_LINE(1168)
									{
										HX_STACK_LINE(1168)
										if (((o->outer != null()))){
											HX_STACK_LINE(1168)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(1168)
											o->outer = null();
										}
										HX_STACK_LINE(1168)
										o->_isimmutable = null();
										HX_STACK_LINE(1168)
										o->_validate = null();
										HX_STACK_LINE(1168)
										o->_invalidate = null();
									}
									HX_STACK_LINE(1168)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(1168)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(1169)
							true;
						}
						else{
							HX_STACK_LINE(1171)
							false;
						}
					}
					else{
						HX_STACK_LINE(1177)
						pre = cur;
						HX_STACK_LINE(1178)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawPolygon( Dynamic polygon,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawPolygon","nape/util/ShapeDebug.hx",557);
		HX_STACK_THIS(this);
		HX_STACK_ARG(polygon,"polygon");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(559)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(559)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(562)
		if (((polygon == null()))){
			HX_STACK_LINE(562)
			hx::Throw (HX_CSTRING("Error: Cannot draw null polygon"));
		}
		HX_STACK_LINE(564)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(565)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),1.0,null(),null(),null(),null(),null());
		HX_STACK_LINE(566)
		::nape::geom::Vec2 fst = null();		HX_STACK_VAR(fst,"fst");
		HX_STACK_LINE(567)
		bool fsttime = true;		HX_STACK_VAR(fsttime,"fsttime");
		HX_STACK_LINE(568)
		if ((this->zpp_inner->xnull)){
			HX_STACK_LINE(569)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(571)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(572)
				{
					HX_STACK_LINE(572)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(572)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(572)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(572)
						++(_g);
						HX_STACK_LINE(574)
						if (((vite == null()))){
							HX_STACK_LINE(574)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(577)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(577)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(579)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(580)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(582)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(585)
						{
							HX_STACK_LINE(586)
							if ((fsttime)){
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
										{
											HX_STACK_LINE(587)
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(587)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(587)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											struct _Function_8_1{
												inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
													HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
													{
														struct _Function_9_1{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
																{
																	HX_STACK_LINE(587)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(587)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(587)
																	{
																		HX_STACK_LINE(587)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(587)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(587)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(587)
																	return p->zpp_inner->x;
																}
																return null();
															}
														};
														struct _Function_9_2{
															inline static Float Block( ::nape::geom::Vec2 &p){
																HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
																{
																	HX_STACK_LINE(587)
																	if ((p->zpp_disp)){
																		HX_STACK_LINE(587)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(587)
																	{
																		HX_STACK_LINE(587)
																		::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(587)
																		if (((_this->_validate_dyn() != null()))){
																			HX_STACK_LINE(587)
																			_this->_validate();
																		}
																	}
																	HX_STACK_LINE(587)
																	return p->zpp_inner->y;
																}
																return null();
															}
														};
														HX_STACK_LINE(587)
														Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
														Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
														HX_STACK_LINE(587)
														if (((bool((x != x)) || bool((y != y))))){
															HX_STACK_LINE(587)
															hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
														}
														HX_STACK_LINE(587)
														::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
														HX_STACK_LINE(587)
														if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
															HX_STACK_LINE(587)
															ret = ::nape::geom::Vec2_obj::__new(null(),null());
														}
														else{
															HX_STACK_LINE(587)
															ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
															HX_STACK_LINE(587)
															::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
															HX_STACK_LINE(587)
															ret->zpp_pool = null();
															HX_STACK_LINE(587)
															ret->zpp_disp = false;
															HX_STACK_LINE(587)
															if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																HX_STACK_LINE(587)
																::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
															}
														}
														HX_STACK_LINE(587)
														if (((ret->zpp_inner == null()))){
															struct _Function_10_1{
																inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
																	{
																		HX_STACK_LINE(587)
																		bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																		HX_STACK_LINE(587)
																		::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(587)
																		{
																			HX_STACK_LINE(587)
																			if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																				HX_STACK_LINE(587)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(587)
																				ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																				HX_STACK_LINE(587)
																				::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(587)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(587)
																			ret1->weak = false;
																		}
																		HX_STACK_LINE(587)
																		ret1->_immutable = immutable;
																		HX_STACK_LINE(587)
																		{
																			HX_STACK_LINE(587)
																			ret1->x = x;
																			HX_STACK_LINE(587)
																			ret1->y = y;
																			HX_STACK_LINE(587)
																			{
																			}
																			HX_STACK_LINE(587)
																			{
																			}
																		}
																		HX_STACK_LINE(587)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(587)
															ret->zpp_inner = _Function_10_1::Block(x,y);
															HX_STACK_LINE(587)
															ret->zpp_inner->outer = ret;
														}
														else{
															HX_STACK_LINE(587)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(587)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(587)
															{
																HX_STACK_LINE(587)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(587)
																if ((_this->_immutable)){
																	HX_STACK_LINE(587)
																	hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																}
																HX_STACK_LINE(587)
																if (((_this->_isimmutable_dyn() != null()))){
																	HX_STACK_LINE(587)
																	_this->_isimmutable();
																}
															}
															HX_STACK_LINE(587)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(587)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															struct _Function_10_1{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
																	{
																		HX_STACK_LINE(587)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(587)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(587)
																		{
																			HX_STACK_LINE(587)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(587)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(587)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(587)
																		return ret->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_10_2{
																inline static Float Block( ::nape::geom::Vec2 &ret){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",587);
																	{
																		HX_STACK_LINE(587)
																		if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																			HX_STACK_LINE(587)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(587)
																		{
																			HX_STACK_LINE(587)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(587)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(587)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(587)
																		return ret->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(587)
															if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																HX_STACK_LINE(587)
																{
																	HX_STACK_LINE(587)
																	ret->zpp_inner->x = x;
																	HX_STACK_LINE(587)
																	ret->zpp_inner->y = y;
																	HX_STACK_LINE(587)
																	{
																	}
																	HX_STACK_LINE(587)
																	{
																	}
																}
																HX_STACK_LINE(587)
																{
																	HX_STACK_LINE(587)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(587)
																	if (((_this->_invalidate_dyn() != null()))){
																		HX_STACK_LINE(587)
																		_this->_invalidate(_this);
																	}
																}
															}
															HX_STACK_LINE(587)
															ret;
														}
														HX_STACK_LINE(587)
														ret->zpp_inner->weak = weak;
														HX_STACK_LINE(587)
														return ret;
													}
													return null();
												}
											};
											HX_STACK_LINE(587)
											return _Function_8_1::Block(p,weak);
										}
										return null();
									}
								};
								HX_STACK_LINE(587)
								fst = _Function_7_1::Block(p);
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",588);
										{
											HX_STACK_LINE(588)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(588)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(588)
											{
												HX_STACK_LINE(588)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(588)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(588)
													_this->_validate();
												}
											}
											HX_STACK_LINE(588)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_3{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",588);
										{
											HX_STACK_LINE(588)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(588)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(588)
											{
												HX_STACK_LINE(588)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(588)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(588)
													_this->_validate();
												}
											}
											HX_STACK_LINE(588)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(588)
								g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
										{
											HX_STACK_LINE(590)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(590)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											return p->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &p){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",590);
										{
											HX_STACK_LINE(590)
											if (((bool((p != null())) && bool(p->zpp_disp)))){
												HX_STACK_LINE(590)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(590)
											{
												HX_STACK_LINE(590)
												::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(590)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(590)
													_this->_validate();
												}
											}
											HX_STACK_LINE(590)
											return p->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(590)
								g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
							}
							HX_STACK_LINE(591)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(618)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(619)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(620)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(622)
							if (((p == null()))){
								HX_STACK_LINE(622)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(624)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(626)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(629)
							{
								HX_STACK_LINE(630)
								if ((fsttime)){
									struct _Function_7_1{
										inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
											{
												HX_STACK_LINE(631)
												bool weak = false;		HX_STACK_VAR(weak,"weak");
												HX_STACK_LINE(631)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(631)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												struct _Function_8_1{
													inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
														{
															struct _Function_9_1{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
																	{
																		HX_STACK_LINE(631)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(631)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(631)
																		{
																			HX_STACK_LINE(631)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(631)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(631)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(631)
																		return p->zpp_inner->x;
																	}
																	return null();
																}
															};
															struct _Function_9_2{
																inline static Float Block( ::nape::geom::Vec2 &p){
																	HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
																	{
																		HX_STACK_LINE(631)
																		if ((p->zpp_disp)){
																			HX_STACK_LINE(631)
																			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																		}
																		HX_STACK_LINE(631)
																		{
																			HX_STACK_LINE(631)
																			::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(631)
																			if (((_this->_validate_dyn() != null()))){
																				HX_STACK_LINE(631)
																				_this->_validate();
																			}
																		}
																		HX_STACK_LINE(631)
																		return p->zpp_inner->y;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(631)
															Float x = _Function_9_1::Block(p);		HX_STACK_VAR(x,"x");
															Float y = _Function_9_2::Block(p);		HX_STACK_VAR(y,"y");
															HX_STACK_LINE(631)
															if (((bool((x != x)) || bool((y != y))))){
																HX_STACK_LINE(631)
																hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
															}
															HX_STACK_LINE(631)
															::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
															HX_STACK_LINE(631)
															if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																HX_STACK_LINE(631)
																ret = ::nape::geom::Vec2_obj::__new(null(),null());
															}
															else{
																HX_STACK_LINE(631)
																ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																HX_STACK_LINE(631)
																::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																HX_STACK_LINE(631)
																ret->zpp_pool = null();
																HX_STACK_LINE(631)
																ret->zpp_disp = false;
																HX_STACK_LINE(631)
																if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																	HX_STACK_LINE(631)
																	::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																}
															}
															HX_STACK_LINE(631)
															if (((ret->zpp_inner == null()))){
																struct _Function_10_1{
																	inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
																		{
																			HX_STACK_LINE(631)
																			bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																			HX_STACK_LINE(631)
																			::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(631)
																			{
																				HX_STACK_LINE(631)
																				if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																					HX_STACK_LINE(631)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(631)
																					ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																					HX_STACK_LINE(631)
																					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(631)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(631)
																				ret1->weak = false;
																			}
																			HX_STACK_LINE(631)
																			ret1->_immutable = immutable;
																			HX_STACK_LINE(631)
																			{
																				HX_STACK_LINE(631)
																				ret1->x = x;
																				HX_STACK_LINE(631)
																				ret1->y = y;
																				HX_STACK_LINE(631)
																				{
																				}
																				HX_STACK_LINE(631)
																				{
																				}
																			}
																			HX_STACK_LINE(631)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(631)
																ret->zpp_inner = _Function_10_1::Block(x,y);
																HX_STACK_LINE(631)
																ret->zpp_inner->outer = ret;
															}
															else{
																HX_STACK_LINE(631)
																if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																	HX_STACK_LINE(631)
																	hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																}
																HX_STACK_LINE(631)
																{
																	HX_STACK_LINE(631)
																	::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																	HX_STACK_LINE(631)
																	if ((_this->_immutable)){
																		HX_STACK_LINE(631)
																		hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																	}
																	HX_STACK_LINE(631)
																	if (((_this->_isimmutable_dyn() != null()))){
																		HX_STACK_LINE(631)
																		_this->_isimmutable();
																	}
																}
																HX_STACK_LINE(631)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(631)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																struct _Function_10_1{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
																		{
																			HX_STACK_LINE(631)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(631)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(631)
																			{
																				HX_STACK_LINE(631)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(631)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(631)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(631)
																			return ret->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_10_2{
																	inline static Float Block( ::nape::geom::Vec2 &ret){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",631);
																		{
																			HX_STACK_LINE(631)
																			if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																				HX_STACK_LINE(631)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(631)
																			{
																				HX_STACK_LINE(631)
																				::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(631)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(631)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(631)
																			return ret->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(631)
																if ((!(((bool((_Function_10_1::Block(ret) == x)) && bool((_Function_10_2::Block(ret) == y))))))){
																	HX_STACK_LINE(631)
																	{
																		HX_STACK_LINE(631)
																		ret->zpp_inner->x = x;
																		HX_STACK_LINE(631)
																		ret->zpp_inner->y = y;
																		HX_STACK_LINE(631)
																		{
																		}
																		HX_STACK_LINE(631)
																		{
																		}
																	}
																	HX_STACK_LINE(631)
																	{
																		HX_STACK_LINE(631)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(631)
																		if (((_this->_invalidate_dyn() != null()))){
																			HX_STACK_LINE(631)
																			_this->_invalidate(_this);
																		}
																	}
																}
																HX_STACK_LINE(631)
																ret;
															}
															HX_STACK_LINE(631)
															ret->zpp_inner->weak = weak;
															HX_STACK_LINE(631)
															return ret;
														}
														return null();
													}
												};
												HX_STACK_LINE(631)
												return _Function_8_1::Block(p,weak);
											}
											return null();
										}
									};
									HX_STACK_LINE(631)
									fst = _Function_7_1::Block(p);
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",632);
											{
												HX_STACK_LINE(632)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(632)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(632)
												{
													HX_STACK_LINE(632)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(632)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(632)
														_this->_validate();
													}
												}
												HX_STACK_LINE(632)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_3{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",632);
											{
												HX_STACK_LINE(632)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(632)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(632)
												{
													HX_STACK_LINE(632)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(632)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(632)
														_this->_validate();
													}
												}
												HX_STACK_LINE(632)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(632)
									g->moveTo(_Function_7_2::Block(p),_Function_7_3::Block(p));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
											{
												HX_STACK_LINE(634)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(634)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												return p->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &p){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",634);
											{
												HX_STACK_LINE(634)
												if (((bool((p != null())) && bool(p->zpp_disp)))){
													HX_STACK_LINE(634)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(634)
												{
													HX_STACK_LINE(634)
													::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(634)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(634)
														_this->_validate();
													}
												}
												HX_STACK_LINE(634)
												return p->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(634)
									g->lineTo(_Function_7_1::Block(p),_Function_7_2::Block(p));
								}
								HX_STACK_LINE(635)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(639)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(640)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(641)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(643)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(646)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(647)
						if (((verts != null()))){
							HX_STACK_LINE(648)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(649)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",650);
										{
											HX_STACK_LINE(650)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(650)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(650)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(650)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(650)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(650)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(650)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(650)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(650)
												ret->zpp_pool = null();
												HX_STACK_LINE(650)
												ret->zpp_disp = false;
												HX_STACK_LINE(650)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(650)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(650)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",650);
														{
															HX_STACK_LINE(650)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(650)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(650)
															{
																HX_STACK_LINE(650)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(650)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(650)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(650)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(650)
																	ret1->next = null();
																}
																HX_STACK_LINE(650)
																ret1->weak = false;
															}
															HX_STACK_LINE(650)
															ret1->_immutable = immutable;
															HX_STACK_LINE(650)
															{
																HX_STACK_LINE(650)
																ret1->x = x;
																HX_STACK_LINE(650)
																ret1->y = y;
																HX_STACK_LINE(650)
																{
																}
																HX_STACK_LINE(650)
																{
																}
															}
															HX_STACK_LINE(650)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(650)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(650)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(650)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(650)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(650)
												{
													HX_STACK_LINE(650)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(650)
													if ((_this->_immutable)){
														HX_STACK_LINE(650)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(650)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(650)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(650)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(650)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",650);
														{
															HX_STACK_LINE(650)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(650)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(650)
															{
																HX_STACK_LINE(650)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(650)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(650)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(650)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",650);
														{
															HX_STACK_LINE(650)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(650)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(650)
															{
																HX_STACK_LINE(650)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(650)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(650)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(650)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(650)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(650)
													{
														HX_STACK_LINE(650)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(650)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(650)
														{
														}
														HX_STACK_LINE(650)
														{
														}
													}
													HX_STACK_LINE(650)
													{
														HX_STACK_LINE(650)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(650)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(650)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(650)
												ret;
											}
											HX_STACK_LINE(650)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(650)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(650)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(651)
								vite = vite->next;
								HX_STACK_LINE(652)
								{
									HX_STACK_LINE(653)
									if ((fsttime)){
										struct _Function_9_1{
											inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
												{
													HX_STACK_LINE(654)
													bool weak = false;		HX_STACK_VAR(weak,"weak");
													HX_STACK_LINE(654)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(654)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													struct _Function_10_1{
														inline static ::nape::geom::Vec2 Block( ::nape::geom::Vec2 &p,bool &weak){
															HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
															{
																struct _Function_11_1{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
																		{
																			HX_STACK_LINE(654)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(654)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(654)
																			{
																				HX_STACK_LINE(654)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(654)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(654)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(654)
																			return p->zpp_inner->x;
																		}
																		return null();
																	}
																};
																struct _Function_11_2{
																	inline static Float Block( ::nape::geom::Vec2 &p){
																		HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
																		{
																			HX_STACK_LINE(654)
																			if ((p->zpp_disp)){
																				HX_STACK_LINE(654)
																				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																			}
																			HX_STACK_LINE(654)
																			{
																				HX_STACK_LINE(654)
																				::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
																				HX_STACK_LINE(654)
																				if (((_this->_validate_dyn() != null()))){
																					HX_STACK_LINE(654)
																					_this->_validate();
																				}
																			}
																			HX_STACK_LINE(654)
																			return p->zpp_inner->y;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(654)
																Float x = _Function_11_1::Block(p);		HX_STACK_VAR(x,"x");
																Float y = _Function_11_2::Block(p);		HX_STACK_VAR(y,"y");
																HX_STACK_LINE(654)
																if (((bool((x != x)) || bool((y != y))))){
																	HX_STACK_LINE(654)
																	hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																}
																HX_STACK_LINE(654)
																::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
																HX_STACK_LINE(654)
																if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
																	HX_STACK_LINE(654)
																	ret = ::nape::geom::Vec2_obj::__new(null(),null());
																}
																else{
																	HX_STACK_LINE(654)
																	ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
																	HX_STACK_LINE(654)
																	::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
																	HX_STACK_LINE(654)
																	ret->zpp_pool = null();
																	HX_STACK_LINE(654)
																	ret->zpp_disp = false;
																	HX_STACK_LINE(654)
																	if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
																		HX_STACK_LINE(654)
																		::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
																	}
																}
																HX_STACK_LINE(654)
																if (((ret->zpp_inner == null()))){
																	struct _Function_12_1{
																		inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
																			{
																				HX_STACK_LINE(654)
																				bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
																				HX_STACK_LINE(654)
																				::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(654)
																				{
																					HX_STACK_LINE(654)
																					if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																						HX_STACK_LINE(654)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(654)
																						ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																						HX_STACK_LINE(654)
																						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(654)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(654)
																					ret1->weak = false;
																				}
																				HX_STACK_LINE(654)
																				ret1->_immutable = immutable;
																				HX_STACK_LINE(654)
																				{
																					HX_STACK_LINE(654)
																					ret1->x = x;
																					HX_STACK_LINE(654)
																					ret1->y = y;
																					HX_STACK_LINE(654)
																					{
																					}
																					HX_STACK_LINE(654)
																					{
																					}
																				}
																				HX_STACK_LINE(654)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(654)
																	ret->zpp_inner = _Function_12_1::Block(x,y);
																	HX_STACK_LINE(654)
																	ret->zpp_inner->outer = ret;
																}
																else{
																	HX_STACK_LINE(654)
																	if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																		HX_STACK_LINE(654)
																		hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																	}
																	HX_STACK_LINE(654)
																	{
																		HX_STACK_LINE(654)
																		::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																		HX_STACK_LINE(654)
																		if ((_this->_immutable)){
																			HX_STACK_LINE(654)
																			hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
																		}
																		HX_STACK_LINE(654)
																		if (((_this->_isimmutable_dyn() != null()))){
																			HX_STACK_LINE(654)
																			_this->_isimmutable();
																		}
																	}
																	HX_STACK_LINE(654)
																	if (((bool((x != x)) || bool((y != y))))){
																		HX_STACK_LINE(654)
																		hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
																	}
																	struct _Function_12_1{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
																			{
																				HX_STACK_LINE(654)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(654)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(654)
																				{
																					HX_STACK_LINE(654)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(654)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(654)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(654)
																				return ret->zpp_inner->x;
																			}
																			return null();
																		}
																	};
																	struct _Function_12_2{
																		inline static Float Block( ::nape::geom::Vec2 &ret){
																			HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",654);
																			{
																				HX_STACK_LINE(654)
																				if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																					HX_STACK_LINE(654)
																					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
																				}
																				HX_STACK_LINE(654)
																				{
																					HX_STACK_LINE(654)
																					::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																					HX_STACK_LINE(654)
																					if (((_this->_validate_dyn() != null()))){
																						HX_STACK_LINE(654)
																						_this->_validate();
																					}
																				}
																				HX_STACK_LINE(654)
																				return ret->zpp_inner->y;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(654)
																	if ((!(((bool((_Function_12_1::Block(ret) == x)) && bool((_Function_12_2::Block(ret) == y))))))){
																		HX_STACK_LINE(654)
																		{
																			HX_STACK_LINE(654)
																			ret->zpp_inner->x = x;
																			HX_STACK_LINE(654)
																			ret->zpp_inner->y = y;
																			HX_STACK_LINE(654)
																			{
																			}
																			HX_STACK_LINE(654)
																			{
																			}
																		}
																		HX_STACK_LINE(654)
																		{
																			HX_STACK_LINE(654)
																			::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																			HX_STACK_LINE(654)
																			if (((_this->_invalidate_dyn() != null()))){
																				HX_STACK_LINE(654)
																				_this->_invalidate(_this);
																			}
																		}
																	}
																	HX_STACK_LINE(654)
																	ret;
																}
																HX_STACK_LINE(654)
																ret->zpp_inner->weak = weak;
																HX_STACK_LINE(654)
																return ret;
															}
															return null();
														}
													};
													HX_STACK_LINE(654)
													return _Function_10_1::Block(p,weak);
												}
												return null();
											}
										};
										HX_STACK_LINE(654)
										fst = _Function_9_1::Block(p);
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",655);
												{
													HX_STACK_LINE(655)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(655)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(655)
													{
														HX_STACK_LINE(655)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(655)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(655)
															_this->_validate();
														}
													}
													HX_STACK_LINE(655)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_3{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",655);
												{
													HX_STACK_LINE(655)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(655)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(655)
													{
														HX_STACK_LINE(655)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(655)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(655)
															_this->_validate();
														}
													}
													HX_STACK_LINE(655)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(655)
										g->moveTo(_Function_9_2::Block(p),_Function_9_3::Block(p));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
												{
													HX_STACK_LINE(657)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(657)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													return p->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &p){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",657);
												{
													HX_STACK_LINE(657)
													if (((bool((p != null())) && bool(p->zpp_disp)))){
														HX_STACK_LINE(657)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(657)
													{
														HX_STACK_LINE(657)
														::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(657)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(657)
															_this->_validate();
														}
													}
													HX_STACK_LINE(657)
													return p->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(657)
										g->lineTo(_Function_9_1::Block(p),_Function_9_2::Block(p));
									}
									HX_STACK_LINE(658)
									fsttime = false;
								}
								HX_STACK_LINE(660)
								{
									HX_STACK_LINE(660)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(660)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(660)
									{
										HX_STACK_LINE(660)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(660)
										if ((_this->_immutable)){
											HX_STACK_LINE(660)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(660)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(660)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(660)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(660)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(660)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(660)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(660)
									p->zpp_inner = null();
									HX_STACK_LINE(660)
									{
										HX_STACK_LINE(660)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(660)
										{
										}
										HX_STACK_LINE(660)
										o->zpp_pool = null();
										HX_STACK_LINE(660)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(660)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(660)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(660)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(660)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(660)
									{
										HX_STACK_LINE(660)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(660)
										{
										}
										HX_STACK_LINE(660)
										{
											HX_STACK_LINE(660)
											if (((o->outer != null()))){
												HX_STACK_LINE(660)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(660)
												o->outer = null();
											}
											HX_STACK_LINE(660)
											o->_isimmutable = null();
											HX_STACK_LINE(660)
											o->_validate = null();
											HX_STACK_LINE(660)
											o->_invalidate = null();
										}
										HX_STACK_LINE(660)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(660)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(665)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",671);
					{
						HX_STACK_LINE(671)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(671)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(671)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(671)
								_this->_validate();
							}
						}
						HX_STACK_LINE(671)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",671);
					{
						HX_STACK_LINE(671)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(671)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(671)
						{
							HX_STACK_LINE(671)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(671)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(671)
								_this->_validate();
							}
						}
						HX_STACK_LINE(671)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(671)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(672)
			{
				HX_STACK_LINE(672)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(672)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(672)
				{
					HX_STACK_LINE(672)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(672)
					if ((_this->_immutable)){
						HX_STACK_LINE(672)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(672)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(672)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(672)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(672)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(672)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(672)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(672)
				fst->zpp_inner = null();
				HX_STACK_LINE(672)
				{
					HX_STACK_LINE(672)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(672)
					{
					}
					HX_STACK_LINE(672)
					o->zpp_pool = null();
					HX_STACK_LINE(672)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(672)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(672)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(672)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(672)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(672)
				{
					HX_STACK_LINE(672)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(672)
					{
					}
					HX_STACK_LINE(672)
					{
						HX_STACK_LINE(672)
						if (((o->outer != null()))){
							HX_STACK_LINE(672)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(672)
							o->outer = null();
						}
						HX_STACK_LINE(672)
						o->_isimmutable = null();
						HX_STACK_LINE(672)
						o->_validate = null();
						HX_STACK_LINE(672)
						o->_invalidate = null();
					}
					HX_STACK_LINE(672)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(672)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		else{
			HX_STACK_LINE(675)
			if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(677)
				Dynamic lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(678)
				{
					HX_STACK_LINE(678)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(678)
					while(((_g < lv->__Field(HX_CSTRING("length"),true)))){
						HX_STACK_LINE(678)
						Dynamic vite = lv->__GetItem(_g);		HX_STACK_VAR(vite,"vite");
						HX_STACK_LINE(678)
						++(_g);
						HX_STACK_LINE(680)
						if (((vite == null()))){
							HX_STACK_LINE(680)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains null objects"));
						}
						HX_STACK_LINE(683)
						if ((!(::Std_obj::is(vite,hx::ClassOf< ::nape::geom::Vec2 >())))){
							HX_STACK_LINE(683)
							hx::Throw (HX_CSTRING("Error: Array<Vec2> contains non Vec2 objects"));
						}
						HX_STACK_LINE(685)
						::nape::geom::Vec2 p = vite;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(686)
						if (((bool((p != null())) && bool(p->zpp_disp)))){
							HX_STACK_LINE(688)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(691)
						{
							HX_STACK_LINE(692)
							::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(693)
							if ((fsttime)){
								HX_STACK_LINE(694)
								fst = v;
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",695);
										{
											HX_STACK_LINE(695)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(695)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(695)
											{
												HX_STACK_LINE(695)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(695)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(695)
													_this->_validate();
												}
											}
											HX_STACK_LINE(695)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",695);
										{
											HX_STACK_LINE(695)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(695)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(695)
											{
												HX_STACK_LINE(695)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(695)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(695)
													_this->_validate();
												}
											}
											HX_STACK_LINE(695)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(695)
								g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							else{
								struct _Function_7_1{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",697);
										{
											HX_STACK_LINE(697)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(697)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(697)
											{
												HX_STACK_LINE(697)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(697)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(697)
													_this->_validate();
												}
											}
											HX_STACK_LINE(697)
											return v->zpp_inner->x;
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( ::nape::geom::Vec2 &v){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",697);
										{
											HX_STACK_LINE(697)
											if (((bool((v != null())) && bool(v->zpp_disp)))){
												HX_STACK_LINE(697)
												hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
											}
											HX_STACK_LINE(697)
											{
												HX_STACK_LINE(697)
												::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(697)
												if (((_this->_validate_dyn() != null()))){
													HX_STACK_LINE(697)
													_this->_validate();
												}
											}
											HX_STACK_LINE(697)
											return v->zpp_inner->y;
										}
										return null();
									}
								};
								HX_STACK_LINE(697)
								g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
							}
							HX_STACK_LINE(698)
							if ((!(fsttime))){
								HX_STACK_LINE(698)
								if (((bool((v != null())) && bool(v->zpp_disp)))){
									HX_STACK_LINE(698)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(698)
									if ((_this->_immutable)){
										HX_STACK_LINE(698)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(698)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(698)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(698)
								if ((v->zpp_inner->_inuse)){
									HX_STACK_LINE(698)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(698)
								::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(698)
								v->zpp_inner->outer = null();
								HX_STACK_LINE(698)
								v->zpp_inner = null();
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(698)
									{
									}
									HX_STACK_LINE(698)
									o->zpp_pool = null();
									HX_STACK_LINE(698)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(698)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(698)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(698)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(698)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(698)
									{
									}
									HX_STACK_LINE(698)
									{
										HX_STACK_LINE(698)
										if (((o->outer != null()))){
											HX_STACK_LINE(698)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(698)
											o->outer = null();
										}
										HX_STACK_LINE(698)
										o->_isimmutable = null();
										HX_STACK_LINE(698)
										o->_validate = null();
										HX_STACK_LINE(698)
										o->_invalidate = null();
									}
									HX_STACK_LINE(698)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(698)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(699)
							fsttime = false;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(728)
				if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
					HX_STACK_LINE(729)
					::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
					HX_STACK_LINE(730)
					for(::cpp::FastIterator_obj< ::nape::geom::Vec2 > *__it = ::cpp::CreateFastIterator< ::nape::geom::Vec2 >(lv->iterator());  __it->hasNext(); ){
						::nape::geom::Vec2 p = __it->next();
						{
							HX_STACK_LINE(732)
							if (((p == null()))){
								HX_STACK_LINE(732)
								hx::Throw (HX_CSTRING("Error: Vec2List contains null objects"));
							}
							HX_STACK_LINE(734)
							if (((bool((p != null())) && bool(p->zpp_disp)))){
								HX_STACK_LINE(736)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(739)
							{
								HX_STACK_LINE(740)
								::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(741)
								if ((fsttime)){
									HX_STACK_LINE(742)
									fst = v;
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",743);
											{
												HX_STACK_LINE(743)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(743)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(743)
												{
													HX_STACK_LINE(743)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(743)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(743)
														_this->_validate();
													}
												}
												HX_STACK_LINE(743)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",743);
											{
												HX_STACK_LINE(743)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(743)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(743)
												{
													HX_STACK_LINE(743)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(743)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(743)
														_this->_validate();
													}
												}
												HX_STACK_LINE(743)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(743)
									g->moveTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								else{
									struct _Function_7_1{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",745);
											{
												HX_STACK_LINE(745)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(745)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(745)
												{
													HX_STACK_LINE(745)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(745)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(745)
														_this->_validate();
													}
												}
												HX_STACK_LINE(745)
												return v->zpp_inner->x;
											}
											return null();
										}
									};
									struct _Function_7_2{
										inline static Float Block( ::nape::geom::Vec2 &v){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",745);
											{
												HX_STACK_LINE(745)
												if (((bool((v != null())) && bool(v->zpp_disp)))){
													HX_STACK_LINE(745)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(745)
												{
													HX_STACK_LINE(745)
													::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(745)
													if (((_this->_validate_dyn() != null()))){
														HX_STACK_LINE(745)
														_this->_validate();
													}
												}
												HX_STACK_LINE(745)
												return v->zpp_inner->y;
											}
											return null();
										}
									};
									HX_STACK_LINE(745)
									g->lineTo(_Function_7_1::Block(v),_Function_7_2::Block(v));
								}
								HX_STACK_LINE(746)
								if ((!(fsttime))){
									HX_STACK_LINE(746)
									if (((bool((v != null())) && bool(v->zpp_disp)))){
										HX_STACK_LINE(746)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(746)
										if ((_this->_immutable)){
											HX_STACK_LINE(746)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(746)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(746)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(746)
									if ((v->zpp_inner->_inuse)){
										HX_STACK_LINE(746)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(746)
									::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(746)
									v->zpp_inner->outer = null();
									HX_STACK_LINE(746)
									v->zpp_inner = null();
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(746)
										{
										}
										HX_STACK_LINE(746)
										o->zpp_pool = null();
										HX_STACK_LINE(746)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(746)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(746)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(746)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(746)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(746)
									{
										HX_STACK_LINE(746)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(746)
										{
										}
										HX_STACK_LINE(746)
										{
											HX_STACK_LINE(746)
											if (((o->outer != null()))){
												HX_STACK_LINE(746)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(746)
												o->outer = null();
											}
											HX_STACK_LINE(746)
											o->_isimmutable = null();
											HX_STACK_LINE(746)
											o->_validate = null();
											HX_STACK_LINE(746)
											o->_invalidate = null();
										}
										HX_STACK_LINE(746)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(746)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
								HX_STACK_LINE(747)
								fsttime = false;
							}
						}
;
					}
				}
				else{
					HX_STACK_LINE(751)
					if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::GeomPoly >()))){
						HX_STACK_LINE(752)
						::nape::geom::GeomPoly lv = polygon;		HX_STACK_VAR(lv,"lv");
						HX_STACK_LINE(753)
						if (((bool((lv != null())) && bool(lv->zpp_disp)))){
							HX_STACK_LINE(755)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("GeomPoly")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(758)
						::zpp_nape::geom::ZPP_GeomVert verts = lv->zpp_inner->vertices;		HX_STACK_VAR(verts,"verts");
						HX_STACK_LINE(759)
						if (((verts != null()))){
							HX_STACK_LINE(760)
							::zpp_nape::geom::ZPP_GeomVert vite = verts;		HX_STACK_VAR(vite,"vite");
							HX_STACK_LINE(761)
							do{
								struct _Function_7_1{
									inline static ::nape::geom::Vec2 Block( ::zpp_nape::geom::ZPP_GeomVert &vite){
										HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",762);
										{
											HX_STACK_LINE(762)
											Float x = vite->x;		HX_STACK_VAR(x,"x");
											Float y = vite->y;		HX_STACK_VAR(y,"y");
											bool weak = false;		HX_STACK_VAR(weak,"weak");
											HX_STACK_LINE(762)
											if (((bool((x != x)) || bool((y != y))))){
												HX_STACK_LINE(762)
												hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
											}
											HX_STACK_LINE(762)
											::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
											HX_STACK_LINE(762)
											if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
												HX_STACK_LINE(762)
												ret = ::nape::geom::Vec2_obj::__new(null(),null());
											}
											else{
												HX_STACK_LINE(762)
												ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
												HX_STACK_LINE(762)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
												HX_STACK_LINE(762)
												ret->zpp_pool = null();
												HX_STACK_LINE(762)
												ret->zpp_disp = false;
												HX_STACK_LINE(762)
												if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
													HX_STACK_LINE(762)
													::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
												}
											}
											HX_STACK_LINE(762)
											if (((ret->zpp_inner == null()))){
												struct _Function_9_1{
													inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x,Float &y){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",762);
														{
															HX_STACK_LINE(762)
															bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
															HX_STACK_LINE(762)
															::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(762)
															{
																HX_STACK_LINE(762)
																if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
																	HX_STACK_LINE(762)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
																}
																else{
																	HX_STACK_LINE(762)
																	ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
																	HX_STACK_LINE(762)
																	::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(762)
																	ret1->next = null();
																}
																HX_STACK_LINE(762)
																ret1->weak = false;
															}
															HX_STACK_LINE(762)
															ret1->_immutable = immutable;
															HX_STACK_LINE(762)
															{
																HX_STACK_LINE(762)
																ret1->x = x;
																HX_STACK_LINE(762)
																ret1->y = y;
																HX_STACK_LINE(762)
																{
																}
																HX_STACK_LINE(762)
																{
																}
															}
															HX_STACK_LINE(762)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(762)
												ret->zpp_inner = _Function_9_1::Block(x,y);
												HX_STACK_LINE(762)
												ret->zpp_inner->outer = ret;
											}
											else{
												HX_STACK_LINE(762)
												if (((bool((ret != null())) && bool(ret->zpp_disp)))){
													HX_STACK_LINE(762)
													hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
												}
												HX_STACK_LINE(762)
												{
													HX_STACK_LINE(762)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(762)
													if ((_this->_immutable)){
														HX_STACK_LINE(762)
														hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
													}
													HX_STACK_LINE(762)
													if (((_this->_isimmutable_dyn() != null()))){
														HX_STACK_LINE(762)
														_this->_isimmutable();
													}
												}
												HX_STACK_LINE(762)
												if (((bool((x != x)) || bool((y != y))))){
													HX_STACK_LINE(762)
													hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
												}
												struct _Function_9_1{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",762);
														{
															HX_STACK_LINE(762)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(762)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(762)
															{
																HX_STACK_LINE(762)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(762)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(762)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(762)
															return ret->zpp_inner->x;
														}
														return null();
													}
												};
												struct _Function_9_2{
													inline static Float Block( ::nape::geom::Vec2 &ret){
														HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",762);
														{
															HX_STACK_LINE(762)
															if (((bool((ret != null())) && bool(ret->zpp_disp)))){
																HX_STACK_LINE(762)
																hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
															}
															HX_STACK_LINE(762)
															{
																HX_STACK_LINE(762)
																::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
																HX_STACK_LINE(762)
																if (((_this->_validate_dyn() != null()))){
																	HX_STACK_LINE(762)
																	_this->_validate();
																}
															}
															HX_STACK_LINE(762)
															return ret->zpp_inner->y;
														}
														return null();
													}
												};
												HX_STACK_LINE(762)
												if ((!(((bool((_Function_9_1::Block(ret) == x)) && bool((_Function_9_2::Block(ret) == y))))))){
													HX_STACK_LINE(762)
													{
														HX_STACK_LINE(762)
														ret->zpp_inner->x = x;
														HX_STACK_LINE(762)
														ret->zpp_inner->y = y;
														HX_STACK_LINE(762)
														{
														}
														HX_STACK_LINE(762)
														{
														}
													}
													HX_STACK_LINE(762)
													{
														HX_STACK_LINE(762)
														::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(762)
														if (((_this->_invalidate_dyn() != null()))){
															HX_STACK_LINE(762)
															_this->_invalidate(_this);
														}
													}
												}
												HX_STACK_LINE(762)
												ret;
											}
											HX_STACK_LINE(762)
											ret->zpp_inner->weak = weak;
											HX_STACK_LINE(762)
											return ret;
										}
										return null();
									}
								};
								HX_STACK_LINE(762)
								::nape::geom::Vec2 p = _Function_7_1::Block(vite);		HX_STACK_VAR(p,"p");
								HX_STACK_LINE(763)
								vite = vite->next;
								HX_STACK_LINE(764)
								{
									HX_STACK_LINE(765)
									::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p,null(),null());		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(766)
									if ((fsttime)){
										HX_STACK_LINE(767)
										fst = v;
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",768);
												{
													HX_STACK_LINE(768)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(768)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(768)
													{
														HX_STACK_LINE(768)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(768)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(768)
															_this->_validate();
														}
													}
													HX_STACK_LINE(768)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",768);
												{
													HX_STACK_LINE(768)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(768)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(768)
													{
														HX_STACK_LINE(768)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(768)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(768)
															_this->_validate();
														}
													}
													HX_STACK_LINE(768)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(768)
										g->moveTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									else{
										struct _Function_9_1{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",770);
												{
													HX_STACK_LINE(770)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(770)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(770)
													{
														HX_STACK_LINE(770)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(770)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(770)
															_this->_validate();
														}
													}
													HX_STACK_LINE(770)
													return v->zpp_inner->x;
												}
												return null();
											}
										};
										struct _Function_9_2{
											inline static Float Block( ::nape::geom::Vec2 &v){
												HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",770);
												{
													HX_STACK_LINE(770)
													if (((bool((v != null())) && bool(v->zpp_disp)))){
														HX_STACK_LINE(770)
														hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
													}
													HX_STACK_LINE(770)
													{
														HX_STACK_LINE(770)
														::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
														HX_STACK_LINE(770)
														if (((_this->_validate_dyn() != null()))){
															HX_STACK_LINE(770)
															_this->_validate();
														}
													}
													HX_STACK_LINE(770)
													return v->zpp_inner->y;
												}
												return null();
											}
										};
										HX_STACK_LINE(770)
										g->lineTo(_Function_9_1::Block(v),_Function_9_2::Block(v));
									}
									HX_STACK_LINE(771)
									if ((!(fsttime))){
										HX_STACK_LINE(771)
										if (((bool((v != null())) && bool(v->zpp_disp)))){
											HX_STACK_LINE(771)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(771)
											if ((_this->_immutable)){
												HX_STACK_LINE(771)
												hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
											}
											HX_STACK_LINE(771)
											if (((_this->_isimmutable_dyn() != null()))){
												HX_STACK_LINE(771)
												_this->_isimmutable();
											}
										}
										HX_STACK_LINE(771)
										if ((v->zpp_inner->_inuse)){
											HX_STACK_LINE(771)
											hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
										}
										HX_STACK_LINE(771)
										::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
										HX_STACK_LINE(771)
										v->zpp_inner->outer = null();
										HX_STACK_LINE(771)
										v->zpp_inner = null();
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(771)
											{
											}
											HX_STACK_LINE(771)
											o->zpp_pool = null();
											HX_STACK_LINE(771)
											if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
												HX_STACK_LINE(771)
												::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
											}
											else{
												HX_STACK_LINE(771)
												::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
											}
											HX_STACK_LINE(771)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
											HX_STACK_LINE(771)
											o->zpp_disp = true;
										}
										HX_STACK_LINE(771)
										{
											HX_STACK_LINE(771)
											::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
											HX_STACK_LINE(771)
											{
											}
											HX_STACK_LINE(771)
											{
												HX_STACK_LINE(771)
												if (((o->outer != null()))){
													HX_STACK_LINE(771)
													o->outer->zpp_inner = null();
													HX_STACK_LINE(771)
													o->outer = null();
												}
												HX_STACK_LINE(771)
												o->_isimmutable = null();
												HX_STACK_LINE(771)
												o->_validate = null();
												HX_STACK_LINE(771)
												o->_invalidate = null();
											}
											HX_STACK_LINE(771)
											o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(771)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
										}
									}
									HX_STACK_LINE(772)
									fsttime = false;
								}
								HX_STACK_LINE(774)
								{
									HX_STACK_LINE(774)
									if (((bool((p != null())) && bool(p->zpp_disp)))){
										HX_STACK_LINE(774)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2 _this = p->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(774)
										if ((_this->_immutable)){
											HX_STACK_LINE(774)
											hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
										}
										HX_STACK_LINE(774)
										if (((_this->_isimmutable_dyn() != null()))){
											HX_STACK_LINE(774)
											_this->_isimmutable();
										}
									}
									HX_STACK_LINE(774)
									if ((p->zpp_inner->_inuse)){
										HX_STACK_LINE(774)
										hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
									}
									HX_STACK_LINE(774)
									::zpp_nape::geom::ZPP_Vec2 inner = p->zpp_inner;		HX_STACK_VAR(inner,"inner");
									HX_STACK_LINE(774)
									p->zpp_inner->outer = null();
									HX_STACK_LINE(774)
									p->zpp_inner = null();
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::nape::geom::Vec2 o = p;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(774)
										{
										}
										HX_STACK_LINE(774)
										o->zpp_pool = null();
										HX_STACK_LINE(774)
										if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
											HX_STACK_LINE(774)
											::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
										}
										else{
											HX_STACK_LINE(774)
											::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
										}
										HX_STACK_LINE(774)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
										HX_STACK_LINE(774)
										o->zpp_disp = true;
									}
									HX_STACK_LINE(774)
									{
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(774)
										{
										}
										HX_STACK_LINE(774)
										{
											HX_STACK_LINE(774)
											if (((o->outer != null()))){
												HX_STACK_LINE(774)
												o->outer->zpp_inner = null();
												HX_STACK_LINE(774)
												o->outer = null();
											}
											HX_STACK_LINE(774)
											o->_isimmutable = null();
											HX_STACK_LINE(774)
											o->_validate = null();
											HX_STACK_LINE(774)
											o->_invalidate = null();
										}
										HX_STACK_LINE(774)
										o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
										HX_STACK_LINE(774)
										::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
									}
								}
							}
while(((vite != verts)));
						}
					}
					else{
						HX_STACK_LINE(779)
						hx::Throw (HX_CSTRING("Error: Invalid type for polygon object, should be Array<Vec2>, Vec2List, GeomPoly or for flash10+ flash.Vector<Vec2>"));
					}
				}
			}
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",785);
					{
						HX_STACK_LINE(785)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(785)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(785)
						{
							HX_STACK_LINE(785)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(785)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(785)
								_this->_validate();
							}
						}
						HX_STACK_LINE(785)
						return fst->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &fst){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",785);
					{
						HX_STACK_LINE(785)
						if (((bool((fst != null())) && bool(fst->zpp_disp)))){
							HX_STACK_LINE(785)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(785)
						{
							HX_STACK_LINE(785)
							::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(785)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(785)
								_this->_validate();
							}
						}
						HX_STACK_LINE(785)
						return fst->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(785)
			g->lineTo(_Function_2_1::Block(fst),_Function_2_2::Block(fst));
			HX_STACK_LINE(786)
			{
				HX_STACK_LINE(786)
				if (((bool((fst != null())) && bool(fst->zpp_disp)))){
					HX_STACK_LINE(786)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(786)
				{
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2 _this = fst->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(786)
					if ((_this->_immutable)){
						HX_STACK_LINE(786)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(786)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(786)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(786)
				if ((fst->zpp_inner->_inuse)){
					HX_STACK_LINE(786)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(786)
				::zpp_nape::geom::ZPP_Vec2 inner = fst->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(786)
				fst->zpp_inner->outer = null();
				HX_STACK_LINE(786)
				fst->zpp_inner = null();
				HX_STACK_LINE(786)
				{
					HX_STACK_LINE(786)
					::nape::geom::Vec2 o = fst;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(786)
					{
					}
					HX_STACK_LINE(786)
					o->zpp_pool = null();
					HX_STACK_LINE(786)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(786)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(786)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(786)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(786)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(786)
				{
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(786)
					{
					}
					HX_STACK_LINE(786)
					{
						HX_STACK_LINE(786)
						if (((o->outer != null()))){
							HX_STACK_LINE(786)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(786)
							o->outer = null();
						}
						HX_STACK_LINE(786)
						o->_isimmutable = null();
						HX_STACK_LINE(786)
						o->_validate = null();
						HX_STACK_LINE(786)
						o->_invalidate = null();
					}
					HX_STACK_LINE(786)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(786)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(788)
		if ((::Std_obj::is(polygon,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(790)
			Array< ::nape::geom::Vec2 > lv = polygon;		HX_STACK_VAR(lv,"lv");
			HX_STACK_LINE(791)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(792)
			while(((i < lv->length))){
				HX_STACK_LINE(793)
				::nape::geom::Vec2 cur = lv->__get(i);		HX_STACK_VAR(cur,"cur");
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &cur){
						HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",797);
						{
							HX_STACK_LINE(798)
							{
								HX_STACK_LINE(798)
								if (((bool((cur != null())) && bool(cur->zpp_disp)))){
									HX_STACK_LINE(798)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(798)
								{
									HX_STACK_LINE(798)
									::zpp_nape::geom::ZPP_Vec2 _this = cur->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(798)
									if ((_this->_immutable)){
										HX_STACK_LINE(798)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(798)
									if (((_this->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(798)
										_this->_isimmutable();
									}
								}
								HX_STACK_LINE(798)
								if ((cur->zpp_inner->_inuse)){
									HX_STACK_LINE(798)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(798)
								::zpp_nape::geom::ZPP_Vec2 inner = cur->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(798)
								cur->zpp_inner->outer = null();
								HX_STACK_LINE(798)
								cur->zpp_inner = null();
								HX_STACK_LINE(798)
								{
									HX_STACK_LINE(798)
									::nape::geom::Vec2 o = cur;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(798)
									{
									}
									HX_STACK_LINE(798)
									o->zpp_pool = null();
									HX_STACK_LINE(798)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(798)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(798)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(798)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(798)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(798)
								{
									HX_STACK_LINE(798)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(798)
									{
									}
									HX_STACK_LINE(798)
									{
										HX_STACK_LINE(798)
										if (((o->outer != null()))){
											HX_STACK_LINE(798)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(798)
											o->outer = null();
										}
										HX_STACK_LINE(798)
										o->_isimmutable = null();
										HX_STACK_LINE(798)
										o->_validate = null();
										HX_STACK_LINE(798)
										o->_invalidate = null();
									}
									HX_STACK_LINE(798)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(798)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(799)
							return true;
						}
						return null();
					}
				};
				HX_STACK_LINE(794)
				if (((  ((cur->zpp_inner->weak)) ? bool(_Function_3_1::Block(cur)) : bool(false) ))){
					HX_STACK_LINE(805)
					lv->splice(i,(int)1);
					HX_STACK_LINE(806)
					continue;
				}
				HX_STACK_LINE(808)
				(i)++;
			}
		}
		else{
			HX_STACK_LINE(836)
			if ((::Std_obj::is(polygon,hx::ClassOf< ::nape::geom::Vec2List >()))){
				HX_STACK_LINE(837)
				::nape::geom::Vec2List lv = polygon;		HX_STACK_VAR(lv,"lv");
				HX_STACK_LINE(838)
				if (((lv->zpp_inner->_validate_dyn() != null()))){
					HX_STACK_LINE(838)
					lv->zpp_inner->_validate();
				}
				HX_STACK_LINE(839)
				::zpp_nape::util::ZNPList_ZPP_Vec2 ins = lv->zpp_inner->inner;		HX_STACK_VAR(ins,"ins");
				HX_STACK_LINE(840)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(841)
				::zpp_nape::util::ZNPNode_ZPP_Vec2 cur = ins->head;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(842)
				while(((cur != null()))){
					HX_STACK_LINE(843)
					::zpp_nape::geom::ZPP_Vec2 x = cur->elt;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(844)
					if ((x->outer->zpp_inner->weak)){
						HX_STACK_LINE(847)
						cur = ins->erase(pre);
						HX_STACK_LINE(848)
						if ((x->outer->zpp_inner->weak)){
							HX_STACK_LINE(852)
							{
								HX_STACK_LINE(852)
								::nape::geom::Vec2 _this = x->outer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(852)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(852)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(852)
								{
									HX_STACK_LINE(852)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(852)
									if ((_this1->_immutable)){
										HX_STACK_LINE(852)
										hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
									}
									HX_STACK_LINE(852)
									if (((_this1->_isimmutable_dyn() != null()))){
										HX_STACK_LINE(852)
										_this1->_isimmutable();
									}
								}
								HX_STACK_LINE(852)
								if ((_this->zpp_inner->_inuse)){
									HX_STACK_LINE(852)
									hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
								}
								HX_STACK_LINE(852)
								::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(852)
								_this->zpp_inner->outer = null();
								HX_STACK_LINE(852)
								_this->zpp_inner = null();
								HX_STACK_LINE(852)
								{
									HX_STACK_LINE(852)
									::nape::geom::Vec2 o = _this;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(852)
									{
									}
									HX_STACK_LINE(852)
									o->zpp_pool = null();
									HX_STACK_LINE(852)
									if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
										HX_STACK_LINE(852)
										::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
									}
									else{
										HX_STACK_LINE(852)
										::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
									}
									HX_STACK_LINE(852)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
									HX_STACK_LINE(852)
									o->zpp_disp = true;
								}
								HX_STACK_LINE(852)
								{
									HX_STACK_LINE(852)
									::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(852)
									{
									}
									HX_STACK_LINE(852)
									{
										HX_STACK_LINE(852)
										if (((o->outer != null()))){
											HX_STACK_LINE(852)
											o->outer->zpp_inner = null();
											HX_STACK_LINE(852)
											o->outer = null();
										}
										HX_STACK_LINE(852)
										o->_isimmutable = null();
										HX_STACK_LINE(852)
										o->_validate = null();
										HX_STACK_LINE(852)
										o->_invalidate = null();
									}
									HX_STACK_LINE(852)
									o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(852)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
								}
							}
							HX_STACK_LINE(853)
							true;
						}
						else{
							HX_STACK_LINE(855)
							false;
						}
					}
					else{
						HX_STACK_LINE(861)
						pre = cur;
						HX_STACK_LINE(862)
						cur = cur->next;
					}
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawFilledCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledCircle","nape/util/ShapeDebug.hx",517);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(519)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(519)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(521)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(523)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(527)
		if (((position == null()))){
			HX_STACK_LINE(527)
			hx::Throw (HX_CSTRING("Error: drawFilledCircle::position cannot be null"));
		}
		HX_STACK_LINE(528)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(528)
			hx::Throw (HX_CSTRING("Error: drawFilledCircle::radius must be >=0"));
		}
		HX_STACK_LINE(530)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(531)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(532)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(533)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",534);
					{
						HX_STACK_LINE(534)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(534)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(534)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(534)
								_this->_validate();
							}
						}
						HX_STACK_LINE(534)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",534);
					{
						HX_STACK_LINE(534)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(534)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(534)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(534)
								_this->_validate();
							}
						}
						HX_STACK_LINE(534)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(534)
			g->drawCircle(_Function_2_1::Block(position),_Function_2_2::Block(position),radius);
			HX_STACK_LINE(535)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(539)
				{
					HX_STACK_LINE(539)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(539)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(539)
					{
						HX_STACK_LINE(539)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(539)
						if ((_this->_immutable)){
							HX_STACK_LINE(539)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(539)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(539)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(539)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(539)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(539)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(539)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(539)
					position->zpp_inner = null();
					HX_STACK_LINE(539)
					{
						HX_STACK_LINE(539)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(539)
						{
						}
						HX_STACK_LINE(539)
						o->zpp_pool = null();
						HX_STACK_LINE(539)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(539)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(539)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(539)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(539)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(539)
					{
						HX_STACK_LINE(539)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(539)
						{
						}
						HX_STACK_LINE(539)
						{
							HX_STACK_LINE(539)
							if (((o->outer != null()))){
								HX_STACK_LINE(539)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(539)
								o->outer = null();
							}
							HX_STACK_LINE(539)
							o->_isimmutable = null();
							HX_STACK_LINE(539)
							o->_validate = null();
							HX_STACK_LINE(539)
							o->_invalidate = null();
						}
						HX_STACK_LINE(539)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(539)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(540)
				true;
			}
			else{
				HX_STACK_LINE(542)
				false;
			}
		}
		else{
			HX_STACK_LINE(548)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",549);
					{
						HX_STACK_LINE(549)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(549)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(549)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(549)
								_this->_validate();
							}
						}
						HX_STACK_LINE(549)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",549);
					{
						HX_STACK_LINE(549)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(549)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(549)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(549)
								_this->_validate();
							}
						}
						HX_STACK_LINE(549)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(549)
			g->drawCircle(_Function_2_1::Block(v),_Function_2_2::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(550)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(550)
					if ((_this->_immutable)){
						HX_STACK_LINE(550)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(550)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(550)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(550)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(550)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(550)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(550)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(550)
				v->zpp_inner = null();
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
					}
					HX_STACK_LINE(550)
					o->zpp_pool = null();
					HX_STACK_LINE(550)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(550)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(550)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(550)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(550)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(550)
					{
					}
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						if (((o->outer != null()))){
							HX_STACK_LINE(550)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(550)
							o->outer = null();
						}
						HX_STACK_LINE(550)
						o->_isimmutable = null();
						HX_STACK_LINE(550)
						o->_validate = null();
						HX_STACK_LINE(550)
						o->_invalidate = null();
					}
					HX_STACK_LINE(550)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(550)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(552)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawFilledTriangle( ::nape::geom::Vec2 p0,::nape::geom::Vec2 p1,::nape::geom::Vec2 p2,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawFilledTriangle","nape/util/ShapeDebug.hx",438);
		HX_STACK_THIS(this);
		HX_STACK_ARG(p0,"p0");
		HX_STACK_ARG(p1,"p1");
		HX_STACK_ARG(p2,"p2");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(440)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(440)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(442)
		if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
			HX_STACK_LINE(444)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(447)
		if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
			HX_STACK_LINE(449)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(452)
		if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
			HX_STACK_LINE(454)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(458)
		if (((bool((bool((p0 == null())) || bool((p1 == null())))) || bool((p2 == null()))))){
			HX_STACK_LINE(458)
			hx::Throw (HX_CSTRING("Error: drawFilledTriangle can't use null points"));
		}
		HX_STACK_LINE(460)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(461)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(462)
		g->beginFill((int(colour) & int((int)16777215)),(int)1);
		HX_STACK_LINE(463)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &p0){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",464);
					{
						HX_STACK_LINE(464)
						if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
							HX_STACK_LINE(464)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(464)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(464)
								_this->_validate();
							}
						}
						HX_STACK_LINE(464)
						return p0->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &p0){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",464);
					{
						HX_STACK_LINE(464)
						if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
							HX_STACK_LINE(464)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(464)
						{
							HX_STACK_LINE(464)
							::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(464)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(464)
								_this->_validate();
							}
						}
						HX_STACK_LINE(464)
						return p0->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(464)
			g->moveTo(_Function_2_1::Block(p0),_Function_2_2::Block(p0));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &p1){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",465);
					{
						HX_STACK_LINE(465)
						if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
							HX_STACK_LINE(465)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(465)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(465)
								_this->_validate();
							}
						}
						HX_STACK_LINE(465)
						return p1->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &p1){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",465);
					{
						HX_STACK_LINE(465)
						if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
							HX_STACK_LINE(465)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(465)
						{
							HX_STACK_LINE(465)
							::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(465)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(465)
								_this->_validate();
							}
						}
						HX_STACK_LINE(465)
						return p1->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(465)
			g->lineTo(_Function_2_3::Block(p1),_Function_2_4::Block(p1));
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &p2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",466);
					{
						HX_STACK_LINE(466)
						if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
							HX_STACK_LINE(466)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(466)
						{
							HX_STACK_LINE(466)
							::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(466)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(466)
								_this->_validate();
							}
						}
						HX_STACK_LINE(466)
						return p2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &p2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",466);
					{
						HX_STACK_LINE(466)
						if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
							HX_STACK_LINE(466)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(466)
						{
							HX_STACK_LINE(466)
							::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(466)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(466)
								_this->_validate();
							}
						}
						HX_STACK_LINE(466)
						return p2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(466)
			g->lineTo(_Function_2_5::Block(p2),_Function_2_6::Block(p2));
			HX_STACK_LINE(467)
			if ((p0->zpp_inner->weak)){
				HX_STACK_LINE(471)
				{
					HX_STACK_LINE(471)
					if (((bool((p0 != null())) && bool(p0->zpp_disp)))){
						HX_STACK_LINE(471)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(471)
					{
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_Vec2 _this = p0->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(471)
						if ((_this->_immutable)){
							HX_STACK_LINE(471)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(471)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(471)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(471)
					if ((p0->zpp_inner->_inuse)){
						HX_STACK_LINE(471)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(471)
					::zpp_nape::geom::ZPP_Vec2 inner = p0->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(471)
					p0->zpp_inner->outer = null();
					HX_STACK_LINE(471)
					p0->zpp_inner = null();
					HX_STACK_LINE(471)
					{
						HX_STACK_LINE(471)
						::nape::geom::Vec2 o = p0;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(471)
						{
						}
						HX_STACK_LINE(471)
						o->zpp_pool = null();
						HX_STACK_LINE(471)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(471)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(471)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(471)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(471)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(471)
					{
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(471)
						{
						}
						HX_STACK_LINE(471)
						{
							HX_STACK_LINE(471)
							if (((o->outer != null()))){
								HX_STACK_LINE(471)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(471)
								o->outer = null();
							}
							HX_STACK_LINE(471)
							o->_isimmutable = null();
							HX_STACK_LINE(471)
							o->_validate = null();
							HX_STACK_LINE(471)
							o->_invalidate = null();
						}
						HX_STACK_LINE(471)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(472)
				true;
			}
			else{
				HX_STACK_LINE(474)
				false;
			}
			HX_STACK_LINE(478)
			if ((p1->zpp_inner->weak)){
				HX_STACK_LINE(482)
				{
					HX_STACK_LINE(482)
					if (((bool((p1 != null())) && bool(p1->zpp_disp)))){
						HX_STACK_LINE(482)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 _this = p1->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(482)
						if ((_this->_immutable)){
							HX_STACK_LINE(482)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(482)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(482)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(482)
					if ((p1->zpp_inner->_inuse)){
						HX_STACK_LINE(482)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(482)
					::zpp_nape::geom::ZPP_Vec2 inner = p1->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(482)
					p1->zpp_inner->outer = null();
					HX_STACK_LINE(482)
					p1->zpp_inner = null();
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::nape::geom::Vec2 o = p1;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(482)
						{
						}
						HX_STACK_LINE(482)
						o->zpp_pool = null();
						HX_STACK_LINE(482)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(482)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(482)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(482)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(482)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(482)
					{
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(482)
						{
						}
						HX_STACK_LINE(482)
						{
							HX_STACK_LINE(482)
							if (((o->outer != null()))){
								HX_STACK_LINE(482)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(482)
								o->outer = null();
							}
							HX_STACK_LINE(482)
							o->_isimmutable = null();
							HX_STACK_LINE(482)
							o->_validate = null();
							HX_STACK_LINE(482)
							o->_invalidate = null();
						}
						HX_STACK_LINE(482)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(482)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(483)
				true;
			}
			else{
				HX_STACK_LINE(485)
				false;
			}
			HX_STACK_LINE(489)
			if ((p2->zpp_inner->weak)){
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					if (((bool((p2 != null())) && bool(p2->zpp_disp)))){
						HX_STACK_LINE(493)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						::zpp_nape::geom::ZPP_Vec2 _this = p2->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(493)
						if ((_this->_immutable)){
							HX_STACK_LINE(493)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(493)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(493)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(493)
					if ((p2->zpp_inner->_inuse)){
						HX_STACK_LINE(493)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(493)
					::zpp_nape::geom::ZPP_Vec2 inner = p2->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(493)
					p2->zpp_inner->outer = null();
					HX_STACK_LINE(493)
					p2->zpp_inner = null();
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						::nape::geom::Vec2 o = p2;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(493)
						{
						}
						HX_STACK_LINE(493)
						o->zpp_pool = null();
						HX_STACK_LINE(493)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(493)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(493)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(493)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(493)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(493)
					{
						HX_STACK_LINE(493)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(493)
						{
						}
						HX_STACK_LINE(493)
						{
							HX_STACK_LINE(493)
							if (((o->outer != null()))){
								HX_STACK_LINE(493)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(493)
								o->outer = null();
							}
							HX_STACK_LINE(493)
							o->_isimmutable = null();
							HX_STACK_LINE(493)
							o->_validate = null();
							HX_STACK_LINE(493)
							o->_invalidate = null();
						}
						HX_STACK_LINE(493)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(493)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(494)
				true;
			}
			else{
				HX_STACK_LINE(496)
				false;
			}
		}
		else{
			HX_STACK_LINE(502)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(p0,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",503);
					{
						HX_STACK_LINE(503)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(503)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(503)
						{
							HX_STACK_LINE(503)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(503)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(503)
								_this->_validate();
							}
						}
						HX_STACK_LINE(503)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",503);
					{
						HX_STACK_LINE(503)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(503)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(503)
						{
							HX_STACK_LINE(503)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(503)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(503)
								_this->_validate();
							}
						}
						HX_STACK_LINE(503)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(503)
			g->moveTo(_Function_2_1::Block(v),_Function_2_2::Block(v));
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(504)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(504)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(504)
					if ((_this->_immutable)){
						HX_STACK_LINE(504)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(504)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(504)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(504)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(504)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(504)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(504)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(504)
				v->zpp_inner = null();
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(504)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(504)
					{
					}
					HX_STACK_LINE(504)
					o->zpp_pool = null();
					HX_STACK_LINE(504)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(504)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(504)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(504)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(504)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(504)
				{
					HX_STACK_LINE(504)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(504)
					{
					}
					HX_STACK_LINE(504)
					{
						HX_STACK_LINE(504)
						if (((o->outer != null()))){
							HX_STACK_LINE(504)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(504)
							o->outer = null();
						}
						HX_STACK_LINE(504)
						o->_isimmutable = null();
						HX_STACK_LINE(504)
						o->_validate = null();
						HX_STACK_LINE(504)
						o->_invalidate = null();
					}
					HX_STACK_LINE(504)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(504)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(505)
			v = this->zpp_inner->xform->outer->transform(p1,null(),null());
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",506);
					{
						HX_STACK_LINE(506)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(506)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(506)
						{
							HX_STACK_LINE(506)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(506)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(506)
								_this->_validate();
							}
						}
						HX_STACK_LINE(506)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",506);
					{
						HX_STACK_LINE(506)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(506)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(506)
						{
							HX_STACK_LINE(506)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(506)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(506)
								_this->_validate();
							}
						}
						HX_STACK_LINE(506)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(506)
			g->lineTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			HX_STACK_LINE(507)
			{
				HX_STACK_LINE(507)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(507)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(507)
					if ((_this->_immutable)){
						HX_STACK_LINE(507)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(507)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(507)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(507)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(507)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(507)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(507)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(507)
				v->zpp_inner = null();
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
					}
					HX_STACK_LINE(507)
					o->zpp_pool = null();
					HX_STACK_LINE(507)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(507)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(507)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(507)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(507)
					{
					}
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						if (((o->outer != null()))){
							HX_STACK_LINE(507)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(507)
							o->outer = null();
						}
						HX_STACK_LINE(507)
						o->_isimmutable = null();
						HX_STACK_LINE(507)
						o->_validate = null();
						HX_STACK_LINE(507)
						o->_invalidate = null();
					}
					HX_STACK_LINE(507)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(507)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(508)
			v = this->zpp_inner->xform->outer->transform(p2,null(),null());
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",509);
					{
						HX_STACK_LINE(509)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(509)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(509)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(509)
								_this->_validate();
							}
						}
						HX_STACK_LINE(509)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",509);
					{
						HX_STACK_LINE(509)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(509)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(509)
						{
							HX_STACK_LINE(509)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(509)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(509)
								_this->_validate();
							}
						}
						HX_STACK_LINE(509)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(509)
			g->lineTo(_Function_2_5::Block(v),_Function_2_6::Block(v));
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(510)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(510)
					if ((_this->_immutable)){
						HX_STACK_LINE(510)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(510)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(510)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(510)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(510)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(510)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(510)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(510)
				v->zpp_inner = null();
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					o->zpp_pool = null();
					HX_STACK_LINE(510)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(510)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(510)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(510)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(510)
					{
					}
					HX_STACK_LINE(510)
					{
						HX_STACK_LINE(510)
						if (((o->outer != null()))){
							HX_STACK_LINE(510)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(510)
							o->outer = null();
						}
						HX_STACK_LINE(510)
						o->_isimmutable = null();
						HX_STACK_LINE(510)
						o->_validate = null();
						HX_STACK_LINE(510)
						o->_invalidate = null();
					}
					HX_STACK_LINE(510)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(510)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
		HX_STACK_LINE(512)
		g->endFill();
	}
return null();
}


Void ShapeDebug_obj::drawAABB( ::nape::geom::AABB aabb,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawAABB","nape/util/ShapeDebug.hx",407);
		HX_STACK_THIS(this);
		HX_STACK_ARG(aabb,"aabb");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(409)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(409)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(412)
		if (((aabb == null()))){
			HX_STACK_LINE(412)
			hx::Throw (HX_CSTRING("Error: drawAABB::aabb cannot be null"));
		}
		HX_STACK_LINE(414)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(415)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(416)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
					{
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(416)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(416)
								_this->_validate();
							}
						}
						HX_STACK_LINE(416)
						return aabb->zpp_inner->minx;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
					{
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(416)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(416)
								_this->_validate();
							}
						}
						HX_STACK_LINE(416)
						return aabb->zpp_inner->miny;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
					{
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(416)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(416)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
								{
									HX_STACK_LINE(416)
									::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(416)
									return (_this->maxx - _this->minx);
								}
								return null();
							}
						};
						HX_STACK_LINE(416)
						return _Function_3_1::Block(aabb);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
					{
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(416)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(416)
								_this->_validate();
							}
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",416);
								{
									HX_STACK_LINE(416)
									::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(416)
									return (_this->maxy - _this->miny);
								}
								return null();
							}
						};
						HX_STACK_LINE(416)
						return _Function_3_1::Block(aabb);
					}
					return null();
				}
			};
			HX_STACK_LINE(416)
			g->drawRect(_Function_2_1::Block(aabb),_Function_2_2::Block(aabb),_Function_2_3::Block(aabb),_Function_2_4::Block(aabb));
		}
		else{
			HX_STACK_LINE(418)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(aabb->zpp_inner->getmin(),null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(419)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(419)
											_this->_validate();
										}
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::AABB &aabb){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
											{
												HX_STACK_LINE(419)
												::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(419)
												return (_this->maxx - _this->minx);
											}
											return null();
										}
									};
									HX_STACK_LINE(419)
									return _Function_4_1::Block(aabb);
								}
								return null();
							}
						};
						HX_STACK_LINE(419)
						Float x = _Function_3_1::Block(aabb);		HX_STACK_VAR(x,"x");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(419)
						if (((x != x))){
							HX_STACK_LINE(419)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(419)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(419)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(419)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(419)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(419)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(419)
							ret->zpp_pool = null();
							HX_STACK_LINE(419)
							ret->zpp_disp = false;
							HX_STACK_LINE(419)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(419)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(419)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
									{
										HX_STACK_LINE(419)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(419)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(419)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(419)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(419)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(419)
												ret1->next = null();
											}
											HX_STACK_LINE(419)
											ret1->weak = false;
										}
										HX_STACK_LINE(419)
										ret1->_immutable = immutable;
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											ret1->x = x;
											HX_STACK_LINE(419)
											ret1->y = (int)0;
											HX_STACK_LINE(419)
											{
											}
											HX_STACK_LINE(419)
											{
											}
										}
										HX_STACK_LINE(419)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(419)
							ret->zpp_inner = _Function_4_1::Block(x);
							HX_STACK_LINE(419)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(419)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(419)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(419)
								if ((_this->_immutable)){
									HX_STACK_LINE(419)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(419)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(419)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(419)
							if (((x != x))){
								HX_STACK_LINE(419)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
									{
										HX_STACK_LINE(419)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(419)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(419)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(419)
												_this->_validate();
											}
										}
										HX_STACK_LINE(419)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",419);
									{
										HX_STACK_LINE(419)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(419)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(419)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(419)
												_this->_validate();
											}
										}
										HX_STACK_LINE(419)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(419)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == (int)0))))))){
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(419)
									ret->zpp_inner->y = (int)0;
									HX_STACK_LINE(419)
									{
									}
									HX_STACK_LINE(419)
									{
									}
								}
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(419)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(419)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(419)
							ret;
						}
						HX_STACK_LINE(419)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(419)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(419)
			::nape::geom::Vec2 w = _Function_2_1::Block(aabb);		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(420)
			::nape::geom::Vec2 w2 = this->zpp_inner->xform->outer->transform(w,true,null());		HX_STACK_VAR(w2,"w2");
			struct _Function_2_2{
				inline static ::nape::geom::Vec2 Block( ::nape::geom::AABB &aabb){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
					{
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::AABB &aabb){
								HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
								{
									HX_STACK_LINE(421)
									{
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(421)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(421)
											_this->_validate();
										}
									}
									struct _Function_4_1{
										inline static Float Block( ::nape::geom::AABB &aabb){
											HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
											{
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_AABB _this = aabb->zpp_inner;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(421)
												return (_this->maxy - _this->miny);
											}
											return null();
										}
									};
									HX_STACK_LINE(421)
									return _Function_4_1::Block(aabb);
								}
								return null();
							}
						};
						HX_STACK_LINE(421)
						Float x = _Function_3_1::Block(aabb);		HX_STACK_VAR(x,"x");
						bool weak = false;		HX_STACK_VAR(weak,"weak");
						HX_STACK_LINE(421)
						if (((x != x))){
							HX_STACK_LINE(421)
							hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
						}
						HX_STACK_LINE(421)
						::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
						HX_STACK_LINE(421)
						if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
							HX_STACK_LINE(421)
							ret = ::nape::geom::Vec2_obj::__new(null(),null());
						}
						else{
							HX_STACK_LINE(421)
							ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(421)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
							HX_STACK_LINE(421)
							ret->zpp_pool = null();
							HX_STACK_LINE(421)
							ret->zpp_disp = false;
							HX_STACK_LINE(421)
							if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
								HX_STACK_LINE(421)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
							}
						}
						HX_STACK_LINE(421)
						if (((ret->zpp_inner == null()))){
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_Vec2 Block( Float &x){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
									{
										HX_STACK_LINE(421)
										bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
										HX_STACK_LINE(421)
										::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
										HX_STACK_LINE(421)
										{
											HX_STACK_LINE(421)
											if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
												HX_STACK_LINE(421)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
											}
											else{
												HX_STACK_LINE(421)
												ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
												HX_STACK_LINE(421)
												::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
												HX_STACK_LINE(421)
												ret1->next = null();
											}
											HX_STACK_LINE(421)
											ret1->weak = false;
										}
										HX_STACK_LINE(421)
										ret1->_immutable = immutable;
										HX_STACK_LINE(421)
										{
											HX_STACK_LINE(421)
											ret1->x = x;
											HX_STACK_LINE(421)
											ret1->y = (int)0;
											HX_STACK_LINE(421)
											{
											}
											HX_STACK_LINE(421)
											{
											}
										}
										HX_STACK_LINE(421)
										return ret1;
									}
									return null();
								}
							};
							HX_STACK_LINE(421)
							ret->zpp_inner = _Function_4_1::Block(x);
							HX_STACK_LINE(421)
							ret->zpp_inner->outer = ret;
						}
						else{
							HX_STACK_LINE(421)
							if (((bool((ret != null())) && bool(ret->zpp_disp)))){
								HX_STACK_LINE(421)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(421)
							{
								HX_STACK_LINE(421)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(421)
								if ((_this->_immutable)){
									HX_STACK_LINE(421)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(421)
								if (((_this->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(421)
									_this->_isimmutable();
								}
							}
							HX_STACK_LINE(421)
							if (((x != x))){
								HX_STACK_LINE(421)
								hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
							}
							struct _Function_4_1{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
									{
										HX_STACK_LINE(421)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(421)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(421)
										{
											HX_STACK_LINE(421)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(421)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(421)
												_this->_validate();
											}
										}
										HX_STACK_LINE(421)
										return ret->zpp_inner->x;
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static Float Block( ::nape::geom::Vec2 &ret){
									HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",421);
									{
										HX_STACK_LINE(421)
										if (((bool((ret != null())) && bool(ret->zpp_disp)))){
											HX_STACK_LINE(421)
											hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
										}
										HX_STACK_LINE(421)
										{
											HX_STACK_LINE(421)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(421)
											if (((_this->_validate_dyn() != null()))){
												HX_STACK_LINE(421)
												_this->_validate();
											}
										}
										HX_STACK_LINE(421)
										return ret->zpp_inner->y;
									}
									return null();
								}
							};
							HX_STACK_LINE(421)
							if ((!(((bool((_Function_4_1::Block(ret) == x)) && bool((_Function_4_2::Block(ret) == (int)0))))))){
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									ret->zpp_inner->x = x;
									HX_STACK_LINE(421)
									ret->zpp_inner->y = (int)0;
									HX_STACK_LINE(421)
									{
									}
									HX_STACK_LINE(421)
									{
									}
								}
								HX_STACK_LINE(421)
								{
									HX_STACK_LINE(421)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(421)
									if (((_this->_invalidate_dyn() != null()))){
										HX_STACK_LINE(421)
										_this->_invalidate(_this);
									}
								}
							}
							HX_STACK_LINE(421)
							ret;
						}
						HX_STACK_LINE(421)
						ret->zpp_inner->weak = weak;
						HX_STACK_LINE(421)
						return ret;
					}
					return null();
				}
			};
			HX_STACK_LINE(421)
			::nape::geom::Vec2 h = _Function_2_2::Block(aabb);		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(422)
			::nape::geom::Vec2 h2 = this->zpp_inner->xform->outer->transform(h,true,null());		HX_STACK_VAR(h2,"h2");
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",423);
					{
						HX_STACK_LINE(423)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(423)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(423)
						{
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(423)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(423)
								_this->_validate();
							}
						}
						HX_STACK_LINE(423)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",423);
					{
						HX_STACK_LINE(423)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(423)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(423)
						{
							HX_STACK_LINE(423)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(423)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(423)
								_this->_validate();
							}
						}
						HX_STACK_LINE(423)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(423)
			g->moveTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
					{
						HX_STACK_LINE(424)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(424)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
					{
						HX_STACK_LINE(424)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(424)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
					{
						HX_STACK_LINE(424)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(424)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",424);
					{
						HX_STACK_LINE(424)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(424)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(424)
						{
							HX_STACK_LINE(424)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(424)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(424)
								_this->_validate();
							}
						}
						HX_STACK_LINE(424)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(424)
			g->lineTo((_Function_2_5::Block(v) + _Function_2_6::Block(w2)),(_Function_2_7::Block(v) + _Function_2_8::Block(w2)));
			struct _Function_2_9{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_10{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return w2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_11{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_12{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_13{
				inline static Float Block( ::nape::geom::Vec2 &w2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return w2->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_14{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",425);
					{
						HX_STACK_LINE(425)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(425)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(425)
						{
							HX_STACK_LINE(425)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(425)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(425)
								_this->_validate();
							}
						}
						HX_STACK_LINE(425)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(425)
			g->lineTo(((_Function_2_9::Block(v) + _Function_2_10::Block(w2)) + _Function_2_11::Block(h2)),((_Function_2_12::Block(v) + _Function_2_13::Block(w2)) + _Function_2_14::Block(h2)));
			struct _Function_2_15{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_16{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return h2->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_17{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_18{
				inline static Float Block( ::nape::geom::Vec2 &h2){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",426);
					{
						HX_STACK_LINE(426)
						if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
							HX_STACK_LINE(426)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(426)
						{
							HX_STACK_LINE(426)
							::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(426)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(426)
								_this->_validate();
							}
						}
						HX_STACK_LINE(426)
						return h2->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(426)
			g->lineTo((_Function_2_15::Block(v) + _Function_2_16::Block(h2)),(_Function_2_17::Block(v) + _Function_2_18::Block(h2)));
			struct _Function_2_19{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_20{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",427);
					{
						HX_STACK_LINE(427)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(427)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(427)
						{
							HX_STACK_LINE(427)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(427)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(427)
								_this->_validate();
							}
						}
						HX_STACK_LINE(427)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(427)
			g->lineTo(_Function_2_19::Block(v),_Function_2_20::Block(v));
			HX_STACK_LINE(428)
			{
				HX_STACK_LINE(428)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(428)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(428)
					if ((_this->_immutable)){
						HX_STACK_LINE(428)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(428)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(428)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(428)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(428)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(428)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(428)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(428)
				v->zpp_inner = null();
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(428)
					{
					}
					HX_STACK_LINE(428)
					o->zpp_pool = null();
					HX_STACK_LINE(428)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(428)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(428)
					{
					}
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						if (((o->outer != null()))){
							HX_STACK_LINE(428)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(428)
							o->outer = null();
						}
						HX_STACK_LINE(428)
						o->_isimmutable = null();
						HX_STACK_LINE(428)
						o->_validate = null();
						HX_STACK_LINE(428)
						o->_invalidate = null();
					}
					HX_STACK_LINE(428)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(428)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(429)
			{
				HX_STACK_LINE(429)
				if (((bool((w != null())) && bool(w->zpp_disp)))){
					HX_STACK_LINE(429)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 _this = w->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(429)
					if ((_this->_immutable)){
						HX_STACK_LINE(429)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(429)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(429)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(429)
				if ((w->zpp_inner->_inuse)){
					HX_STACK_LINE(429)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(429)
				::zpp_nape::geom::ZPP_Vec2 inner = w->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(429)
				w->zpp_inner->outer = null();
				HX_STACK_LINE(429)
				w->zpp_inner = null();
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::nape::geom::Vec2 o = w;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(429)
					{
					}
					HX_STACK_LINE(429)
					o->zpp_pool = null();
					HX_STACK_LINE(429)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(429)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(429)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(429)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(429)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(429)
				{
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(429)
					{
					}
					HX_STACK_LINE(429)
					{
						HX_STACK_LINE(429)
						if (((o->outer != null()))){
							HX_STACK_LINE(429)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(429)
							o->outer = null();
						}
						HX_STACK_LINE(429)
						o->_isimmutable = null();
						HX_STACK_LINE(429)
						o->_validate = null();
						HX_STACK_LINE(429)
						o->_invalidate = null();
					}
					HX_STACK_LINE(429)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(429)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(430)
				if (((bool((w2 != null())) && bool(w2->zpp_disp)))){
					HX_STACK_LINE(430)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 _this = w2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(430)
					if ((_this->_immutable)){
						HX_STACK_LINE(430)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(430)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(430)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(430)
				if ((w2->zpp_inner->_inuse)){
					HX_STACK_LINE(430)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(430)
				::zpp_nape::geom::ZPP_Vec2 inner = w2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(430)
				w2->zpp_inner->outer = null();
				HX_STACK_LINE(430)
				w2->zpp_inner = null();
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::nape::geom::Vec2 o = w2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(430)
					{
					}
					HX_STACK_LINE(430)
					o->zpp_pool = null();
					HX_STACK_LINE(430)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(430)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(430)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(430)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(430)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(430)
				{
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(430)
					{
					}
					HX_STACK_LINE(430)
					{
						HX_STACK_LINE(430)
						if (((o->outer != null()))){
							HX_STACK_LINE(430)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(430)
							o->outer = null();
						}
						HX_STACK_LINE(430)
						o->_isimmutable = null();
						HX_STACK_LINE(430)
						o->_validate = null();
						HX_STACK_LINE(430)
						o->_invalidate = null();
					}
					HX_STACK_LINE(430)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(430)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(431)
			{
				HX_STACK_LINE(431)
				if (((bool((h != null())) && bool(h->zpp_disp)))){
					HX_STACK_LINE(431)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 _this = h->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(431)
					if ((_this->_immutable)){
						HX_STACK_LINE(431)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(431)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(431)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(431)
				if ((h->zpp_inner->_inuse)){
					HX_STACK_LINE(431)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(431)
				::zpp_nape::geom::ZPP_Vec2 inner = h->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(431)
				h->zpp_inner->outer = null();
				HX_STACK_LINE(431)
				h->zpp_inner = null();
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::nape::geom::Vec2 o = h;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
					}
					HX_STACK_LINE(431)
					o->zpp_pool = null();
					HX_STACK_LINE(431)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(431)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(431)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(431)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(431)
				{
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(431)
					{
					}
					HX_STACK_LINE(431)
					{
						HX_STACK_LINE(431)
						if (((o->outer != null()))){
							HX_STACK_LINE(431)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(431)
							o->outer = null();
						}
						HX_STACK_LINE(431)
						o->_isimmutable = null();
						HX_STACK_LINE(431)
						o->_validate = null();
						HX_STACK_LINE(431)
						o->_invalidate = null();
					}
					HX_STACK_LINE(431)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(431)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(432)
				if (((bool((h2 != null())) && bool(h2->zpp_disp)))){
					HX_STACK_LINE(432)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 _this = h2->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(432)
					if ((_this->_immutable)){
						HX_STACK_LINE(432)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(432)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(432)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(432)
				if ((h2->zpp_inner->_inuse)){
					HX_STACK_LINE(432)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(432)
				::zpp_nape::geom::ZPP_Vec2 inner = h2->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(432)
				h2->zpp_inner->outer = null();
				HX_STACK_LINE(432)
				h2->zpp_inner = null();
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::nape::geom::Vec2 o = h2;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
					}
					HX_STACK_LINE(432)
					o->zpp_pool = null();
					HX_STACK_LINE(432)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(432)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(432)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(432)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(432)
				{
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(432)
					{
					}
					HX_STACK_LINE(432)
					{
						HX_STACK_LINE(432)
						if (((o->outer != null()))){
							HX_STACK_LINE(432)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(432)
							o->outer = null();
						}
						HX_STACK_LINE(432)
						o->_isimmutable = null();
						HX_STACK_LINE(432)
						o->_validate = null();
						HX_STACK_LINE(432)
						o->_invalidate = null();
					}
					HX_STACK_LINE(432)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(432)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCircle( ::nape::geom::Vec2 position,Float radius,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawCircle","nape/util/ShapeDebug.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_ARG(position,"position");
		HX_STACK_ARG(radius,"radius");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(371)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(371)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(373)
		if (((bool((position != null())) && bool(position->zpp_disp)))){
			HX_STACK_LINE(375)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(379)
		if (((position == null()))){
			HX_STACK_LINE(379)
			hx::Throw (HX_CSTRING("Error: drawCircle::position cannot be null"));
		}
		HX_STACK_LINE(380)
		if (((bool((radius != radius)) || bool((radius < (int)0))))){
			HX_STACK_LINE(380)
			hx::Throw (HX_CSTRING("Error: drawCircle::radius must be >=0"));
		}
		HX_STACK_LINE(382)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(383)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(384)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",385);
					{
						HX_STACK_LINE(385)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(385)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(385)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(385)
								_this->_validate();
							}
						}
						HX_STACK_LINE(385)
						return position->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &position){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",385);
					{
						HX_STACK_LINE(385)
						if (((bool((position != null())) && bool(position->zpp_disp)))){
							HX_STACK_LINE(385)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(385)
						{
							HX_STACK_LINE(385)
							::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(385)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(385)
								_this->_validate();
							}
						}
						HX_STACK_LINE(385)
						return position->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(385)
			g->drawCircle(_Function_2_1::Block(position),_Function_2_2::Block(position),radius);
			HX_STACK_LINE(386)
			if ((position->zpp_inner->weak)){
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					if (((bool((position != null())) && bool(position->zpp_disp)))){
						HX_STACK_LINE(390)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 _this = position->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(390)
						if ((_this->_immutable)){
							HX_STACK_LINE(390)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(390)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(390)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(390)
					if ((position->zpp_inner->_inuse)){
						HX_STACK_LINE(390)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(390)
					::zpp_nape::geom::ZPP_Vec2 inner = position->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(390)
					position->zpp_inner->outer = null();
					HX_STACK_LINE(390)
					position->zpp_inner = null();
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::nape::geom::Vec2 o = position;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(390)
						{
						}
						HX_STACK_LINE(390)
						o->zpp_pool = null();
						HX_STACK_LINE(390)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(390)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(390)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(390)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(390)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(390)
					{
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(390)
						{
						}
						HX_STACK_LINE(390)
						{
							HX_STACK_LINE(390)
							if (((o->outer != null()))){
								HX_STACK_LINE(390)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(390)
								o->outer = null();
							}
							HX_STACK_LINE(390)
							o->_isimmutable = null();
							HX_STACK_LINE(390)
							o->_validate = null();
							HX_STACK_LINE(390)
							o->_invalidate = null();
						}
						HX_STACK_LINE(390)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(390)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(391)
				true;
			}
			else{
				HX_STACK_LINE(393)
				false;
			}
		}
		else{
			HX_STACK_LINE(399)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(position,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",400);
					{
						HX_STACK_LINE(400)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(400)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(400)
						{
							HX_STACK_LINE(400)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(400)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(400)
								_this->_validate();
							}
						}
						HX_STACK_LINE(400)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",400);
					{
						HX_STACK_LINE(400)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(400)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(400)
						{
							HX_STACK_LINE(400)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(400)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(400)
								_this->_validate();
							}
						}
						HX_STACK_LINE(400)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(400)
			g->drawCircle(_Function_2_1::Block(v),_Function_2_2::Block(v),(radius * this->zpp_inner->xdet));
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(401)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(401)
					if ((_this->_immutable)){
						HX_STACK_LINE(401)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(401)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(401)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(401)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(401)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(401)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(401)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(401)
				v->zpp_inner = null();
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(401)
					{
					}
					HX_STACK_LINE(401)
					o->zpp_pool = null();
					HX_STACK_LINE(401)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(401)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(401)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(401)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(401)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(401)
					{
					}
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						if (((o->outer != null()))){
							HX_STACK_LINE(401)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(401)
							o->outer = null();
						}
						HX_STACK_LINE(401)
						o->_isimmutable = null();
						HX_STACK_LINE(401)
						o->_validate = null();
						HX_STACK_LINE(401)
						o->_invalidate = null();
					}
					HX_STACK_LINE(401)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(401)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawCurve( ::nape::geom::Vec2 start,::nape::geom::Vec2 control,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawCurve","nape/util/ShapeDebug.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(start,"start");
		HX_STACK_ARG(control,"control");
		HX_STACK_ARG(end,"end");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(294)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(294)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(296)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(298)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(301)
		if (((bool((control != null())) && bool(control->zpp_disp)))){
			HX_STACK_LINE(303)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(306)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(308)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(312)
		if (((start == null()))){
			HX_STACK_LINE(312)
			hx::Throw (HX_CSTRING("Error: drawCurve::start cannot be null"));
		}
		HX_STACK_LINE(313)
		if (((control == null()))){
			HX_STACK_LINE(313)
			hx::Throw (HX_CSTRING("Error: drawCurve::control cannot be null"));
		}
		HX_STACK_LINE(314)
		if (((end == null()))){
			HX_STACK_LINE(314)
			hx::Throw (HX_CSTRING("Error: drawCurve::end cannot be null"));
		}
		HX_STACK_LINE(316)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(317)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(318)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",319);
					{
						HX_STACK_LINE(319)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(319)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(319)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(319)
								_this->_validate();
							}
						}
						HX_STACK_LINE(319)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",319);
					{
						HX_STACK_LINE(319)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(319)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(319)
						{
							HX_STACK_LINE(319)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(319)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(319)
								_this->_validate();
							}
						}
						HX_STACK_LINE(319)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(319)
			g->moveTo(_Function_2_1::Block(start),_Function_2_2::Block(start));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &control){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",320);
					{
						HX_STACK_LINE(320)
						if (((bool((control != null())) && bool(control->zpp_disp)))){
							HX_STACK_LINE(320)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(320)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(320)
								_this->_validate();
							}
						}
						HX_STACK_LINE(320)
						return control->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &control){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",320);
					{
						HX_STACK_LINE(320)
						if (((bool((control != null())) && bool(control->zpp_disp)))){
							HX_STACK_LINE(320)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(320)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(320)
								_this->_validate();
							}
						}
						HX_STACK_LINE(320)
						return control->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",320);
					{
						HX_STACK_LINE(320)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(320)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(320)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(320)
								_this->_validate();
							}
						}
						HX_STACK_LINE(320)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",320);
					{
						HX_STACK_LINE(320)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(320)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(320)
						{
							HX_STACK_LINE(320)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(320)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(320)
								_this->_validate();
							}
						}
						HX_STACK_LINE(320)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(320)
			g->curveTo(_Function_2_3::Block(control),_Function_2_4::Block(control),_Function_2_5::Block(end),_Function_2_6::Block(end));
			HX_STACK_LINE(321)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(325)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(325)
						if ((_this->_immutable)){
							HX_STACK_LINE(325)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(325)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(325)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(325)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(325)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(325)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(325)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(325)
					start->zpp_inner = null();
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						{
						}
						HX_STACK_LINE(325)
						o->zpp_pool = null();
						HX_STACK_LINE(325)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(325)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(325)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(325)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(325)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(325)
						{
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							if (((o->outer != null()))){
								HX_STACK_LINE(325)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(325)
								o->outer = null();
							}
							HX_STACK_LINE(325)
							o->_isimmutable = null();
							HX_STACK_LINE(325)
							o->_validate = null();
							HX_STACK_LINE(325)
							o->_invalidate = null();
						}
						HX_STACK_LINE(325)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(325)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(326)
				true;
			}
			else{
				HX_STACK_LINE(328)
				false;
			}
			HX_STACK_LINE(332)
			if ((control->zpp_inner->weak)){
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					if (((bool((control != null())) && bool(control->zpp_disp)))){
						HX_STACK_LINE(336)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 _this = control->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(336)
						if ((_this->_immutable)){
							HX_STACK_LINE(336)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(336)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(336)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(336)
					if ((control->zpp_inner->_inuse)){
						HX_STACK_LINE(336)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(336)
					::zpp_nape::geom::ZPP_Vec2 inner = control->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(336)
					control->zpp_inner->outer = null();
					HX_STACK_LINE(336)
					control->zpp_inner = null();
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::nape::geom::Vec2 o = control;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						{
						}
						HX_STACK_LINE(336)
						o->zpp_pool = null();
						HX_STACK_LINE(336)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(336)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(336)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(336)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(336)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(336)
						{
						}
						HX_STACK_LINE(336)
						{
							HX_STACK_LINE(336)
							if (((o->outer != null()))){
								HX_STACK_LINE(336)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(336)
								o->outer = null();
							}
							HX_STACK_LINE(336)
							o->_isimmutable = null();
							HX_STACK_LINE(336)
							o->_validate = null();
							HX_STACK_LINE(336)
							o->_invalidate = null();
						}
						HX_STACK_LINE(336)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(336)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(337)
				true;
			}
			else{
				HX_STACK_LINE(339)
				false;
			}
			HX_STACK_LINE(343)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(347)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(347)
						if ((_this->_immutable)){
							HX_STACK_LINE(347)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(347)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(347)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(347)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(347)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(347)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(347)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(347)
					end->zpp_inner = null();
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(347)
						{
						}
						HX_STACK_LINE(347)
						o->zpp_pool = null();
						HX_STACK_LINE(347)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(347)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(347)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(347)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(347)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(347)
					{
						HX_STACK_LINE(347)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(347)
						{
						}
						HX_STACK_LINE(347)
						{
							HX_STACK_LINE(347)
							if (((o->outer != null()))){
								HX_STACK_LINE(347)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(347)
								o->outer = null();
							}
							HX_STACK_LINE(347)
							o->_isimmutable = null();
							HX_STACK_LINE(347)
							o->_validate = null();
							HX_STACK_LINE(347)
							o->_invalidate = null();
						}
						HX_STACK_LINE(347)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(347)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(348)
				true;
			}
			else{
				HX_STACK_LINE(350)
				false;
			}
		}
		else{
			HX_STACK_LINE(356)
			::nape::geom::Vec2 u = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(357)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(control,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(358)
			::nape::geom::Vec2 q = this->zpp_inner->xform->outer->transform(end,null(),null());		HX_STACK_VAR(q,"q");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &u){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",359);
					{
						HX_STACK_LINE(359)
						if (((bool((u != null())) && bool(u->zpp_disp)))){
							HX_STACK_LINE(359)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						return u->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &u){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",359);
					{
						HX_STACK_LINE(359)
						if (((bool((u != null())) && bool(u->zpp_disp)))){
							HX_STACK_LINE(359)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(359)
						{
							HX_STACK_LINE(359)
							::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(359)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(359)
								_this->_validate();
							}
						}
						HX_STACK_LINE(359)
						return u->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(359)
			g->moveTo(_Function_2_1::Block(u),_Function_2_2::Block(u));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",360);
					{
						HX_STACK_LINE(360)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(360)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(360)
						{
							HX_STACK_LINE(360)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(360)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(360)
								_this->_validate();
							}
						}
						HX_STACK_LINE(360)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",360);
					{
						HX_STACK_LINE(360)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(360)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(360)
						{
							HX_STACK_LINE(360)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(360)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(360)
								_this->_validate();
							}
						}
						HX_STACK_LINE(360)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static Float Block( ::nape::geom::Vec2 &q){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",360);
					{
						HX_STACK_LINE(360)
						if (((bool((q != null())) && bool(q->zpp_disp)))){
							HX_STACK_LINE(360)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(360)
						{
							HX_STACK_LINE(360)
							::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(360)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(360)
								_this->_validate();
							}
						}
						HX_STACK_LINE(360)
						return q->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_6{
				inline static Float Block( ::nape::geom::Vec2 &q){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",360);
					{
						HX_STACK_LINE(360)
						if (((bool((q != null())) && bool(q->zpp_disp)))){
							HX_STACK_LINE(360)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(360)
						{
							HX_STACK_LINE(360)
							::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(360)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(360)
								_this->_validate();
							}
						}
						HX_STACK_LINE(360)
						return q->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(360)
			g->curveTo(_Function_2_3::Block(v),_Function_2_4::Block(v),_Function_2_5::Block(q),_Function_2_6::Block(q));
			HX_STACK_LINE(361)
			{
				HX_STACK_LINE(361)
				if (((bool((u != null())) && bool(u->zpp_disp)))){
					HX_STACK_LINE(361)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 _this = u->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(361)
					if ((_this->_immutable)){
						HX_STACK_LINE(361)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(361)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(361)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(361)
				if ((u->zpp_inner->_inuse)){
					HX_STACK_LINE(361)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(361)
				::zpp_nape::geom::ZPP_Vec2 inner = u->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(361)
				u->zpp_inner->outer = null();
				HX_STACK_LINE(361)
				u->zpp_inner = null();
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::nape::geom::Vec2 o = u;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(361)
					{
					}
					HX_STACK_LINE(361)
					o->zpp_pool = null();
					HX_STACK_LINE(361)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(361)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(361)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(361)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(361)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(361)
				{
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(361)
					{
					}
					HX_STACK_LINE(361)
					{
						HX_STACK_LINE(361)
						if (((o->outer != null()))){
							HX_STACK_LINE(361)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(361)
							o->outer = null();
						}
						HX_STACK_LINE(361)
						o->_isimmutable = null();
						HX_STACK_LINE(361)
						o->_validate = null();
						HX_STACK_LINE(361)
						o->_invalidate = null();
					}
					HX_STACK_LINE(361)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(361)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(362)
			{
				HX_STACK_LINE(362)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(362)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					if ((_this->_immutable)){
						HX_STACK_LINE(362)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(362)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(362)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(362)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(362)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(362)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(362)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(362)
				v->zpp_inner = null();
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(362)
					{
					}
					HX_STACK_LINE(362)
					o->zpp_pool = null();
					HX_STACK_LINE(362)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(362)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(362)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(362)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(362)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(362)
					{
					}
					HX_STACK_LINE(362)
					{
						HX_STACK_LINE(362)
						if (((o->outer != null()))){
							HX_STACK_LINE(362)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(362)
							o->outer = null();
						}
						HX_STACK_LINE(362)
						o->_isimmutable = null();
						HX_STACK_LINE(362)
						o->_validate = null();
						HX_STACK_LINE(362)
						o->_invalidate = null();
					}
					HX_STACK_LINE(362)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(362)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				if (((bool((q != null())) && bool(q->zpp_disp)))){
					HX_STACK_LINE(363)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 _this = q->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(363)
					if ((_this->_immutable)){
						HX_STACK_LINE(363)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(363)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(363)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(363)
				if ((q->zpp_inner->_inuse)){
					HX_STACK_LINE(363)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(363)
				::zpp_nape::geom::ZPP_Vec2 inner = q->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(363)
				q->zpp_inner->outer = null();
				HX_STACK_LINE(363)
				q->zpp_inner = null();
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::nape::geom::Vec2 o = q;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(363)
					{
					}
					HX_STACK_LINE(363)
					o->zpp_pool = null();
					HX_STACK_LINE(363)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(363)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(363)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(363)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(363)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(363)
					{
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						if (((o->outer != null()))){
							HX_STACK_LINE(363)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(363)
							o->outer = null();
						}
						HX_STACK_LINE(363)
						o->_isimmutable = null();
						HX_STACK_LINE(363)
						o->_validate = null();
						HX_STACK_LINE(363)
						o->_invalidate = null();
					}
					HX_STACK_LINE(363)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(363)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::drawLine( ::nape::geom::Vec2 start,::nape::geom::Vec2 end,int colour){
{
		HX_STACK_PUSH("ShapeDebug::drawLine","nape/util/ShapeDebug.hx",234);
		HX_STACK_THIS(this);
		HX_STACK_ARG(start,"start");
		HX_STACK_ARG(end,"end");
		HX_STACK_ARG(colour,"colour");
		HX_STACK_LINE(236)
		if (((bool((this->zpp_inner->xform != null())) && bool(!(this->zpp_inner->xform->outer->equiorthogonal()))))){
			HX_STACK_LINE(236)
			hx::Throw (HX_CSTRING("Error: Debug draw can only operate with an equiorthogonal transform!"));
		}
		HX_STACK_LINE(238)
		if (((bool((start != null())) && bool(start->zpp_disp)))){
			HX_STACK_LINE(240)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(243)
		if (((bool((end != null())) && bool(end->zpp_disp)))){
			HX_STACK_LINE(245)
			hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
		}
		HX_STACK_LINE(249)
		if (((start == null()))){
			HX_STACK_LINE(249)
			hx::Throw (HX_CSTRING("Error: drawLine::start cannot be null"));
		}
		HX_STACK_LINE(250)
		if (((end == null()))){
			HX_STACK_LINE(250)
			hx::Throw (HX_CSTRING("Error: drawLine::end cannot be null"));
		}
		HX_STACK_LINE(252)
		::native::display::Graphics g = this->zpp_inner_zn->graphics;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(253)
		g->lineStyle(0.1,(int(colour) & int((int)16777215)),(int)1,null(),null(),null(),null(),null());
		HX_STACK_LINE(254)
		if ((this->zpp_inner->xnull)){
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",255);
					{
						HX_STACK_LINE(255)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(255)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(255)
						{
							HX_STACK_LINE(255)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(255)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(255)
								_this->_validate();
							}
						}
						HX_STACK_LINE(255)
						return start->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &start){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",255);
					{
						HX_STACK_LINE(255)
						if (((bool((start != null())) && bool(start->zpp_disp)))){
							HX_STACK_LINE(255)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(255)
						{
							HX_STACK_LINE(255)
							::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(255)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(255)
								_this->_validate();
							}
						}
						HX_STACK_LINE(255)
						return start->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(255)
			g->moveTo(_Function_2_1::Block(start),_Function_2_2::Block(start));
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",256);
					{
						HX_STACK_LINE(256)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(256)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(256)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(256)
								_this->_validate();
							}
						}
						HX_STACK_LINE(256)
						return end->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &end){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",256);
					{
						HX_STACK_LINE(256)
						if (((bool((end != null())) && bool(end->zpp_disp)))){
							HX_STACK_LINE(256)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(256)
						{
							HX_STACK_LINE(256)
							::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(256)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(256)
								_this->_validate();
							}
						}
						HX_STACK_LINE(256)
						return end->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(256)
			g->lineTo(_Function_2_3::Block(end),_Function_2_4::Block(end));
			HX_STACK_LINE(257)
			if ((start->zpp_inner->weak)){
				HX_STACK_LINE(261)
				{
					HX_STACK_LINE(261)
					if (((bool((start != null())) && bool(start->zpp_disp)))){
						HX_STACK_LINE(261)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 _this = start->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(261)
						if ((_this->_immutable)){
							HX_STACK_LINE(261)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(261)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(261)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(261)
					if ((start->zpp_inner->_inuse)){
						HX_STACK_LINE(261)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(261)
					::zpp_nape::geom::ZPP_Vec2 inner = start->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(261)
					start->zpp_inner->outer = null();
					HX_STACK_LINE(261)
					start->zpp_inner = null();
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::nape::geom::Vec2 o = start;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(261)
						{
						}
						HX_STACK_LINE(261)
						o->zpp_pool = null();
						HX_STACK_LINE(261)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(261)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(261)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(261)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(261)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(261)
					{
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(261)
						{
						}
						HX_STACK_LINE(261)
						{
							HX_STACK_LINE(261)
							if (((o->outer != null()))){
								HX_STACK_LINE(261)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(261)
								o->outer = null();
							}
							HX_STACK_LINE(261)
							o->_isimmutable = null();
							HX_STACK_LINE(261)
							o->_validate = null();
							HX_STACK_LINE(261)
							o->_invalidate = null();
						}
						HX_STACK_LINE(261)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(261)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(262)
				true;
			}
			else{
				HX_STACK_LINE(264)
				false;
			}
			HX_STACK_LINE(268)
			if ((end->zpp_inner->weak)){
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(272)
					if (((bool((end != null())) && bool(end->zpp_disp)))){
						HX_STACK_LINE(272)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						::zpp_nape::geom::ZPP_Vec2 _this = end->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(272)
						if ((_this->_immutable)){
							HX_STACK_LINE(272)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(272)
						if (((_this->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(272)
							_this->_isimmutable();
						}
					}
					HX_STACK_LINE(272)
					if ((end->zpp_inner->_inuse)){
						HX_STACK_LINE(272)
						hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
					}
					HX_STACK_LINE(272)
					::zpp_nape::geom::ZPP_Vec2 inner = end->zpp_inner;		HX_STACK_VAR(inner,"inner");
					HX_STACK_LINE(272)
					end->zpp_inner->outer = null();
					HX_STACK_LINE(272)
					end->zpp_inner = null();
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						::nape::geom::Vec2 o = end;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(272)
						{
						}
						HX_STACK_LINE(272)
						o->zpp_pool = null();
						HX_STACK_LINE(272)
						if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
							HX_STACK_LINE(272)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
						}
						else{
							HX_STACK_LINE(272)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(272)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
						HX_STACK_LINE(272)
						o->zpp_disp = true;
					}
					HX_STACK_LINE(272)
					{
						HX_STACK_LINE(272)
						::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(272)
						{
						}
						HX_STACK_LINE(272)
						{
							HX_STACK_LINE(272)
							if (((o->outer != null()))){
								HX_STACK_LINE(272)
								o->outer->zpp_inner = null();
								HX_STACK_LINE(272)
								o->outer = null();
							}
							HX_STACK_LINE(272)
							o->_isimmutable = null();
							HX_STACK_LINE(272)
							o->_validate = null();
							HX_STACK_LINE(272)
							o->_invalidate = null();
						}
						HX_STACK_LINE(272)
						o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
						HX_STACK_LINE(272)
						::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
					}
				}
				HX_STACK_LINE(273)
				true;
			}
			else{
				HX_STACK_LINE(275)
				false;
			}
		}
		else{
			HX_STACK_LINE(281)
			::nape::geom::Vec2 v = this->zpp_inner->xform->outer->transform(start,null(),null());		HX_STACK_VAR(v,"v");
			struct _Function_2_1{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",282);
					{
						HX_STACK_LINE(282)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(282)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(282)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(282)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(282)
								_this->_validate();
							}
						}
						HX_STACK_LINE(282)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",282);
					{
						HX_STACK_LINE(282)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(282)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(282)
						{
							HX_STACK_LINE(282)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(282)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(282)
								_this->_validate();
							}
						}
						HX_STACK_LINE(282)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(282)
			g->moveTo(_Function_2_1::Block(v),_Function_2_2::Block(v));
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(283)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(283)
					if ((_this->_immutable)){
						HX_STACK_LINE(283)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(283)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(283)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(283)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(283)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(283)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(283)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(283)
				v->zpp_inner = null();
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(283)
					{
					}
					HX_STACK_LINE(283)
					o->zpp_pool = null();
					HX_STACK_LINE(283)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(283)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(283)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(283)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(283)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(283)
				{
					HX_STACK_LINE(283)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(283)
					{
					}
					HX_STACK_LINE(283)
					{
						HX_STACK_LINE(283)
						if (((o->outer != null()))){
							HX_STACK_LINE(283)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(283)
							o->outer = null();
						}
						HX_STACK_LINE(283)
						o->_isimmutable = null();
						HX_STACK_LINE(283)
						o->_validate = null();
						HX_STACK_LINE(283)
						o->_invalidate = null();
					}
					HX_STACK_LINE(283)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(283)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
			HX_STACK_LINE(284)
			v = this->zpp_inner->xform->outer->transform(end,null(),null());
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",285);
					{
						HX_STACK_LINE(285)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(285)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(285)
								_this->_validate();
							}
						}
						HX_STACK_LINE(285)
						return v->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static Float Block( ::nape::geom::Vec2 &v){
					HX_STACK_PUSH("*::closure","nape/util/ShapeDebug.hx",285);
					{
						HX_STACK_LINE(285)
						if (((bool((v != null())) && bool(v->zpp_disp)))){
							HX_STACK_LINE(285)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(285)
						{
							HX_STACK_LINE(285)
							::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(285)
							if (((_this->_validate_dyn() != null()))){
								HX_STACK_LINE(285)
								_this->_validate();
							}
						}
						HX_STACK_LINE(285)
						return v->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(285)
			g->lineTo(_Function_2_3::Block(v),_Function_2_4::Block(v));
			HX_STACK_LINE(286)
			{
				HX_STACK_LINE(286)
				if (((bool((v != null())) && bool(v->zpp_disp)))){
					HX_STACK_LINE(286)
					hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 _this = v->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(286)
					if ((_this->_immutable)){
						HX_STACK_LINE(286)
						hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
					}
					HX_STACK_LINE(286)
					if (((_this->_isimmutable_dyn() != null()))){
						HX_STACK_LINE(286)
						_this->_isimmutable();
					}
				}
				HX_STACK_LINE(286)
				if ((v->zpp_inner->_inuse)){
					HX_STACK_LINE(286)
					hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
				}
				HX_STACK_LINE(286)
				::zpp_nape::geom::ZPP_Vec2 inner = v->zpp_inner;		HX_STACK_VAR(inner,"inner");
				HX_STACK_LINE(286)
				v->zpp_inner->outer = null();
				HX_STACK_LINE(286)
				v->zpp_inner = null();
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::nape::geom::Vec2 o = v;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
					}
					HX_STACK_LINE(286)
					o->zpp_pool = null();
					HX_STACK_LINE(286)
					if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o;
					}
					else{
						HX_STACK_LINE(286)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
					}
					HX_STACK_LINE(286)
					::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o;
					HX_STACK_LINE(286)
					o->zpp_disp = true;
				}
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(286)
					{
					}
					HX_STACK_LINE(286)
					{
						HX_STACK_LINE(286)
						if (((o->outer != null()))){
							HX_STACK_LINE(286)
							o->outer->zpp_inner = null();
							HX_STACK_LINE(286)
							o->outer = null();
						}
						HX_STACK_LINE(286)
						o->_isimmutable = null();
						HX_STACK_LINE(286)
						o->_validate = null();
						HX_STACK_LINE(286)
						o->_invalidate = null();
					}
					HX_STACK_LINE(286)
					o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
					HX_STACK_LINE(286)
					::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
				}
			}
		}
	}
return null();
}


Void ShapeDebug_obj::clear( ){
{
		HX_STACK_PUSH("ShapeDebug::clear","nape/util/ShapeDebug.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_LINE(231)
		this->zpp_inner_zn->graphics->clear();
	}
return null();
}



ShapeDebug_obj::ShapeDebug_obj()
{
}

void ShapeDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShapeDebug);
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ShapeDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(zpp_inner_zn,"zpp_inner_zn");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ShapeDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawAABB") ) { return drawAABB_dyn(); }
		if (HX_FIELD_EQ(inName,"drawLine") ) { return drawLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCurve") ) { return drawCurve_dyn(); }
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawSpring") ) { return drawSpring_dyn(); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return drawPolygon_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { return zpp_inner_zn; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawFilledCircle") ) { return drawFilledCircle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawFilledPolygon") ) { return drawFilledPolygon_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"drawFilledTriangle") ) { return drawFilledTriangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ShapeDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"zpp_inner_zn") ) { zpp_inner_zn=inValue.Cast< ::zpp_nape::util::ZPP_ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShapeDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("zpp_inner_zn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("drawSpring"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawFilledPolygon"),
	HX_CSTRING("drawPolygon"),
	HX_CSTRING("drawFilledCircle"),
	HX_CSTRING("drawFilledTriangle"),
	HX_CSTRING("drawAABB"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawCurve"),
	HX_CSTRING("drawLine"),
	HX_CSTRING("clear"),
	HX_CSTRING("thickness"),
	HX_CSTRING("zpp_inner_zn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeDebug_obj::__mClass,"__mClass");
};

Class ShapeDebug_obj::__mClass;

void ShapeDebug_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nape.util.ShapeDebug"), hx::TCanCast< ShapeDebug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ShapeDebug_obj::__boot()
{
}

} // end namespace nape
} // end namespace util
