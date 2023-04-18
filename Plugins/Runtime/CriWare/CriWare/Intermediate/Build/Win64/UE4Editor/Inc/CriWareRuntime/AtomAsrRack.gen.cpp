// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomAsrRack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRack() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomAsrRack::execGetBusAnalyzerInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DspBusName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_num_channels);
		P_GET_TARRAY_REF(float,Z_Param_Out_rms_levels);
		P_GET_TARRAY_REF(float,Z_Param_Out_peak_levels);
		P_GET_TARRAY_REF(float,Z_Param_Out_peak_hold_levels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBusAnalyzerInfo(Z_Param_DspBusName,Z_Param_Out_num_channels,Z_Param_Out_rms_levels,Z_Param_Out_peak_levels,Z_Param_Out_peak_hold_levels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetEffectBypass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EffectName);
		P_GET_UBOOL(Z_Param_Bypasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectBypass(Z_Param_BusName,Z_Param_EffectName,Z_Param_Bypasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetBusSendLevelByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceBusName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestBusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelByName(Z_Param_SourceBusName,Z_Param_DestBusName,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetBusVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusVolumeByName(Z_Param_BusName,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetCurrentAppliedSnapshot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AsrRackId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentAppliedSnapshot(Z_Param_AsrRackId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execApplyDspBusSnapshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execDetachDspBusSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachDspBusSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execAttachDspBusSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachDspBusSetting(Z_Param_SettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetAsrRack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AsrRackId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetAsrRack(Z_Param_AsrRackId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetDefaultAsrRack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetDefaultAsrRack();
		P_NATIVE_END;
	}
	void UAtomAsrRack::StaticRegisterNativesUAtomAsrRack()
	{
		UClass* Class = UAtomAsrRack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", &UAtomAsrRack::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", &UAtomAsrRack::execAttachDspBusSetting },
			{ "DetachDspBusSetting", &UAtomAsrRack::execDetachDspBusSetting },
			{ "GetAsrRack", &UAtomAsrRack::execGetAsrRack },
			{ "GetBusAnalyzerInfo", &UAtomAsrRack::execGetBusAnalyzerInfo },
			{ "GetCurrentAppliedSnapshot", &UAtomAsrRack::execGetCurrentAppliedSnapshot },
			{ "GetDefaultAsrRack", &UAtomAsrRack::execGetDefaultAsrRack },
			{ "SetBusSendLevelByName", &UAtomAsrRack::execSetBusSendLevelByName },
			{ "SetBusVolumeByName", &UAtomAsrRack::execSetBusVolumeByName },
			{ "SetEffectBypass", &UAtomAsrRack::execSetEffectBypass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics
	{
		struct AtomAsrRack_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param SnapshotName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Milliseconds \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe3\x83\x9f\xe3\x83\xaa\xe7\xa7\x92\xef\xbc\x89\xe3\x82\x92\xe3\x81\x8b\xe3\x81\x91\xe3\x81\xa6\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param SnapshotName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Milliseconds \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xef\xbc\x88\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe3\x83\x9f\xe3\x83\xaa\xe7\xa7\x92\xef\xbc\x89\xe3\x82\x92\xe3\x81\x8b\xe3\x81\x91\xe3\x81\xa6\xe3\x82\xb9\xe3\x83\x8a\xe3\x83\x83\xe3\x83\x97\xe3\x82\xb7\xe3\x83\xa7\xe3\x83\x83\xe3\x83\x88\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x83\x91\xe3\x83\xa9\xe3\x83\xa1\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xab\xe9\x81\xb7\xe7\xa7\xbb\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, sizeof(AtomAsrRack_eventApplyDspBusSnapshot_Parms), Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics
	{
		struct AtomAsrRack_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SettingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \n\x09* @param SettingName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param SettingName CRI Atom Craft\xe3\x81\xa7\xe4\xbd\x9c\xe6\x88\x90\xe3\x81\x97\xe3\x81\x9f""DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "AttachDspBusSetting", nullptr, nullptr, sizeof(AtomAsrRack_eventAttachDspBusSetting_Parms), Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "DetachDspBusSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics
	{
		struct AtomAsrRack_eventGetAsrRack_Parms
		{
			int32 AsrRackId;
			UAtomAsrRack* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_AsrRackId = { "AsrRackId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, AsrRackId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_AsrRackId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9fID\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9fID\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetAsrRack", nullptr, nullptr, sizeof(AtomAsrRack_eventGetAsrRack_Parms), Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics
	{
		struct AtomAsrRack_eventGetBusAnalyzerInfo_Parms
		{
			FString DspBusName;
			int32 num_channels;
			TArray<float> rms_levels;
			TArray<float> peak_levels;
			TArray<float> peak_hold_levels;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_peak_hold_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_peak_hold_levels_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_peak_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_peak_levels_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rms_levels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rms_levels_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_num_channels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DspBusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAsrRack_eventGetBusAnalyzerInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAsrRack_eventGetBusAnalyzerInfo_Parms), &Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels = { "peak_hold_levels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, peak_hold_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels_Inner = { "peak_hold_levels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels = { "peak_levels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, peak_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels_Inner = { "peak_levels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels = { "rms_levels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, rms_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels_Inner = { "rms_levels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_num_channels = { "num_channels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, num_channels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName = { "DspBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, DspBusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_num_channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* \xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe6\xb8\xac\xe5\xae\x9a\xe7\xb5\x90\xe6\x9e\x9c\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\xb8\xac\xe5\xae\x9a\xe7\xb5\x90\xe6\x9e\x9c\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf""dB(\xe3\x83\x87\xe3\x82\xb7\xe3\x83\x99\xe3\x83\xab)\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* [RMS\xe5\x80\xa4]\n\x09*  \xe7\x9f\xad\xe3\x81\x84\xe6\x9c\x9f\xe9\x96\x93\xe3\x81\xae\xe3\x82\xb5\xe3\x83\xb3\xe3\x83\x97\xe3\x83\xab\xe5\x85\xa8\xe3\x81\xa6\xe3\x82\x92\xe4\xba\x8c\xe4\xb9\x97\xe5\xb9\xb3\xe5\x9d\x87\xe5\xb9\xb3\xe6\x96\xb9\xe6\xa0\xb9\xe3\x81\xa7\xe8\xa8\x88\xe7\xae\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x82\xe3\x81\xae\xe3\x81\xa7\xe3\x80\x81\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xa6\xe3\x83\x8b\xe3\x83\x83\xe3\x83\x88\xef\xbc\x88VU\xef\xbc\x89\xe3\x81\xa8\xe3\x82\x82\xe5\x91\xbc\xe3\x81\xb0\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*  \xe3\x81\x93\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe8\x81\xb4\xe6\x84\x9f\xe7\x9a\x84\xe3\x81\xaa\xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xab\xe8\xbf\x91\xe3\x81\x84\xe3\x81\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* [\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe5\x80\xa4]\n\x09*  \xe3\x81\x9d\xe3\x81\xae\xe7\x9e\xac\xe9\x96\x93\xe3\x81\xae\xe6\x8c\xaf\xe5\xb9\x85\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xe4\xb8\xbb\xe3\x81\xab\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x97\xe3\x82\x92\xe6\xa4\x9c\xe7\x9f\xa5\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* [\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x83\x9b\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\x80\xa4]\n\x09*  \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x82\x92\xe4\xb8\x80\xe5\xae\x9a\xe6\x99\x82\xe9\x96\x93\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*  \xe4\xb8\x80\xe7\x9e\xac\xe7\x99\xba\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x97\xe3\x82\x92\xe8\xa6\x8b\xe9\x80\x83\xe3\x81\x95\xe3\x81\xaa\xe3\x81\x84\xe3\x82\x88\xe3\x81\x86\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe4\xbb\x95\xe7\xb5\x84\xe3\x81\xbf\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param DspBusName DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param num_channels \xe3\x83\x81\xe3\x83\xa3\xe3\x83\xb3\xe3\x83\x8d\xe3\x83\xab\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param rms_levels RMS\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param peak_levels \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param peak_hold_levels \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x83\x9b\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe6\xb8\xac\xe5\xae\x9a\xe7\xb5\x90\xe6\x9e\x9c\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\xb8\xac\xe5\xae\x9a\xe7\xb5\x90\xe6\x9e\x9c\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xae\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf""dB(\xe3\x83\x87\xe3\x82\xb7\xe3\x83\x99\xe3\x83\xab)\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n[RMS\xe5\x80\xa4]\n \xe7\x9f\xad\xe3\x81\x84\xe6\x9c\x9f\xe9\x96\x93\xe3\x81\xae\xe3\x82\xb5\xe3\x83\xb3\xe3\x83\x97\xe3\x83\xab\xe5\x85\xa8\xe3\x81\xa6\xe3\x82\x92\xe4\xba\x8c\xe4\xb9\x97\xe5\xb9\xb3\xe5\x9d\x87\xe5\xb9\xb3\xe6\x96\xb9\xe6\xa0\xb9\xe3\x81\xa7\xe8\xa8\x88\xe7\xae\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x82\x82\xe3\x81\xae\xe3\x81\xa7\xe3\x80\x81\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x83\xa6\xe3\x83\x8b\xe3\x83\x83\xe3\x83\x88\xef\xbc\x88VU\xef\xbc\x89\xe3\x81\xa8\xe3\x82\x82\xe5\x91\xbc\xe3\x81\xb0\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n \xe3\x81\x93\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xaf\xe8\x81\xb4\xe6\x84\x9f\xe7\x9a\x84\xe3\x81\xaa\xe9\x9f\xb3\xe9\x87\x8f\xe3\x81\xab\xe8\xbf\x91\xe3\x81\x84\xe3\x81\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n[\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe5\x80\xa4]\n \xe3\x81\x9d\xe3\x81\xae\xe7\x9e\xac\xe9\x96\x93\xe3\x81\xae\xe6\x8c\xaf\xe5\xb9\x85\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\xe4\xb8\xbb\xe3\x81\xab\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x97\xe3\x82\x92\xe6\xa4\x9c\xe7\x9f\xa5\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xab\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n[\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x83\x9b\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\x80\xa4]\n \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe5\x80\xa4\xe3\x82\x92\xe4\xb8\x80\xe5\xae\x9a\xe6\x99\x82\xe9\x96\x93\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x97\xe3\x81\x9f\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xae\xe5\x80\xa4\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n \xe4\xb8\x80\xe7\x9e\xac\xe7\x99\xba\xe7\x94\x9f\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xaf\xe3\x83\xaa\xe3\x83\x83\xe3\x83\x97\xe3\x82\x92\xe8\xa6\x8b\xe9\x80\x83\xe3\x81\x95\xe3\x81\xaa\xe3\x81\x84\xe3\x82\x88\xe3\x81\x86\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe4\xbb\x95\xe7\xb5\x84\xe3\x81\xbf\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param DspBusName DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param num_channels \xe3\x83\x81\xe3\x83\xa3\xe3\x83\xb3\xe3\x83\x8d\xe3\x83\xab\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param rms_levels RMS\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param peak_levels \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param peak_hold_levels \xe3\x83\x94\xe3\x83\xbc\xe3\x82\xaf\xe3\x83\x9b\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x89\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetBusAnalyzerInfo", nullptr, nullptr, sizeof(AtomAsrRack_eventGetBusAnalyzerInfo_Parms), Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics
	{
		struct AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms
		{
			int32 AsrRackId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_AsrRackId = { "AsrRackId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms, AsrRackId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_AsrRackId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09 * \xe7\x8f\xbe\xe5\x9c\xa8\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe5\x90\x8d\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 *\n\x09 * @param AsrRackId \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9fID\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 * @return \xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe5\x90\x8d\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "\xe7\x8f\xbe\xe5\x9c\xa8\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe5\x90\x8d\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param AsrRackId \xe3\x81\x93\xe3\x81\x93\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9fID\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe9\x81\xa9\xe7\x94\xa8\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8bSnapshot\xe5\x90\x8d\xe3\x82\x92\xe8\xbf\x94\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetCurrentAppliedSnapshot", nullptr, nullptr, sizeof(AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms), Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics
	{
		struct AtomAsrRack_eventGetDefaultAsrRack_Parms
		{
			UAtomAsrRack* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventGetDefaultAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe9\x81\xa9\xe5\xae\x9c""DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe7\xad\x89\xe3\x81\xae\xe6\x93\x8d\xe4\xbd\x9c\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @return \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xa7\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x80\x81\xe9\x81\xa9\xe5\xae\x9c""DSP\xe3\x83\x90\xe3\x82\xb9\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\xae\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe7\xad\x89\xe3\x81\xae\xe6\x93\x8d\xe4\xbd\x9c\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x86\xe5\xbf\x85\xe8\xa6\x81\xe3\x81\x8c\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@return \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xae""ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xb8\xe3\x81\xae\xe3\x83\xaa\xe3\x83\x95\xe3\x82\xa1\xe3\x83\xac\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetDefaultAsrRack", nullptr, nullptr, sizeof(AtomAsrRack_eventGetDefaultAsrRack_Parms), Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics
	{
		struct AtomAsrRack_eventSetBusSendLevelByName_Parms
		{
			FString SourceBusName;
			FString DestBusName;
			float Level;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestBusName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceBusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName = { "DestBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, DestBusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName = { "SourceBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, SourceBusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* DSP\xe3\x83\x90\xe3\x82\xb9\xe9\x96\x93\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param SourceBusName \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe5\x85\x83\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param DestBusName \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Level \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "DSP\xe3\x83\x90\xe3\x82\xb9\xe9\x96\x93\xe3\x81\xae\xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param SourceBusName \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe5\x85\x83\xe3\x81\xae\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param DestBusName \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe5\x85\x88\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Level \xe3\x82\xbb\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\x99\xe3\x83\xab\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetBusSendLevelByName", nullptr, nullptr, sizeof(AtomAsrRack_eventSetBusSendLevelByName_Parms), Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics
	{
		struct AtomAsrRack_eventSetBusVolumeByName_Parms
		{
			FString BusName;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, BusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param BusName \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "DSP\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x82\x92\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param BusName \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x9b\xb4\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\xaa\xe3\x82\x8b\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetBusVolumeByName", nullptr, nullptr, sizeof(AtomAsrRack_eventSetBusVolumeByName_Parms), Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics
	{
		struct AtomAsrRack_eventSetEffectBypass_Parms
		{
			FString BusName;
			FString EffectName;
			bool Bypasses;
		};
		static void NewProp_Bypasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Bypasses;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EffectName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses_SetBit(void* Obj)
	{
		((AtomAsrRack_eventSetEffectBypass_Parms*)Obj)->Bypasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses = { "Bypasses", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomAsrRack_eventSetEffectBypass_Parms), &Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName = { "EffectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetEffectBypass_Parms, EffectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomAsrRack_eventSetEffectBypass_Parms, BusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomAsrRack" },
		{ "Comment", "/**\n\x09* \xe3\x82\xa8\xe3\x83\x95\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param BusName \xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param EffectName \xe3\x82\xa8\xe3\x83\x95\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Bypasses \xe3\x83\x90\xe3\x82\xa4\xe3\x83\x91\xe3\x82\xb9\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "\xe3\x82\xa8\xe3\x83\x95\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xae\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x91\xe3\x82\xb9\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param BusName \xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param EffectName \xe3\x82\xa8\xe3\x83\x95\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Bypasses \xe3\x83\x90\xe3\x82\xa4\xe3\x83\x91\xe3\x82\xb9\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetEffectBypass", nullptr, nullptr, sizeof(AtomAsrRack_eventSetEffectBypass_Parms), Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister()
	{
		return UAtomAsrRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAsrRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RackId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RackId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAsrRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomAsrRack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 3038812839
		{ &Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting, "AttachDspBusSetting" }, // 4272492398
		{ &Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting, "DetachDspBusSetting" }, // 2383159548
		{ &Z_Construct_UFunction_UAtomAsrRack_GetAsrRack, "GetAsrRack" }, // 483133222
		{ &Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo, "GetBusAnalyzerInfo" }, // 3093673318
		{ &Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot, "GetCurrentAppliedSnapshot" }, // 1031762638
		{ &Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack, "GetDefaultAsrRack" }, // 2593645578
		{ &Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 1291159980
		{ &Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName, "SetBusVolumeByName" }, // 3419781829
		{ &Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass, "SetEffectBypass" }, // 4028669309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomAsrRack.h" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "AtomAsrRack class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData[] = {
		{ "Category", "AtomAsrRack" },
		{ "ModuleRelativePath", "Classes/AtomAsrRack.h" },
		{ "ToolTip", "Rack ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId = { "RackId", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomAsrRack, RackId), METADATA_PARAMS(Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAsrRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAsrRack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomAsrRack_Statics::ClassParams = {
		&UAtomAsrRack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAsrRack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomAsrRack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomAsrRack, 2194841565);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomAsrRack>()
	{
		return UAtomAsrRack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomAsrRack(Z_Construct_UClass_UAtomAsrRack, &UAtomAsrRack::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomAsrRack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAsrRack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
