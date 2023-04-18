// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomBusSampler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBusSampler() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingFinished__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "OnRecordingStarted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsPlayingRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsPausedRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPausedRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execPauseRecordedSound)
	{
		P_GET_UBOOL(Z_Param_bPause);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseRecordedSound(Z_Param_bPause);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execStopRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execPlayRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execCanPlayRecordedSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPlayRecordedSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execFinishRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execStartRecording)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InExpectedDuration);
		P_GET_PROPERTY(FIntProperty,Z_Param_InAsrRack);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBusName);
		P_GET_UBOOL(Z_Param_BusOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording(Z_Param_InExpectedDuration,Z_Param_InAsrRack,Z_Param_InBusName,Z_Param_BusOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomBusSampler::execCanRecord)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRecord();
		P_NATIVE_END;
	}
	void UAtomBusSampler::StaticRegisterNativesUAtomBusSampler()
	{
		UClass* Class = UAtomBusSampler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayRecordedSound", &UAtomBusSampler::execCanPlayRecordedSound },
			{ "CanRecord", &UAtomBusSampler::execCanRecord },
			{ "FinishRecording", &UAtomBusSampler::execFinishRecording },
			{ "IsPausedRecordedSound", &UAtomBusSampler::execIsPausedRecordedSound },
			{ "IsPlayingRecordedSound", &UAtomBusSampler::execIsPlayingRecordedSound },
			{ "IsRecording", &UAtomBusSampler::execIsRecording },
			{ "PauseRecordedSound", &UAtomBusSampler::execPauseRecordedSound },
			{ "PlayRecordedSound", &UAtomBusSampler::execPlayRecordedSound },
			{ "StartRecording", &UAtomBusSampler::execStartRecording },
			{ "StopRecordedSound", &UAtomBusSampler::execStopRecordedSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics
	{
		struct AtomBusSampler_eventCanPlayRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventCanPlayRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventCanPlayRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanPlayRecordedSound", nullptr, nullptr, sizeof(AtomBusSampler_eventCanPlayRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics
	{
		struct AtomBusSampler_eventCanRecord_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventCanRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventCanRecord_Parms), &Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xaa\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "CanRecord", nullptr, nullptr, sizeof(AtomBusSampler_eventCanRecord_Parms), Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_CanRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_CanRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe7\xb5\x82\xe4\xba\x86\xe3\x82\x92\xe8\xa6\x81\xe6\xb1\x82\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe5\x88\x86\xe3\x81\xae\xe5\x87\xba\xe5\x8a\x9b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x86\x85\xe9\x83\xa8\xe3\x81\xae\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x83\x90\xe3\x83\x83\xe3\x83\x95\xe3\x82\xa1\xe3\x81\xab\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe7\xb5\x82\xe4\xba\x86\xe3\x82\x92\xe8\xa6\x81\xe6\xb1\x82\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f\xe6\x99\x82\xe9\x96\x93\xe5\x88\x86\xe3\x81\xae\xe5\x87\xba\xe5\x8a\x9b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\x8c\xe5\x86\x85\xe9\x83\xa8\xe3\x81\xae\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x83\x90\xe3\x83\x83\xe3\x83\x95\xe3\x82\xa1\xe3\x81\xab\xe4\xbf\x9d\xe6\x8c\x81\xe3\x81\x95\xe3\x82\x8c\xe3\x80\x81\xe5\x86\x8d\xe7\x94\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe3\x81\xab\xe3\x81\xaa\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "FinishRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_FinishRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_FinishRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics
	{
		struct AtomBusSampler_eventIsPausedRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsPausedRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsPausedRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* AtomBusSampler\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\x82\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "AtomBusSampler\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe3\x81\x8c\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x85\x8b\xe3\x81\xab\xe3\x81\x82\xe3\x82\x8b\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPausedRecordedSound", nullptr, nullptr, sizeof(AtomBusSampler_eventIsPausedRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics
	{
		struct AtomBusSampler_eventIsPlayingRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsPlayingRecordedSound_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsPlayingRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* AtomBusSampler\xe3\x81\x8c\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "AtomBusSampler\xe3\x81\x8c\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x86\x8d\xe7\x94\x9f\xe4\xb8\xad\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsPlayingRecordedSound", nullptr, nullptr, sizeof(AtomBusSampler_eventIsPlayingRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics
	{
		struct AtomBusSampler_eventIsRecording_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomBusSampler_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventIsRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe4\xb8\xad\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "AtomBusSampler\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe4\xb8\xad\xe3\x81\x8b\xe3\x81\xa9\xe3\x81\x86\xe3\x81\x8b\xe3\x82\x92\xe8\xaa\xbf\xe3\x81\xb9\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "IsRecording", nullptr, nullptr, sizeof(AtomBusSampler_eventIsRecording_Parms), Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics
	{
		struct AtomBusSampler_eventPauseRecordedSound_Parms
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
	void Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((AtomBusSampler_eventPauseRecordedSound_Parms*)Obj)->bPause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventPauseRecordedSound_Parms), &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::NewProp_bPause,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe4\xb8\x80\xe6\x99\x82\xe5\x81\x9c\xe6\xad\xa2\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PauseRecordedSound", nullptr, nullptr, sizeof(AtomBusSampler_eventPauseRecordedSound_Parms), Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x82\x92\xe5\x86\x8d\xe7\x94\x9f\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "PlayRecordedSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics
	{
		struct AtomBusSampler_eventStartRecording_Parms
		{
			float InExpectedDuration;
			int32 InAsrRack;
			FString InBusName;
			bool BusOutput;
		};
		static void NewProp_BusOutput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BusOutput;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBusName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InAsrRack;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InExpectedDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit(void* Obj)
	{
		((AtomBusSampler_eventStartRecording_Parms*)Obj)->BusOutput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput = { "BusOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtomBusSampler_eventStartRecording_Parms), &Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName = { "InBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InBusName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack = { "InAsrRack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InAsrRack), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration = { "InExpectedDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtomBusSampler_eventStartRecording_Parms, InExpectedDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_BusOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InAsrRack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::NewProp_InExpectedDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe9\x96\x8b\xe5\xa7\x8b\xe3\x82\x92\xe8\xa6\x81\xe6\xb1\x82\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f ASR Rack \xe3\x81\xa8\xe3\x83\x90\xe3\x82\xb9\xe3\x82\x92\xe9\x80\x9a\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7(\xe7\xa7\x92)\xe3\x82\x92\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe3\x81\x93\xe3\x81\xae\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe7\xb5\x82\xe4\xba\x86\xe6\x99\x82\xe7\x82\xb9\xe3\x81\x8b\xe3\x82\x89\xe7\x9b\xb4\xe8\xbf\x91\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x87\xba\xe5\x8a\x9b\xe3\x81\x8c\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x81\xbe\xe3\x81\xa7\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09* \xe8\xa4\x87\xe6\x95\xb0\xe3\x81\xae AtomBusSampler \xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x81\xa3\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe3\x81\xae\xe3\x81\xaf\xe5\x90\x8c\xe6\x99\x82\xe3\x81\xab\xef\xbc\x91\xe3\x81\xa4\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*\n\x09* @param InExpectedDuration \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* @param InAsrRack \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\x99\xe3\x82\x8b ASR Rack \xe7\x95\xaa\xe5\x8f\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaf 0 \xe7\x95\xaa (\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf) \xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* @param InBusName \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaf MasterOut \xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* @param BusOutput true\xe3\x81\xae\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xaf\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x87\xba\xe5\x8a\x9b\xe3\x82\x92\xe3\x80\x81""false\xe3\x81\xaa\xe3\x82\x89\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xb8\xe3\x81\xae\xe5\x85\xa5\xe5\x8a\x9b\xe3\x82\x92\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaftrue\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "CPP_Default_BusOutput", "true" },
		{ "CPP_Default_InAsrRack", "0" },
		{ "CPP_Default_InBusName", "MasterOut" },
		{ "CPP_Default_InExpectedDuration", "3.000000" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe9\x96\x8b\xe5\xa7\x8b\xe3\x82\x92\xe8\xa6\x81\xe6\xb1\x82\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\x9f ASR Rack \xe3\x81\xa8\xe3\x83\x90\xe3\x82\xb9\xe3\x82\x92\xe9\x80\x9a\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x82\x92\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7(\xe7\xa7\x92)\xe3\x82\x92\xe3\x80\x81\xe6\x9c\xac\xe9\x96\xa2\xe6\x95\xb0\xe3\x81\xae\xe5\xbc\x95\xe6\x95\xb0\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xa7\xe3\x81\x8d\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe3\x81\x93\xe3\x81\xae\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x81\x8c\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x82\x92\xe8\xb6\x85\xe3\x81\x88\xe3\x81\x9f\xe5\xa0\xb4\xe5\x90\x88\xe3\x80\x81\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x81\xae\xe7\xb5\x82\xe4\xba\x86\xe6\x99\x82\xe7\x82\xb9\xe3\x81\x8b\xe3\x82\x89\xe7\x9b\xb4\xe8\xbf\x91\xe3\x81\xae\xe9\x9f\xb3\xe5\xa3\xb0\xe5\x87\xba\xe5\x8a\x9b\xe3\x81\x8c\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x81\xbe\xe3\x81\xa7\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\xe8\xa4\x87\xe6\x95\xb0\xe3\x81\xae AtomBusSampler \xe3\x81\x8c\xe5\xad\x98\xe5\x9c\xa8\xe3\x81\x99\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xa7\xe3\x81\x82\xe3\x81\xa3\xe3\x81\xa6\xe3\x82\x82\xe3\x80\x81\xe9\x8c\xb2\xe9\x9f\xb3\xe5\x8c\xba\xe9\x96\x93\xe3\x82\x92\xe9\x96\x8b\xe5\xa7\x8b\xe3\x81\xa7\xe3\x81\x8d\xe3\x82\x8b\xe3\x81\xae\xe3\x81\xaf\xe5\x90\x8c\xe6\x99\x82\xe3\x81\xab\xef\xbc\x91\xe3\x81\xa4\xe3\x81\xbe\xe3\x81\xa7\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\n@param InExpectedDuration \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x99\xe3\x82\x8b\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xae\xe6\x9c\x80\xe5\xa4\xa7\xe9\x95\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe5\x8d\x98\xe4\xbd\x8d\xe3\x81\xaf\xe7\xa7\x92\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param InAsrRack \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\x99\xe3\x82\x8b ASR Rack \xe7\x95\xaa\xe5\x8f\xb7\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaf 0 \xe7\x95\xaa (\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x83\xa9\xe3\x83\x83\xe3\x82\xaf) \xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param InBusName \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\xae\xe5\xaf\xbe\xe8\xb1\xa1\xe3\x81\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x83\x90\xe3\x82\xb9\xe5\x90\x8d\xe3\x82\x92\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaf MasterOut \xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n@param BusOutput true\xe3\x81\xae\xe3\x81\xa8\xe3\x81\x8d\xe3\x81\xaf\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xae\xe5\x87\xba\xe5\x8a\x9b\xe3\x82\x92\xe3\x80\x81""false\xe3\x81\xaa\xe3\x82\x89\xe3\x83\x90\xe3\x82\xb9\xe3\x81\xb8\xe3\x81\xae\xe5\x85\xa5\xe5\x8a\x9b\xe3\x82\x92\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\xe3\x83\x87\xe3\x83\x95\xe3\x82\xa9\xe3\x83\xab\xe3\x83\x88\xe3\x81\xaftrue\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StartRecording", nullptr, nullptr, sizeof(AtomBusSampler_eventStartRecording_Parms), Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe7\xb5\x82\xe4\xba\x86\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe3\x81\x97\xe3\x81\x9f\xe9\x9f\xb3\xe5\xa3\xb0\xe3\x81\xae\xe5\x86\x8d\xe7\x94\x9f\xe3\x82\x92\xe7\xb5\x82\xe4\xba\x86\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomBusSampler, nullptr, "StopRecordedSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomBusSampler_NoRegister()
	{
		return UAtomBusSampler::StaticClass();
	}
	struct Z_Construct_UClass_UAtomBusSampler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecordingFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecordingStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordingStarted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomBusSampler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomBusSampler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomBusSampler_CanPlayRecordedSound, "CanPlayRecordedSound" }, // 2083152752
		{ &Z_Construct_UFunction_UAtomBusSampler_CanRecord, "CanRecord" }, // 3579244030
		{ &Z_Construct_UFunction_UAtomBusSampler_FinishRecording, "FinishRecording" }, // 742924518
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPausedRecordedSound, "IsPausedRecordedSound" }, // 3687595569
		{ &Z_Construct_UFunction_UAtomBusSampler_IsPlayingRecordedSound, "IsPlayingRecordedSound" }, // 1947141839
		{ &Z_Construct_UFunction_UAtomBusSampler_IsRecording, "IsRecording" }, // 1221754604
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, "OnRecordingFinished__DelegateSignature" }, // 750353544
		{ &Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, "OnRecordingStarted__DelegateSignature" }, // 3065776128
		{ &Z_Construct_UFunction_UAtomBusSampler_PauseRecordedSound, "PauseRecordedSound" }, // 1100730729
		{ &Z_Construct_UFunction_UAtomBusSampler_PlayRecordedSound, "PlayRecordedSound" }, // 3083362233
		{ &Z_Construct_UFunction_UAtomBusSampler_StartRecording, "StartRecording" }, // 1333741596
		{ &Z_Construct_UFunction_UAtomBusSampler_StopRecordedSound, "StopRecordedSound" }, // 3967525209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomBusSampler.h" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The class to Capture and play the PCM data recorded" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe7\xb5\x82\xe4\xba\x86\xe6\x99\x82\xe3\x81\xab\xe3\x83\x96\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe7\xb5\x82\xe4\xba\x86\xe6\x99\x82\xe3\x81\xab\xe3\x83\x96\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished = { "OnRecordingFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomBusSampler, OnRecordingFinished), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData[] = {
		{ "Category", "Atom|AtomBusSampler" },
		{ "Comment", "/**\n\x09* \xe9\x8c\xb2\xe9\x9f\xb3\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe3\x83\x96\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AtomBusSampler.h" },
		{ "ToolTip", "\xe9\x8c\xb2\xe9\x9f\xb3\xe9\x96\x8b\xe5\xa7\x8b\xe6\x99\x82\xe3\x81\xab\xe3\x83\x96\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x89\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x95\xe3\x82\x8c\xe3\x82\x8b\xe3\x83\x87\xe3\x83\xaa\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\x88\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted = { "OnRecordingStarted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomBusSampler, OnRecordingStarted), Z_Construct_UDelegateFunction_UAtomBusSampler_OnRecordingStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomBusSampler_Statics::NewProp_OnRecordingStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomBusSampler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomBusSampler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams = {
		&UAtomBusSampler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomBusSampler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomBusSampler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomBusSampler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomBusSampler, 708816497);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomBusSampler>()
	{
		return UAtomBusSampler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomBusSampler(Z_Construct_UClass_UAtomBusSampler, &UAtomBusSampler::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomBusSampler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomBusSampler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
