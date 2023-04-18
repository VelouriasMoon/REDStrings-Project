/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2015 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Module Interface of CriWareEditor
 * File     : ICriWareEditor.h
 *
 ****************************************************************************/

/* 多重定義防止 */
#pragma once

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"		// For inline LoadModuleChecked()

/** Struct specifying pending changes to a settings object */
struct FModifiedDefaultConfig
{
	/** The settings object to which the description relates */
	TWeakObjectPtr<UObject> SettingsObject;

	/** Heading describing the name of the category */
	FText CategoryHeading;

	/** Text describing the pending changes to the settings */
	FText Description;
};

/**
 * The public interface of the CriWareEditor module
 */
class ICriWareEditor : public IModuleInterface
{
public:
	/**
	 * Singleton-like access to ICriWareEditor
	 *
	 * @return Returns CriWareEditor singleton instance, loading the module on demand if needed
	 */
	static inline ICriWareEditor& Get()
	{
		return FModuleManager::LoadModuleChecked< ICriWareEditor >( "CriWareEditor" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "CriWareEditor" );
	}

	/** Apply the current hardware targeting settings if they have changed */
	virtual void ApplyCriWarePluginSetting() = 0;

	/** Gets a list of objects that are required to be writable in order to apply the settings */
	virtual TArray<FModifiedDefaultConfig> GetPendingSettingsChanges() = 0;

	/** Generates asset on demand. */
	virtual UObject* CreateAsset(const FString & AssetName, const FString & PackagePath, UClass* AssetClass) = 0;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
