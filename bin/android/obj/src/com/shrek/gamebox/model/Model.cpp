#include <hxcpp.h>

#ifndef INCLUDED_com_shrek_gamebox_model_Model
#include <com/shrek/gamebox/model/Model.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace model{

Void Model_obj::__construct()
{
HX_STACK_PUSH("Model::new","com/shrek/gamebox/model/Model.hx",8);
{
	HX_STACK_LINE(26)
	this->stageScale = (int)0;
	HX_STACK_LINE(25)
	this->originHeight = (int)760;
	HX_STACK_LINE(24)
	this->originWidth = (int)480;
}
;
	return null();
}

Model_obj::~Model_obj() { }

Dynamic Model_obj::__CreateEmpty() { return  new Model_obj; }
hx::ObjectPtr< Model_obj > Model_obj::__new()
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct();
	return result;}

Dynamic Model_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Model_obj > result = new Model_obj();
	result->__construct();
	return result;}

::com::shrek::gamebox::model::Model Model_obj::_instance;

::com::shrek::gamebox::model::Model Model_obj::instance;

::com::shrek::gamebox::model::Model Model_obj::get_instance( ){
	HX_STACK_PUSH("Model::get_instance","com/shrek/gamebox/model/Model.hx",19);
	HX_STACK_LINE(20)
	if (((::com::shrek::gamebox::model::Model_obj::_instance == null()))){
		HX_STACK_LINE(20)
		::com::shrek::gamebox::model::Model_obj::_instance = ::com::shrek::gamebox::model::Model_obj::__new();
	}
	HX_STACK_LINE(21)
	return ::com::shrek::gamebox::model::Model_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Model_obj,get_instance,return )


Model_obj::Model_obj()
{
}

void Model_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Model);
	HX_MARK_MEMBER_NAME(stageScale,"stageScale");
	HX_MARK_MEMBER_NAME(originHeight,"originHeight");
	HX_MARK_MEMBER_NAME(originWidth,"originWidth");
	HX_MARK_END_CLASS();
}

void Model_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stageScale,"stageScale");
	HX_VISIT_MEMBER_NAME(originHeight,"originHeight");
	HX_VISIT_MEMBER_NAME(originWidth,"originWidth");
}

Dynamic Model_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageScale") ) { return stageScale; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originWidth") ) { return originWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"originHeight") ) { return originHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Model_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::com::shrek::gamebox::model::Model >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::com::shrek::gamebox::model::Model >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageScale") ) { stageScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"originWidth") ) { originWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"originHeight") ) { originHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Model_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("stageScale"));
	outFields->push(HX_CSTRING("originHeight"));
	outFields->push(HX_CSTRING("originWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("stageScale"),
	HX_CSTRING("originHeight"),
	HX_CSTRING("originWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Model_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Model_obj::instance,"instance");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Model_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Model_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Model_obj::instance,"instance");
};

Class Model_obj::__mClass;

void Model_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.model.Model"), hx::TCanCast< Model_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Model_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace model
