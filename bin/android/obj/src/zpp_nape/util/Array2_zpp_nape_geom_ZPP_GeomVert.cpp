#include <hxcpp.h>

#ifndef INCLUDED_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/geom/ZPP_GeomVert.h>
#endif
#ifndef INCLUDED_zpp_nape_util_Array2_zpp_nape_geom_ZPP_GeomVert
#include <zpp_nape/util/Array2_zpp_nape_geom_ZPP_GeomVert.h>
#endif
namespace zpp_nape{
namespace util{

Void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__construct(int width,int height)
{
HX_STACK_PUSH("Array2_zpp_nape_geom_ZPP_GeomVert::new","zpp_nape/util/Array2.hx",175);
{
	HX_STACK_LINE(178)
	this->width = (int)0;
	HX_STACK_LINE(177)
	this->list = null();
	HX_STACK_LINE(184)
	this->width = width;
	HX_STACK_LINE(189)
	this->list = Array_obj< ::zpp_nape::geom::ZPP_GeomVert >::__new();
}
;
	return null();
}

Array2_zpp_nape_geom_ZPP_GeomVert_obj::~Array2_zpp_nape_geom_ZPP_GeomVert_obj() { }

Dynamic Array2_zpp_nape_geom_ZPP_GeomVert_obj::__CreateEmpty() { return  new Array2_zpp_nape_geom_ZPP_GeomVert_obj; }
hx::ObjectPtr< Array2_zpp_nape_geom_ZPP_GeomVert_obj > Array2_zpp_nape_geom_ZPP_GeomVert_obj::__new(int width,int height)
{  hx::ObjectPtr< Array2_zpp_nape_geom_ZPP_GeomVert_obj > result = new Array2_zpp_nape_geom_ZPP_GeomVert_obj();
	result->__construct(width,height);
	return result;}

Dynamic Array2_zpp_nape_geom_ZPP_GeomVert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Array2_zpp_nape_geom_ZPP_GeomVert_obj > result = new Array2_zpp_nape_geom_ZPP_GeomVert_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::zpp_nape::geom::ZPP_GeomVert Array2_zpp_nape_geom_ZPP_GeomVert_obj::set( int x,int y,::zpp_nape::geom::ZPP_GeomVert obj){
	HX_STACK_PUSH("Array2_zpp_nape_geom_ZPP_GeomVert::set","zpp_nape/util/Array2.hx",223);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(obj,"obj");
	HX_STACK_LINE(224)
	{
	}
	HX_STACK_LINE(232)
	return this->list[((y * this->width) + x)] = obj;
}


HX_DEFINE_DYNAMIC_FUNC3(Array2_zpp_nape_geom_ZPP_GeomVert_obj,set,return )

::zpp_nape::geom::ZPP_GeomVert Array2_zpp_nape_geom_ZPP_GeomVert_obj::get( int x,int y){
	HX_STACK_PUSH("Array2_zpp_nape_geom_ZPP_GeomVert::get","zpp_nape/util/Array2.hx",210);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(211)
	{
	}
	HX_STACK_LINE(219)
	return this->list->__get(((y * this->width) + x));
}


HX_DEFINE_DYNAMIC_FUNC2(Array2_zpp_nape_geom_ZPP_GeomVert_obj,get,return )

Void Array2_zpp_nape_geom_ZPP_GeomVert_obj::resize( int width,int height,::zpp_nape::geom::ZPP_GeomVert def){
{
		HX_STACK_PUSH("Array2_zpp_nape_geom_ZPP_GeomVert::resize","zpp_nape/util/Array2.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_ARG(def,"def");
		HX_STACK_LINE(201)
		this->width = width;
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (width * height);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			while(((_g1 < _g))){
				HX_STACK_LINE(204)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(205)
				this->list[i] = def;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Array2_zpp_nape_geom_ZPP_GeomVert_obj,resize,(void))


Array2_zpp_nape_geom_ZPP_GeomVert_obj::Array2_zpp_nape_geom_ZPP_GeomVert_obj()
{
}

void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Array2_zpp_nape_geom_ZPP_GeomVert);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic Array2_zpp_nape_geom_ZPP_GeomVert_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Array2_zpp_nape_geom_ZPP_GeomVert_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::zpp_nape::geom::ZPP_GeomVert > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("get"),
	HX_CSTRING("resize"),
	HX_CSTRING("width"),
	HX_CSTRING("list"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Array2_zpp_nape_geom_ZPP_GeomVert_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Array2_zpp_nape_geom_ZPP_GeomVert_obj::__mClass,"__mClass");
};

Class Array2_zpp_nape_geom_ZPP_GeomVert_obj::__mClass;

void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("zpp_nape.util.Array2_zpp_nape_geom_ZPP_GeomVert"), hx::TCanCast< Array2_zpp_nape_geom_ZPP_GeomVert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Array2_zpp_nape_geom_ZPP_GeomVert_obj::__boot()
{
}

} // end namespace zpp_nape
} // end namespace util
