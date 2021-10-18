﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe ResourceBase.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "EditorBase.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, EditorBaseReflection.h) */
#include "EditorBaseReflection.h"
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

#define GLOBAL_SYMBOL ::vl_workflow_global::EditorBase::
#define GLOBAL_NAME ::vl_workflow_global::EditorBase::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::EditorBase::Instance()

/* USER_CONTENT_BEGIN(custom global declarations) */
/* USER_CONTENT_END() */

/***********************************************************************
Class (::demo::DocumentEditorBase)
***********************************************************************/

namespace demo
{
	::vl::presentation::controls::GuiToolstripCommand* DocumentEditorBase::GetEditModeCommand()
	{
		return this->__vwsn_prop_EditModeCommand;
	}
	void DocumentEditorBase::SetEditModeCommand(::vl::presentation::controls::GuiToolstripCommand* __vwsn_value_)
	{
		if ((this->__vwsn_prop_EditModeCommand != __vwsn_value_))
		{
			(this->__vwsn_prop_EditModeCommand = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->EditModeCommandChanged)();
		}
	}

	void DocumentEditorBase::SetEditMode(::vl::presentation::controls::GuiDocumentCommonInterface::EditMode editMode)
	{
		auto command = ((editMode == ::vl::presentation::controls::GuiDocumentCommonInterface::EditMode::ViewOnly) ? this->commandViewOnly : ((editMode == ::vl::presentation::controls::GuiDocumentCommonInterface::EditMode::Selectable) ? this->commandSelectable : this->commandEditable));
		::vl::__vwsn::This(this->document)->SetEditMode(editMode);
		::vl::__vwsn::This(this->commandViewOnly)->SetSelected((command == this->commandViewOnly));
		::vl::__vwsn::This(this->commandSelectable)->SetSelected((command == this->commandSelectable));
		::vl::__vwsn::This(this->commandEditable)->SetSelected((command == this->commandEditable));
		this->SetEditModeCommand(command);
		::vl::__vwsn::This(this->self)->UpdateSubscriptions();
	}

	::vl::presentation::controls::GuiToolstripCommand* DocumentEditorBase::SelectAlignmentCommand()
	{
		auto alignment = ::vl::__vwsn::This(this->document)->SummarizeParagraphAlignment(::vl::__vwsn::This(this->document)->GetCaretBegin(), ::vl::__vwsn::This(this->document)->GetCaretEnd());
		return ((alignment == ::vl::Nullable<::vl::presentation::Alignment>(::vl::presentation::Alignment::Left)) ? this->commandAlignLeft : ((alignment == ::vl::Nullable<::vl::presentation::Alignment>(::vl::presentation::Alignment::Center)) ? this->commandAlignCenter : ((alignment == ::vl::Nullable<::vl::presentation::Alignment>(::vl::presentation::Alignment::Right)) ? this->commandAlignRight : this->commandAlignDefault)));
	}

	void DocumentEditorBase::SetAlignment(::vl::Nullable<::vl::presentation::Alignment> alignment)
	{
		::vl::__vwsn::This(this->document)->SetParagraphAlignment(::vl::__vwsn::This(this->document)->GetCaretBegin(), ::vl::__vwsn::This(this->document)->GetCaretEnd(), alignment);
		::vl::__vwsn::This(this->self)->UpdateSubscriptions();
	}

	bool DocumentEditorBase::GetHasEditableSelection()
	{
		return this->__vwsn_prop_HasEditableSelection;
	}
	void DocumentEditorBase::SetHasEditableSelection(bool __vwsn_value_)
	{
		if ((this->__vwsn_prop_HasEditableSelection != __vwsn_value_))
		{
			(this->__vwsn_prop_HasEditableSelection = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->HasEditableSelectionChanged)();
		}
	}

	bool DocumentEditorBase::GetHasEditableSelectionInSingleParagraph()
	{
		return this->__vwsn_prop_HasEditableSelectionInSingleParagraph;
	}
	void DocumentEditorBase::SetHasEditableSelectionInSingleParagraph(bool __vwsn_value_)
	{
		if ((this->__vwsn_prop_HasEditableSelectionInSingleParagraph != __vwsn_value_))
		{
			(this->__vwsn_prop_HasEditableSelectionInSingleParagraph = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->HasEditableSelectionInSingleParagraphChanged)();
		}
	}

	bool DocumentEditorBase::HasEditableCursor()
	{
		return (::vl::__vwsn::This(this->document)->GetEditMode() == ::vl::presentation::controls::GuiDocumentCommonInterface::EditMode::Editable);
	}

	bool DocumentEditorBase::HasEditableHyperlink(bool forEdit)
	{
		auto a = ::vl::__vwsn::This(this->document)->GetCaretBegin();
		auto b = ::vl::__vwsn::This(this->document)->GetCaretEnd();
		return ((a.row == b.row) && (a.column != b.column));
	}

