#ifndef INCLUDED_nape_callbacks_Listener
#define INCLUDED_nape_callbacks_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nape,callbacks,CbEvent)
HX_DECLARE_CLASS2(nape,callbacks,Listener)
HX_DECLARE_CLASS2(nape,callbacks,ListenerType)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(zpp_nape,callbacks,ZPP_Listener)
namespace nape{
namespace callbacks{


class Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Listener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Listener_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Listener"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::nape::space::Space set_space( ::nape::space::Space space);
		Dynamic set_space_dyn();

		virtual ::nape::space::Space get_space( );
		Dynamic get_space_dyn();

		::nape::space::Space space; /* REM */ 
		virtual int set_precedence( int precedence);
		Dynamic set_precedence_dyn();

		virtual int get_precedence( );
		Dynamic get_precedence_dyn();

		int precedence; /* REM */ 
		virtual ::nape::callbacks::CbEvent set_event( ::nape::callbacks::CbEvent event);
		Dynamic set_event_dyn();

		virtual ::nape::callbacks::CbEvent get_event( );
		Dynamic get_event_dyn();

		::nape::callbacks::CbEvent event; /* REM */ 
		virtual ::nape::callbacks::ListenerType get_type( );
		Dynamic get_type_dyn();

		::nape::callbacks::ListenerType type; /* REM */ 
		::zpp_nape::callbacks::ZPP_Listener zpp_inner; /* REM */ 
};

} // end namespace nape
} // end namespace callbacks

#endif /* INCLUDED_nape_callbacks_Listener */ 
