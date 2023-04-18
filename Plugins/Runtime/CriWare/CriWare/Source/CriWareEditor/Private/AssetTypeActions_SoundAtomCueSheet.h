/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2016 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Asset Type Action of Atom Cue Sheet
 * File     : AssetTypeActions_SoundAtomCueSheet.h
 *
 ****************************************************************************/

#pragma once

#include "AssetTypeActions_Base.h"
#include "SoundAtomCueSheet.h"

class FAssetTypeActions_SoundAtomCueSheet : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_SoundAtomCueSheet", "Atom Cue Sheet"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 127, 39); }
	virtual UClass* GetSupportedClass() const override { return USoundAtomCueSheet::StaticClass(); }
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return false; }
	virtual bool CanFilter() override { return true; }
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Sounds; }
	virtual bool IsImportedAsset() const override { return true; }
	virtual void GetResolvedSourceFilePaths(const TArray<UObject*>& TypeAssets, TArray<FString>& OutSourceFilePaths) const override;
	// End IAssetTypeActions

private:
	/** Can we execute a reimport for the selected objects? */
	bool CanExecuteReimport(const TArray<TWeakObjectPtr<USoundAtomCueSheet>> Objects) const;
};
