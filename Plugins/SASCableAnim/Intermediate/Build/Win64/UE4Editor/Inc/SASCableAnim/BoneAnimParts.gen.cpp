// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SASCableAnim/Public/BoneAnimParts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneAnimParts() {}
// Cross Module References
	SASCABLEANIM_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimParts();
	UPackage* Z_Construct_UPackage__Script_SASCableAnim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FBoneAnimParts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SASCABLEANIM_API uint32 Get_Z_Construct_UScriptStruct_FBoneAnimParts_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneAnimParts, Z_Construct_UPackage__Script_SASCableAnim(), TEXT("BoneAnimParts"), sizeof(FBoneAnimParts), Get_Z_Construct_UScriptStruct_FBoneAnimParts_Hash());
	}
	return Singleton;
}
template<> SASCABLEANIM_API UScriptStruct* StaticStruct<FBoneAnimParts>()
{
	return FBoneAnimParts::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneAnimParts(FBoneAnimParts::StaticStruct, TEXT("/Script/SASCableAnim"), TEXT("BoneAnimParts"), false, nullptr, nullptr);
static struct FScriptStruct_SASCableAnim_StaticRegisterNativesFBoneAnimParts
{
	FScriptStruct_SASCableAnim_StaticRegisterNativesFBoneAnimParts()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneAnimParts")),new UScriptStruct::TCppStructOps<FBoneAnimParts>);
	}
} ScriptStruct_SASCableAnim_StaticRegisterNativesFBoneAnimParts;
	struct Z_Construct_UScriptStruct_FBoneAnimParts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneRotationIgnoreAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boneRotationIgnoreAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneLocationIgnoreAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boneLocationIgnoreAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimParts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneAnimParts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneAnimParts>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneRotationIgnoreAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneAnimParts" },
		{ "ModuleRelativePath", "Public/BoneAnimParts.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneRotationIgnoreAnimation = { "boneRotationIgnoreAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneAnimParts, boneRotationIgnoreAnimation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneRotationIgnoreAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneRotationIgnoreAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneLocationIgnoreAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BoneAnimParts" },
		{ "ModuleRelativePath", "Public/BoneAnimParts.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneLocationIgnoreAnimation = { "boneLocationIgnoreAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneAnimParts, boneLocationIgnoreAnimation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneLocationIgnoreAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneLocationIgnoreAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneAnimParts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneRotationIgnoreAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimParts_Statics::NewProp_boneLocationIgnoreAnimation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneAnimParts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SASCableAnim,
		nullptr,
		&NewStructOps,
		"BoneAnimParts",
		sizeof(FBoneAnimParts),
		alignof(FBoneAnimParts),
		Z_Construct_UScriptStruct_FBoneAnimParts_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimParts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimParts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneAnimParts_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SASCableAnim();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneAnimParts"), sizeof(FBoneAnimParts), Get_Z_Construct_UScriptStruct_FBoneAnimParts_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneAnimParts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneAnimParts_Hash() { return 951809539U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
