// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "REDAnimationNode/Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBodyRedCustomInterpolateInfo() {}
// Cross Module References
	REDANIMATIONNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo();
	UPackage* Z_Construct_UPackage__Script_REDAnimationNode();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RigidBodyRedCustomInterpolateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern REDANIMATIONNODE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo, Z_Construct_UPackage__Script_REDAnimationNode(), TEXT("AnimNode_RigidBodyRedCustomInterpolateInfo"), sizeof(FAnimNode_RigidBodyRedCustomInterpolateInfo), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Hash());
	}
	return Singleton;
}
template<> REDANIMATIONNODE_API UScriptStruct* StaticStruct<FAnimNode_RigidBodyRedCustomInterpolateInfo>()
{
	return FAnimNode_RigidBodyRedCustomInterpolateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo(FAnimNode_RigidBodyRedCustomInterpolateInfo::StaticStruct, TEXT("/Script/REDAnimationNode"), TEXT("AnimNode_RigidBodyRedCustomInterpolateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustomInterpolateInfo
{
	FScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustomInterpolateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RigidBodyRedCustomInterpolateInfo")),new UScriptStruct::TCppStructOps<FAnimNode_RigidBodyRedCustomInterpolateInfo>);
	}
} ScriptStruct_REDAnimationNode_StaticRegisterNativesFAnimNode_RigidBodyRedCustomInterpolateInfo;
	struct Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBodyMass_MetaData[];
#endif
		static void NewProp_OverrideBodyMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideBodyMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBodyDamping_MetaData[];
#endif
		static void NewProp_OverrideBodyDamping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideBodyDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolatePhysicsAssetB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolatePhysicsAssetB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolatePhysicsAssetA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpolatePhysicsAssetA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBodyRedCustomInterpolateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustomInterpolateInfo" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustomInterpolateInfo*)Obj)->OverrideBodyMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass = { "OverrideBodyMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBodyRedCustomInterpolateInfo), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustomInterpolateInfo" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping_SetBit(void* Obj)
	{
		((FAnimNode_RigidBodyRedCustomInterpolateInfo*)Obj)->OverrideBodyDamping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping = { "OverrideBodyDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBodyRedCustomInterpolateInfo), &Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustomInterpolateInfo" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustomInterpolateInfo, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustomInterpolateInfo" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetB = { "InterpolatePhysicsAssetB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustomInterpolateInfo, InterpolatePhysicsAssetB), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_RigidBodyRedCustomInterpolateInfo" },
		{ "ModuleRelativePath", "Public/AnimNode_RigidBodyRedCustomInterpolateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetA = { "InterpolatePhysicsAssetA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBodyRedCustomInterpolateInfo, InterpolatePhysicsAssetA), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_OverrideBodyDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::NewProp_InterpolatePhysicsAssetA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_REDAnimationNode,
		nullptr,
		&NewStructOps,
		"AnimNode_RigidBodyRedCustomInterpolateInfo",
		sizeof(FAnimNode_RigidBodyRedCustomInterpolateInfo),
		alignof(FAnimNode_RigidBodyRedCustomInterpolateInfo),
		Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_REDAnimationNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RigidBodyRedCustomInterpolateInfo"), sizeof(FAnimNode_RigidBodyRedCustomInterpolateInfo), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBodyRedCustomInterpolateInfo_Hash() { return 906952745U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
