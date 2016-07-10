#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nape_Config
#include <nape/Config.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPoly
#include <nape/geom/GeomPoly.h>
#endif
#ifndef INCLUDED_nape_geom_GeomPolyList
#include <nape/geom/GeomPolyList.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomPoly
#include <zpp_nape/geom/ZPP_GeomPoly.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/geom/ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchSpan
#include <zpp_nape/geom/ZPP_MarchSpan.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_MarchingSquares
#include <zpp_nape/geom/ZPP_MarchingSquares.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Array2_Float
#include <zpp_nape/util/Array2_Float.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/util/Array2_zpp_nape_geom_ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_MarchPair
#include <zpp_nape/util/Array2_zpp_nape_geom_ZPP_MarchPair.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_GeomPolyList
#include <zpp_nape/util/ZPP_GeomPolyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
namespace zpp_nape{
namespace geom{

Void ZPP_MarchingSquares_obj::__construct()
{
HX_STACK_PUSH("ZPP_MarchingSquares::new","zpp_nape/geom/MarchingSquares.hx",272);
{
}
;
	return null();
}

ZPP_MarchingSquares_obj::~ZPP_MarchingSquares_obj() { }

Dynamic ZPP_MarchingSquares_obj::__CreateEmpty() { return  new ZPP_MarchingSquares_obj; }
hx::ObjectPtr< ZPP_MarchingSquares_obj > ZPP_MarchingSquares_obj::__new()
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Dynamic ZPP_MarchingSquares_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZPP_MarchingSquares_obj > result = new ZPP_MarchingSquares_obj();
	result->__construct();
	return result;}

Float ZPP_MarchingSquares_obj::ylerp( Float y0,Float y1,Float x,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::ylerp","zpp_nape/geom/MarchingSquares.hx",1907);
	HX_STACK_THIS(this);
	HX_STACK_ARG(y0,"y0");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(quality,"quality");
	struct _Function_1_1{
		inline static Float Block( Float &v1,Float &y1,Float &v0,Float &y0){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1908);
			{
				HX_STACK_LINE(1908)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1908)
				Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1908)
				if (((t < (int)0))){
					HX_STACK_LINE(1908)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1908)
					if (((t > (int)1))){
						HX_STACK_LINE(1908)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1908)
				return (y0 + (t * ((y1 - y0))));
			}
			return null();
		}
	};
	HX_STACK_LINE(1908)
	Float ym = (  (((v0 == (int)0))) ? Float(y0) : Float((  (((v1 == (int)0))) ? Float(y1) : Float(_Function_1_1::Block(v1,y1,v0,y0)) )) );		HX_STACK_VAR(ym,"ym");
	HX_STACK_LINE(1909)
	while(((bool((bool(((quality)-- != (int)0)) && bool((y0 < ym)))) && bool((ym < y1))))){
		HX_STACK_LINE(1910)
		Float vm = iso(x,ym).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1911)
		if (((vm == (int)0))){
			HX_STACK_LINE(1911)
			break;
		}
		HX_STACK_LINE(1912)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1913)
			y1 = ym;
			HX_STACK_LINE(1914)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1917)
			y0 = ym;
			HX_STACK_LINE(1918)
			v0 = vm;
		}
		struct _Function_2_1{
			inline static Float Block( Float &v1,Float &y1,Float &v0,Float &y0){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1920);
				{
					HX_STACK_LINE(1920)
					Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
					HX_STACK_LINE(1920)
					Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1920)
					if (((t < (int)0))){
						HX_STACK_LINE(1920)
						t = (int)0;
					}
					else{
						HX_STACK_LINE(1920)
						if (((t > (int)1))){
							HX_STACK_LINE(1920)
							t = (int)1;
						}
					}
					HX_STACK_LINE(1920)
					return (y0 + (t * ((y1 - y0))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1920)
		ym = (  (((v0 == (int)0))) ? Float(y0) : Float((  (((v1 == (int)0))) ? Float(y1) : Float(_Function_2_1::Block(v1,y1,v0,y0)) )) );
	}
	HX_STACK_LINE(1922)
	return ym;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,ylerp,return )

Float ZPP_MarchingSquares_obj::xlerp( Float x0,Float x1,Float y,Float v0,Float v1,Dynamic iso,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::xlerp","zpp_nape/geom/MarchingSquares.hx",1890);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(quality,"quality");
	struct _Function_1_1{
		inline static Float Block( Float &v1,Float &v0,Float &x1,Float &x0){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1891);
			{
				HX_STACK_LINE(1891)
				Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
				HX_STACK_LINE(1891)
				Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1891)
				if (((t < (int)0))){
					HX_STACK_LINE(1891)
					t = (int)0;
				}
				else{
					HX_STACK_LINE(1891)
					if (((t > (int)1))){
						HX_STACK_LINE(1891)
						t = (int)1;
					}
				}
				HX_STACK_LINE(1891)
				return (x0 + (t * ((x1 - x0))));
			}
			return null();
		}
	};
	HX_STACK_LINE(1891)
	Float xm = (  (((v0 == (int)0))) ? Float(x0) : Float((  (((v1 == (int)0))) ? Float(x1) : Float(_Function_1_1::Block(v1,v0,x1,x0)) )) );		HX_STACK_VAR(xm,"xm");
	HX_STACK_LINE(1892)
	while(((bool((bool(((quality)-- != (int)0)) && bool((x0 < xm)))) && bool((xm < x1))))){
		HX_STACK_LINE(1893)
		Float vm = iso(xm,y).Cast< Float >();		HX_STACK_VAR(vm,"vm");
		HX_STACK_LINE(1894)
		if (((vm == (int)0))){
			HX_STACK_LINE(1894)
			break;
		}
		HX_STACK_LINE(1895)
		if ((((v0 * vm) < (int)0))){
			HX_STACK_LINE(1896)
			x1 = xm;
			HX_STACK_LINE(1897)
			v1 = vm;
		}
		else{
			HX_STACK_LINE(1900)
			x0 = xm;
			HX_STACK_LINE(1901)
			v0 = vm;
		}
		struct _Function_2_1{
			inline static Float Block( Float &v1,Float &v0,Float &x1,Float &x0){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1903);
				{
					HX_STACK_LINE(1903)
					Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
					HX_STACK_LINE(1903)
					Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(1903)
					if (((t < (int)0))){
						HX_STACK_LINE(1903)
						t = (int)0;
					}
					else{
						HX_STACK_LINE(1903)
						if (((t > (int)1))){
							HX_STACK_LINE(1903)
							t = (int)1;
						}
					}
					HX_STACK_LINE(1903)
					return (x0 + (t * ((x1 - x0))));
				}
				return null();
			}
		};
		HX_STACK_LINE(1903)
		xm = (  (((v0 == (int)0))) ? Float(x0) : Float((  (((v1 == (int)0))) ? Float(x1) : Float(_Function_2_1::Block(v1,v0,x1,x0)) )) );
	}
	HX_STACK_LINE(1905)
	return xm;
}


HX_DEFINE_DYNAMIC_FUNC7(ZPP_MarchingSquares_obj,xlerp,return )

Float ZPP_MarchingSquares_obj::lerp( Float x0,Float x1,Float v0,Float v1){
	HX_STACK_PUSH("ZPP_MarchingSquares::lerp","zpp_nape/geom/MarchingSquares.hx",1879);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(v0,"v0");
	HX_STACK_ARG(v1,"v1");
	HX_STACK_LINE(1879)
	if (((v0 == (int)0))){
		HX_STACK_LINE(1880)
		return x0;
	}
	else{
		HX_STACK_LINE(1881)
		if (((v1 == (int)0))){
			HX_STACK_LINE(1881)
			return x1;
		}
		else{
			HX_STACK_LINE(1883)
			Float dv = (v0 - v1);		HX_STACK_VAR(dv,"dv");
			HX_STACK_LINE(1884)
			Float t = (  ((((dv * dv) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon)))) ? Float(0.5) : Float((Float(v0) / Float(dv))) );		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(1885)
			if (((t < (int)0))){
				HX_STACK_LINE(1885)
				t = (int)0;
			}
			else{
				HX_STACK_LINE(1886)
				if (((t > (int)1))){
					HX_STACK_LINE(1886)
					t = (int)1;
				}
			}
			HX_STACK_LINE(1887)
			return (x0 + (t * ((x1 - x0))));
		}
	}
	HX_STACK_LINE(1879)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(ZPP_MarchingSquares_obj,lerp,return )

