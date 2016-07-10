#ifndef INCLUDED_zpp_nape_util_Array2
#define INCLUDED_zpp_nape_util_Array2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(zpp_nape,util,Array2)
namespace zpp_nape{
namespace util{


class Array2_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Array2_obj OBJ_;
		Array2_obj();
		Void __construct(int width,int height);

	public:
		static hx::ObjectPtr< Array2_obj > __new(int width,int height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Array2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Array2"); }

		virtual Dynamic set( int x,int y,Dynamic obj);
		Dynamic set_dyn();

		virtual Dynamic get( int x,int y);
		Dynamic get_dyn();

		virtual Void resize( int width,int height,Dynamic def);
		Dynamic resize_dyn();

		int width; /* REM */ 
		Dynamic list; /* REM */ 
};

} // end namespace zpp_nape
} // end namespace util

#endif /* INCLUDED_zpp_nape_util_Array2 */ 
