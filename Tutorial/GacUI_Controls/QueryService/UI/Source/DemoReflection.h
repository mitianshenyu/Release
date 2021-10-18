﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_DEMOREFLECTION

#include "Demo.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::IDemoService)
			DECL_TYPE_INFO(::demo::DemoServiceControl)
			DECL_TYPE_INFO(::demo::DemoServiceControlConstructor)
			DECL_TYPE_INFO(::demo::MainWindow)
			DECL_TYPE_INFO(::demo::MainWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::IDemoService)
				::vl::WString GetName() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetName);
				}
				void SetName(const ::vl::WString& __vwsn_value_) override
				{
					INVOKE_INTERFACE_PROXY(SetName, __vwsn_value_);
				}
			END_INTERFACE_PROXY(::IDemoService)
#endif
#endif

			extern bool LoadDemoTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
