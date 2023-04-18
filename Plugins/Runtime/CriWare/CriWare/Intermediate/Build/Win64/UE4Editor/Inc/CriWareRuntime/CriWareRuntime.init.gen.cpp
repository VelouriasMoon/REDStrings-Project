// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareRuntime_init() {}
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CriWareRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1078BA74,
				0x96183E57,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
