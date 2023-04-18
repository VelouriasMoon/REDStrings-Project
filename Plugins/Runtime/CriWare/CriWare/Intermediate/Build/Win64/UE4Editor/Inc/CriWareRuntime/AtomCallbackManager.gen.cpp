// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomCallbackManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCallbackManager() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallback();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallbackManager_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallbackManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAtomSequenceEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSequenceEventType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSequenceEventType>()
	{
		return EAtomSequenceEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSequenceEventType(EAtomSequenceEventType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSequenceEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType_Hash() { return 503356562U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSequenceEventType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK", (int64)EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK },
				{ "EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE", (int64)EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Atom Callback" },
				{ "Comment", "/* \xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xae\xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97 */" },
				{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
				{ "SEQUENCE_TYPE_CALLBACK.Comment", "/* \xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf */" },
				{ "SEQUENCE_TYPE_CALLBACK.Name", "EAtomSequenceEventType::SEQUENCE_TYPE_CALLBACK" },
				{ "SEQUENCE_TYPE_CALLBACK.ToolTip", "\xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf" },
				{ "SEQUENCE_TYPESIZE_4BYTE.Comment", "/* Enum\xe3\x81\xae\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba""4\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x88 */" },
				{ "SEQUENCE_TYPESIZE_4BYTE.Name", "EAtomSequenceEventType::SEQUENCE_TYPESIZE_4BYTE" },
				{ "SEQUENCE_TYPESIZE_4BYTE.ToolTip", "Enum\xe3\x81\xae\xe3\x82\xb5\xe3\x82\xa4\xe3\x82\xba""4\xe3\x83\x90\xe3\x82\xa4\xe3\x83\x88" },
				{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe3\x81\xae\xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSequenceEventType",
				"EAtomSequenceEventType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAtomSequenceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSequenceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSequenceInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSequenceInfo"), sizeof(FAtomSequenceInfo), Get_Z_Construct_UScriptStruct_FAtomSequenceInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSequenceInfo>()
{
	return FAtomSequenceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSequenceInfo(FAtomSequenceInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomSequenceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSequenceInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSequenceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomSequenceInfo")),new UScriptStruct::TCppStructOps<FAtomSequenceInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomSequenceInfo;
	struct Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Atom Callback" },
		{ "Comment", "/* \xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe6\x83\x85\xe5\xa0\xb1 */" },
		{ "HasNativeBreak", "CriWareRuntime.AtomCallbackManager.NativeBreakAtomSequenceInfo" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
		{ "ToolTip", "\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe6\x83\x85\xe5\xa0\xb1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSequenceInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSequenceInfo",
		sizeof(FAtomSequenceInfo),
		alignof(FAtomSequenceInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSequenceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSequenceInfo"), sizeof(FAtomSequenceInfo), Get_Z_Construct_UScriptStruct_FAtomSequenceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomSequenceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSequenceInfo_Hash() { return 1306759751U; }
class UScriptStruct* FAtomBeatSyncInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBeatSyncInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomBeatSyncInfo"), sizeof(FAtomBeatSyncInfo), Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomBeatSyncInfo>()
{
	return FAtomBeatSyncInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomBeatSyncInfo(FAtomBeatSyncInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomBeatSyncInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomBeatSyncInfo")),new UScriptStruct::TCppStructOps<FAtomBeatSyncInfo>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo;
	struct Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Atom Callback" },
		{ "Comment", "/* \xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1 */" },
		{ "HasNativeBreak", "CriWareRuntime.AtomCallbackManager.NativeBreakAtomBeatSyncInfo" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
		{ "ToolTip", "\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBeatSyncInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomBeatSyncInfo",
		sizeof(FAtomBeatSyncInfo),
		alignof(FAtomBeatSyncInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomBeatSyncInfo"), sizeof(FAtomBeatSyncInfo), Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash() { return 107485712U; }
	void UAtomCallback::StaticRegisterNativesUAtomCallback()
	{
	}
	UClass* Z_Construct_UClass_UAtomCallback_NoRegister()
	{
		return UAtomCallback::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCallback_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Atom Callback" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAtomCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomCallback_Statics::ClassParams = {
		&UAtomCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomCallback, 4289958843);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCallback>()
	{
		return UAtomCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCallback(Z_Construct_UClass_UAtomCallback, &UAtomCallback::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCallback);
	DEFINE_FUNCTION(UAtomCallbackManager::execNativeBreakAtomSequenceInfo)
	{
		P_GET_STRUCT_REF(FAtomSequenceInfo,Z_Param_Out_SequenceInfo);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TagName);
		P_GET_ENUM_REF(EAtomSequenceEventType,Z_Param_Out_EventType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CallbackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCallbackManager::NativeBreakAtomSequenceInfo(Z_Param_Out_SequenceInfo,Z_Param_Out_Time,Z_Param_Out_TagName,(EAtomSequenceEventType&)(Z_Param_Out_EventType),Z_Param_Out_CallbackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCallbackManager::execNativeBreakAtomBeatSyncInfo)
	{
		P_GET_STRUCT_REF(FAtomBeatSyncInfo,Z_Param_Out_BeatSyncInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BarCnt);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BeatCnt);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BeatProgress);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Bpm);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumBeats);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCallbackManager::NativeBreakAtomBeatSyncInfo(Z_Param_Out_BeatSyncInfo,Z_Param_Out_BarCnt,Z_Param_Out_BeatCnt,Z_Param_Out_BeatProgress,Z_Param_Out_Bpm,Z_Param_Out_Offset,Z_Param_Out_NumBeats);
		P_NATIVE_END;
	}
	void UAtomCallbackManager::StaticRegisterNativesUAtomCallbackManager()
	{
		UClass* Class = UAtomCallbackManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeBreakAtomBeatSyncInfo", &UAtomCallbackManager::execNativeBreakAtomBeatSyncInfo },
			{ "NativeBreakAtomSequenceInfo", &UAtomCallbackManager::execNativeBreakAtomSequenceInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics
	{
		struct AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms
		{
			FAtomBeatSyncInfo BeatSyncInfo;
			int32 BarCnt;
			int32 BeatCnt;
			float BeatProgress;
			float Bpm;
			int32 Offset;
			int32 NumBeats;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBeats;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bpm;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BeatCnt;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BarCnt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatSyncInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_NumBeats = { "NumBeats", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, NumBeats), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Bpm = { "Bpm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, Bpm), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatProgress = { "BeatProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatCnt = { "BeatCnt", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatCnt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BarCnt = { "BarCnt", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BarCnt), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_NumBeats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Bpm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatCnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BarCnt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Callback" },
		{ "Comment", "/** BP\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe3\x83\x94\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x86\xe8\xa7\xa3(HasNativeBreak\xe3\x83\xa1\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe7\x94\xa8)\n\x09 * @param BeatSyncInfo \xe5\x88\x86\xe8\xa7\xa3\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1\n\x09 * @param BarCnt \xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\xb0\x8f\xe7\xaf\x80\xe6\x95\xb0\n\x09 * @param BeatCnt \xe6\x8b\x8d\xe6\x95\xb0(\xe5\x88\x86\xe5\xad\x90)\n\x09 * @param BeatProgress \xe6\x8b\x8d\xe3\x81\xae\xe9\x80\xb2\xe6\x8d\x97(0.0f\xe3\x80\x9c""1.0f)\n\x09 * @param Bpm \xe3\x83\x86\xe3\x83\xb3\xe3\x83\x9d(\xe6\x8b\x8d/\xe5\x88\x86)\n\x09 * @param Offset \xe5\x90\x8c\xe6\x9c\x9f\xe3\x82\xaa\xe3\x83\x95\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88(ms)\n\x09 * @param NumBeats \xe6\x8b\x8d\xe5\xad\x90\xe6\x95\xb0(\xe5\x88\x86\xe6\xaf\x8d) \n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "BP\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe3\x83\x94\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x86\xe8\xa7\xa3(HasNativeBreak\xe3\x83\xa1\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe7\x94\xa8)\n@param BeatSyncInfo \xe5\x88\x86\xe8\xa7\xa3\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x93\xe3\x83\xbc\xe3\x83\x88\xe3\x82\xb7\xe3\x83\xb3\xe3\x82\xaf\xe6\x83\x85\xe5\xa0\xb1\n@param BarCnt \xe7\x8f\xbe\xe5\x9c\xa8\xe3\x81\xae\xe5\xb0\x8f\xe7\xaf\x80\xe6\x95\xb0\n@param BeatCnt \xe6\x8b\x8d\xe6\x95\xb0(\xe5\x88\x86\xe5\xad\x90)\n@param BeatProgress \xe6\x8b\x8d\xe3\x81\xae\xe9\x80\xb2\xe6\x8d\x97(0.0f\xe3\x80\x9c""1.0f)\n@param Bpm \xe3\x83\x86\xe3\x83\xb3\xe3\x83\x9d(\xe6\x8b\x8d/\xe5\x88\x86)\n@param Offset \xe5\x90\x8c\xe6\x9c\x9f\xe3\x82\xaa\xe3\x83\x95\xe3\x82\xbb\xe3\x83\x83\xe3\x83\x88(ms)\n@param NumBeats \xe6\x8b\x8d\xe5\xad\x90\xe6\x95\xb0(\xe5\x88\x86\xe6\xaf\x8d)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCallbackManager, nullptr, "NativeBreakAtomBeatSyncInfo", nullptr, nullptr, sizeof(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms), Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics
	{
		struct AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms
		{
			FAtomSequenceInfo SequenceInfo;
			float Time;
			FString TagName;
			EAtomSequenceEventType EventType;
			int32 CallbackID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TagName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_CallbackID = { "CallbackID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, CallbackID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, EventType), Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, Time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo = { "SequenceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, SequenceInfo), Z_Construct_UScriptStruct_FAtomSequenceInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_CallbackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_TagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom Callback" },
		{ "Comment", "/** BP\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb5\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe3\x83\x94\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x86\xe8\xa7\xa3(HasNativeBreak\xe3\x83\xa1\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe7\x94\xa8)\n\x09 * @param SequenceInfo \xe5\x88\x86\xe8\xa7\xa3\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe6\x83\x85\xe5\xa0\xb1\n\x09 * @param Time \xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\n\x09 * @param TagName \xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\xe5\x90\x8d\n\x09 * @param EventType \xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\n\x09 * @param CallbackID \xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xafID\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "BP\xe4\xb8\x8a\xe3\x81\xa7\xe3\x81\xae\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb5\xe6\x83\x85\xe5\xa0\xb1\xe3\x81\xae\xe3\x83\x94\xe3\x83\xb3\xe3\x81\xae\xe5\x88\x86\xe8\xa7\xa3(HasNativeBreak\xe3\x83\xa1\xe3\x82\xbf\xe6\x83\x85\xe5\xa0\xb1\xe7\x94\xa8)\n@param SequenceInfo \xe5\x88\x86\xe8\xa7\xa3\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb7\xe3\x83\xbc\xe3\x82\xb1\xe3\x83\xb3\xe3\x82\xb9\xe6\x83\x85\xe5\xa0\xb1\n@param Time \xe5\x86\x8d\xe7\x94\x9f\xe7\xb5\x8c\xe9\x81\x8e\xe6\x99\x82\xe9\x96\x93\n@param TagName \xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xaf\xe3\x81\xae\xe3\x82\xbf\xe3\x82\xb0\xe5\x90\x8d\n@param EventType \xe3\x82\xa4\xe3\x83\x99\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97\n@param CallbackID \xe3\x82\xb3\xe3\x83\xbc\xe3\x83\xab\xe3\x83\x90\xe3\x83\x83\xe3\x82\xafID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCallbackManager, nullptr, "NativeBreakAtomSequenceInfo", nullptr, nullptr, sizeof(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms), Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomCallbackManager_NoRegister()
	{
		return UAtomCallbackManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCallbackManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCallbackManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCallbackManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo, "NativeBreakAtomBeatSyncInfo" }, // 2463178490
		{ &Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo, "NativeBreakAtomSequenceInfo" }, // 195776933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Atom Callback" },
		{ "Comment", "/***************************************************************************\n *      \xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\n *      Prototype Classes\n ***************************************************************************/" },
		{ "IncludePath", "AtomCallbackManager.h" },
		{ "ModuleRelativePath", "Classes/AtomCallbackManager.h" },
		{ "ToolTip", "\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\nPrototype Classes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCallbackManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCallbackManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomCallbackManager_Statics::ClassParams = {
		&UAtomCallbackManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCallbackManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomCallbackManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomCallbackManager, 374479481);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCallbackManager>()
	{
		return UAtomCallbackManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCallbackManager(Z_Construct_UClass_UAtomCallbackManager, &UAtomCallbackManager::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCallbackManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCallbackManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
