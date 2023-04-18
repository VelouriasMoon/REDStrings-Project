/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Asset Type Action of Atom Cue
 * File     : AssetTypeActions_SoundAtomCue.cpp
 *
 ****************************************************************************/

#include "AssetTypeActions_SoundAtomCue.h"

#include "CriWarePreviewer.h"
#include "SoundAtomCue.h"
#include "AtomComponent.h"

#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Editor.h"
#include "EditorStyleSet.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Images/SImage.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

UClass* FAssetTypeActions_SoundAtomCue::GetSupportedClass() const
{
	return USoundAtomCue::StaticClass();
}

void FAssetTypeActions_SoundAtomCue::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	auto Sounds = GetTypedWeakObjectPtrs<USoundAtomCue>(InObjects);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("Sound_PlaySound", "Play"),
		LOCTEXT("Sound_PlaySoundTooltip", "Plays the selected sound."),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "MediaAsset.AssetActions.Play.Small"),
		FUIAction(
			FExecuteAction::CreateSP(this, &FAssetTypeActions_SoundAtomCue::ExecutePlaySound, Sounds),
			FCanExecuteAction::CreateSP(this, &FAssetTypeActions_SoundAtomCue::CanExecutePlayCommand, Sounds)
			)
		);

	MenuBuilder.AddMenuEntry(
		LOCTEXT("Sound_StopSound", "Stop"),
		LOCTEXT("Sound_StopSoundTooltip", "Stops the selected sounds."),
		FSlateIcon(FEditorStyle::GetStyleSetName(), "MediaAsset.AssetActions.Stop.Small"),
		FUIAction(
			FExecuteAction::CreateSP(this, &FAssetTypeActions_SoundAtomCue::ExecuteStopSound, Sounds),
			FCanExecuteAction()
			)
		);
}

bool FAssetTypeActions_SoundAtomCue::AssetsActivatedOverride(const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType)
{
	/* プレビュー要求かどうかチェック */
	if (ActivationType == EAssetTypeActivationMethod::Previewed) {
		/* 複数選択時は最初のアセットのみをプレビュー対象とする */
		USoundAtomCue* TargetSound = nullptr;
		for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt) {
			TargetSound = Cast<USoundAtomCue>(*ObjIt);
			if (TargetSound) {
				break;
			}
		}

		/* 再生状態の確認 */
		if ((TargetSound == nullptr) || IsSoundPlaying(TargetSound)) {
			/* 指定された音声が再生中の場合は停止 */
			StopSound();
		} else {
			/* 未再生時は新規に再生を開始 */
			PlaySound(TargetSound);
		}

		return true;
	}

	/* プレビュー要求以外はデフォルト処理 */
	return false;
}

void FAssetTypeActions_SoundAtomCue::PlaySound(USoundAtomCue* Sound) const
{
	if (Sound) {
		GCriWarePreviewer->PlayPreviewSound(Sound);
	} else {
		StopSound();
	}
}

void FAssetTypeActions_SoundAtomCue::StopSound() const
{
	GCriWarePreviewer->StopPreviewSound();
}

bool FAssetTypeActions_SoundAtomCue::IsSoundPlaying(USoundAtomCue* Sound) const
{
	return GCriWarePreviewer->IsPreviewSoundPlaying(Sound);
}

void FAssetTypeActions_SoundAtomCue::ExecutePlaySound(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const
{
	for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt) {
		USoundAtomCue* Sound = (*ObjIt).Get();
		if (Sound) {
			// Only play the first valid sound
			PlaySound(Sound);
			break;
		}
	}
}

void FAssetTypeActions_SoundAtomCue::ExecuteStopSound(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const
{
	StopSound();
}

TSharedPtr<SWidget> FAssetTypeActions_SoundAtomCue::GetThumbnailOverlay(const FAssetData& AssetData) const
{
	auto OnGetDisplayBrushLambda = [this, AssetData]() -> const FSlateBrush*
	{
		UObject* Asset = AssetData.GetAsset();
		if (Asset) {
			USoundAtomCue* Sound = CastChecked<USoundAtomCue>(Asset);
			if (IsSoundPlaying(Sound)) {
				return FEditorStyle::GetBrush("MediaAsset.AssetActions.Stop.Large");
			}
		}

		return FEditorStyle::GetBrush("MediaAsset.AssetActions.Play.Large");
	};

	auto OnClickedLambda = [this, AssetData]() -> FReply
	{
		UObject* Asset = AssetData.GetAsset();
		if (Asset) {
			USoundAtomCue* Sound = CastChecked<USoundAtomCue>(Asset);

			if (IsSoundPlaying(Sound)) {
				StopSound();
			} else {
				PlaySound(Sound);
			}
		}
		return FReply::Handled();
	};

	auto OnToolTipTextLambda = [this, AssetData]() -> FText
	{
		UObject* Asset = AssetData.GetAsset();
		if (Asset) {
			USoundAtomCue* Sound = CastChecked<USoundAtomCue>(Asset);
			if (IsSoundPlaying(Sound)) {
				return LOCTEXT("Thumbnail_StopSoundToolTip", "Stop selected sound");
			}
		}

		return LOCTEXT("Thumbnail_PlaySoundToolTip", "Play selected sound");
	};

	TSharedPtr<SBox> Box;
	SAssignNew(Box, SBox)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Padding(FMargin(2));

	auto OnGetVisibilityLambda = [this, Box, AssetData]() -> EVisibility
	{
		UObject* Asset = AssetData.GetAsset();
		if (Asset) {
			USoundAtomCue* Sound = CastChecked<USoundAtomCue>(Asset);
			if (Box.IsValid()) {
				if (Box->IsHovered() || IsSoundPlaying(Sound)) {
					return EVisibility::Visible;
				}
			}
		}

		return EVisibility::Hidden;
	};

	TSharedPtr<SButton> Widget;
	SAssignNew(Widget, SButton)
		.ButtonStyle(FEditorStyle::Get(), "HoverHintOnly")
		.ToolTipText_Lambda(OnToolTipTextLambda)
		.Cursor(EMouseCursor::Default) // The outer widget can specify a DragHand cursor, so we need to override that here
		.ForegroundColor(FSlateColor::UseForeground())
		.OnClicked_Lambda(OnClickedLambda)
		.Visibility_Lambda(OnGetVisibilityLambda)
		[
			SNew(SImage)
			.Image_Lambda(OnGetDisplayBrushLambda)
		];

	Box->SetContent(Widget.ToSharedRef());
	Box->SetVisibility(EVisibility::Visible);

	return Box;
}

bool FAssetTypeActions_SoundAtomCue::CanExecutePlayCommand(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const
{
	return Objects.Num() == 1;
}

#undef LOCTEXT_NAMESPACE
