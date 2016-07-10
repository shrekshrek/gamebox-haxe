#include <hxcpp.h>

#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_IEasing
#include <com/eclecticdesignstudio/motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_Quart
#include <com/eclecticdesignstudio/motion/easing/Quart.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseIn
#include <com/eclecticdesignstudio/motion/easing/QuartEaseIn.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseInOut
#include <com/eclecticdesignstudio/motion/easing/QuartEaseInOut.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseOut
#include <com/eclecticdesignstudio/motion/easing/QuartEaseOut.h>
#endif
namespace com{
namespace eclecticdesignstudio{
namespace motion{
namespace easing{

Void Quart_obj::__construct()
{
	return null();
}

Quart_obj::~Quart_obj() { }

Dynamic Quart_obj::__CreateEmpty() { return  new Quart_obj; }
hx::ObjectPtr< Quart_obj > Quart_obj::__new()
{  hx::ObjectPtr< Quart_obj > result = new Quart_obj();
	result->__construct();
	return result;}

Dynamic Quart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quart_obj > result = new Quart_obj();
	result->__construct();
	return result;}

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::easeIn;

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::easeInOut;

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::easeOut;

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::getEaseIn( ){
	HX_STACK_PUSH("Quart::getEaseIn","com/eclecticdesignstudio/motion/easing/Quart.hx",19);
	HX_STACK_LINE(19)
	return ::com::eclecticdesignstudio::motion::easing::QuartEaseIn_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,getEaseIn,return )

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::getEaseInOut( ){
	HX_STACK_PUSH("Quart::getEaseInOut","com/eclecticdesignstudio/motion/easing/Quart.hx",26);
	HX_STACK_LINE(26)
	return ::com::eclecticdesignstudio::motion::easing::QuartEaseInOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,getEaseInOut,return )

::com::eclecticdesignstudio::motion::easing::IEasing Quart_obj::getEaseOut( ){
	HX_STACK_PUSH("Quart::getEaseOut","com/eclecticdesignstudio/motion/easing/Quart.hx",33);
	HX_STACK_LINE(33)
	return ::com::eclecticdesignstudio::motion::easing::QuartEaseOut_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,getEaseOut,return )


Quart_obj::Quart_obj()
{
}

void Quart_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quart);
	HX_MARK_END_CLASS();
}

void Quart_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Quart_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { return inCallProp ? getEaseIn() : easeIn; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { return inCallProp ? getEaseOut() : easeOut; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { return inCallProp ? getEaseInOut() : easeInOut; }
		if (HX_FIELD_EQ(inName,"getEaseIn") ) { return getEaseIn_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getEaseOut") ) { return getEaseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getEaseInOut") ) { return getEaseInOut_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quart_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { easeIn=inValue.Cast< ::com::eclecticdesignstudio::motion::easing::IEasing >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { easeOut=inValue.Cast< ::com::eclecticdesignstudio::motion::easing::IEasing >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { easeInOut=inValue.Cast< ::com::eclecticdesignstudio::motion::easing::IEasing >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quart_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("easeIn"),
	HX_CSTRING("easeInOut"),
	HX_CSTRING("easeOut"),
	HX_CSTRING("getEaseIn"),
	HX_CSTRING("getEaseInOut"),
	HX_CSTRING("getEaseOut"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Quart_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Quart_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Quart_obj::easeOut,"easeOut");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Quart_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Quart_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Quart_obj::easeOut,"easeOut");
};

Class Quart_obj::__mClass;

void Quart_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.eclecticdesignstudio.motion.easing.Quart"), hx::TCanCast< Quart_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Quart_obj::__boot()
{
}

} // end namespace com
} // end namespace eclecticdesignstudio
} // end namespace motion
} // end namespace easing
