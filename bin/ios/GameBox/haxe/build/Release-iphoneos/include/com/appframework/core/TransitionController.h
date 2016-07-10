#ifndef INCLUDED_com_appframework_core_TransitionController
#define INCLUDED_com_appframework_core_TransitionController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,TransitionController)
HX_DECLARE_CLASS3(com,appframework,events,PageEvent)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class TransitionController_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef TransitionController_obj OBJ_;
		TransitionController_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TransitionController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TransitionController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TransitionController"); }

		virtual Void interrupt( );
		Dynamic interrupt_dyn();

		virtual Void pageIn( );
		Dynamic pageIn_dyn();

		virtual Void pageOut( );
		Dynamic pageOut_dyn();

		virtual Void onTransitionInComplete( ::com::appframework::events::PageEvent event);
		Dynamic onTransitionInComplete_dyn();

		virtual Void onTransitionOutComplete( ::com::appframework::events::PageEvent event);
		Dynamic onTransitionOutComplete_dyn();

		virtual Void transitionIn( Array< ::com::appframework::assets::PageAsset > pages);
		Dynamic transitionIn_dyn();

		virtual Void transitionOut( Array< ::com::appframework::assets::PageAsset > pages);
		Dynamic transitionOut_dyn();

		int inIndex; /* REM */ 
		int outIndex; /* REM */ 
		Array< ::com::appframework::assets::PageAsset > inPages; /* REM */ 
		Array< ::com::appframework::assets::PageAsset > outPages; /* REM */ 
		int transitionState; /* REM */ 
		bool isInterrupted; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_TransitionController */ 
