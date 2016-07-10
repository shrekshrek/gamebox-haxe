#ifndef INCLUDED_com_appframework_flow_FlowManager
#define INCLUDED_com_appframework_flow_FlowManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,appframework,flow,FlowManager)
namespace com{
namespace appframework{
namespace flow{


class FlowManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlowManager_obj OBJ_;
		FlowManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FlowManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlowManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlowManager"); }

		static Dynamic flow; /* REM */ 
		static Void init( ::String type);
		static Dynamic init_dyn();

		static Void start( );
		static Dynamic start_dyn();

		static Void transitionOutComplete( );
		static Dynamic transitionOutComplete_dyn();

		static Void preloadComplete( );
		static Dynamic preloadComplete_dyn();

		static Void transitionInComplete( );
		static Dynamic transitionInComplete_dyn();

		static Void afterGoto( );
		static Dynamic afterGoto_dyn();

		static Void afterTransitionOutDone( );
		static Dynamic afterTransitionOutDone_dyn();

		static Void afterPreloadDone( );
		static Dynamic afterPreloadDone_dyn();

		static Void afterTransitionInDone( );
		static Dynamic afterTransitionInDone_dyn();

		static Void transitionOut( );
		static Dynamic transitionOut_dyn();

		static Void preload( );
		static Dynamic preload_dyn();

		static Void transitionIn( );
		static Dynamic transitionIn_dyn();

		static Void complete( );
		static Dynamic complete_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace flow

#endif /* INCLUDED_com_appframework_flow_FlowManager */ 
