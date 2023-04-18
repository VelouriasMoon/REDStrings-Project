// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics
	{
		struct AtomComponent_eventAtomSequenceCallbackDelegate_Parms
		{
			UAtomComponent* AtomComponent;
			FAtomSequenceInfo SequenceInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo = { "SequenceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAtomSequenceCallbackDelegate_Parms, SequenceInfo), Z_Construct_UScriptStruct_FAtomSequenceInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAtomSequenceCallbackDelegate_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_SequenceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AtomSequenceCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(AtomComponent_eventAtomSequenceCallbackDelegate_Parms), Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics
	{
		struct AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms
		{
			UAtomComponent* AtomComponent;
			FAtomBeatSyncInfo BeatSyncInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatSyncInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_BeatSyncInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::NewProp_AtomComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* \xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AtomBeatSyncCallbackDelegate__DelegateSignature", nullptr, nullptr, sizeof(AtomComponent_eventAtomBeatSyncCallbackDelegate_Parms), Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics
	{
		struct AtomComponent_eventOnAudioVolumeChanged_Parms
		{
			EAtomAudioVolumeType Type;
			AAtomAudioVolume* AtomAudioVolume;
			bool bIsCalledFromTick;
		};
		static void NewProp_bIsCalledFromTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCalledFromTick;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomAudioVolume;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick_SetBit(void* Obj)
	{
		((AtomComponent_eventOnAudioVolumeChanged_Parms*)Obj)->bIsCalledFromTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick = { "bIsCalledFromTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventOnAudioVolumeChanged_Parms), &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_AtomAudioVolume = { "AtomAudioVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventOnAudioVolumeChanged_Parms, AtomAudioVolume), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventOnAudioVolumeChanged_Parms, Type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_bIsCalledFromTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_AtomAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::NewProp_Type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnAudioVolumeChanged__DelegateSignature", nullptr, nullptr, sizeof(AtomComponent_eventOnAudioVolumeChanged_Parms), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnAudioFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics
	{
		struct AtomComponent_eventOnStatusChanged_Parms
		{
			EAtomComponentStatus Status;
			UAtomComponent* AtomComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventOnStatusChanged_Parms, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventOnStatusChanged_Parms, Status), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_AtomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::NewProp_Status_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "OnStatusChanged__DelegateSignature", nullptr, nullptr, sizeof(AtomComponent_eventOnStatusChanged_Parms), Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAtomSpeakerID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSpeakerID"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>()
	{
		return EAtomSpeakerID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSpeakerID(EAtomSpeakerID_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSpeakerID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Hash() { return 4039767829U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSpeakerID"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSpeakerID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSpeakerID::FrontLeft", (int64)EAtomSpeakerID::FrontLeft },
				{ "EAtomSpeakerID::FrontRight", (int64)EAtomSpeakerID::FrontRight },
				{ "EAtomSpeakerID::FrontCenter", (int64)EAtomSpeakerID::FrontCenter },
				{ "EAtomSpeakerID::LowFrequency", (int64)EAtomSpeakerID::LowFrequency },
				{ "EAtomSpeakerID::SurroundLeft", (int64)EAtomSpeakerID::SurroundLeft },
				{ "EAtomSpeakerID::SurroundRight", (int64)EAtomSpeakerID::SurroundRight },
				{ "EAtomSpeakerID::SurroundBackLeft", (int64)EAtomSpeakerID::SurroundBackLeft },
				{ "EAtomSpeakerID::SurroundBackRight", (int64)EAtomSpeakerID::SurroundBackRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FrontCenter.Comment", "/** Front center speaker */" },
				{ "FrontCenter.DisplayName", "Front Center" },
				{ "FrontCenter.Name", "EAtomSpeakerID::FrontCenter" },
				{ "FrontCenter.ToolTip", "Front center speaker" },
				{ "FrontLeft.Comment", "/** Front left speaker */" },
				{ "FrontLeft.DisplayName", "Front Left" },
				{ "FrontLeft.Name", "EAtomSpeakerID::FrontLeft" },
				{ "FrontLeft.ToolTip", "Front left speaker" },
				{ "FrontRight.Comment", "/** Front right speaker */" },
				{ "FrontRight.DisplayName", "Front Right" },
				{ "FrontRight.Name", "EAtomSpeakerID::FrontRight" },
				{ "FrontRight.ToolTip", "Front right speaker" },
				{ "LowFrequency.Comment", "/** LFE (\xe3\x82\xb5\xe3\x83\x96\xe3\x82\xa6\xe3\x83\xbc\xe3\x83\x8f\xe3\x83\xbc) */" },
				{ "LowFrequency.DisplayName", "Low Frequency" },
				{ "LowFrequency.Name", "EAtomSpeakerID::LowFrequency" },
				{ "LowFrequency.ToolTip", "LFE (\xe3\x82\xb5\xe3\x83\x96\xe3\x82\xa6\xe3\x83\xbc\xe3\x83\x8f\xe3\x83\xbc)" },
				{ "ModuleRelativePath", "Classes/AtomComponent.h" },
				{ "SurroundBackLeft.Comment", "/** Surround back left speaker */" },
				{ "SurroundBackLeft.DisplayName", "Surround Back Left" },
				{ "SurroundBackLeft.Name", "EAtomSpeakerID::SurroundBackLeft" },
				{ "SurroundBackLeft.ToolTip", "Surround back left speaker" },
				{ "SurroundBackRight.Comment", "/** Surround back right speaker */" },
				{ "SurroundBackRight.DisplayName", "Surround Back Right" },
				{ "SurroundBackRight.Name", "EAtomSpeakerID::SurroundBackRight" },
				{ "SurroundBackRight.ToolTip", "Surround back right speaker" },
				{ "SurroundLeft.Comment", "/** Surround left speaker */" },
				{ "SurroundLeft.DisplayName", "Surround Left" },
				{ "SurroundLeft.Name", "EAtomSpeakerID::SurroundLeft" },
				{ "SurroundLeft.ToolTip", "Surround left speaker" },
				{ "SurroundRight.Comment", "/** Surround right speaker */" },
				{ "SurroundRight.DisplayName", "Surround Right" },
				{ "SurroundRight.Name", "EAtomSpeakerID::SurroundRight" },
				{ "SurroundRight.ToolTip", "Surround right speaker" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSpeakerID",
				"EAtomSpeakerID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAtomComponentStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomComponentStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomComponentStatus>()
	{
		return EAtomComponentStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomComponentStatus(EAtomComponentStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomComponentStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Hash() { return 2678182023U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomComponentStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomComponentStatus::Stop", (int64)EAtomComponentStatus::Stop },
				{ "EAtomComponentStatus::Prep", (int64)EAtomComponentStatus::Prep },
				{ "EAtomComponentStatus::Playing", (int64)EAtomComponentStatus::Playing },
				{ "EAtomComponentStatus::PlayEnd", (int64)EAtomComponentStatus::PlayEnd },
				{ "EAtomComponentStatus::Error", (int64)EAtomComponentStatus::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/***************************************************************************\n *      \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe5\x9e\x8b\xe5\xae\xa3\xe8\xa8\x80\n *      Data Type Declarations\n ***************************************************************************/" },
				{ "Error.Comment", "/** \xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x82\xe4\xba\x86 */" },
				{ "Error.Name", "EAtomComponentStatus::Error" },
				{ "Error.ToolTip", "\xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x82\xe4\xba\x86" },
				{ "ModuleRelativePath", "Classes/AtomComponent.h" },
				{ "PlayEnd.Comment", "/** \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad */" },
				{ "PlayEnd.Name", "EAtomComponentStatus::PlayEnd" },
				{ "PlayEnd.ToolTip", "\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad" },
				{ "Playing.Comment", "/** \xe5\x86\x8d\xe7\x94\x9f\xe6\xba\x96\xe5\x82\x99\xe4\xb8\xad */" },
				{ "Playing.Name", "EAtomComponentStatus::Playing" },
				{ "Playing.ToolTip", "\xe5\x86\x8d\xe7\x94\x9f\xe6\xba\x96\xe5\x82\x99\xe4\xb8\xad" },
				{ "Prep.Comment", "/** \xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad */" },
				{ "Prep.Name", "EAtomComponentStatus::Prep" },
				{ "Prep.ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad" },
				{ "Stop.Name", "EAtomComponentStatus::Stop" },
				{ "ToolTip", "\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe5\x9e\x8b\xe5\xae\xa3\xe8\xa8\x80\nData Type Declarations" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomComponentStatus",
				"EAtomComponentStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAtomSelectorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSelectorParam>()
{
	return FAtomSelectorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorParam(FAtomSelectorParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSelectorParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSelectorParam")),new UScriptStruct::TCppStructOps<FAtomSelectorParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSelectorParam;
	struct Z_Construct_UScriptStruct_FAtomSelectorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "FAtomSelectorParam struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Label Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorParam, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData[] = {
		{ "Category", "Selector" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Selector Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorParam, Selector), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::NewProp_Selector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSelectorParam",
		sizeof(FAtomSelectorParam),
		alignof(FAtomSelectorParam),
		Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorParam"), sizeof(FAtomSelectorParam), Get_Z_Construct_UScriptStruct_FAtomSelectorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomSelectorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParam_Hash() { return 2873724203U; }
class UScriptStruct* FAtomAisacControlParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAisacControlParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAisacControlParam>()
{
	return FAtomAisacControlParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAisacControlParam(FAtomAisacControlParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAisacControlParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAisacControlParam")),new UScriptStruct::TCppStructOps<FAtomAisacControlParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAisacControlParam;
	struct Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomAisacControlParam struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAisacControlParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlParam, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "AisacControl" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AisacControlName." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAisacControlParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAisacControlParam",
		sizeof(FAtomAisacControlParam),
		alignof(FAtomAisacControlParam),
		Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAisacControlParam"), sizeof(FAtomAisacControlParam), Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAisacControlParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAisacControlParam_Hash() { return 2319320387U; }
class UScriptStruct* FAcfDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcfDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AcfDataTable"), sizeof(FAcfDataTable), Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAcfDataTable>()
{
	return FAcfDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAcfDataTable(FAcfDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AcfDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AcfDataTable")),new UScriptStruct::TCppStructOps<FAcfDataTable>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable;
	struct Z_Construct_UScriptStruct_FAcfDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "FAcfDataTable (deprecated)" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAcfDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcfDataTable>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FAtomConfigDataTable,
		&NewStructOps,
		"AcfDataTable",
		sizeof(FAcfDataTable),
		alignof(FAcfDataTable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AcfDataTable"), sizeof(FAcfDataTable), Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash() { return 2622619118U; }
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentCullingBoundaryDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentCullingBoundaryDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentCullingMarginDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentCullingMarginDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentMaxAttenuationDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMaxAttenuationDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickBoundaryDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickBoundaryDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentEconomicTickMarginDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentEconomicTickMarginDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execHasBeenEconomicTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenEconomicTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetDefaultAttenuationEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomComponent::GetDefaultAttenuationEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetDefaultAttenuationEnable)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomComponent::SetDefaultAttenuationEnable(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FSoundAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCurrentBelongingAudioVolume)
	{
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_type);
		P_GET_UBOOL(Z_Param_IsNeighbor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAtomAudioVolume**)Z_Param__Result=P_THIS->GetCurrentBelongingAudioVolume(EAtomAudioVolumeType(Z_Param_type),Z_Param_IsNeighbor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAudioVolumeValueMap)
	{
		P_GET_ENUM(EAtomAudioVolumeType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,float>*)Z_Param__Result=P_THIS->GetAudioVolumeValueMap(EAtomAudioVolumeType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCullDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCullDistanceMargin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistanceMargin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetMaxAttenuationDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetEconomicTickDistanceMargin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistanceMargin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsReducingTickFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReducingTickFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execDestroyComponentByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomComponent::DestroyComponentByID(Z_Param_TargetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAtomComponentFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomComponent**)Z_Param__Result=UAtomComponent::GetAtomComponentFromID(Z_Param_TargetID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execAttachAreaSoundVolume)
	{
		P_GET_OBJECT(AAtomAreaSoundVolume,Z_Param_sound_shape_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachAreaSoundVolume(Z_Param_sound_shape_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetCueName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCueName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetAtomComponentID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAtomComponentID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetSequencePosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSequencePosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAsrRackIdArray)
	{
		P_GET_TARRAY(int32,Z_Param_AsrRackIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsrRackIdArray(Z_Param_AsrRackIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAsrRackID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_asr_rack_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsrRackID(Z_Param_asr_rack_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execClearSelectorLabels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelectorLabels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSelectorLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Selector);
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectorLabel(Z_Param_Selector,Z_Param_Label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetNextBlockIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BlockIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextBlockIndex(Z_Param_BlockIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelOffsetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LevelOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelOffsetByName(Z_Param_BusName,Z_Param_LevelOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BusId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LevelOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelOffset(Z_Param_BusId,Z_Param_LevelOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevelByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelByName(Z_Param_BusName,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetBusSendLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BusId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevel(Z_Param_BusId,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetAisacByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ControlName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ControlValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacByName(Z_Param_ControlName,Z_Param_ControlValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitch(Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetPitchMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchMultiplier(Z_Param_NewPitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_InRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_InRegion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSoundObject)
	{
		P_GET_OBJECT(UAtomSoundObject,Z_Param_InSoundObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundObject(Z_Param_InSoundObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolume(Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execPause)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut(Z_Param_FadeOutDuration,Z_Param_FadeVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execFadeIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeInDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeVolumeLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn(Z_Param_FadeInDuration,Z_Param_FadeVolumeLevel,Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStopWithoutReleaseTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWithoutReleaseTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execGetNumQueuedSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumQueuedSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execEnqueueSound)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnqueueSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomComponent::execSetSound)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	void UAtomComponent::StaticRegisterNativesUAtomComponent()
	{
		UClass* Class = UAtomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UAtomComponent::execAdjustAttenuation },
			{ "AttachAreaSoundVolume", &UAtomComponent::execAttachAreaSoundVolume },
			{ "BP_GetAttenuationSettingsToApply", &UAtomComponent::execBP_GetAttenuationSettingsToApply },
			{ "ClearSelectorLabels", &UAtomComponent::execClearSelectorLabels },
			{ "DestroyComponentByID", &UAtomComponent::execDestroyComponentByID },
			{ "EnqueueSound", &UAtomComponent::execEnqueueSound },
			{ "FadeIn", &UAtomComponent::execFadeIn },
			{ "FadeOut", &UAtomComponent::execFadeOut },
			{ "GetAtomComponentFromID", &UAtomComponent::execGetAtomComponentFromID },
			{ "GetAtomComponentID", &UAtomComponent::execGetAtomComponentID },
			{ "GetAudioVolumeValueMap", &UAtomComponent::execGetAudioVolumeValueMap },
			{ "GetCueName", &UAtomComponent::execGetCueName },
			{ "GetCullDistance", &UAtomComponent::execGetCullDistance },
			{ "GetCullDistanceMargin", &UAtomComponent::execGetCullDistanceMargin },
			{ "GetCurrentBelongingAudioVolume", &UAtomComponent::execGetCurrentBelongingAudioVolume },
			{ "GetCurrentCullingBoundaryDistance", &UAtomComponent::execGetCurrentCullingBoundaryDistance },
			{ "GetCurrentCullingMarginDistance", &UAtomComponent::execGetCurrentCullingMarginDistance },
			{ "GetCurrentEconomicTickBoundaryDistance", &UAtomComponent::execGetCurrentEconomicTickBoundaryDistance },
			{ "GetCurrentEconomicTickFrequency", &UAtomComponent::execGetCurrentEconomicTickFrequency },
			{ "GetCurrentEconomicTickMarginDistance", &UAtomComponent::execGetCurrentEconomicTickMarginDistance },
			{ "GetCurrentMaxAttenuationDistance", &UAtomComponent::execGetCurrentMaxAttenuationDistance },
			{ "GetDefaultAttenuationEnable", &UAtomComponent::execGetDefaultAttenuationEnable },
			{ "GetEconomicTickDistance", &UAtomComponent::execGetEconomicTickDistance },
			{ "GetEconomicTickDistanceMargin", &UAtomComponent::execGetEconomicTickDistanceMargin },
			{ "GetEconomicTickFrequency", &UAtomComponent::execGetEconomicTickFrequency },
			{ "GetMaxAttenuationDistance", &UAtomComponent::execGetMaxAttenuationDistance },
			{ "GetNumQueuedSounds", &UAtomComponent::execGetNumQueuedSounds },
			{ "GetSequencePosition", &UAtomComponent::execGetSequencePosition },
			{ "GetStatus", &UAtomComponent::execGetStatus },
			{ "GetTime", &UAtomComponent::execGetTime },
			{ "GetVelocity", &UAtomComponent::execGetVelocity },
			{ "GetVolume", &UAtomComponent::execGetVolume },
			{ "HasBeenEconomicTick", &UAtomComponent::execHasBeenEconomicTick },
			{ "IsLoop", &UAtomComponent::execIsLoop },
			{ "IsPaused", &UAtomComponent::execIsPaused },
			{ "IsPlaying", &UAtomComponent::execIsPlaying },
			{ "IsReducingTickFrequency", &UAtomComponent::execIsReducingTickFrequency },
			{ "Pause", &UAtomComponent::execPause },
			{ "Play", &UAtomComponent::execPlay },
			{ "SetAisacByName", &UAtomComponent::execSetAisacByName },
			{ "SetAsrRackID", &UAtomComponent::execSetAsrRackID },
			{ "SetAsrRackIdArray", &UAtomComponent::execSetAsrRackIdArray },
			{ "SetBusSendLevel", &UAtomComponent::execSetBusSendLevel },
			{ "SetBusSendLevelByName", &UAtomComponent::execSetBusSendLevelByName },
			{ "SetBusSendLevelOffset", &UAtomComponent::execSetBusSendLevelOffset },
			{ "SetBusSendLevelOffsetByName", &UAtomComponent::execSetBusSendLevelOffsetByName },
			{ "SetDefaultAttenuationEnable", &UAtomComponent::execSetDefaultAttenuationEnable },
			{ "SetNextBlockIndex", &UAtomComponent::execSetNextBlockIndex },
			{ "SetPitch", &UAtomComponent::execSetPitch },
			{ "SetPitchMultiplier", &UAtomComponent::execSetPitchMultiplier },
			{ "SetRegion", &UAtomComponent::execSetRegion },
			{ "SetSelectorLabel", &UAtomComponent::execSetSelectorLabel },
			{ "SetSound", &UAtomComponent::execSetSound },
			{ "SetSoundObject", &UAtomComponent::execSetSoundObject },
			{ "SetVolume", &UAtomComponent::execSetVolume },
			{ "Stop", &UAtomComponent::execStop },
			{ "StopWithoutReleaseTime", &UAtomComponent::execStopWithoutReleaseTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics
	{
		struct AtomComponent_eventAdjustAttenuation_Parms
		{
			FSoundAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/** Modify the attenuation settings of the audio component */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(AtomComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics
	{
		struct AtomComponent_eventAttachAreaSoundVolume_Parms
		{
			AAtomAreaSoundVolume* sound_shape_volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sound_shape_volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::NewProp_sound_shape_volume = { "sound_shape_volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventAttachAreaSoundVolume_Parms, sound_shape_volume), Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::NewProp_sound_shape_volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88""Attenuation\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88""Attenuation\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88""Attenuation\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88""Attenuation\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x8c\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "AttachAreaSoundVolume", nullptr, nullptr, sizeof(AtomComponent_eventAttachAreaSoundVolume_Parms), Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(AtomComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe5\x90\x8d\xe3\x80\x81\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe5\x90\x8d\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x85\xa8\xe3\x81\xa6\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x81\x99\xe3\x81\xa7\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x8c\xe8\xa1\x8c\xe3\x81\x88\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe5\x90\x8d\xe3\x80\x81\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe5\x90\x8d\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x85\xa8\xe3\x81\xa6\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x99\xe3\x81\xa7\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe5\x89\x8a\xe9\x99\xa4\xe3\x81\x8c\xe8\xa1\x8c\xe3\x81\x88\xe3\x81\xbe\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "ClearSelectorLabels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics
	{
		struct AtomComponent_eventDestroyComponentByID_Parms
		{
			int32 TargetID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventDestroyComponentByID_Parms, TargetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param TargetID ID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe7\xa0\xb4\xe6\xa3\x84\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param TargetID ID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "DestroyComponentByID", nullptr, nullptr, sizeof(AtomComponent_eventDestroyComponentByID_Parms), Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_DestroyComponentByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_DestroyComponentByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics
	{
		struct AtomComponent_eventEnqueueSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventEnqueueSound_Parms, NewSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe3\x82\xb7\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x82\xb9\xe9\x80\xa3\xe7\xb5\x90\xe5\x86\x8d\xe7\x94\x9f\xe7\x94\xa8\xe3\x81\xab\xe3\x80\x81""AtomComponent\xe3\x81\xab\xe6\x96\xb0\xe3\x81\x9f\xe3\x81\xaa\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xaf\xe3\x80\x81""AtomComponent::SetSound\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab\xe7\xb6\x9a\xe3\x81\x91\xe3\x81\xa6\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param NewSound \xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x82\xb9\xe9\x80\xa3\xe7\xb5\x90\xe5\x86\x8d\xe7\x94\x9f\xe7\x94\xa8\xe3\x81\xab\xe3\x80\x81""AtomComponent\xe3\x81\xab\xe6\x96\xb0\xe3\x81\x9f\xe3\x81\xaa\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xaf\xe3\x80\x81""AtomComponent::SetSound\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab\xe7\xb6\x9a\xe3\x81\x91\xe3\x81\xa6\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param NewSound \xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "EnqueueSound", nullptr, nullptr, sizeof(AtomComponent_eventEnqueueSound_Parms), Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_EnqueueSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_EnqueueSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeIn_Statics
	{
		struct AtomComponent_eventFadeIn_Parms
		{
			float FadeInDuration;
			float FadeVolumeLevel;
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventFadeIn_Parms, FadeInDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::NewProp_FadeInDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa4\xe3\x83\xb3\n\x09* \xe5\x82\x99\xe8\x80\x83\xef\xbc\x89""FadeVolumeLevel\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xab\xe3\x81\xaf\xe6\x9c\xaa\xe5\xaf\xbe\xe5\xbf\x9c\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x80\x80\xe3\x80\x80\xe3\x80\x80\xef\xbc\x88\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\xbf\x85\xe3\x81\x9a\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8c""1.0f\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09* \xe3\x80\x80\xe3\x80\x80\xe3\x80\x80""FadeInDuration\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\xaf""2.0f\xe3\x81\x8c\xe4\xb8\x8a\xe9\x99\x90\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param FadeInDuration \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa4\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param FadeVolumeLevel \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09* @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_FadeVolumeLevel", "1.000000" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa4\xe3\x83\xb3\n\xe5\x82\x99\xe8\x80\x83\xef\xbc\x89""FadeVolumeLevel\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xab\xe3\x81\xaf\xe6\x9c\xaa\xe5\xaf\xbe\xe5\xbf\x9c\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe3\x80\x80\xe3\x80\x80\xe3\x80\x80\xef\xbc\x88\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\xbf\x85\xe3\x81\x9a\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8c""1.0f\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe3\x80\x80\xe3\x80\x80\xe3\x80\x80""FadeInDuration\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\xaf""2.0f\xe3\x81\x8c\xe4\xb8\x8a\xe9\x99\x90\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param FadeInDuration \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa4\xe3\x83\xb3\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param FadeVolumeLevel \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeIn", nullptr, nullptr, sizeof(AtomComponent_eventFadeIn_Parms), Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_FadeOut_Statics
	{
		struct AtomComponent_eventFadeOut_Parms
		{
			float FadeOutDuration;
			float FadeVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeVolumeLevel = { "FadeVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventFadeOut_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa2\xe3\x82\xa6\xe3\x83\x88\xe3\x81\x97\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\n\x09* \xe5\x82\x99\xe8\x80\x83\xef\xbc\x89""FadeVolumeLevel\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xab\xe3\x81\xaf\xe6\x9c\xaa\xe5\xaf\xbe\xe5\xbf\x9c\xe3\x80\x82\n\x09* \xe3\x80\x80\xe3\x80\x80\xe3\x80\x80\xef\xbc\x88\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\xbf\x85\xe3\x81\x9a\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8c""0.0f\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09* \xe3\x80\x80\xe3\x80\x80\xe3\x80\x80""FadeOutDuration\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\xaf""10.0f\xe3\x81\x8c\xe4\xb8\x8a\xe9\x99\x90\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param FadeOutDuration \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa2\xe3\x82\xa6\xe3\x83\x88\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param FadeVolumeLevel \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_FadeVolumeLevel", "0.000000" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa2\xe3\x82\xa6\xe3\x83\x88\xe3\x81\x97\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\n\xe5\x82\x99\xe8\x80\x83\xef\xbc\x89""FadeVolumeLevel\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xab\xe3\x81\xaf\xe6\x9c\xaa\xe5\xaf\xbe\xe5\xbf\x9c\xe3\x80\x82\n\xe3\x80\x80\xe3\x80\x80\xe3\x80\x80\xef\xbc\x88\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe3\x81\xa7\xe5\xbf\x85\xe3\x81\x9a\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\x8c""0.0f\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe3\x80\x80\xe3\x80\x80\xe3\x80\x80""FadeOutDuration\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe5\x80\xa4\xe3\x81\xaf""10.0f\xe3\x81\x8c\xe4\xb8\x8a\xe9\x99\x90\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param FadeOutDuration \xe3\x83\x95\xe3\x82\xa7\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xa2\xe3\x82\xa6\xe3\x83\x88\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xae\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param FadeVolumeLevel \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "FadeOut", nullptr, nullptr, sizeof(AtomComponent_eventFadeOut_Parms), Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics
	{
		struct AtomComponent_eventGetAtomComponentFromID_Parms
		{
			int32 TargetID;
			UAtomComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentFromID_Parms, ReturnValue), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_TargetID = { "TargetID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentFromID_Parms, TargetID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param TargetID ID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return AtomComponent\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae""AtomComponent\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param TargetID ID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return AtomComponent\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAtomComponentFromID", nullptr, nullptr, sizeof(AtomComponent_eventGetAtomComponentFromID_Parms), Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics
	{
		struct AtomComponent_eventGetAtomComponentID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetAtomComponentID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xaeID\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return AtomComponent\xe3\x81\xaeID\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xaeID\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return AtomComponent\xe3\x81\xaeID\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAtomComponentID", nullptr, nullptr, sizeof(AtomComponent_eventGetAtomComponentID_Parms), Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAtomComponentID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAtomComponentID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics
	{
		struct AtomComponent_eventGetAudioVolumeValueMap_Parms
		{
			EAtomAudioVolumeType type;
			TMap<FString,float> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetAudioVolumeValueMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetAudioVolumeValueMap_Parms, type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get AtomAudioVolume Value To apply." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetAudioVolumeValueMap", nullptr, nullptr, sizeof(AtomComponent_eventGetAudioVolumeValueMap_Parms), Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCueName_Statics
	{
		struct AtomComponent_eventGetCueName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCueName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d \xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return \xe7\x8f\xbe\xe5\x9c\xa8\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d \xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCueName", nullptr, nullptr, sizeof(AtomComponent_eventGetCueName_Parms), Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCueName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCueName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics
	{
		struct AtomComponent_eventGetCullDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCullDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currently applied cull distance; sum of maximum attenuation distance and cull distance margin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCullDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCullDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCullDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCullDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics
	{
		struct AtomComponent_eventGetCullDistanceMargin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCullDistanceMargin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currently applied margin to maximum attenuation distance for culling." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCullDistanceMargin", nullptr, nullptr, sizeof(AtomComponent_eventGetCullDistanceMargin_Parms), Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics
	{
		struct AtomComponent_eventGetCurrentBelongingAudioVolume_Parms
		{
			EAtomAudioVolumeType type;
			bool IsNeighbor;
			AAtomAudioVolume* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_IsNeighbor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNeighbor;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms, ReturnValue), Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor_SetBit(void* Obj)
	{
		((AtomComponent_eventGetCurrentBelongingAudioVolume_Parms*)Obj)->IsNeighbor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor = { "IsNeighbor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms), &Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms, type), Z_Construct_UEnum_CriWareRuntime_EAtomAudioVolumeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_IsNeighbor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get AtomAudioVolume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentBelongingAudioVolume", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentBelongingAudioVolume_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics
	{
		struct AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetCullDistance() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentCullingBoundaryDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentCullingBoundaryDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics
	{
		struct AtomComponent_eventGetCurrentCullingMarginDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentCullingMarginDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetCullDistanceMargin() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentCullingMarginDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentCullingMarginDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickDistance() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickBoundaryDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentEconomicTickBoundaryDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickFrequency() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickFrequency", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentEconomicTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics
	{
		struct AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickDistanceMargin() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentEconomicTickMarginDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentEconomicTickMarginDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics
	{
		struct AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetMaxAttenuationDistance() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetCurrentMaxAttenuationDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetCurrentMaxAttenuationDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics
	{
		struct AtomComponent_eventGetDefaultAttenuationEnable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventGetDefaultAttenuationEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventGetDefaultAttenuationEnable_Parms), &Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Override Attenuation Settings instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetDefaultAttenuationEnable", nullptr, nullptr, sizeof(AtomComponent_eventGetDefaultAttenuationEnable_Parms), Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics
	{
		struct AtomComponent_eventGetEconomicTickDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currently applied Economic-Tick distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetEconomicTickDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics
	{
		struct AtomComponent_eventGetEconomicTickDistanceMargin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickDistanceMargin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currently applied Economic-Tick distance margin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickDistanceMargin", nullptr, nullptr, sizeof(AtomComponent_eventGetEconomicTickDistanceMargin_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics
	{
		struct AtomComponent_eventGetEconomicTickFrequency_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetEconomicTickFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currently applied Economic-Tick frequency." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetEconomicTickFrequency", nullptr, nullptr, sizeof(AtomComponent_eventGetEconomicTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics
	{
		struct AtomComponent_eventGetMaxAttenuationDistance_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetMaxAttenuationDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get currenty applied maximum attenuation distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetMaxAttenuationDistance", nullptr, nullptr, sizeof(AtomComponent_eventGetMaxAttenuationDistance_Parms), Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics
	{
		struct AtomComponent_eventGetNumQueuedSounds_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetNumQueuedSounds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe3\x82\xb7\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x82\xb9\xe9\x80\xa3\xe7\xb5\x90\xe5\x86\x8d\xe7\x94\x9f\xe7\x94\xa8\xe3\x81\xab""AtomComponent\xe3\x81\xab\xe7\xa9\x8d\xe3\x81\xbe\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c 0 \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88\xe6\x9c\xaa\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe6\xae\x8b\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe7\xb5\x82\xe4\xba\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81""AtomComponent\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\x8cPlayEnd\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xab\xe6\xae\x8b\xe3\x81\xa3\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe6\x95\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xac\xe3\x82\xb9\xe9\x80\xa3\xe7\xb5\x90\xe5\x86\x8d\xe7\x94\x9f\xe7\x94\xa8\xe3\x81\xab""AtomComponent\xe3\x81\xab\xe7\xa9\x8d\xe3\x81\xbe\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\x8c 0 \xe3\x82\x92\xe8\xbf\x94\xe3\x81\x99\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88\xe6\x9c\xaa\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\x8c\xe6\xae\x8b\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe7\xb5\x82\xe4\xba\x86\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81""AtomComponent\xe3\x81\xae\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\x8cPlayEnd\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xab\xe6\xae\x8b\xe3\x81\xa3\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe6\x95\xb0\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetNumQueuedSounds", nullptr, nullptr, sizeof(AtomComponent_eventGetNumQueuedSounds_Parms), Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics
	{
		struct AtomComponent_eventGetSequencePosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetSequencePosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* Get Time\xe3\x81\xa8Get Sequence Position\xe3\x81\xaf\xe3\x80\x81""Atom Craft\xe4\xb8\x8a\xe3\x81\xa7\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x82\x92\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x81\xa8\xe3\x81\x8a\xe3\x82\x8a\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\xbbGet Time\xe3\x81\xaf\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xab\xe9\x96\xa2\xe4\xbf\x82\xe3\x81\xaa\xe3\x81\x8f\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*  \xef\xbc\x88\xe6\x99\x82\xe5\x88\xbb\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe5\xb8\xb8\xe3\x81\xab\xe5\xa2\x97\xe5\x8a\xa0\xe3\x81\x97\xe7\xb6\x9a\xe3\x81\x91\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09* \xe3\x83\xbbGet Sequence Position\xe3\x81\xaf\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\x8c\xe5\xb7\xbb\xe3\x81\x8d\xe6\x88\xbb\xe3\x81\xa3\xe3\x81\x9f\xe9\x9a\x9b\xe3\x80\x81\xe6\x99\x82\xe5\x88\xbb\xe3\x82\x82\xe5\xb7\xbb\xe3\x81\x8d\xe6\x88\xbb\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae(\xe7\xa7\x92)\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\nGet Time\xe3\x81\xa8Get Sequence Position\xe3\x81\xaf\xe3\x80\x81""Atom Craft\xe4\xb8\x8a\xe3\x81\xa7\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x82\x92\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe3\x81\xae\xe3\x81\xbf\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x8c\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe3\x81\xa8\xe3\x81\x8a\xe3\x82\x8a\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xbbGet Time\xe3\x81\xaf\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xab\xe9\x96\xa2\xe4\xbf\x82\xe3\x81\xaa\xe3\x81\x8f\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n \xef\xbc\x88\xe6\x99\x82\xe5\x88\xbb\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe5\xb8\xb8\xe3\x81\xab\xe5\xa2\x97\xe5\x8a\xa0\xe3\x81\x97\xe7\xb6\x9a\xe3\x81\x91\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\xe3\x83\xbbGet Sequence Position\xe3\x81\xaf\xe3\x80\x81\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae\xe3\x81\x8c\xe5\xb7\xbb\xe3\x81\x8d\xe6\x88\xbb\xe3\x81\xa3\xe3\x81\x9f\xe9\x9a\x9b\xe3\x80\x81\xe6\x99\x82\xe5\x88\xbb\xe3\x82\x82\xe5\xb7\xbb\xe3\x81\x8d\xe6\x88\xbb\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe4\xbd\x8d\xe7\xbd\xae(\xe7\xa7\x92)\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetSequencePosition", nullptr, nullptr, sizeof(AtomComponent_eventGetSequencePosition_Parms), Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetSequencePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetSequencePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetStatus_Statics
	{
		struct AtomComponent_eventGetStatus_Parms
		{
			EAtomComponentStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe7\x8a\xb6\xe6\x85\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe8\xbf\x94\xe3\x82\x8a\xe5\x80\xa4\xe3\x81\xaf""EAtomComponentStatus\xe5\x88\x97\xe6\x8c\x99\xe5\x9e\x8b\xe3\x81\xa7\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\xbbStop : \xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\n\x09* \xe3\x83\xbbPrep : \xe5\x86\x8d\xe7\x94\x9f\xe6\xba\x96\xe5\x82\x99\xe4\xb8\xad\n\x09* \xe3\x83\xbbPlaying : \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\n\x09* \xe3\x83\xbbPlayEnd : \xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x82\xe4\xba\x86\n\x09* \xe3\x83\xbb""Error : \xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\n\x09*\n\x09* @return \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe7\x8a\xb6\xe6\x85\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe8\xbf\x94\xe3\x82\x8a\xe5\x80\xa4\xe3\x81\xaf""EAtomComponentStatus\xe5\x88\x97\xe6\x8c\x99\xe5\x9e\x8b\xe3\x81\xa7\xe3\x80\x81\xe4\xbb\xa5\xe4\xb8\x8b\xe3\x81\xae\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\xbbStop : \xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\n\xe3\x83\xbbPrep : \xe5\x86\x8d\xe7\x94\x9f\xe6\xba\x96\xe5\x82\x99\xe4\xb8\xad\n\xe3\x83\xbbPlaying : \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\n\xe3\x83\xbbPlayEnd : \xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x82\xe4\xba\x86\n\xe3\x83\xbb""Error : \xe3\x82\xa8\xe3\x83\xa9\xe3\x83\xbc\n\n@return \xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(AtomComponent_eventGetStatus_Parms), Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetTime_Statics
	{
		struct AtomComponent_eventGetTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* \xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@return \xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x8b\xe3\x82\x89\xe3\x81\xae\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetTime", nullptr, nullptr, sizeof(AtomComponent_eventGetTime_Parms), Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics
	{
		struct AtomComponent_eventGetVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09 * AtomComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x80\x9f\xe5\xba\xa6\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @return AtomComponent\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x80\x9f\xe5\xba\xa6(cm/sec)\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x80\x9f\xe5\xba\xa6\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return AtomComponent\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe7\xa7\xbb\xe5\x8b\x95\xe9\x80\x9f\xe5\xba\xa6(cm/sec)\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetVelocity", nullptr, nullptr, sizeof(AtomComponent_eventGetVelocity_Parms), Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_GetVolume_Statics
	{
		struct AtomComponent_eventGetVolume_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventGetVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "GetVolume", nullptr, nullptr, sizeof(AtomComponent_eventGetVolume_Parms), Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_GetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_GetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics
	{
		struct AtomComponent_eventHasBeenEconomicTick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventHasBeenEconomicTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventHasBeenEconomicTick_Parms), &Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsReducingTickFrequency() instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "HasBeenEconomicTick", nullptr, nullptr, sizeof(AtomComponent_eventHasBeenEconomicTick_Parms), Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsLoop_Statics
	{
		struct AtomComponent_eventIsLoop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventIsLoop_Parms), &Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Get whether it's loop cue according to LoopSetting." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsLoop", nullptr, nullptr, sizeof(AtomComponent_eventIsLoop_Parms), Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsPaused_Statics
	{
		struct AtomComponent_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6Pause\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x8c\xe8\xa1\x8c\xe3\x82\x8f\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x88\xa4\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return AtomComponent\xe3\x81\x8c\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf[Return Value]\xe3\x81\x8ctrue\xe3\x81\xab\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6Pause\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x8c\xe8\xa1\x8c\xe3\x82\x8f\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x88\xa4\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return AtomComponent\xe3\x81\x8c\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf[Return Value]\xe3\x81\x8ctrue\xe3\x81\xab\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsPaused", nullptr, nullptr, sizeof(AtomComponent_eventIsPaused_Parms), Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics
	{
		struct AtomComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6Play\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x8c\xe8\xa1\x8c\xe3\x82\x8f\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x88\xa4\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return AtomComponent\xe3\x81\x8c\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf[Return Value]\xe3\x81\x8ctrue\xe3\x81\xab\xe3\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6Play\xe6\x93\x8d\xe4\xbd\x9c\xe3\x81\x8c\xe8\xa1\x8c\xe3\x82\x8f\xe3\x82\x8c\xe3\x81\x9f\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe5\x88\xa4\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return AtomComponent\xe3\x81\x8c\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf[Return Value]\xe3\x81\x8ctrue\xe3\x81\xab\xe3\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(AtomComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics
	{
		struct AtomComponent_eventIsReducingTickFrequency_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomComponent_eventIsReducingTickFrequency_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventIsReducingTickFrequency_Parms), &Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "True when currently reducting tick frenquence of this AtomComponent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "IsReducingTickFrequency", nullptr, nullptr, sizeof(AtomComponent_eventIsReducingTickFrequency_Parms), Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Pause_Statics
	{
		struct AtomComponent_eventPause_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomComponent_eventPause_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventPause_Parms), &Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_Pause_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x80\x81\xe3\x82\x82\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param bPause true\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x80\x81\xe3\x82\x82\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param bPause true\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x86\x8d\xe9\x96\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Pause", nullptr, nullptr, sizeof(AtomComponent_eventPause_Parms), Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Play_Statics
	{
		struct AtomComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xa7\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\x09*\n\x09* @param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xa7\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\n\n@param StartTime \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe9\x96\x93(\xe7\xa7\x92)\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xa7\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x80\x94\xe4\xb8\xad\xe3\x81\x8b\xe3\x82\x89\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Play", nullptr, nullptr, sizeof(AtomComponent_eventPlay_Parms), Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics
	{
		struct AtomComponent_eventSetAisacByName_Parms
		{
			FString ControlName;
			float ControlValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ControlValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ControlName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlValue = { "ControlValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetAisacByName_Parms, ControlName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::NewProp_ControlName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* AISAC\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xaa\xe8\xa8\xad\xe5\xae\x9a\xe7\xae\x87\xe6\x89\x80\xe3\x81\xab\xe3\x81\xa4\xe3\x81\x84\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x8c \xe9\x9f\xb3\xe6\xba\x90\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae \xe3\x80\x8d\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param ControlName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param ControlValue \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\nAISAC\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xaa\xe8\xa8\xad\xe5\xae\x9a\xe7\xae\x87\xe6\x89\x80\xe3\x81\xab\xe3\x81\xa4\xe3\x81\x84\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x8c \xe9\x9f\xb3\xe6\xba\x90\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae \xe3\x80\x8d\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param ControlName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param ControlValue \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAisacByName", nullptr, nullptr, sizeof(AtomComponent_eventSetAisacByName_Parms), Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAisacByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAisacByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics
	{
		struct AtomComponent_eventSetAsrRackID_Parms
		{
			int32 asr_rack_id;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_asr_rack_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::NewProp_asr_rack_id = { "asr_rack_id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetAsrRackID_Parms, asr_rack_id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::NewProp_asr_rack_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* ASR Rack ID\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\n\x09*\n\x09* @param asr_rack_id ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xafID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_asr_rack_id", "0" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "ASR Rack ID\xe3\x81\xae\xe6\x8c\x87\xe5\xae\x9a\n\n@param asr_rack_id ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xafID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAsrRackID", nullptr, nullptr, sizeof(AtomComponent_eventSetAsrRackID_Parms), Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAsrRackID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAsrRackID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics
	{
		struct AtomComponent_eventSetAsrRackIdArray_Parms
		{
			TArray<int32> AsrRackIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetAsrRackIdArray_Parms, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::NewProp_AsrRackIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* ASR Rack ID\xe3\x81\xae\xe8\xa4\x87\xe6\x95\xb0\xe6\x8c\x87\xe5\xae\x9a\n\x09*\n\x09* @param AsrRackIDs ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xafID\xe3\x81\xae\xe9\x85\x8d\xe5\x88\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "ASR Rack ID\xe3\x81\xae\xe8\xa4\x87\xe6\x95\xb0\xe6\x8c\x87\xe5\xae\x9a\n\n@param AsrRackIDs ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xafID\xe3\x81\xae\xe9\x85\x8d\xe5\x88\x97\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetAsrRackIdArray", nullptr, nullptr, sizeof(AtomComponent_eventSetAsrRackIdArray_Parms), Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics
	{
		struct AtomComponent_eventSetBusSendLevel_Parms
		{
			int32 BusId;
			float Level;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevel_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::NewProp_BusId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* DEPRECATED - Use SetBusSendLevelByName instead.\n\x09* \xe9\x9d\x9e\xe6\x8e\xa8\xe5\xa5\xa8\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SetBusSendLevelByName\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe3\x81\x94\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "DEPRECATED - Use SetBusSendLevelByName instead.\n\xe9\x9d\x9e\xe6\x8e\xa8\xe5\xa5\xa8\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SetBusSendLevelByName\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe3\x81\x94\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevel", nullptr, nullptr, sizeof(AtomComponent_eventSetBusSendLevel_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics
	{
		struct AtomComponent_eventSetBusSendLevelByName_Parms
		{
			FString BusName;
			float Level;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelByName_Parms, BusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::NewProp_BusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* [\xe6\xb3\xa8\xe6\x84\x8f]\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c""0\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81[Set Bus Send Level Offset by Name]\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param BusName \xe5\x87\xba\xe5\x8a\x9b\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Level \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x81\x93\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe3\x80\x81\xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe6\x8e\x9b\xe3\x81\x91\xe7\xae\x97\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n[\xe6\xb3\xa8\xe6\x84\x8f]\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c""0\xe3\x81\xae\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe8\xbf\xbd\xe5\x8a\xa0\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81[Set Bus Send Level Offset by Name]\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param BusName \xe5\x87\xba\xe5\x8a\x9b\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Level \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x81\x93\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe3\x80\x81\xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe6\x8e\x9b\xe3\x81\x91\xe7\xae\x97\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelByName", nullptr, nullptr, sizeof(AtomComponent_eventSetBusSendLevelByName_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics
	{
		struct AtomComponent_eventSetBusSendLevelOffset_Parms
		{
			int32 BusId;
			float LevelOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffset_Parms, BusId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_LevelOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::NewProp_BusId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* DEPRECATED - Use SetBusSendLevelOffsetByName instead.\n\x09* \xe9\x9d\x9e\xe6\x8e\xa8\xe5\xa5\xa8\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SetBusSendLevelOffsetByName\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe3\x81\x94\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "DEPRECATED - Use SetBusSendLevelOffsetByName instead.\n\xe9\x9d\x9e\xe6\x8e\xa8\xe5\xa5\xa8\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82SetBusSendLevelOffsetByName\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe3\x81\x94\xe5\x88\xa9\xe7\x94\xa8\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelOffset", nullptr, nullptr, sizeof(AtomComponent_eventSetBusSendLevelOffset_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics
	{
		struct AtomComponent_eventSetBusSendLevelOffsetByName_Parms
		{
			FString BusName;
			float LevelOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LevelOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_LevelOffset = { "LevelOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, LevelOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetBusSendLevelOffsetByName_Parms, BusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_LevelOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::NewProp_BusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa3\x9c\xe6\xad\xa3\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81[Set Bus Send Level by Name]\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param BusName \xe5\x87\xba\xe5\x8a\x9b\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param LevelOffset \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x80\x81\xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe8\xb6\xb3\xe3\x81\x97\xe7\xae\x97\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe6\xb8\x88\xe3\x81\xbf\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe8\xa3\x9c\xe6\xad\xa3\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81[Set Bus Send Level by Name]\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param BusName \xe5\x87\xba\xe5\x8a\x9b\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param LevelOffset \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x81\x99\xe3\x82\x8b\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x81\x93\xe3\x81\x93\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x80\x81\xe3\x81\x82\xe3\x82\x89\xe3\x81\x8b\xe3\x81\x98\xe3\x82\x81""CRI Atom Craft\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe8\xb6\xb3\xe3\x81\x97\xe7\xae\x97\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetBusSendLevelOffsetByName", nullptr, nullptr, sizeof(AtomComponent_eventSetBusSendLevelOffsetByName_Parms), Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics
	{
		struct AtomComponent_eventSetDefaultAttenuationEnable_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AtomComponent_eventSetDefaultAttenuationEnable_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomComponent_eventSetDefaultAttenuationEnable_Parms), &Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Override Attenuation Settings instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetDefaultAttenuationEnable", nullptr, nullptr, sizeof(AtomComponent_eventSetDefaultAttenuationEnable_Parms), Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics
	{
		struct AtomComponent_eventSetNextBlockIndex_Parms
		{
			int32 BlockIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlockIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::NewProp_BlockIndex = { "BlockIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetNextBlockIndex_Parms, BlockIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::NewProp_BlockIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xa7\xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xaa\xe8\xa8\xad\xe5\xae\x9a\xe7\xae\x87\xe6\x89\x80\xe3\x81\xab\xe3\x81\xa4\xe3\x81\x84\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x8c \xe9\x9f\xb3\xe6\xba\x90\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae \xe3\x80\x8d\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param BlockIndex \xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xae\xe7\x95\xaa\xe5\x8f\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xa7\xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x87\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xb9\xe3\x81\xae\xe5\x88\x9d\xe6\x9c\x9f\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xae\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x82\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe5\x85\xb7\xe4\xbd\x93\xe7\x9a\x84\xe3\x81\xaa\xe8\xa8\xad\xe5\xae\x9a\xe7\xae\x87\xe6\x89\x80\xe3\x81\xab\xe3\x81\xa4\xe3\x81\x84\xe3\x81\xa6\xe3\x81\xaf\xe3\x80\x8c \xe9\x9f\xb3\xe6\xba\x90\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe9\x85\x8d\xe7\xbd\xae \xe3\x80\x8d\xe3\x82\x92\xe5\x8f\x82\xe7\x85\xa7\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param BlockIndex \xe6\xac\xa1\xe3\x81\xab\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xae\xe7\x95\xaa\xe5\x8f\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetNextBlockIndex", nullptr, nullptr, sizeof(AtomComponent_eventSetNextBlockIndex_Parms), Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPitch_Statics
	{
		struct AtomComponent_eventSetPitch_Parms
		{
			float Pitch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetPitch_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::NewProp_Pitch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param Pitch \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x88\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe5\xa4\x89\xe6\x9b\xb4\xe9\x87\x8f\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Pitch \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x88\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe5\xa4\x89\xe6\x9b\xb4\xe9\x87\x8f\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPitch", nullptr, nullptr, sizeof(AtomComponent_eventSetPitch_Parms), Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics
	{
		struct AtomComponent_eventSetPitchMultiplier_Parms
		{
			float NewPitchMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPitchMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier = { "NewPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetPitchMultiplier_Parms, NewPitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::NewProp_NewPitchMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8cUAtomComponent::SetPitch\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa8\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* [New Pitch Multiplier]\xe3\x81\xab""2.0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x80\x8d\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xef\xbc\x88""1\xe3\x82\xaa\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x83\x96\xe9\xab\x98\xe3\x81\x84\xe9\x9f\xb3\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* [New Pitch Multiplier]\xe3\x81\xab""0.5\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x8d\x8a\xe5\x88\x86\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xef\xbc\x88""1\xe3\x82\xaa\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x83\x96\xe4\xbd\x8e\xe3\x81\x84\xe9\x9f\xb3\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param NewPitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe5\xa4\x89\xe6\x9b\xb4\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe3\x82\x92\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\x8cUAtomComponent::SetPitch\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa8\xe7\x95\xb0\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n[New Pitch Multiplier]\xe3\x81\xab""2.0\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x80\x8d\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xef\xbc\x88""1\xe3\x82\xaa\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x83\x96\xe9\xab\x98\xe3\x81\x84\xe9\x9f\xb3\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n[New Pitch Multiplier]\xe3\x81\xab""0.5\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe5\x8d\x8a\xe5\x88\x86\xe3\x81\xae\xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xef\xbc\x88""1\xe3\x82\xaa\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x83\x96\xe4\xbd\x8e\xe3\x81\x84\xe9\x9f\xb3\xef\xbc\x89\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param NewPitchMultiplier \xe3\x83\x94\xe3\x83\x83\xe3\x83\x81\xe5\xa4\x89\xe6\x9b\xb4\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetPitchMultiplier", nullptr, nullptr, sizeof(AtomComponent_eventSetPitchMultiplier_Parms), Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetRegion_Statics
	{
		struct AtomComponent_eventSetRegion_Parms
		{
			UAtom3dRegion* InRegion;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::NewProp_InRegion = { "InRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetRegion_Parms, InRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::NewProp_InRegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetRegion", nullptr, nullptr, sizeof(AtomComponent_eventSetRegion_Parms), Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics
	{
		struct AtomComponent_eventSetSelectorLabel_Parms
		{
			FString Selector;
			FString Label;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, Label), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetSelectorLabel_Parms, Selector), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::NewProp_Selector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xa0\xe3\x81\x91\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param Selector \xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Label \xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\x8c\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\xa8\xe4\xb8\x80\xe8\x87\xb4\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xa0\xe3\x81\x91\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Selector \xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Label \xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSelectorLabel", nullptr, nullptr, sizeof(AtomComponent_eventSetSelectorLabel_Parms), Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSelectorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSelectorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSound_Statics
	{
		struct AtomComponent_eventSetSound_Parms
		{
			USoundAtomCue* NewSound;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetSound_Parms, NewSound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xabUAtomComponent::SetSound\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\x9f\xe9\x9a\x9b\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe8\xa9\xb3\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf""FAQ\xe3\x81\xae\xe3\x80\x8c SetSound\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x81\xa8\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe6\xad\xa2\xe3\x81\xbe\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 \xe3\x80\x8d\xe3\x82\x92\xe3\x81\x94\xe8\xa6\xa7\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param NewSound \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xabUAtomComponent::SetSound\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe3\x81\x9f\xe9\x9a\x9b\xe3\x80\x81\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe8\xa9\xb3\xe3\x81\x97\xe3\x81\x8f\xe3\x81\xaf""FAQ\xe3\x81\xae\xe3\x80\x8c SetSound\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe3\x81\xa8\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe6\xad\xa2\xe3\x81\xbe\xe3\x81\xa3\xe3\x81\xa6\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82 \xe3\x80\x8d\xe3\x82\x92\xe3\x81\x94\xe8\xa6\xa7\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param NewSound \xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xa2\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSound", nullptr, nullptr, sizeof(AtomComponent_eventSetSound_Parms), Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics
	{
		struct AtomComponent_eventSetSoundObject_Parms
		{
			UAtomSoundObject* InSoundObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSoundObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::NewProp_InSoundObject = { "InSoundObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetSoundObject_Parms, InSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::NewProp_InSoundObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param SoundObject \xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param SoundObject \xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetSoundObject", nullptr, nullptr, sizeof(AtomComponent_eventSetSoundObject_Parms), Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetSoundObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetSoundObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_SetVolume_Statics
	{
		struct AtomComponent_eventSetVolume_Parms
		{
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomComponent_eventSetVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x82\x92""0.0f\xe3\x80\x9c""1.0f\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x81\xaf\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x8c\xaf\xe5\xb9\x85\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xef\xbc\x88""1.0f\xe3\x81\x8c\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe6\x9c\xac\xe6\x9d\xa5\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x80\x81""0.0f\xe3\x81\x8c\xe7\x84\xa1\xe9\x9f\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x82\x92""0.0f\xe3\x80\x9c""1.0f\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x81\xaf\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x8c\xaf\xe5\xb9\x85\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xef\xbc\x88""1.0f\xe3\x81\x8c\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe6\x9c\xac\xe6\x9d\xa5\xe3\x81\xae\xe9\x9f\xb3\xe9\x87\x8f\xe3\x80\x81""0.0f\xe3\x81\x8c\xe7\x84\xa1\xe9\x9f\xb3\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "SetVolume", nullptr, nullptr, sizeof(AtomComponent_eventSetVolume_Parms), Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_SetVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_SetVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xae\x8c\xe4\xba\x86\xe5\xbe\xa9\xe5\xb8\xb0\xe5\x9e\x8b\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\x09* \xe3\x81\x9d\xe3\x81\xae\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe9\x96\xa2\xe6\x95\xb0\xe5\x86\x85\xe3\x81\xa7\xe5\x87\xa6\xe7\x90\x86\xe3\x81\x8c\xe9\x95\xb7\xe6\x99\x82\xe9\x96\x93\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x81\x8c\xe3\x80\x81\n\x09* \xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x81\x9f\xe6\x99\x82\xe7\x82\xb9\xe3\x81\xa7\xe3\x81\xaf\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe5\x8f\xaf\xe8\x83\xbd\xe6\x80\xa7\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\xab\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\xef\xbc\x88\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xab\xe3\x80\x81\xe6\x99\x82\xe9\x96\x93\xe3\x81\x8c\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe5\x81\x9c\xe6\xad\xa2\xe3\x82\x92\xe4\xbf\x9d\xe8\xa8\xbc\xe3\x81\x99\xe3\x82\x8b\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe5\xbe\x8c\xe3\x80\x81\n\x09* UAtomComponent::GetStatus() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88""EAtomComponentStatus::Stop\xef\xbc\x89\n\x09* \xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xae\x8c\xe4\xba\x86\xe5\xbe\xa9\xe5\xb8\xb0\xe5\x9e\x8b\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe3\x81\x9d\xe3\x81\xae\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe9\x96\xa2\xe6\x95\xb0\xe5\x86\x85\xe3\x81\xa7\xe5\x87\xa6\xe7\x90\x86\xe3\x81\x8c\xe9\x95\xb7\xe6\x99\x82\xe9\x96\x93\xe3\x83\x96\xe3\x83\xad\xe3\x83\x83\xe3\x82\xaf\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x81\x8c\xe3\x80\x81\n\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe6\x8a\x9c\xe3\x81\x91\xe3\x81\x9f\xe6\x99\x82\xe7\x82\xb9\xe3\x81\xa7\xe3\x81\xaf\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe5\x8f\xaf\xe8\x83\xbd\xe6\x80\xa7\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe7\x82\xb9\xe3\x81\xab\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\xef\xbc\x88\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xab\xe3\x80\x81\xe6\x99\x82\xe9\x96\x93\xe3\x81\x8c\xe3\x81\x8b\xe3\x81\x8b\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x81\x9c\xe6\xad\xa2\xe3\x82\x92\xe4\xbf\x9d\xe8\xa8\xbc\xe3\x81\x99\xe3\x82\x8b\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xab\xe3\x81\xaf\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe5\x91\xbc\xe3\x81\xb3\xe5\x87\xba\xe3\x81\x97\xe5\xbe\x8c\xe3\x80\x81\nUAtomComponent::GetStatus() \xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\x8c\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88""EAtomComponentStatus::Stop\xef\xbc\x89\n\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x82\x92\xe7\xa2\xba\xe8\xaa\x8d\xe3\x81\x97\xe3\x81\xa6\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomSound" },
		{ "Comment", "/**\n\x09* AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab ADX2 \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa8\xe3\x83\xb3\xe3\x83\x99\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xa0\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\n\x09* \xe3\x81\x9d\xe3\x82\x8c\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x97\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae AtomComponent \xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\xae\x9f\xe8\xa1\x8c\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\n\x09* \xe5\x8d\xb3\xe5\xba\xa7\xe3\x81\xab\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x88\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe3\x81\xae\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x81\xbf\xe3\x82\x84\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x89\xe3\x81\x97\xe3\x80\x81\n\x09* \xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\xaf\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88""EAtomComponentStatus::Stop\xef\xbc\x89\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xae\x8c\xe4\xba\x86\xe5\xbe\xa9\xe5\xb8\xb0\xe5\x9e\x8b\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent\xe3\x81\xab\xe3\x82\x88\xe3\x82\x8b\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xab ADX2 \xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\xa8\xe3\x83\xb3\xe3\x83\x99\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x97\xe3\x81\xae\xe3\x83\xaa\xe3\x83\xaa\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\xa0\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\n\xe3\x81\x9d\xe3\x82\x8c\xe3\x82\x92\xe7\x84\xa1\xe8\xa6\x96\xe3\x81\x97\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae AtomComponent \xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x82\x92\xe5\xae\x9f\xe8\xa1\x8c\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\n\xe5\x8d\xb3\xe5\xba\xa7\xe3\x81\xab\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x88\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe3\x81\xae\xe8\xaa\xad\xe3\x81\xbf\xe8\xbe\xbc\xe3\x81\xbf\xe3\x82\x84\xe3\x80\x81\xe7\x99\xba\xe9\x9f\xb3\xe3\x82\x92\xe5\x81\x9c\xe6\xad\xa2\xef\xbc\x89\xe3\x81\x97\xe3\x80\x81\n\xe3\x82\xb9\xe3\x83\x86\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\xb9\xe3\x81\xaf\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xef\xbc\x88""EAtomComponentStatus::Stop\xef\xbc\x89\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xaf\xe5\xae\x8c\xe4\xba\x86\xe5\xbe\xa9\xe5\xb8\xb0\xe5\x9e\x8b\xe3\x81\xae\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomComponent, nullptr, "StopWithoutReleaseTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomComponent_NoRegister()
	{
		return UAtomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAtomSequenceCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomSequenceCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAtomBeatSyncCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAtomBeatSyncCallback;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistanceSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CullDistanceSphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicDistanceSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EconomicDistanceSphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MinDistanceSphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceSphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaxDistanceSphereComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppliedSoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AppliedSoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnly2DSound_MetaData[];
#endif
		static void NewProp_bOnly2DSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnly2DSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultSelectorLabel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultAisacControl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlockIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBlockIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAudioVolume_MetaData[];
#endif
		static void NewProp_bUseAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[];
#endif
		static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePlaylist_MetaData[];
#endif
		static void NewProp_bUsePlaylist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePlaylist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultipleSoundPlayback_MetaData[];
#endif
		static void NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultipleSoundPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistAcrossLevelTransition_MetaData[];
#endif
		static void NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistAcrossLevelTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomComponent_AdjustAttenuation, "AdjustAttenuation" }, // 1292765976
		{ &Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature, "AtomBeatSyncCallbackDelegate__DelegateSignature" }, // 2335344417
		{ &Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature, "AtomSequenceCallbackDelegate__DelegateSignature" }, // 4229311704
		{ &Z_Construct_UFunction_UAtomComponent_AttachAreaSoundVolume, "AttachAreaSoundVolume" }, // 2664263154
		{ &Z_Construct_UFunction_UAtomComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 1701119492
		{ &Z_Construct_UFunction_UAtomComponent_ClearSelectorLabels, "ClearSelectorLabels" }, // 4178959978
		{ &Z_Construct_UFunction_UAtomComponent_DestroyComponentByID, "DestroyComponentByID" }, // 1427576957
		{ &Z_Construct_UFunction_UAtomComponent_EnqueueSound, "EnqueueSound" }, // 247511155
		{ &Z_Construct_UFunction_UAtomComponent_FadeIn, "FadeIn" }, // 1192202024
		{ &Z_Construct_UFunction_UAtomComponent_FadeOut, "FadeOut" }, // 527519068
		{ &Z_Construct_UFunction_UAtomComponent_GetAtomComponentFromID, "GetAtomComponentFromID" }, // 888358868
		{ &Z_Construct_UFunction_UAtomComponent_GetAtomComponentID, "GetAtomComponentID" }, // 2730934032
		{ &Z_Construct_UFunction_UAtomComponent_GetAudioVolumeValueMap, "GetAudioVolumeValueMap" }, // 156910115
		{ &Z_Construct_UFunction_UAtomComponent_GetCueName, "GetCueName" }, // 666444875
		{ &Z_Construct_UFunction_UAtomComponent_GetCullDistance, "GetCullDistance" }, // 3801787972
		{ &Z_Construct_UFunction_UAtomComponent_GetCullDistanceMargin, "GetCullDistanceMargin" }, // 3295788149
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentBelongingAudioVolume, "GetCurrentBelongingAudioVolume" }, // 4218337473
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentCullingBoundaryDistance, "GetCurrentCullingBoundaryDistance" }, // 2999701575
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentCullingMarginDistance, "GetCurrentCullingMarginDistance" }, // 1385231419
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickBoundaryDistance, "GetCurrentEconomicTickBoundaryDistance" }, // 1077429506
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickFrequency, "GetCurrentEconomicTickFrequency" }, // 958515972
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentEconomicTickMarginDistance, "GetCurrentEconomicTickMarginDistance" }, // 4158475951
		{ &Z_Construct_UFunction_UAtomComponent_GetCurrentMaxAttenuationDistance, "GetCurrentMaxAttenuationDistance" }, // 283444839
		{ &Z_Construct_UFunction_UAtomComponent_GetDefaultAttenuationEnable, "GetDefaultAttenuationEnable" }, // 1138776742
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistance, "GetEconomicTickDistance" }, // 2263705851
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickDistanceMargin, "GetEconomicTickDistanceMargin" }, // 1170597267
		{ &Z_Construct_UFunction_UAtomComponent_GetEconomicTickFrequency, "GetEconomicTickFrequency" }, // 3097199140
		{ &Z_Construct_UFunction_UAtomComponent_GetMaxAttenuationDistance, "GetMaxAttenuationDistance" }, // 1589036832
		{ &Z_Construct_UFunction_UAtomComponent_GetNumQueuedSounds, "GetNumQueuedSounds" }, // 3032705743
		{ &Z_Construct_UFunction_UAtomComponent_GetSequencePosition, "GetSequencePosition" }, // 1566175651
		{ &Z_Construct_UFunction_UAtomComponent_GetStatus, "GetStatus" }, // 2415294879
		{ &Z_Construct_UFunction_UAtomComponent_GetTime, "GetTime" }, // 575080215
		{ &Z_Construct_UFunction_UAtomComponent_GetVelocity, "GetVelocity" }, // 3379136541
		{ &Z_Construct_UFunction_UAtomComponent_GetVolume, "GetVolume" }, // 4047964268
		{ &Z_Construct_UFunction_UAtomComponent_HasBeenEconomicTick, "HasBeenEconomicTick" }, // 1686096758
		{ &Z_Construct_UFunction_UAtomComponent_IsLoop, "IsLoop" }, // 448090710
		{ &Z_Construct_UFunction_UAtomComponent_IsPaused, "IsPaused" }, // 1696422210
		{ &Z_Construct_UFunction_UAtomComponent_IsPlaying, "IsPlaying" }, // 1082632069
		{ &Z_Construct_UFunction_UAtomComponent_IsReducingTickFrequency, "IsReducingTickFrequency" }, // 2064551523
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, "OnAudioFinished__DelegateSignature" }, // 3877272145
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature, "OnAudioVolumeChanged__DelegateSignature" }, // 2609898505
		{ &Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature, "OnStatusChanged__DelegateSignature" }, // 2816602300
		{ &Z_Construct_UFunction_UAtomComponent_Pause, "Pause" }, // 517446256
		{ &Z_Construct_UFunction_UAtomComponent_Play, "Play" }, // 230067176
		{ &Z_Construct_UFunction_UAtomComponent_SetAisacByName, "SetAisacByName" }, // 1355942805
		{ &Z_Construct_UFunction_UAtomComponent_SetAsrRackID, "SetAsrRackID" }, // 3350289493
		{ &Z_Construct_UFunction_UAtomComponent_SetAsrRackIdArray, "SetAsrRackIdArray" }, // 1302953218
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevel, "SetBusSendLevel" }, // 1617182661
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 2118215961
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffset, "SetBusSendLevelOffset" }, // 2483591414
		{ &Z_Construct_UFunction_UAtomComponent_SetBusSendLevelOffsetByName, "SetBusSendLevelOffsetByName" }, // 1654049289
		{ &Z_Construct_UFunction_UAtomComponent_SetDefaultAttenuationEnable, "SetDefaultAttenuationEnable" }, // 2233516232
		{ &Z_Construct_UFunction_UAtomComponent_SetNextBlockIndex, "SetNextBlockIndex" }, // 1364978419
		{ &Z_Construct_UFunction_UAtomComponent_SetPitch, "SetPitch" }, // 2188758631
		{ &Z_Construct_UFunction_UAtomComponent_SetPitchMultiplier, "SetPitchMultiplier" }, // 2316774269
		{ &Z_Construct_UFunction_UAtomComponent_SetRegion, "SetRegion" }, // 3455158215
		{ &Z_Construct_UFunction_UAtomComponent_SetSelectorLabel, "SetSelectorLabel" }, // 3060072130
		{ &Z_Construct_UFunction_UAtomComponent_SetSound, "SetSound" }, // 279240903
		{ &Z_Construct_UFunction_UAtomComponent_SetSoundObject, "SetSoundObject" }, // 3285080393
		{ &Z_Construct_UFunction_UAtomComponent_SetVolume, "SetVolume" }, // 2477447762
		{ &Z_Construct_UFunction_UAtomComponent_Stop, "Stop" }, // 1667224430
		{ &Z_Construct_UFunction_UAtomComponent_StopWithoutReleaseTime, "StopWithoutReleaseTime" }, // 167330529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "CRIWARE Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "AtomComponent.h" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "AtomComponent class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData[] = {
		{ "Category", "Atom Callback" },
		{ "Comment", "/* \xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe5\xa4\x89\xe6\x95\xb0 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe5\xa4\x89\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback = { "OnAtomSequenceCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, OnAtomSequenceCallback), Z_Construct_UDelegateFunction_UAtomComponent_AtomSequenceCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData[] = {
		{ "Category", "Atom Callback" },
		{ "Comment", "/* \xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe5\xa4\x89\xe6\x95\xb0 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe7\x94\xa8\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe5\xa4\x89\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback = { "OnAtomBeatSyncCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, OnAtomBeatSyncCallback), Z_Construct_UDelegateFunction_UAtomComponent_AtomBeatSyncCallbackDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_CullDistanceSphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Cull Distance for Sphere Component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CullDistanceSphereComponent = { "CullDistanceSphereComponent", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, CullDistanceSphereComponent), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CullDistanceSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CullDistanceSphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_EconomicDistanceSphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Economic distance for Sphere Component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_EconomicDistanceSphereComponent = { "EconomicDistanceSphereComponent", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, EconomicDistanceSphereComponent), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_EconomicDistanceSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_EconomicDistanceSphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_MinDistanceSphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Minimum distance for Sphere Component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_MinDistanceSphereComponent = { "MinDistanceSphereComponent", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, MinDistanceSphereComponent), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_MinDistanceSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_MinDistanceSphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_MaxDistanceSphereComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Maximum distance for Sphere Component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_MaxDistanceSphereComponent = { "MaxDistanceSphereComponent", nullptr, (EPropertyFlags)0x0040000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, MaxDistanceSphereComponent), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_MaxDistanceSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_MaxDistanceSphereComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData[] = {
		{ "Comment", "/* \xe9\x81\xa9\xe7\x94\xa8\xe6\xb8\x88\xe3\x81\xbfSoundObject */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe9\x81\xa9\xe7\x94\xa8\xe6\xb8\x88\xe3\x81\xbfSoundObject" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject = { "AppliedSoundObject", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, AppliedSoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData[] = {
		{ "Comment", "/* \xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88 */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x82\xad\xe3\x83\xa5\xe3\x83\xbc\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x88" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Attenuation overrides." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Enable attenuation settings." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Attenuation settings for asset." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData[] = {
		{ "Comment", "/** SoundObject \n\x09 * @deprecated Use SoundObject instead.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use SoundObject instead." },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "SoundObject\n@deprecated Use SoundObject instead." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject = { "DefaultSoundObject", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, DefaultSoundObject_DEPRECATED), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData[] = {
		{ "Comment", "/** The view port representing the current game instance. Can be 0 so don't use without checking. */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "The view port representing the current game instance. Can be 0 so don't use without checking." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport = { "GameViewport", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData[] = {
		{ "Comment", "/** A pointer to a UWorld that is the duplicated/saved-loaded to be played in with \"Play From Here\" \x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "A pointer to a UWorld that is the duplicated/saved-loaded to be played in with \"Play From Here\"" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld = { "PlayWorld", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, PlayWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished = { "OnAudioFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, OnAudioFinished), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Event trigger when this actor entered in an Audio Volume. */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Event trigger when this actor entered in an Audio Volume." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged = { "OnAudioVolumeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, OnAudioVolumeChanged), Z_Construct_UDelegateFunction_UAtomComponent_OnAudioVolumeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/** Event for status. */" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Event for status." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged = { "OnStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, OnStatusChanged), Z_Construct_UDelegateFunction_UAtomComponent_OnStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData[] = {
		{ "Category", "Atom" },
		{ "Comment", "/* \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe5\x80\xa4\xe3\x81\xaf""false\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82 */" },
		{ "DisplayName", "Only 2D Sound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe5\x80\xa4\xe3\x81\xaf""false\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bOnly2DSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound = { "bOnly2DSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Loop Setting" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "If Inherited, uses Loop Setting from AtomSoundCue Asset." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Selector Label" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Initial selector label." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, DefaultSelectorLabel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_Inner = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "AISAC Control" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Initial AISAC control." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, DefaultAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_Inner = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Block Index" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Initial block index." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex = { "DefaultBlockIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, DefaultBlockIndex), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData[] = {
		{ "Category", "Atom" },
		{ "DisplayName", "Sound Object" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Sound object." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "Category", "AreaSoundVolume" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Use AreaSoundVolume." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUseAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume = { "bUseAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Use AudioVolume." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsMovable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Use playlist." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bUsePlaylist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist = { "bUsePlaylist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Enable multiple sound playback." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bEnableMultipleSoundPlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback = { "bEnableMultipleSoundPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Volume Multiplier" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Volume multiplier." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume = { "DefaultVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, DefaultVolume), METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Is UI sound?" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Stop when owner destroyed." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Is sound persistant across level transition?" },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bPersistAcrossLevelTransition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition = { "bPersistAcrossLevelTransition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Auto destroy." },
	};
#endif
	void Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UAtomComponent*)Obj)->bAutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomComponent), &Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "Atom|Transceiver" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Atom 3d Sound Region" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/AtomComponent.h" },
		{ "ToolTip", "Sound data." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomComponent, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomSequenceCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAtomBeatSyncCallback,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CullDistanceSphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_EconomicDistanceSphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_MinDistanceSphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_MaxDistanceSphereComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AppliedSoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_GameViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_PlayWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnAudioVolumeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_OnStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bOnly2DSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_LoopSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultSelectorLabel_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultAisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultBlockIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_SoundObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAreaSoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUseAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bCanStraddleAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsMovable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bUsePlaylist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bEnableMultipleSoundPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_DefaultVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bIsUISound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bPersistAcrossLevelTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_bAutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponent_Statics::NewProp_Sound,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAtomComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAtomCallback_NoRegister, (int32)VTABLE_OFFSET(UAtomComponent, IAtomCallback), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponent_Statics::ClassParams = {
		&UAtomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomComponent, 2444383598);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomComponent>()
	{
		return UAtomComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomComponent(Z_Construct_UClass_UAtomComponent, &UAtomComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