::zpp_nape::geom::ZPP_MarchPair ZPP_MarchingSquares_obj::marchSquare( Dynamic iso,::zpp_nape::util::Array2_Float isos,::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert ints,Float x0,Float y0,Float x1,Float y1,int xn,int yn,bool fstx,bool fsty,bool sndx,bool sndy,int quality){
	HX_STACK_PUSH("ZPP_MarchingSquares::marchSquare","zpp_nape/geom/MarchingSquares.hx",951);
	HX_STACK_THIS(this);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(isos,"isos");
	HX_STACK_ARG(ints,"ints");
	HX_STACK_ARG(x0,"x0");
	HX_STACK_ARG(y0,"y0");
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(xn,"xn");
	HX_STACK_ARG(yn,"yn");
	HX_STACK_ARG(fstx,"fstx");
	HX_STACK_ARG(fsty,"fsty");
	HX_STACK_ARG(sndx,"sndx");
	HX_STACK_ARG(sndy,"sndy");
	HX_STACK_ARG(quality,"quality");
	HX_STACK_LINE(952)
	int key = (int)0;		HX_STACK_VAR(key,"key");
	struct _Function_1_1{
		inline static Float Block( ::zpp_nape::util::Array2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",953);
			{
				HX_STACK_LINE(953)
				{
				}
				HX_STACK_LINE(953)
				return isos->list->__get(((yn * isos->width) + xn));
			}
			return null();
		}
	};
	HX_STACK_LINE(953)
	Float v0 = _Function_1_1::Block(isos,xn,yn);		HX_STACK_VAR(v0,"v0");
	HX_STACK_LINE(954)
	if (((v0 < (int)0))){
		HX_STACK_LINE(954)
		hx::OrEq(key,(int)8);
	}
	struct _Function_1_2{
		inline static Float Block( ::zpp_nape::util::Array2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",955);
			{
				HX_STACK_LINE(955)
				{
				}
				HX_STACK_LINE(955)
				return isos->list->__get(((yn * isos->width) + ((xn + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(955)
	Float v1 = _Function_1_2::Block(isos,xn,yn);		HX_STACK_VAR(v1,"v1");
	HX_STACK_LINE(956)
	if (((v1 < (int)0))){
		HX_STACK_LINE(956)
		hx::OrEq(key,(int)4);
	}
	struct _Function_1_3{
		inline static Float Block( ::zpp_nape::util::Array2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",957);
			{
				HX_STACK_LINE(957)
				{
				}
				HX_STACK_LINE(957)
				return isos->list->__get(((((yn + (int)1)) * isos->width) + ((xn + (int)1))));
			}
			return null();
		}
	};
	HX_STACK_LINE(957)
	Float v2 = _Function_1_3::Block(isos,xn,yn);		HX_STACK_VAR(v2,"v2");
	HX_STACK_LINE(958)
	if (((v2 < (int)0))){
		HX_STACK_LINE(958)
		hx::OrEq(key,(int)2);
	}
	struct _Function_1_4{
		inline static Float Block( ::zpp_nape::util::Array2_Float &isos,int &xn,int &yn){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",959);
			{
				HX_STACK_LINE(959)
				{
				}
				HX_STACK_LINE(959)
				return isos->list->__get(((((yn + (int)1)) * isos->width) + xn));
			}
			return null();
		}
	};
	HX_STACK_LINE(959)
	Float v3 = _Function_1_4::Block(isos,xn,yn);		HX_STACK_VAR(v3,"v3");
	HX_STACK_LINE(960)
	if (((v3 < (int)0))){
		HX_STACK_LINE(960)
		hx::OrEq(key,(int)1);
	}
	HX_STACK_LINE(961)
	if (((key == (int)0))){
		HX_STACK_LINE(961)
		return null();
	}
	else{
		HX_STACK_LINE(963)
		::zpp_nape::geom::ZPP_MarchPair ret;		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(964)
		{
			HX_STACK_LINE(965)
			if (((::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool == null()))){
				HX_STACK_LINE(965)
				ret = ::zpp_nape::geom::ZPP_MarchPair_obj::__new();
			}
			else{
				HX_STACK_LINE(972)
				ret = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
				HX_STACK_LINE(973)
				::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = ret->next;
				HX_STACK_LINE(974)
				ret->next = null();
			}
			HX_STACK_LINE(979)
			Dynamic();
		}
		HX_STACK_LINE(981)
		if (((bool((key != (int)10)) && bool((key != (int)5))))){
			HX_STACK_LINE(982)
			int val = ::zpp_nape::geom::ZPP_MarchingSquares_obj::look_march->__get(key);		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(983)
			{
				HX_STACK_LINE(984)
				ret->okey1 = val;
				HX_STACK_LINE(985)
				{
					HX_STACK_LINE(985)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(985)
					while(((_g < (int)8))){
						HX_STACK_LINE(985)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(986)
						if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
							HX_STACK_LINE(987)
							::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(988)
							if (((i == (int)0))){
								struct _Function_8_1{
									inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",989);
										{
											HX_STACK_LINE(989)
											::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
											HX_STACK_LINE(989)
											{
												HX_STACK_LINE(989)
												if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
													HX_STACK_LINE(989)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
												}
												else{
													HX_STACK_LINE(989)
													ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
													HX_STACK_LINE(989)
													::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
													HX_STACK_LINE(989)
													ret1->next = null();
												}
												HX_STACK_LINE(989)
												ret1->forced = false;
											}
											HX_STACK_LINE(989)
											{
												HX_STACK_LINE(989)
												ret1->x = x0;
												HX_STACK_LINE(989)
												ret1->y = y0;
												HX_STACK_LINE(989)
												{
												}
												HX_STACK_LINE(989)
												{
												}
											}
											HX_STACK_LINE(989)
											return ret1;
										}
										return null();
									}
								};
								HX_STACK_LINE(989)
								p = _Function_8_1::Block(x0,y0);
								HX_STACK_LINE(990)
								if (((bool(fstx) || bool(fsty)))){
									HX_STACK_LINE(990)
									p->forced = true;
								}
							}
							else{
								HX_STACK_LINE(992)
								if (((i == (int)2))){
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",993);
											{
												HX_STACK_LINE(993)
												::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
												HX_STACK_LINE(993)
												{
													HX_STACK_LINE(993)
													if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
														HX_STACK_LINE(993)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
													}
													else{
														HX_STACK_LINE(993)
														ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
														HX_STACK_LINE(993)
														::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
														HX_STACK_LINE(993)
														ret1->next = null();
													}
													HX_STACK_LINE(993)
													ret1->forced = false;
												}
												HX_STACK_LINE(993)
												{
													HX_STACK_LINE(993)
													ret1->x = x1;
													HX_STACK_LINE(993)
													ret1->y = y0;
													HX_STACK_LINE(993)
													{
													}
													HX_STACK_LINE(993)
													{
													}
												}
												HX_STACK_LINE(993)
												return ret1;
											}
											return null();
										}
									};
									HX_STACK_LINE(993)
									p = _Function_9_1::Block(x1,y0);
									HX_STACK_LINE(994)
									if (((bool(sndx) || bool(fsty)))){
										HX_STACK_LINE(994)
										p->forced = true;
									}
								}
								else{
									HX_STACK_LINE(996)
									if (((i == (int)4))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",997);
												{
													HX_STACK_LINE(997)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(997)
													{
														HX_STACK_LINE(997)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(997)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(997)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(997)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(997)
															ret1->next = null();
														}
														HX_STACK_LINE(997)
														ret1->forced = false;
													}
													HX_STACK_LINE(997)
													{
														HX_STACK_LINE(997)
														ret1->x = x1;
														HX_STACK_LINE(997)
														ret1->y = y1;
														HX_STACK_LINE(997)
														{
														}
														HX_STACK_LINE(997)
														{
														}
													}
													HX_STACK_LINE(997)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(997)
										p = _Function_10_1::Block(x1,y1);
										HX_STACK_LINE(998)
										if (((bool(sndx) || bool(sndy)))){
											HX_STACK_LINE(998)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1000)
										if (((i == (int)6))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1001);
													{
														HX_STACK_LINE(1001)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1001)
														{
															HX_STACK_LINE(1001)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1001)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1001)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1001)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1001)
																ret1->next = null();
															}
															HX_STACK_LINE(1001)
															ret1->forced = false;
														}
														HX_STACK_LINE(1001)
														{
															HX_STACK_LINE(1001)
															ret1->x = x0;
															HX_STACK_LINE(1001)
															ret1->y = y1;
															HX_STACK_LINE(1001)
															{
															}
															HX_STACK_LINE(1001)
															{
															}
														}
														HX_STACK_LINE(1001)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1001)
											p = _Function_11_1::Block(x0,y1);
											HX_STACK_LINE(1002)
											if (((bool(fstx) || bool(sndy)))){
												HX_STACK_LINE(1002)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1004)
											if (((i == (int)1))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1005);
														{
															HX_STACK_LINE(1005)
															{
															}
															HX_STACK_LINE(1005)
															return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
														}
														return null();
													}
												};
												HX_STACK_LINE(1005)
												p = _Function_12_1::Block(ints,xn,yn);
												HX_STACK_LINE(1006)
												if (((p == null()))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1007);
															{
																HX_STACK_LINE(1007)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1007)
																{
																	HX_STACK_LINE(1007)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1007)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1007)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1007)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1007)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1007)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1007)
																{
																	HX_STACK_LINE(1007)
																	ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																	HX_STACK_LINE(1007)
																	ret1->y = y0;
																	HX_STACK_LINE(1007)
																	{
																	}
																	HX_STACK_LINE(1007)
																	{
																	}
																}
																HX_STACK_LINE(1007)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1007)
													p = _Function_13_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
													HX_STACK_LINE(1008)
													{
														HX_STACK_LINE(1008)
														{
														}
														HX_STACK_LINE(1008)
														ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
													}
												}
												else{
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1010);
															{
																HX_STACK_LINE(1010)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1010)
																{
																	HX_STACK_LINE(1010)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1010)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1010)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1010)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1010)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1010)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1010)
																{
																	HX_STACK_LINE(1010)
																	ret1->x = p->x;
																	HX_STACK_LINE(1010)
																	ret1->y = p->y;
																	HX_STACK_LINE(1010)
																	{
																	}
																	HX_STACK_LINE(1010)
																	{
																	}
																}
																HX_STACK_LINE(1010)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1010)
													p = _Function_13_1::Block(p);
												}
												HX_STACK_LINE(1011)
												if ((fsty)){
													HX_STACK_LINE(1011)
													p->forced = true;
												}
												HX_STACK_LINE(1012)
												if (((bool((p->x == x0)) || bool((p->x == x1))))){
													HX_STACK_LINE(1012)
													if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
														HX_STACK_LINE(1013)
														hx::XorEq(val,(int)2);
													}
												}
											}
											else{
												HX_STACK_LINE(1016)
												if (((i == (int)5))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1017);
															{
																HX_STACK_LINE(1017)
																{
																}
																HX_STACK_LINE(1017)
																return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
															}
															return null();
														}
													};
													HX_STACK_LINE(1017)
													p = _Function_13_1::Block(ints,xn,yn);
													HX_STACK_LINE(1018)
													if (((p == null()))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1019);
																{
																	HX_STACK_LINE(1019)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1019)
																	{
																		HX_STACK_LINE(1019)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1019)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1019)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1019)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1019)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1019)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1019)
																	{
																		HX_STACK_LINE(1019)
																		ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																		HX_STACK_LINE(1019)
																		ret1->y = y1;
																		HX_STACK_LINE(1019)
																		{
																		}
																		HX_STACK_LINE(1019)
																		{
																		}
																	}
																	HX_STACK_LINE(1019)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1019)
														p = _Function_14_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
														HX_STACK_LINE(1020)
														{
															HX_STACK_LINE(1020)
															{
															}
															HX_STACK_LINE(1020)
															ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
														}
													}
													else{
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1022);
																{
																	HX_STACK_LINE(1022)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1022)
																	{
																		HX_STACK_LINE(1022)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1022)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1022)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1022)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1022)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1022)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1022)
																	{
																		HX_STACK_LINE(1022)
																		ret1->x = p->x;
																		HX_STACK_LINE(1022)
																		ret1->y = p->y;
																		HX_STACK_LINE(1022)
																		{
																		}
																		HX_STACK_LINE(1022)
																		{
																		}
																	}
																	HX_STACK_LINE(1022)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1022)
														p = _Function_14_1::Block(p);
													}
													HX_STACK_LINE(1023)
													if ((sndy)){
														HX_STACK_LINE(1023)
														p->forced = true;
													}
													HX_STACK_LINE(1024)
													if (((bool((p->x == x0)) || bool((p->x == x1))))){
														HX_STACK_LINE(1024)
														if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
															HX_STACK_LINE(1025)
															hx::XorEq(val,(int)32);
														}
													}
												}
												else{
													HX_STACK_LINE(1028)
													if (((i == (int)3))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1029);
																{
																	HX_STACK_LINE(1029)
																	{
																	}
																	HX_STACK_LINE(1029)
																	return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																}
																return null();
															}
														};
														HX_STACK_LINE(1029)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1030)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1031);
																	{
																		HX_STACK_LINE(1031)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1031)
																		{
																			HX_STACK_LINE(1031)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1031)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1031)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1031)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1031)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1031)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1031)
																		{
																			HX_STACK_LINE(1031)
																			ret1->x = x1;
																			HX_STACK_LINE(1031)
																			ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																			HX_STACK_LINE(1031)
																			{
																			}
																			HX_STACK_LINE(1031)
																			{
																			}
																		}
																		HX_STACK_LINE(1031)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1031)
															p = _Function_15_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
															HX_STACK_LINE(1032)
															{
																HX_STACK_LINE(1032)
																{
																}
																HX_STACK_LINE(1032)
																ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1034);
																	{
																		HX_STACK_LINE(1034)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1034)
																		{
																			HX_STACK_LINE(1034)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1034)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1034)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1034)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1034)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1034)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1034)
																		{
																			HX_STACK_LINE(1034)
																			ret1->x = p->x;
																			HX_STACK_LINE(1034)
																			ret1->y = p->y;
																			HX_STACK_LINE(1034)
																			{
																			}
																			HX_STACK_LINE(1034)
																			{
																			}
																		}
																		HX_STACK_LINE(1034)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1034)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1035)
														if ((sndx)){
															HX_STACK_LINE(1035)
															p->forced = true;
														}
														HX_STACK_LINE(1036)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1036)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																HX_STACK_LINE(1037)
																hx::XorEq(val,(int)8);
															}
														}
													}
													else{
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1041);
																{
																	HX_STACK_LINE(1041)
																	{
																	}
																	HX_STACK_LINE(1041)
																	return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1041)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1042)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1043);
																	{
																		HX_STACK_LINE(1043)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1043)
																		{
																			HX_STACK_LINE(1043)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1043)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1043)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1043)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1043)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1043)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1043)
																		{
																			HX_STACK_LINE(1043)
																			ret1->x = x0;
																			HX_STACK_LINE(1043)
																			ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																			HX_STACK_LINE(1043)
																			{
																			}
																			HX_STACK_LINE(1043)
																			{
																			}
																		}
																		HX_STACK_LINE(1043)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1043)
															p = _Function_15_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
															HX_STACK_LINE(1044)
															{
																HX_STACK_LINE(1044)
																{
																}
																HX_STACK_LINE(1044)
																ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1046);
																	{
																		HX_STACK_LINE(1046)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1046)
																		{
																			HX_STACK_LINE(1046)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1046)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1046)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1046)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1046)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1046)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1046)
																		{
																			HX_STACK_LINE(1046)
																			ret1->x = p->x;
																			HX_STACK_LINE(1046)
																			ret1->y = p->y;
																			HX_STACK_LINE(1046)
																			{
																			}
																			HX_STACK_LINE(1046)
																			{
																			}
																		}
																		HX_STACK_LINE(1046)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1046)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1047)
														if ((fstx)){
															HX_STACK_LINE(1047)
															p->forced = true;
														}
														HX_STACK_LINE(1048)
														if (((bool((p->y == y0)) || bool((p->y == y1))))){
															HX_STACK_LINE(1048)
															if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																HX_STACK_LINE(1049)
																hx::XorEq(val,(int)128);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							struct _Function_7_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1052);
									{
										HX_STACK_LINE(1053)
										::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(1054)
										if (((ret->p1 == null()))){
											HX_STACK_LINE(1054)
											ret->p1 = obj->prev = obj->next = obj;
										}
										else{
											HX_STACK_LINE(1056)
											obj->prev = ret->p1;
											HX_STACK_LINE(1057)
											obj->next = ret->p1->next;
											HX_STACK_LINE(1058)
											ret->p1->next->prev = obj;
											HX_STACK_LINE(1059)
											ret->p1->next = obj;
										}
										HX_STACK_LINE(1061)
										return obj;
									}
									return null();
								}
							};
							HX_STACK_LINE(1052)
							ret->p1 = _Function_7_1::Block(p,ret);
						}
					}
				}
				HX_STACK_LINE(1065)
				ret->p1 = ret->p1->next;
				HX_STACK_LINE(1066)
				ret->key1 = val;
				HX_STACK_LINE(1067)
				if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
					HX_STACK_LINE(1068)
					val = (int)0;
					HX_STACK_LINE(1069)
					ret->key1 = (int)0;
					HX_STACK_LINE(1070)
					ret->p1 = null();
				}
			}
			HX_STACK_LINE(1073)
			if (((val == (int)0))){
				HX_STACK_LINE(1073)
				ret = null();
			}
			else{
				HX_STACK_LINE(1075)
				ret->pr = ret->p1;
				HX_STACK_LINE(1076)
				ret->okeyr = ret->okey1;
				HX_STACK_LINE(1077)
				ret->keyr = ret->key1;
			}
		}
		else{
			HX_STACK_LINE(1081)
			bool mid = (iso((0.5 * ((x0 + x1))),(0.5 * ((y0 + y1)))).Cast< Float >() < (int)0);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(1082)
			if (((key == (int)10))){
				HX_STACK_LINE(1082)
				if ((mid)){
					HX_STACK_LINE(1084)
					int val = (int)187;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1085)
					{
						HX_STACK_LINE(1086)
						ret->okey1 = val;
						HX_STACK_LINE(1087)
						{
							HX_STACK_LINE(1087)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1087)
							while(((_g < (int)8))){
								HX_STACK_LINE(1087)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1088)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1089)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1090)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1091);
												{
													HX_STACK_LINE(1091)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1091)
													{
														HX_STACK_LINE(1091)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1091)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1091)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1091)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1091)
															ret1->next = null();
														}
														HX_STACK_LINE(1091)
														ret1->forced = false;
													}
													HX_STACK_LINE(1091)
													{
														HX_STACK_LINE(1091)
														ret1->x = x0;
														HX_STACK_LINE(1091)
														ret1->y = y0;
														HX_STACK_LINE(1091)
														{
														}
														HX_STACK_LINE(1091)
														{
														}
													}
													HX_STACK_LINE(1091)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1091)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1092)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1092)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1094)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1095);
													{
														HX_STACK_LINE(1095)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1095)
														{
															HX_STACK_LINE(1095)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1095)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1095)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1095)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1095)
																ret1->next = null();
															}
															HX_STACK_LINE(1095)
															ret1->forced = false;
														}
														HX_STACK_LINE(1095)
														{
															HX_STACK_LINE(1095)
															ret1->x = x1;
															HX_STACK_LINE(1095)
															ret1->y = y0;
															HX_STACK_LINE(1095)
															{
															}
															HX_STACK_LINE(1095)
															{
															}
														}
														HX_STACK_LINE(1095)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1095)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1096)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1096)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1098)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1099);
														{
															HX_STACK_LINE(1099)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1099)
															{
																HX_STACK_LINE(1099)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1099)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1099)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1099)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1099)
																	ret1->next = null();
																}
																HX_STACK_LINE(1099)
																ret1->forced = false;
															}
															HX_STACK_LINE(1099)
															{
																HX_STACK_LINE(1099)
																ret1->x = x1;
																HX_STACK_LINE(1099)
																ret1->y = y1;
																HX_STACK_LINE(1099)
																{
																}
																HX_STACK_LINE(1099)
																{
																}
															}
															HX_STACK_LINE(1099)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1099)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1100)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1100)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1102)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1103);
															{
																HX_STACK_LINE(1103)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1103)
																{
																	HX_STACK_LINE(1103)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1103)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1103)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1103)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1103)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1103)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1103)
																{
																	HX_STACK_LINE(1103)
																	ret1->x = x0;
																	HX_STACK_LINE(1103)
																	ret1->y = y1;
																	HX_STACK_LINE(1103)
																	{
																	}
																	HX_STACK_LINE(1103)
																	{
																	}
																}
																HX_STACK_LINE(1103)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1103)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1104)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1104)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1106)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1107);
																{
																	HX_STACK_LINE(1107)
																	{
																	}
																	HX_STACK_LINE(1107)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1107)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1108)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1109);
																	{
																		HX_STACK_LINE(1109)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1109)
																		{
																			HX_STACK_LINE(1109)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1109)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1109)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1109)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1109)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1109)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1109)
																		{
																			HX_STACK_LINE(1109)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1109)
																			ret1->y = y0;
																			HX_STACK_LINE(1109)
																			{
																			}
																			HX_STACK_LINE(1109)
																			{
																			}
																		}
																		HX_STACK_LINE(1109)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1109)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1110)
															{
																HX_STACK_LINE(1110)
																{
																}
																HX_STACK_LINE(1110)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1112);
																	{
																		HX_STACK_LINE(1112)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1112)
																		{
																			HX_STACK_LINE(1112)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1112)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1112)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1112)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1112)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1112)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1112)
																		{
																			HX_STACK_LINE(1112)
																			ret1->x = p->x;
																			HX_STACK_LINE(1112)
																			ret1->y = p->y;
																			HX_STACK_LINE(1112)
																			{
																			}
																			HX_STACK_LINE(1112)
																			{
																			}
																		}
																		HX_STACK_LINE(1112)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1112)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1113)
														if ((fsty)){
															HX_STACK_LINE(1113)
															p->forced = true;
														}
														HX_STACK_LINE(1114)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1114)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1115)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1118)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1119);
																	{
																		HX_STACK_LINE(1119)
																		{
																		}
																		HX_STACK_LINE(1119)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1119)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1120)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1121);
																		{
																			HX_STACK_LINE(1121)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1121)
																			{
																				HX_STACK_LINE(1121)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1121)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1121)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1121)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1121)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1121)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1121)
																			{
																				HX_STACK_LINE(1121)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1121)
																				ret1->y = y1;
																				HX_STACK_LINE(1121)
																				{
																				}
																				HX_STACK_LINE(1121)
																				{
																				}
																			}
																			HX_STACK_LINE(1121)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1121)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1122)
																{
																	HX_STACK_LINE(1122)
																	{
																	}
																	HX_STACK_LINE(1122)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1124);
																		{
																			HX_STACK_LINE(1124)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1124)
																			{
																				HX_STACK_LINE(1124)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1124)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1124)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1124)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1124)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1124)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1124)
																			{
																				HX_STACK_LINE(1124)
																				ret1->x = p->x;
																				HX_STACK_LINE(1124)
																				ret1->y = p->y;
																				HX_STACK_LINE(1124)
																				{
																				}
																				HX_STACK_LINE(1124)
																				{
																				}
																			}
																			HX_STACK_LINE(1124)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1124)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1125)
															if ((sndy)){
																HX_STACK_LINE(1125)
																p->forced = true;
															}
															HX_STACK_LINE(1126)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1126)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1127)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1130)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1131);
																		{
																			HX_STACK_LINE(1131)
																			{
																			}
																			HX_STACK_LINE(1131)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1131)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1132)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1133);
																			{
																				HX_STACK_LINE(1133)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1133)
																				{
																					HX_STACK_LINE(1133)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1133)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1133)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1133)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1133)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1133)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1133)
																				{
																					HX_STACK_LINE(1133)
																					ret1->x = x1;
																					HX_STACK_LINE(1133)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1133)
																					{
																					}
																					HX_STACK_LINE(1133)
																					{
																					}
																				}
																				HX_STACK_LINE(1133)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1133)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1134)
																	{
																		HX_STACK_LINE(1134)
																		{
																		}
																		HX_STACK_LINE(1134)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1136);
																			{
																				HX_STACK_LINE(1136)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1136)
																				{
																					HX_STACK_LINE(1136)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1136)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1136)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1136)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1136)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1136)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1136)
																				{
																					HX_STACK_LINE(1136)
																					ret1->x = p->x;
																					HX_STACK_LINE(1136)
																					ret1->y = p->y;
																					HX_STACK_LINE(1136)
																					{
																					}
																					HX_STACK_LINE(1136)
																					{
																					}
																				}
																				HX_STACK_LINE(1136)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1136)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1137)
																if ((sndx)){
																	HX_STACK_LINE(1137)
																	p->forced = true;
																}
																HX_STACK_LINE(1138)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1138)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1139)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1143);
																		{
																			HX_STACK_LINE(1143)
																			{
																			}
																			HX_STACK_LINE(1143)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1143)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1144)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1145);
																			{
																				HX_STACK_LINE(1145)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1145)
																				{
																					HX_STACK_LINE(1145)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1145)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1145)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1145)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1145)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1145)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1145)
																				{
																					HX_STACK_LINE(1145)
																					ret1->x = x0;
																					HX_STACK_LINE(1145)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1145)
																					{
																					}
																					HX_STACK_LINE(1145)
																					{
																					}
																				}
																				HX_STACK_LINE(1145)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1145)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1146)
																	{
																		HX_STACK_LINE(1146)
																		{
																		}
																		HX_STACK_LINE(1146)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1148);
																			{
																				HX_STACK_LINE(1148)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1148)
																				{
																					HX_STACK_LINE(1148)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1148)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1148)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1148)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1148)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1148)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1148)
																				{
																					HX_STACK_LINE(1148)
																					ret1->x = p->x;
																					HX_STACK_LINE(1148)
																					ret1->y = p->y;
																					HX_STACK_LINE(1148)
																					{
																					}
																					HX_STACK_LINE(1148)
																					{
																					}
																				}
																				HX_STACK_LINE(1148)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1148)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1149)
																if ((fstx)){
																	HX_STACK_LINE(1149)
																	p->forced = true;
																}
																HX_STACK_LINE(1150)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1150)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1151)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1154);
											{
												HX_STACK_LINE(1155)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1156)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1156)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1158)
													obj->prev = ret->p1;
													HX_STACK_LINE(1159)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1160)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1161)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1163)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1154)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1167)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1168)
						ret->key1 = val;
						HX_STACK_LINE(1169)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1170)
							val = (int)0;
							HX_STACK_LINE(1171)
							ret->key1 = (int)0;
							HX_STACK_LINE(1172)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1175)
					if (((val == (int)0))){
						HX_STACK_LINE(1175)
						ret = null();
					}
					else{
						HX_STACK_LINE(1177)
						ret->pr = ret->p1;
						HX_STACK_LINE(1178)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1179)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1183)
					int val = (int)131;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1184)
					{
						HX_STACK_LINE(1185)
						ret->okey1 = val;
						HX_STACK_LINE(1186)
						{
							HX_STACK_LINE(1186)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1186)
							while(((_g < (int)8))){
								HX_STACK_LINE(1186)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1187)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1188)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1189)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1190);
												{
													HX_STACK_LINE(1190)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1190)
													{
														HX_STACK_LINE(1190)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1190)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1190)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1190)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1190)
															ret1->next = null();
														}
														HX_STACK_LINE(1190)
														ret1->forced = false;
													}
													HX_STACK_LINE(1190)
													{
														HX_STACK_LINE(1190)
														ret1->x = x0;
														HX_STACK_LINE(1190)
														ret1->y = y0;
														HX_STACK_LINE(1190)
														{
														}
														HX_STACK_LINE(1190)
														{
														}
													}
													HX_STACK_LINE(1190)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1190)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1191)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1191)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1193)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1194);
													{
														HX_STACK_LINE(1194)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1194)
														{
															HX_STACK_LINE(1194)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1194)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1194)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1194)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1194)
																ret1->next = null();
															}
															HX_STACK_LINE(1194)
															ret1->forced = false;
														}
														HX_STACK_LINE(1194)
														{
															HX_STACK_LINE(1194)
															ret1->x = x1;
															HX_STACK_LINE(1194)
															ret1->y = y0;
															HX_STACK_LINE(1194)
															{
															}
															HX_STACK_LINE(1194)
															{
															}
														}
														HX_STACK_LINE(1194)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1194)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1195)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1195)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1197)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1198);
														{
															HX_STACK_LINE(1198)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1198)
															{
																HX_STACK_LINE(1198)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1198)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1198)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1198)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1198)
																	ret1->next = null();
																}
																HX_STACK_LINE(1198)
																ret1->forced = false;
															}
															HX_STACK_LINE(1198)
															{
																HX_STACK_LINE(1198)
																ret1->x = x1;
																HX_STACK_LINE(1198)
																ret1->y = y1;
																HX_STACK_LINE(1198)
																{
																}
																HX_STACK_LINE(1198)
																{
																}
															}
															HX_STACK_LINE(1198)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1198)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1199)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1199)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1201)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1202);
															{
																HX_STACK_LINE(1202)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1202)
																{
																	HX_STACK_LINE(1202)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1202)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1202)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1202)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1202)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1202)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1202)
																{
																	HX_STACK_LINE(1202)
																	ret1->x = x0;
																	HX_STACK_LINE(1202)
																	ret1->y = y1;
																	HX_STACK_LINE(1202)
																	{
																	}
																	HX_STACK_LINE(1202)
																	{
																	}
																}
																HX_STACK_LINE(1202)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1202)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1203)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1203)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1205)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1206);
																{
																	HX_STACK_LINE(1206)
																	{
																	}
																	HX_STACK_LINE(1206)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1206)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1207)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1208);
																	{
																		HX_STACK_LINE(1208)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1208)
																		{
																			HX_STACK_LINE(1208)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1208)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1208)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1208)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1208)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1208)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1208)
																		{
																			HX_STACK_LINE(1208)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1208)
																			ret1->y = y0;
																			HX_STACK_LINE(1208)
																			{
																			}
																			HX_STACK_LINE(1208)
																			{
																			}
																		}
																		HX_STACK_LINE(1208)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1208)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1209)
															{
																HX_STACK_LINE(1209)
																{
																}
																HX_STACK_LINE(1209)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1211);
																	{
																		HX_STACK_LINE(1211)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1211)
																		{
																			HX_STACK_LINE(1211)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1211)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1211)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1211)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1211)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1211)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1211)
																		{
																			HX_STACK_LINE(1211)
																			ret1->x = p->x;
																			HX_STACK_LINE(1211)
																			ret1->y = p->y;
																			HX_STACK_LINE(1211)
																			{
																			}
																			HX_STACK_LINE(1211)
																			{
																			}
																		}
																		HX_STACK_LINE(1211)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1211)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1212)
														if ((fsty)){
															HX_STACK_LINE(1212)
															p->forced = true;
														}
														HX_STACK_LINE(1213)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1213)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1214)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1217)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1218);
																	{
																		HX_STACK_LINE(1218)
																		{
																		}
																		HX_STACK_LINE(1218)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1218)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1219)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1220);
																		{
																			HX_STACK_LINE(1220)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1220)
																			{
																				HX_STACK_LINE(1220)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1220)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1220)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1220)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1220)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1220)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1220)
																			{
																				HX_STACK_LINE(1220)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1220)
																				ret1->y = y1;
																				HX_STACK_LINE(1220)
																				{
																				}
																				HX_STACK_LINE(1220)
																				{
																				}
																			}
																			HX_STACK_LINE(1220)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1220)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1221)
																{
																	HX_STACK_LINE(1221)
																	{
																	}
																	HX_STACK_LINE(1221)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1223);
																		{
																			HX_STACK_LINE(1223)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1223)
																			{
																				HX_STACK_LINE(1223)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1223)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1223)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1223)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1223)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1223)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1223)
																			{
																				HX_STACK_LINE(1223)
																				ret1->x = p->x;
																				HX_STACK_LINE(1223)
																				ret1->y = p->y;
																				HX_STACK_LINE(1223)
																				{
																				}
																				HX_STACK_LINE(1223)
																				{
																				}
																			}
																			HX_STACK_LINE(1223)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1223)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1224)
															if ((sndy)){
																HX_STACK_LINE(1224)
																p->forced = true;
															}
															HX_STACK_LINE(1225)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1225)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1226)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1229)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1230);
																		{
																			HX_STACK_LINE(1230)
																			{
																			}
																			HX_STACK_LINE(1230)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1230)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1231)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1232);
																			{
																				HX_STACK_LINE(1232)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1232)
																				{
																					HX_STACK_LINE(1232)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1232)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1232)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1232)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1232)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1232)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1232)
																				{
																					HX_STACK_LINE(1232)
																					ret1->x = x1;
																					HX_STACK_LINE(1232)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1232)
																					{
																					}
																					HX_STACK_LINE(1232)
																					{
																					}
																				}
																				HX_STACK_LINE(1232)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1232)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1233)
																	{
																		HX_STACK_LINE(1233)
																		{
																		}
																		HX_STACK_LINE(1233)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1235);
																			{
																				HX_STACK_LINE(1235)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1235)
																				{
																					HX_STACK_LINE(1235)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1235)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1235)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1235)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1235)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1235)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1235)
																				{
																					HX_STACK_LINE(1235)
																					ret1->x = p->x;
																					HX_STACK_LINE(1235)
																					ret1->y = p->y;
																					HX_STACK_LINE(1235)
																					{
																					}
																					HX_STACK_LINE(1235)
																					{
																					}
																				}
																				HX_STACK_LINE(1235)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1235)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1236)
																if ((sndx)){
																	HX_STACK_LINE(1236)
																	p->forced = true;
																}
																HX_STACK_LINE(1237)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1237)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1238)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1242);
																		{
																			HX_STACK_LINE(1242)
																			{
																			}
																			HX_STACK_LINE(1242)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1242)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1243)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1244);
																			{
																				HX_STACK_LINE(1244)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1244)
																				{
																					HX_STACK_LINE(1244)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1244)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1244)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1244)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1244)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1244)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1244)
																				{
																					HX_STACK_LINE(1244)
																					ret1->x = x0;
																					HX_STACK_LINE(1244)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1244)
																					{
																					}
																					HX_STACK_LINE(1244)
																					{
																					}
																				}
																				HX_STACK_LINE(1244)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1244)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1245)
																	{
																		HX_STACK_LINE(1245)
																		{
																		}
																		HX_STACK_LINE(1245)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1247);
																			{
																				HX_STACK_LINE(1247)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1247)
																				{
																					HX_STACK_LINE(1247)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1247)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1247)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1247)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1247)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1247)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1247)
																				{
																					HX_STACK_LINE(1247)
																					ret1->x = p->x;
																					HX_STACK_LINE(1247)
																					ret1->y = p->y;
																					HX_STACK_LINE(1247)
																					{
																					}
																					HX_STACK_LINE(1247)
																					{
																					}
																				}
																				HX_STACK_LINE(1247)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1247)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1248)
																if ((fstx)){
																	HX_STACK_LINE(1248)
																	p->forced = true;
																}
																HX_STACK_LINE(1249)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1249)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1250)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1253);
											{
												HX_STACK_LINE(1254)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1255)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1255)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1257)
													obj->prev = ret->p1;
													HX_STACK_LINE(1258)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1259)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1260)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1262)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1253)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1266)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1267)
						ret->key1 = val;
						HX_STACK_LINE(1268)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1269)
							val = (int)0;
							HX_STACK_LINE(1270)
							ret->key1 = (int)0;
							HX_STACK_LINE(1271)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1274)
					if (((val != (int)0))){
						HX_STACK_LINE(1275)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1276)
						{
							HX_STACK_LINE(1277)
							ret->okey2 = val1;
							HX_STACK_LINE(1278)
							{
								HX_STACK_LINE(1278)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1278)
								while(((_g < (int)8))){
									HX_STACK_LINE(1278)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1279)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1280)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1281)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1282);
													{
														HX_STACK_LINE(1282)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1282)
														{
															HX_STACK_LINE(1282)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1282)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1282)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1282)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1282)
																ret1->next = null();
															}
															HX_STACK_LINE(1282)
															ret1->forced = false;
														}
														HX_STACK_LINE(1282)
														{
															HX_STACK_LINE(1282)
															ret1->x = x0;
															HX_STACK_LINE(1282)
															ret1->y = y0;
															HX_STACK_LINE(1282)
															{
															}
															HX_STACK_LINE(1282)
															{
															}
														}
														HX_STACK_LINE(1282)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1282)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1283)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1283)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1285)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1286);
														{
															HX_STACK_LINE(1286)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1286)
															{
																HX_STACK_LINE(1286)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1286)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1286)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1286)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1286)
																	ret1->next = null();
																}
																HX_STACK_LINE(1286)
																ret1->forced = false;
															}
															HX_STACK_LINE(1286)
															{
																HX_STACK_LINE(1286)
																ret1->x = x1;
																HX_STACK_LINE(1286)
																ret1->y = y0;
																HX_STACK_LINE(1286)
																{
																}
																HX_STACK_LINE(1286)
																{
																}
															}
															HX_STACK_LINE(1286)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1286)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1287)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1287)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1289)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1290);
															{
																HX_STACK_LINE(1290)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1290)
																{
																	HX_STACK_LINE(1290)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1290)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1290)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1290)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1290)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1290)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1290)
																{
																	HX_STACK_LINE(1290)
																	ret1->x = x1;
																	HX_STACK_LINE(1290)
																	ret1->y = y1;
																	HX_STACK_LINE(1290)
																	{
																	}
																	HX_STACK_LINE(1290)
																	{
																	}
																}
																HX_STACK_LINE(1290)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1290)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1291)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1291)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1293)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1294);
																{
																	HX_STACK_LINE(1294)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1294)
																	{
																		HX_STACK_LINE(1294)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1294)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1294)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1294)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1294)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1294)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1294)
																	{
																		HX_STACK_LINE(1294)
																		ret1->x = x0;
																		HX_STACK_LINE(1294)
																		ret1->y = y1;
																		HX_STACK_LINE(1294)
																		{
																		}
																		HX_STACK_LINE(1294)
																		{
																		}
																	}
																	HX_STACK_LINE(1294)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1294)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1295)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1295)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1297)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1298);
																	{
																		HX_STACK_LINE(1298)
																		{
																		}
																		HX_STACK_LINE(1298)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1298)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1299)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1300);
																		{
																			HX_STACK_LINE(1300)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1300)
																			{
																				HX_STACK_LINE(1300)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1300)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1300)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1300)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1300)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1300)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1300)
																			{
																				HX_STACK_LINE(1300)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1300)
																				ret1->y = y0;
																				HX_STACK_LINE(1300)
																				{
																				}
																				HX_STACK_LINE(1300)
																				{
																				}
																			}
																			HX_STACK_LINE(1300)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1300)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1301)
																{
																	HX_STACK_LINE(1301)
																	{
																	}
																	HX_STACK_LINE(1301)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1303);
																		{
																			HX_STACK_LINE(1303)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1303)
																			{
																				HX_STACK_LINE(1303)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1303)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1303)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1303)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1303)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1303)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1303)
																			{
																				HX_STACK_LINE(1303)
																				ret1->x = p->x;
																				HX_STACK_LINE(1303)
																				ret1->y = p->y;
																				HX_STACK_LINE(1303)
																				{
																				}
																				HX_STACK_LINE(1303)
																				{
																				}
																			}
																			HX_STACK_LINE(1303)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1303)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1304)
															if ((fsty)){
																HX_STACK_LINE(1304)
																p->forced = true;
															}
															HX_STACK_LINE(1305)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1305)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1306)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1309)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1310);
																		{
																			HX_STACK_LINE(1310)
																			{
																			}
																			HX_STACK_LINE(1310)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1310)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1311)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1312);
																			{
																				HX_STACK_LINE(1312)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1312)
																				{
																					HX_STACK_LINE(1312)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1312)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1312)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1312)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1312)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1312)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1312)
																				{
																					HX_STACK_LINE(1312)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1312)
																					ret1->y = y1;
																					HX_STACK_LINE(1312)
																					{
																					}
																					HX_STACK_LINE(1312)
																					{
																					}
																				}
																				HX_STACK_LINE(1312)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1312)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1313)
																	{
																		HX_STACK_LINE(1313)
																		{
																		}
																		HX_STACK_LINE(1313)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1315);
																			{
																				HX_STACK_LINE(1315)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1315)
																				{
																					HX_STACK_LINE(1315)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1315)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1315)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1315)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1315)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1315)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1315)
																				{
																					HX_STACK_LINE(1315)
																					ret1->x = p->x;
																					HX_STACK_LINE(1315)
																					ret1->y = p->y;
																					HX_STACK_LINE(1315)
																					{
																					}
																					HX_STACK_LINE(1315)
																					{
																					}
																				}
																				HX_STACK_LINE(1315)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1315)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1316)
																if ((sndy)){
																	HX_STACK_LINE(1316)
																	p->forced = true;
																}
																HX_STACK_LINE(1317)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1317)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1318)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1321)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1322);
																			{
																				HX_STACK_LINE(1322)
																				{
																				}
																				HX_STACK_LINE(1322)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1322)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1323)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1324);
																				{
																					HX_STACK_LINE(1324)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1324)
																					{
																						HX_STACK_LINE(1324)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1324)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1324)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1324)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1324)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1324)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1324)
																					{
																						HX_STACK_LINE(1324)
																						ret1->x = x1;
																						HX_STACK_LINE(1324)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1324)
																						{
																						}
																						HX_STACK_LINE(1324)
																						{
																						}
																					}
																					HX_STACK_LINE(1324)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1324)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1325)
																		{
																			HX_STACK_LINE(1325)
																			{
																			}
																			HX_STACK_LINE(1325)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1327);
																				{
																					HX_STACK_LINE(1327)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1327)
																					{
																						HX_STACK_LINE(1327)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1327)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1327)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1327)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1327)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1327)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1327)
																					{
																						HX_STACK_LINE(1327)
																						ret1->x = p->x;
																						HX_STACK_LINE(1327)
																						ret1->y = p->y;
																						HX_STACK_LINE(1327)
																						{
																						}
																						HX_STACK_LINE(1327)
																						{
																						}
																					}
																					HX_STACK_LINE(1327)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1327)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1328)
																	if ((sndx)){
																		HX_STACK_LINE(1328)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1329)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1329)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1330)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1334);
																			{
																				HX_STACK_LINE(1334)
																				{
																				}
																				HX_STACK_LINE(1334)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1334)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1335)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1336);
																				{
																					HX_STACK_LINE(1336)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1336)
																					{
																						HX_STACK_LINE(1336)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1336)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1336)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1336)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1336)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1336)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1336)
																					{
																						HX_STACK_LINE(1336)
																						ret1->x = x0;
																						HX_STACK_LINE(1336)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1336)
																						{
																						}
																						HX_STACK_LINE(1336)
																						{
																						}
																					}
																					HX_STACK_LINE(1336)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1336)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1337)
																		{
																			HX_STACK_LINE(1337)
																			{
																			}
																			HX_STACK_LINE(1337)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1339);
																				{
																					HX_STACK_LINE(1339)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1339)
																					{
																						HX_STACK_LINE(1339)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1339)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1339)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1339)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1339)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1339)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1339)
																					{
																						HX_STACK_LINE(1339)
																						ret1->x = p->x;
																						HX_STACK_LINE(1339)
																						ret1->y = p->y;
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
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1340)
																	if ((fstx)){
																		HX_STACK_LINE(1340)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1341)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1341)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1342)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1345);
												{
													HX_STACK_LINE(1346)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1347)
													if (((ret->p2 == null()))){
														HX_STACK_LINE(1347)
														ret->p2 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1349)
														obj->prev = ret->p2;
														HX_STACK_LINE(1350)
														obj->next = ret->p2->next;
														HX_STACK_LINE(1351)
														ret->p2->next->prev = obj;
														HX_STACK_LINE(1352)
														ret->p2->next = obj;
													}
													HX_STACK_LINE(1354)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1345)
										ret->p2 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1358)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1359)
							ret->key2 = val1;
							HX_STACK_LINE(1360)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1361)
								val1 = (int)0;
								HX_STACK_LINE(1362)
								ret->key2 = (int)0;
								HX_STACK_LINE(1363)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1366)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1367)
							ret->pr = ret->p1;
							HX_STACK_LINE(1368)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1369)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1372)
							ret->pr = ret->p2;
							HX_STACK_LINE(1373)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1374)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1378)
						int val1 = (int)56;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1379)
						{
							HX_STACK_LINE(1380)
							ret->okey1 = val1;
							HX_STACK_LINE(1381)
							{
								HX_STACK_LINE(1381)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1381)
								while(((_g < (int)8))){
									HX_STACK_LINE(1381)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1382)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1383)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1384)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1385);
													{
														HX_STACK_LINE(1385)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1385)
														{
															HX_STACK_LINE(1385)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1385)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1385)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1385)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1385)
																ret1->next = null();
															}
															HX_STACK_LINE(1385)
															ret1->forced = false;
														}
														HX_STACK_LINE(1385)
														{
															HX_STACK_LINE(1385)
															ret1->x = x0;
															HX_STACK_LINE(1385)
															ret1->y = y0;
															HX_STACK_LINE(1385)
															{
															}
															HX_STACK_LINE(1385)
															{
															}
														}
														HX_STACK_LINE(1385)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1385)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1386)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1386)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1388)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1389);
														{
															HX_STACK_LINE(1389)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1389)
															{
																HX_STACK_LINE(1389)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1389)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1389)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1389)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1389)
																	ret1->next = null();
																}
																HX_STACK_LINE(1389)
																ret1->forced = false;
															}
															HX_STACK_LINE(1389)
															{
																HX_STACK_LINE(1389)
																ret1->x = x1;
																HX_STACK_LINE(1389)
																ret1->y = y0;
																HX_STACK_LINE(1389)
																{
																}
																HX_STACK_LINE(1389)
																{
																}
															}
															HX_STACK_LINE(1389)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1389)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1390)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1390)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1392)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1393);
															{
																HX_STACK_LINE(1393)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1393)
																{
																	HX_STACK_LINE(1393)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1393)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1393)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1393)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1393)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1393)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1393)
																{
																	HX_STACK_LINE(1393)
																	ret1->x = x1;
																	HX_STACK_LINE(1393)
																	ret1->y = y1;
																	HX_STACK_LINE(1393)
																	{
																	}
																	HX_STACK_LINE(1393)
																	{
																	}
																}
																HX_STACK_LINE(1393)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1393)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1394)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1394)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1396)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1397);
																{
																	HX_STACK_LINE(1397)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1397)
																	{
																		HX_STACK_LINE(1397)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1397)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1397)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1397)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1397)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1397)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1397)
																	{
																		HX_STACK_LINE(1397)
																		ret1->x = x0;
																		HX_STACK_LINE(1397)
																		ret1->y = y1;
																		HX_STACK_LINE(1397)
																		{
																		}
																		HX_STACK_LINE(1397)
																		{
																		}
																	}
																	HX_STACK_LINE(1397)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1397)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1398)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1398)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1400)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1401);
																	{
																		HX_STACK_LINE(1401)
																		{
																		}
																		HX_STACK_LINE(1401)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1401)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1402)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1403);
																		{
																			HX_STACK_LINE(1403)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1403)
																			{
																				HX_STACK_LINE(1403)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1403)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1403)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1403)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1403)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1403)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1403)
																			{
																				HX_STACK_LINE(1403)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1403)
																				ret1->y = y0;
																				HX_STACK_LINE(1403)
																				{
																				}
																				HX_STACK_LINE(1403)
																				{
																				}
																			}
																			HX_STACK_LINE(1403)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1403)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1404)
																{
																	HX_STACK_LINE(1404)
																	{
																	}
																	HX_STACK_LINE(1404)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1406);
																		{
																			HX_STACK_LINE(1406)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1406)
																			{
																				HX_STACK_LINE(1406)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1406)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1406)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1406)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1406)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1406)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1406)
																			{
																				HX_STACK_LINE(1406)
																				ret1->x = p->x;
																				HX_STACK_LINE(1406)
																				ret1->y = p->y;
																				HX_STACK_LINE(1406)
																				{
																				}
																				HX_STACK_LINE(1406)
																				{
																				}
																			}
																			HX_STACK_LINE(1406)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1406)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1407)
															if ((fsty)){
																HX_STACK_LINE(1407)
																p->forced = true;
															}
															HX_STACK_LINE(1408)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1408)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1409)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1412)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1413);
																		{
																			HX_STACK_LINE(1413)
																			{
																			}
																			HX_STACK_LINE(1413)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1413)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1414)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1415);
																			{
																				HX_STACK_LINE(1415)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1415)
																				{
																					HX_STACK_LINE(1415)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1415)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1415)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1415)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1415)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1415)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1415)
																				{
																					HX_STACK_LINE(1415)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1415)
																					ret1->y = y1;
																					HX_STACK_LINE(1415)
																					{
																					}
																					HX_STACK_LINE(1415)
																					{
																					}
																				}
																				HX_STACK_LINE(1415)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1415)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1416)
																	{
																		HX_STACK_LINE(1416)
																		{
																		}
																		HX_STACK_LINE(1416)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1418);
																			{
																				HX_STACK_LINE(1418)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1418)
																				{
																					HX_STACK_LINE(1418)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1418)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1418)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1418)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1418)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1418)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1418)
																				{
																					HX_STACK_LINE(1418)
																					ret1->x = p->x;
																					HX_STACK_LINE(1418)
																					ret1->y = p->y;
																					HX_STACK_LINE(1418)
																					{
																					}
																					HX_STACK_LINE(1418)
																					{
																					}
																				}
																				HX_STACK_LINE(1418)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1418)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1419)
																if ((sndy)){
																	HX_STACK_LINE(1419)
																	p->forced = true;
																}
																HX_STACK_LINE(1420)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1420)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1421)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1424)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1425);
																			{
																				HX_STACK_LINE(1425)
																				{
																				}
																				HX_STACK_LINE(1425)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1425)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1426)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1427);
																				{
																					HX_STACK_LINE(1427)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1427)
																					{
																						HX_STACK_LINE(1427)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1427)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1427)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1427)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1427)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1427)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1427)
																					{
																						HX_STACK_LINE(1427)
																						ret1->x = x1;
																						HX_STACK_LINE(1427)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1427)
																						{
																						}
																						HX_STACK_LINE(1427)
																						{
																						}
																					}
																					HX_STACK_LINE(1427)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1427)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1428)
																		{
																			HX_STACK_LINE(1428)
																			{
																			}
																			HX_STACK_LINE(1428)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1430);
																				{
																					HX_STACK_LINE(1430)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1430)
																					{
																						HX_STACK_LINE(1430)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1430)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1430)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1430)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1430)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1430)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1430)
																					{
																						HX_STACK_LINE(1430)
																						ret1->x = p->x;
																						HX_STACK_LINE(1430)
																						ret1->y = p->y;
																						HX_STACK_LINE(1430)
																						{
																						}
																						HX_STACK_LINE(1430)
																						{
																						}
																					}
																					HX_STACK_LINE(1430)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1430)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1431)
																	if ((sndx)){
																		HX_STACK_LINE(1431)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1432)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1432)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1433)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1437);
																			{
																				HX_STACK_LINE(1437)
																				{
																				}
																				HX_STACK_LINE(1437)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1437)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1438)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1439);
																				{
																					HX_STACK_LINE(1439)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1439)
																					{
																						HX_STACK_LINE(1439)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1439)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1439)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1439)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1439)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1439)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1439)
																					{
																						HX_STACK_LINE(1439)
																						ret1->x = x0;
																						HX_STACK_LINE(1439)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1439)
																						{
																						}
																						HX_STACK_LINE(1439)
																						{
																						}
																					}
																					HX_STACK_LINE(1439)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1439)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1440)
																		{
																			HX_STACK_LINE(1440)
																			{
																			}
																			HX_STACK_LINE(1440)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1442);
																				{
																					HX_STACK_LINE(1442)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1442)
																					{
																						HX_STACK_LINE(1442)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1442)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1442)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1442)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1442)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1442)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1442)
																					{
																						HX_STACK_LINE(1442)
																						ret1->x = p->x;
																						HX_STACK_LINE(1442)
																						ret1->y = p->y;
																						HX_STACK_LINE(1442)
																						{
																						}
																						HX_STACK_LINE(1442)
																						{
																						}
																					}
																					HX_STACK_LINE(1442)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1442)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1443)
																	if ((fstx)){
																		HX_STACK_LINE(1443)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1444)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1444)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1445)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1448);
												{
													HX_STACK_LINE(1449)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1450)
													if (((ret->p1 == null()))){
														HX_STACK_LINE(1450)
														ret->p1 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1452)
														obj->prev = ret->p1;
														HX_STACK_LINE(1453)
														obj->next = ret->p1->next;
														HX_STACK_LINE(1454)
														ret->p1->next->prev = obj;
														HX_STACK_LINE(1455)
														ret->p1->next = obj;
													}
													HX_STACK_LINE(1457)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1448)
										ret->p1 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1461)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1462)
							ret->key1 = val1;
							HX_STACK_LINE(1463)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1464)
								val1 = (int)0;
								HX_STACK_LINE(1465)
								ret->key1 = (int)0;
								HX_STACK_LINE(1466)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1469)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1469)
							ret = null();
						}
						else{
							HX_STACK_LINE(1471)
							ret->pr = ret->p1;
							HX_STACK_LINE(1472)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1473)
							ret->keyr = ret->key1;
						}
					}
				}
			}
			else{
				HX_STACK_LINE(1478)
				if ((mid)){
					HX_STACK_LINE(1480)
					int val = (int)238;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1481)
					{
						HX_STACK_LINE(1482)
						ret->okey1 = val;
						HX_STACK_LINE(1483)
						{
							HX_STACK_LINE(1483)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1483)
							while(((_g < (int)8))){
								HX_STACK_LINE(1483)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1484)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1485)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1486)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1487);
												{
													HX_STACK_LINE(1487)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1487)
													{
														HX_STACK_LINE(1487)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1487)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1487)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1487)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1487)
															ret1->next = null();
														}
														HX_STACK_LINE(1487)
														ret1->forced = false;
													}
													HX_STACK_LINE(1487)
													{
														HX_STACK_LINE(1487)
														ret1->x = x0;
														HX_STACK_LINE(1487)
														ret1->y = y0;
														HX_STACK_LINE(1487)
														{
														}
														HX_STACK_LINE(1487)
														{
														}
													}
													HX_STACK_LINE(1487)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1487)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1488)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1488)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1490)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1491);
													{
														HX_STACK_LINE(1491)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1491)
														{
															HX_STACK_LINE(1491)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1491)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1491)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1491)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1491)
																ret1->next = null();
															}
															HX_STACK_LINE(1491)
															ret1->forced = false;
														}
														HX_STACK_LINE(1491)
														{
															HX_STACK_LINE(1491)
															ret1->x = x1;
															HX_STACK_LINE(1491)
															ret1->y = y0;
															HX_STACK_LINE(1491)
															{
															}
															HX_STACK_LINE(1491)
															{
															}
														}
														HX_STACK_LINE(1491)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1491)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1492)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1492)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1494)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1495);
														{
															HX_STACK_LINE(1495)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1495)
															{
																HX_STACK_LINE(1495)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1495)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1495)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1495)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1495)
																	ret1->next = null();
																}
																HX_STACK_LINE(1495)
																ret1->forced = false;
															}
															HX_STACK_LINE(1495)
															{
																HX_STACK_LINE(1495)
																ret1->x = x1;
																HX_STACK_LINE(1495)
																ret1->y = y1;
																HX_STACK_LINE(1495)
																{
																}
																HX_STACK_LINE(1495)
																{
																}
															}
															HX_STACK_LINE(1495)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1495)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1496)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1496)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1498)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1499);
															{
																HX_STACK_LINE(1499)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1499)
																{
																	HX_STACK_LINE(1499)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1499)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1499)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1499)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1499)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1499)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1499)
																{
																	HX_STACK_LINE(1499)
																	ret1->x = x0;
																	HX_STACK_LINE(1499)
																	ret1->y = y1;
																	HX_STACK_LINE(1499)
																	{
																	}
																	HX_STACK_LINE(1499)
																	{
																	}
																}
																HX_STACK_LINE(1499)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1499)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1500)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1500)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1502)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1503);
																{
																	HX_STACK_LINE(1503)
																	{
																	}
																	HX_STACK_LINE(1503)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1503)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1504)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1505);
																	{
																		HX_STACK_LINE(1505)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1505)
																		{
																			HX_STACK_LINE(1505)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1505)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1505)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1505)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1505)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1505)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1505)
																		{
																			HX_STACK_LINE(1505)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1505)
																			ret1->y = y0;
																			HX_STACK_LINE(1505)
																			{
																			}
																			HX_STACK_LINE(1505)
																			{
																			}
																		}
																		HX_STACK_LINE(1505)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1505)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1506)
															{
																HX_STACK_LINE(1506)
																{
																}
																HX_STACK_LINE(1506)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1508);
																	{
																		HX_STACK_LINE(1508)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1508)
																		{
																			HX_STACK_LINE(1508)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1508)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1508)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1508)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1508)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1508)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1508)
																		{
																			HX_STACK_LINE(1508)
																			ret1->x = p->x;
																			HX_STACK_LINE(1508)
																			ret1->y = p->y;
																			HX_STACK_LINE(1508)
																			{
																			}
																			HX_STACK_LINE(1508)
																			{
																			}
																		}
																		HX_STACK_LINE(1508)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1508)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1509)
														if ((fsty)){
															HX_STACK_LINE(1509)
															p->forced = true;
														}
														HX_STACK_LINE(1510)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1510)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1511)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1514)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1515);
																	{
																		HX_STACK_LINE(1515)
																		{
																		}
																		HX_STACK_LINE(1515)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1515)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1516)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1517);
																		{
																			HX_STACK_LINE(1517)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1517)
																			{
																				HX_STACK_LINE(1517)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1517)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1517)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1517)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1517)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1517)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1517)
																			{
																				HX_STACK_LINE(1517)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1517)
																				ret1->y = y1;
																				HX_STACK_LINE(1517)
																				{
																				}
																				HX_STACK_LINE(1517)
																				{
																				}
																			}
																			HX_STACK_LINE(1517)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1517)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1518)
																{
																	HX_STACK_LINE(1518)
																	{
																	}
																	HX_STACK_LINE(1518)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1520);
																		{
																			HX_STACK_LINE(1520)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1520)
																			{
																				HX_STACK_LINE(1520)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1520)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1520)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1520)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1520)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1520)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1520)
																			{
																				HX_STACK_LINE(1520)
																				ret1->x = p->x;
																				HX_STACK_LINE(1520)
																				ret1->y = p->y;
																				HX_STACK_LINE(1520)
																				{
																				}
																				HX_STACK_LINE(1520)
																				{
																				}
																			}
																			HX_STACK_LINE(1520)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1520)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1521)
															if ((sndy)){
																HX_STACK_LINE(1521)
																p->forced = true;
															}
															HX_STACK_LINE(1522)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1522)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1523)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1526)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1527);
																		{
																			HX_STACK_LINE(1527)
																			{
																			}
																			HX_STACK_LINE(1527)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1527)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1528)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1529);
																			{
																				HX_STACK_LINE(1529)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1529)
																				{
																					HX_STACK_LINE(1529)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1529)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1529)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1529)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1529)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1529)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1529)
																				{
																					HX_STACK_LINE(1529)
																					ret1->x = x1;
																					HX_STACK_LINE(1529)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1529)
																					{
																					}
																					HX_STACK_LINE(1529)
																					{
																					}
																				}
																				HX_STACK_LINE(1529)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1529)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1530)
																	{
																		HX_STACK_LINE(1530)
																		{
																		}
																		HX_STACK_LINE(1530)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1532);
																			{
																				HX_STACK_LINE(1532)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1532)
																				{
																					HX_STACK_LINE(1532)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1532)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1532)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1532)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1532)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1532)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1532)
																				{
																					HX_STACK_LINE(1532)
																					ret1->x = p->x;
																					HX_STACK_LINE(1532)
																					ret1->y = p->y;
																					HX_STACK_LINE(1532)
																					{
																					}
																					HX_STACK_LINE(1532)
																					{
																					}
																				}
																				HX_STACK_LINE(1532)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1532)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1533)
																if ((sndx)){
																	HX_STACK_LINE(1533)
																	p->forced = true;
																}
																HX_STACK_LINE(1534)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1534)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1535)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1539);
																		{
																			HX_STACK_LINE(1539)
																			{
																			}
																			HX_STACK_LINE(1539)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1539)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1540)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1541);
																			{
																				HX_STACK_LINE(1541)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1541)
																				{
																					HX_STACK_LINE(1541)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1541)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1541)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1541)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1541)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1541)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1541)
																				{
																					HX_STACK_LINE(1541)
																					ret1->x = x0;
																					HX_STACK_LINE(1541)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1541)
																					{
																					}
																					HX_STACK_LINE(1541)
																					{
																					}
																				}
																				HX_STACK_LINE(1541)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1541)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1542)
																	{
																		HX_STACK_LINE(1542)
																		{
																		}
																		HX_STACK_LINE(1542)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1544);
																			{
																				HX_STACK_LINE(1544)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1544)
																				{
																					HX_STACK_LINE(1544)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1544)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1544)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1544)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1544)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1544)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1544)
																				{
																					HX_STACK_LINE(1544)
																					ret1->x = p->x;
																					HX_STACK_LINE(1544)
																					ret1->y = p->y;
																					HX_STACK_LINE(1544)
																					{
																					}
																					HX_STACK_LINE(1544)
																					{
																					}
																				}
																				HX_STACK_LINE(1544)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1544)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1545)
																if ((fstx)){
																	HX_STACK_LINE(1545)
																	p->forced = true;
																}
																HX_STACK_LINE(1546)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1546)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1547)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1550);
											{
												HX_STACK_LINE(1551)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1552)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1552)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1554)
													obj->prev = ret->p1;
													HX_STACK_LINE(1555)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1556)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1557)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1559)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1550)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1563)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1564)
						ret->key1 = val;
						HX_STACK_LINE(1565)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1566)
							val = (int)0;
							HX_STACK_LINE(1567)
							ret->key1 = (int)0;
							HX_STACK_LINE(1568)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1571)
					if (((val == (int)0))){
						HX_STACK_LINE(1571)
						ret = null();
					}
					else{
						HX_STACK_LINE(1573)
						ret->pr = ret->p1;
						HX_STACK_LINE(1574)
						ret->okeyr = ret->okey1;
						HX_STACK_LINE(1575)
						ret->keyr = ret->key1;
					}
				}
				else{
					HX_STACK_LINE(1579)
					int val = (int)224;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(1580)
					{
						HX_STACK_LINE(1581)
						ret->okey1 = val;
						HX_STACK_LINE(1582)
						{
							HX_STACK_LINE(1582)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1582)
							while(((_g < (int)8))){
								HX_STACK_LINE(1582)
								int i = (_g)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1583)
								if (((((int(val) & int((int((int)1) << int(i))))) != (int)0))){
									HX_STACK_LINE(1584)
									::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(1585)
									if (((i == (int)0))){
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1586);
												{
													HX_STACK_LINE(1586)
													::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
													HX_STACK_LINE(1586)
													{
														HX_STACK_LINE(1586)
														if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
															HX_STACK_LINE(1586)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
														}
														else{
															HX_STACK_LINE(1586)
															ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
															HX_STACK_LINE(1586)
															::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
															HX_STACK_LINE(1586)
															ret1->next = null();
														}
														HX_STACK_LINE(1586)
														ret1->forced = false;
													}
													HX_STACK_LINE(1586)
													{
														HX_STACK_LINE(1586)
														ret1->x = x0;
														HX_STACK_LINE(1586)
														ret1->y = y0;
														HX_STACK_LINE(1586)
														{
														}
														HX_STACK_LINE(1586)
														{
														}
													}
													HX_STACK_LINE(1586)
													return ret1;
												}
												return null();
											}
										};
										HX_STACK_LINE(1586)
										p = _Function_10_1::Block(x0,y0);
										HX_STACK_LINE(1587)
										if (((bool(fstx) || bool(fsty)))){
											HX_STACK_LINE(1587)
											p->forced = true;
										}
									}
									else{
										HX_STACK_LINE(1589)
										if (((i == (int)2))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1590);
													{
														HX_STACK_LINE(1590)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1590)
														{
															HX_STACK_LINE(1590)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1590)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1590)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1590)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1590)
																ret1->next = null();
															}
															HX_STACK_LINE(1590)
															ret1->forced = false;
														}
														HX_STACK_LINE(1590)
														{
															HX_STACK_LINE(1590)
															ret1->x = x1;
															HX_STACK_LINE(1590)
															ret1->y = y0;
															HX_STACK_LINE(1590)
															{
															}
															HX_STACK_LINE(1590)
															{
															}
														}
														HX_STACK_LINE(1590)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1590)
											p = _Function_11_1::Block(x1,y0);
											HX_STACK_LINE(1591)
											if (((bool(sndx) || bool(fsty)))){
												HX_STACK_LINE(1591)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1593)
											if (((i == (int)4))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1594);
														{
															HX_STACK_LINE(1594)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1594)
															{
																HX_STACK_LINE(1594)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1594)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1594)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1594)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1594)
																	ret1->next = null();
																}
																HX_STACK_LINE(1594)
																ret1->forced = false;
															}
															HX_STACK_LINE(1594)
															{
																HX_STACK_LINE(1594)
																ret1->x = x1;
																HX_STACK_LINE(1594)
																ret1->y = y1;
																HX_STACK_LINE(1594)
																{
																}
																HX_STACK_LINE(1594)
																{
																}
															}
															HX_STACK_LINE(1594)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1594)
												p = _Function_12_1::Block(x1,y1);
												HX_STACK_LINE(1595)
												if (((bool(sndx) || bool(sndy)))){
													HX_STACK_LINE(1595)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1597)
												if (((i == (int)6))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1598);
															{
																HX_STACK_LINE(1598)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1598)
																{
																	HX_STACK_LINE(1598)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1598)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1598)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1598)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1598)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1598)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1598)
																{
																	HX_STACK_LINE(1598)
																	ret1->x = x0;
																	HX_STACK_LINE(1598)
																	ret1->y = y1;
																	HX_STACK_LINE(1598)
																	{
																	}
																	HX_STACK_LINE(1598)
																	{
																	}
																}
																HX_STACK_LINE(1598)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1598)
													p = _Function_13_1::Block(x0,y1);
													HX_STACK_LINE(1599)
													if (((bool(fstx) || bool(sndy)))){
														HX_STACK_LINE(1599)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1601)
													if (((i == (int)1))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1602);
																{
																	HX_STACK_LINE(1602)
																	{
																	}
																	HX_STACK_LINE(1602)
																	return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																}
																return null();
															}
														};
														HX_STACK_LINE(1602)
														p = _Function_14_1::Block(ints,xn,yn);
														HX_STACK_LINE(1603)
														if (((p == null()))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1604);
																	{
																		HX_STACK_LINE(1604)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1604)
																		{
																			HX_STACK_LINE(1604)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1604)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1604)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1604)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1604)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1604)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1604)
																		{
																			HX_STACK_LINE(1604)
																			ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																			HX_STACK_LINE(1604)
																			ret1->y = y0;
																			HX_STACK_LINE(1604)
																			{
																			}
																			HX_STACK_LINE(1604)
																			{
																			}
																		}
																		HX_STACK_LINE(1604)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1604)
															p = _Function_15_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
															HX_STACK_LINE(1605)
															{
																HX_STACK_LINE(1605)
																{
																}
																HX_STACK_LINE(1605)
																ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
															}
														}
														else{
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1607);
																	{
																		HX_STACK_LINE(1607)
																		::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																		HX_STACK_LINE(1607)
																		{
																			HX_STACK_LINE(1607)
																			if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																				HX_STACK_LINE(1607)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																			}
																			else{
																				HX_STACK_LINE(1607)
																				ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																				HX_STACK_LINE(1607)
																				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																				HX_STACK_LINE(1607)
																				ret1->next = null();
																			}
																			HX_STACK_LINE(1607)
																			ret1->forced = false;
																		}
																		HX_STACK_LINE(1607)
																		{
																			HX_STACK_LINE(1607)
																			ret1->x = p->x;
																			HX_STACK_LINE(1607)
																			ret1->y = p->y;
																			HX_STACK_LINE(1607)
																			{
																			}
																			HX_STACK_LINE(1607)
																			{
																			}
																		}
																		HX_STACK_LINE(1607)
																		return ret1;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1607)
															p = _Function_15_1::Block(p);
														}
														HX_STACK_LINE(1608)
														if ((fsty)){
															HX_STACK_LINE(1608)
															p->forced = true;
														}
														HX_STACK_LINE(1609)
														if (((bool((p->x == x0)) || bool((p->x == x1))))){
															HX_STACK_LINE(1609)
															if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)4))) != (int)0))))))){
																HX_STACK_LINE(1610)
																hx::XorEq(val,(int)2);
															}
														}
													}
													else{
														HX_STACK_LINE(1613)
														if (((i == (int)5))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1614);
																	{
																		HX_STACK_LINE(1614)
																		{
																		}
																		HX_STACK_LINE(1614)
																		return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1614)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1615)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1616);
																		{
																			HX_STACK_LINE(1616)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1616)
																			{
																				HX_STACK_LINE(1616)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1616)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1616)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1616)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1616)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1616)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1616)
																			{
																				HX_STACK_LINE(1616)
																				ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																				HX_STACK_LINE(1616)
																				ret1->y = y1;
																				HX_STACK_LINE(1616)
																				{
																				}
																				HX_STACK_LINE(1616)
																				{
																				}
																			}
																			HX_STACK_LINE(1616)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1616)
																p = _Function_16_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																HX_STACK_LINE(1617)
																{
																	HX_STACK_LINE(1617)
																	{
																	}
																	HX_STACK_LINE(1617)
																	ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1619);
																		{
																			HX_STACK_LINE(1619)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1619)
																			{
																				HX_STACK_LINE(1619)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1619)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1619)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1619)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1619)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1619)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1619)
																			{
																				HX_STACK_LINE(1619)
																				ret1->x = p->x;
																				HX_STACK_LINE(1619)
																				ret1->y = p->y;
																				HX_STACK_LINE(1619)
																				{
																				}
																				HX_STACK_LINE(1619)
																				{
																				}
																			}
																			HX_STACK_LINE(1619)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1619)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1620)
															if ((sndy)){
																HX_STACK_LINE(1620)
																p->forced = true;
															}
															HX_STACK_LINE(1621)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1621)
																if (((bool((bool((p->x == x0)) && bool((((int(val) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																	HX_STACK_LINE(1622)
																	hx::XorEq(val,(int)32);
																}
															}
														}
														else{
															HX_STACK_LINE(1625)
															if (((i == (int)3))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1626);
																		{
																			HX_STACK_LINE(1626)
																			{
																			}
																			HX_STACK_LINE(1626)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1626)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1627)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1628);
																			{
																				HX_STACK_LINE(1628)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1628)
																				{
																					HX_STACK_LINE(1628)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1628)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1628)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1628)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1628)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1628)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1628)
																				{
																					HX_STACK_LINE(1628)
																					ret1->x = x1;
																					HX_STACK_LINE(1628)
																					ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																					HX_STACK_LINE(1628)
																					{
																					}
																					HX_STACK_LINE(1628)
																					{
																					}
																				}
																				HX_STACK_LINE(1628)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1628)
																	p = _Function_17_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																	HX_STACK_LINE(1629)
																	{
																		HX_STACK_LINE(1629)
																		{
																		}
																		HX_STACK_LINE(1629)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1631);
																			{
																				HX_STACK_LINE(1631)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1631)
																				{
																					HX_STACK_LINE(1631)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1631)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1631)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1631)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1631)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1631)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1631)
																				{
																					HX_STACK_LINE(1631)
																					ret1->x = p->x;
																					HX_STACK_LINE(1631)
																					ret1->y = p->y;
																					HX_STACK_LINE(1631)
																					{
																					}
																					HX_STACK_LINE(1631)
																					{
																					}
																				}
																				HX_STACK_LINE(1631)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1631)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1632)
																if ((sndx)){
																	HX_STACK_LINE(1632)
																	p->forced = true;
																}
																HX_STACK_LINE(1633)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1633)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1634)
																		hx::XorEq(val,(int)8);
																	}
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1638);
																		{
																			HX_STACK_LINE(1638)
																			{
																			}
																			HX_STACK_LINE(1638)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1638)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1639)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1640);
																			{
																				HX_STACK_LINE(1640)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1640)
																				{
																					HX_STACK_LINE(1640)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1640)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1640)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1640)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1640)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1640)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1640)
																				{
																					HX_STACK_LINE(1640)
																					ret1->x = x0;
																					HX_STACK_LINE(1640)
																					ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																					HX_STACK_LINE(1640)
																					{
																					}
																					HX_STACK_LINE(1640)
																					{
																					}
																				}
																				HX_STACK_LINE(1640)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1640)
																	p = _Function_17_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																	HX_STACK_LINE(1641)
																	{
																		HX_STACK_LINE(1641)
																		{
																		}
																		HX_STACK_LINE(1641)
																		ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1643);
																			{
																				HX_STACK_LINE(1643)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1643)
																				{
																					HX_STACK_LINE(1643)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1643)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1643)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1643)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1643)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1643)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1643)
																				{
																					HX_STACK_LINE(1643)
																					ret1->x = p->x;
																					HX_STACK_LINE(1643)
																					ret1->y = p->y;
																					HX_STACK_LINE(1643)
																					{
																					}
																					HX_STACK_LINE(1643)
																					{
																					}
																				}
																				HX_STACK_LINE(1643)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1643)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1644)
																if ((fstx)){
																	HX_STACK_LINE(1644)
																	p->forced = true;
																}
																HX_STACK_LINE(1645)
																if (((bool((p->y == y0)) || bool((p->y == y1))))){
																	HX_STACK_LINE(1645)
																	if (((bool((bool((p->y == y0)) && bool((((int(val) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val) & int((int)64))) != (int)0))))))){
																		HX_STACK_LINE(1646)
																		hx::XorEq(val,(int)128);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
									struct _Function_9_1{
										inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1649);
											{
												HX_STACK_LINE(1650)
												::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
												HX_STACK_LINE(1651)
												if (((ret->p1 == null()))){
													HX_STACK_LINE(1651)
													ret->p1 = obj->prev = obj->next = obj;
												}
												else{
													HX_STACK_LINE(1653)
													obj->prev = ret->p1;
													HX_STACK_LINE(1654)
													obj->next = ret->p1->next;
													HX_STACK_LINE(1655)
													ret->p1->next->prev = obj;
													HX_STACK_LINE(1656)
													ret->p1->next = obj;
												}
												HX_STACK_LINE(1658)
												return obj;
											}
											return null();
										}
									};
									HX_STACK_LINE(1649)
									ret->p1 = _Function_9_1::Block(p,ret);
								}
							}
						}
						HX_STACK_LINE(1662)
						ret->p1 = ret->p1->next;
						HX_STACK_LINE(1663)
						ret->key1 = val;
						HX_STACK_LINE(1664)
						if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val == (int)1)) || bool((val == (int)4)))) || bool((val == (int)16)))) || bool((val == (int)64)))) || bool((val == (int)3)))) || bool((val == (int)12)))) || bool((val == (int)48)))) || bool((val == (int)192)))) || bool((val == (int)129)))) || bool((val == (int)6)))) || bool((val == (int)24)))) || bool((val == (int)96)))) || bool((val == (int)5)))) || bool((val == (int)20)))) || bool((val == (int)80)))) || bool((val == (int)65)))) || bool((val == (int)17)))) || bool((val == (int)68))))){
							HX_STACK_LINE(1665)
							val = (int)0;
							HX_STACK_LINE(1666)
							ret->key1 = (int)0;
							HX_STACK_LINE(1667)
							ret->p1 = null();
						}
					}
					HX_STACK_LINE(1670)
					if (((val != (int)0))){
						HX_STACK_LINE(1671)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1672)
						{
							HX_STACK_LINE(1673)
							ret->okey2 = val1;
							HX_STACK_LINE(1674)
							{
								HX_STACK_LINE(1674)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1674)
								while(((_g < (int)8))){
									HX_STACK_LINE(1674)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1675)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1676)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1677)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1678);
													{
														HX_STACK_LINE(1678)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1678)
														{
															HX_STACK_LINE(1678)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1678)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1678)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1678)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1678)
																ret1->next = null();
															}
															HX_STACK_LINE(1678)
															ret1->forced = false;
														}
														HX_STACK_LINE(1678)
														{
															HX_STACK_LINE(1678)
															ret1->x = x0;
															HX_STACK_LINE(1678)
															ret1->y = y0;
															HX_STACK_LINE(1678)
															{
															}
															HX_STACK_LINE(1678)
															{
															}
														}
														HX_STACK_LINE(1678)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1678)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1679)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1679)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1681)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1682);
														{
															HX_STACK_LINE(1682)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1682)
															{
																HX_STACK_LINE(1682)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1682)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1682)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1682)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1682)
																	ret1->next = null();
																}
																HX_STACK_LINE(1682)
																ret1->forced = false;
															}
															HX_STACK_LINE(1682)
															{
																HX_STACK_LINE(1682)
																ret1->x = x1;
																HX_STACK_LINE(1682)
																ret1->y = y0;
																HX_STACK_LINE(1682)
																{
																}
																HX_STACK_LINE(1682)
																{
																}
															}
															HX_STACK_LINE(1682)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1682)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1683)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1683)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1685)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1686);
															{
																HX_STACK_LINE(1686)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1686)
																{
																	HX_STACK_LINE(1686)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1686)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1686)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1686)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1686)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1686)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1686)
																{
																	HX_STACK_LINE(1686)
																	ret1->x = x1;
																	HX_STACK_LINE(1686)
																	ret1->y = y1;
																	HX_STACK_LINE(1686)
																	{
																	}
																	HX_STACK_LINE(1686)
																	{
																	}
																}
																HX_STACK_LINE(1686)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1686)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1687)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1687)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1689)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1690);
																{
																	HX_STACK_LINE(1690)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1690)
																	{
																		HX_STACK_LINE(1690)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1690)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1690)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1690)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1690)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1690)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1690)
																	{
																		HX_STACK_LINE(1690)
																		ret1->x = x0;
																		HX_STACK_LINE(1690)
																		ret1->y = y1;
																		HX_STACK_LINE(1690)
																		{
																		}
																		HX_STACK_LINE(1690)
																		{
																		}
																	}
																	HX_STACK_LINE(1690)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1690)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1691)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1691)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1693)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1694);
																	{
																		HX_STACK_LINE(1694)
																		{
																		}
																		HX_STACK_LINE(1694)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1694)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1695)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1696);
																		{
																			HX_STACK_LINE(1696)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1696)
																			{
																				HX_STACK_LINE(1696)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1696)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1696)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1696)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1696)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1696)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1696)
																			{
																				HX_STACK_LINE(1696)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1696)
																				ret1->y = y0;
																				HX_STACK_LINE(1696)
																				{
																				}
																				HX_STACK_LINE(1696)
																				{
																				}
																			}
																			HX_STACK_LINE(1696)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1696)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1697)
																{
																	HX_STACK_LINE(1697)
																	{
																	}
																	HX_STACK_LINE(1697)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1699);
																		{
																			HX_STACK_LINE(1699)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1699)
																			{
																				HX_STACK_LINE(1699)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1699)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1699)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1699)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1699)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1699)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1699)
																			{
																				HX_STACK_LINE(1699)
																				ret1->x = p->x;
																				HX_STACK_LINE(1699)
																				ret1->y = p->y;
																				HX_STACK_LINE(1699)
																				{
																				}
																				HX_STACK_LINE(1699)
																				{
																				}
																			}
																			HX_STACK_LINE(1699)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1699)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1700)
															if ((fsty)){
																HX_STACK_LINE(1700)
																p->forced = true;
															}
															HX_STACK_LINE(1701)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1701)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1702)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1705)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1706);
																		{
																			HX_STACK_LINE(1706)
																			{
																			}
																			HX_STACK_LINE(1706)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1706)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1707)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1708);
																			{
																				HX_STACK_LINE(1708)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1708)
																				{
																					HX_STACK_LINE(1708)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1708)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1708)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1708)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1708)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1708)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1708)
																				{
																					HX_STACK_LINE(1708)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1708)
																					ret1->y = y1;
																					HX_STACK_LINE(1708)
																					{
																					}
																					HX_STACK_LINE(1708)
																					{
																					}
																				}
																				HX_STACK_LINE(1708)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1708)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1709)
																	{
																		HX_STACK_LINE(1709)
																		{
																		}
																		HX_STACK_LINE(1709)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1711);
																			{
																				HX_STACK_LINE(1711)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1711)
																				{
																					HX_STACK_LINE(1711)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1711)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1711)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1711)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1711)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1711)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1711)
																				{
																					HX_STACK_LINE(1711)
																					ret1->x = p->x;
																					HX_STACK_LINE(1711)
																					ret1->y = p->y;
																					HX_STACK_LINE(1711)
																					{
																					}
																					HX_STACK_LINE(1711)
																					{
																					}
																				}
																				HX_STACK_LINE(1711)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1711)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1712)
																if ((sndy)){
																	HX_STACK_LINE(1712)
																	p->forced = true;
																}
																HX_STACK_LINE(1713)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1713)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1714)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1717)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1718);
																			{
																				HX_STACK_LINE(1718)
																				{
																				}
																				HX_STACK_LINE(1718)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1718)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1719)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1720);
																				{
																					HX_STACK_LINE(1720)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1720)
																					{
																						HX_STACK_LINE(1720)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1720)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1720)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1720)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1720)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1720)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1720)
																					{
																						HX_STACK_LINE(1720)
																						ret1->x = x1;
																						HX_STACK_LINE(1720)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1720)
																						{
																						}
																						HX_STACK_LINE(1720)
																						{
																						}
																					}
																					HX_STACK_LINE(1720)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1720)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1721)
																		{
																			HX_STACK_LINE(1721)
																			{
																			}
																			HX_STACK_LINE(1721)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1723);
																				{
																					HX_STACK_LINE(1723)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1723)
																					{
																						HX_STACK_LINE(1723)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1723)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1723)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1723)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1723)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1723)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1723)
																					{
																						HX_STACK_LINE(1723)
																						ret1->x = p->x;
																						HX_STACK_LINE(1723)
																						ret1->y = p->y;
																						HX_STACK_LINE(1723)
																						{
																						}
																						HX_STACK_LINE(1723)
																						{
																						}
																					}
																					HX_STACK_LINE(1723)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1723)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1724)
																	if ((sndx)){
																		HX_STACK_LINE(1724)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1725)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1725)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1726)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1730);
																			{
																				HX_STACK_LINE(1730)
																				{
																				}
																				HX_STACK_LINE(1730)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1730)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1731)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1732);
																				{
																					HX_STACK_LINE(1732)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1732)
																					{
																						HX_STACK_LINE(1732)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1732)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1732)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1732)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1732)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1732)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1732)
																					{
																						HX_STACK_LINE(1732)
																						ret1->x = x0;
																						HX_STACK_LINE(1732)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1732)
																						{
																						}
																						HX_STACK_LINE(1732)
																						{
																						}
																					}
																					HX_STACK_LINE(1732)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1732)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1733)
																		{
																			HX_STACK_LINE(1733)
																			{
																			}
																			HX_STACK_LINE(1733)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1735);
																				{
																					HX_STACK_LINE(1735)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1735)
																					{
																						HX_STACK_LINE(1735)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1735)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1735)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1735)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1735)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1735)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1735)
																					{
																						HX_STACK_LINE(1735)
																						ret1->x = p->x;
																						HX_STACK_LINE(1735)
																						ret1->y = p->y;
																						HX_STACK_LINE(1735)
																						{
																						}
																						HX_STACK_LINE(1735)
																						{
																						}
																					}
																					HX_STACK_LINE(1735)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1735)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1736)
																	if ((fstx)){
																		HX_STACK_LINE(1736)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1737)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1737)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1738)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1741);
												{
													HX_STACK_LINE(1742)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1743)
													if (((ret->p2 == null()))){
														HX_STACK_LINE(1743)
														ret->p2 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1745)
														obj->prev = ret->p2;
														HX_STACK_LINE(1746)
														obj->next = ret->p2->next;
														HX_STACK_LINE(1747)
														ret->p2->next->prev = obj;
														HX_STACK_LINE(1748)
														ret->p2->next = obj;
													}
													HX_STACK_LINE(1750)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1741)
										ret->p2 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1754)
							ret->p2 = ret->p2->next;
							HX_STACK_LINE(1755)
							ret->key2 = val1;
							HX_STACK_LINE(1756)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1757)
								val1 = (int)0;
								HX_STACK_LINE(1758)
								ret->key2 = (int)0;
								HX_STACK_LINE(1759)
								ret->p2 = null();
							}
						}
						HX_STACK_LINE(1762)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1763)
							ret->pr = ret->p1;
							HX_STACK_LINE(1764)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1765)
							ret->keyr = ret->key1;
						}
						else{
							HX_STACK_LINE(1768)
							ret->pr = ret->p2;
							HX_STACK_LINE(1769)
							ret->okeyr = ret->okey2;
							HX_STACK_LINE(1770)
							ret->keyr = ret->key2;
						}
					}
					else{
						HX_STACK_LINE(1774)
						int val1 = (int)14;		HX_STACK_VAR(val1,"val1");
						HX_STACK_LINE(1775)
						{
							HX_STACK_LINE(1776)
							ret->okey1 = val1;
							HX_STACK_LINE(1777)
							{
								HX_STACK_LINE(1777)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(1777)
								while(((_g < (int)8))){
									HX_STACK_LINE(1777)
									int i = (_g)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1778)
									if (((((int(val1) & int((int((int)1) << int(i))))) != (int)0))){
										HX_STACK_LINE(1779)
										::zpp_nape::geom::ZPP_GeomVert p = null();		HX_STACK_VAR(p,"p");
										HX_STACK_LINE(1780)
										if (((i == (int)0))){
											struct _Function_11_1{
												inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y0){
													HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1781);
													{
														HX_STACK_LINE(1781)
														::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
														HX_STACK_LINE(1781)
														{
															HX_STACK_LINE(1781)
															if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																HX_STACK_LINE(1781)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
															}
															else{
																HX_STACK_LINE(1781)
																ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																HX_STACK_LINE(1781)
																::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																HX_STACK_LINE(1781)
																ret1->next = null();
															}
															HX_STACK_LINE(1781)
															ret1->forced = false;
														}
														HX_STACK_LINE(1781)
														{
															HX_STACK_LINE(1781)
															ret1->x = x0;
															HX_STACK_LINE(1781)
															ret1->y = y0;
															HX_STACK_LINE(1781)
															{
															}
															HX_STACK_LINE(1781)
															{
															}
														}
														HX_STACK_LINE(1781)
														return ret1;
													}
													return null();
												}
											};
											HX_STACK_LINE(1781)
											p = _Function_11_1::Block(x0,y0);
											HX_STACK_LINE(1782)
											if (((bool(fstx) || bool(fsty)))){
												HX_STACK_LINE(1782)
												p->forced = true;
											}
										}
										else{
											HX_STACK_LINE(1784)
											if (((i == (int)2))){
												struct _Function_12_1{
													inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y0){
														HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1785);
														{
															HX_STACK_LINE(1785)
															::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
															HX_STACK_LINE(1785)
															{
																HX_STACK_LINE(1785)
																if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																	HX_STACK_LINE(1785)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																}
																else{
																	HX_STACK_LINE(1785)
																	ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																	HX_STACK_LINE(1785)
																	::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																	HX_STACK_LINE(1785)
																	ret1->next = null();
																}
																HX_STACK_LINE(1785)
																ret1->forced = false;
															}
															HX_STACK_LINE(1785)
															{
																HX_STACK_LINE(1785)
																ret1->x = x1;
																HX_STACK_LINE(1785)
																ret1->y = y0;
																HX_STACK_LINE(1785)
																{
																}
																HX_STACK_LINE(1785)
																{
																}
															}
															HX_STACK_LINE(1785)
															return ret1;
														}
														return null();
													}
												};
												HX_STACK_LINE(1785)
												p = _Function_12_1::Block(x1,y0);
												HX_STACK_LINE(1786)
												if (((bool(sndx) || bool(fsty)))){
													HX_STACK_LINE(1786)
													p->forced = true;
												}
											}
											else{
												HX_STACK_LINE(1788)
												if (((i == (int)4))){
													struct _Function_13_1{
														inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &y1){
															HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1789);
															{
																HX_STACK_LINE(1789)
																::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																HX_STACK_LINE(1789)
																{
																	HX_STACK_LINE(1789)
																	if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																		HX_STACK_LINE(1789)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																	}
																	else{
																		HX_STACK_LINE(1789)
																		ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																		HX_STACK_LINE(1789)
																		::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																		HX_STACK_LINE(1789)
																		ret1->next = null();
																	}
																	HX_STACK_LINE(1789)
																	ret1->forced = false;
																}
																HX_STACK_LINE(1789)
																{
																	HX_STACK_LINE(1789)
																	ret1->x = x1;
																	HX_STACK_LINE(1789)
																	ret1->y = y1;
																	HX_STACK_LINE(1789)
																	{
																	}
																	HX_STACK_LINE(1789)
																	{
																	}
																}
																HX_STACK_LINE(1789)
																return ret1;
															}
															return null();
														}
													};
													HX_STACK_LINE(1789)
													p = _Function_13_1::Block(x1,y1);
													HX_STACK_LINE(1790)
													if (((bool(sndx) || bool(sndy)))){
														HX_STACK_LINE(1790)
														p->forced = true;
													}
												}
												else{
													HX_STACK_LINE(1792)
													if (((i == (int)6))){
														struct _Function_14_1{
															inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &y1){
																HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1793);
																{
																	HX_STACK_LINE(1793)
																	::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																	HX_STACK_LINE(1793)
																	{
																		HX_STACK_LINE(1793)
																		if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																			HX_STACK_LINE(1793)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																		}
																		else{
																			HX_STACK_LINE(1793)
																			ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																			HX_STACK_LINE(1793)
																			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																			HX_STACK_LINE(1793)
																			ret1->next = null();
																		}
																		HX_STACK_LINE(1793)
																		ret1->forced = false;
																	}
																	HX_STACK_LINE(1793)
																	{
																		HX_STACK_LINE(1793)
																		ret1->x = x0;
																		HX_STACK_LINE(1793)
																		ret1->y = y1;
																		HX_STACK_LINE(1793)
																		{
																		}
																		HX_STACK_LINE(1793)
																		{
																		}
																	}
																	HX_STACK_LINE(1793)
																	return ret1;
																}
																return null();
															}
														};
														HX_STACK_LINE(1793)
														p = _Function_14_1::Block(x0,y1);
														HX_STACK_LINE(1794)
														if (((bool(fstx) || bool(sndy)))){
															HX_STACK_LINE(1794)
															p->forced = true;
														}
													}
													else{
														HX_STACK_LINE(1796)
														if (((i == (int)1))){
															struct _Function_15_1{
																inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																	HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1797);
																	{
																		HX_STACK_LINE(1797)
																		{
																		}
																		HX_STACK_LINE(1797)
																		return ints->list->__get(((((int(yn) << int((int)1))) * ints->width) + xn));
																	}
																	return null();
																}
															};
															HX_STACK_LINE(1797)
															p = _Function_15_1::Block(ints,xn,yn);
															HX_STACK_LINE(1798)
															if (((p == null()))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Float &v0,Dynamic &iso,int &quality){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1799);
																		{
																			HX_STACK_LINE(1799)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1799)
																			{
																				HX_STACK_LINE(1799)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1799)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1799)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1799)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1799)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1799)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1799)
																			{
																				HX_STACK_LINE(1799)
																				ret1->x = __this->xlerp(x0,x1,y0,v0,v1,iso,quality);
																				HX_STACK_LINE(1799)
																				ret1->y = y0;
																				HX_STACK_LINE(1799)
																				{
																				}
																				HX_STACK_LINE(1799)
																				{
																				}
																			}
																			HX_STACK_LINE(1799)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1799)
																p = _Function_16_1::Block(x1,x0,y0,this,v1,v0,iso,quality);
																HX_STACK_LINE(1800)
																{
																	HX_STACK_LINE(1800)
																	{
																	}
																	HX_STACK_LINE(1800)
																	ints->list[((((int(yn) << int((int)1))) * ints->width) + xn)] = p;
																}
															}
															else{
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1802);
																		{
																			HX_STACK_LINE(1802)
																			::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																			HX_STACK_LINE(1802)
																			{
																				HX_STACK_LINE(1802)
																				if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																					HX_STACK_LINE(1802)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																				}
																				else{
																					HX_STACK_LINE(1802)
																					ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																					HX_STACK_LINE(1802)
																					::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																					HX_STACK_LINE(1802)
																					ret1->next = null();
																				}
																				HX_STACK_LINE(1802)
																				ret1->forced = false;
																			}
																			HX_STACK_LINE(1802)
																			{
																				HX_STACK_LINE(1802)
																				ret1->x = p->x;
																				HX_STACK_LINE(1802)
																				ret1->y = p->y;
																				HX_STACK_LINE(1802)
																				{
																				}
																				HX_STACK_LINE(1802)
																				{
																				}
																			}
																			HX_STACK_LINE(1802)
																			return ret1;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1802)
																p = _Function_16_1::Block(p);
															}
															HX_STACK_LINE(1803)
															if ((fsty)){
																HX_STACK_LINE(1803)
																p->forced = true;
															}
															HX_STACK_LINE(1804)
															if (((bool((p->x == x0)) || bool((p->x == x1))))){
																HX_STACK_LINE(1804)
																if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)4))) != (int)0))))))){
																	HX_STACK_LINE(1805)
																	hx::XorEq(val1,(int)2);
																}
															}
														}
														else{
															HX_STACK_LINE(1808)
															if (((i == (int)5))){
																struct _Function_16_1{
																	inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																		HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1809);
																		{
																			HX_STACK_LINE(1809)
																			{
																			}
																			HX_STACK_LINE(1809)
																			return ints->list->__get(((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn));
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(1809)
																p = _Function_16_1::Block(ints,xn,yn);
																HX_STACK_LINE(1810)
																if (((p == null()))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &x0,Float &v3,Float &v2,Float &y1,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Dynamic &iso,int &quality){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1811);
																			{
																				HX_STACK_LINE(1811)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1811)
																				{
																					HX_STACK_LINE(1811)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1811)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1811)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1811)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1811)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1811)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1811)
																				{
																					HX_STACK_LINE(1811)
																					ret1->x = __this->xlerp(x0,x1,y1,v3,v2,iso,quality);
																					HX_STACK_LINE(1811)
																					ret1->y = y1;
																					HX_STACK_LINE(1811)
																					{
																					}
																					HX_STACK_LINE(1811)
																					{
																					}
																				}
																				HX_STACK_LINE(1811)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1811)
																	p = _Function_17_1::Block(x1,x0,v3,v2,y1,this,iso,quality);
																	HX_STACK_LINE(1812)
																	{
																		HX_STACK_LINE(1812)
																		{
																		}
																		HX_STACK_LINE(1812)
																		ints->list[((((((int(yn) << int((int)1))) + (int)2)) * ints->width) + xn)] = p;
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1814);
																			{
																				HX_STACK_LINE(1814)
																				::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																				HX_STACK_LINE(1814)
																				{
																					HX_STACK_LINE(1814)
																					if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																						HX_STACK_LINE(1814)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																					}
																					else{
																						HX_STACK_LINE(1814)
																						ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																						HX_STACK_LINE(1814)
																						::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																						HX_STACK_LINE(1814)
																						ret1->next = null();
																					}
																					HX_STACK_LINE(1814)
																					ret1->forced = false;
																				}
																				HX_STACK_LINE(1814)
																				{
																					HX_STACK_LINE(1814)
																					ret1->x = p->x;
																					HX_STACK_LINE(1814)
																					ret1->y = p->y;
																					HX_STACK_LINE(1814)
																					{
																					}
																					HX_STACK_LINE(1814)
																					{
																					}
																				}
																				HX_STACK_LINE(1814)
																				return ret1;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1814)
																	p = _Function_17_1::Block(p);
																}
																HX_STACK_LINE(1815)
																if ((sndy)){
																	HX_STACK_LINE(1815)
																	p->forced = true;
																}
																HX_STACK_LINE(1816)
																if (((bool((p->x == x0)) || bool((p->x == x1))))){
																	HX_STACK_LINE(1816)
																	if (((bool((bool((p->x == x0)) && bool((((int(val1) & int((int)64))) != (int)0)))) || bool((bool((p->x == x1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																		HX_STACK_LINE(1817)
																		hx::XorEq(val1,(int)32);
																	}
																}
															}
															else{
																HX_STACK_LINE(1820)
																if (((i == (int)3))){
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1821);
																			{
																				HX_STACK_LINE(1821)
																				{
																				}
																				HX_STACK_LINE(1821)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1))));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1821)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1822)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x1,Float &v2,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v1,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1823);
																				{
																					HX_STACK_LINE(1823)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1823)
																					{
																						HX_STACK_LINE(1823)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1823)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1823)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1823)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1823)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1823)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1823)
																					{
																						HX_STACK_LINE(1823)
																						ret1->x = x1;
																						HX_STACK_LINE(1823)
																						ret1->y = __this->ylerp(y0,y1,x1,v1,v2,iso,quality);
																						HX_STACK_LINE(1823)
																						{
																						}
																						HX_STACK_LINE(1823)
																						{
																						}
																					}
																					HX_STACK_LINE(1823)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1823)
																		p = _Function_18_1::Block(x1,v2,y1,y0,this,v1,iso,quality);
																		HX_STACK_LINE(1824)
																		{
																			HX_STACK_LINE(1824)
																			{
																			}
																			HX_STACK_LINE(1824)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + ((xn + (int)1)))] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1826);
																				{
																					HX_STACK_LINE(1826)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1826)
																					{
																						HX_STACK_LINE(1826)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1826)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1826)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1826)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1826)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1826)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1826)
																					{
																						HX_STACK_LINE(1826)
																						ret1->x = p->x;
																						HX_STACK_LINE(1826)
																						ret1->y = p->y;
																						HX_STACK_LINE(1826)
																						{
																						}
																						HX_STACK_LINE(1826)
																						{
																						}
																					}
																					HX_STACK_LINE(1826)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1826)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1827)
																	if ((sndx)){
																		HX_STACK_LINE(1827)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1828)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1828)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)4))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)16))) != (int)0))))))){
																			HX_STACK_LINE(1829)
																			hx::XorEq(val1,(int)8);
																		}
																	}
																}
																else{
																	struct _Function_17_1{
																		inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert &ints,int &xn,int &yn){
																			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1833);
																			{
																				HX_STACK_LINE(1833)
																				{
																				}
																				HX_STACK_LINE(1833)
																				return ints->list->__get(((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn));
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(1833)
																	p = _Function_17_1::Block(ints,xn,yn);
																	HX_STACK_LINE(1834)
																	if (((p == null()))){
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( Float &x0,Float &v3,Float &y1,Float &y0,::zpp_nape::geom::ZPP_MarchingSquares_obj *__this,Float &v0,Dynamic &iso,int &quality){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1835);
																				{
																					HX_STACK_LINE(1835)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1835)
																					{
																						HX_STACK_LINE(1835)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1835)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1835)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1835)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1835)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1835)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1835)
																					{
																						HX_STACK_LINE(1835)
																						ret1->x = x0;
																						HX_STACK_LINE(1835)
																						ret1->y = __this->ylerp(y0,y1,x0,v0,v3,iso,quality);
																						HX_STACK_LINE(1835)
																						{
																						}
																						HX_STACK_LINE(1835)
																						{
																						}
																					}
																					HX_STACK_LINE(1835)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1835)
																		p = _Function_18_1::Block(x0,v3,y1,y0,this,v0,iso,quality);
																		HX_STACK_LINE(1836)
																		{
																			HX_STACK_LINE(1836)
																			{
																			}
																			HX_STACK_LINE(1836)
																			ints->list[((((((int(yn) << int((int)1))) + (int)1)) * ints->width) + xn)] = p;
																		}
																	}
																	else{
																		struct _Function_18_1{
																			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p){
																				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1838);
																				{
																					HX_STACK_LINE(1838)
																					::zpp_nape::geom::ZPP_GeomVert ret1;		HX_STACK_VAR(ret1,"ret1");
																					HX_STACK_LINE(1838)
																					{
																						HX_STACK_LINE(1838)
																						if (((::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool == null()))){
																							HX_STACK_LINE(1838)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::__new();
																						}
																						else{
																							HX_STACK_LINE(1838)
																							ret1 = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
																							HX_STACK_LINE(1838)
																							::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = ret1->next;
																							HX_STACK_LINE(1838)
																							ret1->next = null();
																						}
																						HX_STACK_LINE(1838)
																						ret1->forced = false;
																					}
																					HX_STACK_LINE(1838)
																					{
																						HX_STACK_LINE(1838)
																						ret1->x = p->x;
																						HX_STACK_LINE(1838)
																						ret1->y = p->y;
																						HX_STACK_LINE(1838)
																						{
																						}
																						HX_STACK_LINE(1838)
																						{
																						}
																					}
																					HX_STACK_LINE(1838)
																					return ret1;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(1838)
																		p = _Function_18_1::Block(p);
																	}
																	HX_STACK_LINE(1839)
																	if ((fstx)){
																		HX_STACK_LINE(1839)
																		p->forced = true;
																	}
																	HX_STACK_LINE(1840)
																	if (((bool((p->y == y0)) || bool((p->y == y1))))){
																		HX_STACK_LINE(1840)
																		if (((bool((bool((p->y == y0)) && bool((((int(val1) & int((int)1))) != (int)0)))) || bool((bool((p->y == y1)) && bool((((int(val1) & int((int)64))) != (int)0))))))){
																			HX_STACK_LINE(1841)
																			hx::XorEq(val1,(int)128);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
										struct _Function_10_1{
											inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &p,::zpp_nape::geom::ZPP_MarchPair &ret){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",1844);
												{
													HX_STACK_LINE(1845)
													::zpp_nape::geom::ZPP_GeomVert obj = p;		HX_STACK_VAR(obj,"obj");
													HX_STACK_LINE(1846)
													if (((ret->p1 == null()))){
														HX_STACK_LINE(1846)
														ret->p1 = obj->prev = obj->next = obj;
													}
													else{
														HX_STACK_LINE(1848)
														obj->prev = ret->p1;
														HX_STACK_LINE(1849)
														obj->next = ret->p1->next;
														HX_STACK_LINE(1850)
														ret->p1->next->prev = obj;
														HX_STACK_LINE(1851)
														ret->p1->next = obj;
													}
													HX_STACK_LINE(1853)
													return obj;
												}
												return null();
											}
										};
										HX_STACK_LINE(1844)
										ret->p1 = _Function_10_1::Block(p,ret);
									}
								}
							}
							HX_STACK_LINE(1857)
							ret->p1 = ret->p1->next;
							HX_STACK_LINE(1858)
							ret->key1 = val1;
							HX_STACK_LINE(1859)
							if (((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((bool((val1 == (int)1)) || bool((val1 == (int)4)))) || bool((val1 == (int)16)))) || bool((val1 == (int)64)))) || bool((val1 == (int)3)))) || bool((val1 == (int)12)))) || bool((val1 == (int)48)))) || bool((val1 == (int)192)))) || bool((val1 == (int)129)))) || bool((val1 == (int)6)))) || bool((val1 == (int)24)))) || bool((val1 == (int)96)))) || bool((val1 == (int)5)))) || bool((val1 == (int)20)))) || bool((val1 == (int)80)))) || bool((val1 == (int)65)))) || bool((val1 == (int)17)))) || bool((val1 == (int)68))))){
								HX_STACK_LINE(1860)
								val1 = (int)0;
								HX_STACK_LINE(1861)
								ret->key1 = (int)0;
								HX_STACK_LINE(1862)
								ret->p1 = null();
							}
						}
						HX_STACK_LINE(1865)
						if (((val1 == (int)0))){
							HX_STACK_LINE(1865)
							ret = null();
						}
						else{
							HX_STACK_LINE(1867)
							ret->pr = ret->p1;
							HX_STACK_LINE(1868)
							ret->okeyr = ret->okey1;
							HX_STACK_LINE(1869)
							ret->keyr = ret->key1;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1875)
		return ret;
	}
	HX_STACK_LINE(961)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC14(ZPP_MarchingSquares_obj,marchSquare,return )

