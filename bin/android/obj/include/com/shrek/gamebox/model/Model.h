#ifndef INCLUDED_com_shrek_gamebox_model_Model
#define INCLUDED_com_shrek_gamebox_model_Model

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,shrek,gamebox,model,Model)
namespace com{
namespace shrek{
namespace gamebox{
namespace model{


class Model_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Model_obj OBJ_;
		Model_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Model_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Model_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Model"); }

		Float stageScale; /* REM */ 
		int originHeight; /* REM */ 
		int originWidth; /* REM */ 
		static ::com::shrek::gamebox::model::Model _instance; /* REM */ 
		static ::com::shrek::gamebox::model::Model instance; /* REM */ 
		static ::com::shrek::gamebox::model::Model get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace model

#endif /* INCLUDED_com_shrek_gamebox_model_Model */ 
