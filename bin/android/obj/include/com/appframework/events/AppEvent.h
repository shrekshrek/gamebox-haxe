#ifndef INCLUDED_com_appframework_events_AppEvent
#define INCLUDED_com_appframework_events_AppEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS3(com,appframework,events,AppEvent)
HX_DECLARE_CLASS2(native,events,Event)
namespace com{
namespace appframework{
namespace events{


class AppEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef AppEvent_obj OBJ_;
		AppEvent_obj();
		Void __construct(::String type,bool bubbles,bool cancelable,::String validBranch,::String fullBranch,::String src,::String flow);

	public:
		static hx::ObjectPtr< AppEvent_obj > __new(::String type,bool bubbles,bool cancelable,::String validBranch,::String fullBranch,::String src,::String flow);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppEvent"); }

		virtual ::native::events::Event clone( );

		::String flow; /* REM */ 
		::String src; /* REM */ 
		::String fullBranch; /* REM */ 
		::String validBranch; /* REM */ 
		static ::String GOTO; /* REM */ 
		static ::String BEFORE_GOTO; /* REM */ 
		static ::String AFTER_GOTO; /* REM */ 
		static ::String BEFORE_TRANSITION_OUT; /* REM */ 
		static ::String AFTER_TRANSITION_OUT; /* REM */ 
		static ::String BEFORE_PRELOAD; /* REM */ 
		static ::String AFTER_PRELOAD; /* REM */ 
		static ::String BEFORE_TRANSITION_IN; /* REM */ 
		static ::String AFTER_TRANSITION_IN; /* REM */ 
		static ::String AFTER_COMPLETE; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace events

#endif /* INCLUDED_com_appframework_events_AppEvent */ 
