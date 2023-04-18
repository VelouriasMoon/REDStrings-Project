// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/RSMeshDataProviderFL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRSMeshDataProviderFL() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_URSMeshDataProviderFL_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_URSMeshDataProviderFL();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriangleData();
// End Cross Module References
	DEFINE_FUNCTION(URSMeshDataProviderFL::execGetStaticMeshProviderTriangleData)
	{
		P_GET_STRUCT_REF(FMeshTriangleData,Z_Param_Out_OutTriangleData);
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_lodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_STRUCT(FVector,Z_Param_Scale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		URSMeshDataProviderFL::GetStaticMeshProviderTriangleData(Z_Param_Out_OutTriangleData,Z_Param_StaticMesh,Z_Param_lodIndex,Z_Param_SectionIndex,Z_Param_Scale3D);
		P_NATIVE_END;
	}
	void URSMeshDataProviderFL::StaticRegisterNativesURSMeshDataProviderFL()
	{
		UClass* Class = URSMeshDataProviderFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStaticMeshProviderTriangleData", &URSMeshDataProviderFL::execGetStaticMeshProviderTriangleData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics
	{
		struct RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms
		{
			FMeshTriangleData OutTriangleData;
			UStaticMesh* StaticMesh;
			int32 lodIndex;
			int32 SectionIndex;
			FVector Scale3D;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale3D;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lodIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_Scale3D = { "Scale3D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms, Scale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_lodIndex = { "lodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms, lodIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_OutTriangleData = { "OutTriangleData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms, OutTriangleData), Z_Construct_UScriptStruct_FMeshTriangleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_Scale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_lodIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::NewProp_OutTriangleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RSMeshDataProviderFL.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URSMeshDataProviderFL, nullptr, "GetStaticMeshProviderTriangleData", nullptr, nullptr, sizeof(RSMeshDataProviderFL_eventGetStaticMeshProviderTriangleData_Parms), Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URSMeshDataProviderFL_NoRegister()
	{
		return URSMeshDataProviderFL::StaticClass();
	}
	struct Z_Construct_UClass_URSMeshDataProviderFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URSMeshDataProviderFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URSMeshDataProviderFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URSMeshDataProviderFL_GetStaticMeshProviderTriangleData, "GetStaticMeshProviderTriangleData" }, // 2535955725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URSMeshDataProviderFL_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RSMeshDataProviderFL.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RSMeshDataProviderFL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URSMeshDataProviderFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URSMeshDataProviderFL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URSMeshDataProviderFL_Statics::ClassParams = {
		&URSMeshDataProviderFL::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URSMeshDataProviderFL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URSMeshDataProviderFL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URSMeshDataProviderFL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URSMeshDataProviderFL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URSMeshDataProviderFL, 3590037808);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<URSMeshDataProviderFL>()
	{
		return URSMeshDataProviderFL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URSMeshDataProviderFL(Z_Construct_UClass_URSMeshDataProviderFL, &URSMeshDataProviderFL::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("URSMeshDataProviderFL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URSMeshDataProviderFL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
