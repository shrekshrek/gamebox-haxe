#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator
#define INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,geom,GeomVertexIterator)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVert)
HX_DECLARE_CLASS2(zpp_nape,geom,ZPP_GeomVertexIterator)
namespace zpp_nape{
namespace geom{


class ZPP_GeomVertexIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ZPP_GeomVertexIterator_obj OBJ_;
		ZPP_GeomVertexIterator_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ZPP_GeomVertexIterator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ZPP_GeomVertexIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ZPP_GeomVertexIterator"); }

		virtual Void alloc( );
		Dynamic alloc_dyn();

		virtual Void free( );
		Dynamic free_dyn();

		::zpp_nape::geom::ZPP_GeomVertexIterator next; /* REM */ 
		::nape::geom::GeomVertexIterator outer; /* REM */ 
		bool forward; /* REM */ 
		bool first; /* REM */ 
		::zpp_nape::geom::ZPP_GeomVert start; /* REM */ 
		::zpp_nape::geom::ZPP_GeomVert ptr; /* REM */ 
		static ::zpp_nape::geom::ZPP_GeomVertexIterator zpp_pool; /* REM */ 
		static bool internal; /* REM */ 
		static ::nape::geom::GeomVertexIterator get( ::zpp_nape::geom::ZPP_GeomVert poly,bool forward);
		static Dynamic get_dyn();

};

} // end namespace zpp_nape
} // end namespace geom

#endif /* INCLUDED_zpp_nape_geom_ZPP_GeomVertexIterator */ 
