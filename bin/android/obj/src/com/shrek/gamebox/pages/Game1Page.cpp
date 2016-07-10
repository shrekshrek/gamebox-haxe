#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_shrek_gamebox_pages_Game1Page
#include <com/shrek/gamebox/pages/Game1Page.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_pages_game1_Bullet
#include <com/shrek/gamebox/pages/game1/Bullet.h>
#endif
#ifndef INCLUDED_com_shrek_gamebox_support_CompLib
#include <com/shrek/gamebox/support/CompLib.h>
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
#ifndef INCLUDED_native_display_Sprite
#include <native/display/Sprite.h>
#endif
#ifndef INCLUDED_native_display_Stage
#include <native/display/Stage.h>
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
#ifndef INCLUDED_native_events_MouseEvent
#include <native/events/MouseEvent.h>
#endif
#ifndef INCLUDED_native_geom_Point
#include <native/geom/Point.h>
#endif
namespace com{
namespace shrek{
namespace gamebox{
namespace pages{

Void Game1Page_obj::__construct()
{
HX_STACK_PUSH("Game1Page::new","com/shrek/gamebox/pages/Game1Page.hx",17);
{
	HX_STACK_LINE(50)
	this->frame = (int)0;
	HX_STACK_LINE(48)
	this->isMouseDown = false;
	HX_STACK_LINE(46)
	this->bulletStep = (int)4;
	HX_STACK_LINE(45)
	this->bulletVMin = (int)0;
	HX_STACK_LINE(44)
	this->bulletVMax = (int)0;
	HX_STACK_LINE(43)
	this->flyV = (int)0;
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

Game1Page_obj::~Game1Page_obj() { }

Dynamic Game1Page_obj::__CreateEmpty() { return  new Game1Page_obj; }
hx::ObjectPtr< Game1Page_obj > Game1Page_obj::__new()
{  hx::ObjectPtr< Game1Page_obj > result = new Game1Page_obj();
	result->__construct();
	return result;}

Dynamic Game1Page_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game1Page_obj > result = new Game1Page_obj();
	result->__construct();
	return result;}

Void Game1Page_obj::onBoxClickHandler( ::native::events::MouseEvent event){
{
		HX_STACK_PUSH("Game1Page::onBoxClickHandler","com/shrek/gamebox/pages/Game1Page.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(206)
		Array< ::com::shrek::gamebox::pages::Game1Page > _g = Array_obj< ::com::shrek::gamebox::pages::Game1Page >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		this->messageBox->removeEventListener(::native::events::MouseEvent_obj::CLICK,this->onBoxClickHandler_dyn(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game1Page.hx",209);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::com::shrek::gamebox::pages::Game1Page >,_g)
		Void run(){
			HX_STACK_PUSH("*::_Function_1_2","com/shrek/gamebox/pages/Game1Page.hx",209);
			{
				HX_STACK_LINE(210)
				_g->__get((int)0)->removeChild(_g->__get((int)0)->messageBox);
				HX_STACK_LINE(211)
				_g->__get((int)0)->messageBox = null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(209)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(this->messageBox,0.3,_Function_1_1::Block(),null(),null())->onComplete( Dynamic(new _Function_1_2(_g)),null());
		HX_STACK_LINE(213)
		this->gameRestart();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onBoxClickHandler,(void))

Void Game1Page_obj::gameOver( ){
{
		HX_STACK_PUSH("Game1Page::gameOver","com/shrek/gamebox/pages/Game1Page.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_LINE(192)
		this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null());
		HX_STACK_LINE(193)
		this->get_stage()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDownHandler_dyn(),null());
		HX_STACK_LINE(194)
		this->get_stage()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUpHandler_dyn(),null());
		HX_STACK_LINE(196)
		Float _s = (Float(::Math_obj::floor(((Float(this->frame) / Float(this->get_stage()->frameRate)) * (int)10))) / Float((int)10));		HX_STACK_VAR(_s,"_s");
		HX_STACK_LINE(197)
		this->messageBox = ::com::shrek::gamebox::support::CompLib_obj::createTextBox(((HX_CSTRING("your score:\n") + _s) + HX_CSTRING("s")),(int)400,(int)200,(int)16777215,(int)36);
		HX_STACK_LINE(198)
		this->messageBox->set_x((Float(((::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth - this->messageBox->get_width()))) / Float((int)2)));
		HX_STACK_LINE(199)
		this->messageBox->set_y((Float(((::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight - this->messageBox->get_height()))) / Float((int)2)));
		HX_STACK_LINE(200)
		this->messageBox->set_alpha((int)0);
		HX_STACK_LINE(201)
		this->addChild(this->messageBox);
		HX_STACK_LINE(202)
		this->messageBox->addEventListener(::native::events::MouseEvent_obj::CLICK,this->onBoxClickHandler_dyn(),null(),null(),null());
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game1Page.hx",203);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(203)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(this->messageBox,0.3,_Function_1_1::Block(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game1Page_obj,gameOver,(void))

Void Game1Page_obj::gameRestart( ){
{
		HX_STACK_PUSH("Game1Page::gameRestart","com/shrek/gamebox/pages/Game1Page.hx",171);
		HX_STACK_THIS(this);
		HX_STACK_LINE(172)
		this->frame = (int)1;
		HX_STACK_LINE(173)
		this->isMouseDown = false;
		HX_STACK_LINE(174)
		this->plane->set_x(this->aimPos->x = (Float(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth) / Float((int)2)));
		HX_STACK_LINE(175)
		this->aimPos->y = (Float(::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight) / Float((int)2));
		HX_STACK_LINE(176)
		this->plane->set_y(::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight);
		HX_STACK_LINE(178)
		int _len = this->bullets->get_numChildren();		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			while(((_g < _len))){
				HX_STACK_LINE(179)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(181)
				::com::shrek::gamebox::pages::game1::Bullet _bullet = hx::TCast< com::shrek::gamebox::pages::game1::Bullet >::cast(this->bullets->getChildAt(((_len - (int)1) - i)));		HX_STACK_VAR(_bullet,"_bullet");
				HX_STACK_LINE(182)
				this->bullets->removeChild(_bullet);
			}
		}
		HX_STACK_LINE(185)
		this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(186)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDownHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(187)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUpHandler_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game1Page_obj,gameRestart,(void))

Void Game1Page_obj::addBullet( ){
{
		HX_STACK_PUSH("Game1Page::addBullet","com/shrek/gamebox/pages/Game1Page.hx",151);
		HX_STACK_THIS(this);
		HX_STACK_LINE(152)
		::com::shrek::gamebox::pages::game1::Bullet _bullet = ::com::shrek::gamebox::pages::game1::Bullet_obj::__new();		HX_STACK_VAR(_bullet,"_bullet");
		HX_STACK_LINE(153)
		if (((::Math_obj::random() < 0.5))){
			HX_STACK_LINE(155)
			_bullet->set_x((::Math_obj::random() * ::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth));
			HX_STACK_LINE(156)
			_bullet->set_y((  (((::Math_obj::random() < 0.5))) ? int((int)0) : int(::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight) ));
		}
		else{
			HX_STACK_LINE(159)
			_bullet->set_x((  (((::Math_obj::random() < 0.5))) ? int((int)0) : int(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth) ));
			HX_STACK_LINE(160)
			_bullet->set_y((::Math_obj::random() * ::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight));
		}
		HX_STACK_LINE(163)
		Float _r = ::Math_obj::atan2((this->plane->get_y() - _bullet->get_y()),(this->plane->get_x() - _bullet->get_x()));		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(164)
		Float _d = ((::Math_obj::random() * ((this->bulletVMax - this->bulletVMin))) + this->bulletVMin);		HX_STACK_VAR(_d,"_d");
		HX_STACK_LINE(165)
		_bullet->vx = (::Math_obj::cos(_r) * _d);
		HX_STACK_LINE(166)
		_bullet->vy = (::Math_obj::sin(_r) * _d);
		HX_STACK_LINE(167)
		this->bullets->addChild(_bullet);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game1Page_obj,addBullet,(void))

Void Game1Page_obj::onEnterFrameHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("Game1Page::onEnterFrameHandler","com/shrek/gamebox/pages/Game1Page.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(110)
		(this->frame)++;
		HX_STACK_LINE(111)
		if ((this->isMouseDown)){
			HX_STACK_LINE(113)
			this->aimPos->x = this->get_mouseX();
			HX_STACK_LINE(114)
			this->aimPos->y = this->get_mouseY();
		}
		HX_STACK_LINE(117)
		Float _r = ::Math_obj::atan2((this->aimPos->y - this->plane->get_y()),(this->aimPos->x - this->plane->get_x()));		HX_STACK_VAR(_r,"_r");
		HX_STACK_LINE(119)
		Float _dx = (this->flyV * ::Math_obj::cos(_r));		HX_STACK_VAR(_dx,"_dx");
		HX_STACK_LINE(120)
		if (((::Math_obj::abs((this->aimPos->x - this->plane->get_x())) < ::Math_obj::abs(_dx)))){
			HX_STACK_LINE(121)
			this->plane->set_x(this->aimPos->x);
		}
		else{
			HX_STACK_LINE(125)
			::native::display::Sprite _g = this->plane;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			_g->set_x((_g->get_x() + _dx));
		}
		HX_STACK_LINE(128)
		Float _dy = (this->flyV * ::Math_obj::sin(_r));		HX_STACK_VAR(_dy,"_dy");
		HX_STACK_LINE(129)
		if (((::Math_obj::abs((this->aimPos->y - this->plane->get_y())) < ::Math_obj::abs(_dy)))){
			HX_STACK_LINE(130)
			this->plane->set_y(this->aimPos->y);
		}
		else{
			HX_STACK_LINE(134)
			::native::display::Sprite _g = this->plane;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			_g->set_y((_g->get_y() + _dy));
		}
		HX_STACK_LINE(137)
		int _len = this->bullets->get_numChildren();		HX_STACK_VAR(_len,"_len");
		HX_STACK_LINE(138)
		{
			HX_STACK_LINE(138)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(138)
			while(((_g < _len))){
				HX_STACK_LINE(138)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(140)
				::com::shrek::gamebox::pages::game1::Bullet _bullet = hx::TCast< com::shrek::gamebox::pages::game1::Bullet >::cast(this->bullets->getChildAt(((_len - (int)1) - i)));		HX_STACK_VAR(_bullet,"_bullet");
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					::com::shrek::gamebox::pages::game1::Bullet _g1 = _bullet;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(141)
					_g1->set_x((_g1->get_x() + _bullet->vx));
				}
				HX_STACK_LINE(142)
				{
					HX_STACK_LINE(142)
					::com::shrek::gamebox::pages::game1::Bullet _g1 = _bullet;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(142)
					_g1->set_y((_g1->get_y() + _bullet->vy));
				}
				HX_STACK_LINE(143)
				if ((_bullet->hit->hitTestObject(this->planeHit))){
					HX_STACK_LINE(143)
					this->gameOver();
				}
				HX_STACK_LINE(144)
				if (((bool((bool((bool((_bullet->get_x() < (int)0)) || bool((_bullet->get_x() > ::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth)))) || bool((_bullet->get_y() < (int)0)))) || bool((_bullet->get_y() > ::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight))))){
					HX_STACK_LINE(144)
					this->bullets->removeChild(_bullet);
				}
			}
		}
		HX_STACK_LINE(147)
		if (((hx::Mod(this->frame,this->bulletStep) == (int)0))){
			HX_STACK_LINE(147)
			this->addBullet();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onEnterFrameHandler,(void))

Void Game1Page_obj::onResizeHandler( ::native::events::Event event){
{
		HX_STACK_PUSH("Game1Page::onResizeHandler","com/shrek/gamebox/pages/Game1Page.hx",104);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(104)
		this->set_scaleX(this->set_scaleY(::com::shrek::gamebox::model::Model_obj::get_instance()->stageScale));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onResizeHandler,(void))

Void Game1Page_obj::onMouseUpHandler( ::native::events::MouseEvent event){
{
		HX_STACK_PUSH("Game1Page::onMouseUpHandler","com/shrek/gamebox/pages/Game1Page.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(99)
		this->isMouseDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onMouseUpHandler,(void))

Void Game1Page_obj::onMouseDownHandler( ::native::events::MouseEvent event){
{
		HX_STACK_PUSH("Game1Page::onMouseDownHandler","com/shrek/gamebox/pages/Game1Page.hx",94);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(94)
		this->isMouseDown = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Game1Page_obj,onMouseDownHandler,(void))

Void Game1Page_obj::clear( ){
{
		HX_STACK_PUSH("Game1Page::clear","com/shrek/gamebox/pages/Game1Page.hx",83);
		HX_STACK_THIS(this);
		HX_STACK_LINE(84)
		this->removeEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null());
		HX_STACK_LINE(85)
		this->get_stage()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDownHandler_dyn(),null());
		HX_STACK_LINE(86)
		this->get_stage()->removeEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUpHandler_dyn(),null());
		HX_STACK_LINE(88)
		if (((this->messageBox != null()))){
			HX_STACK_LINE(88)
			this->messageBox->removeEventListener(::native::events::MouseEvent_obj::CLICK,this->onBoxClickHandler_dyn(),null());
		}
		HX_STACK_LINE(90)
		this->get_stage()->removeEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game1Page_obj,clear,(void))

Void Game1Page_obj::init( ){
{
		HX_STACK_PUSH("Game1Page::init","com/shrek/gamebox/pages/Game1Page.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		this->flyV = (int)10;
		HX_STACK_LINE(57)
		this->bulletVMax = ::Std_obj::_int((this->flyV * 0.8));
		HX_STACK_LINE(58)
		this->bulletVMin = ::Std_obj::_int((this->flyV * 0.2));
		HX_STACK_LINE(59)
		this->aimPos = ::native::geom::Point_obj::__new((int)0,(int)0);
		HX_STACK_LINE(60)
		this->frame = (int)1;
		HX_STACK_LINE(61)
		this->isMouseDown = false;
		HX_STACK_LINE(63)
		this->plane = ::com::shrek::gamebox::support::CompLib_obj::getBmpToSprite(HX_CSTRING("images/game1/plane.png"));
		HX_STACK_LINE(64)
		this->planeHit = ::com::shrek::gamebox::support::CompLib_obj::getCircleHit((int)10);
		HX_STACK_LINE(65)
		this->plane->addChild(this->planeHit);
		HX_STACK_LINE(66)
		this->plane->set_x(this->aimPos->x = (Float(::com::shrek::gamebox::model::Model_obj::get_instance()->originWidth) / Float((int)2)));
		HX_STACK_LINE(67)
		this->aimPos->y = (Float(::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight) / Float((int)2));
		HX_STACK_LINE(68)
		this->plane->set_y(::com::shrek::gamebox::model::Model_obj::get_instance()->originHeight);
		HX_STACK_LINE(69)
		this->addChild(this->plane);
		HX_STACK_LINE(71)
		this->bullets = ::native::display::Sprite_obj::__new();
		HX_STACK_LINE(72)
		this->addChild(this->bullets);
		HX_STACK_LINE(74)
		this->addEventListener(::native::events::Event_obj::ENTER_FRAME,this->onEnterFrameHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(75)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDownHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(76)
		this->get_stage()->addEventListener(::native::events::MouseEvent_obj::MOUSE_UP,this->onMouseUpHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(78)
		this->get_stage()->addEventListener(::native::events::Event_obj::RESIZE,this->onResizeHandler_dyn(),null(),null(),null());
		HX_STACK_LINE(79)
		this->onResizeHandler(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Game1Page_obj,init,(void))

Void Game1Page_obj::transitionOut( ){
{
		HX_STACK_PUSH("Game1Page::transitionOut","com/shrek/gamebox/pages/Game1Page.hx",32);
		HX_STACK_THIS(this);
		HX_STACK_LINE(33)
		this->clear();
		HX_STACK_LINE(34)
		this->super::transitionOut();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game1Page.hx",35);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


Void Game1Page_obj::transitionIn( ){
{
		HX_STACK_PUSH("Game1Page::transitionIn","com/shrek/gamebox/pages/Game1Page.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_LINE(27)
		this->init();
		HX_STACK_LINE(28)
		this->super::transitionIn();
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","com/shrek/gamebox/pages/Game1Page.hx",29);
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		::com::eclecticdesignstudio::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}



Game1Page_obj::Game1Page_obj()
{
}

void Game1Page_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game1Page);
	HX_MARK_MEMBER_NAME(messageBox,"messageBox");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(aimPos,"aimPos");
	HX_MARK_MEMBER_NAME(isMouseDown,"isMouseDown");
	HX_MARK_MEMBER_NAME(bulletStep,"bulletStep");
	HX_MARK_MEMBER_NAME(bulletVMin,"bulletVMin");
	HX_MARK_MEMBER_NAME(bulletVMax,"bulletVMax");
	HX_MARK_MEMBER_NAME(flyV,"flyV");
	HX_MARK_MEMBER_NAME(planeHit,"planeHit");
	HX_MARK_MEMBER_NAME(plane,"plane");
	HX_MARK_MEMBER_NAME(bullets,"bullets");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Game1Page_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(messageBox,"messageBox");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(aimPos,"aimPos");
	HX_VISIT_MEMBER_NAME(isMouseDown,"isMouseDown");
	HX_VISIT_MEMBER_NAME(bulletStep,"bulletStep");
	HX_VISIT_MEMBER_NAME(bulletVMin,"bulletVMin");
	HX_VISIT_MEMBER_NAME(bulletVMax,"bulletVMax");
	HX_VISIT_MEMBER_NAME(flyV,"flyV");
	HX_VISIT_MEMBER_NAME(planeHit,"planeHit");
	HX_VISIT_MEMBER_NAME(plane,"plane");
	HX_VISIT_MEMBER_NAME(bullets,"bullets");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Game1Page_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"flyV") ) { return flyV; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"plane") ) { return plane; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"aimPos") ) { return aimPos; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { return bullets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver_dyn(); }
		if (HX_FIELD_EQ(inName,"planeHit") ) { return planeHit; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBullet") ) { return addBullet_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"messageBox") ) { return messageBox; }
		if (HX_FIELD_EQ(inName,"bulletStep") ) { return bulletStep; }
		if (HX_FIELD_EQ(inName,"bulletVMin") ) { return bulletVMin; }
		if (HX_FIELD_EQ(inName,"bulletVMax") ) { return bulletVMax; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"gameRestart") ) { return gameRestart_dyn(); }
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { return isMouseDown; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onResizeHandler") ) { return onResizeHandler_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onMouseUpHandler") ) { return onMouseUpHandler_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onBoxClickHandler") ) { return onBoxClickHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onMouseDownHandler") ) { return onMouseDownHandler_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onEnterFrameHandler") ) { return onEnterFrameHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game1Page_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flyV") ) { flyV=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plane") ) { plane=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"aimPos") ) { aimPos=inValue.Cast< ::native::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { bullets=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"planeHit") ) { planeHit=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"messageBox") ) { messageBox=inValue.Cast< ::native::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletStep") ) { bulletStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletVMin") ) { bulletVMin=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletVMax") ) { bulletVMax=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isMouseDown") ) { isMouseDown=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game1Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("messageBox"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("aimPos"));
	outFields->push(HX_CSTRING("isMouseDown"));
	outFields->push(HX_CSTRING("bulletStep"));
	outFields->push(HX_CSTRING("bulletVMin"));
	outFields->push(HX_CSTRING("bulletVMax"));
	outFields->push(HX_CSTRING("flyV"));
	outFields->push(HX_CSTRING("planeHit"));
	outFields->push(HX_CSTRING("plane"));
	outFields->push(HX_CSTRING("bullets"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("onBoxClickHandler"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("gameRestart"),
	HX_CSTRING("addBullet"),
	HX_CSTRING("onEnterFrameHandler"),
	HX_CSTRING("onResizeHandler"),
	HX_CSTRING("onMouseUpHandler"),
	HX_CSTRING("onMouseDownHandler"),
	HX_CSTRING("clear"),
	HX_CSTRING("init"),
	HX_CSTRING("messageBox"),
	HX_CSTRING("frame"),
	HX_CSTRING("aimPos"),
	HX_CSTRING("isMouseDown"),
	HX_CSTRING("bulletStep"),
	HX_CSTRING("bulletVMin"),
	HX_CSTRING("bulletVMax"),
	HX_CSTRING("flyV"),
	HX_CSTRING("planeHit"),
	HX_CSTRING("plane"),
	HX_CSTRING("bullets"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game1Page_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game1Page_obj::__mClass,"__mClass");
};

Class Game1Page_obj::__mClass;

void Game1Page_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.shrek.gamebox.pages.Game1Page"), hx::TCanCast< Game1Page_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Game1Page_obj::__boot()
{
}

} // end namespace com
} // end namespace shrek
} // end namespace gamebox
} // end namespace pages
