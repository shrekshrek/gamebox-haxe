#ifndef INCLUDED_com_eclecticdesignstudio_motion_IComponentPath
#define INCLUDED_com_eclecticdesignstudio_motion_IComponentPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,eclecticdesignstudio,motion,IComponentPath)
namespace com{
namespace eclecticdesignstudio{
namespace motion{


class IComponentPath_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IComponentPath_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Float calculate( Float k)=0;
		Dynamic calculate_dyn();
};

#define DELEGATE_com_eclecticdesignstudio_motion_IComponentPath \
virtual Float calculate( Float k) { return mDelegate->calculate(k);}  \
virtual Dynamic calculate_dyn() { return mDelegate->calculate_dyn();}  \


template<typename IMPL>
class IComponentPath_delegate_ : public IComponentPath_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IComponentPath_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_com_eclecticdesignstudio_motion_IComponentPath
};

} // end namespace com
} // end namespace eclecticdesignstudio
} // end namespace motion

#endif /* INCLUDED_com_eclecticdesignstudio_motion_IComponentPath */ 
