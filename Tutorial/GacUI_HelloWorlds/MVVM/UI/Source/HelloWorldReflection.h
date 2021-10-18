﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDREFLECTION
#define VCZH_WORKFLOW_COMPILER_GENERATED_HELLOWORLDREFLECTION

#include "HelloWorld.h"

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
			DECL_TYPE_INFO(::helloworld::MainWindow)
			DECL_TYPE_INFO(::helloworld::MainWindowConstructor)
			DECL_TYPE_INFO(::vm::IViewModel)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA

			BEGIN_INTERFACE_PROXY_NOPARENT_SHAREDPTR(::vm::IViewModel)
				::vl::WString GetPassword() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetPassword);
				}
				::vl::WString GetPasswordError() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetPasswordError);
				}
				::vl::WString GetUserName() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetUserName);
				}
				::vl::WString GetUserNameError() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(GetUserNameError);
				}
				void SetPassword(const ::vl::WString& value) override
				{
					INVOKE_INTERFACE_PROXY(SetPassword, value);
				}
				void SetUserName(const ::vl::WString& value) override
				{
					INVOKE_INTERFACE_PROXY(SetUserName, value);
				}
				bool SignUp() override
				{
					INVOKEGET_INTERFACE_PROXY_NOPARAMS(SignUp);
				}
			END_INTERFACE_PROXY(::vm::IViewModel)
#endif
#endif

			extern bool LoadHelloWorldTypes();
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
