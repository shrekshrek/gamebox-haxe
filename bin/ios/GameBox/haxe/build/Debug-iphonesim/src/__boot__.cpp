#include <hxcpp.h>

#include <sys/io/Process.h>
#include <sys/io/_Process/Stdout.h>
#include <sys/io/_Process/Stdin.h>
#include <sys/io/FileSeek.h>
#include <sys/io/FileOutput.h>
#include <sys/io/FileInput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <nme/installer/Assets.h>
#include <nme/VectorHelper.h>
#include <nme/Lib.h>
#include <native/utils/WeakRef.h>
#include <native/utils/Timer.h>
#include <native/utils/Float32Array.h>
#include <native/utils/Endian.h>
#include <native/utils/CompressionAlgorithm.h>
#include <native/utils/ByteArray.h>
#include <native/utils/IDataInput.h>
#include <native/utils/ArrayBufferView.h>
#include <native/utils/IMemoryRange.h>
#include <native/ui/MultitouchInputMode.h>
#include <native/ui/Multitouch.h>
#include <native/text/TextFormat.h>
#include <native/text/TextFieldType.h>
#include <native/text/TextFieldAutoSize.h>
#include <native/text/TextField.h>
#include <native/text/FontType.h>
#include <native/text/FontStyle.h>
#include <native/text/Font.h>
#include <native/text/AntiAliasType.h>
#include <native/net/URLVariables.h>
#include <native/net/URLRequestMethod.h>
#include <native/net/URLRequestHeader.h>
#include <native/net/URLRequest.h>
#include <native/net/URLLoaderDataFormat.h>
#include <native/net/URLLoader.h>
#include <native/media/SoundTransform.h>
#include <native/media/SoundLoaderContext.h>
#include <native/media/SoundChannel.h>
#include <native/media/Sound.h>
#include <native/media/ID3Info.h>
#include <native/gl/Texture.h>
#include <native/gl/Shader.h>
#include <native/gl/Renderbuffer.h>
#include <native/gl/Program.h>
#include <native/gl/Framebuffer.h>
#include <native/gl/Buffer.h>
#include <native/gl/Object.h>
#include <native/gl/GL.h>
#include <native/geom/Vector3D.h>
#include <native/geom/Transform.h>
#include <native/geom/Rectangle.h>
#include <native/geom/Point.h>
#include <native/geom/Matrix3D.h>
#include <native/geom/Matrix.h>
#include <native/geom/ColorTransform.h>
#include <native/filters/BitmapFilter.h>
#include <native/events/TimerEvent.h>
#include <native/events/SampleDataEvent.h>
#include <native/events/ProgressEvent.h>
#include <native/events/KeyboardEvent.h>
#include <native/events/JoystickEvent.h>
#include <native/events/IOErrorEvent.h>
#include <native/events/HTTPStatusEvent.h>
#include <native/events/FocusEvent.h>
#include <native/events/EventPhase.h>
#include <native/events/Listener.h>
#include <native/events/ErrorEvent.h>
#include <native/events/TextEvent.h>
#include <native/errors/RangeError.h>
#include <native/errors/EOFError.h>
#include <native/errors/ArgumentError.h>
#include <native/errors/Error.h>
#include <native/display3D/textures/Texture.h>
#include <native/display3D/textures/CubeTexture.h>
#include <native/display3D/textures/TextureBase.h>
#include <native/display3D/VertexBuffer3D.h>
#include <native/display3D/Program3D.h>
#include <native/display3D/IndexBuffer3D.h>
#include <native/display3D/Context3DVertexBufferFormat.h>
#include <native/display3D/Context3DTriangleFace.h>
#include <native/display3D/Context3DTextureFormat.h>
#include <native/display3D/Context3DStencilAction.h>
#include <native/display3D/Context3DProgramType.h>
#include <native/display3D/Context3DCompareMode.h>
#include <native/display3D/Context3DClearMask.h>
#include <native/display3D/Context3D.h>
#include <native/display/TriangleCulling.h>
#include <native/display/Tilesheet.h>
#include <native/display/StageScaleMode.h>
#include <native/display/StageQuality.h>
#include <native/display/StageDisplayState.h>
#include <native/display/StageAlign.h>
#include <native/display/Stage3D.h>
#include <native/display/TouchInfo.h>
#include <native/display/SpreadMethod.h>
#include <native/display/Shape.h>
#include <native/display/PixelSnapping.h>
#include <native/display/OpenGLView.h>
#include <native/display/MovieClip.h>
#include <native/display/ManagedStage.h>
#include <native/display/Stage.h>
#include <native/events/TouchEvent.h>
#include <native/events/MouseEvent.h>
#include <native/display/LineScaleMode.h>
#include <native/display/JointStyle.h>
#include <native/display/InterpolationMethod.h>
#include <native/display/IGraphicsData.h>
#include <native/display/GraphicsPathWinding.h>
#include <native/display/Graphics.h>
#include <native/display/GradientType.h>
#include <native/display/DirectRenderer.h>
#include <native/display/CapsStyle.h>
#include <native/display/BlendMode.h>
#include <native/display/OptimizedPerlin.h>
#include <native/display/BitmapData.h>
#include <native/display/Bitmap.h>
#include <native/Lib.h>
#include <haxe/io/Output.h>
#include <haxe/io/Input.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/BytesBuffer.h>
#include <haxe/io/Bytes.h>
#include <haxe/Unserializer.h>
#include <haxe/Timer.h>
#include <haxe/Log.h>
#include <format/display/MovieClip.h>
#include <format/display/FrameLabel.h>
#include <cpp/zip/Uncompress.h>
#include <cpp/zip/Flush.h>
#include <cpp/zip/Compress.h>
#include <cpp/rtti/FieldNumericIntegerLookup.h>
#include <com/shrek/gamebox/support/CompLib.h>
#include <com/shrek/gamebox/pages/Pages.h>
#include <com/shrek/gamebox/pages/NavPage.h>
#include <com/shrek/gamebox/pages/IndexPage.h>
#include <com/shrek/gamebox/pages/HomePage.h>
#include <com/shrek/gamebox/pages/Game2Page.h>
#include <com/shrek/gamebox/pages/Game1Page.h>
#include <com/shrek/gamebox/pages/ConfigPage.h>
#include <com/shrek/gamebox/pages/AboutPage.h>
#include <com/shrek/gamebox/Main.h>
#include <com/eclecticdesignstudio/motion/easing/QuartEaseOut.h>
#include <com/eclecticdesignstudio/motion/easing/QuartEaseInOut.h>
#include <com/eclecticdesignstudio/motion/easing/QuartEaseIn.h>
#include <com/eclecticdesignstudio/motion/easing/Quart.h>
#include <com/eclecticdesignstudio/motion/easing/ExpoEaseInOut.h>
#include <com/eclecticdesignstudio/motion/easing/ExpoEaseIn.h>
#include <com/eclecticdesignstudio/motion/actuators/TransformActuator.h>
#include <com/eclecticdesignstudio/motion/actuators/PropertyPathDetails.h>
#include <com/eclecticdesignstudio/motion/actuators/PropertyDetails.h>
#include <com/eclecticdesignstudio/motion/actuators/MotionPathActuator.h>
#include <com/eclecticdesignstudio/motion/actuators/MethodActuator.h>
#include <com/eclecticdesignstudio/motion/actuators/FilterActuator.h>
#include <com/eclecticdesignstudio/motion/LinearPath.h>
#include <com/eclecticdesignstudio/motion/BezierPath.h>
#include <com/eclecticdesignstudio/motion/ComponentPath.h>
#include <com/eclecticdesignstudio/motion/IComponentPath.h>
#include <com/eclecticdesignstudio/motion/MotionPath.h>
#include <com/eclecticdesignstudio/motion/_Actuate/TweenTimer.h>
#include <com/eclecticdesignstudio/motion/_Actuate/TransformOptions.h>
#include <com/eclecticdesignstudio/motion/_Actuate/EffectsOptions.h>
#include <com/eclecticdesignstudio/motion/Actuate.h>
#include <com/eclecticdesignstudio/motion/_Actuate/ObjectHash.h>
#include <com/eclecticdesignstudio/motion/easing/ExpoEaseOut.h>
#include <com/eclecticdesignstudio/motion/easing/IEasing.h>
#include <com/eclecticdesignstudio/motion/easing/Expo.h>
#include <com/eclecticdesignstudio/motion/actuators/SimpleActuator.h>
#include <com/eclecticdesignstudio/motion/actuators/GenericActuator.h>
#include <com/eclecticdesignstudio/motion/actuators/IGenericActuator.h>
#include <com/appframework/templates/AbstractPage.h>
#include <com/appframework/flow/ReverseFlow.h>
#include <com/appframework/flow/NormalFlow.h>
#include <com/appframework/flow/FlowManager.h>
#include <com/appframework/flow/CrossFlow.h>
#include <com/appframework/events/PageEvent.h>
#include <com/appframework/events/BranchLoaderEvent.h>
#include <com/appframework/events/AppEvent.h>
#include <native/events/Event.h>
#include <com/appframework/core/TransitionController.h>
#include <com/appframework/core/BranchTools.h>
#include <com/appframework/core/BranchManager.h>
#include <com/appframework/core/BranchLoader.h>
#include <com/appframework/core/BranchIterator.h>
#include <com/appframework/core/AppView.h>
#include <com/appframework/core/AppModel.h>
#include <com/appframework/core/AppMain.h>
#include <native/display/Sprite.h>
#include <native/display/DisplayObjectContainer.h>
#include <native/display/InteractiveObject.h>
#include <native/display/DisplayObject.h>
#include <native/Loader.h>
#include <native/display/IBitmapDrawable.h>
#include <com/appframework/core/AppImpl.h>
#include <com/appframework/core/AppHQListener.h>
#include <com/appframework/core/AppHQ.h>
#include <com/appframework/core/AppController.h>
#include <com/appframework/assets/PageAsset.h>
#include <native/events/EventDispatcher.h>
#include <native/events/IEventDispatcher.h>
#include <com/appframework/api/App.h>
#include <Xml.h>
#include <XmlType.h>
#include <Type.h>
#include <ValueType.h>
#include <Sys.h>
#include <cpp/Lib.h>
#include <StringTools.h>
#include <StringBuf.h>
#include <Std.h>
#include <Reflect.h>
#include <List.h>
#include <IntIter.h>
#include <IntHash.h>
#include <Hash.h>
#include <Date.h>
#include <ApplicationMain.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::sys::io::Process_obj::__register();
::sys::io::_Process::Stdout_obj::__register();
::sys::io::_Process::Stdin_obj::__register();
::sys::io::FileSeek_obj::__register();
::sys::io::FileOutput_obj::__register();
::sys::io::FileInput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::nme::installer::Assets_obj::__register();
::nme::VectorHelper_obj::__register();
::nme::Lib_obj::__register();
::native::utils::WeakRef_obj::__register();
::native::utils::Timer_obj::__register();
::native::utils::Float32Array_obj::__register();
::native::utils::Endian_obj::__register();
::native::utils::CompressionAlgorithm_obj::__register();
::native::utils::ByteArray_obj::__register();
::native::utils::IDataInput_obj::__register();
::native::utils::ArrayBufferView_obj::__register();
::native::utils::IMemoryRange_obj::__register();
::native::ui::MultitouchInputMode_obj::__register();
::native::ui::Multitouch_obj::__register();
::native::text::TextFormat_obj::__register();
::native::text::TextFieldType_obj::__register();
::native::text::TextFieldAutoSize_obj::__register();
::native::text::TextField_obj::__register();
::native::text::FontType_obj::__register();
::native::text::FontStyle_obj::__register();
::native::text::Font_obj::__register();
::native::text::AntiAliasType_obj::__register();
::native::net::URLVariables_obj::__register();
::native::net::URLRequestMethod_obj::__register();
::native::net::URLRequestHeader_obj::__register();
::native::net::URLRequest_obj::__register();
::native::net::URLLoaderDataFormat_obj::__register();
::native::net::URLLoader_obj::__register();
::native::media::SoundTransform_obj::__register();
::native::media::SoundLoaderContext_obj::__register();
::native::media::SoundChannel_obj::__register();
::native::media::Sound_obj::__register();
::native::media::ID3Info_obj::__register();
::native::gl::Texture_obj::__register();
::native::gl::Shader_obj::__register();
::native::gl::Renderbuffer_obj::__register();
::native::gl::Program_obj::__register();
::native::gl::Framebuffer_obj::__register();
::native::gl::Buffer_obj::__register();
::native::gl::Object_obj::__register();
::native::gl::GL_obj::__register();
::native::geom::Vector3D_obj::__register();
::native::geom::Transform_obj::__register();
::native::geom::Rectangle_obj::__register();
::native::geom::Point_obj::__register();
::native::geom::Matrix3D_obj::__register();
::native::geom::Matrix_obj::__register();
::native::geom::ColorTransform_obj::__register();
::native::filters::BitmapFilter_obj::__register();
::native::events::TimerEvent_obj::__register();
::native::events::SampleDataEvent_obj::__register();
::native::events::ProgressEvent_obj::__register();
::native::events::KeyboardEvent_obj::__register();
::native::events::JoystickEvent_obj::__register();
::native::events::IOErrorEvent_obj::__register();
::native::events::HTTPStatusEvent_obj::__register();
::native::events::FocusEvent_obj::__register();
::native::events::EventPhase_obj::__register();
::native::events::Listener_obj::__register();
::native::events::ErrorEvent_obj::__register();
::native::events::TextEvent_obj::__register();
::native::errors::RangeError_obj::__register();
::native::errors::EOFError_obj::__register();
::native::errors::ArgumentError_obj::__register();
::native::errors::Error_obj::__register();
::native::display3D::textures::Texture_obj::__register();
::native::display3D::textures::CubeTexture_obj::__register();
::native::display3D::textures::TextureBase_obj::__register();
::native::display3D::VertexBuffer3D_obj::__register();
::native::display3D::Program3D_obj::__register();
::native::display3D::IndexBuffer3D_obj::__register();
::native::display3D::Context3DVertexBufferFormat_obj::__register();
::native::display3D::Context3DTriangleFace_obj::__register();
::native::display3D::Context3DTextureFormat_obj::__register();
::native::display3D::Context3DStencilAction_obj::__register();
::native::display3D::Context3DProgramType_obj::__register();
::native::display3D::Context3DCompareMode_obj::__register();
::native::display3D::Context3DClearMask_obj::__register();
::native::display3D::Context3D_obj::__register();
::native::display::TriangleCulling_obj::__register();
::native::display::Tilesheet_obj::__register();
::native::display::StageScaleMode_obj::__register();
::native::display::StageQuality_obj::__register();
::native::display::StageDisplayState_obj::__register();
::native::display::StageAlign_obj::__register();
::native::display::Stage3D_obj::__register();
::native::display::TouchInfo_obj::__register();
::native::display::SpreadMethod_obj::__register();
::native::display::Shape_obj::__register();
::native::display::PixelSnapping_obj::__register();
::native::display::OpenGLView_obj::__register();
::native::display::MovieClip_obj::__register();
::native::display::ManagedStage_obj::__register();
::native::display::Stage_obj::__register();
::native::events::TouchEvent_obj::__register();
::native::events::MouseEvent_obj::__register();
::native::display::LineScaleMode_obj::__register();
::native::display::JointStyle_obj::__register();
::native::display::InterpolationMethod_obj::__register();
::native::display::IGraphicsData_obj::__register();
::native::display::GraphicsPathWinding_obj::__register();
::native::display::Graphics_obj::__register();
::native::display::GradientType_obj::__register();
::native::display::DirectRenderer_obj::__register();
::native::display::CapsStyle_obj::__register();
::native::display::BlendMode_obj::__register();
::native::display::OptimizedPerlin_obj::__register();
::native::display::BitmapData_obj::__register();
::native::display::Bitmap_obj::__register();
::native::Lib_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Input_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::Unserializer_obj::__register();
::haxe::Timer_obj::__register();
::haxe::Log_obj::__register();
::format::display::MovieClip_obj::__register();
::format::display::FrameLabel_obj::__register();
::cpp::zip::Uncompress_obj::__register();
::cpp::zip::Flush_obj::__register();
::cpp::zip::Compress_obj::__register();
::cpp::rtti::FieldNumericIntegerLookup_obj::__register();
::com::shrek::gamebox::support::CompLib_obj::__register();
::com::shrek::gamebox::pages::Pages_obj::__register();
::com::shrek::gamebox::pages::NavPage_obj::__register();
::com::shrek::gamebox::pages::IndexPage_obj::__register();
::com::shrek::gamebox::pages::HomePage_obj::__register();
::com::shrek::gamebox::pages::Game2Page_obj::__register();
::com::shrek::gamebox::pages::Game1Page_obj::__register();
::com::shrek::gamebox::pages::ConfigPage_obj::__register();
::com::shrek::gamebox::pages::AboutPage_obj::__register();
::com::shrek::gamebox::Main_obj::__register();
::com::eclecticdesignstudio::motion::easing::QuartEaseOut_obj::__register();
::com::eclecticdesignstudio::motion::easing::QuartEaseInOut_obj::__register();
::com::eclecticdesignstudio::motion::easing::QuartEaseIn_obj::__register();
::com::eclecticdesignstudio::motion::easing::Quart_obj::__register();
::com::eclecticdesignstudio::motion::easing::ExpoEaseInOut_obj::__register();
::com::eclecticdesignstudio::motion::easing::ExpoEaseIn_obj::__register();
::com::eclecticdesignstudio::motion::actuators::TransformActuator_obj::__register();
::com::eclecticdesignstudio::motion::actuators::PropertyPathDetails_obj::__register();
::com::eclecticdesignstudio::motion::actuators::PropertyDetails_obj::__register();
::com::eclecticdesignstudio::motion::actuators::MotionPathActuator_obj::__register();
::com::eclecticdesignstudio::motion::actuators::MethodActuator_obj::__register();
::com::eclecticdesignstudio::motion::actuators::FilterActuator_obj::__register();
::com::eclecticdesignstudio::motion::LinearPath_obj::__register();
::com::eclecticdesignstudio::motion::BezierPath_obj::__register();
::com::eclecticdesignstudio::motion::ComponentPath_obj::__register();
::com::eclecticdesignstudio::motion::IComponentPath_obj::__register();
::com::eclecticdesignstudio::motion::MotionPath_obj::__register();
::com::eclecticdesignstudio::motion::_Actuate::TweenTimer_obj::__register();
::com::eclecticdesignstudio::motion::_Actuate::TransformOptions_obj::__register();
::com::eclecticdesignstudio::motion::_Actuate::EffectsOptions_obj::__register();
::com::eclecticdesignstudio::motion::Actuate_obj::__register();
::com::eclecticdesignstudio::motion::_Actuate::ObjectHash_obj::__register();
::com::eclecticdesignstudio::motion::easing::ExpoEaseOut_obj::__register();
::com::eclecticdesignstudio::motion::easing::IEasing_obj::__register();
::com::eclecticdesignstudio::motion::easing::Expo_obj::__register();
::com::eclecticdesignstudio::motion::actuators::SimpleActuator_obj::__register();
::com::eclecticdesignstudio::motion::actuators::GenericActuator_obj::__register();
::com::eclecticdesignstudio::motion::actuators::IGenericActuator_obj::__register();
::com::appframework::templates::AbstractPage_obj::__register();
::com::appframework::flow::ReverseFlow_obj::__register();
::com::appframework::flow::NormalFlow_obj::__register();
::com::appframework::flow::FlowManager_obj::__register();
::com::appframework::flow::CrossFlow_obj::__register();
::com::appframework::events::PageEvent_obj::__register();
::com::appframework::events::BranchLoaderEvent_obj::__register();
::com::appframework::events::AppEvent_obj::__register();
::native::events::Event_obj::__register();
::com::appframework::core::TransitionController_obj::__register();
::com::appframework::core::BranchTools_obj::__register();
::com::appframework::core::BranchManager_obj::__register();
::com::appframework::core::BranchLoader_obj::__register();
::com::appframework::core::BranchIterator_obj::__register();
::com::appframework::core::AppView_obj::__register();
::com::appframework::core::AppModel_obj::__register();
::com::appframework::core::AppMain_obj::__register();
::native::display::Sprite_obj::__register();
::native::display::DisplayObjectContainer_obj::__register();
::native::display::InteractiveObject_obj::__register();
::native::display::DisplayObject_obj::__register();
::native::Loader_obj::__register();
::native::display::IBitmapDrawable_obj::__register();
::com::appframework::core::AppImpl_obj::__register();
::com::appframework::core::AppHQListener_obj::__register();
::com::appframework::core::AppHQ_obj::__register();
::com::appframework::core::AppController_obj::__register();
::com::appframework::assets::PageAsset_obj::__register();
::native::events::EventDispatcher_obj::__register();
::native::events::IEventDispatcher_obj::__register();
::com::appframework::api::App_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::Sys_obj::__register();
::cpp::Lib_obj::__register();
::StringTools_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::List_obj::__register();
::IntIter_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::Date_obj::__register();
::ApplicationMain_obj::__register();
::Xml_obj::__init__();
::native::ui::Multitouch_obj::__init__();
::native::utils::ByteArray_obj::__init__();
::cpp::Lib_obj::__boot();
::Xml_obj::__boot();
::cpp::rtti::FieldNumericIntegerLookup_obj::__boot();
::cpp::zip::Compress_obj::__boot();
::cpp::zip::Flush_obj::__boot();
::cpp::zip::Uncompress_obj::__boot();
::haxe::Log_obj::__boot();
::ApplicationMain_obj::__boot();
::Date_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::IntIter_obj::__boot();
::List_obj::__boot();
::Reflect_obj::__boot();
::Std_obj::__boot();
::StringBuf_obj::__boot();
::StringTools_obj::__boot();
::Sys_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::XmlType_obj::__boot();
::com::appframework::api::App_obj::__boot();
::native::events::IEventDispatcher_obj::__boot();
::native::events::EventDispatcher_obj::__boot();
::com::appframework::assets::PageAsset_obj::__boot();
::com::appframework::core::AppController_obj::__boot();
::com::appframework::core::AppHQ_obj::__boot();
::com::appframework::core::AppHQListener_obj::__boot();
::com::appframework::core::AppImpl_obj::__boot();
::native::display::IBitmapDrawable_obj::__boot();
::native::Loader_obj::__boot();
::native::display::DisplayObject_obj::__boot();
::native::display::InteractiveObject_obj::__boot();
::native::display::DisplayObjectContainer_obj::__boot();
::native::display::Sprite_obj::__boot();
::com::appframework::core::AppMain_obj::__boot();
::com::appframework::core::AppModel_obj::__boot();
::com::appframework::core::AppView_obj::__boot();
::com::appframework::core::BranchIterator_obj::__boot();
::com::appframework::core::BranchLoader_obj::__boot();
::com::appframework::core::BranchManager_obj::__boot();
::com::appframework::core::BranchTools_obj::__boot();
::com::appframework::core::TransitionController_obj::__boot();
::native::events::Event_obj::__boot();
::com::appframework::events::AppEvent_obj::__boot();
::com::appframework::events::BranchLoaderEvent_obj::__boot();
::com::appframework::events::PageEvent_obj::__boot();
::com::appframework::flow::CrossFlow_obj::__boot();
::com::appframework::flow::FlowManager_obj::__boot();
::com::appframework::flow::NormalFlow_obj::__boot();
::com::appframework::flow::ReverseFlow_obj::__boot();
::com::appframework::templates::AbstractPage_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::IGenericActuator_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::GenericActuator_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::SimpleActuator_obj::__boot();
::com::eclecticdesignstudio::motion::easing::Expo_obj::__boot();
::com::eclecticdesignstudio::motion::easing::IEasing_obj::__boot();
::com::eclecticdesignstudio::motion::easing::ExpoEaseOut_obj::__boot();
::com::eclecticdesignstudio::motion::_Actuate::ObjectHash_obj::__boot();
::com::eclecticdesignstudio::motion::Actuate_obj::__boot();
::com::eclecticdesignstudio::motion::_Actuate::EffectsOptions_obj::__boot();
::com::eclecticdesignstudio::motion::_Actuate::TransformOptions_obj::__boot();
::com::eclecticdesignstudio::motion::_Actuate::TweenTimer_obj::__boot();
::com::eclecticdesignstudio::motion::MotionPath_obj::__boot();
::com::eclecticdesignstudio::motion::IComponentPath_obj::__boot();
::com::eclecticdesignstudio::motion::ComponentPath_obj::__boot();
::com::eclecticdesignstudio::motion::BezierPath_obj::__boot();
::com::eclecticdesignstudio::motion::LinearPath_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::FilterActuator_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::MethodActuator_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::MotionPathActuator_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::PropertyDetails_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::PropertyPathDetails_obj::__boot();
::com::eclecticdesignstudio::motion::actuators::TransformActuator_obj::__boot();
::com::eclecticdesignstudio::motion::easing::ExpoEaseIn_obj::__boot();
::com::eclecticdesignstudio::motion::easing::ExpoEaseInOut_obj::__boot();
::com::eclecticdesignstudio::motion::easing::Quart_obj::__boot();
::com::eclecticdesignstudio::motion::easing::QuartEaseIn_obj::__boot();
::com::eclecticdesignstudio::motion::easing::QuartEaseInOut_obj::__boot();
::com::eclecticdesignstudio::motion::easing::QuartEaseOut_obj::__boot();
::com::shrek::gamebox::Main_obj::__boot();
::com::shrek::gamebox::pages::AboutPage_obj::__boot();
::com::shrek::gamebox::pages::ConfigPage_obj::__boot();
::com::shrek::gamebox::pages::Game1Page_obj::__boot();
::com::shrek::gamebox::pages::Game2Page_obj::__boot();
::com::shrek::gamebox::pages::HomePage_obj::__boot();
::com::shrek::gamebox::pages::IndexPage_obj::__boot();
::com::shrek::gamebox::pages::NavPage_obj::__boot();
::com::shrek::gamebox::pages::Pages_obj::__boot();
::com::shrek::gamebox::support::CompLib_obj::__boot();
::format::display::FrameLabel_obj::__boot();
::format::display::MovieClip_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::Unserializer_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Input_obj::__boot();
::haxe::io::Output_obj::__boot();
::native::Lib_obj::__boot();
::native::display::Bitmap_obj::__boot();
::native::display::BitmapData_obj::__boot();
::native::display::OptimizedPerlin_obj::__boot();
::native::display::BlendMode_obj::__boot();
::native::display::CapsStyle_obj::__boot();
::native::display::DirectRenderer_obj::__boot();
::native::display::GradientType_obj::__boot();
::native::display::Graphics_obj::__boot();
::native::display::GraphicsPathWinding_obj::__boot();
::native::display::IGraphicsData_obj::__boot();
::native::display::InterpolationMethod_obj::__boot();
::native::display::JointStyle_obj::__boot();
::native::display::LineScaleMode_obj::__boot();
::native::events::MouseEvent_obj::__boot();
::native::events::TouchEvent_obj::__boot();
::native::display::Stage_obj::__boot();
::native::display::ManagedStage_obj::__boot();
::native::display::MovieClip_obj::__boot();
::native::display::OpenGLView_obj::__boot();
::native::display::PixelSnapping_obj::__boot();
::native::display::Shape_obj::__boot();
::native::display::SpreadMethod_obj::__boot();
::native::display::TouchInfo_obj::__boot();
::native::display::Stage3D_obj::__boot();
::native::display::StageAlign_obj::__boot();
::native::display::StageDisplayState_obj::__boot();
::native::display::StageQuality_obj::__boot();
::native::display::StageScaleMode_obj::__boot();
::native::display::Tilesheet_obj::__boot();
::native::display::TriangleCulling_obj::__boot();
::native::display3D::Context3D_obj::__boot();
::native::display3D::Context3DClearMask_obj::__boot();
::native::display3D::Context3DCompareMode_obj::__boot();
::native::display3D::Context3DProgramType_obj::__boot();
::native::display3D::Context3DStencilAction_obj::__boot();
::native::display3D::Context3DTextureFormat_obj::__boot();
::native::display3D::Context3DTriangleFace_obj::__boot();
::native::display3D::Context3DVertexBufferFormat_obj::__boot();
::native::display3D::IndexBuffer3D_obj::__boot();
::native::display3D::Program3D_obj::__boot();
::native::display3D::VertexBuffer3D_obj::__boot();
::native::display3D::textures::TextureBase_obj::__boot();
::native::display3D::textures::CubeTexture_obj::__boot();
::native::display3D::textures::Texture_obj::__boot();
::native::errors::Error_obj::__boot();
::native::errors::ArgumentError_obj::__boot();
::native::errors::EOFError_obj::__boot();
::native::errors::RangeError_obj::__boot();
::native::events::TextEvent_obj::__boot();
::native::events::ErrorEvent_obj::__boot();
::native::events::Listener_obj::__boot();
::native::events::EventPhase_obj::__boot();
::native::events::FocusEvent_obj::__boot();
::native::events::HTTPStatusEvent_obj::__boot();
::native::events::IOErrorEvent_obj::__boot();
::native::events::JoystickEvent_obj::__boot();
::native::events::KeyboardEvent_obj::__boot();
::native::events::ProgressEvent_obj::__boot();
::native::events::SampleDataEvent_obj::__boot();
::native::events::TimerEvent_obj::__boot();
::native::filters::BitmapFilter_obj::__boot();
::native::geom::ColorTransform_obj::__boot();
::native::geom::Matrix_obj::__boot();
::native::geom::Matrix3D_obj::__boot();
::native::geom::Point_obj::__boot();
::native::geom::Rectangle_obj::__boot();
::native::geom::Transform_obj::__boot();
::native::geom::Vector3D_obj::__boot();
::native::gl::GL_obj::__boot();
::native::gl::Object_obj::__boot();
::native::gl::Buffer_obj::__boot();
::native::gl::Framebuffer_obj::__boot();
::native::gl::Program_obj::__boot();
::native::gl::Renderbuffer_obj::__boot();
::native::gl::Shader_obj::__boot();
::native::gl::Texture_obj::__boot();
::native::media::ID3Info_obj::__boot();
::native::media::Sound_obj::__boot();
::native::media::SoundChannel_obj::__boot();
::native::media::SoundLoaderContext_obj::__boot();
::native::media::SoundTransform_obj::__boot();
::native::net::URLLoader_obj::__boot();
::native::net::URLLoaderDataFormat_obj::__boot();
::native::net::URLRequest_obj::__boot();
::native::net::URLRequestHeader_obj::__boot();
::native::net::URLRequestMethod_obj::__boot();
::native::net::URLVariables_obj::__boot();
::native::text::AntiAliasType_obj::__boot();
::native::text::Font_obj::__boot();
::native::text::FontStyle_obj::__boot();
::native::text::FontType_obj::__boot();
::native::text::TextField_obj::__boot();
::native::text::TextFieldAutoSize_obj::__boot();
::native::text::TextFieldType_obj::__boot();
::native::text::TextFormat_obj::__boot();
::native::ui::Multitouch_obj::__boot();
::native::ui::MultitouchInputMode_obj::__boot();
::native::utils::IMemoryRange_obj::__boot();
::native::utils::ArrayBufferView_obj::__boot();
::native::utils::IDataInput_obj::__boot();
::native::utils::ByteArray_obj::__boot();
::native::utils::CompressionAlgorithm_obj::__boot();
::native::utils::Endian_obj::__boot();
::native::utils::Float32Array_obj::__boot();
::native::utils::Timer_obj::__boot();
::native::utils::WeakRef_obj::__boot();
::nme::Lib_obj::__boot();
::nme::VectorHelper_obj::__boot();
::nme::installer::Assets_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileInput_obj::__boot();
::sys::io::FileOutput_obj::__boot();
::sys::io::FileSeek_obj::__boot();
::sys::io::_Process::Stdin_obj::__boot();
::sys::io::_Process::Stdout_obj::__boot();
::sys::io::Process_obj::__boot();
}

