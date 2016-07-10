#ifndef INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseIn
#define INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/eclecticdesignstudio/motion/easing/IEasing.h>
HX_DECLARE_CLASS4(com,eclecticdesignstudio,motion,easing,IEasing)
HX_DECLARE_CLASS4(com,eclecticdesignstudio,motion,easing,QuartEaseIn)
namespace com{
namespace eclecticdesignstudio{
namespace motion{
namespace easing{


class QuartEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QuartEaseIn_obj OBJ_;
		QuartEaseIn_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< QuartEaseIn_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~QuartEaseIn_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::com::eclecticdesignstudio::motion::easing::IEasing_obj *()
			{ return new ::com::eclecticdesignstudio::motion::easing::IEasing_delegate_< QuartEaseIn_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("QuartEaseIn"); }

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

};

} // end namespace com
} // end namespace eclecticdesignstudio
} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_com_eclecticdesignstudio_motion_easing_QuartEaseIn */ 
