/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2015 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Module Interface of CriWareRuntime
 * File     : ICriWareRuntime.h
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

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/
/**
 * The public interface of the CriWareRuntime module
 */
class ICriWareRuntime : public IModuleInterface
{
public:
	/**
	 * Singleton-like access to ICriWareRuntime
	 *
	 * @return Returns CriWareRuntime singleton instance, loading the module on demand if needed
	 */
	static inline ICriWareRuntime& Get()
	{
		return FModuleManager::LoadModuleChecked< ICriWareRuntime >( "CriWareRuntime" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "CriWareRuntime" );
	}
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
