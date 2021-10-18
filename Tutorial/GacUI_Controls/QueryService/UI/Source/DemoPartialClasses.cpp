﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::__vwsnf1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(::demo::DemoServiceControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		if ((::vl::__vwsn::This(__vwsnthis_0->self)->demoService != nullptr))
		{
			::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0->self)->demoService)->SetName(::vl::__vwsn::This(__vwsnthis_0->textBox)->GetText());
		}
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::__vwsnf2_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(::demo::DemoServiceControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->GetFont();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::presentation::FontProperties>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_4.Obj())->SetFont(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf3_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::__vwsnf3_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(::demo::DemoServiceControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf3_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiControlSignalEventArgs* arguments) const
	{
		if (((::vl::__vwsn::This(arguments)->controlSignal == ::vl::presentation::compositions::ControlSignal::ParentLineChanged) || (::vl::__vwsn::This(arguments)->controlSignal == ::vl::presentation::compositions::ControlSignal::ServiceAdded)))
		{
			(::vl::__vwsn::This(__vwsnthis_0->self)->demoService = ::vl::__vwsn::RawPtrCast<::IDemoService>(::vl::__vwsn::This(__vwsnthis_0->self)->QueryService(::IDemoService::GetIdentifier())));
			if ((::vl::__vwsn::This(__vwsnthis_0->self)->demoService != nullptr))
			{
				::vl::__vwsn::This(__vwsnthis_0->textBox)->SetText(::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0->self)->demoService)->GetName());
			}
		}
	}

	//-------------------------------------------------------------------

	__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->self)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->self)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription(::demo::DemoServiceControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::DemoServiceControl*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetDisplayFont();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->self; } catch(...){ return static_cast<::demo::DemoServiceControl*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->DisplayFontChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->DisplayFontChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::DemoServiceControl*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = ::vl::Ptr<::IDemoService>();
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->GetName();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0()
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return ::vl::__vwsn::This(__vwsnthis_0->self)->demoService; } catch(...){ return ::vl::Ptr<::IDemoService>(); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->NameChanged, ::vl::Func<void()>(this, &__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0.Obj())->NameChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = ::vl::Ptr<::IDemoService>());
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc3_Demo_demo_MainWindow__IDemoService::__vwsnc3_Demo_demo_MainWindow__IDemoService()
	{
		this->__vwsn_prop_Name = ::vl::WString(L"Name of MainWindow", false);
	}

	::vl::WString __vwsnc3_Demo_demo_MainWindow__IDemoService::GetName()
	{
		return __vwsn_prop_Name;
	}
	void __vwsnc3_Demo_demo_MainWindow__IDemoService::SetName(const ::vl::WString& __vwsn_value_)
	{
		if ((__vwsn_prop_Name != __vwsn_value_))
		{
			(__vwsn_prop_Name = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->NameChanged)();
		}
	}

}

/***********************************************************************
Class (::IDemoService)
***********************************************************************/

::vl::WString IDemoService::GetIdentifier()
{
	return ::vl::WString(L"IDemoService", false);
}

/***********************************************************************
Class (::demo::DemoServiceControlConstructor)
***********************************************************************/

namespace demo
{
	void DemoServiceControlConstructor::__vwsn_demo_DemoServiceControl_Initialize(::demo::DemoServiceControl* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->__vwsn_precompile_0 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(1));
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->textBox = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
		}
		(this->__vwsn_precompile_2 = ::vl::__vwsn::This(this->textBox)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBox)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		(this->__vwsn_precompile_3 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		(this->__vwsn_precompile_4 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidLabelElement>()));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetColor(::vl::__vwsn::Parse<::vl::presentation::Color>(::vl::WString(L"#FFFFFF", false)));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetHorizontalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4.Obj())->SetText(::vl::WString(L"Type and change the title of the window.", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetOwnedElement(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(this->__vwsn_precompile_4));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_3));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->self)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_0));
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->textBox)->TextChanged, __vwsn_event_handler_);
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf2_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf3_Demo_demo_DemoServiceControlConstructor___vwsn_demo_DemoServiceControl_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->self)->ControlSignalTrigerred, __vwsn_event_handler_);
		}
	}

	DemoServiceControlConstructor::DemoServiceControlConstructor()
		: self(static_cast<::demo::DemoServiceControl*>(nullptr))
		, textBox(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_4(::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>())
	{
	}

/***********************************************************************
Class (::demo::DemoServiceControl)
***********************************************************************/

	DemoServiceControl::DemoServiceControl()
		: ::vl::presentation::controls::GuiCustomControl(::vl::presentation::theme::ThemeName::CustomControl)
		, demoService(static_cast<::IDemoService*>(nullptr))
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::DemoServiceControl", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_DemoServiceControl_Initialize(this);
	}

	DemoServiceControl::~DemoServiceControl()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiCustomControl*>(this));
	}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		{
			::vl::__vwsn::This(this->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(640); __vwsn_temp__.y = static_cast<::vl::vint>(480); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_0 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		(this->__vwsn_precompile_2 = new ::demo::DemoServiceControl());
		(this->__vwsn_precompile_3 = ::vl::__vwsn::This(this->__vwsn_precompile_2)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.y = static_cast<::vl::vint>(100); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_2)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->self)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_0));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: self(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::demo::DemoServiceControl*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, demoService(::vl::Ptr<::IDemoService>(new ::vl_workflow_global::__vwsnc3_Demo_demo_MainWindow__IDemoService()))
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::MainWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
		this->__vwsn_instance_ctor_();
	}

	void MainWindow::__vwsn_instance_ctor_()
	{
		::vl::__vwsn::This(this->self)->AddService(::IDemoService::GetIdentifier(), ::vl::Ptr<::vl::reflection::IDescriptable>(::vl::__vwsn::This(this->self)->demoService));
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
