/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Asset Type Action of Atom Cue Sheet
 * File     : AssetTypeActions_SoundAtomCueSheet.cpp
 *
 ****************************************************************************/

#include "AssetTypeActions_SoundAtomCueSheet.h"

#include "CriWareEditorPrivatePCH.h"
#include "AtomSoundData.h"
#include "SoundAtomCueSheet.h"

#include "EditorStyleSet.h"
#include "EditorReimportHandler.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

void FAssetTypeActions_SoundAtomCueSheet::GetResolvedSourceFilePaths(const TArray<UObject*>& TypeAssets, TArray<FString>& OutSourceFilePaths) const
{
	for (auto& Asset : TypeAssets) {
		const USoundAtomCueSheet* CueSheet = CastChecked<USoundAtomCueSheet>(Asset);
		if (CueSheet->AssetImportData) {
			CueSheet->AssetImportData->ExtractFilenames(OutSourceFilePaths);
		}
	}
}

bool FAssetTypeActions_SoundAtomCueSheet::CanExecuteReimport(const TArray<TWeakObjectPtr<USoundAtomCueSheet>> Objects) const
{
	for (auto ObjIt = Objects.CreateConstIterator(); ObjIt; ++ObjIt) {
		auto Object = (*ObjIt).Get();
		if (Object) {
			return true;
		}
	}

	return false;
}

#undef LOCTEXT_NAMESPACE

