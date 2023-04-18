// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomWavePlayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWavePlayer() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomWavePlayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Multicast delegate that is invoked when a state changed occurred in the player. */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Multicast delegate that is invoked when a state changed occurred in the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnAtomWavePlayerStateChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnAtomWavePlayerStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics
	{
		struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms
		{
			const USoundAtomCue* PlayingAtomCue;
			int32 WaveId;
			float PlaybackPercent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaybackPercent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayingAtomCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayingAtomCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent = { "PlaybackPercent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlaybackPercent), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId = { "WaveId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, WaveId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue = { "PlayingAtomCue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms, PlayingAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_WaveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::NewProp_PlayingAtomCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\n * Computed as samples played divided by total samples, taking into account pitch.\n */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Called as a sound plays on the audio component to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnWavePlaybackPercent__DelegateSignature", nullptr, nullptr, sizeof(_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnWaveFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAtomWavePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomWavePlayState"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>()
	{
		return EAtomWavePlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomWavePlayState(EAtomWavePlayState_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomWavePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Hash() { return 752352535U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomWavePlayState"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomWavePlayState::Playing", (int64)EAtomWavePlayState::Playing },
				{ "EAtomWavePlayState::Stopped", (int64)EAtomWavePlayState::Stopped },
				{ "EAtomWavePlayState::Paused", (int64)EAtomWavePlayState::Paused },
				{ "EAtomWavePlayState::FadingIn", (int64)EAtomWavePlayState::FadingIn },
				{ "EAtomWavePlayState::FadingOut", (int64)EAtomWavePlayState::FadingOut },
				{ "EAtomWavePlayState::Count", (int64)EAtomWavePlayState::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enum describing the audio component play state\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EAtomWavePlayState::Count" },
				{ "FadingIn.Comment", "// If the sound is playing and fading in\n" },
				{ "FadingIn.Name", "EAtomWavePlayState::FadingIn" },
				{ "FadingIn.ToolTip", "If the sound is playing and fading in" },
				{ "FadingOut.Comment", "// If the sound is playing and fading out\n" },
				{ "FadingOut.Name", "EAtomWavePlayState::FadingOut" },
				{ "FadingOut.ToolTip", "If the sound is playing and fading out" },
				{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
				{ "Paused.Comment", "// If the sound is playing but paused\n" },
				{ "Paused.Name", "EAtomWavePlayState::Paused" },
				{ "Paused.ToolTip", "If the sound is playing but paused" },
				{ "Playing.Comment", "// If the sound is playing (i.e. not fading in, not fading out, not paused)\n" },
				{ "Playing.Name", "EAtomWavePlayState::Playing" },
				{ "Playing.ToolTip", "If the sound is playing (i.e. not fading in, not fading out, not paused)" },
				{ "Stopped.Comment", "// If the sound is not playing\n" },
				{ "Stopped.Name", "EAtomWavePlayState::Stopped" },
				{ "Stopped.ToolTip", "If the sound is not playing" },
				{ "ToolTip", "Enum describing the audio component play state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomWavePlayState",
				"EAtomWavePlayState",
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
	DEFINE_FUNCTION(UAtomWavePlayer::execGetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=P_THIS->GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetPlayState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomWavePlayState*)Z_Param__Result=P_THIS->GetPlayState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_Looping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLooping(Z_Param_Looping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execHasError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execAdjustVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdjustVolumeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustVolume(Z_Param_AdjustVolumeDuration,Z_Param_AdjustVolumeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetPaused)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPaused(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStopDelayed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DelayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDelayed(Z_Param_DelayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetWaveInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAtomWaveInfo*)Z_Param__Result=P_THIS->GetWaveInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execGetCue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetCue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomWavePlayer::execSetWave)
	{
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWave(Z_Param_InCue);
		P_NATIVE_END;
	}
	void UAtomWavePlayer::StaticRegisterNativesUAtomWavePlayer()
	{
		UClass* Class = UAtomWavePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustVolume", &UAtomWavePlayer::execAdjustVolume },
			{ "GetCue", &UAtomWavePlayer::execGetCue },
			{ "GetPlayState", &UAtomWavePlayer::execGetPlayState },
			{ "GetTime", &UAtomWavePlayer::execGetTime },
			{ "GetWaveInfo", &UAtomWavePlayer::execGetWaveInfo },
			{ "HasError", &UAtomWavePlayer::execHasError },
			{ "IsLooping", &UAtomWavePlayer::execIsLooping },
			{ "IsPaused", &UAtomWavePlayer::execIsPaused },
			{ "IsPlaying", &UAtomWavePlayer::execIsPlaying },
			{ "Play", &UAtomWavePlayer::execPlay },
			{ "SetLooping", &UAtomWavePlayer::execSetLooping },
			{ "SetPaused", &UAtomWavePlayer::execSetPaused },
			{ "SetWave", &UAtomWavePlayer::execSetWave },
			{ "Stop", &UAtomWavePlayer::execStop },
			{ "StopDelayed", &UAtomWavePlayer::execStopDelayed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics
	{
		struct AtomWavePlayer_eventAdjustVolume_Parms
		{
			float AdjustVolumeDuration;
			float AdjustVolumeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdjustVolumeDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel = { "AdjustVolumeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration = { "AdjustVolumeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventAdjustVolume_Parms, AdjustVolumeDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::NewProp_AdjustVolumeDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/*, const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear*/" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", ", const EAudioFaderCurve FadeCurve = EAudioFaderCurve::Linear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "AdjustVolume", nullptr, nullptr, sizeof(AtomWavePlayer_eventAdjustVolume_Parms), Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics
	{
		struct AtomWavePlayer_eventGetCue_Parms
		{
			USoundAtomCue* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetCue_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Media|MediaPlayer\")\n//bool OpenWaveWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions);\n" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Media|MediaPlayer\")\nbool OpenWaveWithOptions(UManaSource* ManaSource, const FManaPlayerOptions& PlayerOptions);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetCue", nullptr, nullptr, sizeof(AtomWavePlayer_eventGetCue_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics
	{
		struct AtomWavePlayer_eventGetPlayState_Parms
		{
			EAtomWavePlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetPlayState_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomWavePlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Returns the enumerated play states of the audio component. */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Returns the enumerated play states of the audio component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetPlayState", nullptr, nullptr, sizeof(AtomWavePlayer_eventGetPlayState_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetPlayState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetPlayState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics
	{
		struct AtomWavePlayer_eventGetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mana|ManaPlayer" },
		{ "Comment", "/**\n\x09 * Get the Mana current total playback time.\n\x09 *\n\x09 * @return Playback time.\n\x09 * @see GetMovieTime, GetDuration, Seek\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Get the Mana current total playback time.\n\n@return Playback time.\n@see GetMovieTime, GetDuration, Seek" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetTime", nullptr, nullptr, sizeof(AtomWavePlayer_eventGetTime_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics
	{
		struct AtomWavePlayer_eventGetWaveInfo_Parms
		{
			FAtomWaveInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventGetWaveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "GetWaveInfo", nullptr, nullptr, sizeof(AtomWavePlayer_eventGetWaveInfo_Parms), Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics
	{
		struct AtomWavePlayer_eventHasError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventHasError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventHasError_Parms), &Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether the player is in an error state.\n\x09 *\n\x09 * When the player is in an error state, no further operations are possible.\n\x09 * The current wave must be stopped, and a new wave source must be set\n\x09 * before the player can be used again. Errors are usually caused by faulty\n\x09 * sound files or interrupted network connections.\n\x09 *\n\x09 * @return true if player is in an error state, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether the player is in an error state.\n\nWhen the player is in an error state, no further operations are possible.\nThe current wave must be stopped, and a new wave source must be set\nbefore the player can be used again. Errors are usually caused by faulty\nsound files or interrupted network connections.\n\n@return true if player is in an error state, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "HasError", nullptr, nullptr, sizeof(AtomWavePlayer_eventHasError_Parms), Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_HasError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_HasError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics
	{
		struct AtomWavePlayer_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is looping.\n\x09 *\n\x09 * @return true if looping, false otherwise.\n\x09 * @see IsPaused, IsPlaying, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback is looping.\n\n@return true if looping, false otherwise.\n@see IsPaused, IsPlaying, SetLooping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsLooping", nullptr, nullptr, sizeof(AtomWavePlayer_eventIsLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics
	{
		struct AtomWavePlayer_eventIsPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback is currently paused.\n\x09 *\n\x09 * @return true if playback is paused, false otherwise.\n\x09 * @see IsLooping, IsPaused, IsPlaying, Pause\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback is currently paused.\n\n@return true if playback is paused, false otherwise.\n@see IsLooping, IsPaused, IsPlaying, Pause" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPaused", nullptr, nullptr, sizeof(AtomWavePlayer_eventIsPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics
	{
		struct AtomWavePlayer_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Check whether playback has started.\n\x09 *\n\x09 * @return true if playback has started, false otherwise.\n\x09 * @see IsLooping, IsPaused, IsPlaying, Play\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Check whether playback has started.\n\n@return true if playback has started, false otherwise.\n@see IsLooping, IsPaused, IsPlaying, Play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(AtomWavePlayer_eventIsPlaying_Parms), Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Play_Statics
	{
		struct AtomWavePlayer_eventPlay_Parms
		{
			float StartTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Start a sound playing on an audio component */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Start a sound playing on an audio component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Play", nullptr, nullptr, sizeof(AtomWavePlayer_eventPlay_Parms), Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics
	{
		struct AtomWavePlayer_eventSetLooping_Parms
		{
			bool Looping;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Looping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Looping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetLooping_Parms*)Obj)->Looping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping = { "Looping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetLooping_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::NewProp_Looping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/**\n\x09 * Enables or disables playback looping.\n\x09 *\n\x09 * @param Looping Whether playback should be looped.\n\x09 * @return true on success, false otherwise.\n\x09 * @see IsLooping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Enables or disables playback looping.\n\n@param Looping Whether playback should be looped.\n@return true on success, false otherwise.\n@see IsLooping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetLooping", nullptr, nullptr, sizeof(AtomWavePlayer_eventSetLooping_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics
	{
		struct AtomWavePlayer_eventSetPaused_Parms
		{
			bool bPause;
		};
		static void NewProp_bPause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomWavePlayer_eventSetPaused_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomWavePlayer_eventSetPaused_Parms), &Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Pause sound playing, issue any delegates if needed */" },
		{ "CPP_Default_bPause", "true" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Pause sound playing, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetPaused", nullptr, nullptr, sizeof(AtomWavePlayer_eventSetPaused_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics
	{
		struct AtomWavePlayer_eventSetWave_Parms
		{
			USoundAtomCue* InCue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventSetWave_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::NewProp_InCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "//~ Settings\n" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "SetWave", nullptr, nullptr, sizeof(AtomWavePlayer_eventSetWave_Parms), Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_SetWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_SetWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Stop sound, issue any delegates if needed */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Stop sound, issue any delegates if needed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics
	{
		struct AtomWavePlayer_eventStopDelayed_Parms
		{
			float DelayTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomWavePlayer_eventStopDelayed_Parms, DelayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::NewProp_DelayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomWavePlayer" },
		{ "Comment", "/** Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Cues request to stop sound after the provided delay, stopping immediately if delay is zero or negative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomWavePlayer, nullptr, "StopDelayed", nullptr, nullptr, sizeof(AtomWavePlayer_eventStopDelayed_Parms), Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomWavePlayer_StopDelayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomWavePlayer_StopDelayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomWavePlayer_NoRegister()
	{
		return UAtomWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomWavePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundAtomCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundAtomCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWavePlaybackPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWavePlaybackPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWaveFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaveFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUISound_MetaData[];
#endif
		static void NewProp_bIsUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUISound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomWavePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomWavePlayer_AdjustVolume, "AdjustVolume" }, // 3348761292
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetCue, "GetCue" }, // 275007654
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetPlayState, "GetPlayState" }, // 1280775533
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetTime, "GetTime" }, // 1385987595
		{ &Z_Construct_UFunction_UAtomWavePlayer_GetWaveInfo, "GetWaveInfo" }, // 282066244
		{ &Z_Construct_UFunction_UAtomWavePlayer_HasError, "HasError" }, // 1911842017
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsLooping, "IsLooping" }, // 136298711
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPaused, "IsPaused" }, // 3974882223
		{ &Z_Construct_UFunction_UAtomWavePlayer_IsPlaying, "IsPlaying" }, // 1616762292
		{ &Z_Construct_UFunction_UAtomWavePlayer_Play, "Play" }, // 2361605041
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetLooping, "SetLooping" }, // 311013198
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetPaused, "SetPaused" }, // 3957493911
		{ &Z_Construct_UFunction_UAtomWavePlayer_SetWave, "SetWave" }, // 2350460637
		{ &Z_Construct_UFunction_UAtomWavePlayer_Stop, "Stop" }, // 648425075
		{ &Z_Construct_UFunction_UAtomWavePlayer_StopDelayed, "StopDelayed" }, // 483366310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements an Atom wave player asset that can play Atom waves.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AtomWavePlayer.h" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements an Atom wave player asset that can play Atom waves." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Whether the player should loop when media playback reaches the end.\n\x09 *\n\x09 * Use the SetLooping function to change this value at runtime.\n\x09 *\n\x09 * @see IsLooping, SetLooping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Whether the player should loop when media playback reaches the end.\n\nUse the SetLooping function to change this value at runtime.\n\n@see IsLooping, SetLooping" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "First wave info in the cue." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo = { "WaveInfo", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomWavePlayer, WaveInfo), Z_Construct_UScriptStruct_FAtomWaveInfo, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData[] = {
		{ "Category", "Atom" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Cue to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue = { "SoundAtomCue", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomWavePlayer, SoundAtomCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData[] = {
		{ "Comment", "/** Called as a sound plays on the player to allow BP to perform actions based on playback percentage.\n\x09* Computed as samples played divided by total samples, taking into account pitch.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Called as a sound plays on the player to allow BP to perform actions based on playback percentage.\nComputed as samples played divided by total samples, taking into account pitch." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent = { "OnWavePlaybackPercent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomWavePlayer, OnWavePlaybackPercent), Z_Construct_UDelegateFunction_CriWareRuntime_OnWavePlaybackPercent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished = { "OnWaveFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomWavePlayer, OnWaveFinished), Z_Construct_UDelegateFunction_CriWareRuntime_OnWaveFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Whether or not this sound plays when the game is paused in the UI */" },
		{ "ModuleRelativePath", "Classes/AtomWavePlayer.h" },
		{ "ToolTip", "Whether or not this sound plays when the game is paused in the UI" },
	};
#endif
	void Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit(void* Obj)
	{
		((UAtomWavePlayer*)Obj)->bIsUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound = { "bIsUISound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtomWavePlayer), &Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_WaveInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_SoundAtomCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWavePlaybackPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_OnWaveFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomWavePlayer_Statics::NewProp_bIsUISound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomWavePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams = {
		&UAtomWavePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomWavePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomWavePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomWavePlayer, 4088427397);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomWavePlayer>()
	{
		return UAtomWavePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomWavePlayer(Z_Construct_UClass_UAtomWavePlayer, &UAtomWavePlayer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomWavePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomWavePlayer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomWavePlayer)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
