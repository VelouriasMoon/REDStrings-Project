// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsLimitsDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset() {}
// Cross Module References
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
// End Cross Module References
class UScriptStruct* FPlanarLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimitData"), sizeof(FPlanarLimitData), Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimitData>()
{
	return FPlanarLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlanarLimitData(FPlanarLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("PlanarLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlanarLimitData")),new UScriptStruct::TCppStructOps<FPlanarLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimitData;
	struct Z_Construct_UScriptStruct_FPlanarLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlanarLimitData, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"PlanarLimitData",
		sizeof(FPlanarLimitData),
		alignof(FPlanarLimitData),
		Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlanarLimitData"), sizeof(FPlanarLimitData), Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlanarLimitData_Hash() { return 2982911955U; }
class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"), sizeof(FCapsuleLimitData), Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapsuleLimitData(FCapsuleLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("CapsuleLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapsuleLimitData")),new UScriptStruct::TCppStructOps<FCapsuleLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimitData;
	struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"CapsuleLimitData",
		sizeof(FCapsuleLimitData),
		alignof(FCapsuleLimitData),
		Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapsuleLimitData"), sizeof(FCapsuleLimitData), Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimitData_Hash() { return 566480348U; }
class UScriptStruct* FSphericalLimitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimitData"), sizeof(FSphericalLimitData), Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimitData>()
{
	return FSphericalLimitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphericalLimitData(FSphericalLimitData::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("SphericalLimitData"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SphericalLimitData")),new UScriptStruct::TCppStructOps<FSphericalLimitData>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimitData;
	struct Z_Construct_UScriptStruct_FSphericalLimitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimitData, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"SphericalLimitData",
		sizeof(FSphericalLimitData),
		alignof(FSphericalLimitData),
		Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphericalLimitData"), sizeof(FSphericalLimitData), Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphericalLimitData_Hash() { return 101919489U; }
class UScriptStruct* FCollisionLimitDataBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitDataBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitDataBase, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitDataBase"), sizeof(FCollisionLimitDataBase), Get_Z_Construct_UScriptStruct_FCollisionLimitDataBase_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitDataBase>()
{
	return FCollisionLimitDataBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionLimitDataBase(FCollisionLimitDataBase::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("CollisionLimitDataBase"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitDataBase
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitDataBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionLimitDataBase")),new UScriptStruct::TCppStructOps<FCollisionLimitDataBase>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitDataBase;
	struct Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DrivingBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// I chose this design because using FBoneReference with anything other than Persona gives me an error. \n// I want to make it simpler...\n" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "I chose this design because using FBoneReference with anything other than Persona gives me an error.\nI want to make it simpler..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitDataBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Debug" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName = { "DrivingBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"CollisionLimitDataBase",
		sizeof(FCollisionLimitDataBase),
		alignof(FCollisionLimitDataBase),
		Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitDataBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionLimitDataBase"), sizeof(FCollisionLimitDataBase), Get_Z_Construct_UScriptStruct_FCollisionLimitDataBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitDataBase_Hash() { return 1377538872U; }
	void UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KawaiiPhysicsLimitsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlanarLimitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimitData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSphericalLimitData, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLimitsDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams = {
		&UKawaiiPhysicsLimitsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKawaiiPhysicsLimitsDataAsset, 1904627535);
	template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsLimitsDataAsset>()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKawaiiPhysicsLimitsDataAsset(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset, &UKawaiiPhysicsLimitsDataAsset::StaticClass, TEXT("/Script/KawaiiPhysics"), TEXT("UKawaiiPhysicsLimitsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsLimitsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
