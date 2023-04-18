/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Asset Type Action of Atom Cue
 * File     : AssetTypeActions_SoundAtomCue.h
 *
 ****************************************************************************/

#pragma once

#include "SoundAtomCue.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_SoundAtomCue : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_SoundAtomCue() :SoundAtomCueAssetCategory(EAssetTypeCategories::Sounds) {}
	FAssetTypeActions_SoundAtomCue(EAssetTypeCategories::Type InAssetCategory) : SoundAtomCueAssetCategory(InAssetCategory) {}
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_SoundAtomCue", "Atom Cue"); }
	virtual FColor GetTypeColor() const override { return FColor(255, 201, 14); }
	virtual UClass* GetSupportedClass() const override;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return true; }
	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder ) override;
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Sounds; }
	virtual bool CanFilter() override { return true; }
	virtual TSharedPtr<SWidget> GetThumbnailOverlay(const FAssetData& AssetData) const override;
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24
	virtual bool AssetsActivatedOverride(const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType) override;
#else
	bool AssetsActivatedOverride(const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType);
	virtual void AssetsActivated(const TArray<UObject*>& InObjects, EAssetTypeActivationMethod::Type ActivationType) override {
		if (!AssetsActivatedOverride(InObjects, ActivationType)) { FAssetTypeActions_Base::AssetsActivated(InObjects, ActivationType); }
	}
#endif

protected:
	/** Plays the specified sound wave */
	void PlaySound(USoundAtomCue* Sound) const;

	/** Stops any currently playing sounds */
	void StopSound() const;

	/** Return true if the specified sound is playing */
	bool IsSoundPlaying(USoundAtomCue* Sound) const;

private:
	/** Handler for when PlaySound is selected */
	void ExecutePlaySound(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const;

	/** Handler for when StopSound is selected */
	void ExecuteStopSound(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const;

	/** Returns true if only one sound is selected to play */
	bool CanExecutePlayCommand(TArray<TWeakObjectPtr<USoundAtomCue>> Objects) const;

private:
	EAssetTypeCategories::Type SoundAtomCueAssetCategory;
};
