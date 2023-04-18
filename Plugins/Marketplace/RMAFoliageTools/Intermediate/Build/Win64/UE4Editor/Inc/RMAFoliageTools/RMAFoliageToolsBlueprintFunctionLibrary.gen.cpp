// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RMAFoliageTools/Public/RMAFoliageToolsBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRMAFoliageToolsBlueprintFunctionLibrary() {}
// Cross Module References
	RMAFOLIAGETOOLS_API UClass* Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_NoRegister();
	RMAFOLIAGETOOLS_API UClass* Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RMAFoliageTools();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URMAFoliageToolsBlueprintFunctionLibrary::execGetInstancedFoliageActor_Fc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInstancedFoliageActor**)Z_Param__Result=URMAFoliageToolsBlueprintFunctionLibrary::GetInstancedFoliageActor_Fc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URMAFoliageToolsBlueprintFunctionLibrary::execGetVersion_Fc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=URMAFoliageToolsBlueprintFunctionLibrary::GetVersion_Fc();
		P_NATIVE_END;
	}
	void URMAFoliageToolsBlueprintFunctionLibrary::StaticRegisterNativesURMAFoliageToolsBlueprintFunctionLibrary()
	{
		UClass* Class = URMAFoliageToolsBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedFoliageActor_Fc", &URMAFoliageToolsBlueprintFunctionLibrary::execGetInstancedFoliageActor_Fc },
			{ "GetVersion_Fc", &URMAFoliageToolsBlueprintFunctionLibrary::execGetVersion_Fc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics
	{
		struct RMAFoliageToolsBlueprintFunctionLibrary_eventGetInstancedFoliageActor_Fc_Parms
		{
			AInstancedFoliageActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RMAFoliageToolsBlueprintFunctionLibrary_eventGetInstancedFoliageActor_Fc_Parms, ReturnValue), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RMAFoliageToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary, nullptr, "GetInstancedFoliageActor_Fc", nullptr, nullptr, sizeof(RMAFoliageToolsBlueprintFunctionLibrary_eventGetInstancedFoliageActor_Fc_Parms), Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics
	{
		struct RMAFoliageToolsBlueprintFunctionLibrary_eventGetVersion_Fc_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RMAFoliageToolsBlueprintFunctionLibrary_eventGetVersion_Fc_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RMAFoliageToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary, nullptr, "GetVersion_Fc", nullptr, nullptr, sizeof(RMAFoliageToolsBlueprintFunctionLibrary_eventGetVersion_Fc_Parms), Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_NoRegister()
	{
		return URMAFoliageToolsBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RMAFoliageTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetInstancedFoliageActor_Fc, "GetInstancedFoliageActor_Fc" }, // 489554286
		{ &Z_Construct_UFunction_URMAFoliageToolsBlueprintFunctionLibrary_GetVersion_Fc, "GetVersion_Fc" }, // 2226055640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RMAFoliageToolsBlueprintFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RMAFoliageToolsBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URMAFoliageToolsBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::ClassParams = {
		&URMAFoliageToolsBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URMAFoliageToolsBlueprintFunctionLibrary, 959648881);
	template<> RMAFOLIAGETOOLS_API UClass* StaticClass<URMAFoliageToolsBlueprintFunctionLibrary>()
	{
		return URMAFoliageToolsBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URMAFoliageToolsBlueprintFunctionLibrary(Z_Construct_UClass_URMAFoliageToolsBlueprintFunctionLibrary, &URMAFoliageToolsBlueprintFunctionLibrary::StaticClass, TEXT("/Script/RMAFoliageTools"), TEXT("URMAFoliageToolsBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URMAFoliageToolsBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
