// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/CriWarePluginSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWarePluginSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWarePluginSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EAtomLoopSetting_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSetting"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSetting>()
	{
		return EAtomLoopSetting_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomLoopSetting(EAtomLoopSetting_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomLoopSetting"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Hash() { return 1277638786U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomLoopSetting"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomLoopSetting::Inherited", (int64)EAtomLoopSetting::Inherited },
				{ "EAtomLoopSetting::Loop", (int64)EAtomLoopSetting::Loop },
				{ "EAtomLoopSetting::OneShot", (int64)EAtomLoopSetting::OneShot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Leveled loop settings\n * Cue Settings Priority Order (Highest to Lowest): \n *  - AtomComponent (Current Atom settings for playback).\n *  - SoundAtomCue (Local mutable cue settings).\n *  - SoundAtomCueSheet (immutable Atom cue preset).\n */" },
				{ "Inherited.DisplayName", "Inherited" },
				{ "Inherited.Name", "EAtomLoopSetting::Inherited" },
				{ "Inherited.ToolTip", "Use loop setting from lower level (SoundAtomCue or Cue presets stored in SoundAtomCueSheet)." },
				{ "Loop.DisplayName", "Loop" },
				{ "Loop.Name", "EAtomLoopSetting::Loop" },
				{ "Loop.ToolTip", "Force loop setting and always play sounds looped." },
				{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
				{ "OneShot.DisplayName", "One Shot" },
				{ "OneShot.Name", "EAtomLoopSetting::OneShot" },
				{ "OneShot.ToolTip", "Ignore loop setting and always play sounds one shot." },
				{ "ToolTip", "Leveled loop settings\nCue Settings Priority Order (Highest to Lowest):\n- AtomComponent (Current Atom settings for playback).\n- SoundAtomCue (Local mutable cue settings).\n- SoundAtomCueSheet (immutable Atom cue preset)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomLoopSetting",
				"EAtomLoopSetting",
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
	static UEnum* EAtomLoopSettingID_DEPRECEATED_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSettingID_DEPRECEATED"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSettingID_DEPRECEATED>()
	{
		return EAtomLoopSettingID_DEPRECEATED_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomLoopSettingID_DEPRECEATED(EAtomLoopSettingID_DEPRECEATED_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomLoopSettingID_DEPRECEATED"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Hash() { return 969059818U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomLoopSettingID_DEPRECEATED"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomLoopSettingID_DEPRECEATED_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED },
				{ "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED },
				{ "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED", (int64)EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Loop settings used to overwrite default Cue settings of CueSheet presets.\n * @deprected Use EAtomLoopSetting instead.\n */" },
				{ "DefaultLoop_DEPRECATED.DisplayName", "Default" },
				{ "DefaultLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::DefaultLoop_DEPRECATED" },
				{ "DefaultLoop_DEPRECATED.ToolTip", "Use preset loop setting." },
				{ "ForceLoop_DEPRECATED.DisplayName", "Force Loop" },
				{ "ForceLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::ForceLoop_DEPRECATED" },
				{ "ForceLoop_DEPRECATED.ToolTip", "Loop sounds." },
				{ "IgnoreLoop_DEPRECATED.DisplayName", "Ignore Loop" },
				{ "IgnoreLoop_DEPRECATED.Name", "EAtomLoopSettingID_DEPRECEATED::IgnoreLoop_DEPRECATED" },
				{ "IgnoreLoop_DEPRECATED.ToolTip", "play sounds one shot." },
				{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
				{ "ToolTip", "Loop settings used to overwrite default Cue settings of CueSheet presets.\n@deprected Use EAtomLoopSetting instead." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomLoopSettingID_DEPRECEATED",
				"EAtomLoopSettingID_DEPRECEATED",
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
	static UEnum* EAtomSoundRendererType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomSoundRendererType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSoundRendererType::Type>()
	{
		return EAtomSoundRendererType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomSoundRendererType(EAtomSoundRendererType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomSoundRendererType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Hash() { return 2343819197U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomSoundRendererType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomSoundRendererType::Any", (int64)EAtomSoundRendererType::Any },
				{ "EAtomSoundRendererType::Native", (int64)EAtomSoundRendererType::Native },
				{ "EAtomSoundRendererType::Asr", (int64)EAtomSoundRendererType::Asr },
				{ "EAtomSoundRendererType::Hardware1", (int64)EAtomSoundRendererType::Hardware1 },
				{ "EAtomSoundRendererType::Hardware2", (int64)EAtomSoundRendererType::Hardware2 },
				{ "EAtomSoundRendererType::Hardware3", (int64)EAtomSoundRendererType::Hardware3 },
				{ "EAtomSoundRendererType::Hardware4", (int64)EAtomSoundRendererType::Hardware4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Any.Comment", "/* \xe6\x9c\xaa\xe6\x8c\x87\xe5\xae\x9a */" },
				{ "Any.Name", "EAtomSoundRendererType::Any" },
				{ "Any.ToolTip", "\xe6\x9c\xaa\xe6\x8c\x87\xe5\xae\x9a" },
				{ "Asr.Comment", "/* Atom Sound Renderer */" },
				{ "Asr.Name", "EAtomSoundRendererType::Asr" },
				{ "Asr.ToolTip", "Atom Sound Renderer" },
				{ "Comment", "/* EAtomSoundRendererType::Type should be typical enums (not class enums). */" },
				{ "Hardware1.Comment", "/* Hardware */" },
				{ "Hardware1.Name", "EAtomSoundRendererType::Hardware1" },
				{ "Hardware1.ToolTip", "Hardware" },
				{ "Hardware2.Name", "EAtomSoundRendererType::Hardware2" },
				{ "Hardware3.Name", "EAtomSoundRendererType::Hardware3" },
				{ "Hardware4.Name", "EAtomSoundRendererType::Hardware4" },
				{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
				{ "Native.Comment", "/* Native Sound Renderer */" },
				{ "Native.Name", "EAtomSoundRendererType::Native" },
				{ "Native.ToolTip", "Native Sound Renderer" },
				{ "ToolTip", "EAtomSoundRendererType::Type should be typical enums (not class enums)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomSoundRendererType",
				"EAtomSoundRendererType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEngineIniFileType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EEngineIniFileType"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EEngineIniFileType::Type>()
	{
		return EEngineIniFileType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEngineIniFileType(EEngineIniFileType_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EEngineIniFileType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Hash() { return 2704713520U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEngineIniFileType"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EEngineIniFileType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEngineIniFileType::EngBaseEngineIni", (int64)EEngineIniFileType::EngBaseEngineIni },
				{ "EEngineIniFileType::EngWindowsEngineIni", (int64)EEngineIniFileType::EngWindowsEngineIni },
				{ "EEngineIniFileType::ProjDefaultEngineIni", (int64)EEngineIniFileType::ProjDefaultEngineIni },
				{ "EEngineIniFileType::ProjWindowsEngineIni", (int64)EEngineIniFileType::ProjWindowsEngineIni },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/* EEngineIniFileType::Type should be typical enums (not class enums). */" },
				{ "EngBaseEngineIni.Name", "EEngineIniFileType::EngBaseEngineIni" },
				{ "EngWindowsEngineIni.Name", "EEngineIniFileType::EngWindowsEngineIni" },
				{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
				{ "ProjDefaultEngineIni.Name", "EEngineIniFileType::ProjDefaultEngineIni" },
				{ "ProjWindowsEngineIni.Name", "EEngineIniFileType::ProjWindowsEngineIni" },
				{ "ToolTip", "EEngineIniFileType::Type should be typical enums (not class enums)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EEngineIniFileType",
				"EEngineIniFileType::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAtomAsrRackConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfig, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfig>()
{
	return FAtomAsrRackConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfig(FAtomAsrRackConfig::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfig"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAsrRackConfig")),new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfig;
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe8\xa8\xad\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe8\xa8\xad\xe5\xae\x9a" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData[] = {
		{ "Category", "AtomAsrRackConfig" },
		{ "Comment", "/* ID */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfig, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData[] = {
		{ "Category", "AtomAsrRackConfig" },
		{ "Comment", "/* \xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\xb3\xe3\x83\x80\xe3\x83\xa9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97 */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\xb3\xe3\x83\x80\xe3\x83\xa9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfig, SoundRendererType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_ElementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::NewProp_SoundRendererType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfig",
		sizeof(FAtomAsrRackConfig),
		alignof(FAtomAsrRackConfig),
		Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfig"), sizeof(FAtomAsrRackConfig), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfig_Hash() { return 2619807081U; }
class UScriptStruct* FAtomAsrRackConfigUI::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfigUI>()
{
	return FAtomAsrRackConfigUI::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfigUI(FAtomAsrRackConfigUI::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfigUI"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtomAsrRackConfigUI")),new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>);
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI;
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe8\xa8\xad\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "ASR\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf\xe8\xa8\xad\xe5\xae\x9a" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData[] = {
		{ "Category", "AtomAsrRackConfig" },
		{ "Comment", "/* ID */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "ID" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "Category", "AtomAsrRackConfig" },
		{ "Comment", "/* \xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\xb3\xe3\x83\x80\xe3\x83\xa9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97 */" },
		{ "DisplayName", "Sound Renderer Type" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "\xe3\x82\xb5\xe3\x82\xa6\xe3\x83\xb3\xe3\x83\x89\xe3\x83\xac\xe3\x83\xb3\xe3\x83\x80\xe3\x83\xa9\xe3\x82\xbf\xe3\x82\xa4\xe3\x83\x97" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfigUI",
		sizeof(FAtomAsrRackConfigUI),
		alignof(FAtomAsrRackConfigUI),
		Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash() { return 2766645028U; }
	void UCriWarePluginSettings::StaticRegisterNativesUCriWarePluginSettings()
	{
	}
	UClass* Z_Construct_UClass_UCriWarePluginSettings_NoRegister()
	{
		return UCriWarePluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCriWarePluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseUnrealSoundRenderer_MetaData[];
#endif
		static void NewProp_UseUnrealSoundRenderer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseUnrealSoundRenderer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_SamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_BitsPerSample_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WASAPI_BitsPerSample;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASAPI_IsExclusive_MetaData[];
#endif
		static void NewProp_WASAPI_IsExclusive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WASAPI_IsExclusive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxStreamingVoiceNumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxStreamingVoiceNumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxStreamingVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHcaMxStreamingVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxMemoryVoiceNumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxMemoryVoiceNumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumHcaMxMemoryVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumHcaMxMemoryVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HcaMxVoiceSamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HcaMxVoiceSamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullingMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullingMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EconomicTickFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EconomicTickMarginDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EconomicTickMarginDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardware1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Hardware1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsrRackConfig_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackConfigUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackConfigUI;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AsrRackConfigUI_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SoundRendererType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomConfigDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomConfigDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcfFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AcfFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtomConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolAtomComponent_MetaData[];
#endif
		static void NewProp_PoolAtomComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PoolAtomComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceSamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceSamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardStreamingVoiceNumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardStreamingVoiceNumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStandardStreamingVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStandardStreamingVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceSamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceSamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardMemoryVoiceNumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardMemoryVoiceNumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStandardMemoryVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStandardMemoryVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVirtualVoices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVirtualVoices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrOutputChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrOutputChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorCommunicationBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MonitorCommunicationBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AwbRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwbRootDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AwbRootDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputsLogAtom_MetaData[];
#endif
		static void NewProp_OutputsLogAtom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutputsLogAtom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsesInGamePreview_MetaData[];
#endif
		static void NewProp_UsesInGamePreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UsesInGamePreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticallyCreateCueAsset_MetaData[];
#endif
		static void NewProp_AutomaticallyCreateCueAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutomaticallyCreateCueAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputsLogFileSystem_MetaData[];
#endif
		static void NewProp_OutputsLogFileSystem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutputsLogFileSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumLoaders_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumLoaders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBinds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBinds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBinders_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBinders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonAssetContentDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonAssetContentDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditableCriWareAdxLipSyncSetting_MetaData[];
#endif
		static void NewProp_bEditableCriWareAdxLipSyncSetting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditableCriWareAdxLipSyncSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoExistCriWareIni_MetaData[];
#endif
		static void NewProp_bNoExistCriWareIni_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoExistCriWareIni;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWarePluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWarePluginSettings.h" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "CriWarePluginSettings class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "UseUnrealSoundRenderer" },
		{ "DisplayName", "Use Unreal Sound Renderer (Editor only)" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Bypass ADX output to UE4 sound renderer." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->UseUnrealSoundRenderer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer = { "UseUnrealSoundRenderer", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "WASAPI_NumChannels" },
		{ "DisplayName", "WASAPI Number of Output Channels" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "WASAPI number of output channels." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels = { "WASAPI_NumChannels", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_NumChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "WASAPI_SamplingRate" },
		{ "DisplayName", "WASAPI Sampling Rate" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "WASAPI sampling rate." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate = { "WASAPI_SamplingRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_SamplingRate), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "WASAPI_BitsPerSample" },
		{ "DisplayName", "WASAPI Bits Per Sample" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "WASAPI bits per sample." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample = { "WASAPI_BitsPerSample", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, WASAPI_BitsPerSample), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "WASAPI_IsExclusive" },
		{ "DisplayName", "WASAPI Is Exclusive" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "WASAPI is exclusive." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->WASAPI_IsExclusive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive = { "WASAPI_IsExclusive", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "HcaMxStreamingVoiceNumChannels" },
		{ "DisplayName", "Number of Channels of HCA-MX Streaming Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of channels of HCA-MX streaming voice." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels = { "HcaMxStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxStreamingVoiceNumChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumHcaMxStreamingVoices" },
		{ "DisplayName", "Number of HCA-MX Streaming Voices" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of HCA-MX streaming voices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices = { "NumHcaMxStreamingVoices", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxStreamingVoices), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "HcaMxMemoryVoiceNumChannels" },
		{ "DisplayName", "Number of Channels of HCA-MX Memory Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of channels of HCA-MX memory voice." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels = { "HcaMxMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxMemoryVoiceNumChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumHcaMxMemoryVoices" },
		{ "DisplayName", "Number of HCA-MX Memory Voices" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of HCA-MX memory voices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices = { "NumHcaMxMemoryVoices", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumHcaMxMemoryVoices), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "HcaMxVoiceSamplingRate" },
		{ "DisplayName", "Sampling Rate of HCA-MX Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "HCA-MX voice sampling rate." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate = { "HcaMxVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, HcaMxVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "CullingMarginDistance" },
		{ "DisplayName", "Culling Margin Distance (Unreal Unit)" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "If the sound source is far enough from the listener, ignore the play command. If the distance between the sound source and the listener is equal to or greater than the 'maximum attenuation-distance' + 'Culling Margin', it is considered to be far enough." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance = { "CullingMarginDistance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, CullingMarginDistance), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "EconomicTickFrequency" },
		{ "DisplayName", "Economic Tick Frequency (Tick/Second)" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "The frequency of Economic Tick (Tick/Second)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency = { "EconomicTickFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, EconomicTickFrequency), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "EconomicTickMarginDistance" },
		{ "DisplayName", "Economic Tick Margin Distance (Unreal Unit)" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "While the sound source is far enough from the listener, reduce the frequency of the 'Tick' processing. If the distance between the sound source and the listener is equal to or greater than the 'maximum attenuation-distance' + 'Economic Tick Margin', it is considered to be far enough." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance = { "EconomicTickMarginDistance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, EconomicTickMarginDistance), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4 = { "Hardware4", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware4), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3 = { "Hardware3", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware3), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2 = { "Hardware2", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware2), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1 = { "Hardware1", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, Hardware1), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig = { "AsrRackConfig", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_Inner = { "AsrRackConfig", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "AsrRackConfig" },
		{ "DisplayName", "Asr Rack Config" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Configuration of additional ASR Rack." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI = { "AsrRackConfigUI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrRackConfigUI), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_Inner = { "AsrRackConfigUI", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType = { "SoundRendererType", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererType), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "SoundRendererType" },
		{ "DisplayName", "Sound Renderer Type" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Sound renderer type of library output." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "DistanceFactor" },
		{ "DisplayName", "Distance Factor" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Atom distance factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor = { "DistanceFactor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, DistanceFactor), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable_MetaData[] = {
		{ "AllowedClasses", "DataTable" },
		{ "Category", "Atom" },
		{ "ConsoleVariable", "AcfDataTable" },
		{ "DisplayName", "Atom Config Data Table" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Atom Config asset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable = { "AtomConfigDataTable", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AtomConfigDataTable), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName_MetaData[] = {
		{ "Comment", "/* DEPRECATED - Use AtomConfig instead. */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "DEPRECATED - Use AtomConfig instead." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName = { "AcfFileName", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AcfFileName), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig_MetaData[] = {
		{ "AllowedClasses", "SoundAtomConfig" },
		{ "Category", "Atom" },
		{ "ConsoleVariable", "AtomConfig" },
		{ "DisplayName", "Atom Config" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Atom Config asset." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig = { "AtomConfig", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AtomConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->PoolAtomComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent = { "PoolAtomComponent", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "StandardStreamingVoiceSamplingRate" },
		{ "DisplayName", "Sampling Rate of Standard Streaming Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Standard streaming voice sampling rate." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate = { "StandardStreamingVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "StandardStreamingVoiceNumChannels" },
		{ "DisplayName", "Number of Channels of Standard Streaming Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of channels of standard streaming voice." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels = { "StandardStreamingVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardStreamingVoiceNumChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumStandardStreamingVoices" },
		{ "DisplayName", "Number of Standard Streaming Voices" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of standard streaming voices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices = { "NumStandardStreamingVoices", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardStreamingVoices), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "StandardMemoryVoiceSamplingRate" },
		{ "DisplayName", "Sampling Rate of Standard Memory Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Standard memory voice sampling rate." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate = { "StandardMemoryVoiceSamplingRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceSamplingRate), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "StandardMemoryVoiceNumChannels" },
		{ "DisplayName", "Number of Channels of Standard Memory Voice" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of channels of standard memory voice." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels = { "StandardMemoryVoiceNumChannels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, StandardMemoryVoiceNumChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumStandardMemoryVoices" },
		{ "DisplayName", "Number of Standard Memory Voices" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of standard memory voices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices = { "NumStandardMemoryVoices", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumStandardMemoryVoices), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMax", "32767" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "MaxVirtualVoices" },
		{ "DisplayName", "Maximum Number of Virtual Voices" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Maximum number of virtual voices." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices = { "MaxVirtualVoices", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxVirtualVoices), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "AsrOutputChannels" },
		{ "DisplayName", "ASR Output Channels" },
		{ "editcondition", "AsrOutputChannels" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Specify the num of channels for ASR. 3Dpos and Pan3D need over 6ch." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels = { "AsrOutputChannels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AsrOutputChannels), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "MaxPitch" },
		{ "DisplayName", "Max Pitch" },
		{ "editcondition", "MaxPitch" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Specify the maximum value for the pitch change.." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxPitch), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMin", "2097152" },
		{ "ConsoleVariable", "MonitorCommunicationBufferSize" },
		{ "DisplayName", "Atom Monitor Communication Buffer Size" },
		{ "editcondition", "MonitorCommunicationBufferSize" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Atom Monitor Communication Buffer Size for communicating with CRI Atom Craft tool." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize = { "MonitorCommunicationBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, MonitorCommunicationBufferSize), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot_MetaData[] = {
		{ "Comment", "/* AWB\xe9\x85\x8d\xe7\xbd\xae\xe5\xa0\xb4\xe6\x89\x80\xe3\x81\xae\xe3\x83\x91\xe3\x82\xb9\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xef\xbc\x88ini\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe6\x9b\xb8\xe3\x81\x8d\xe8\xbe\xbc\xe3\x81\xbf\xe7\x94\xa8\xef\xbc\x89 */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "AWB\xe9\x85\x8d\xe7\xbd\xae\xe5\xa0\xb4\xe6\x89\x80\xe3\x81\xae\xe3\x83\x91\xe3\x82\xb9\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xef\xbc\x88ini\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe6\x9b\xb8\xe3\x81\x8d\xe8\xbe\xbc\xe3\x81\xbf\xe7\x94\xa8\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot = { "AwbRoot", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AwbRoot), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "AwbRootDirectory" },
		{ "DisplayName", "AWB Root Directory" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Relative from '/Game/'." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory = { "AwbRootDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, AwbRootDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "OutputsLogAtom" },
		{ "DisplayName", "Output Log" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Enable log output." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->OutputsLogAtom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom = { "OutputsLogAtom", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_MetaData[] = {
		{ "Category", "Atom" },
		{ "ConsoleVariable", "UsesInGamePreview" },
		{ "DisplayName", "Use In Game Preview" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Enable In-Game-Preview functionality." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->UsesInGamePreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview = { "UsesInGamePreview", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_MetaData[] = {
		{ "Comment", "/* Deprecated: Please use options from ACB file import window. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please use options from ACB file import window." },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "Deprecated: Please use options from ACB file import window." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->AutomaticallyCreateCueAsset_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset = { "AutomaticallyCreateCueAsset", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ConsoleVariable", "OutputsLogFileSystem" },
		{ "DisplayName", "Output log" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Enable log output." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->OutputsLogFileSystem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem = { "OutputsLogFileSystem", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "MaxPath" },
		{ "DisplayName", "Maximum Path Length" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Maximum length for a path." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath = { "MaxPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxPath), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumLoaders" },
		{ "DisplayName", "Number of Loaders" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of loaders." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders = { "NumLoaders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumLoaders), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "MaxBinds" },
		{ "DisplayName", "Maximum Number of Binds" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Maximum number of binds." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds = { "MaxBinds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, MaxBinds), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ClampMin", "0" },
		{ "ConsoleVariable", "NumBinders" },
		{ "DisplayName", "Number of Binders" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Number of binders." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders = { "NumBinders", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NumBinders), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir_MetaData[] = {
		{ "Comment", "/* \xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\xb3\xe3\x83\x84\xe9\x85\x8d\xe7\xbd\xae\xe5\xa0\xb4\xe6\x89\x80\xe3\x81\xae\xe3\x83\x91\xe3\x82\xb9\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xef\xbc\x88ini\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe6\x9b\xb8\xe3\x81\x8d\xe8\xbe\xbc\xe3\x81\xbf\xe7\x94\xa8\xef\xbc\x89 */" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "ToolTip", "\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x86\xe3\x83\xb3\xe3\x83\x84\xe9\x85\x8d\xe7\xbd\xae\xe5\xa0\xb4\xe6\x89\x80\xe3\x81\xae\xe3\x83\x91\xe3\x82\xb9\xe6\x96\x87\xe5\xad\x97\xe5\x88\x97\xef\xbc\x88ini\xe3\x83\x95\xe3\x82\xa1\xe3\x82\xa4\xe3\x83\xab\xe6\x9b\xb8\xe3\x81\x8d\xe8\xbe\xbc\xe3\x81\xbf\xe7\x94\xa8\xef\xbc\x89" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir = { "ContentDir", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, ContentDir), METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir_MetaData[] = {
		{ "Category", "FileSystem" },
		{ "ConsoleVariable", "NonAssetContentDir" },
		{ "DisplayName", "Non-Asset Content Directory" },
		{ "editcondition", "bNoExistCriWareIni" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Content directory where non-asset files are stored." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir = { "NonAssetContentDir", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCriWarePluginSettings, NonAssetContentDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_MetaData[] = {
		{ "Category", "CheckIsEnableToEditCriWareAdxLipSyncSetting" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->bEditableCriWareAdxLipSyncSetting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting = { "bEditableCriWareAdxLipSyncSetting", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_MetaData[] = {
		{ "Category", "CheckExistingOldConfigrationFiles" },
		{ "ConsoleVariable", "IsExistingOldFormatConfigFile" },
		{ "DisplayName", "Is Not Existing Old Format Configration File" },
		{ "ModuleRelativePath", "Classes/CriWarePluginSettings.h" },
		{ "Tooltip", "Not existing: checked, existing: unchecked." },
	};
#endif
	void Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_SetBit(void* Obj)
	{
		((UCriWarePluginSettings*)Obj)->bNoExistCriWareIni = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni = { "bNoExistCriWareIni", nullptr, (EPropertyFlags)0x0010040000034001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCriWarePluginSettings), &Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UseUnrealSoundRenderer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_SamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_BitsPerSample,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_WASAPI_IsExclusive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxStreamingVoiceNumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxStreamingVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxMemoryVoiceNumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumHcaMxMemoryVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_HcaMxVoiceSamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_CullingMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_EconomicTickMarginDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_Hardware1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfig_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrRackConfigUI_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_SoundRendererTypeUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_DistanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfigDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AcfFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AtomConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_PoolAtomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceSamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardStreamingVoiceNumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardStreamingVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceSamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_StandardMemoryVoiceNumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumStandardMemoryVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxVirtualVoices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AsrOutputChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MonitorCommunicationBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AwbRootDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogAtom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_UsesInGamePreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_AutomaticallyCreateCueAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_OutputsLogFileSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumLoaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_MaxBinds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NumBinders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_ContentDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_NonAssetContentDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bEditableCriWareAdxLipSyncSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWarePluginSettings_Statics::NewProp_bNoExistCriWareIni,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWarePluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWarePluginSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWarePluginSettings_Statics::ClassParams = {
		&UCriWarePluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWarePluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWarePluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWarePluginSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWarePluginSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWarePluginSettings, 4019228645);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWarePluginSettings>()
	{
		return UCriWarePluginSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWarePluginSettings(Z_Construct_UClass_UCriWarePluginSettings, &UCriWarePluginSettings::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWarePluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWarePluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
