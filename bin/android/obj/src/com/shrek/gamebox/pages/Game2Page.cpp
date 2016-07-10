#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_com_appframework_templates_AbstractPage
#include <com/appframework/templates/AbstractPage.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_Actuate
#include <com/eclecticdesignstudio/motion/Actuate.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_actuators_GenericActuator
#include <com/eclecticdesignstudio/motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_com_eclecticdesignstudio_motion_actuators_IGenericActuator
#include <com/eclecticdesignstudio/motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_model_Model
#include <com/shrek/gamebox/model/Model.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_Game2Page
#include <com/shrek/gamebox/pages/Game2Page.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Circle
#include <nape/shape/Circle.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_native_display_DisplayObject
#include <native/display/DisplayObject.h>
#endif
#ifndef INCLUDED_native_display_DisplayObjectContainer
#include <native/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_InteractiveObject
#include <native/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_native_display_Shape
#include <native/display/Shape.h>
#endif
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
#endif
#ifndef INCLUDED_native_events_AccelerometerEvent
#include <native/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_native_events_Event
#include <native/events/Event.h>
#endif
#ifndef INCLUDED_native_events_EventDispatcher
#include <native/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_native_events_IEventDispatcher
#include <native/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_native_sensors_Accelerometer
#include <native/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Material
#include <zpp_nape/phys/ZPP_Material.h>
#endif
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void Game2Page_obj::__construct()
{
HX_STACK_PUSH("Game2Page::new","com/shrek/gamebox/pages/Game2Page.hx",27);
{
	HX_STACK_LINE(27)
	super::__construct();
}
;
	return null();
}

Game2Page_obj::~Game2Page_obj() { }

Dynamic Game2Page_obj::__CreateEmpty() { return  new Game2Page_obj; }
hx::ObjectPtr< Game2Page_obj > Game2Page_obj::__new()
{  hx::ObjectPtr< Game2Page_obj > result = new Game2Page_obj();
	result->__construct();
	return result;}

Dynamic Game2Page_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game2Page_obj > result = new Game2Page_obj();
	result->__construct();
	return result;}

