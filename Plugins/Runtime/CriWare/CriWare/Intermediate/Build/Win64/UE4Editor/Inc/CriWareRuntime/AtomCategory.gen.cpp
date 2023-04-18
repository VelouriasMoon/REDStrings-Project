// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategory() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacInfo();
// End Cross Module References
	DEFINE_FUNCTION(UAtomCategory::execStopByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::StopByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AisacControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueByName(Z_Param_CategoryName,Z_Param_AisacControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetCurrentAisacControlValueById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacControlId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetCurrentAisacControlValueById(Z_Param_CategoryId,Z_Param_AisacControlId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execSetAisacControlByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AisacName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::SetAisacControlByName(Z_Param_CategoryName,Z_Param_AisacName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::GetAttachedAisacInfoByName(Z_Param_CategoryName,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetAttachedAisacInfoById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_GET_PROPERTY(FIntProperty,Z_Param_AisacAttachedIndex);
		P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
		P_GET_STRUCT_REF(FAtomAisacInfo,Z_Param_Out_AisacInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::GetAttachedAisacInfoById(Z_Param_CategoryId,Z_Param_AisacAttachedIndex,Z_Param_Out_IsSuccess,Z_Param_Out_AisacInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetNumAttachedAisacsById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAtomCategory::GetNumAttachedAisacsById(Z_Param_CategoryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execResetAllAisacControlById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CategoryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::ResetAllAisacControlById(Z_Param_CategoryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execIsPausedByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomCategory::IsPausedByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execPauseByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::PauseByName(Z_Param_CategoryName,Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execGetVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAtomCategory::GetVolumeByName(Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCategory::execSetVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCategory::SetVolumeByName(Z_Param_CategoryName,Z_Param_Volume);
		P_NATIVE_END;
	}
	void UAtomCategory::StaticRegisterNativesUAtomCategory()
	{
		UClass* Class = UAtomCategory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedAisacInfoById", &UAtomCategory::execGetAttachedAisacInfoById },
			{ "GetAttachedAisacInfoByName", &UAtomCategory::execGetAttachedAisacInfoByName },
			{ "GetCurrentAisacControlValueById", &UAtomCategory::execGetCurrentAisacControlValueById },
			{ "GetCurrentAisacControlValueByName", &UAtomCategory::execGetCurrentAisacControlValueByName },
			{ "GetNumAttachedAisacsById", &UAtomCategory::execGetNumAttachedAisacsById },
			{ "GetNumAttachedAisacsByName", &UAtomCategory::execGetNumAttachedAisacsByName },
			{ "GetVolumeByName", &UAtomCategory::execGetVolumeByName },
			{ "IsPausedByName", &UAtomCategory::execIsPausedByName },
			{ "PauseByName", &UAtomCategory::execPauseByName },
			{ "ResetAllAisacControlById", &UAtomCategory::execResetAllAisacControlById },
			{ "ResetAllAisacControlByName", &UAtomCategory::execResetAllAisacControlByName },
			{ "SetAisacControlByName", &UAtomCategory::execSetAisacControlByName },
			{ "SetVolumeByName", &UAtomCategory::execSetVolumeByName },
			{ "StopByName", &UAtomCategory::execStopByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics
	{
		struct AtomCategory_eventGetAttachedAisacInfoById_Parms
		{
			int32 CategoryId;
			int32 AisacAttachedIndex;
			bool IsSuccess;
			FAtomAisacInfo AisacInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((AtomCategory_eventGetAttachedAisacInfoById_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoById_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, AisacAttachedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoById_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_AisacAttachedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::NewProp_CategoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacAttachedIndex \xe4\xbd\x95\xe7\x95\xaa\xe7\x9b\xae\xe3\x81\xae""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xbc\xe3\x83\xad\xe3\x81\x8b\xe3\x82\x89\xe3\x80\x8c\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x95\xb0-1\xe3\x80\x8d\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* @param IsSuccess \xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88true\xe3\x81\x8c\xe3\x80\x81\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacInfo AISAC\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacAttachedIndex \xe4\xbd\x95\xe7\x95\xaa\xe7\x9b\xae\xe3\x81\xae""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xbc\xe3\x83\xad\xe3\x81\x8b\xe3\x82\x89\xe3\x80\x8c\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x95\xb0-1\xe3\x80\x8d\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param IsSuccess \xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88true\xe3\x81\x8c\xe3\x80\x81\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacInfo AISAC\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoById", nullptr, nullptr, sizeof(AtomCategory_eventGetAttachedAisacInfoById_Parms), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics
	{
		struct AtomCategory_eventGetAttachedAisacInfoByName_Parms
		{
			FString CategoryName;
			int32 AisacAttachedIndex;
			bool IsSuccess;
			FAtomAisacInfo AisacInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacInfo;
		static void NewProp_IsSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacAttachedIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo = { "AisacInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacInfo), Z_Construct_UScriptStruct_FAtomAisacInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit(void* Obj)
	{
		((AtomCategory_eventGetAttachedAisacInfoByName_Parms*)Obj)->IsSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventGetAttachedAisacInfoByName_Parms), &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex = { "AisacAttachedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, AisacAttachedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetAttachedAisacInfoByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_IsSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_AisacAttachedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacAttachedIndex \xe4\xbd\x95\xe7\x95\xaa\xe7\x9b\xae\xe3\x81\xae""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xbc\xe3\x83\xad\xe3\x81\x8b\xe3\x82\x89\xe3\x80\x8c\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x95\xb0-1\xe3\x80\x8d\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* @param IsSuccess \xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88true\xe3\x81\x8c\xe3\x80\x81\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacInfo AISAC\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacAttachedIndex \xe4\xbd\x95\xe7\x95\xaa\xe7\x9b\xae\xe3\x81\xae""AISAC\xe3\x81\xae\xe6\x83\x85\xe5\xa0\xb1\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\x9f\xe3\x81\x84\xe3\x81\x8b\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe6\x95\xb0\xe5\x80\xa4\xe3\x81\xaf\xe3\x82\xbc\xe3\x83\xad\xe3\x81\x8b\xe3\x82\x89\xe3\x80\x8c\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe3\x81\xae\xe6\x95\xb0-1\xe3\x80\x8d\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param IsSuccess \xe6\x88\x90\xe5\x8a\x9f\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88true\xe3\x81\x8c\xe3\x80\x81\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x97\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacInfo AISAC\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetAttachedAisacInfoByName", nullptr, nullptr, sizeof(AtomCategory_eventGetAttachedAisacInfoByName_Parms), Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics
	{
		struct AtomCategory_eventGetCurrentAisacControlValueById_Parms
		{
			int32 CategoryId;
			int32 AisacControlId;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacControlId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlId = { "AisacControlId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, AisacControlId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueById_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_AisacControlId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::NewProp_CategoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x80\x82\n\x09*\n\x09* @param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacControlId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x80\x82\n\n@param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacControlId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueById", nullptr, nullptr, sizeof(AtomCategory_eventGetCurrentAisacControlValueById_Parms), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics
	{
		struct AtomCategory_eventGetCurrentAisacControlValueByName_Parms
		{
			FString CategoryName;
			FString AisacControlName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, AisacControlName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetCurrentAisacControlValueByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_AisacControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacControlName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacControlName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xae\xe7\x8f\xbe\xe5\x9c\xa8\xe5\x80\xa4\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetCurrentAisacControlValueByName", nullptr, nullptr, sizeof(AtomCategory_eventGetCurrentAisacControlValueByName_Parms), Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics
	{
		struct AtomCategory_eventGetNumAttachedAisacsById_Parms
		{
			int32 CategoryId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsById_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::NewProp_CategoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "ID\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xaeID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsById", nullptr, nullptr, sizeof(AtomCategory_eventGetNumAttachedAisacsById_Parms), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics
	{
		struct AtomCategory_eventGetNumAttachedAisacsByName_Parms
		{
			FString CategoryName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetNumAttachedAisacsByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe5\x90\x8d\xe5\x89\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xbf\xe3\x83\x83\xe3\x83\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x82\x8b""AISAC\xe6\x95\xb0\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetNumAttachedAisacsByName", nullptr, nullptr, sizeof(AtomCategory_eventGetNumAttachedAisacsByName_Parms), Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics
	{
		struct AtomCategory_eventGetVolumeByName_Parms
		{
			FString CategoryName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventGetVolumeByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\x9f\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe5\x80\x8d\xe7\x8e\x87\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "GetVolumeByName", nullptr, nullptr, sizeof(AtomCategory_eventGetVolumeByName_Parms), Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_GetVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics
	{
		struct AtomCategory_eventIsPausedByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventIsPausedByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventIsPausedByName_Parms), &Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventIsPausedByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe7\x8a\xb6\xe6\x85\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaftrue\xe3\x81\x8c\xe3\x80\x81\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xa7\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe7\x8a\xb6\xe6\x85\x8b\xe3\x82\x92\xe5\x8f\x96\xe5\xbe\x97\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaftrue\xe3\x81\x8c\xe3\x80\x81\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe4\xb8\xad\xe3\x81\xa7\xe3\x81\xaa\xe3\x81\x84\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf""false\xe3\x81\x8c\xe8\xbf\x94\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "IsPausedByName", nullptr, nullptr, sizeof(AtomCategory_eventIsPausedByName_Parms), Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_IsPausedByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_PauseByName_Statics
	{
		struct AtomCategory_eventPauseByName_Parms
		{
			FString CategoryName;
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomCategory_eventPauseByName_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventPauseByName_Parms), &Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventPauseByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_bPause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param bPause true\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x85\xa8\xe3\x81\xa6\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x8c\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe5\x88\xb6\xe5\xbe\xa1\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param bPause true\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x85\xa8\xe3\x81\xa6\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82""false\xe3\x82\x92\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x99\xe3\x82\x8b\xe3\x81\xa8\xe3\x80\x81\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xbc\xe3\x82\xba\xe3\x81\x8c\xe8\xa7\xa3\xe9\x99\xa4\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "PauseByName", nullptr, nullptr, sizeof(AtomCategory_eventPauseByName_Parms), Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_PauseByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics
	{
		struct AtomCategory_eventResetAllAisacControlById_Parms
		{
			int32 CategoryId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventResetAllAisacControlById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlById_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlById_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::NewProp_CategoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4(AtomCraft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a)\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\x8c""1\xe3\x81\xa4\xe3\x82\x82\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x81\xaf\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaaID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xaeID\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4(AtomCraft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a)\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\x8c""1\xe3\x81\xa4\xe3\x82\x82\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x81\xaf\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param CategoryId \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaaID\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlById", nullptr, nullptr, sizeof(AtomCategory_eventResetAllAisacControlById_Parms), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics
	{
		struct AtomCategory_eventResetAllAisacControlByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomCategory_eventResetAllAisacControlByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomCategory_eventResetAllAisacControlByName_Parms), &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventResetAllAisacControlByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4(AtomCraft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a)\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\x8c""1\xe3\x81\xa4\xe3\x82\x82\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x81\xaf\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x82\x92\xe3\x83\xaa\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe3\x80\x81\xe5\x85\xa8\xe3\x81\xa6\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4(AtomCraft\xe3\x81\xa7\xe8\xa8\xad\xe5\xae\x9a)\xe3\x82\x92\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x81\x8c""1\xe3\x81\xa4\xe3\x82\x82\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xa6\xe3\x81\x84\xe3\x81\xaa\xe3\x81\x84\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe3\x81\xab\xe3\x81\xaf\xe5\x80\xa4\xe3\x81\x8c\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xaa\xe3\x81\x84\xe3\x81\x9f\xe3\x82\x81\xe3\x80\x81\xe3\x81\x94\xe6\xb3\xa8\xe6\x84\x8f\xe3\x81\x8f\xe3\x81\xa0\xe3\x81\x95\xe3\x81\x84\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@return \xe6\x88\x90\xe5\x8a\x9f/\xe5\xa4\xb1\xe6\x95\x97\xe3\x81\x8c\xe8\xbf\x94\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "ResetAllAisacControlByName", nullptr, nullptr, sizeof(AtomCategory_eventResetAllAisacControlByName_Parms), Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics
	{
		struct AtomCategory_eventSetAisacControlByName_Parms
		{
			FString CategoryName;
			FString AisacName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName = { "AisacName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, AisacName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetAisacControlByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_AisacName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param AisacName AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Value \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x97\xe3\x81\xa6""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param AisacName AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Value \xe6\x96\xb0\xe3\x81\x97\xe3\x81\x84""AISAC\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x88\xe3\x83\xad\xe3\x83\xbc\xe3\x83\xab\xe5\x80\xa4\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetAisacControlByName", nullptr, nullptr, sizeof(AtomCategory_eventSetAisacControlByName_Parms), Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetAisacControlByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics
	{
		struct AtomCategory_eventSetVolumeByName_Parms
		{
			FString CategoryName;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventSetVolumeByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xae\xe5\xa4\x89\xe6\x9b\xb4\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* @param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92 0.0f \xe3\x80\x9c 1.0f \xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xae\xe5\xa4\x89\xe6\x9b\xb4\xe3\x82\x92\xe8\xa1\x8c\xe3\x81\x84\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n@param Volume \xe3\x83\x9c\xe3\x83\xaa\xe3\x83\xa5\xe3\x83\xbc\xe3\x83\xa0\xe3\x81\xae\xe5\x80\x8d\xe7\x8e\x87\xe3\x82\x92 0.0f \xe3\x80\x9c 1.0f \xe3\x81\xae\xe7\xaf\x84\xe5\x9b\xb2\xe3\x81\xa7\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "SetVolumeByName", nullptr, nullptr, sizeof(AtomCategory_eventSetVolumeByName_Parms), Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_SetVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCategory_StopByName_Statics
	{
		struct AtomCategory_eventStopByName_Parms
		{
			FString CategoryName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCategory_eventStopByName_Parms, CategoryName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCategory_StopByName_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AtomCategory" },
		{ "Comment", "/**\n\x09* \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x81\x86\xe3\x81\xa1\xe3\x80\x81\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe8\xa9\xb2\xe5\xbd\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x85\xa8\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe4\xb8\xad\xe3\x81\xa7\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe3\x81\x86\xe3\x81\xa1\xe3\x80\x81\xe4\xbb\xbb\xe6\x84\x8f\xe3\x81\xae\xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xab\xe8\xa9\xb2\xe5\xbd\x93\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x85\xa8\xe3\x81\xa6\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\n@param CategoryName \xe3\x82\xab\xe3\x83\x86\xe3\x82\xb4\xe3\x83\xaa\xe3\x81\xae\xe5\x90\x8d\xe5\x89\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCategory, nullptr, "StopByName", nullptr, nullptr, sizeof(AtomCategory_eventStopByName_Parms), Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCategory_StopByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCategory_StopByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCategory_StopByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomCategory_NoRegister()
	{
		return UAtomCategory::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCategory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoById, "GetAttachedAisacInfoById" }, // 3105367236
		{ &Z_Construct_UFunction_UAtomCategory_GetAttachedAisacInfoByName, "GetAttachedAisacInfoByName" }, // 3089555529
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueById, "GetCurrentAisacControlValueById" }, // 3851762733
		{ &Z_Construct_UFunction_UAtomCategory_GetCurrentAisacControlValueByName, "GetCurrentAisacControlValueByName" }, // 2733931633
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsById, "GetNumAttachedAisacsById" }, // 2536223577
		{ &Z_Construct_UFunction_UAtomCategory_GetNumAttachedAisacsByName, "GetNumAttachedAisacsByName" }, // 2904682494
		{ &Z_Construct_UFunction_UAtomCategory_GetVolumeByName, "GetVolumeByName" }, // 738503131
		{ &Z_Construct_UFunction_UAtomCategory_IsPausedByName, "IsPausedByName" }, // 1247510871
		{ &Z_Construct_UFunction_UAtomCategory_PauseByName, "PauseByName" }, // 60334880
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlById, "ResetAllAisacControlById" }, // 1328225124
		{ &Z_Construct_UFunction_UAtomCategory_ResetAllAisacControlByName, "ResetAllAisacControlByName" }, // 311086591
		{ &Z_Construct_UFunction_UAtomCategory_SetAisacControlByName, "SetAisacControlByName" }, // 1994079453
		{ &Z_Construct_UFunction_UAtomCategory_SetVolumeByName, "SetVolumeByName" }, // 282582156
		{ &Z_Construct_UFunction_UAtomCategory_StopByName, "StopByName" }, // 4092146482
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtomCategory.h" },
		{ "ModuleRelativePath", "Classes/AtomCategory.h" },
		{ "ToolTip", "AtomCategory class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCategory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomCategory_Statics::ClassParams = {
		&UAtomCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomCategory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomCategory, 2192205179);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCategory>()
	{
		return UAtomCategory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCategory(Z_Construct_UClass_UAtomCategory, &UAtomCategory::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
