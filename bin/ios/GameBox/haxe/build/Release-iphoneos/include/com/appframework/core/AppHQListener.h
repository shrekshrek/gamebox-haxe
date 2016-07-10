#ifndef INCLUDED_com_appframework_core_AppHQListener
#define INCLUDED_com_appframework_core_AppHQListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/EventDispatcher.h>
HX_DECLARE_CLASS3(com,appframework,core,AppHQListener)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace core{


class AppHQListener_obj : public ::native::events::EventDispatcher_obj{
	public:
		typedef ::native::events::EventDispatcher_obj super;
		typedef AppHQListener_obj OBJ_;
		AppHQListener_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AppHQListener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AppHQListener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AppHQListener"); }

		virtual Void completeCallback( hx::Null< bool >  destroy);
		Dynamic completeCallback_dyn();

		bool dispatched; /* REM */ 
		bool completed; /* REM */ 
		bool onlyOnce; /* REM */ 
		Dynamic target; /* REM */ 
		Dynamic &target_dyn() { return target;}
		::String event; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace core

#endif /* INCLUDED_com_appframework_core_AppHQListener */ 
