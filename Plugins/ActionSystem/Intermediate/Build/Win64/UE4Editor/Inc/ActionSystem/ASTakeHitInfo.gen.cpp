// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASTakeHitInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASTakeHitInfo() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASTakeHitInfo();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FASTakeHitInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASTakeHitInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASTakeHitInfo, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASTakeHitInfo"), sizeof(FASTakeHitInfo), Get_Z_Construct_UScriptStruct_FASTakeHitInfo_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASTakeHitInfo>()
{
	return FASTakeHitInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASTakeHitInfo(FASTakeHitInfo::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASTakeHitInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASTakeHitInfo
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASTakeHitInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASTakeHitInfo")),new UScriptStruct::TCppStructOps<FASTakeHitInfo>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASTakeHitInfo;
	struct Z_Construct_UScriptStruct_FASTakeHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RadialDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralDamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralDamageEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnsureReplicationByte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnsureReplicationByte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKilled_MetaData[];
#endif
		static void NewProp_bKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEventClassID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DamageEventClassID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCauser_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PawnInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASTakeHitInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_RadialDamageEvent = { "RadialDamageEvent", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, RadialDamageEvent), Z_Construct_UScriptStruct_FRadialDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_RadialDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PointDamageEvent = { "PointDamageEvent", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, PointDamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PointDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_GeneralDamageEvent = { "GeneralDamageEvent", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, GeneralDamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_GeneralDamageEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_EnsureReplicationByte = { "EnsureReplicationByte", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, EnsureReplicationByte), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_EnsureReplicationByte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled_SetBit(void* Obj)
	{
		((FASTakeHitInfo*)Obj)->bKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled = { "bKilled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FASTakeHitInfo), &Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageEventClassID = { "DamageEventClassID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, DamageEventClassID), METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageEventClassID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageCauser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageCauser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageCauser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PawnInstigator = { "PawnInstigator", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, PawnInstigator), Z_Construct_UClass_AASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PawnInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, DamageTypeClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_ActualDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASTakeHitInfo" },
		{ "ModuleRelativePath", "Public/ASTakeHitInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_ActualDamage = { "ActualDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASTakeHitInfo, ActualDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_ActualDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_ActualDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_RadialDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PointDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_GeneralDamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_EnsureReplicationByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_bKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageEventClassID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_PawnInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::NewProp_ActualDamage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASTakeHitInfo",
		sizeof(FASTakeHitInfo),
		alignof(FASTakeHitInfo),
		Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASTakeHitInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASTakeHitInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASTakeHitInfo"), sizeof(FASTakeHitInfo), Get_Z_Construct_UScriptStruct_FASTakeHitInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASTakeHitInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASTakeHitInfo_Hash() { return 1261166409U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
