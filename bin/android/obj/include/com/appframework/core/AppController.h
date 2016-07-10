#ifndef INCLUDED_com_appframework_core_AppController
#define INCLUDED_com_appframework_core_AppController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS3(com,appframework,core,AppController)
HX_DECLARE_CLASS3(com,appframework,core,AppView)
HX_DECLARE_CLASS3(com,appframework,core,BranchLoader)
HX_DECLARE_CLASS3(com,appframework,core,TransitionController)
HX_DECLARE_CLASS3(com,appframework,events,AppEvent)
HX_DECLARE_CLASS3(com,appframework,events,BranchLoaderEvent)
HX_DECLARE_CLASS3(com,appframework,events,PageEvent)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class AppController_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef AppController_obj OBJ_;
		AppController_obj();
		Void __construct(::com::appframework::core::AppView av);

	public:
		static hx::ObjectPtr< AppController_obj > __new(::com::appframework::core::AppView av);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppController"); }

		virtual Void redirect( );
		Dynamic redirect_dyn();

		virtual bool checkQueuedBranch( );
		Dynamic checkQueuedBranch_dyn();

		virtual Void onPreloadComplete( ::native::events::Event event);
		Dynamic onPreloadComplete_dyn();

		virtual Void onComplete( ::native::events::Event event);
		Dynamic onComplete_dyn();

		virtual Void onPreload( ::native::events::Event event);
		Dynamic onPreload_dyn();

		virtual Void onTransitionIn( ::native::events::Event event);
		Dynamic onTransitionIn_dyn();

		virtual Void onTransitionOut( ::native::events::Event event);
		Dynamic onTransitionOut_dyn();

		virtual Void onTransitionInComplete( ::com::appframework::events::PageEvent event);
		Dynamic onTransitionInComplete_dyn();

		virtual Void onTransitionOutComplete( ::com::appframework::events::PageEvent event);
		Dynamic onTransitionOutComplete_dyn();

		virtual Void onLoadPage( ::com::appframework::events::BranchLoaderEvent event);
		Dynamic onLoadPage_dyn();

		virtual Void onGoto( ::com::appframework::events::AppEvent event);
		Dynamic onGoto_dyn();

		::String queuedFlow; /* REM */ 
		::String queuedBranch; /* REM */ 
		::com::appframework::core::AppView appView; /* REM */ 
		::com::appframework::core::BranchLoader branchLoader; /* REM */ 
		::com::appframework::core::TransitionController transitionController; /* REM */ 
		static ::String currentBranch; /* REM */ 
		static bool isTransitioning; /* REM */ 
		static bool isLoading; /* REM */ 
		static ::String getCurrentBranch( );
		static Dynamic getCurrentBranch_dyn();

		static bool busy; /* REM */ 
		static bool get_busy( );
		static Dynamic get_busy_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppController */ 