bool ZPP_MarchingSquares_obj::comb( int flag){
	HX_STACK_PUSH("ZPP_MarchingSquares::comb","zpp_nape/geom/MarchingSquares.hx",943);
	HX_STACK_THIS(this);
	HX_STACK_ARG(flag,"flag");
	HX_STACK_LINE(944)
	int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
	HX_STACK_LINE(945)
	if (((((int(flag) & int((int)1))) != (int)0))){
		HX_STACK_LINE(945)
		(cnt)++;
	}
	HX_STACK_LINE(946)
	if (((((int(flag) & int((int)2))) != (int)0))){
		HX_STACK_LINE(946)
		(cnt)++;
	}
	HX_STACK_LINE(947)
	if (((((int(flag) & int((int)4))) != (int)0))){
		HX_STACK_LINE(947)
		(cnt)++;
	}
	HX_STACK_LINE(948)
	return (cnt >= (int)2);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,comb,return )

bool ZPP_MarchingSquares_obj::combDown( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combDown","zpp_nape/geom/MarchingSquares.hx",937);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(938)
	int flag = (int(((int(key) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",939);
			{
				HX_STACK_LINE(939)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(939)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(939)
					(cnt)++;
				}
				HX_STACK_LINE(939)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(939)
					(cnt)++;
				}
				HX_STACK_LINE(939)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(939)
					(cnt)++;
				}
				HX_STACK_LINE(939)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(939)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combDown,return )

bool ZPP_MarchingSquares_obj::combUp( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combUp","zpp_nape/geom/MarchingSquares.hx",931);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(932)
	int flag = (int(key) & int((int)7));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",933);
			{
				HX_STACK_LINE(933)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(933)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(933)
					(cnt)++;
				}
				HX_STACK_LINE(933)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(933)
					(cnt)++;
				}
				HX_STACK_LINE(933)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(933)
					(cnt)++;
				}
				HX_STACK_LINE(933)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(933)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combUp,return )

