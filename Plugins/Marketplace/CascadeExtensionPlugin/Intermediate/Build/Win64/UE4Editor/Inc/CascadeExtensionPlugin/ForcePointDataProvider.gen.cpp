// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ForcePointDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForcePointDataProvider() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UForcePointDataProvider_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UForcePointDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FForcePoints();
// End Cross Module References
	DEFINE_FUNCTION(IForcePointDataProvider::execGetForcePoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FForcePoints*)Z_Param__Result=P_THIS->GetForcePoints_Implementation();
		P_NATIVE_END;
	}
	FForcePoints IForcePointDataProvider::GetForcePoints() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetForcePoints instead.");
		ForcePointDataProvider_eventGetForcePoints_Parms Parms;
		return Parms.ReturnValue;
	}
	void UForcePointDataProvider::StaticRegisterNativesUForcePointDataProvider()
	{
		UClass* Class = UForcePointDataProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetForcePoints", &IForcePointDataProvider::execGetForcePoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForcePointDataProvider_eventGetForcePoints_Parms, ReturnValue), Z_Construct_UScriptStruct_FForcePoints, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ForcePointDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForcePointDataProvider, nullptr, "GetForcePoints", nullptr, nullptr, sizeof(ForcePointDataProvider_eventGetForcePoints_Parms), Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForcePointDataProvider_NoRegister()
	{
		return UForcePointDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UForcePointDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForcePointDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForcePointDataProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForcePointDataProvider_GetForcePoints, "GetForcePoints" }, // 239051415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForcePointDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ForcePointDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForcePointDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IForcePointDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForcePointDataProvider_Statics::ClassParams = {
		&UForcePointDataProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UForcePointDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForcePointDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForcePointDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForcePointDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForcePointDataProvider, 3458951310);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UForcePointDataProvider>()
	{
		return UForcePointDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForcePointDataProvider(Z_Construct_UClass_UForcePointDataProvider, &UForcePointDataProvider::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UForcePointDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForcePointDataProvider);
	static FName NAME_UForcePointDataProvider_GetForcePoints = FName(TEXT("GetForcePoints"));
	FForcePoints IForcePointDataProvider::Execute_GetForcePoints(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UForcePointDataProvider::StaticClass()));
		ForcePointDataProvider_eventGetForcePoints_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UForcePointDataProvider_GetForcePoints);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IForcePointDataProvider*)(O->GetNativeInterfaceAddress(UForcePointDataProvider::StaticClass())))
		{
			Parms.ReturnValue = I->GetForcePoints_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
