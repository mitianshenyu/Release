﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe ResourceBase.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "EditorBaseReflection.h"

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
			IMPL_CPP_TYPE_INFO(demo::DocumentEditorBase)
			IMPL_CPP_TYPE_INFO(demo::DocumentEditorBaseConstructor)
			IMPL_CPP_TYPE_INFO(demo::HyperlinkWindow)
			IMPL_CPP_TYPE_INFO(demo::HyperlinkWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_CLASS_MEMBER(::demo::DocumentEditorBase)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::demo::DocumentEditorBaseConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::DocumentEditorBase*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_METHOD(CancelWindowClose, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetEditModeCommand, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetHasEditableSelection, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetHasEditableSelectionInSingleParagraph, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetMenuContainer, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetToolstripContainer, NO_PARAMETER)
				CLASS_MEMBER_METHOD(HasEditableCursor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(HasEditableHyperlink, { L"forEdit" })
				CLASS_MEMBER_METHOD(LoadAsPrivateFormat, { L"fileName" })
				CLASS_MEMBER_METHOD(SaveAsHTML, { L"fileName" })
				CLASS_MEMBER_METHOD(SaveAsPrivateFormat, { L"fileName" })
				CLASS_MEMBER_METHOD(SaveAsRTF, { L"fileName" })
				CLASS_MEMBER_METHOD(SaveDocument, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SelectAlignmentCommand, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetAlignment, { L"alignment" })
				CLASS_MEMBER_METHOD(SetEditMode, { L"editMode" })
				CLASS_MEMBER_METHOD(SetEditModeCommand, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetHasEditableSelection, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetHasEditableSelectionInSingleParagraph, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(EditModeCommandChanged)
				CLASS_MEMBER_EVENT(HasEditableSelectionChanged)
				CLASS_MEMBER_EVENT(HasEditableSelectionInSingleParagraphChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_EditModeCommand)
				CLASS_MEMBER_FIELD(__vwsn_prop_HasEditableSelection)
				CLASS_MEMBER_FIELD(__vwsn_prop_HasEditableSelectionInSingleParagraph)
				CLASS_MEMBER_PROPERTY_EVENT_READONLY(EditModeCommand, GetEditModeCommand, EditModeCommandChanged)
				CLASS_MEMBER_PROPERTY_EVENT(HasEditableSelection, GetHasEditableSelection, SetHasEditableSelection, HasEditableSelectionChanged)
				CLASS_MEMBER_PROPERTY_EVENT(HasEditableSelectionInSingleParagraph, GetHasEditableSelectionInSingleParagraph, SetHasEditableSelectionInSingleParagraph, HasEditableSelectionInSingleParagraphChanged)
				CLASS_MEMBER_PROPERTY_READONLY(MenuContainer, GetMenuContainer)
				CLASS_MEMBER_PROPERTY_READONLY(ToolstripContainer, GetToolstripContainer)
			END_CLASS_MEMBER(::demo::DocumentEditorBase)

			BEGIN_CLASS_MEMBER(::demo::DocumentEditorBaseConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::DocumentEditorBaseConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_DocumentEditorBase_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(commandAlignCenter)
				CLASS_MEMBER_FIELD(commandAlignDefault)
				CLASS_MEMBER_FIELD(commandAlignLeft)
				CLASS_MEMBER_FIELD(commandAlignRight)
				CLASS_MEMBER_FIELD(commandBackColor)
				CLASS_MEMBER_FIELD(commandBold)
				CLASS_MEMBER_FIELD(commandColor)
				CLASS_MEMBER_FIELD(commandCopy)
				CLASS_MEMBER_FIELD(commandCut)
				CLASS_MEMBER_FIELD(commandDelete)
				CLASS_MEMBER_FIELD(commandEditHyperlink)
				CLASS_MEMBER_FIELD(commandEditable)
				CLASS_MEMBER_FIELD(commandFont)
				CLASS_MEMBER_FIELD(commandInsertImage)
				CLASS_MEMBER_FIELD(commandItalic)
				CLASS_MEMBER_FIELD(commandLoadPrivate)
				CLASS_MEMBER_FIELD(commandPaste)
				CLASS_MEMBER_FIELD(commandRedo)
				CLASS_MEMBER_FIELD(commandRemoveHyperlink)
				CLASS_MEMBER_FIELD(commandSaveHtml)
				CLASS_MEMBER_FIELD(commandSavePrivate)
				CLASS_MEMBER_FIELD(commandSaveRtf)
				CLASS_MEMBER_FIELD(commandSelect)
				CLASS_MEMBER_FIELD(commandSelectable)
				CLASS_MEMBER_FIELD(commandStrike)
				CLASS_MEMBER_FIELD(commandUnderline)
				CLASS_MEMBER_FIELD(commandUndo)
				CLASS_MEMBER_FIELD(commandViewOnly)
				CLASS_MEMBER_FIELD(dialogColor)
				CLASS_MEMBER_FIELD(dialogFont)
				CLASS_MEMBER_FIELD(dialogMessage)
				CLASS_MEMBER_FIELD(dialogNotImpl)
				CLASS_MEMBER_FIELD(dialogOpen)
				CLASS_MEMBER_FIELD(dialogOpenDoc)
				CLASS_MEMBER_FIELD(dialogQueryClose)
				CLASS_MEMBER_FIELD(dialogSaveDoc)
				CLASS_MEMBER_FIELD(dialogSaveDocPrivate)
				CLASS_MEMBER_FIELD(document)
				CLASS_MEMBER_FIELD(menuContainer)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(toolstripContainer)
			END_CLASS_MEMBER(::demo::DocumentEditorBaseConstructor)

			BEGIN_CLASS_MEMBER(::demo::HyperlinkWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::demo::HyperlinkWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::HyperlinkWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetUrl, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetUrl, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(UrlChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Url)
				CLASS_MEMBER_PROPERTY_EVENT(Url, GetUrl, SetUrl, UrlChanged)
			END_CLASS_MEMBER(::demo::HyperlinkWindow)

			BEGIN_CLASS_MEMBER(::demo::HyperlinkWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::HyperlinkWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_HyperlinkWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textUrl)
			END_CLASS_MEMBER(::demo::HyperlinkWindowConstructor)

#undef _
			class EditorBaseTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::DocumentEditorBase)
					ADD_TYPE_INFO(::demo::DocumentEditorBaseConstructor)
					ADD_TYPE_INFO(::demo::HyperlinkWindow)
					ADD_TYPE_INFO(::demo::HyperlinkWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif
#endif

			bool LoadEditorBaseTypes()
			{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<EditorBaseTypeLoader>());
				}
#endif
				return false;
			}
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
