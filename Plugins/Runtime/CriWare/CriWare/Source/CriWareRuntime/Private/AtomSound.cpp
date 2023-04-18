/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Base AtomSound Actor
 * File     : AtomSound.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomSound.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

#if WITH_EDITOR
#include "Logging/MessageLog.h"
#include "Misc/MapErrors.h"
#include "Misc/UObjectToken.h"
#endif

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
#define LOCTEXT_NAMESPACE "AtomSound"

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
namespace {
	/* AAtomSound アクタのマップチェック時用エラー定義 */
	FName CriMapError_AtomComponentNull(TEXT("AtomComponentNull"));
	FName CriMapError_AtomComponentSoundNull(TEXT("AtomComponentSoundNull"));
};

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
AAtomSound::AAtomSound(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITOR
	/* Localization of unreal properties metadata with LOCTEXT markups and reflection */
	CRI_LOCCLASS(GetClass());
#endif

	AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));

	AtomComponent->bAutoActivate = true;
	AtomComponent->bStopWhenOwnerDestroyed = true;

	RootComponent = AtomComponent;

	bReplicates = false;
	SetHidden(true);
	SetCanBeDamaged(false);
}

#if WITH_EDITOR
void AAtomSound::CheckForErrors(void)
{
	Super::CheckForErrors();

	if (!AtomComponent) {
		FMessageLog("MapCheck").Warning()
			->AddToken(FUObjectToken::Create(this))
			->AddToken(FTextToken::Create(LOCTEXT("MapCheck_Message_AtomComponentNull", "Atom sound actor has NULL AtomComponent property - please delete")))
			->AddToken(FMapErrorToken::Create(CriMapError_AtomComponentNull));
	} else if (AtomComponent->Sound == NULL) {
		FMessageLog("MapCheck").Warning()
			->AddToken(FUObjectToken::Create(this))
			->AddToken(FTextToken::Create(LOCTEXT("MapCheck_Message_SoundNull", " Atom sound actor has invalid AtomComponent property. SoundAtomCue property is NULL")))
			->AddToken(FMapErrorToken::Create(CriMapError_AtomComponentSoundNull));
	}
}
#endif

void AAtomSound::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();

#if WITH_EDITORONLY_DATA
	if (AtomComponent && bHiddenEdLevel) {
		AtomComponent->Stop();
	}
#endif // WITH_EDITORONLY_DATA
}

void AAtomSound::PostLoad()
{
	Super::PostLoad();
}

void AAtomSound::Play(float StartTime)
{
	if (AtomComponent) {
		AtomComponent->Play(StartTime);
	}
}

void AAtomSound::Stop()
{
	if (AtomComponent) {
		AtomComponent->Stop();
	}
}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 23
void AAtomSound::SetHidden(bool InHidden)
{
	bHidden = InHidden;
}

void AAtomSound::SetCanBeDamaged(bool InCanBeDamaged)
{
	bCanBeDamaged = InCanBeDamaged;
}
#endif

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/
#undef LOCTEXT_NAMESPACE

/* --- end of file --- */
