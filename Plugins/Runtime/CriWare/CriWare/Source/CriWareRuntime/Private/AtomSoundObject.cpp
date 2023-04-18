/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2014-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Atom SoundObject
 * File     : AtomSoundObject.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomSoundObject.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomSoundObject"

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

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
UAtomSoundObject::UAtomSoundObject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	SoundObject = NULL;
	EnableVoiceLimitScope = false;
	EnableCategoryCueLimitScope = false;
}

void UAtomSoundObject::PostInitProperties()
{
	Super::PostInitProperties();
}

void UAtomSoundObject::BeginDestroy()
{
	/* サウンドオブジェクトの破棄 */
	ReleaseSoundObject();

	Super::BeginDestroy();
}

void UAtomSoundObject::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	Ar << EnableVoiceLimitScope;
	Ar << EnableCategoryCueLimitScope;
}

void UAtomSoundObject::PostLoad()
{
	Super::PostLoad();
}

#if WITH_EDITOR
void UAtomSoundObject::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	/* サウンドオブジェクトの更新 */
	UpdateSoundObject();
}
#endif

CriAtomExSoundObjectHn UAtomSoundObject::GetSoundObjectHandle()
{
	if (IsPendingKill() == true) {
		return NULL;
	}

	if (SoundObject == NULL) {
		AllocateSoundObject();
	}

	return SoundObject;
}

bool UAtomSoundObject::GetAppliedCategoryLimitFlag() const
{
	return AppliedCategoryLimitFlag;
}

bool UAtomSoundObject::GetAppliedVoiceLimitFlag() const
{
	return AppliedVoiceLimitFlag;
}

void UAtomSoundObject::AllocateSoundObject()
{
	/* サウンドオブジェクトの作成 */
	CriAtomExSoundObjectConfig config;
	criAtomExSoundObject_SetDefaultConfig(&config);
	config.enable_voice_limit_scope = (CriBool)EnableVoiceLimitScope;
	config.enable_category_cue_limit_scope = (CriBool)EnableCategoryCueLimitScope;
	SoundObject = criAtomExSoundObject_Create(&config, NULL, 0);

	AppliedCategoryLimitFlag = EnableCategoryCueLimitScope;
	AppliedVoiceLimitFlag = EnableVoiceLimitScope;
}

void UAtomSoundObject::ReleaseSoundObject()
{
	/* サウンドオブジェクトの破棄 */
	/* 注意）GC処理の順序によっては、ライブラリ終了処理後にここに来る可能性がある。 */
	if ((SoundObject != NULL) && (criAtomEx_IsInitialized() != CRI_FALSE)) {
		criAtomExSoundObject_Destroy(SoundObject);
		SoundObject = NULL;
	}
}

void UAtomSoundObject::UpdateSoundObject()
{
	/* サウンドオブジェクトの作成し直し */
	ReleaseSoundObject();
	AllocateSoundObject();
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
