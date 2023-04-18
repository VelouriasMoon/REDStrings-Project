// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASEquipWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASEquipWeapon() {}
// Cross Module References
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASEquipWeapon();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FASEquipWeapon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACTIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FASEquipWeapon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FASEquipWeapon, Z_Construct_UPackage__Script_ActionSystem(), TEXT("ASEquipWeapon"), sizeof(FASEquipWeapon), Get_Z_Construct_UScriptStruct_FASEquipWeapon_Hash());
	}
	return Singleton;
}
template<> ACTIONSYSTEM_API UScriptStruct* StaticStruct<FASEquipWeapon>()
{
	return FASEquipWeapon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FASEquipWeapon(FASEquipWeapon::StaticStruct, TEXT("/Script/ActionSystem"), TEXT("ASEquipWeapon"), false, nullptr, nullptr);
static struct FScriptStruct_ActionSystem_StaticRegisterNativesFASEquipWeapon
{
	FScriptStruct_ActionSystem_StaticRegisterNativesFASEquipWeapon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ASEquipWeapon")),new UScriptStruct::TCppStructOps<FASEquipWeapon>);
	}
} ScriptStruct_ActionSystem_StaticRegisterNativesFASEquipWeapon;
	struct Z_Construct_UScriptStruct_FASEquipWeapon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InventoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASEquipWeapon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ASEquipWeapon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASEquipWeapon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Scale3D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASEquipWeapon" },
		{ "ModuleRelativePath", "Public/ASEquipWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Scale3D = { "Scale3D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASEquipWeapon, Scale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Scale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Scale3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASEquipWeapon" },
		{ "ModuleRelativePath", "Public/ASEquipWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASEquipWeapon, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_InventoryId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASEquipWeapon" },
		{ "ModuleRelativePath", "Public/ASEquipWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_InventoryId = { "InventoryId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FASEquipWeapon, InventoryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_InventoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_InventoryId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASEquipWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Scale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASEquipWeapon_Statics::NewProp_InventoryId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASEquipWeapon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
		nullptr,
		&NewStructOps,
		"ASEquipWeapon",
		sizeof(FASEquipWeapon),
		alignof(FASEquipWeapon),
		Z_Construct_UScriptStruct_FASEquipWeapon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASEquipWeapon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FASEquipWeapon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FASEquipWeapon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ActionSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ASEquipWeapon"), sizeof(FASEquipWeapon), Get_Z_Construct_UScriptStruct_FASEquipWeapon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FASEquipWeapon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FASEquipWeapon_Hash() { return 3198829998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
