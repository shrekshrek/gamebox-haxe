#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_native_Loader
#include <native/Loader.h>
#endif
#ifndef INCLUDED_native_errors_ArgumentError
#include <native/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_native_errors_Error
#include <native/errors/Error.h>
#endif
#ifndef INCLUDED_native_events_AccelerometerEvent
#include <native/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_sensors_Accelerometer
#include <native/sensors/Accelerometer.h>
#endif
namespace native{
namespace sensors{

Void Accelerometer_obj::__construct()
{
HX_STACK_PUSH("Accelerometer::new","native/sensors/Accelerometer.hx",23);
{
	HX_STACK_LINE(25)
	super::__construct(null());
	HX_STACK_LINE(27)
	this->setRequestedUpdateInterval(::native::sensors::Accelerometer_obj::defaultInterval);
}
;
	return null();
}

Accelerometer_obj::~Accelerometer_obj() { }

Dynamic Accelerometer_obj::__CreateEmpty() { return  new Accelerometer_obj; }
hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new()
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Void Accelerometer_obj::update( ){
{
		HX_STACK_PUSH("Accelerometer::update","native/sensors/Accelerometer.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		::native::events::AccelerometerEvent event = ::native::events::AccelerometerEvent_obj::__new(::native::events::AccelerometerEvent_obj::UPDATE,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(72)
		Dynamic data = ::native::sensors::Accelerometer_obj::nme_input_get_acceleration();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(74)
		event->timestamp = ::haxe::Timer_obj::stamp();
		HX_STACK_LINE(75)
		event->accelerationX = data->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(76)
		event->accelerationY = data->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(77)
		event->accelerationZ = data->__Field(HX_CSTRING("z"),true);
		HX_STACK_LINE(79)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,update,(void))

Void Accelerometer_obj::setRequestedUpdateInterval( Float interval){
{
		HX_STACK_PUSH("Accelerometer::setRequestedUpdateInterval","native/sensors/Accelerometer.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_ARG(interval,"interval");
		HX_STACK_LINE(42)
		if (((interval < (int)0))){
			HX_STACK_LINE(42)
			hx::Throw (::native::errors::ArgumentError_obj::__new(null(),null()));
		}
		else{
			HX_STACK_LINE(46)
			if (((interval == (int)0))){
				HX_STACK_LINE(46)
				interval = ::native::sensors::Accelerometer_obj::defaultInterval;
			}
		}
		HX_STACK_LINE(52)
		if (((this->timer != null()))){
			HX_STACK_LINE(52)
			this->timer->stop();
		}
		HX_STACK_LINE(58)
		if ((::native::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(60)
			this->timer = ::haxe::Timer_obj::__new(interval);
			HX_STACK_LINE(61)
			this->timer->run = this->update_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

Void Accelerometer_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_PUSH("Accelerometer::addEventListener","native/sensors/Accelerometer.hx",32);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(listener,"listener");
	HX_STACK_ARG(useCapture,"useCapture");
	HX_STACK_ARG(priority,"priority");
	HX_STACK_ARG(useWeakReference,"useWeakReference");
{
		HX_STACK_LINE(34)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(35)
		this->update();
	}
return null();
}


bool Accelerometer_obj::isSupported;

int Accelerometer_obj::defaultInterval;

bool Accelerometer_obj::get_isSupported( ){
	HX_STACK_PUSH("Accelerometer::get_isSupported","native/sensors/Accelerometer.hx",91);
	HX_STACK_LINE(91)
	return (::native::sensors::Accelerometer_obj::nme_input_get_acceleration() != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )

Dynamic Accelerometer_obj::nme_input_get_acceleration;


Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(muted,"muted");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Accelerometer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { return inCallProp ? get_isSupported() : isSupported; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { return defaultInterval; }
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { return nme_input_get_acceleration; }
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return setRequestedUpdateInterval_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { defaultInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_input_get_acceleration") ) { nme_input_get_acceleration=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("muted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isSupported"),
	HX_CSTRING("defaultInterval"),
	HX_CSTRING("get_isSupported"),
	HX_CSTRING("nme_input_get_acceleration"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("setRequestedUpdateInterval"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("timer"),
	HX_CSTRING("muted"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::defaultInterval,"defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::nme_input_get_acceleration,"nme_input_get_acceleration");
};

Class Accelerometer_obj::__mClass;

void Accelerometer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.sensors.Accelerometer"), hx::TCanCast< Accelerometer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Accelerometer_obj::__boot()
{
	defaultInterval= (int)34;
	nme_input_get_acceleration= ::native::Loader_obj::load(HX_CSTRING("nme_input_get_acceleration"),(int)0);
}

} // end namespace native
} // end namespace sensors
