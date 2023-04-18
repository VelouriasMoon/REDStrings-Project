// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASAttackCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASAttackCollision() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASAttackCollision();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FASAttackCollision::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASAttackCollision_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASAttackCollision, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASAttackCollision"), sizeof(FASAttackCollision), Get_Z_Construct_UScriptStruct_FASAttackCollision_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASAttackCollision>()
{
	return FASAttackCollision::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASAttackCollision(FASAttackCollision::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASAttackCollision"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASAttackCollision
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASAttackCollision()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASAttackCollision")),new UScriptStruct::TCppStructOps<FASAttackCollision>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASAttackCollision;
	struct Z_Construct_UScriptStruct_FASAttackCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASAttackCollision>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LifeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAttackCollision" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAttackCollision, LifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_DelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAttackCollision" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAttackCollision, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAttackCollision" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAttackCollision, SphereRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAttackCollision" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAttackCollision, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASAttackCollision" },
		{ "ModuleRelativePath", "Public/ASAttackCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASAttackCollision, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASAttackCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASAttackCollision_Statics::NewProp_SocketName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASAttackCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASAttackCollision",
		sizeof(FASAttackCollision),
		alignof(FASAttackCollision),
		Z_Construct_UScriptStruct_FASAttackCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASAttackCollision_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASAttackCollision_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASAttackCollision()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASAttackCollision_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASAttackCollision"), sizeof(FASAttackCollision), Get_Z_Construct_UScriptStruct_FASAttackCollision_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASAttackCollision_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASAttackCollision_Hash() { return 2823437181U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
