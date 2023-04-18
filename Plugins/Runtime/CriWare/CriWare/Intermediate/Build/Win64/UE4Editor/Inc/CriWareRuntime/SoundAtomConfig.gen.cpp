// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/SoundAtomConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomConfig() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomCategoryInfoParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategoryInfoParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCategoryInfoParam"), sizeof(FAtomCategoryInfoParam), Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCategoryInfoParam>()
{
	return FAtomCategoryInfoParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCategoryInfoParam(FAtomCategoryInfoParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCategoryInfoParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomCategoryInfoParam")),new UScriptStruct::TCppStructOps<FAtomCategoryInfoParam>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCategoryInfoParam;
	struct Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPaused_MetaData[];
#endif
		static void NewProp_isPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_group_no_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_group_no;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_category_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_category_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "AtomCategoryInfoParam struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategoryInfoParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "Volume." },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused_SetBit(void* Obj)
	{
		((FAtomCategoryInfoParam*)Obj)->isPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused = { "isPaused", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCategoryInfoParam), &Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_volume_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "Volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no = { "group_no", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, group_no), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "ID." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id = { "category_id", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, category_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Aisac" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "Name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCategoryInfoParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_isPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCategoryInfoParam",
		sizeof(FAtomCategoryInfoParam),
		alignof(FAtomCategoryInfoParam),
		Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCategoryInfoParam"), sizeof(FAtomCategoryInfoParam), Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Hash() { return 3821556052U; }
	DEFINE_FUNCTION(USoundAtomConfig::execGetCategoryInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAtomCategoryInfoParam>*)Z_Param__Result=USoundAtomConfig::GetCategoryInfoArray();
		P_NATIVE_END;
	}
	void USoundAtomConfig::StaticRegisterNativesUSoundAtomConfig()
	{
		UClass* Class = USoundAtomConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryInfoArray", &USoundAtomConfig::execGetCategoryInfoArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics
	{
		struct SoundAtomConfig_eventGetCategoryInfoArray_Parms
		{
			TArray<FAtomCategoryInfoParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundAtomConfig_eventGetCategoryInfoArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCategoryInfoParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomConfig, nullptr, "GetCategoryInfoArray", nullptr, nullptr, sizeof(SoundAtomConfig_eventGetCategoryInfoArray_Parms), Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister()
	{
		return USoundAtomConfig::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcfFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcfFilePath;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray, "GetCategoryInfoArray" }, // 2641391648
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object" },
		{ "IncludePath", "SoundAtomConfig.h" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "SoundAtomConfig class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) ACF file path is now stored in AssetImportData. */" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
		{ "ToolTip", "(DEPRECATED) ACF file path is now stored in AssetImportData." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath = { "AcfFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomConfig, AcfFilePath), METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Reimport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundAtomConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundAtomConfig, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams = {
		&USoundAtomConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomConfig, 1441693954);
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomConfig>()
	{
		return USoundAtomConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomConfig(Z_Construct_UClass_USoundAtomConfig, &USoundAtomConfig::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundAtomConfig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
