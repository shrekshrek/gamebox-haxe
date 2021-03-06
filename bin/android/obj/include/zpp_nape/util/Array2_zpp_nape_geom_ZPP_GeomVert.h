#ifndef INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_GeomVert
#define INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_GeomVert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,util,Array2_zpp_nape_geom_ZPP_GeomVert)
namespace zpp_nape{
namespace util{


class Array2_zpp_nape_geom_ZPP_GeomVert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Array2_zpp_nape_geom_ZPP_GeomVert_obj OBJ_;
		Array2_zpp_nape_geom_ZPP_GeomVert_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< Array2_zpp_nape_geom_ZPP_GeomVert_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Array2_zpp_nape_geom_ZPP_GeomVert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Array2_zpp_nape_geom_ZPP_GeomVert"); }

		virtual ::zpp_nape::geom::ZPP_GeomVert set( int x,int y,::zpp_nape::geom::ZPP_GeomVert obj);
		Dynamic set_dyn();

		virtual ::zpp_nape::geom::ZPP_GeomVert get( int x,int y);
		Dynamic get_dyn();

		virtual Void resize( int width,int height,::zpp_nape::geom::ZPP_GeomVert def);
		Dynamic resize_dyn();

		int width; /* REM */ 
		Array< ::zpp_nape::geom::ZPP_GeomVert > list; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_GeomVert */ 
