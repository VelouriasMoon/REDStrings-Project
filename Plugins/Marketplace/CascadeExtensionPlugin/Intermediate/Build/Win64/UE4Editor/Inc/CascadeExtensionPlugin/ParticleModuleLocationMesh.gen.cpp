// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CascadeExtensionPlugin/Public/ParticleModuleLocationMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationMesh() {}
// Cross Module References
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationMesh_NoRegister();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UParticleModuleLocationMesh();
	CASCADEEXTENSIONPLUGIN_API UClass* Z_Construct_UClass_UAbstractParticleModule();
	UPackage* Z_Construct_UPackage__Script_CascadeExtensionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UParticleModuleLocationMesh::execOnCachedActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCachedActorDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void UParticleModuleLocationMesh::StaticRegisterNativesUParticleModuleLocationMesh()
	{
		UClass* Class = UParticleModuleLocationMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCachedActorDestroyed", &UParticleModuleLocationMesh::execOnCachedActorDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics
	{
		struct ParticleModuleLocationMesh_eventOnCachedActorDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParticleModuleLocationMesh_eventOnCachedActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleModuleLocationMesh, nullptr, "OnCachedActorDestroyed", nullptr, nullptr, sizeof(ParticleModuleLocationMesh_eventOnCachedActorDestroyed_Parms), Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationMesh_NoRegister()
	{
		return UParticleModuleLocationMesh::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EqualTriangeWeight_MetaData[];
#endif
		static void NewProp_EqualTriangeWeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EqualTriangeWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DynamicMeshParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_CascadeExtensionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParticleModuleLocationMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleModuleLocationMesh_OnCachedActorDestroyed, "OnCachedActorDestroyed" }, // 3984528721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ParticleModuleLocationMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_VelocityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_VelocityScale = { "VelocityScale", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationMesh, VelocityScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_VelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_VelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationMesh" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight_SetBit(void* Obj)
	{
		((UParticleModuleLocationMesh*)Obj)->EqualTriangeWeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight = { "EqualTriangeWeight", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UParticleModuleLocationMesh), &Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_MeshTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationMesh" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationMesh, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_MeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_MeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_DynamicMeshParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationMesh" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_DynamicMeshParameterName = { "DynamicMeshParameterName", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationMesh, DynamicMeshParameterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_DynamicMeshParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_DynamicMeshParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_SurfaceMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ParticleModuleLocationMesh" },
		{ "ModuleRelativePath", "Public/ParticleModuleLocationMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_SurfaceMesh = { "SurfaceMesh", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleLocationMesh, SurfaceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_SurfaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_SurfaceMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_VelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_EqualTriangeWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_MeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_DynamicMeshParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationMesh_Statics::NewProp_SurfaceMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationMesh_Statics::ClassParams = {
		&UParticleModuleLocationMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParticleModuleLocationMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationMesh, 2984587298);
	template<> CASCADEEXTENSIONPLUGIN_API UClass* StaticClass<UParticleModuleLocationMesh>()
	{
		return UParticleModuleLocationMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationMesh(Z_Construct_UClass_UParticleModuleLocationMesh, &UParticleModuleLocationMesh::StaticClass, TEXT("/Script/CascadeExtensionPlugin"), TEXT("UParticleModuleLocationMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
