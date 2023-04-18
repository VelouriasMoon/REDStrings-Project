// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RMAFoliageTools/Public/RMAFoliageToolsFoliageBuffer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRMAFoliageToolsFoliageBuffer() {}
// Cross Module References
	RMAFOLIAGETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer();
	UPackage* Z_Construct_UPackage__Script_RMAFoliageTools();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FRMAFoliageToolsFoliageBuffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RMAFOLIAGETOOLS_API uint32 Get_Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer, Z_Construct_UPackage__Script_RMAFoliageTools(), TEXT("RMAFoliageToolsFoliageBuffer"), sizeof(FRMAFoliageToolsFoliageBuffer), Get_Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Hash());
	}
	return Singleton;
}
template<> RMAFOLIAGETOOLS_API UScriptStruct* StaticStruct<FRMAFoliageToolsFoliageBuffer>()
{
	return FRMAFoliageToolsFoliageBuffer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRMAFoliageToolsFoliageBuffer(FRMAFoliageToolsFoliageBuffer::StaticStruct, TEXT("/Script/RMAFoliageTools"), TEXT("RMAFoliageToolsFoliageBuffer"), false, nullptr, nullptr);
static struct FScriptStruct_RMAFoliageTools_StaticRegisterNativesFRMAFoliageToolsFoliageBuffer
{
	FScriptStruct_RMAFoliageTools_StaticRegisterNativesFRMAFoliageToolsFoliageBuffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RMAFoliageToolsFoliageBuffer")),new UScriptStruct::TCppStructOps<FRMAFoliageToolsFoliageBuffer>);
	}
} ScriptStruct_RMAFoliageTools_StaticRegisterNativesFRMAFoliageToolsFoliageBuffer;
	struct Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Mesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Mesh_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Transform_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RMAFoliageToolsFoliageBuffer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRMAFoliageToolsFoliageBuffer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RMAFoliageToolsFoliageBuffer" },
		{ "ModuleRelativePath", "Public/RMAFoliageToolsFoliageBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh = { "_Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRMAFoliageToolsFoliageBuffer, _Mesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh_Inner = { "_Mesh", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RMAFoliageToolsFoliageBuffer" },
		{ "ModuleRelativePath", "Public/RMAFoliageToolsFoliageBuffer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform = { "_Transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRMAFoliageToolsFoliageBuffer, _Transform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform_Inner = { "_Transform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Mesh_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::NewProp__Transform_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RMAFoliageTools,
		nullptr,
		&NewStructOps,
		"RMAFoliageToolsFoliageBuffer",
		sizeof(FRMAFoliageToolsFoliageBuffer),
		alignof(FRMAFoliageToolsFoliageBuffer),
		Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RMAFoliageTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RMAFoliageToolsFoliageBuffer"), sizeof(FRMAFoliageToolsFoliageBuffer), Get_Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRMAFoliageToolsFoliageBuffer_Hash() { return 1953835758U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
