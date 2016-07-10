#ifndef INCLUDED_com_appframework_core_AppHQ
#define INCLUDED_com_appframework_core_AppHQ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS3(com,appframework,core,AppHQ)
HX_DECLARE_CLASS3(com,appframework,core,AppHQListener)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class AppHQ_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef AppHQ_obj OBJ_;
		AppHQ_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppHQ_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppHQ_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppHQ"); }

		virtual Void dispatchAppEvent( );
		Dynamic dispatchAppEvent_dyn();

		virtual Void removeOnlyOnceListeners( ::String eventName);
		Dynamic removeOnlyOnceListeners_dyn();

		virtual Void removeListenerByID( ::String eventName,::String id);
		Dynamic removeListenerByID_dyn();

		virtual ::com::appframework::core::AppHQListener generateListener( ::String eventName,Dynamic target);
		Dynamic generateListener_dyn();

		virtual Void onEvent( ::String eventName);
		Dynamic onEvent_dyn();

		virtual Void afterCompleteDone( );
		Dynamic afterCompleteDone_dyn();

		virtual Void afterComplete( );
		Dynamic afterComplete_dyn();

		virtual Void afterTransitionInDone( );
		Dynamic afterTransitionInDone_dyn();

		virtual Void afterTransitionIn( );
		Dynamic afterTransitionIn_dyn();

		virtual Void beforeTransitionInDone( );
		Dynamic beforeTransitionInDone_dyn();

		virtual Void beforeTransitionIn( );
		Dynamic beforeTransitionIn_dyn();

		virtual Void afterPreloadDone( );
		Dynamic afterPreloadDone_dyn();

		virtual Void afterPreload( );
		Dynamic afterPreload_dyn();

		virtual Void beforePreloadDone( );
		Dynamic beforePreloadDone_dyn();

		virtual Void beforePreload( );
		Dynamic beforePreload_dyn();

		virtual Void afterTransitionOutDone( );
		Dynamic afterTransitionOutDone_dyn();

		virtual Void afterTransitionOut( );
		Dynamic afterTransitionOut_dyn();

		virtual Void beforeTransitionOutDone( );
		Dynamic beforeTransitionOutDone_dyn();

		virtual Void beforeTransitionOut( );
		Dynamic beforeTransitionOut_dyn();

		virtual Void afterGotoDone( );
		Dynamic afterGotoDone_dyn();

		virtual Void afterGoto( );
		Dynamic afterGoto_dyn();

		virtual Void beforeGotoDone( );
		Dynamic beforeGotoDone_dyn();

		virtual Void beforeGoto( );
		Dynamic beforeGoto_dyn();

		virtual Void _goto( ::String branch,::String flow);
		Dynamic _goto_dyn();

		virtual Void removeListener( ::String eventName,Dynamic target);
		Dynamic removeListener_dyn();

		virtual Dynamic addListener( ::String eventName,Dynamic target,bool onlyOnce);
		Dynamic addListener_dyn();

		::Hash gotoEventObj; /* REM */ 
		int uniqueID; /* REM */ 
		::Hash listeners; /* REM */ 
		static ::String TRANSITION_OUT; /* REM */ 
		static ::String TRANSITION_IN; /* REM */ 
		static ::String PRELOAD; /* REM */ 
		static ::String COMPLETE; /* REM */ 
		static ::com::appframework::core::AppHQ _instance; /* REM */ 
		static Void birth( );
		static Dynamic birth_dyn();

		static ::com::appframework::core::AppHQ instance; /* REM */ 
		static ::com::appframework::core::AppHQ get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppHQ */ 
