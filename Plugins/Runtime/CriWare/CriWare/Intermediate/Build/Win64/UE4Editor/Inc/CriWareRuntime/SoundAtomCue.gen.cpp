// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/SoundAtomCue.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCue() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomCue::execIsEconomicTickEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEconomicTickEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullingBoundaryDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullingBoundaryDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullingMarginDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullingMarginDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickBoundaryDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickMarginDistanceToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickMarginDistanceToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execBP_GetCueInfo)
	{
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfo(Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetCullDistanceMarginToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCullDistanceMarginToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetMaxAttenuationDistanceToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxAttenuationDistanceToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickFrequencyToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickFrequencyToApply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCue::execGetEconomicTickDistanceMarginToApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEconomicTickDistanceMarginToApply();
		P_NATIVE_END;
	}
	void USoundAtomCue::StaticRegisterNativesUSoundAtomCue()
	{
		UClass* Class = USoundAtomCue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetCueInfo", &USoundAtomCue::execBP_GetCueInfo },
			{ "GetCullDistance", &USoundAtomCue::execGetCullDistance },
			{ "GetCullDistanceMarginToApply", &USoundAtomCue::execGetCullDistanceMarginToApply },
			{ "GetCullingBoundaryDistanceToUse", &USoundAtomCue::execGetCullingBoundaryDistanceToUse },
			{ "GetCullingMarginDistanceToUse", &USoundAtomCue::execGetCullingMarginDistanceToUse },
			{ "GetEconomicTickBoundaryDistanceToUse", &USoundAtomCue::execGetEconomicTickBoundaryDistanceToUse },
			{ "GetEconomicTickDistance", &USoundAtomCue::execGetEconomicTickDistance },
			{ "GetEconomicTickDistanceMarginToApply", &USoundAtomCue::execGetEconomicTickDistanceMarginToApply },
			{ "GetEconomicTickFrequencyToApply", &USoundAtomCue::execGetEconomicTickFrequencyToApply },
			{ "GetEconomicTickFrequencyToUse", &USoundAtomCue::execGetEconomicTickFrequencyToUse },
			{ "GetEconomicTickMarginDistanceToUse", &USoundAtomCue::execGetEconomicTickMarginDistanceToUse },
			{ "GetMaxAttenuationDistanceToApply", &USoundAtomCue::execGetMaxAttenuationDistanceToApply },
			{ "GetMaxAttenuationDistanceToUse", &USoundAtomCue::execGetMaxAttenuationDistanceToUse },
			{ "IsEconomicTickEnabled", &USoundAtomCue::execIsEconomicTickEnabled },
			{ "IsLooping", &USoundAtomCue::execIsLooping },
			{ "Validate", &USoundAtomCue::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics
	{
		struct SoundAtomCue_eventBP_GetCueInfo_Parms
		{
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventBP_GetCueInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventBP_GetCueInfo_Parms), &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventBP_GetCueInfo_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::NewProp_CueInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "Comment", "/** Gets cue information. */" },
		{ "DisplayName", "Get Cue Info" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ScriptName", "GetCueInfo" },
		{ "ToolTip", "Gets cue information." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "BP_GetCueInfo", nullptr, nullptr, sizeof(SoundAtomCue_eventBP_GetCueInfo_Parms), Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics
	{
		struct SoundAtomCue_eventGetCullDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get the distance used to cull the Atom Cue sound; sum of maximum attenuation distance and cull distance margin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistance", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullDistance_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics
	{
		struct SoundAtomCue_eventGetCullDistanceMarginToApply_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get current margin value for cull distance used with this Atom Cue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullDistanceMarginToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullDistanceMarginToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetCullDistance() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingBoundaryDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullingBoundaryDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetCullDistanceMarginToApply() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetCullingMarginDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetCullingMarginDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickDistance() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickBoundaryDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickBoundaryDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get current Economic-Tick Distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistance", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickDistance_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get Economic-Tick Distance Margin that will be applied." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickDistanceMarginToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickDistanceMarginToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get Economic-Tick Frequency that will be applied." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickFrequencyToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickFrequencyToApply() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickFrequencyToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickFrequencyToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetEconomicTickDistanceMarginToApply() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetEconomicTickMarginDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetEconomicTickMarginDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics
	{
		struct SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get current Max Attenuation Distance value used for this Atom Cue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToApply", nullptr, nullptr, sizeof(SoundAtomCue_eventGetMaxAttenuationDistanceToApply_Parms), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics
	{
		struct SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetMaxAttenuationDistanceToApply() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "GetMaxAttenuationDistanceToUse", nullptr, nullptr, sizeof(SoundAtomCue_eventGetMaxAttenuationDistanceToUse_Parms), Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics
	{
		struct SoundAtomCue_eventIsEconomicTickEnabled_Parms
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
	void Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventIsEconomicTickEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsEconomicTickEnabled_Parms), &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check if tick reduction is enabled. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "C++ only, in BP use 'Get Economic Tick' instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Check if tick reduction is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsEconomicTickEnabled", nullptr, nullptr, sizeof(SoundAtomCue_eventIsEconomicTickEnabled_Parms), Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics
	{
		struct SoundAtomCue_eventIsLooping_Parms
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
	void Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventIsLooping_Parms), &Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Get whether this cue is looping according to current Loop settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "IsLooping", nullptr, nullptr, sizeof(SoundAtomCue_eventIsLooping_Parms), Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCue_Validate_Statics
	{
		struct SoundAtomCue_eventValidate_Parms
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
	void Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCue_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SoundAtomCue_eventValidate_Parms), &Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCue_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Validate the cue settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCue, nullptr, "Validate", nullptr, nullptr, sizeof(SoundAtomCue_eventValidate_Parms), Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCue_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCue_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomCue_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCue_NoRegister()
	{
		return USoundAtomCue::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttenuation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullingMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullingSettings_MetaData[];
#endif
		static void NewProp_bOverrideCullingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxProcessDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxProcessDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyCullingSettings_MetaData[];
#endif
		static void NewProp_bUseLegacyCullingSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyCullingSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCullingSoundPlayingProcessByDistance_MetaData[];
#endif
		static void NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCullingSoundPlayingProcessByDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopSettingByAtomCraft_MetaData[];
#endif
		static void NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopSettingByAtomCraft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EconomicTickMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistanceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistanceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCullSettings_MetaData[];
#endif
		static void NewProp_bOverrideCullSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCullSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDistanceCulling_MetaData[];
#endif
		static void NewProp_bEnableDistanceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDistanceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EconomicTickFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickDistanceMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EconomicTickDistanceMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEconomicTickSettings_MetaData[];
#endif
		static void NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEconomicTickSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEconomicTick_MetaData[];
#endif
		static void NewProp_bEconomicTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEconomicTick;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWaveInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstWaveInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationDistanceParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationDistanceParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControlName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioInnerRadiusColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioInnerRadiusColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioOuterRadiusColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioOuterRadiusColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CueColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateRateForFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpdateRateForFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToEnableAudioVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToEnableAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceToEnableAudioVolume_MetaData[];
#endif
		static void NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceToEnableAudioVolume;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAudioVolume_MetaData[];
#endif
		static void NewProp_bEnableAudioVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAudioVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstWaveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstWaveDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyAtomParameter_MetaData[];
#endif
		static void NewProp_bApplyAtomParameter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyAtomParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomCue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCue_BP_GetCueInfo, "BP_GetCueInfo" }, // 2355271155
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistance, "GetCullDistance" }, // 1796809988
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullDistanceMarginToApply, "GetCullDistanceMarginToApply" }, // 1973859644
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingBoundaryDistanceToUse, "GetCullingBoundaryDistanceToUse" }, // 1100320586
		{ &Z_Construct_UFunction_USoundAtomCue_GetCullingMarginDistanceToUse, "GetCullingMarginDistanceToUse" }, // 4138228771
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickBoundaryDistanceToUse, "GetEconomicTickBoundaryDistanceToUse" }, // 3301450928
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistance, "GetEconomicTickDistance" }, // 2216152790
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickDistanceMarginToApply, "GetEconomicTickDistanceMarginToApply" }, // 1336991715
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToApply, "GetEconomicTickFrequencyToApply" }, // 1250038361
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickFrequencyToUse, "GetEconomicTickFrequencyToUse" }, // 2703783273
		{ &Z_Construct_UFunction_USoundAtomCue_GetEconomicTickMarginDistanceToUse, "GetEconomicTickMarginDistanceToUse" }, // 3160225857
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToApply, "GetMaxAttenuationDistanceToApply" }, // 4259397331
		{ &Z_Construct_UFunction_USoundAtomCue_GetMaxAttenuationDistanceToUse, "GetMaxAttenuationDistanceToUse" }, // 1026597516
		{ &Z_Construct_UFunction_USoundAtomCue_IsEconomicTickEnabled, "IsEconomicTickEnabled" }, // 723390673
		{ &Z_Construct_UFunction_USoundAtomCue_IsLooping, "IsLooping" }, // 2203271390
		{ &Z_Construct_UFunction_USoundAtomCue_Validate, "Validate" }, // 4123768984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundAtomCue.h" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SoundAtomCue class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData[] = {
		{ "Comment", "/**\n\x09 * @deprecated Use AttenuationSettings instead.\x09\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use AttenuationSettings instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "@deprecated Use AttenuationSettings instead." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation = { "DefaultAttenuation", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, DefaultAttenuation_DEPRECATED), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData[] = {
		{ "Comment", "/* Loop\n\x09 * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Loop\n       * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bLoop_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData[] = {
		{ "Comment", "/* Culling\xe6\xa9\x9f\xe8\x83\xbd\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9e\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xb3\xe8\xb7\x9d\xe9\x9b\xa2\n\x09 * @deprecated Use Cull Distance Margin instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Cull Distance Margin instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Culling\xe6\xa9\x9f\xe8\x83\xbd\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9e\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xb3\xe8\xb7\x9d\xe9\x9b\xa2\n       * @deprecated Use Cull Distance Margin instead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance = { "CullingMarginDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CullingMarginDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData[] = {
		{ "Comment", "/* Culling\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe4\xb8\x8a\xe6\x9b\xb8\xe3\x81\x8d\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\n\x09 * @deprecated Use Override Cull Settings instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Override Cull Settings instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Culling\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe4\xb8\x8a\xe6\x9b\xb8\xe3\x81\x8d\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\n       * @deprecated Use Override Cull Settings instead" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideCullingSettings_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings = { "bOverrideCullingSettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData[] = {
		{ "Comment", "/* [Legacy]\xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe5\xa2\x83\xe7\x95\x8c\xe8\xb7\x9d\xe9\x9b\xa2\n\x09 * @deprecated Use Cull Distance Margin instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Cull Distance Margin instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "[Legacy]\xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe5\xa2\x83\xe7\x95\x8c\xe8\xb7\x9d\xe9\x9b\xa2\n       * @deprecated Use Cull Distance Margin instead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance = { "MaxProcessDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, MaxProcessDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData[] = {
		{ "Comment", "/* \xe3\x83\xac\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xbc\xe3\x81\xaa\xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\n     * @deprecated Use Cull Distance Margin instead\n     */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Cull Distance Margin instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "\xe3\x83\xac\xe3\x82\xac\xe3\x82\xb7\xe3\x83\xbc\xe3\x81\xaa\xe3\x82\xab\xe3\x83\xaa\xe3\x83\xb3\xe3\x82\xb0\xe8\xa8\xad\xe5\xae\x9a\xe3\x82\x92\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\n    * @deprecated Use Cull Distance Margin instead" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseLegacyCullingSettings_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings = { "bUseLegacyCullingSettings", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData[] = {
		{ "Comment", "/* Culling\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b \n\x09 * @deprecated Use Distance Culling instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Distance Culling instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Culling\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\n       * @deprecated Use Distance Culling instead" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bCullingSoundPlayingProcessByDistance_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance = { "bCullingSoundPlayingProcessByDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData[] = {
		{ "Comment", "/* CRI Atom Craft \xe3\x81\xae\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe6\x83\x85\xe5\xa0\xb1\n\x09 * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "CRI Atom Craft \xe3\x81\xae\xe3\x83\xab\xe3\x83\xbc\xe3\x83\x97\xe6\x83\x85\xe5\xa0\xb1\n       * @deprecated Use SetLoopSetting(), GetLoopSetting(), IsLooping() instead" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bLoopSettingByAtomCraft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft = { "bLoopSettingByAtomCraft", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData[] = {
		{ "Comment", "/* Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9e\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xb3\xe8\xb7\x9d\xe9\x9b\xa2 \n\x09 * @deprecated Use EconomicTickDistanceMargin instead\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use EconomicTickDistanceMargin instead." },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe7\x94\xa8\xe3\x81\xae\xe3\x83\x9e\xe3\x83\xbc\xe3\x82\xb8\xe3\x83\xb3\xe8\xb7\x9d\xe9\x9b\xa2\n       * @deprecated Use EconomicTickDistanceMargin instead" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance = { "EconomicTickMarginDistance", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickMarginDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData[] = {
		{ "Category", "Culling" },
		{ "DisplayName", "Cull Distance Margin" },
		{ "EditCondition", "bOverrideCullSettings" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Margin after sound attenation distance where sound will be culled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin = { "CullDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CullDistanceMargin), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData[] = {
		{ "Category", "Culling" },
		{ "DisplayName", "Override Cull Settings" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Override global Cull Settings set in CriWare plugin settings." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideCullSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings = { "bOverrideCullSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData[] = {
		{ "Category", "Culling" },
		{ "DisplayName", "Enable Distance Culling" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Cull sound processing by a distance." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEnableDistanceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling = { "bEnableDistanceCulling", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData[] = {
		{ "Category", "Economic Tick" },
		{ "DisplayName", "Economic Tick Frequency" },
		{ "EditCondition", "bOverrideEconomicTickSettings" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Set the tick frequency for sound processing. (Hz)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency = { "EconomicTickFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickFrequency), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData[] = {
		{ "Category", "Economic Tick" },
		{ "DisplayName", "Economic Tick Distance Margin" },
		{ "EditCondition", "bOverrideEconomicTickSettings" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Margin after sound attenation distance where economic tick will activate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin = { "EconomicTickDistanceMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, EconomicTickDistanceMargin), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData[] = {
		{ "Category", "Economic Tick" },
		{ "DisplayName", "Overrides Economic Tick Settings" },
		{ "EditCondition", "bEconomicTick" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "Tooltip", "Override global Economic Tick Settings set in CriWare plugin settings." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bOverrideEconomicTickSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings = { "bOverrideEconomicTickSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData[] = {
		{ "Category", "Economic Tick" },
		{ "Comment", "/* Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b */" },
		{ "DisplayName", "Enable Economic Tick" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Economic-Tick\xe6\xa9\x9f\xe8\x83\xbd\xe3\x82\x92\xe6\x9c\x89\xe5\x8a\xb9\xe3\x81\xab\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEconomicTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick = { "bEconomicTick", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UserData_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/* \xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, UserData), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveInfo_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "The info of the first wave used by this Cue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveInfo = { "FirstWaveInfo", nullptr, (EPropertyFlags)0x0010000800020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, FirstWaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationDistanceParam_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationDistanceParam = { "AttenuationDistanceParam", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AttenuationDistanceParam), Z_Construct_UScriptStruct_FAtomAttenuationDistanceParam, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationDistanceParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationDistanceParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/* AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe4\xb8\x80\xe8\xa6\xa7 */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe4\xb8\x80\xe8\xa6\xa7" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AisacControlName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName_Inner = { "AisacControlName", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe4\xb8\x80\xe8\xa6\xa7 */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe4\xb8\x80\xe8\xa6\xa7" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CategoryName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName_Inner = { "CategoryName", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioInnerRadiusColor_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Audio Inner Radius Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioInnerRadiusColor = { "AudioInnerRadiusColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AudioInnerRadiusColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioInnerRadiusColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioInnerRadiusColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioOuterRadiusColor_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Audio Outer Radius Color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioOuterRadiusColor = { "AudioOuterRadiusColor", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AudioOuterRadiusColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioOuterRadiusColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioOuterRadiusColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueColor_MetaData[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "A color to identify this cue in editor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueColor = { "CueColor", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CueColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "Atom 3d Transceiver" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Atom 3d Sound Region" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData[] = {
		{ "Category", "AreaSoundVolume" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseAreaSoundVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "UpdateRate." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame = { "UpdateRateForFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, UpdateRateForFrame), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "Category", "AreaSoundVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Enable AreaSoundVolume." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "EditCondition", "bUseDistanceToEnableAudioVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Maximum distance between this sound and any audio volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume = { "MinDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, MinDistanceToEnableAudioVolume), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "Display", "Enable Audio Volume with Distance" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Enable AudioVolume with distance between this sound and any audio volume." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bUseDistanceToEnableAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume = { "bUseDistanceToEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Can Straddle audio volume." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Is Movable Sound." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bIsMovable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Enable AudioVolume." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bEnableAudioVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume = { "bEnableAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "The duration in seconds of the first wave used by this Cue." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration = { "FirstWaveDuration", nullptr, (EPropertyFlags)0x0010010000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, FirstWaveDuration), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Duration of sound in seconds. */" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Duration of sound in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, Duration), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Searches AtomParameterComponent of the owner actor and applies it on play." },
	};
#endif
	void Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit(void* Obj)
	{
		((USoundAtomCue*)Obj)->bApplyAtomParameter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter = { "bApplyAtomParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USoundAtomCue), &Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "Loop Setting. Inherited: Use Loop settings in Cue preset from SoundAtomCueSheet." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "The Cue name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010010000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CueName), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData[] = {
		{ "Category", "Sound Atom Cue" },
		{ "ModuleRelativePath", "Classes/SoundAtomCue.h" },
		{ "ToolTip", "The AtomCueSheet that holds presets and data for this Cue." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomCue, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_DefaultAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullingMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MaxProcessDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseLegacyCullingSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCullingSoundPlayingProcessByDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bLoopSettingByAtomCraft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CullDistanceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideCullSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableDistanceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_EconomicTickDistanceMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bOverrideEconomicTickSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEconomicTick,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationDistanceParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AisacControlName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CategoryName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioInnerRadiusColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AudioOuterRadiusColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_UpdateRateForFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseAreaSoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_MinDistanceToEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bUseDistanceToEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bCanStraddleAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bIsMovable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bEnableAudioVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_FirstWaveDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_bApplyAtomParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_LoopSetting_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCue_Statics::NewProp_CueSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCue_Statics::ClassParams = {
		&USoundAtomCue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomCue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomCue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCue, 2027240504);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCue>()
	{
		return USoundAtomCue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCue(Z_Construct_UClass_USoundAtomCue, &USoundAtomCue::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCue);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundAtomCue)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