Void Game2Page_obj::onUpdateHandler( ::native::events::AccelerometerEvent event){
{
		HX_STACK_PUSH("Game2Page::onUpdateHandler","com/shrek/gamebox/pages/Game2Page.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(118)
		::haxe::Log_obj::trace((((((HX_CSTRING("x:") + event->accelerationX) + HX_CSTRING(" y:")) + event->accelerationY) + HX_CSTRING(" z:")) + event->accelerationZ),hx::SourceInfo(HX_CSTRING("Game2Page.hx"),119,HX_CSTRING("com.shrek.gamebox.pages.Game2Page"),HX_CSTRING("onUpdateHandler")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game2Page_obj,onUpdateHandler,(void))

Void Game2Page_obj::onEnterFrameHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("Game2Page::onEnterFrameHandler","com/shrek/gamebox/pages/Game2Page.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(110)
		this->space->step((Float((int)1) / Float(this->get_stage()->frameRate)),null(),null());
		HX_STACK_LINE(111)
		this->debug->clear();
		HX_STACK_LINE(112)
		this->debug->draw(this->space);
		HX_STACK_LINE(113)
		this->debug->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game2Page_obj,onEnterFrameHandler,(void))

Void Game2Page_obj::onResizeHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("Game2Page::onResizeHandler","com/shrek/gamebox/pages/Game2Page.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(104)
		this->debug->zpp_inner->d_shape->shape->set_scaleX(this->debug->zpp_inner->d_shape->shape->set_scaleY(::com::shrek::gamebox::model::Model_obj::get_instance()->stageScale));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game2Page_obj,onResizeHandler,(void))

Void Game2Page_obj::clear( ){
{
		HX_STACK_PUSH("Game2Page::clear","com/shrek/gamebox/pages/Game2Page.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(93)
		if ((::native::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(94)
			this->accelerometer->removeEventListener(::native::events::AccelerometerEvent_obj::UPDATE,this->onUpdateHandler_dyn(),null());
		}
		HX_STACK_LINE(98)
		this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null());
		HX_STACK_LINE(100)
		this->get_stage()->removeEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game2Page_obj,clear,(void))

Void Game2Page_obj::init( ){
{
		HX_STACK_PUSH("Game2Page::init","com/shrek/gamebox/pages/Game2Page.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		if ((::native::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(54)
			this->accelerometer = ::native::sensors::Accelerometer_obj::__new();
			HX_STACK_LINE(55)
			this->accelerometer->addEventListener(::native::events::AccelerometerEvent_obj::UPDATE,this->onUpdateHandler_dyn(),null(),null(),null());
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",58);
				{
					HX_STACK_LINE(58)
					{
					}
					HX_STACK_LINE(58)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(58)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(58)
						ret = ::nape::geom::Vec2_obj::__new(null(),null());
					}
					else{
						HX_STACK_LINE(58)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(58)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(58)
						ret->zpp_pool = null();
						HX_STACK_LINE(58)
						ret->zpp_disp = false;
						HX_STACK_LINE(58)
						if (((ret == ::zpp_nape::util::ZPP_PubPool_obj::nextVec2))){
							HX_STACK_LINE(58)
							::zpp_nape::util::ZPP_PubPool_obj::nextVec2 = null();
						}
					}
					HX_STACK_LINE(58)
					if (((ret->zpp_inner == null()))){
						struct _Function_3_1{
							inline static ::zpp_nape::geom::ZPP_Vec2 Block( ){
								HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",58);
								{
									HX_STACK_LINE(58)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(58)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(58)
									{
										HX_STACK_LINE(58)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(58)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();
										}
										else{
											HX_STACK_LINE(58)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(58)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(58)
											ret1->next = null();
										}
										HX_STACK_LINE(58)
										ret1->weak = false;
									}
									HX_STACK_LINE(58)
									ret1->_immutable = immutable;
									HX_STACK_LINE(58)
									{
										HX_STACK_LINE(58)
										ret1->x = (int)0;
										HX_STACK_LINE(58)
										ret1->y = (int)300;
										HX_STACK_LINE(58)
										{
										}
										HX_STACK_LINE(58)
										{
										}
									}
									HX_STACK_LINE(58)
									return ret1;
								}
								return null();
							}
						};
						HX_STACK_LINE(58)
						ret->zpp_inner = _Function_3_1::Block();
						HX_STACK_LINE(58)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(58)
						if (((bool((ret != null())) && bool(ret->zpp_disp)))){
							HX_STACK_LINE(58)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(58)
						{
							HX_STACK_LINE(58)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(58)
							if ((_this->_immutable)){
								HX_STACK_LINE(58)
								hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
							}
							HX_STACK_LINE(58)
							if (((_this->_isimmutable_dyn() != null()))){
								HX_STACK_LINE(58)
								_this->_isimmutable();
							}
						}
						HX_STACK_LINE(58)
						{
						}
						struct _Function_3_1{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",58);
								{
									HX_STACK_LINE(58)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(58)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(58)
									{
										HX_STACK_LINE(58)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(58)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(58)
											_this->_validate();
										}
									}
									HX_STACK_LINE(58)
									return ret->zpp_inner->x;
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static Float Block( ::nape::geom::Vec2 &ret){
								HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",58);
								{
									HX_STACK_LINE(58)
									if (((bool((ret != null())) && bool(ret->zpp_disp)))){
										HX_STACK_LINE(58)
										hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
									}
									HX_STACK_LINE(58)
									{
										HX_STACK_LINE(58)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(58)
										if (((_this->_validate_dyn() != null()))){
											HX_STACK_LINE(58)
											_this->_validate();
										}
									}
									HX_STACK_LINE(58)
									return ret->zpp_inner->y;
								}
								return null();
							}
						};
						HX_STACK_LINE(58)
						if ((!(((bool((_Function_3_1::Block(ret) == (int)0)) && bool((_Function_3_2::Block(ret) == (int)300))))))){
							HX_STACK_LINE(58)
							{
								HX_STACK_LINE(58)
								ret->zpp_inner->x = (int)0;
								HX_STACK_LINE(58)
								ret->zpp_inner->y = (int)300;
								HX_STACK_LINE(58)
								{
								}
								HX_STACK_LINE(58)
								{
								}
							}
							HX_STACK_LINE(58)
							{
								HX_STACK_LINE(58)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(58)
								if (((_this->_invalidate_dyn() != null()))){
									HX_STACK_LINE(58)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(58)
						ret;
					}
					HX_STACK_LINE(58)
					ret->zpp_inner->weak = true;
					HX_STACK_LINE(58)
					return ret;
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		::nape::geom::Vec2 _gravity = _Function_1_1::Block();		HX_STACK_VAR(_gravity,"_gravity");
		HX_STACK_LINE(59)
		this->space = ::nape::space::Space_obj::__new(_gravity,null());
		HX_STACK_LINE(60)
		this->debug = ::nape::util::ShapeDebug_obj::__new(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth,::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight,(int)0);
		HX_STACK_LINE(61)
		this->addChild(this->debug->zpp_inner->d_shape->shape);
		HX_STACK_LINE(63)
		this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null(),null(),null());
		struct _Function_1_2{
			inline static ::nape::phys::BodyType Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",65);
				{
					HX_STACK_LINE(65)
					if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
						HX_STACK_LINE(65)
						::zpp_nape::util::ZPP_Flags_obj::internal = true;
						HX_STACK_LINE(65)
						::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = ::nape::phys::BodyType_obj::__new();
						HX_STACK_LINE(65)
						::zpp_nape::util::ZPP_Flags_obj::internal = false;
					}
					HX_STACK_LINE(65)
					return ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		::nape::phys::Body _floor = ::nape::phys::Body_obj::__new(_Function_1_2::Block(),null());		HX_STACK_VAR(_floor,"_floor");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g = (int)1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while(((_g < (int)3))){
				HX_STACK_LINE(66)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(68)
				::nape::shape::Polygon _polygon = ::nape::shape::Polygon_obj::__new(::nape::shape::Polygon_obj::box(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth,(int)1,null()),null(),null());		HX_STACK_VAR(_polygon,"_polygon");
				HX_STACK_LINE(69)
				_polygon->rotate(((Float((i * ::Math_obj::PI)) / Float((int)3)) + (Float(::Math_obj::PI) / Float((int)2))));
				HX_STACK_LINE(70)
				{
					HX_STACK_LINE(70)
					::nape::phys::Material _this = _polygon->zpp_inner->material->wrapper();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(70)
					if ((((int)0 != _this->zpp_inner->elasticity))){
						HX_STACK_LINE(70)
						{
						}
						HX_STACK_LINE(70)
						{
						}
						HX_STACK_LINE(70)
						{
						}
						HX_STACK_LINE(70)
						_this->zpp_inner->elasticity = 0.;
						HX_STACK_LINE(70)
						_this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
					}
					HX_STACK_LINE(70)
					_this->zpp_inner->elasticity;
				}
				HX_STACK_LINE(71)
				{
					HX_STACK_LINE(71)
					::nape::shape::ShapeList _this = _floor->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(71)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(71)
						_this->push(_polygon);
					}
					else{
						HX_STACK_LINE(71)
						_this->unshift(_polygon);
					}
				}
			}
		}
		HX_STACK_LINE(73)
		{
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &_floor){
					HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",73);
					{
						HX_STACK_LINE(73)
						if (((_floor->zpp_inner->wrap_pos == null()))){
							HX_STACK_LINE(73)
							_floor->zpp_inner->setupPosition();
						}
						HX_STACK_LINE(73)
						return _floor->zpp_inner->wrap_pos;
					}
					return null();
				}
			};
			HX_STACK_LINE(73)
			::nape::geom::Vec2 _this = _Function_2_1::Block(_floor);		HX_STACK_VAR(_this,"_this");
			Float x = (Float(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth) / Float((int)2));		HX_STACK_VAR(x,"x");
			Float y = (::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight - (int)100);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(73)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(73)
				hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
			}
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(73)
				if ((_this1->_immutable)){
					HX_STACK_LINE(73)
					hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
				}
				HX_STACK_LINE(73)
				if (((_this1->_isimmutable_dyn() != null()))){
					HX_STACK_LINE(73)
					_this1->_isimmutable();
				}
			}
			HX_STACK_LINE(73)
			if (((bool((x != x)) || bool((y != y))))){
				HX_STACK_LINE(73)
				hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
			}
			struct _Function_2_2{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",73);
					{
						HX_STACK_LINE(73)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(73)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(73)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(73)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(73)
						return _this->zpp_inner->x;
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static Float Block( ::nape::geom::Vec2 &_this){
					HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",73);
					{
						HX_STACK_LINE(73)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(73)
							hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
						}
						HX_STACK_LINE(73)
						{
							HX_STACK_LINE(73)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(73)
							if (((_this1->_validate_dyn() != null()))){
								HX_STACK_LINE(73)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(73)
						return _this->zpp_inner->y;
					}
					return null();
				}
			};
			HX_STACK_LINE(73)
			if ((!(((bool((_Function_2_2::Block(_this) == x)) && bool((_Function_2_3::Block(_this) == y))))))){
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(73)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(73)
					{
					}
					HX_STACK_LINE(73)
					{
					}
				}
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(73)
					if (((_this1->_invalidate_dyn() != null()))){
						HX_STACK_LINE(73)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(73)
			_this;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				if (((_floor->zpp_inner->compound != null()))){
					HX_STACK_LINE(74)
					hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
				}
				HX_STACK_LINE(74)
				_floor->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(74)
				if ((_floor->zpp_inner->world)){
					HX_STACK_LINE(74)
					hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
				}
				HX_STACK_LINE(74)
				if (((((  (((_floor->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_floor->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(74)
					if (((((  (((_floor->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_floor->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(74)
						_floor->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(74)
					if (((((  (((_floor->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_floor->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(74)
						((  (((_floor->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_floor->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_floor);
					}
					HX_STACK_LINE(74)
					if (((space != null()))){
						HX_STACK_LINE(74)
						::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(74)
						if ((_this->zpp_inner->reverse_flag)){
							HX_STACK_LINE(74)
							_this->push(_floor);
						}
						else{
							HX_STACK_LINE(74)
							_this->unshift(_floor);
						}
					}
				}
			}
			HX_STACK_LINE(74)
			if (((_floor->zpp_inner->space == null()))){
				HX_STACK_LINE(74)
				Dynamic();
			}
			else{
				HX_STACK_LINE(74)
				_floor->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			while(((_g < (int)6))){
				HX_STACK_LINE(76)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static ::nape::phys::BodyType Block( ){
						HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",78);
						{
							HX_STACK_LINE(78)
							if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC == null()))){
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = true;
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC = ::nape::phys::BodyType_obj::__new();
								HX_STACK_LINE(78)
								::zpp_nape::util::ZPP_Flags_obj::internal = false;
							}
							HX_STACK_LINE(78)
							return ::zpp_nape::util::ZPP_Flags_obj::BodyType_DYNAMIC;
						}
						return null();
					}
				};
				HX_STACK_LINE(78)
				::nape::phys::Body _box = ::nape::phys::Body_obj::__new(_Function_3_1::Block(),null());		HX_STACK_VAR(_box,"_box");
				HX_STACK_LINE(79)
				::nape::shape::Circle _circle = ::nape::shape::Circle_obj::__new((int)10,null(),null(),null());		HX_STACK_VAR(_circle,"_circle");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::nape::phys::Material _this = _circle->zpp_inner->material->wrapper();		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(80)
					if ((((int)1 != _this->zpp_inner->elasticity))){
						HX_STACK_LINE(80)
						{
						}
						HX_STACK_LINE(80)
						{
						}
						HX_STACK_LINE(80)
						{
						}
						HX_STACK_LINE(80)
						_this->zpp_inner->elasticity = 1.;
						HX_STACK_LINE(80)
						_this->zpp_inner->invalidate((int(::zpp_nape::phys::ZPP_Material_obj::WAKE) | int(::zpp_nape::phys::ZPP_Material_obj::ARBITERS)));
					}
					HX_STACK_LINE(80)
					_this->zpp_inner->elasticity;
				}
				HX_STACK_LINE(81)
				{
					HX_STACK_LINE(81)
					::nape::shape::ShapeList _this = _box->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(81)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(81)
						_this->push(_circle);
					}
					else{
						HX_STACK_LINE(81)
						_this->unshift(_circle);
					}
				}
				HX_STACK_LINE(83)
				{
					struct _Function_4_1{
						inline static ::nape::geom::Vec2 Block( ::nape::phys::Body &_box){
							HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",83);
							{
								HX_STACK_LINE(83)
								if (((_box->zpp_inner->wrap_pos == null()))){
									HX_STACK_LINE(83)
									_box->zpp_inner->setupPosition();
								}
								HX_STACK_LINE(83)
								return _box->zpp_inner->wrap_pos;
							}
							return null();
						}
					};
					HX_STACK_LINE(83)
					::nape::geom::Vec2 _this = _Function_4_1::Block(_box);		HX_STACK_VAR(_this,"_this");
					Float x = (  (((hx::Mod(i,(int)2) == (int)0))) ? Float((::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth * 0.2)) : Float((::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth * 0.8)) );		HX_STACK_VAR(x,"x");
					Float y = ((int)50 + ((int)40 * i));		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(83)
					if (((bool((_this != null())) && bool(_this->zpp_disp)))){
						HX_STACK_LINE(83)
						hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
					}
					HX_STACK_LINE(83)
					{
						HX_STACK_LINE(83)
						::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(83)
						if ((_this1->_immutable)){
							HX_STACK_LINE(83)
							hx::Throw (HX_CSTRING("Error: Vec2 is immutable"));
						}
						HX_STACK_LINE(83)
						if (((_this1->_isimmutable_dyn() != null()))){
							HX_STACK_LINE(83)
							_this1->_isimmutable();
						}
					}
					HX_STACK_LINE(83)
					if (((bool((x != x)) || bool((y != y))))){
						HX_STACK_LINE(83)
						hx::Throw (HX_CSTRING("Error: Vec2 components cannot be NaN"));
					}
					struct _Function_4_2{
						inline static Float Block( ::nape::geom::Vec2 &_this){
							HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",83);
							{
								HX_STACK_LINE(83)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(83)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(83)
								{
									HX_STACK_LINE(83)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(83)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(83)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(83)
								return _this->zpp_inner->x;
							}
							return null();
						}
					};
					struct _Function_4_3{
						inline static Float Block( ::nape::geom::Vec2 &_this){
							HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",83);
							{
								HX_STACK_LINE(83)
								if (((bool((_this != null())) && bool(_this->zpp_disp)))){
									HX_STACK_LINE(83)
									hx::Throw (((HX_CSTRING("Error: ") + HX_CSTRING("Vec2")) + HX_CSTRING(" has been disposed and cannot be used!")));
								}
								HX_STACK_LINE(83)
								{
									HX_STACK_LINE(83)
									::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
									HX_STACK_LINE(83)
									if (((_this1->_validate_dyn() != null()))){
										HX_STACK_LINE(83)
										_this1->_validate();
									}
								}
								HX_STACK_LINE(83)
								return _this->zpp_inner->y;
							}
							return null();
						}
					};
					HX_STACK_LINE(83)
					if ((!(((bool((_Function_4_2::Block(_this) == x)) && bool((_Function_4_3::Block(_this) == y))))))){
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							_this->zpp_inner->x = x;
							HX_STACK_LINE(83)
							_this->zpp_inner->y = y;
							HX_STACK_LINE(83)
							{
							}
							HX_STACK_LINE(83)
							{
							}
						}
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(83)
							if (((_this1->_invalidate_dyn() != null()))){
								HX_STACK_LINE(83)
								_this1->_invalidate(_this1);
							}
						}
					}
					HX_STACK_LINE(83)
					_this;
				}
				HX_STACK_LINE(84)
				{
					HX_STACK_LINE(84)
					::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						if (((_box->zpp_inner->compound != null()))){
							HX_STACK_LINE(84)
							hx::Throw (HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
						}
						HX_STACK_LINE(84)
						_box->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
						HX_STACK_LINE(84)
						if ((_box->zpp_inner->world)){
							HX_STACK_LINE(84)
							hx::Throw (HX_CSTRING("Error: Space::world is immutable"));
						}
						HX_STACK_LINE(84)
						if (((((  (((_box->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_box->zpp_inner->space->outer) )) != space))){
							HX_STACK_LINE(84)
							if (((((  (((_box->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_box->zpp_inner->space->outer) )) != null()))){
								HX_STACK_LINE(84)
								_box->zpp_inner->component->woken = false;
							}
							HX_STACK_LINE(84)
							if (((((  (((_box->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_box->zpp_inner->space->outer) )) != null()))){
								HX_STACK_LINE(84)
								((  (((_box->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_box->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_box);
							}
							HX_STACK_LINE(84)
							if (((space != null()))){
								HX_STACK_LINE(84)
								::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(84)
								if ((_this->zpp_inner->reverse_flag)){
									HX_STACK_LINE(84)
									_this->push(_box);
								}
								else{
									HX_STACK_LINE(84)
									_this->unshift(_box);
								}
							}
						}
					}
					HX_STACK_LINE(84)
					if (((_box->zpp_inner->space == null()))){
						HX_STACK_LINE(84)
						Dynamic();
					}
					else{
						HX_STACK_LINE(84)
						_box->zpp_inner->space->outer;
					}
				}
			}
		}
		HX_STACK_LINE(87)
		this->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(88)
		this->onResizeHandler(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game2Page_obj,init,(void))

Void Game2Page_obj::transitionOut( ){
{
		HX_STACK_PUSH("Game2Page::transitionOut","com/shrek/gamebox/pages/Game2Page.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_LINE(39)
		this->clear();
		HX_STACK_LINE(40)
		this->super::transitionOut();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",41);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(41)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


Void Game2Page_obj::transitionIn( ){
{
		HX_STACK_PUSH("Game2Page::transitionIn","com/shrek/gamebox/pages/Game2Page.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->init();
		HX_STACK_LINE(34)
		this->super::transitionIn();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game2Page.hx",35);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}



Game2Page_obj::Game2Page_obj()
{
}

void Game2Page_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game2Page);
	HX_MARK_MEMBER_NAME(debug,"debug");
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(accelerometer,"accelerometer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game2Page_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(debug,"debug");
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(accelerometer,"accelerometer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Game2Page_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { return accelerometer; }
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onUpdateHandler") ) { return onUpdateHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onResizeHandler") ) { return onResizeHandler_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onEnterFrameHandler") ) { return onEnterFrameHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game2Page_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::nape::util::Debug >(); return inValue; }
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { accelerometer=inValue.Cast< ::native::sensors::Accelerometer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game2Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("debug"));
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("accelerometer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onUpdateHandler"),
	HX_CSTRING("onEnterFrameHandler"),
	HX_CSTRING("onResizeHandler"),
	HX_CSTRING("clear"),
	HX_CSTRING("init"),
	HX_CSTRING("debug"),
	HX_CSTRING("space"),
	HX_CSTRING("accelerometer"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game2Page_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game2Page_obj::__mClass,"__mClass");
};

Class Game2Page_obj::__mClass;

void Game2Page_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.Game2Page"), hx::TCanCast< Game2Page_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Game2Page_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
