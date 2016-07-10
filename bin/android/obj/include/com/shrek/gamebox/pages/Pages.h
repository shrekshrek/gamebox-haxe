#ifndef INCLUDED_com_shrek_gamebox_pages_Pages
#define INCLUDED_com_shrek_gamebox_pages_Pages

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,shrek,gamebox,pages,Pages)
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{


class Pages_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Pages_obj OBJ_;
		Pages_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Pages_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Pages_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Pages"); }

		static ::String HOME; /* REM */ 
		static ::String GAME1; /* REM */ 
		static ::String GAME2; /* REM */ 
		static ::String CONFIG; /* REM */ 
		static ::String ABOUT; /* REM */ 
};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages

#endif /* INCLUDED_com_shrek_gamebox_pages_Pages */ 
