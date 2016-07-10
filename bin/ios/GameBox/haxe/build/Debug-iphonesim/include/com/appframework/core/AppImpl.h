#ifndef INCLUDED_com_appframework_core_AppImpl
#define INCLUDED_com_appframework_core_AppImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,core,AppImpl)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class AppImpl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppImpl_obj OBJ_;
		AppImpl_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppImpl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppImpl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppImpl"); }

		virtual Void removeAfterComplete( Dynamic target);
		Dynamic removeAfterComplete_dyn();

		virtual Void removeAfterTransitionIn( Dynamic target);
		Dynamic removeAfterTransitionIn_dyn();

		virtual Void removeBeforeTransitionIn( Dynamic target);
		Dynamic removeBeforeTransitionIn_dyn();

		virtual Void removeAfterPreload( Dynamic target);
		Dynamic removeAfterPreload_dyn();

		virtual Void removeBeforePreload( Dynamic target);
		Dynamic removeBeforePreload_dyn();

		virtual Void removeAfterTransitionOut( Dynamic target);
		Dynamic removeAfterTransitionOut_dyn();

		virtual Void removeBeforeTransitionOut( Dynamic target);
		Dynamic removeBeforeTransitionOut_dyn();

		virtual Void removeAfterGoto( Dynamic target);
		Dynamic removeAfterGoto_dyn();

		virtual Void removeBeforeGoto( Dynamic target);
		Dynamic removeBeforeGoto_dyn();

		virtual Dynamic afterComplete( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic afterComplete_dyn();

		virtual Dynamic afterTransitionIn( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic afterTransitionIn_dyn();

		virtual Dynamic beforeTransitionIn( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic beforeTransitionIn_dyn();

		virtual Dynamic afterPreload( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic afterPreload_dyn();

		virtual Dynamic beforePreload( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic beforePreload_dyn();

		virtual Dynamic afterTransitionOut( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic afterTransitionOut_dyn();

		virtual Dynamic beforeTransitionOut( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic beforeTransitionOut_dyn();

		virtual Dynamic afterGoto( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic afterGoto_dyn();

		virtual Dynamic beforeGoto( Dynamic target,hx::Null< bool >  onlyOnce);
		Dynamic beforeGoto_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual Void setDefaultFlow( ::String flow);
		Dynamic setDefaultFlow_dyn();

		virtual ::String getDefaultFlow( );
		Dynamic getDefaultFlow_dyn();

		virtual ::String getCurrentBranch( );
		Dynamic getCurrentBranch_dyn();

		virtual ::String getValidBranch( ::String branch);
		Dynamic getValidBranch_dyn();

		virtual ::native::display::Sprite getDepthContainer( ::String name);
		Dynamic getDepthContainer_dyn();

		virtual ::com::appframework::assets::PageAsset getPage( ::String branch);
		Dynamic getPage_dyn();

		virtual ::Xml getSiteXML( );
		Dynamic getSiteXML_dyn();

		virtual ::com::appframework::assets::PageAsset getAppTree( );
		Dynamic getAppTree_dyn();

		virtual Void _goto( ::String branch,::String flow);
		Dynamic _goto_dyn();

		static ::com::appframework::core::AppImpl _instance; /* REM */ 
		static ::com::appframework::core::AppImpl birth( );
		static Dynamic birth_dyn();

		static ::com::appframework::core::AppImpl instance; /* REM */ 
		static ::com::appframework::core::AppImpl get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppImpl */ 
