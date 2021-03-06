#include <hxcpp.h>

#ifndef INCLUDED_native_gl_Framebuffer
#include <native/gl/Framebuffer.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
namespace native{
namespace gl{

Void Framebuffer_obj::__construct(int inVersion,Dynamic inId)
{
HX_STACK_PUSH("Framebuffer::new","native/gl/GL.hx",1614);
{
	HX_STACK_LINE(1614)
	super::__construct(inVersion,inId);
}
;
	return null();
}

Framebuffer_obj::~Framebuffer_obj() { }

Dynamic Framebuffer_obj::__CreateEmpty() { return  new Framebuffer_obj; }
hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__new(int inVersion,Dynamic inId)
{  hx::ObjectPtr< Framebuffer_obj > result = new Framebuffer_obj();
	result->__construct(inVersion,inId);
	return result;}

Dynamic Framebuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Framebuffer_obj > result = new Framebuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Framebuffer_obj::getType( ){
	HX_STACK_PUSH("Framebuffer::getType","native/gl/GL.hx",1615);
	HX_STACK_THIS(this);
	HX_STACK_LINE(1615)
	return HX_CSTRING("Framebuffer");
}



Framebuffer_obj::Framebuffer_obj()
{
}

void Framebuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Framebuffer);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Framebuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Framebuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Framebuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

Class Framebuffer_obj::__mClass;

void Framebuffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.gl.Framebuffer"), hx::TCanCast< Framebuffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Framebuffer_obj::__boot()
{
}

} // end namespace native
} // end namespace gl
