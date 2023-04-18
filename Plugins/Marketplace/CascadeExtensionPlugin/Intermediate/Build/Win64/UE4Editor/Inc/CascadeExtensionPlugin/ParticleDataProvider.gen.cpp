// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleDataProvider() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleDataProvider_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FParticleProperties();
// End Cross Module References
	DEFINE_FUNCTION(IParticleDataProvider::execSpawnParticle)
	{
		P_GET_STRUCT(FParticleProperties,Z_Param_currentParticleProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParticleProperties*)Z_Param__Result=P_THIS->SpawnParticle_Implementation(Z_Param_currentParticleProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IParticleDataProvider::execUpdateParticle)
	{
		P_GET_STRUCT(FParticleProperties,Z_Param_currentParticleProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FParticleProperties*)Z_Param__Result=P_THIS->UpdateParticle_Implementation(Z_Param_currentParticleProperties);
		P_NATIVE_END;
	}
	FParticleProperties IParticleDataProvider::SpawnParticle(FParticleProperties currentParticleProperties) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SpawnParticle instead.");
		ParticleDataProvider_eventSpawnParticle_Parms Parms;
		return Parms.ReturnValue;
	}
	FParticleProperties IParticleDataProvider::UpdateParticle(FParticleProperties currentParticleProperties) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateParticle instead.");
		ParticleDataProvider_eventUpdateParticle_Parms Parms;
		return Parms.ReturnValue;
	}
	void UParticleDataProvider::StaticRegisterNativesUParticleDataProvider()
	{
		UClass* Class = UParticleDataProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnParticle", &IParticleDataProvider::execSpawnParticle },
			{ "UpdateParticle", &IParticleDataProvider::execUpdateParticle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentParticleProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleDataProvider_eventSpawnParticle_Parms, ReturnValue), Z_Construct_UScriptStruct_FParticleProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::NewProp_currentParticleProperties = { "currentParticleProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleDataProvider_eventSpawnParticle_Parms, currentParticleProperties), Z_Construct_UScriptStruct_FParticleProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::NewProp_currentParticleProperties,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParticleDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleDataProvider, nullptr, "SpawnParticle", nullptr, nullptr, sizeof(ParticleDataProvider_eventSpawnParticle_Parms), Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleDataProvider_SpawnParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParticleDataProvider_SpawnParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentParticleProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleDataProvider_eventUpdateParticle_Parms, ReturnValue), Z_Construct_UScriptStruct_FParticleProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::NewProp_currentParticleProperties = { "currentParticleProperties", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleDataProvider_eventUpdateParticle_Parms, currentParticleProperties), Z_Construct_UScriptStruct_FParticleProperties, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::NewProp_currentParticleProperties,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParticleDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleDataProvider, nullptr, "UpdateParticle", nullptr, nullptr, sizeof(ParticleDataProvider_eventUpdateParticle_Parms), Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleDataProvider_UpdateParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParticleDataProvider_UpdateParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParticleDataProvider_NoRegister()
	{
		return UParticleDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UParticleDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParticleDataProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleDataProvider_SpawnParticle, "SpawnParticle" }, // 3964181324
		{ &Z_Construct_UFunction_UParticleDataProvider_UpdateParticle, "UpdateParticle" }, // 1247895224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IParticleDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleDataProvider_Statics::ClassParams = {
		&UParticleDataProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleDataProvider, 3185561169);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleDataProvider>()
	{
		return UParticleDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleDataProvider(Z_Construct_UClass_UParticleDataProvider, &UParticleDataProvider::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleDataProvider);
	static FName NAME_UParticleDataProvider_SpawnParticle = FName(TEXT("SpawnParticle"));
	FParticleProperties IParticleDataProvider::Execute_SpawnParticle(const UObject* O, FParticleProperties currentParticleProperties)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UParticleDataProvider::StaticClass()));
		ParticleDataProvider_eventSpawnParticle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UParticleDataProvider_SpawnParticle);
		if (Func)
		{
			Parms.currentParticleProperties=currentParticleProperties;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IParticleDataProvider*)(O->GetNativeInterfaceAddress(UParticleDataProvider::StaticClass())))
		{
			Parms.ReturnValue = I->SpawnParticle_Implementation(currentParticleProperties);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UParticleDataProvider_UpdateParticle = FName(TEXT("UpdateParticle"));
	FParticleProperties IParticleDataProvider::Execute_UpdateParticle(const UObject* O, FParticleProperties currentParticleProperties)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UParticleDataProvider::StaticClass()));
		ParticleDataProvider_eventUpdateParticle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UParticleDataProvider_UpdateParticle);
		if (Func)
		{
			Parms.currentParticleProperties=currentParticleProperties;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IParticleDataProvider*)(O->GetNativeInterfaceAddress(UParticleDataProvider::StaticClass())))
		{
			Parms.ReturnValue = I->UpdateParticle_Implementation(currentParticleProperties);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
