#ifndef INCLUDED_com_appframework_events_PageEvent
#define INCLUDED_com_appframework_events_PageEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS3(com,appframework,events,PageEvent)
HX_DECLARE_CLASS2(native,events,Event)
namespace com{
namespace appframework{
namespace events{


class PageEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef PageEvent_obj OBJ_;
		PageEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		static hx::ObjectPtr< PageEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PageEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PageEvent"); }

		virtual ::native::events::Event clone( );

		static ::String TRANSITION_OUT; /* REM */ 
		static ::String TRANSITION_IN; /* REM */ 
		static ::String TRANSITION_OUT_COMPLETE; /* REM */ 
		static ::String TRANSITION_IN_COMPLETE; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace events

#endif /* INCLUDED_com_appframework_events_PageEvent */ 
