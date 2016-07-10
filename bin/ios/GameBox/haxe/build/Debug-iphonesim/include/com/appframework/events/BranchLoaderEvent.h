#ifndef INCLUDED_com_appframework_events_BranchLoaderEvent
#define INCLUDED_com_appframework_events_BranchLoaderEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/events/Event.h>
HX_DECLARE_CLASS3(com,appframework,assets,PageAsset)
HX_DECLARE_CLASS3(com,appframework,events,BranchLoaderEvent)
HX_DECLARE_CLASS2(native,events,Event)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace appframework{
namespace events{


class BranchLoaderEvent_obj : public ::native::events::Event_obj{
	public:
		typedef ::native::events::Event_obj super;
		typedef BranchLoaderEvent_obj OBJ_;
		BranchLoaderEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::com::appframework::assets::PageAsset asset);

	public:
		static hx::ObjectPtr< BranchLoaderEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::com::appframework::assets::PageAsset asset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BranchLoaderEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BranchLoaderEvent"); }

		virtual ::native::events::Event clone( );

		::com::appframework::assets::PageAsset asset; /* REM */ 
		static ::String LOAD_PAGE; /* REM */ 
		static ::String START; /* REM */ 
		static ::String COMPLETE; /* REM */ 
};

} // end namespace com
} // end namespace appframework
} // end namespace events

#endif /* INCLUDED_com_appframework_events_BranchLoaderEvent */ 
