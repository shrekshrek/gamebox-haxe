#ifndef INCLUDED_com_appframework_flow_ReverseFlow
#define INCLUDED_com_appframework_flow_ReverseFlow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,flow,ReverseFlow)
namespace com{
namespace appframework{
namespace flow{


class ReverseFlow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReverseFlow_obj OBJ_;
		ReverseFlow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ReverseFlow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ReverseFlow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ReverseFlow"); }

		static Void start( );
		static Dynamic start_dyn();

		static Void afterPreloadDone( );
		static Dynamic afterPreloadDone_dyn();

		static Void afterTransitionInDone( );
		static Dynamic afterTransitionInDone_dyn();

		static Void afterTransitionOutDone( );
		static Dynamic afterTransitionOutDone_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace flow

#endif /* INCLUDED_com_appframework_flow_ReverseFlow */ 
