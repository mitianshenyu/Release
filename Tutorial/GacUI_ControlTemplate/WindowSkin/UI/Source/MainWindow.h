﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW
#define VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW

#include "DemoPartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace demo
{
	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf8_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
		friend struct ::vl_workflow_global::__vwsno2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	protected:
		void checkFrame_SelectionChanged(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void buttonNewWindow_Clicked(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
	public:
		MainWindow();
		~MainWindow();

	/* USER_CONTENT_BEGIN(custom members of ::demo::MainWindow) */
	protected:
		vl::collections::List<vl::Ptr<MainWindow>>		openedWindows;
	/* USER_CONTENT_END() */
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
