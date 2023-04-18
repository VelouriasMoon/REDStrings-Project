// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListener() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomListenerFocusPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomListenerFocusPointInfo"), sizeof(FAtomListenerFocusPointInfo), Get_Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomListenerFocusPointInfo>()
{
	return FAtomListenerFocusPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomListenerFocusPointInfo(FAtomListenerFocusPointInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomListenerFocusPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomListenerFocusPointInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomListenerFocusPointInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomListenerFocusPointInfo")),new UScriptStruct::TCppStructOps<FAtomListenerFocusPointInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomListenerFocusPointInfo;
	struct Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1 */" },
		{ "ModuleRelativePath", "Classes/AtomListener.h" },
		{ "ToolTip", "\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe6\x83\x85\xe5\xa0\xb1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomListenerFocusPointInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData[] = {
		{ "Category", "AtomListenerFocusPoint" },
		{ "Comment", "/* \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe5\xae\x9a\xe4\xbd\x8d\xe3\x81\xae\xe6\xaf\x94\xe7\x8e\x87 */" },
		{ "ModuleRelativePath", "Classes/AtomListener.h" },
		{ "ToolTip", "\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe5\xae\x9a\xe4\xbd\x8d\xe3\x81\xae\xe6\xaf\x94\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel = { "DirectionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomListenerFocusPointInfo, DirectionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData[] = {
		{ "Category", "AtomListenerFocusPoint" },
		{ "Comment", "/* \xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xae\xe6\xaf\x94\xe7\x8e\x87 */" },
		{ "ModuleRelativePath", "Classes/AtomListener.h" },
		{ "ToolTip", "\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xbc\xe3\x82\xab\xe3\x82\xb9\xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xa8\xe3\x81\xae\xe8\xb7\x9d\xe9\x9b\xa2\xe3\x81\xae\xe6\xaf\x94\xe7\x8e\x87" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel = { "DistanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomListenerFocusPointInfo, DistanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "AtomListenerFocusPoint" },
		{ "Comment", "/* \xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88""Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AtomListener.h" },
		{ "ToolTip", "\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88""Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomListenerFocusPointInfo, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "AtomListenerFocusPoint" },
		{ "Comment", "/* \xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88""Actor */" },
		{ "ModuleRelativePath", "Classes/AtomListener.h" },
		{ "ToolTip", "\xe3\x82\xbf\xe3\x83\xbc\xe3\x82\xb2\xe3\x83\x83\xe3\x83\x88""Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomListenerFocusPointInfo, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomListenerFocusPointInfo",
		sizeof(FAtomListenerFocusPointInfo),
		alignof(FAtomListenerFocusPointInfo),
		Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomListenerFocusPointInfo"), sizeof(FAtomListenerFocusPointInfo), Get_Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Hash() { return 2769795134U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