	::vl::presentation::compositions::GuiGraphicsComposition* DocumentEditorBase::GetMenuContainer()
	{
		return static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->menuContainer);
	}

	::vl::presentation::compositions::GuiGraphicsComposition* DocumentEditorBase::GetToolstripContainer()
	{
		return static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->toolstripContainer);
	}

	void DocumentEditorBase::LoadAsPrivateFormat(const ::vl::WString& fileName)
	{/* USER_CONTENT_BEGIN(::demo::DocumentEditorBase) */
		vl::stream::FileStream fileStream(fileName, vl::stream::FileStream::ReadOnly);
		auto model = vl::presentation::LoadDocumentFromClipboardStream(fileStream);
		document->SetDocument(model);
	}/* USER_CONTENT_END() */

	void DocumentEditorBase::SaveAsPrivateFormat(const ::vl::WString& fileName)
	{/* USER_CONTENT_BEGIN(::demo::DocumentEditorBase) */
		document->SelectAll();
		auto model = document->GetSelectionModel();

		vl::presentation::ModifyDocumentForClipboard(model);
		vl::stream::FileStream fileStream(fileName, vl::stream::FileStream::WriteOnly);
		vl::presentation::SaveDocumentToClipboardStream(model, fileStream);
	}/* USER_CONTENT_END() */

	void DocumentEditorBase::SaveAsRTF(const ::vl::WString& fileName)
	{/* USER_CONTENT_BEGIN(::demo::DocumentEditorBase) */
		document->SelectAll();
		auto model = document->GetSelectionModel();

		vl::AString rtf;
		vl::presentation::SaveDocumentToRtf(model, rtf);
		vl::stream::FileStream fileStream(fileName, vl::stream::FileStream::WriteOnly);
		fileStream.Write((void*)rtf.Buffer(), rtf.Length());
	}/* USER_CONTENT_END() */

	void DocumentEditorBase::SaveAsHTML(const ::vl::WString& fileName)
	{/* USER_CONTENT_BEGIN(::demo::DocumentEditorBase) */
		document->SelectAll();
		auto model = document->GetSelectionModel();

		vl::AString header, content, footer;
		vl::presentation::SaveDocumentToHtmlUtf8(model, header, content, footer);
		vl::stream::FileStream fileStream(fileName, vl::stream::FileStream::WriteOnly);
		fileStream.Write((void*)header.Buffer(), header.Length());
		fileStream.Write((void*)content.Buffer(), content.Length());
		fileStream.Write((void*)footer.Buffer(), footer.Length());
	}/* USER_CONTENT_END() */

	void DocumentEditorBase::SaveDocument()
	{
		if (::vl::__vwsn::This(this->dialogSaveDoc)->ShowDialog())
		{
			{
				auto __vwsn_switch_0 = ::vl::__vwsn::This(this->dialogSaveDoc)->GetFilterIndex();
				if ((__vwsn_switch_0 == static_cast<::vl::vint>(0)))
				{
					::vl::__vwsn::This(this->self)->SaveAsPrivateFormat(::vl::__vwsn::This(this->dialogSaveDoc)->GetFileName());
					::vl::__vwsn::This(this->document)->NotifyModificationSaved();
				}
				else if ((__vwsn_switch_0 == static_cast<::vl::vint>(1)))
				{
					::vl::__vwsn::This(this->self)->SaveAsRTF(::vl::__vwsn::This(this->dialogSaveDoc)->GetFileName());
				}
				else if ((__vwsn_switch_0 == static_cast<::vl::vint>(2)))
				{
					::vl::__vwsn::This(this->self)->SaveAsHTML(::vl::__vwsn::This(this->dialogSaveDoc)->GetFileName());
				}
			}
		}
	}

	bool DocumentEditorBase::CancelWindowClose()
	{
		if (::vl::__vwsn::This(this->document)->GetModified())
		{
			{
				auto __vwsn_switch_1 = ::vl::__vwsn::This(this->dialogQueryClose)->ShowDialog();
				if ((__vwsn_switch_1 == ::vl::presentation::INativeDialogService::MessageBoxButtonsOutput::SelectYes))
				{
					if (::vl::__vwsn::This(this->dialogSaveDocPrivate)->ShowDialog())
					{
						::vl::__vwsn::This(this->self)->SaveAsPrivateFormat(::vl::__vwsn::This(this->dialogSaveDocPrivate)->GetFileName());
						return false;
					}
					else
					{
						return true;
					}
				}
				else if ((__vwsn_switch_1 == ::vl::presentation::INativeDialogService::MessageBoxButtonsOutput::SelectNo))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}

	DocumentEditorBase::DocumentEditorBase()
		: ::vl::presentation::controls::GuiCustomControl(::vl::presentation::theme::ThemeName::CustomControl)
		, __vwsn_prop_EditModeCommand(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, __vwsn_prop_HasEditableSelection(false)
		, __vwsn_prop_HasEditableSelectionInSingleParagraph(false)
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::DocumentEditorBase", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_DocumentEditorBase_Initialize(this);
		this->__vwsn_instance_ctor_();
	}

	void DocumentEditorBase::__vwsn_instance_ctor_()
	{
		this->SetEditMode(::vl::presentation::controls::GuiDocumentCommonInterface::EditMode::Editable);
	}

	DocumentEditorBase::~DocumentEditorBase()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiCustomControl*>(this));
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
