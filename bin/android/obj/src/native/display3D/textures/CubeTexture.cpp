#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display3D_textures_CubeTexture
#include <native/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_native_display3D_textures_TextureBase
#include <native/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_geom_Rectangle
#include <native/geom/Rectangle.h>
#endif
#ifndef INCLUDED_native_gl_GL
#include <native/gl/GL.h>
#endif
#ifndef INCLUDED_native_gl_Object
#include <native/gl/Object.h>
#endif
#ifndef INCLUDED_native_gl_Texture
#include <native/gl/Texture.h>
#endif
#ifndef INCLUDED_native_utils_ByteArray
#include <native/utils/ByteArray.h>
#endif
#ifndef INCLUDED_native_utils_IDataInput
#include <native/utils/IDataInput.h>
#endif
#ifndef INCLUDED_native_utils_IMemoryRange
#include <native/utils/IMemoryRange.h>
#endif
namespace native{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::native::gl::Texture glTexture)
{
HX_STACK_PUSH("CubeTexture::new","native/display3D/textures/CubeTexture.hx",14);
{
	HX_STACK_LINE(14)
	super::__construct(glTexture);
}
;
	return null();
}

CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::native::gl::Texture glTexture)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(glTexture);
	return result;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CubeTexture_obj::uploadFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("CubeTexture::uploadFromByteArray","native/display3D/textures/CubeTexture.hx",40);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(side,"side");
	HX_STACK_ARG(miplevel,"miplevel");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::native::display::BitmapData source,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_PUSH("CubeTexture::uploadFromBitmapData","native/display3D/textures/CubeTexture.hx",28);
	HX_STACK_THIS(this);
	HX_STACK_ARG(source,"source");
	HX_STACK_ARG(side,"side");
	HX_STACK_ARG(miplevel,"miplevel");
{
		HX_STACK_LINE(30)
		::native::gl::GL_obj::bindTexture((int)34067,this->glTexture);
		struct _Function_1_1{
			inline static ::native::utils::ByteArray Block( ::native::display::BitmapData &source){
				HX_STACK_PUSH("*::closure","native/display3D/textures/CubeTexture.hx",32);
				{
					HX_STACK_LINE(32)
					::native::utils::ByteArray p = source->getPixels(::native::geom::Rectangle_obj::__new((int)0,(int)0,source->get_width(),source->get_height()));		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(32)
					int num = (source->get_width() * source->get_height());		HX_STACK_VAR(num,"num");
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(32)
						while(((_g < num))){
							HX_STACK_LINE(32)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(32)
							int alpha = p->__get((i * (int)4));		HX_STACK_VAR(alpha,"alpha");
							HX_STACK_LINE(32)
							int red = p->__get(((i * (int)4) + (int)1));		HX_STACK_VAR(red,"red");
							HX_STACK_LINE(32)
							int green = p->__get(((i * (int)4) + (int)2));		HX_STACK_VAR(green,"green");
							HX_STACK_LINE(32)
							int blue = p->__get(((i * (int)4) + (int)3));		HX_STACK_VAR(blue,"blue");
							HX_STACK_LINE(32)
							hx::__ArrayImplRef(p,(i * (int)4)) = red;
							HX_STACK_LINE(32)
							hx::__ArrayImplRef(p,((i * (int)4) + (int)1)) = green;
							HX_STACK_LINE(32)
							hx::__ArrayImplRef(p,((i * (int)4) + (int)2)) = blue;
							HX_STACK_LINE(32)
							hx::__ArrayImplRef(p,((i * (int)4) + (int)3)) = alpha;
						}
					}
					HX_STACK_LINE(32)
					return p;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		::native::utils::ByteArray p = _Function_1_1::Block(source);		HX_STACK_VAR(p,"p");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::native::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_PUSH("CubeTexture::uploadCompressedTextureFromByteArray","native/display3D/textures/CubeTexture.hx",21);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset");
	HX_STACK_ARG(async,"async");
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display3D.textures.CubeTexture"), hx::TCanCast< CubeTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CubeTexture_obj::__boot()
{
}

} // end namespace native
} // end namespace display3D
} // end namespace textures
