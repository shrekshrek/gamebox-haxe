#ifndef INCLUDED_com_shrek_gamebox_pages_game1_Bullet
#define INCLUDED_com_shrek_gamebox_pages_game1_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <native/display/Sprite.h>
HX_DECLARE_CLASS5(com,shrek,gamebox,pages,game1,Bullet)
HX_DECLARE_CLASS2(native,display,DisplayObject)
HX_DECLARE_CLASS2(native,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(native,display,IBitmapDrawable)
HX_DECLARE_CLASS2(native,display,InteractiveObject)
HX_DECLARE_CLASS2(native,display,Sprite)
HX_DECLARE_CLASS2(native,events,EventDispatcher)
HX_DECLARE_CLASS2(native,events,IEventDispatcher)
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{
namespace game1{


class Bullet_obj : public ::native::display::Sprite_obj{
	public:
		typedef ::native::display::Sprite_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Bullet_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bullet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bullet"); }

		::native::display::Sprite hit; /* REM */ 
		Float vy; /* REM */ 
		Float vx; /* REM */ 
};

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
} // end namespace game1

#endif /* INCLUDED_com_shrek_gamebox_pages_game1_Bullet */ 
