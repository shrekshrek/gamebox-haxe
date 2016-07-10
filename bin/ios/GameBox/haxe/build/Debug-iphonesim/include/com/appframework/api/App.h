#ifndef INCLUDED_com_appframework_api_App
#define INCLUDED_com_appframework_api_App

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,api,App)
HX_DECLARE_CLASS3(com,appframework,core,AppImpl)
namespace com{
namespace appframework{
namespace api{


class App_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef App_obj OBJ_;
		App_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< App_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~App_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("App"); }

		static ::com::appframework::core::AppImpl impl; /* REM */ 
		static ::String TOP; /* REM */ 
		static ::String MIDDLE; /* REM */ 
		static ::String BOTTOM; /* REM */ 
		static ::String NORMAL; /* REM */ 
		static ::String REVERSE; /* REM */ 
		static ::String CROSS; /* REM */ 
		static ::com::appframework::core::AppImpl api; /* REM */ 
		static ::com::appframework::core::AppImpl get_api( );
		static Dynamic get_api_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace api

#endif /* INCLUDED_com_appframework_api_App */ 
