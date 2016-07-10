#ifndef INCLUDED_native_sensors_Accelerometer
#define INCLUDED_native_sensors_Accelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
HX_DECLARE_CLASS2(native,sensors,Accelerometer)
namespace native{
namespace sensors{


class Accelerometer_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef Accelerometer_obj OBJ_;
		Accelerometer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Accelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Accelerometer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Accelerometer"); }

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void setRequestedUpdateInterval( Float interval);
		Dynamic setRequestedUpdateInterval_dyn();

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		::haxe::Timer timer; /* REM */ 
		bool muted; /* REM */ 
		static bool isSupported; /* REM */ 
		static int defaultInterval; /* REM */ 
		static bool get_isSupported( );
		static Dynamic get_isSupported_dyn();

		static Dynamic nme_input_get_acceleration; /* REM */ 
		static Dynamic &nme_input_get_acceleration_dyn() { return nme_input_get_acceleration;}
};

} // end namespace native
} // end namespace sensors

#endif /* INCLUDED_native_sensors_Accelerometer */ 
