// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexAnimToolset/Public/VertexAnimProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexAnimProfile() {}
// Cross Module References
	VERTEXANIMTOOLSET_API UScriptStruct* Z_Construct_UScriptStruct_FVASequenceData();
	UPackage* Z_Construct_UPackage__Script_VertexAnimToolset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	VERTEXANIMTOOLSET_API UClass* Z_Construct_UClass_UVertexAnimProfile_NoRegister();
	VERTEXANIMTOOLSET_API UClass* Z_Construct_UClass_UVertexAnimProfile();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
class UScriptStruct* FVASequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VERTEXANIMTOOLSET_API uint32 Get_Z_Construct_UScriptStruct_FVASequenceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVASequenceData, Z_Construct_UPackage__Script_VertexAnimToolset(), TEXT("VASequenceData"), sizeof(FVASequenceData), Get_Z_Construct_UScriptStruct_FVASequenceData_Hash());
	}
	return Singleton;
}
template<> VERTEXANIMTOOLSET_API UScriptStruct* StaticStruct<FVASequenceData>()
{
	return FVASequenceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVASequenceData(FVASequenceData::StaticStruct, TEXT("/Script/VertexAnimToolset"), TEXT("VASequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_VertexAnimToolset_StaticRegisterNativesFVASequenceData
{
	FScriptStruct_VertexAnimToolset_StaticRegisterNativesFVASequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VASequenceData")),new UScriptStruct::TCppStructOps<FVASequenceData>);
	}
} ScriptStruct_VertexAnimToolset_StaticRegisterNativesFVASequenceData;
	struct Z_Construct_UScriptStruct_FVASequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_Generated_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed_Generated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStart_Generated_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimStart_Generated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequenceRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVASequenceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Struct Holding helper data specific to an Animation Sequence needed for the baking process\n" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
		{ "ToolTip", "Struct Holding helper data specific to an Animation Sequence needed for the baking process" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVASequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVASequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_Speed_Generated_MetaData[] = {
		{ "Category", "BakeSequenceGenerated" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_Speed_Generated = { "Speed_Generated", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVASequenceData, Speed_Generated), METADATA_PARAMS(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_Speed_Generated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_Speed_Generated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_AnimStart_Generated_MetaData[] = {
		{ "Category", "BakeSequenceGenerated" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_AnimStart_Generated = { "AnimStart_Generated", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVASequenceData, AnimStart_Generated), METADATA_PARAMS(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_AnimStart_Generated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_AnimStart_Generated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "BakeSequence" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVASequenceData, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_SequenceRef_MetaData[] = {
		{ "Category", "BakeSequence" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_SequenceRef = { "SequenceRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVASequenceData, SequenceRef), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_SequenceRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_SequenceRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVASequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_Speed_Generated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_AnimStart_Generated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_NumFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVASequenceData_Statics::NewProp_SequenceRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVASequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VertexAnimToolset,
		nullptr,
		&NewStructOps,
		"VASequenceData",
		sizeof(FVASequenceData),
		alignof(FVASequenceData),
		Z_Construct_UScriptStruct_FVASequenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVASequenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVASequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVASequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVASequenceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VertexAnimToolset();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VASequenceData"), sizeof(FVASequenceData), Get_Z_Construct_UScriptStruct_FVASequenceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVASequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVASequenceData_Hash() { return 2811538165U; }
	void UVertexAnimProfile::StaticRegisterNativesUVertexAnimProfile()
	{
	}
	UClass* Z_Construct_UClass_UVertexAnimProfile_NoRegister()
	{
		return UVertexAnimProfile::StaticClass();
	}
	struct Z_Construct_UClass_UVertexAnimProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValuePosition_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValuePosition_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRotTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoneRotTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonePosTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BonePosTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_BoneAnim_Full_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel_BoneAnim_Full;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_BoneAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel_BoneAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValueOffset_Vert_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValueOffset_Vert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowsPerFrame_Vert_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowsPerFrame_Vert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalsTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetsTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffsetsTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_VertAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel_VertAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anims_Bone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anims_Bone_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSize_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideSize_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullBoneSkinning_MetaData[];
#endif
		static void NewProp_FullBoneSkinning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullBoneSkinning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_Vert_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anims_Vert;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anims_Vert_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSize_Vert_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideSize_Vert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVMergeDuplicateVerts_MetaData[];
#endif
		static void NewProp_UVMergeDuplicateVerts_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UVMergeDuplicateVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoSize_MetaData[];
#endif
		static void NewProp_AutoSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexAnimProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexAnimToolset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data asset holding all the helper data needed for the baking process\n" },
		{ "IncludePath", "VertexAnimProfile.h" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
		{ "ToolTip", "Data asset holding all the helper data needed for the baking process" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValuePosition_Bone_MetaData[] = {
		{ "Category", "Generated_BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValuePosition_Bone = { "MaxValuePosition_Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, MaxValuePosition_Bone), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValuePosition_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValuePosition_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BoneRotTexture_MetaData[] = {
		{ "Category", "Generated_BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BoneRotTexture = { "BoneRotTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, BoneRotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BoneRotTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BoneRotTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BonePosTexture_MetaData[] = {
		{ "Category", "Generated_BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BonePosTexture = { "BonePosTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, BonePosTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BonePosTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BonePosTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_Full_MetaData[] = {
		{ "Category", "Generated_BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_Full = { "UVChannel_BoneAnim_Full", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, UVChannel_BoneAnim_Full), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_Full_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_Full_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_MetaData[] = {
		{ "Category", "Generated_BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim = { "UVChannel_BoneAnim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, UVChannel_BoneAnim), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValueOffset_Vert_MetaData[] = {
		{ "Category", "Generated_VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValueOffset_Vert = { "MaxValueOffset_Vert", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, MaxValueOffset_Vert), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValueOffset_Vert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValueOffset_Vert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_RowsPerFrame_Vert_MetaData[] = {
		{ "Category", "Generated_VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_RowsPerFrame_Vert = { "RowsPerFrame_Vert", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, RowsPerFrame_Vert), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_RowsPerFrame_Vert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_RowsPerFrame_Vert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_NormalsTexture_MetaData[] = {
		{ "Category", "Generated_VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_NormalsTexture = { "NormalsTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, NormalsTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_NormalsTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_NormalsTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OffsetsTexture_MetaData[] = {
		{ "Category", "Generated_VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OffsetsTexture = { "OffsetsTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, OffsetsTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OffsetsTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OffsetsTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_VertAnim_MetaData[] = {
		{ "Category", "Generated_VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_VertAnim = { "UVChannel_VertAnim", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, UVChannel_VertAnim), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_VertAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_VertAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "AnimProfileGenerated" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone_MetaData[] = {
		{ "Category", "BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone = { "Anims_Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, Anims_Bone), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone_Inner = { "Anims_Bone", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVASequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Bone_MetaData[] = {
		{ "Category", "BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Bone = { "OverrideSize_Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, OverrideSize_Bone), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning_MetaData[] = {
		{ "Category", "BoneAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	void Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning_SetBit(void* Obj)
	{
		((UVertexAnimProfile*)Obj)->FullBoneSkinning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning = { "FullBoneSkinning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexAnimProfile), &Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert_MetaData[] = {
		{ "Category", "VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert = { "Anims_Vert", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, Anims_Vert), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert_Inner = { "Anims_Vert", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVASequenceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Vert_MetaData[] = {
		{ "Category", "VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Vert = { "OverrideSize_Vert", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, OverrideSize_Vert), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Vert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Vert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts_MetaData[] = {
		{ "Category", "VertAnim" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	void Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts_SetBit(void* Obj)
	{
		((UVertexAnimProfile*)Obj)->UVMergeDuplicateVerts = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts = { "UVMergeDuplicateVerts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexAnimProfile), &Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "AnimProfile" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVertexAnimProfile, MaxWidth), METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize_MetaData[] = {
		{ "Category", "AnimProfile" },
		{ "ModuleRelativePath", "Public/VertexAnimProfile.h" },
	};
#endif
	void Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize_SetBit(void* Obj)
	{
		((UVertexAnimProfile*)Obj)->AutoSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize = { "AutoSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVertexAnimProfile), &Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexAnimProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValuePosition_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BoneRotTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_BonePosTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim_Full,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_BoneAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxValueOffset_Vert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_RowsPerFrame_Vert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_NormalsTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OffsetsTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVChannel_VertAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Bone_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_FullBoneSkinning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_Anims_Vert_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_OverrideSize_Vert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_UVMergeDuplicateVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_MaxWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexAnimProfile_Statics::NewProp_AutoSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexAnimProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexAnimProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVertexAnimProfile_Statics::ClassParams = {
		&UVertexAnimProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexAnimProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexAnimProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexAnimProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexAnimProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVertexAnimProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVertexAnimProfile, 4237098853);
	template<> VERTEXANIMTOOLSET_API UClass* StaticClass<UVertexAnimProfile>()
	{
		return UVertexAnimProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVertexAnimProfile(Z_Construct_UClass_UVertexAnimProfile, &UVertexAnimProfile::StaticClass, TEXT("/Script/VertexAnimToolset"), TEXT("UVertexAnimProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexAnimProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
