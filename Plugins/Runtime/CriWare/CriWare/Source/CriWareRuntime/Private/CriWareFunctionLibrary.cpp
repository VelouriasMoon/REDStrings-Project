/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2017-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Blueprint Function Library
 * File     : CriWareFunctionLibrary.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "CriWareFunctionLibrary.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

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
void UCriWareFunctionLibrary::SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, const TArray<float>& Angles)
{
	if ((SpeakerSystem == ECriWareSpeakerSystem::Surround5Point1) && (Angles.Num() >= 6)) {
		criAtomEx_SetSpeakerAngleArray(CRIATOMEX_SPEAKER_SYSTEM_SURROUND_5_1, Angles.GetData());
	} else if ((SpeakerSystem == ECriWareSpeakerSystem::Surround7Point1) && (Angles.Num() >= 8)) {
		criAtomEx_SetSpeakerAngleArray(CRIATOMEX_SPEAKER_SYSTEM_SURROUND_7_1, Angles.GetData());
	} else {
		UE_LOG(LogCriWareRuntime, Error, TEXT("Invalid speaker type."));
	}
}

void UCriWareFunctionLibrary::SetGameVariableByName(FString GameVariableName, float Value)
{
	criAtomEx_SetGameVariableByName(TCHAR_TO_UTF8(*GameVariableName), Value);
}

void UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(FString SelectorName, FString LabelName)
{
	criAtomExAcf_SetGlobalLabelToSelectorByName(TCHAR_TO_UTF8(*SelectorName), TCHAR_TO_UTF8(*LabelName));
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
