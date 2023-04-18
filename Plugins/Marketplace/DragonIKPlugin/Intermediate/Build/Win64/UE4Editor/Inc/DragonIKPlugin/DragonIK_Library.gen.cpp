// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/DragonIK_Library.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragonIK_Library() {}
// Cross Module References
	DRAGONIKPLUGIN_API UClass* Z_Construct_UClass_UDragonIK_Library_NoRegister();
	DRAGONIKPLUGIN_API UClass* Z_Construct_UClass_UDragonIK_Library();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDragonIK_Library::execCustomLookRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_lookAt);
		P_GET_STRUCT(FVector,Z_Param_upDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UDragonIK_Library::CustomLookRotation(Z_Param_lookAt,Z_Param_upDirection);
		P_NATIVE_END;
	}
	void UDragonIK_Library::StaticRegisterNativesUDragonIK_Library()
	{
		UClass* Class = UDragonIK_Library::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomLookRotation", &UDragonIK_Library::execCustomLookRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics
	{
		struct DragonIK_Library_eventCustomLookRotation_Parms
		{
			FVector lookAt;
			FVector upDirection;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_upDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lookAt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_upDirection = { "upDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, upDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_lookAt = { "lookAt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DragonIK_Library_eventCustomLookRotation_Parms, lookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_upDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::NewProp_lookAt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragonIK_Library, nullptr, "CustomLookRotation", nullptr, nullptr, sizeof(DragonIK_Library_eventCustomLookRotation_Parms), Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDragonIK_Library_NoRegister()
	{
		return UDragonIK_Library::StaticClass();
	}
	struct Z_Construct_UClass_UDragonIK_Library_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragonIK_Library_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragonIK_Library_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragonIK_Library_CustomLookRotation, "CustomLookRotation" }, // 1826387521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DragonIK_Library.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DragonIK_Library.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragonIK_Library_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragonIK_Library>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragonIK_Library_Statics::ClassParams = {
		&UDragonIK_Library::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragonIK_Library_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragonIK_Library()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragonIK_Library_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragonIK_Library, 2832628917);
	template<> DRAGONIKPLUGIN_API UClass* StaticClass<UDragonIK_Library>()
	{
		return UDragonIK_Library::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragonIK_Library(Z_Construct_UClass_UDragonIK_Library, &UDragonIK_Library::StaticClass, TEXT("/Script/DragonIKPlugin"), TEXT("UDragonIK_Library"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragonIK_Library);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