bool ZPP_MarchingSquares_obj::combRight( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combRight","zpp_nape/geom/MarchingSquares.hx",925);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(926)
	int flag = (int(((int(key) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",927);
			{
				HX_STACK_LINE(927)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(927)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(927)
					(cnt)++;
				}
				HX_STACK_LINE(927)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(927)
					(cnt)++;
				}
				HX_STACK_LINE(927)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(927)
					(cnt)++;
				}
				HX_STACK_LINE(927)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(927)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combRight,return )

bool ZPP_MarchingSquares_obj::combLeft( int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::combLeft","zpp_nape/geom/MarchingSquares.hx",919);
	HX_STACK_THIS(this);
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(920)
	int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
	struct _Function_1_1{
		inline static bool Block( int &flag){
			HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",921);
			{
				HX_STACK_LINE(921)
				int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
				HX_STACK_LINE(921)
				if (((((int(flag) & int((int)1))) != (int)0))){
					HX_STACK_LINE(921)
					(cnt)++;
				}
				HX_STACK_LINE(921)
				if (((((int(flag) & int((int)2))) != (int)0))){
					HX_STACK_LINE(921)
					(cnt)++;
				}
				HX_STACK_LINE(921)
				if (((((int(flag) & int((int)4))) != (int)0))){
					HX_STACK_LINE(921)
					(cnt)++;
				}
				HX_STACK_LINE(921)
				return (cnt >= (int)2);
			}
			return null();
		}
	};
	HX_STACK_LINE(921)
	return _Function_1_1::Block(flag);
}


HX_DEFINE_DYNAMIC_FUNC1(ZPP_MarchingSquares_obj,combLeft,return )

Void ZPP_MarchingSquares_obj::combUD_virtual( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combUD_virtual","zpp_nape/geom/MarchingSquares.hx",908);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(909)
		::zpp_nape::geom::ZPP_GeomVert ad = (  (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))) ? ::zpp_nape::geom::ZPP_GeomVert(a->p2) : ::zpp_nape::geom::ZPP_GeomVert(a->p1) );		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(910)
		::zpp_nape::geom::ZPP_GeomVert bu = (  (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(b->p2) : ::zpp_nape::geom::ZPP_GeomVert(b->p1) );		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(911)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(912)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(913)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(914)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(915)
		ap->forced = bp->forced = ap2->forced = bp2->forced = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD_virtual,(void))

Void ZPP_MarchingSquares_obj::combUD( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combUD","zpp_nape/geom/MarchingSquares.hx",861);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		HX_STACK_LINE(862)
		::zpp_nape::geom::ZPP_GeomVert ad = (  (((bool((a->p2 != null())) && bool((a->key2 == (int)56))))) ? ::zpp_nape::geom::ZPP_GeomVert(a->p2) : ::zpp_nape::geom::ZPP_GeomVert(a->p1) );		HX_STACK_VAR(ad,"ad");
		HX_STACK_LINE(863)
		::zpp_nape::geom::ZPP_GeomVert bu = (  (((bool((b->p2 != null())) && bool((b->key2 == (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(b->p2) : ::zpp_nape::geom::ZPP_GeomVert(b->p1) );		HX_STACK_VAR(bu,"bu");
		HX_STACK_LINE(864)
		::zpp_nape::geom::ZPP_GeomVert ap = a->pd;		HX_STACK_VAR(ap,"ap");
		HX_STACK_LINE(865)
		::zpp_nape::geom::ZPP_GeomVert bp = bu;		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(866)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->prev;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(867)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->next;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(868)
		bp->next = ap->next;
		HX_STACK_LINE(869)
		ap->next->prev = bp;
		HX_STACK_LINE(870)
		{
			HX_STACK_LINE(871)
			::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(872)
			{
			}
			HX_STACK_LINE(880)
			{
				HX_STACK_LINE(880)
				if (((o->wrap != null()))){
					HX_STACK_LINE(880)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(880)
					{
						HX_STACK_LINE(880)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(880)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(880)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(880)
						{
							HX_STACK_LINE(880)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(880)
							if ((_this1->_immutable)){
								HX_STACK_LINE(880)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(880)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(880)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(880)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(880)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(880)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(880)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(880)
						_this->zpp_inner = null();
						HX_STACK_LINE(880)
						{
							HX_STACK_LINE(880)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(880)
							{
							}
							HX_STACK_LINE(880)
							o1->zpp_pool = null();
							HX_STACK_LINE(880)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(880)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(880)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(880)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(880)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(880)
						{
							HX_STACK_LINE(880)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(880)
							{
							}
							HX_STACK_LINE(880)
							{
								HX_STACK_LINE(880)
								if (((o1->outer != null()))){
									HX_STACK_LINE(880)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(880)
									o1->outer = null();
								}
								HX_STACK_LINE(880)
								o1->_isimmutable = null();
								HX_STACK_LINE(880)
								o1->_validate = null();
								HX_STACK_LINE(880)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(880)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(880)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(880)
					o->wrap = null();
				}
				HX_STACK_LINE(880)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(881)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(882)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(887)
		bp2->prev = ap2->prev;
		HX_STACK_LINE(888)
		ap2->prev->next = bp2;
		HX_STACK_LINE(889)
		if (((ap2 == a->p1))){
			HX_STACK_LINE(889)
			a->p1 = bp2;
		}
		HX_STACK_LINE(890)
		{
			HX_STACK_LINE(891)
			::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(892)
			{
			}
			HX_STACK_LINE(900)
			{
				HX_STACK_LINE(900)
				if (((o->wrap != null()))){
					HX_STACK_LINE(900)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(900)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(900)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(900)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(900)
						{
							HX_STACK_LINE(900)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(900)
							if ((_this1->_immutable)){
								HX_STACK_LINE(900)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(900)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(900)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(900)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(900)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(900)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(900)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(900)
						_this->zpp_inner = null();
						HX_STACK_LINE(900)
						{
							HX_STACK_LINE(900)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(900)
							{
							}
							HX_STACK_LINE(900)
							o1->zpp_pool = null();
							HX_STACK_LINE(900)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(900)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(900)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(900)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(900)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(900)
						{
							HX_STACK_LINE(900)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(900)
							{
							}
							HX_STACK_LINE(900)
							{
								HX_STACK_LINE(900)
								if (((o1->outer != null()))){
									HX_STACK_LINE(900)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(900)
									o1->outer = null();
								}
								HX_STACK_LINE(900)
								o1->_isimmutable = null();
								HX_STACK_LINE(900)
								o1->_validate = null();
								HX_STACK_LINE(900)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(900)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(900)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(900)
					o->wrap = null();
				}
				HX_STACK_LINE(900)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(901)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(902)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combUD,(void))

Void ZPP_MarchingSquares_obj::combLR( ::zpp_nape::geom::ZPP_MarchPair a,::zpp_nape::geom::ZPP_MarchPair b){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::combLR","zpp_nape/geom/MarchingSquares.hx",768);
		HX_STACK_THIS(this);
		HX_STACK_ARG(a,"a");
		HX_STACK_ARG(b,"b");
		struct _Function_1_1{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_MarchPair &a){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",769);
				{
					HX_STACK_LINE(769)
					::zpp_nape::geom::ZPP_GeomVert poly = a->pr;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(769)
					int kind = (int(a->okeyr) & int((int)7));		HX_STACK_VAR(kind,"kind");
					HX_STACK_LINE(769)
					return (  (((kind == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly) : ::zpp_nape::geom::ZPP_GeomVert((  (((kind == (int)3))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->next->next) : ::zpp_nape::geom::ZPP_GeomVert(poly->next) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(769)
		::zpp_nape::geom::ZPP_GeomVert ap = _Function_1_1::Block(a);		HX_STACK_VAR(ap,"ap");
		struct _Function_1_2{
			inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_MarchPair &b){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",770);
				{
					HX_STACK_LINE(770)
					::zpp_nape::geom::ZPP_GeomVert poly = b->p1;		HX_STACK_VAR(poly,"poly");
					HX_STACK_LINE(770)
					return (  (((((int(b->okey1) & int((int)1))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly) );
				}
				return null();
			}
		};
		HX_STACK_LINE(770)
		::zpp_nape::geom::ZPP_GeomVert bp = _Function_1_2::Block(b);		HX_STACK_VAR(bp,"bp");
		HX_STACK_LINE(771)
		::zpp_nape::geom::ZPP_GeomVert ap2 = ap->next;		HX_STACK_VAR(ap2,"ap2");
		HX_STACK_LINE(772)
		::zpp_nape::geom::ZPP_GeomVert bp2 = bp->prev;		HX_STACK_VAR(bp2,"bp2");
		HX_STACK_LINE(773)
		if (((((int(a->keyr) & int((int)4))) != (int)0))){
			HX_STACK_LINE(774)
			if (((b->pr == b->p1))){
				HX_STACK_LINE(774)
				b->pr = ap->prev;
			}
			HX_STACK_LINE(775)
			b->p1 = ap->prev;
			HX_STACK_LINE(776)
			ap->prev->next = bp->next;
			HX_STACK_LINE(777)
			bp->next->prev = ap->prev;
			HX_STACK_LINE(778)
			{
				HX_STACK_LINE(779)
				::zpp_nape::geom::ZPP_GeomVert o = ap;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(780)
				{
				}
				HX_STACK_LINE(788)
				{
					HX_STACK_LINE(788)
					if (((o->wrap != null()))){
						HX_STACK_LINE(788)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(788)
						{
							HX_STACK_LINE(788)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(788)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(788)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(788)
							{
								HX_STACK_LINE(788)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(788)
								if ((_this1->_immutable)){
									HX_STACK_LINE(788)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(788)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(788)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(788)
							if ((_this->zpp_inner->_inuse)){
								HX_STACK_LINE(788)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(788)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(788)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(788)
							_this->zpp_inner = null();
							HX_STACK_LINE(788)
							{
								HX_STACK_LINE(788)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(788)
								{
								}
								HX_STACK_LINE(788)
								o1->zpp_pool = null();
								HX_STACK_LINE(788)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(788)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(788)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(788)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(788)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(788)
							{
								HX_STACK_LINE(788)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(788)
								{
								}
								HX_STACK_LINE(788)
								{
									HX_STACK_LINE(788)
									if (((o1->outer != null()))){
										HX_STACK_LINE(788)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(788)
										o1->outer = null();
									}
									HX_STACK_LINE(788)
									o1->_isimmutable = null();
									HX_STACK_LINE(788)
									o1->_validate = null();
									HX_STACK_LINE(788)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(788)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(788)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(788)
						o->wrap = null();
					}
					HX_STACK_LINE(788)
					o->prev = o->next = null();
				}
				HX_STACK_LINE(789)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(790)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(797)
			ap->next = bp->next;
			HX_STACK_LINE(798)
			bp->next->prev = ap;
		}
		HX_STACK_LINE(800)
		{
			HX_STACK_LINE(801)
			::zpp_nape::geom::ZPP_GeomVert o = bp;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(802)
			{
			}
			HX_STACK_LINE(810)
			{
				HX_STACK_LINE(810)
				if (((o->wrap != null()))){
					HX_STACK_LINE(810)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(810)
					{
						HX_STACK_LINE(810)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(810)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(810)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(810)
						{
							HX_STACK_LINE(810)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(810)
							if ((_this1->_immutable)){
								HX_STACK_LINE(810)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(810)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(810)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(810)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(810)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(810)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(810)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(810)
						_this->zpp_inner = null();
						HX_STACK_LINE(810)
						{
							HX_STACK_LINE(810)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(810)
							{
							}
							HX_STACK_LINE(810)
							o1->zpp_pool = null();
							HX_STACK_LINE(810)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(810)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(810)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(810)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(810)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(810)
						{
							HX_STACK_LINE(810)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(810)
							{
							}
							HX_STACK_LINE(810)
							{
								HX_STACK_LINE(810)
								if (((o1->outer != null()))){
									HX_STACK_LINE(810)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(810)
									o1->outer = null();
								}
								HX_STACK_LINE(810)
								o1->_isimmutable = null();
								HX_STACK_LINE(810)
								o1->_validate = null();
								HX_STACK_LINE(810)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(810)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(810)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(810)
					o->wrap = null();
				}
				HX_STACK_LINE(810)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(811)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(812)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
		HX_STACK_LINE(817)
		if (((((int(a->keyr) & int((int)16))) != (int)0))){
			HX_STACK_LINE(818)
			b->pd = ap2->next;
			HX_STACK_LINE(819)
			ap2->next->prev = bp2->prev;
			HX_STACK_LINE(820)
			bp2->prev->next = ap2->next;
			HX_STACK_LINE(821)
			{
				HX_STACK_LINE(822)
				::zpp_nape::geom::ZPP_GeomVert o = ap2;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(823)
				{
				}
				HX_STACK_LINE(831)
				{
					HX_STACK_LINE(831)
					if (((o->wrap != null()))){
						HX_STACK_LINE(831)
						o->wrap->zpp_inner->_inuse = false;
						HX_STACK_LINE(831)
						{
							HX_STACK_LINE(831)
							::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(831)
							if (((bool((_this != null())) && bool(_this->zpp_disp)))){
								HX_STACK_LINE(831)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(831)
							{
								HX_STACK_LINE(831)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(831)
								if ((_this1->_immutable)){
									HX_STACK_LINE(831)
									hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
								}
								HX_STACK_LINE(831)
								if (((_this1->_isimmutable_dyn() != null()))){
									HX_STACK_LINE(831)
									_this1->_isimmutable();
								}
							}
							HX_STACK_LINE(831)
							if ((_this->zpp_inner->_inuse)){
								HX_STACK_LINE(831)
								hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
							}
							HX_STACK_LINE(831)
							::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
							HX_STACK_LINE(831)
							_this->zpp_inner->outer = null();
							HX_STACK_LINE(831)
							_this->zpp_inner = null();
							HX_STACK_LINE(831)
							{
								HX_STACK_LINE(831)
								::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(831)
								{
								}
								HX_STACK_LINE(831)
								o1->zpp_pool = null();
								HX_STACK_LINE(831)
								if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
									HX_STACK_LINE(831)
									::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
								}
								else{
									HX_STACK_LINE(831)
									::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
								}
								HX_STACK_LINE(831)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
								HX_STACK_LINE(831)
								o1->zpp_disp = true;
							}
							HX_STACK_LINE(831)
							{
								HX_STACK_LINE(831)
								::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
								HX_STACK_LINE(831)
								{
								}
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									if (((o1->outer != null()))){
										HX_STACK_LINE(831)
										o1->outer->zpp_inner = null();
										HX_STACK_LINE(831)
										o1->outer = null();
									}
									HX_STACK_LINE(831)
									o1->_isimmutable = null();
									HX_STACK_LINE(831)
									o1->_validate = null();
									HX_STACK_LINE(831)
									o1->_invalidate = null();
								}
								HX_STACK_LINE(831)
								o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(831)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
							}
						}
						HX_STACK_LINE(831)
						o->wrap = null();
					}
					HX_STACK_LINE(831)
					o->prev = o->next = null();
				}
				HX_STACK_LINE(832)
				o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
				HX_STACK_LINE(833)
				::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
			}
		}
		else{
			HX_STACK_LINE(840)
			ap2->prev = bp2->prev;
			HX_STACK_LINE(841)
			bp2->prev->next = ap2;
		}
		HX_STACK_LINE(843)
		{
			HX_STACK_LINE(844)
			::zpp_nape::geom::ZPP_GeomVert o = bp2;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(845)
			{
			}
			HX_STACK_LINE(853)
			{
				HX_STACK_LINE(853)
				if (((o->wrap != null()))){
					HX_STACK_LINE(853)
					o->wrap->zpp_inner->_inuse = false;
					HX_STACK_LINE(853)
					{
						HX_STACK_LINE(853)
						::nape::geom::Vec2 _this = o->wrap;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(853)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(853)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(853)
							if ((_this1->_immutable)){
								HX_STACK_LINE(853)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(853)
							if (((_this1->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(853)
								_this1->_isimmutable();
							}
						}
						HX_STACK_LINE(853)
						if ((_this->zpp_inner->_inuse)){
							HX_STACK_LINE(853)
							hx::Throw (HX_CSTRING("Error: This Vec2 is not disposable"));
						}
						HX_STACK_LINE(853)
						::zpp_nape::geom::ZPP_Vec2 inner = _this->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(853)
						_this->zpp_inner->outer = null();
						HX_STACK_LINE(853)
						_this->zpp_inner = null();
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							::nape::geom::Vec2 o1 = _this;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(853)
							{
							}
							HX_STACK_LINE(853)
							o1->zpp_pool = null();
							HX_STACK_LINE(853)
							if (((::zpp_nape::util::ZPP_PubPool_obj::nextVec2 != null()))){
								HX_STACK_LINE(853)
								::zpp_nape::util::ZPP_PubPool_obj::nextVec2->zpp_pool = o1;
							}
							else{
								HX_STACK_LINE(853)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o1;
							}
							HX_STACK_LINE(853)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = o1;
							HX_STACK_LINE(853)
							o1->zpp_disp = true;
						}
						HX_STACK_LINE(853)
						{
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2 o1 = inner;		HX_STACK_VAR(o1,"o1");
							HX_STACK_LINE(853)
							{
							}
							HX_STACK_LINE(853)
							{
								HX_STACK_LINE(853)
								if (((o1->outer != null()))){
									HX_STACK_LINE(853)
									o1->outer->zpp_inner = null();
									HX_STACK_LINE(853)
									o1->outer = null();
								}
								HX_STACK_LINE(853)
								o1->_isimmutable = null();
								HX_STACK_LINE(853)
								o1->_validate = null();
								HX_STACK_LINE(853)
								o1->_invalidate = null();
							}
							HX_STACK_LINE(853)
							o1->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(853)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o1;
						}
					}
					HX_STACK_LINE(853)
					o->wrap = null();
				}
				HX_STACK_LINE(853)
				o->prev = o->next = null();
			}
			HX_STACK_LINE(854)
			o->next = ::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool;
			HX_STACK_LINE(855)
			::zpp_nape::geom::ZPP_GeomVert_obj::zpp_pool = o;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,combLR,(void))

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkup( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkup","zpp_nape/geom/MarchingSquares.hx",768);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(768)
	return poly;
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkup,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkdown( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkdown","zpp_nape/geom/MarchingSquares.hx",763);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(763)
	return (  (((((int(key) & int((int)128))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly->prev->prev) );
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkdown,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkleft( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkleft","zpp_nape/geom/MarchingSquares.hx",758);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(758)
	return (  (((((int(key) & int((int)1))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(poly->prev) : ::zpp_nape::geom::ZPP_GeomVert(poly) );
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkleft,return )

::zpp_nape::geom::ZPP_GeomVert ZPP_MarchingSquares_obj::linkright( ::zpp_nape::geom::ZPP_GeomVert poly,int key){
	HX_STACK_PUSH("ZPP_MarchingSquares::linkright","zpp_nape/geom/MarchingSquares.hx",750);
	HX_STACK_THIS(this);
	HX_STACK_ARG(poly,"poly");
	HX_STACK_ARG(key,"key");
	HX_STACK_LINE(751)
	int kind = (int(key) & int((int)7));		HX_STACK_VAR(kind,"kind");
	HX_STACK_LINE(752)
	if (((kind == (int)0))){
		HX_STACK_LINE(752)
		return poly;
	}
	else{
		HX_STACK_LINE(753)
		if (((kind == (int)3))){
			HX_STACK_LINE(753)
			return poly->next->next;
		}
		else{
			HX_STACK_LINE(754)
			return poly->next;
		}
	}
	HX_STACK_LINE(752)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,linkright,return )

Void ZPP_MarchingSquares_obj::output( ::nape::geom::GeomPolyList ret,::zpp_nape::geom::ZPP_GeomVert poly){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::output","zpp_nape/geom/MarchingSquares.hx",662);
		HX_STACK_THIS(this);
		HX_STACK_ARG(ret,"ret");
		HX_STACK_ARG(poly,"poly");
		struct _Function_1_1{
			inline static bool Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",667);
				{
					struct _Function_2_1{
						inline static Float Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
							HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",668);
							{
								HX_STACK_LINE(669)
								{
								}
								HX_STACK_LINE(693)
								Float area = 0.0;		HX_STACK_VAR(area,"area");
								HX_STACK_LINE(694)
								{
									HX_STACK_LINE(695)
									::zpp_nape::geom::ZPP_GeomVert F = poly;		HX_STACK_VAR(F,"F");
									HX_STACK_LINE(696)
									::zpp_nape::geom::ZPP_GeomVert L = poly;		HX_STACK_VAR(L,"L");
									HX_STACK_LINE(697)
									if (((F != null()))){
										HX_STACK_LINE(698)
										::zpp_nape::geom::ZPP_GeomVert nite = F;		HX_STACK_VAR(nite,"nite");
										HX_STACK_LINE(699)
										do{
											HX_STACK_LINE(700)
											::zpp_nape::geom::ZPP_GeomVert v = nite;		HX_STACK_VAR(v,"v");
											HX_STACK_LINE(701)
											hx::AddEq(area,(v->x * ((v->next->y - v->prev->y))));
											HX_STACK_LINE(706)
											nite = nite->next;
										}
while(((nite != L)));
									}
								}
								HX_STACK_LINE(711)
								return (area * 0.5);
							}
							return null();
						}
					};
					HX_STACK_LINE(668)
					Float a = _Function_2_1::Block(poly);		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(713)
					return ((a * a) < (::nape::Config_obj::epsilon * ::nape::Config_obj::epsilon));
				}
				return null();
			}
		};
		HX_STACK_LINE(663)
		if (((  (((bool((bool((poly == null())) || bool((poly->next == poly)))) || bool((poly->next == poly->prev))))) ? bool(true) : bool(_Function_1_1::Block(poly)) ))){
			HX_STACK_LINE(716)
			while((!(((poly == null()))))){
				struct _Function_3_1{
					inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",717);
						{
							HX_STACK_LINE(718)
							{
							}
							struct _Function_4_1{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",726);
									{
										HX_STACK_LINE(727)
										poly->next = poly->prev = null();
										HX_STACK_LINE(728)
										{
										}
										HX_STACK_LINE(729)
										return poly = null();
									}
									return null();
								}
							};
							struct _Function_4_2{
								inline static ::zpp_nape::geom::ZPP_GeomVert Block( ::zpp_nape::geom::ZPP_GeomVert &poly){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",731);
									{
										HX_STACK_LINE(732)
										::zpp_nape::geom::ZPP_GeomVert retnodes = poly->next;		HX_STACK_VAR(retnodes,"retnodes");
										HX_STACK_LINE(733)
										poly->prev->next = poly->next;
										HX_STACK_LINE(734)
										poly->next->prev = poly->prev;
										HX_STACK_LINE(735)
										poly->next = poly->prev = null();
										HX_STACK_LINE(736)
										{
										}
										HX_STACK_LINE(737)
										poly = null();
										HX_STACK_LINE(738)
										return retnodes;
									}
									return null();
								}
							};
							HX_STACK_LINE(726)
							return (  (((bool((poly != null())) && bool((poly->prev == poly))))) ? ::zpp_nape::geom::ZPP_GeomVert(_Function_4_1::Block(poly)) : ::zpp_nape::geom::ZPP_GeomVert(_Function_4_2::Block(poly)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(717)
				poly = _Function_3_1::Block(poly);
			}
			HX_STACK_LINE(742)
			return null();
		}
		HX_STACK_LINE(744)
		::nape::geom::GeomPoly gp = ::nape::geom::GeomPoly_obj::get(null());		HX_STACK_VAR(gp,"gp");
		HX_STACK_LINE(745)
		gp->zpp_inner->vertices = poly;
		HX_STACK_LINE(746)
		if ((ret->zpp_inner->reverse_flag)){
			HX_STACK_LINE(746)
			ret->push(gp);
		}
		else{
			HX_STACK_LINE(746)
			ret->unshift(gp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ZPP_MarchingSquares_obj,output,(void))

::zpp_nape::geom::ZPP_MarchingSquares ZPP_MarchingSquares_obj::me;

::zpp_nape::util::Array2_Float ZPP_MarchingSquares_obj::isos;

::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert ZPP_MarchingSquares_obj::ints;

::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair ZPP_MarchingSquares_obj::map;

Void ZPP_MarchingSquares_obj::run( Dynamic iso,Float bx0,Float by0,Float bx1,Float by1,::nape::geom::Vec2 cell,int quality,bool combine,::nape::geom::GeomPolyList ret){
{
		HX_STACK_PUSH("ZPP_MarchingSquares::run","zpp_nape/geom/MarchingSquares.hx",276);
		HX_STACK_ARG(iso,"iso");
		HX_STACK_ARG(bx0,"bx0");
		HX_STACK_ARG(by0,"by0");
		HX_STACK_ARG(bx1,"bx1");
		HX_STACK_ARG(by1,"by1");
		HX_STACK_ARG(cell,"cell");
		HX_STACK_ARG(quality,"quality");
		HX_STACK_ARG(combine,"combine");
		HX_STACK_ARG(ret,"ret");
		struct _Function_1_1{
			inline static Float Block( ::nape::geom::Vec2 &cell){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",277);
				{
					HX_STACK_LINE(277)
					if (((bool((cell != null())) && bool(cell->zpp_disp)))){
						HX_STACK_LINE(277)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(277)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(277)
							_this->_validate();
						}
					}
					HX_STACK_LINE(277)
					return cell->zpp_inner->x;
				}
				return null();
			}
		};
		HX_STACK_LINE(277)
		Float xp = (Float(((bx1 - bx0))) / Float(_Function_1_1::Block(cell)));		HX_STACK_VAR(xp,"xp");
		HX_STACK_LINE(278)
		int xn = ::Std_obj::_int(xp);		HX_STACK_VAR(xn,"xn");
		struct _Function_1_2{
			inline static Float Block( ::nape::geom::Vec2 &cell){
				HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",279);
				{
					HX_STACK_LINE(279)
					if (((bool((cell != null())) && bool(cell->zpp_disp)))){
						HX_STACK_LINE(279)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(279)
						if (((_this->_validate_dyn() != null()))){
							HX_STACK_LINE(279)
							_this->_validate();
						}
					}
					HX_STACK_LINE(279)
					return cell->zpp_inner->y;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		Float yp = (Float(((by1 - by0))) / Float(_Function_1_2::Block(cell)));		HX_STACK_VAR(yp,"yp");
		HX_STACK_LINE(280)
		int yn = ::Std_obj::_int(yp);		HX_STACK_VAR(yn,"yn");
		HX_STACK_LINE(281)
		if (((xp != xn))){
			HX_STACK_LINE(281)
			(xn)++;
		}
		HX_STACK_LINE(282)
		if (((yp != yn))){
			HX_STACK_LINE(282)
			(yn)++;
		}
		HX_STACK_LINE(283)
		if ((combine)){
			HX_STACK_LINE(283)
			if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::map == null()))){
				HX_STACK_LINE(284)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map = ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair_obj::__new(xn,yn);
			}
			else{
				HX_STACK_LINE(287)
				::zpp_nape::geom::ZPP_MarchingSquares_obj::map->resize(xn,yn,null());
			}
		}
		HX_STACK_LINE(291)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::isos == null()))){
			HX_STACK_LINE(291)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos = ::zpp_nape::util::Array2_Float_obj::__new((xn + (int)1),(yn + (int)1));
		}
		else{
			HX_STACK_LINE(294)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::isos->resize((xn + (int)1),(yn + (int)1),(int)0);
		}
		HX_STACK_LINE(297)
		{
			HX_STACK_LINE(297)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (yn + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(297)
			while(((_g1 < _g))){
				HX_STACK_LINE(297)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &cell){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",298);
						{
							HX_STACK_LINE(298)
							if (((bool((cell != null())) && bool(cell->zpp_disp)))){
								HX_STACK_LINE(298)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(298)
							{
								HX_STACK_LINE(298)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(298)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(298)
									_this->_validate();
								}
							}
							HX_STACK_LINE(298)
							return cell->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(298)
				Float yc = (  (((y == (int)0))) ? Float(by0) : Float((  (((y <= yn))) ? Float((by0 + (_Function_3_1::Block(cell) * y))) : Float(by1) )) );		HX_STACK_VAR(yc,"yc");
				HX_STACK_LINE(299)
				{
					HX_STACK_LINE(299)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = (xn + (int)1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(299)
					while(((_g3 < _g2))){
						HX_STACK_LINE(299)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &cell){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",300);
								{
									HX_STACK_LINE(300)
									if (((bool((cell != null())) && bool(cell->zpp_disp)))){
										HX_STACK_LINE(300)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(300)
									{
										HX_STACK_LINE(300)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(300)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(300)
											_this->_validate();
										}
									}
									HX_STACK_LINE(300)
									return cell->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(300)
						Float xc = (  (((x == (int)0))) ? Float(bx0) : Float((  (((x <= xn))) ? Float((bx0 + (_Function_5_1::Block(cell) * x))) : Float(bx1) )) );		HX_STACK_VAR(xc,"xc");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							::zpp_nape::util::Array2_Float _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::isos;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(301)
							{
							}
							HX_STACK_LINE(301)
							_this->list[((y * _this->width) + x)] = iso(xc,yc).Cast< Float >();
						}
					}
				}
			}
		}
		HX_STACK_LINE(304)
		if (((::zpp_nape::geom::ZPP_MarchingSquares_obj::ints == null()))){
			HX_STACK_LINE(304)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints = ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert_obj::__new((xn + (int)1),(((int(yn) << int((int)1))) + (int)1));
		}
		else{
			HX_STACK_LINE(307)
			::zpp_nape::geom::ZPP_MarchingSquares_obj::ints->resize((xn + (int)1),(((int(yn) << int((int)1))) + (int)1),null());
		}
		HX_STACK_LINE(310)
		::zpp_nape::geom::ZPP_MarchSpan spans = null();		HX_STACK_VAR(spans,"spans");
		HX_STACK_LINE(311)
		if ((combine)){
			HX_STACK_LINE(313)
			if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
				HX_STACK_LINE(313)
				spans = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
			}
			else{
				HX_STACK_LINE(320)
				spans = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(321)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = spans->next;
				HX_STACK_LINE(322)
				spans->next = null();
			}
			HX_STACK_LINE(327)
			{
				HX_STACK_LINE(327)
				spans->out = false;
				HX_STACK_LINE(327)
				spans->rank = (int)0;
			}
		}
		HX_STACK_LINE(330)
		Float py = by0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(331)
			while(((_g < yn))){
				HX_STACK_LINE(331)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(332)
				Float y0 = py;		HX_STACK_VAR(y0,"y0");
				struct _Function_3_1{
					inline static Float Block( ::nape::geom::Vec2 &cell){
						HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",333);
						{
							HX_STACK_LINE(333)
							if (((bool((cell != null())) && bool(cell->zpp_disp)))){
								HX_STACK_LINE(333)
								hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
							}
							HX_STACK_LINE(333)
							{
								HX_STACK_LINE(333)
								::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(333)
								if (((_this->_validate_dyn() != null()))){
									HX_STACK_LINE(333)
									_this->_validate();
								}
							}
							HX_STACK_LINE(333)
							return cell->zpp_inner->y;
						}
						return null();
					}
				};
				HX_STACK_LINE(333)
				Float y1 = (  (((y == (yn - (int)1)))) ? Float(by1) : Float((by0 + (_Function_3_1::Block(cell) * ((y + (int)1))))) );		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(334)
				py = y1;
				HX_STACK_LINE(335)
				Float px = bx0;		HX_STACK_VAR(px,"px");
				HX_STACK_LINE(336)
				::zpp_nape::geom::ZPP_MarchPair pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(337)
				{
					HX_STACK_LINE(337)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(337)
					while(((_g1 < xn))){
						HX_STACK_LINE(337)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(338)
						Float x0 = px;		HX_STACK_VAR(x0,"x0");
						struct _Function_5_1{
							inline static Float Block( ::nape::geom::Vec2 &cell){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",339);
								{
									HX_STACK_LINE(339)
									if (((bool((cell != null())) && bool(cell->zpp_disp)))){
										HX_STACK_LINE(339)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(339)
									{
										HX_STACK_LINE(339)
										::zpp_nape::geom::ZPP_Vec2 _this = cell->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(339)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(339)
											_this->_validate();
										}
									}
									HX_STACK_LINE(339)
									return cell->zpp_inner->x;
								}
								return null();
							}
						};
						HX_STACK_LINE(339)
						Float x1 = (  (((x == (xn - (int)1)))) ? Float(bx1) : Float((bx0 + (_Function_5_1::Block(cell) * ((x + (int)1))))) );		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(340)
						px = x1;
						HX_STACK_LINE(341)
						bool fstx = (bool((x == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fstx,"fstx");
						HX_STACK_LINE(342)
						bool fsty = (bool((y == (int)0)) || bool(!(combine)));		HX_STACK_VAR(fsty,"fsty");
						HX_STACK_LINE(343)
						bool sndx = (bool((x == (xn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndx,"sndx");
						HX_STACK_LINE(344)
						bool sndy = (bool((y == (yn - (int)1))) || bool(!(combine)));		HX_STACK_VAR(sndy,"sndy");
						HX_STACK_LINE(345)
						::zpp_nape::geom::ZPP_MarchPair pp = ::zpp_nape::geom::ZPP_MarchingSquares_obj::me->marchSquare(iso,::zpp_nape::geom::ZPP_MarchingSquares_obj::isos,::zpp_nape::geom::ZPP_MarchingSquares_obj::ints,x0,y0,x1,y1,x,y,fstx,fsty,sndx,sndy,quality);		HX_STACK_VAR(pp,"pp");
						HX_STACK_LINE(346)
						if (((pp == null()))){
							HX_STACK_LINE(347)
							pre = null();
							HX_STACK_LINE(348)
							continue;
						}
						HX_STACK_LINE(350)
						if ((combine)){
							HX_STACK_LINE(351)
							::zpp_nape::geom::ZPP_GeomVert pd = (  (((bool((pp->p2 != null())) && bool((pp->okey2 != (int)14))))) ? ::zpp_nape::geom::ZPP_GeomVert(pp->p2) : ::zpp_nape::geom::ZPP_GeomVert(pp->p1) );		HX_STACK_VAR(pd,"pd");
							HX_STACK_LINE(352)
							pp->pd = (  (((((int(((  (((pd == pp->p2))) ? int(pp->okey2) : int(pp->okey1) ))) & int((int)128))) == (int)0))) ? ::zpp_nape::geom::ZPP_GeomVert(pd->prev) : ::zpp_nape::geom::ZPP_GeomVert(pd->prev->prev) );
							HX_STACK_LINE(353)
							{
								HX_STACK_LINE(353)
								::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(353)
								{
								}
								HX_STACK_LINE(353)
								_this->list[((y * _this->width) + x)] = pp;
							}
							struct _Function_6_1{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",354);
									{
										HX_STACK_LINE(354)
										int key = pp->key1;		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(354)
										int flag = (int((int(key) & int((int)1))) | int((int(((int(key) & int((int)192)))) >> int((int)5))));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",354);
												{
													HX_STACK_LINE(354)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(354)
														(cnt)++;
													}
													HX_STACK_LINE(354)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(354)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(354)
							if (((bool((pre != null())) && bool(_Function_6_1::Block(pp))))){
								HX_STACK_LINE(355)
								{
								}
								HX_STACK_LINE(363)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combLR(pre,pp);
								HX_STACK_LINE(364)
								pp->span1 = pre->spanr;
							}
							else{
								HX_STACK_LINE(367)
								{
								}
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(376)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(376)
										pp->span1 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
									}
									else{
										HX_STACK_LINE(383)
										pp->span1 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(384)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span1->next;
										HX_STACK_LINE(385)
										pp->span1->next = null();
									}
									HX_STACK_LINE(390)
									{
										HX_STACK_LINE(390)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span1;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(390)
										_this->out = false;
										HX_STACK_LINE(390)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(392)
								pp->span1->next = spans;
								HX_STACK_LINE(393)
								spans = pp->span1;
							}
							HX_STACK_LINE(395)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(396)
								{
									HX_STACK_LINE(397)
									if (((::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool == null()))){
										HX_STACK_LINE(397)
										pp->span2 = ::zpp_nape::geom::ZPP_MarchSpan_obj::__new();
									}
									else{
										HX_STACK_LINE(404)
										pp->span2 = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
										HX_STACK_LINE(405)
										::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = pp->span2->next;
										HX_STACK_LINE(406)
										pp->span2->next = null();
									}
									HX_STACK_LINE(411)
									{
										HX_STACK_LINE(411)
										::zpp_nape::geom::ZPP_MarchSpan _this = pp->span2;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(411)
										_this->out = false;
										HX_STACK_LINE(411)
										_this->rank = (int)0;
									}
								}
								HX_STACK_LINE(413)
								pp->span2->next = spans;
								HX_STACK_LINE(414)
								spans = pp->span2;
								HX_STACK_LINE(415)
								pp->spanr = pp->span2;
							}
							else{
								HX_STACK_LINE(417)
								pp->spanr = pp->span1;
							}
							struct _Function_6_2{
								inline static bool Block( ::zpp_nape::geom::ZPP_MarchPair &pp){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",418);
									{
										HX_STACK_LINE(418)
										int flag = (int(((int(pp->keyr) & int((int)28)))) >> int((int)2));		HX_STACK_VAR(flag,"flag");
										struct _Function_7_1{
											inline static bool Block( int &flag){
												HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",418);
												{
													HX_STACK_LINE(418)
													int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)1))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)2))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													if (((((int(flag) & int((int)4))) != (int)0))){
														HX_STACK_LINE(418)
														(cnt)++;
													}
													HX_STACK_LINE(418)
													return (cnt >= (int)2);
												}
												return null();
											}
										};
										HX_STACK_LINE(418)
										return _Function_7_1::Block(flag);
									}
									return null();
								}
							};
							HX_STACK_LINE(418)
							if ((_Function_6_2::Block(pp))){
								HX_STACK_LINE(418)
								pre = pp;
							}
							else{
								HX_STACK_LINE(419)
								pre = null();
							}
						}
						else{
							HX_STACK_LINE(422)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p1);
							HX_STACK_LINE(423)
							if (((pp->p2 != null()))){
								HX_STACK_LINE(423)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,pp->p2);
							}
							HX_STACK_LINE(424)
							{
								HX_STACK_LINE(425)
								::zpp_nape::geom::ZPP_MarchPair o = pp;		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(426)
								{
								}
								HX_STACK_LINE(434)
								{
									HX_STACK_LINE(434)
									o->p1 = o->p2 = o->pr = o->pd = null();
									HX_STACK_LINE(434)
									o->span1 = o->span2 = o->spanr = null();
								}
								HX_STACK_LINE(435)
								o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
								HX_STACK_LINE(436)
								::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(444)
		if ((!(combine))){
			HX_STACK_LINE(444)
			return null();
		}
		HX_STACK_LINE(447)
		{
			HX_STACK_LINE(447)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(447)
			while(((_g < yn))){
				HX_STACK_LINE(447)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(448)
				::zpp_nape::geom::ZPP_MarchSpan pre = null();		HX_STACK_VAR(pre,"pre");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(449)
					while(((_g1 < xn))){
						HX_STACK_LINE(449)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",450);
								{
									HX_STACK_LINE(450)
									::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(450)
									{
									}
									HX_STACK_LINE(450)
									return _this->list->__get(((y * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(450)
						::zpp_nape::geom::ZPP_MarchPair b = _Function_5_1::Block(y,x);		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(451)
						if (((b == null()))){
							HX_STACK_LINE(452)
							pre = null();
							HX_STACK_LINE(453)
							continue;
						}
						HX_STACK_LINE(455)
						int bkey = (  (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))) ? int(b->okey2) : int(b->okey1) );		HX_STACK_VAR(bkey,"bkey");
						struct _Function_5_2{
							inline static bool Block( int &bkey){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",456);
								{
									HX_STACK_LINE(456)
									int flag = (int(bkey) & int((int)7));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",456);
											{
												HX_STACK_LINE(456)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(456)
													(cnt)++;
												}
												HX_STACK_LINE(456)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(456)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(456)
						if ((!(_Function_5_2::Block(bkey)))){
							HX_STACK_LINE(457)
							pre = null();
							HX_STACK_LINE(458)
							continue;
						}
						struct _Function_5_3{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",460);
								{
									HX_STACK_LINE(460)
									::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(460)
									{
									}
									HX_STACK_LINE(460)
									return _this->list->__get(((((y - (int)1)) * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(460)
						::zpp_nape::geom::ZPP_MarchPair a = _Function_5_3::Block(y,x);		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(461)
						if (((a == null()))){
							HX_STACK_LINE(462)
							pre = null();
							HX_STACK_LINE(463)
							continue;
						}
						HX_STACK_LINE(465)
						int akey = (  (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))) ? int(a->okey2) : int(a->okey1) );		HX_STACK_VAR(akey,"akey");
						struct _Function_5_4{
							inline static bool Block( int &akey){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",466);
								{
									HX_STACK_LINE(466)
									int flag = (int(((int(akey) & int((int)112)))) >> int((int)4));		HX_STACK_VAR(flag,"flag");
									struct _Function_6_1{
										inline static bool Block( int &flag){
											HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",466);
											{
												HX_STACK_LINE(466)
												int cnt = (int)0;		HX_STACK_VAR(cnt,"cnt");
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)1))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)2))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												if (((((int(flag) & int((int)4))) != (int)0))){
													HX_STACK_LINE(466)
													(cnt)++;
												}
												HX_STACK_LINE(466)
												return (cnt >= (int)2);
											}
											return null();
										}
									};
									HX_STACK_LINE(466)
									return _Function_6_1::Block(flag);
								}
								return null();
							}
						};
						HX_STACK_LINE(466)
						if ((!(_Function_5_4::Block(akey)))){
							HX_STACK_LINE(467)
							pre = null();
							HX_STACK_LINE(468)
							continue;
						}
						HX_STACK_LINE(470)
						::zpp_nape::geom::ZPP_MarchSpan ad = (  (((bool((a->p2 != null())) && bool((a->okey2 == (int)56))))) ? ::zpp_nape::geom::ZPP_MarchSpan(a->span2) : ::zpp_nape::geom::ZPP_MarchSpan(a->span1) );		HX_STACK_VAR(ad,"ad");
						HX_STACK_LINE(471)
						::zpp_nape::geom::ZPP_MarchSpan bu = (  (((bool((b->p2 != null())) && bool((b->okey2 == (int)14))))) ? ::zpp_nape::geom::ZPP_MarchSpan(b->span2) : ::zpp_nape::geom::ZPP_MarchSpan(b->span1) );		HX_STACK_VAR(bu,"bu");
						struct _Function_5_5{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &ad){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",474);
								{
									HX_STACK_LINE(475)
									::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(476)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(477)
									while(((obj != obj->parent))){
										HX_STACK_LINE(478)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(479)
										obj->parent = stack;
										HX_STACK_LINE(480)
										stack = obj;
										HX_STACK_LINE(481)
										obj = nxt;
									}
									HX_STACK_LINE(483)
									while(((stack != null()))){
										HX_STACK_LINE(484)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(485)
										stack->parent = obj;
										HX_STACK_LINE(486)
										stack = nxt;
									}
									HX_STACK_LINE(488)
									return obj;
								}
								return null();
							}
						};
						struct _Function_5_6{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &bu){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",492);
								{
									HX_STACK_LINE(493)
									::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(494)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(495)
									while(((obj != obj->parent))){
										HX_STACK_LINE(496)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(497)
										obj->parent = stack;
										HX_STACK_LINE(498)
										stack = obj;
										HX_STACK_LINE(499)
										obj = nxt;
									}
									HX_STACK_LINE(501)
									while(((stack != null()))){
										HX_STACK_LINE(502)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(503)
										stack->parent = obj;
										HX_STACK_LINE(504)
										stack = nxt;
									}
									HX_STACK_LINE(506)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(472)
						if (((((  (((ad == ad->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(ad) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_5::Block(ad)) )) == ((  (((bu == bu->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_6::Block(bu)) ))))){
							HX_STACK_LINE(508)
							if (((pre != bu))){
								HX_STACK_LINE(509)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD_virtual(a,b);
							}
						}
						else{
							HX_STACK_LINE(514)
							{
								struct _Function_7_1{
									inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &ad){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",517);
										{
											HX_STACK_LINE(518)
											::zpp_nape::geom::ZPP_MarchSpan obj = ad;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(519)
											::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
											HX_STACK_LINE(520)
											while(((obj != obj->parent))){
												HX_STACK_LINE(521)
												::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(522)
												obj->parent = stack;
												HX_STACK_LINE(523)
												stack = obj;
												HX_STACK_LINE(524)
												obj = nxt;
											}
											HX_STACK_LINE(526)
											while(((stack != null()))){
												HX_STACK_LINE(527)
												::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(528)
												stack->parent = obj;
												HX_STACK_LINE(529)
												stack = nxt;
											}
											HX_STACK_LINE(531)
											return obj;
										}
										return null();
									}
								};
								HX_STACK_LINE(515)
								::zpp_nape::geom::ZPP_MarchSpan xr = (  (((ad == ad->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(ad) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_7_1::Block(ad)) );		HX_STACK_VAR(xr,"xr");
								struct _Function_7_2{
									inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchSpan &bu){
										HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",536);
										{
											HX_STACK_LINE(537)
											::zpp_nape::geom::ZPP_MarchSpan obj = bu;		HX_STACK_VAR(obj,"obj");
											HX_STACK_LINE(538)
											::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
											HX_STACK_LINE(539)
											while(((obj != obj->parent))){
												HX_STACK_LINE(540)
												::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(541)
												obj->parent = stack;
												HX_STACK_LINE(542)
												stack = obj;
												HX_STACK_LINE(543)
												obj = nxt;
											}
											HX_STACK_LINE(545)
											while(((stack != null()))){
												HX_STACK_LINE(546)
												::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
												HX_STACK_LINE(547)
												stack->parent = obj;
												HX_STACK_LINE(548)
												stack = nxt;
											}
											HX_STACK_LINE(550)
											return obj;
										}
										return null();
									}
								};
								HX_STACK_LINE(534)
								::zpp_nape::geom::ZPP_MarchSpan yr = (  (((bu == bu->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_7_2::Block(bu)) );		HX_STACK_VAR(yr,"yr");
								HX_STACK_LINE(553)
								if (((xr != yr))){
									HX_STACK_LINE(553)
									if (((xr->rank < yr->rank))){
										HX_STACK_LINE(554)
										xr->parent = yr;
									}
									else{
										HX_STACK_LINE(555)
										if (((xr->rank > yr->rank))){
											HX_STACK_LINE(555)
											yr->parent = xr;
										}
										else{
											HX_STACK_LINE(557)
											yr->parent = xr;
											HX_STACK_LINE(558)
											(xr->rank)++;
										}
									}
								}
							}
							HX_STACK_LINE(562)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->combUD(a,b);
						}
						HX_STACK_LINE(564)
						int key = (  (((bu == b->span2))) ? int(b->okey2) : int(b->okey1) );		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(565)
						pre = (  (((((int(key) & int((int)4))) != (int)0))) ? ::zpp_nape::geom::ZPP_MarchSpan(bu) : ::zpp_nape::geom::ZPP_MarchSpan(null()) );
					}
				}
			}
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(568)
			while(((_g < yn))){
				HX_STACK_LINE(568)
				int y = (_g)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(569)
				{
					HX_STACK_LINE(569)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(569)
					while(((_g1 < xn))){
						HX_STACK_LINE(569)
						int x = (_g1)++;		HX_STACK_VAR(x,"x");
						struct _Function_5_1{
							inline static ::zpp_nape::geom::ZPP_MarchPair Block( int &y,int &x){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",570);
								{
									HX_STACK_LINE(570)
									::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(570)
									{
									}
									HX_STACK_LINE(570)
									return _this->list->__get(((y * _this->width) + x));
								}
								return null();
							}
						};
						HX_STACK_LINE(570)
						::zpp_nape::geom::ZPP_MarchPair p = _Function_5_1::Block(y,x);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(571)
						if (((p == null()))){
							HX_STACK_LINE(571)
							continue;
						}
						struct _Function_5_2{
							inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchPair &p){
								HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",574);
								{
									HX_STACK_LINE(575)
									::zpp_nape::geom::ZPP_MarchSpan obj = p->span1;		HX_STACK_VAR(obj,"obj");
									HX_STACK_LINE(576)
									::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
									HX_STACK_LINE(577)
									while(((obj != obj->parent))){
										HX_STACK_LINE(578)
										::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(579)
										obj->parent = stack;
										HX_STACK_LINE(580)
										stack = obj;
										HX_STACK_LINE(581)
										obj = nxt;
									}
									HX_STACK_LINE(583)
									while(((stack != null()))){
										HX_STACK_LINE(584)
										::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
										HX_STACK_LINE(585)
										stack->parent = obj;
										HX_STACK_LINE(586)
										stack = nxt;
									}
									HX_STACK_LINE(588)
									return obj;
								}
								return null();
							}
						};
						HX_STACK_LINE(572)
						::zpp_nape::geom::ZPP_MarchSpan root = (  (((p->span1 == p->span1->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(p->span1) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_5_2::Block(p)) );		HX_STACK_VAR(root,"root");
						HX_STACK_LINE(591)
						if ((!(root->out))){
							HX_STACK_LINE(592)
							root->out = true;
							HX_STACK_LINE(593)
							::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p1);
						}
						HX_STACK_LINE(595)
						if (((p->p2 != null()))){
							struct _Function_6_1{
								inline static ::zpp_nape::geom::ZPP_MarchSpan Block( ::zpp_nape::geom::ZPP_MarchPair &p){
									HX_STACK_PUSH("*::closure","zpp_nape/geom/MarchingSquares.hx",598);
									{
										HX_STACK_LINE(599)
										::zpp_nape::geom::ZPP_MarchSpan obj = p->span2;		HX_STACK_VAR(obj,"obj");
										HX_STACK_LINE(600)
										::zpp_nape::geom::ZPP_MarchSpan stack = null();		HX_STACK_VAR(stack,"stack");
										HX_STACK_LINE(601)
										while(((obj != obj->parent))){
											HX_STACK_LINE(602)
											::zpp_nape::geom::ZPP_MarchSpan nxt = obj->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(603)
											obj->parent = stack;
											HX_STACK_LINE(604)
											stack = obj;
											HX_STACK_LINE(605)
											obj = nxt;
										}
										HX_STACK_LINE(607)
										while(((stack != null()))){
											HX_STACK_LINE(608)
											::zpp_nape::geom::ZPP_MarchSpan nxt = stack->parent;		HX_STACK_VAR(nxt,"nxt");
											HX_STACK_LINE(609)
											stack->parent = obj;
											HX_STACK_LINE(610)
											stack = nxt;
										}
										HX_STACK_LINE(612)
										return obj;
									}
									return null();
								}
							};
							HX_STACK_LINE(596)
							root = (  (((p->span2 == p->span2->parent))) ? ::zpp_nape::geom::ZPP_MarchSpan(p->span2) : ::zpp_nape::geom::ZPP_MarchSpan(_Function_6_1::Block(p)) );
							HX_STACK_LINE(615)
							if ((!(root->out))){
								HX_STACK_LINE(616)
								root->out = true;
								HX_STACK_LINE(617)
								::zpp_nape::geom::ZPP_MarchingSquares_obj::me->output(ret,p->p2);
							}
						}
						HX_STACK_LINE(620)
						{
							HX_STACK_LINE(621)
							::zpp_nape::geom::ZPP_MarchPair o = p;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(622)
							{
							}
							HX_STACK_LINE(630)
							{
								HX_STACK_LINE(630)
								o->p1 = o->p2 = o->pr = o->pd = null();
								HX_STACK_LINE(630)
								o->span1 = o->span2 = o->spanr = null();
							}
							HX_STACK_LINE(631)
							o->next = ::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool;
							HX_STACK_LINE(632)
							::zpp_nape::geom::ZPP_MarchPair_obj::zpp_pool = o;
						}
						HX_STACK_LINE(637)
						{
							HX_STACK_LINE(637)
							::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair _this = ::zpp_nape::geom::ZPP_MarchingSquares_obj::map;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(637)
							{
							}
							HX_STACK_LINE(637)
							_this->list[((y * _this->width) + x)] = null();
						}
					}
				}
			}
		}
		HX_STACK_LINE(640)
		while(((spans != null()))){
			HX_STACK_LINE(641)
			::zpp_nape::geom::ZPP_MarchSpan t = spans;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(642)
			spans = t->next;
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(644)
				::zpp_nape::geom::ZPP_MarchSpan o = t;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(645)
				{
				}
				HX_STACK_LINE(653)
				o->parent = o;
				HX_STACK_LINE(654)
				o->next = ::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool;
				HX_STACK_LINE(655)
				::zpp_nape::geom::ZPP_MarchSpan_obj::zpp_pool = o;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ZPP_MarchingSquares_obj,run,(void))

Array< int > ZPP_MarchingSquares_obj::look_march;

Float ZPP_MarchingSquares_obj::ISO( Dynamic iso,Float x,Float y){
	HX_STACK_PUSH("ZPP_MarchingSquares::ISO","zpp_nape/geom/MarchingSquares.hx",1925);
	HX_STACK_ARG(iso,"iso");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(1925)
	return iso(x,y).Cast< Float >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ZPP_MarchingSquares_obj,ISO,return )


ZPP_MarchingSquares_obj::ZPP_MarchingSquares_obj()
{
}

void ZPP_MarchingSquares_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ZPP_MarchingSquares);
	HX_MARK_END_CLASS();
}

void ZPP_MarchingSquares_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ZPP_MarchingSquares_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { return me; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"ISO") ) { return ISO_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { return isos; }
		if (HX_FIELD_EQ(inName,"ints") ) { return ints; }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"comb") ) { return comb_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ylerp") ) { return ylerp_dyn(); }
		if (HX_FIELD_EQ(inName,"xlerp") ) { return xlerp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combUp") ) { return combUp_dyn(); }
		if (HX_FIELD_EQ(inName,"combUD") ) { return combUD_dyn(); }
		if (HX_FIELD_EQ(inName,"combLR") ) { return combLR_dyn(); }
		if (HX_FIELD_EQ(inName,"linkup") ) { return linkup_dyn(); }
		if (HX_FIELD_EQ(inName,"output") ) { return output_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"combDown") ) { return combDown_dyn(); }
		if (HX_FIELD_EQ(inName,"combLeft") ) { return combLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"linkdown") ) { return linkdown_dyn(); }
		if (HX_FIELD_EQ(inName,"linkleft") ) { return linkleft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"combRight") ) { return combRight_dyn(); }
		if (HX_FIELD_EQ(inName,"linkright") ) { return linkright_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { return look_march; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marchSquare") ) { return marchSquare_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"combUD_virtual") ) { return combUD_virtual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZPP_MarchingSquares_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { me=inValue.Cast< ::zpp_nape::geom::ZPP_MarchingSquares >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_MarchPair >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isos") ) { isos=inValue.Cast< ::zpp_nape::util::Array2_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ints") ) { ints=inValue.Cast< ::zpp_nape::util::Array2_zpp_nape_geom_ZPP_GeomVert >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"look_march") ) { look_march=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ZPP_MarchingSquares_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("me"),
	HX_CSTRING("isos"),
	HX_CSTRING("ints"),
	HX_CSTRING("map"),
	HX_CSTRING("run"),
	HX_CSTRING("look_march"),
	HX_CSTRING("ISO"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ylerp"),
	HX_CSTRING("xlerp"),
	HX_CSTRING("lerp"),
	HX_CSTRING("marchSquare"),
	HX_CSTRING("comb"),
	HX_CSTRING("combDown"),
	HX_CSTRING("combUp"),
	HX_CSTRING("combRight"),
	HX_CSTRING("combLeft"),
	HX_CSTRING("combUD_virtual"),
	HX_CSTRING("combUD"),
	HX_CSTRING("combLR"),
	HX_CSTRING("linkup"),
	HX_CSTRING("linkdown"),
	HX_CSTRING("linkleft"),
	HX_CSTRING("linkright"),
	HX_CSTRING("output"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_MARK_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::me,"me");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::isos,"isos");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::ints,"ints");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::map,"map");
	HX_VISIT_MEMBER_NAME(ZPP_MarchingSquares_obj::look_march,"look_march");
};

Class ZPP_MarchingSquares_obj::__mClass;

void ZPP_MarchingSquares_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.geom.ZPP_MarchingSquares"), hx::TCanCast< ZPP_MarchingSquares_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ZPP_MarchingSquares_obj::__boot()
{
	me= ::zpp_nape::geom::ZPP_MarchingSquares_obj::__new();
	look_march= Array_obj< int >::__new().Add((int)-1).Add((int)224).Add((int)56).Add((int)216).Add((int)14).Add((int)-1).Add((int)54).Add((int)214).Add((int)131).Add((int)99).Add((int)-1).Add((int)91).Add((int)141).Add((int)109).Add((int)181).Add((int)85);
}

} // end namespace zpp_nape
} // end namespace geom
