// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/MeshDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDataProvider() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UMeshDataProvider_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UMeshDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriangleData();
// End Cross Module References
	DEFINE_FUNCTION(IMeshDataProvider::execGetDataRevision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataRevision_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMeshDataProvider::execGetMeshTriangleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMeshTriangleData*)Z_Param__Result=P_THIS->GetMeshTriangleData_Implementation();
		P_NATIVE_END;
	}
	int32 IMeshDataProvider::GetDataRevision() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDataRevision instead.");
		MeshDataProvider_eventGetDataRevision_Parms Parms;
		return Parms.ReturnValue;
	}
	FMeshTriangleData IMeshDataProvider::GetMeshTriangleData() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeshTriangleData instead.");
		MeshDataProvider_eventGetMeshTriangleData_Parms Parms;
		return Parms.ReturnValue;
	}
	void UMeshDataProvider::StaticRegisterNativesUMeshDataProvider()
	{
		UClass* Class = UMeshDataProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataRevision", &IMeshDataProvider::execGetDataRevision },
			{ "GetMeshTriangleData", &IMeshDataProvider::execGetMeshTriangleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDataProvider_eventGetDataRevision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDataProvider, nullptr, "GetDataRevision", nullptr, nullptr, sizeof(MeshDataProvider_eventGetDataRevision_Parms), Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDataProvider_GetDataRevision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDataProvider_GetDataRevision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeshDataProvider_eventGetMeshTriangleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeshTriangleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshDataProvider, nullptr, "GetMeshTriangleData", nullptr, nullptr, sizeof(MeshDataProvider_eventGetMeshTriangleData_Parms), Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshDataProvider_NoRegister()
	{
		return UMeshDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshDataProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshDataProvider_GetDataRevision, "GetDataRevision" }, // 288628616
		{ &Z_Construct_UFunction_UMeshDataProvider_GetMeshTriangleData, "GetMeshTriangleData" }, // 3189110512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshDataProvider_Statics::ClassParams = {
		&UMeshDataProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshDataProvider, 2839956940);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UMeshDataProvider>()
	{
		return UMeshDataProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshDataProvider(Z_Construct_UClass_UMeshDataProvider, &UMeshDataProvider::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UMeshDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDataProvider);
	static FName NAME_UMeshDataProvider_GetDataRevision = FName(TEXT("GetDataRevision"));
	int32 IMeshDataProvider::Execute_GetDataRevision(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeshDataProvider::StaticClass()));
		MeshDataProvider_eventGetDataRevision_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMeshDataProvider_GetDataRevision);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMeshDataProvider*)(O->GetNativeInterfaceAddress(UMeshDataProvider::StaticClass())))
		{
			Parms.ReturnValue = I->GetDataRevision_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMeshDataProvider_GetMeshTriangleData = FName(TEXT("GetMeshTriangleData"));
	FMeshTriangleData IMeshDataProvider::Execute_GetMeshTriangleData(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMeshDataProvider::StaticClass()));
		MeshDataProvider_eventGetMeshTriangleData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMeshDataProvider_GetMeshTriangleData);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IMeshDataProvider*)(O->GetNativeInterfaceAddress(UMeshDataProvider::StaticClass())))
		{
			Parms.ReturnValue = I->GetMeshTriangleData_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
