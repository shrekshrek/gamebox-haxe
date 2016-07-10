#ifndef INCLUDED_native_events_AccelerometerEvent
#define INCLUDED_native_events_AccelerometerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS2(native,events,AccelerometerEvent)
HX_DECLARE_CLASS2(native,events,Event)
namespace native{
namespace events{


class AccelerometerEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef AccelerometerEvent_obj OBJ_;
		AccelerometerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);

	public:
		static hx::ObjectPtr< AccelerometerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AccelerometerEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AccelerometerEvent"); }

		virtual ::String toString( );

		virtual ::native::events::Event clone( );

		Float timestamp; /* REM */ 
		Float accelerationZ; /* REM */ 
		Float accelerationY; /* REM */ 
		Float accelerationX; /* REM */ 
		static ::String UPDATE; /* REM */ 
};

} // end namespace native
} // end namespace events

#endif /* INCLUDED_native_events_AccelerometerEvent */ 
