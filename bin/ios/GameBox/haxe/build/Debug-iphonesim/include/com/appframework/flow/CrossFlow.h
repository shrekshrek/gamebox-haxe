#ifndef INCLUDED_com_appframework_flow_CrossFlow
#define INCLUDED_com_appframework_flow_CrossFlow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,flow,CrossFlow)
namespace com{
namespace appframework{
namespace flow{


class CrossFlow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CrossFlow_obj OBJ_;
		CrossFlow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CrossFlow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CrossFlow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CrossFlow"); }

		static bool isInDone; /* REM */ 
		static bool isOutDone; /* REM */ 
		static Void start( );
		static Dynamic start_dyn();

		static Void afterPreloadDone( );
		static Dynamic afterPreloadDone_dyn();

		static Void afterTransitionInDone( );
		static Dynamic afterTransitionInDone_dyn();

		static Void afterTransitionOutDone( );
		static Dynamic afterTransitionOutDone_dyn();

		static Void checkBothDone( );
		static Dynamic checkBothDone_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace flow

#endif /* INCLUDED_com_appframework_flow_CrossFlow */ 
