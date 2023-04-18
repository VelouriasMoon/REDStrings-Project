// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerBPLibrary() {}
// Cross Module References
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature();
	SIMPLECONTROLLER_API UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerButtons();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad();
	SIMPLECONTROLLER_API UEnum* Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString DeviceID;
			int32 axisID;
			float AxisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_AxisValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString DeviceID;
			int32 ballID;
			float xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_yRel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xRel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ballID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_yRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_xRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString DeviceID;
			int32 directionalPadValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_directionalPadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execaxisMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->axisMovedEventDelegate(Z_Param_DeviceID,Z_Param_axisID,Z_Param_AxisValue,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execballMovedEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_ballID);
		P_GET_PROPERTY(FIntProperty,Z_Param_xRel);
		P_GET_PROPERTY(FIntProperty,Z_Param_yRel);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ballMovedEventDelegate(Z_Param_DeviceID,Z_Param_ballID,Z_Param_xRel,Z_Param_yRel,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_UBOOL_REF(Z_Param_Out_hasHaptic);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CONSTANT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SINE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_LEFTRIGHT);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_TRIANGLE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHUP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SAWTOOTHDOWN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_RAMP);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPRING);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_DAMPER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INERTIA);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_FRICTION);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CUSTOM);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_GAIN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_AUTOCENTER);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_STATUS);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_PAUSE);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_POLAR);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_CARTESIAN);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_SPHERICAL);
		P_GET_UBOOL_REF(Z_Param_Out_forceFeedback_INFINITY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_maxSimultaneouslyEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceForceFeedbackInfo(Z_Param_device,Z_Param_Out_hasHaptic,Z_Param_Out_forceFeedback_CONSTANT,Z_Param_Out_forceFeedback_SINE,Z_Param_Out_forceFeedback_LEFTRIGHT,Z_Param_Out_forceFeedback_TRIANGLE,Z_Param_Out_forceFeedback_SAWTOOTHUP,Z_Param_Out_forceFeedback_SAWTOOTHDOWN,Z_Param_Out_forceFeedback_RAMP,Z_Param_Out_forceFeedback_SPRING,Z_Param_Out_forceFeedback_DAMPER,Z_Param_Out_forceFeedback_INERTIA,Z_Param_Out_forceFeedback_FRICTION,Z_Param_Out_forceFeedback_CUSTOM,Z_Param_Out_forceFeedback_GAIN,Z_Param_Out_forceFeedback_AUTOCENTER,Z_Param_Out_forceFeedback_STATUS,Z_Param_Out_forceFeedback_PAUSE,Z_Param_Out_forceFeedback_POLAR,Z_Param_Out_forceFeedback_CARTESIAN,Z_Param_Out_forceFeedback_SPHERICAL,Z_Param_Out_forceFeedback_INFINITY,Z_Param_Out_maxSimultaneouslyEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakDeviceInfo)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_deviceIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionIndex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DeviceID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_controllerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_vendorID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_productID);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numButtons);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numDirectionalPadAxes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_numBalls);
		P_GET_UBOOL_REF(Z_Param_Out_hasHaptic);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakDeviceInfo(Z_Param_device,Z_Param_Out_deviceIndex,Z_Param_Out_connectionIndex,Z_Param_Out_DeviceID,Z_Param_Out_deviceName,Z_Param_Out_controllerName,Z_Param_Out_vendorID,Z_Param_Out_productID,Z_Param_Out_numAxes,Z_Param_Out_numButtons,Z_Param_Out_numDirectionalPadAxes,Z_Param_Out_numBalls,Z_Param_Out_hasHaptic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbreakForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_effectID);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::breakForceFeedbackEffect(Z_Param_ForceFeedbackEffect,Z_Param_Out_effectID,Z_Param_Out_successful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonDownEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonDownEventDelegate(Z_Param_DeviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonIDToButton)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_ENUM_REF(ESimpleControllerButtons,Z_Param_Out_buttons);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::buttonIDToButton(Z_Param_buttonID,(ESimpleControllerButtons&)(Z_Param_Out_buttons));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execbuttonUpEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->buttonUpEventDelegate(Z_Param_DeviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execchangeAxisMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldAxisID);
		P_GET_PROPERTY(FIntProperty,Z_Param_newAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeAxisMapping(Z_Param_deviceIndex,Z_Param_oldAxisID,Z_Param_newAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execchangeButtonMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldButtonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_newButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->changeButtonMapping(Z_Param_deviceIndex,Z_Param_oldButtonID,Z_Param_newButtonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_ForceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectConditionType,Z_Param_ConditionType);
		P_GET_UBOOL(Z_Param_useDirectionX);
		P_GET_UBOOL(Z_Param_useDirectionY);
		P_GET_UBOOL(Z_Param_useDirectionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_Length);
		P_GET_PROPERTY(FIntProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rightLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_leftLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_rightLevelIncreaseSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_leftLevelIncreaseSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deadband);
		P_GET_PROPERTY(FIntProperty,Z_Param_Center);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectCondition(Z_Param_Out_ForceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectConditionType(Z_Param_ConditionType),Z_Param_useDirectionX,Z_Param_useDirectionY,Z_Param_useDirectionZ,Z_Param_Length,Z_Param_Delay,Z_Param_rightLevel,Z_Param_leftLevel,Z_Param_rightLevelIncreaseSpeed,Z_Param_leftLevelIncreaseSpeed,Z_Param_deadband,Z_Param_Center);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_ForceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_Length);
		P_GET_PROPERTY(FIntProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectConstant(Z_Param_Out_ForceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_Length,Z_Param_Delay,Z_Param_Level,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_ForceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackEffectPeriodicType,Z_Param_PeriodicType);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_Length);
		P_GET_PROPERTY(FIntProperty,Z_Param_Delay);
		P_GET_PROPERTY(FIntProperty,Z_Param_Period);
		P_GET_PROPERTY(FFloatProperty,Z_Param_magnitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_phase);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectPeriodic(Z_Param_Out_ForceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackEffectPeriodicType(Z_Param_PeriodicType),ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_Length,Z_Param_Delay,Z_Param_Period,Z_Param_magnitude,Z_Param_Offset,Z_Param_phase,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp)
	{
		P_GET_STRUCT_REF(FSimpleControllerForceFeedbackEffect,Z_Param_Out_ForceFeedbackEffect);
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_ENUM(ESimpleControllerForceFeedbackDirectionType,Z_Param_directionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionX);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionY);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionZ);
		P_GET_PROPERTY(FIntProperty,Z_Param_Length);
		P_GET_PROPERTY(FIntProperty,Z_Param_Delay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_startLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_endLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_attackLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attackLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_fadeLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_fadeLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->createForceFeedbackEffectRamp(Z_Param_Out_ForceFeedbackEffect,Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,ESimpleControllerForceFeedbackDirectionType(Z_Param_directionType),Z_Param_directionX,Z_Param_directionY,Z_Param_directionZ,Z_Param_Length,Z_Param_Delay,Z_Param_startLevel,Z_Param_endLevel,Z_Param_attackLength,Z_Param_attackLevel,Z_Param_fadeLength,Z_Param_fadeLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdestroyForceFeedbackEffect)
	{
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::destroyForceFeedbackEffect(Z_Param_ForceFeedbackEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceAttachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceAttachedEventDelegate(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdeviceDetachedEventDelegate)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->deviceDetachedEventDelegate(Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectinalPadValueToDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_ENUM_REF(ESimpleControllerDirectionalPad,Z_Param_Out_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::directinalPadValueToDirection(Z_Param_directionalPadValue,(ESimpleControllerDirectionalPad&)(Z_Param_Out_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execdirectionalPadEventDelegate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_directionalPadValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->directionalPadEventDelegate(Z_Param_DeviceID,Z_Param_directionalPadValue,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=P_THIS->findControllerByDeviceID(Z_Param_DeviceID,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execfindControllerByDeviceIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerDevice*)Z_Param__Result=P_THIS->findControllerByDeviceIndex(Z_Param_deviceIndex,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetConnectedControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSimpleControllerDevice>*)Z_Param__Result=P_THIS->getConnectedControllers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execgetSimpleControllerTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USimpleControllerBPLibrary**)Z_Param__Result=USimpleControllerBPLibrary::getSimpleControllerTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execinitController)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_refreshRateButtonsAndAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initController(Z_Param_refreshRateButtonsAndAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execinvertAxis)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->invertAxis(Z_Param_deviceIndex,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execloadMapping)
	{
		P_GET_ENUM(ESimpleControllerDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileNameWithPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->loadMapping(ESimpleControllerDirectoryType(Z_Param_directoryType),Z_Param_deviceIndex,Z_Param_fileNameWithPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execOnButtonDownEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonDownEvent(Z_Param_DeviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execOnButtonUpEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceID);
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonUpEvent(Z_Param_DeviceID,Z_Param_buttonID,Z_Param_deviceIndex,Z_Param_device);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllAxisInverting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllAxisInverting(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllAxisToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllAxisToDefaultMapping(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAllButtonsToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAllButtonsToDefaultMapping(Z_Param_deviceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAxisInverting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_axisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAxisInverting(Z_Param_deviceIndex,Z_Param_axisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetAxisToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldAxisID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetAxisToDefaultMapping(Z_Param_deviceIndex,Z_Param_oldAxisID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execresetButtonToDefaultMapping)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_oldButtonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->resetButtonToDefaultMapping(Z_Param_deviceIndex,Z_Param_oldButtonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execrumble)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthSmallMotor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_strengthLargeMotor);
		P_GET_PROPERTY(FIntProperty,Z_Param_lengthInMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->rumble(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_device,Z_Param_strengthSmallMotor,Z_Param_strengthLargeMotor,Z_Param_lengthInMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsaveMapping)
	{
		P_GET_ENUM(ESimpleControllerDirectoryType,Z_Param_directoryType);
		P_GET_PROPERTY(FIntProperty,Z_Param_deviceIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_fileNameWithPath);
		P_GET_UBOOL(Z_Param_createDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->saveMapping(ESimpleControllerDirectoryType(Z_Param_directoryType),Z_Param_deviceIndex,Z_Param_fileNameWithPath,Z_Param_createDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execsimpleRumble)
	{
		P_GET_STRUCT(FSimpleControllerDevice,Z_Param_device);
		P_GET_PROPERTY(FIntProperty,Z_Param_low_runble);
		P_GET_PROPERTY(FIntProperty,Z_Param_high_rumble);
		P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleControllerBPLibrary::simpleRumble(Z_Param_device,Z_Param_low_runble,Z_Param_high_rumble,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execstopController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->stopController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect)
	{
		P_GET_UBOOL_REF(Z_Param_Out_successful);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_errorMessage);
		P_GET_STRUCT(FSimpleControllerForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_iterations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSimpleControllerForceFeedbackEffect*)Z_Param__Result=USimpleControllerBPLibrary::uploadAndRunForceFeedbackEffect(Z_Param_Out_successful,Z_Param_Out_errorMessage,Z_Param_ForceFeedbackEffect,Z_Param_iterations);
		P_NATIVE_END;
	}
	void USimpleControllerBPLibrary::StaticRegisterNativesUSimpleControllerBPLibrary()
	{
		UClass* Class = USimpleControllerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "axisMovedEventDelegate", &USimpleControllerBPLibrary::execaxisMovedEventDelegate },
			{ "ballMovedEventDelegate", &USimpleControllerBPLibrary::execballMovedEventDelegate },
			{ "breakDeviceForceFeedbackInfo", &USimpleControllerBPLibrary::execbreakDeviceForceFeedbackInfo },
			{ "breakDeviceInfo", &USimpleControllerBPLibrary::execbreakDeviceInfo },
			{ "breakForceFeedbackEffect", &USimpleControllerBPLibrary::execbreakForceFeedbackEffect },
			{ "buttonDownEventDelegate", &USimpleControllerBPLibrary::execbuttonDownEventDelegate },
			{ "buttonIDToButton", &USimpleControllerBPLibrary::execbuttonIDToButton },
			{ "buttonUpEventDelegate", &USimpleControllerBPLibrary::execbuttonUpEventDelegate },
			{ "changeAxisMapping", &USimpleControllerBPLibrary::execchangeAxisMapping },
			{ "changeButtonMapping", &USimpleControllerBPLibrary::execchangeButtonMapping },
			{ "createForceFeedbackEffectCondition", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectCondition },
			{ "createForceFeedbackEffectConstant", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectConstant },
			{ "createForceFeedbackEffectPeriodic", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectPeriodic },
			{ "createForceFeedbackEffectRamp", &USimpleControllerBPLibrary::execcreateForceFeedbackEffectRamp },
			{ "destroyForceFeedbackEffect", &USimpleControllerBPLibrary::execdestroyForceFeedbackEffect },
			{ "deviceAttachedEventDelegate", &USimpleControllerBPLibrary::execdeviceAttachedEventDelegate },
			{ "deviceDetachedEventDelegate", &USimpleControllerBPLibrary::execdeviceDetachedEventDelegate },
			{ "directinalPadValueToDirection", &USimpleControllerBPLibrary::execdirectinalPadValueToDirection },
			{ "directionalPadEventDelegate", &USimpleControllerBPLibrary::execdirectionalPadEventDelegate },
			{ "findControllerByDeviceID", &USimpleControllerBPLibrary::execfindControllerByDeviceID },
			{ "findControllerByDeviceIndex", &USimpleControllerBPLibrary::execfindControllerByDeviceIndex },
			{ "getConnectedControllers", &USimpleControllerBPLibrary::execgetConnectedControllers },
			{ "getSimpleControllerTarget", &USimpleControllerBPLibrary::execgetSimpleControllerTarget },
			{ "initController", &USimpleControllerBPLibrary::execinitController },
			{ "invertAxis", &USimpleControllerBPLibrary::execinvertAxis },
			{ "loadMapping", &USimpleControllerBPLibrary::execloadMapping },
			{ "OnButtonDownEvent", &USimpleControllerBPLibrary::execOnButtonDownEvent },
			{ "OnButtonUpEvent", &USimpleControllerBPLibrary::execOnButtonUpEvent },
			{ "resetAllAxisInverting", &USimpleControllerBPLibrary::execresetAllAxisInverting },
			{ "resetAllAxisToDefaultMapping", &USimpleControllerBPLibrary::execresetAllAxisToDefaultMapping },
			{ "resetAllButtonsToDefaultMapping", &USimpleControllerBPLibrary::execresetAllButtonsToDefaultMapping },
			{ "resetAxisInverting", &USimpleControllerBPLibrary::execresetAxisInverting },
			{ "resetAxisToDefaultMapping", &USimpleControllerBPLibrary::execresetAxisToDefaultMapping },
			{ "resetButtonToDefaultMapping", &USimpleControllerBPLibrary::execresetButtonToDefaultMapping },
			{ "rumble", &USimpleControllerBPLibrary::execrumble },
			{ "saveMapping", &USimpleControllerBPLibrary::execsaveMapping },
			{ "simpleRumble", &USimpleControllerBPLibrary::execsimpleRumble },
			{ "stopController", &USimpleControllerBPLibrary::execstopController },
			{ "uploadAndRunForceFeedbackEffect", &USimpleControllerBPLibrary::execuploadAndRunForceFeedbackEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms
		{
			FString DeviceID;
			int32 axisID;
			float AxisValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_axisID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, AxisValue), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_AxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_AxisValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, axisID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_AxisValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "axisMovedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventaxisMovedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms
		{
			FString DeviceID;
			int32 ballID;
			int32 xRel;
			int32 yRel;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yRel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_yRel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xRel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_xRel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ballID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ballID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel = { "yRel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, yRel), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel = { "xRel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, xRel), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID = { "ballID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, ballID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_yRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_xRel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_ballID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "ballMovedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventballMovedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms
		{
			FSimpleControllerDevice device;
			bool hasHaptic;
			bool forceFeedback_CONSTANT;
			bool forceFeedback_SINE;
			bool forceFeedback_LEFTRIGHT;
			bool forceFeedback_TRIANGLE;
			bool forceFeedback_SAWTOOTHUP;
			bool forceFeedback_SAWTOOTHDOWN;
			bool forceFeedback_RAMP;
			bool forceFeedback_SPRING;
			bool forceFeedback_DAMPER;
			bool forceFeedback_INERTIA;
			bool forceFeedback_FRICTION;
			bool forceFeedback_CUSTOM;
			bool forceFeedback_GAIN;
			bool forceFeedback_AUTOCENTER;
			bool forceFeedback_STATUS;
			bool forceFeedback_PAUSE;
			bool forceFeedback_POLAR;
			bool forceFeedback_CARTESIAN;
			bool forceFeedback_SPHERICAL;
			bool forceFeedback_INFINITY;
			int32 maxSimultaneouslyEffects;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxSimultaneouslyEffects;
		static void NewProp_forceFeedback_INFINITY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INFINITY;
		static void NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPHERICAL;
		static void NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CARTESIAN;
		static void NewProp_forceFeedback_POLAR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_POLAR;
		static void NewProp_forceFeedback_PAUSE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_PAUSE;
		static void NewProp_forceFeedback_STATUS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_STATUS;
		static void NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_AUTOCENTER;
		static void NewProp_forceFeedback_GAIN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_GAIN;
		static void NewProp_forceFeedback_CUSTOM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CUSTOM;
		static void NewProp_forceFeedback_FRICTION_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_FRICTION;
		static void NewProp_forceFeedback_INERTIA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_INERTIA;
		static void NewProp_forceFeedback_DAMPER_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_DAMPER;
		static void NewProp_forceFeedback_SPRING_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SPRING;
		static void NewProp_forceFeedback_RAMP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_RAMP;
		static void NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHDOWN;
		static void NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SAWTOOTHUP;
		static void NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_TRIANGLE;
		static void NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_LEFTRIGHT;
		static void NewProp_forceFeedback_SINE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_SINE;
		static void NewProp_forceFeedback_CONSTANT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_forceFeedback_CONSTANT;
		static void NewProp_hasHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHaptic;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects = { "maxSimultaneouslyEffects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, maxSimultaneouslyEffects), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INFINITY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY = { "forceFeedback_INFINITY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPHERICAL = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL = { "forceFeedback_SPHERICAL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CARTESIAN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN = { "forceFeedback_CARTESIAN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_POLAR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR = { "forceFeedback_POLAR", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_PAUSE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE = { "forceFeedback_PAUSE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_STATUS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS = { "forceFeedback_STATUS", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_AUTOCENTER = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER = { "forceFeedback_AUTOCENTER", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_GAIN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN = { "forceFeedback_GAIN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CUSTOM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM = { "forceFeedback_CUSTOM", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_FRICTION = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION = { "forceFeedback_FRICTION", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_INERTIA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA = { "forceFeedback_INERTIA", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_DAMPER = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER = { "forceFeedback_DAMPER", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SPRING = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING = { "forceFeedback_SPRING", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_RAMP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP = { "forceFeedback_RAMP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHDOWN = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN = { "forceFeedback_SAWTOOTHDOWN", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SAWTOOTHUP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP = { "forceFeedback_SAWTOOTHUP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_TRIANGLE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE = { "forceFeedback_TRIANGLE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_LEFTRIGHT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT = { "forceFeedback_LEFTRIGHT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_SINE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE = { "forceFeedback_SINE", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->forceFeedback_CONSTANT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT = { "forceFeedback_CONSTANT", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms*)Obj)->hasHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic = { "hasHaptic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_maxSimultaneouslyEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INFINITY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPHERICAL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CARTESIAN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_POLAR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_PAUSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_STATUS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_AUTOCENTER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_GAIN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CUSTOM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_FRICTION,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_INERTIA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_DAMPER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SPRING,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_RAMP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHDOWN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SAWTOOTHUP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_TRIANGLE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_LEFTRIGHT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_SINE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_forceFeedback_CONSTANT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_hasHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceForceFeedbackInfo", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakDeviceForceFeedbackInfo_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms
		{
			FSimpleControllerDevice device;
			int32 deviceIndex;
			int32 connectionIndex;
			FString DeviceID;
			FString deviceName;
			FString controllerName;
			int32 vendorID;
			int32 productID;
			int32 numAxes;
			int32 numButtons;
			int32 numDirectionalPadAxes;
			int32 numBalls;
			bool hasHaptic;
		};
		static void NewProp_hasHaptic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHaptic;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numBalls;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numDirectionalPadAxes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numButtons;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numAxes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_productID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_vendorID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_controllerName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_deviceName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms*)Obj)->hasHaptic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic = { "hasHaptic", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls = { "numBalls", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numBalls), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes = { "numDirectionalPadAxes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numDirectionalPadAxes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons = { "numButtons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numButtons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes = { "numAxes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, numAxes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID = { "productID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, productID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID = { "vendorID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, vendorID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName = { "controllerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, controllerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex = { "connectionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, connectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_hasHaptic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numBalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numDirectionalPadAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_numAxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_productID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_vendorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_controllerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_connectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakDeviceInfo", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakDeviceInfo_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			int32 effectID;
			bool successful;
		};
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_effectID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID = { "effectID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, effectID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_effectID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "breakForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbreakForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonDownEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonDownEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonIDToButton_Parms
		{
			int32 buttonID;
			ESimpleControllerButtons buttons;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttons;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttons_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons = { "buttons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttons), Z_Construct_UEnum_SimpleController_ESimpleControllerButtons, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttons_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::NewProp_buttonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonIDToButton", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonIDToButton_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "buttonUpEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventbuttonUpEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventchangeAxisMapping_Parms
		{
			int32 deviceIndex;
			int32 oldAxisID;
			int32 newAxisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newAxisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldAxisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_newAxisID = { "newAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, newAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_oldAxisID = { "oldAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, oldAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_newAxisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_oldAxisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "changeAxisMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventchangeAxisMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventchangeButtonMapping_Parms
		{
			int32 deviceIndex;
			int32 oldButtonID;
			int32 newButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newButtonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldButtonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_newButtonID = { "newButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, newButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_oldButtonID = { "oldButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, oldButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_newButtonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_oldButtonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "changeButtonMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventchangeButtonMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectConditionType ConditionType;
			bool useDirectionX;
			bool useDirectionY;
			bool useDirectionZ;
			int32 Length;
			int32 Delay;
			float rightLevel;
			float leftLevel;
			int32 rightLevelIncreaseSpeed;
			int32 leftLevelIncreaseSpeed;
			float deadband;
			int32 Center;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deadband;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_leftLevelIncreaseSpeed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rightLevelIncreaseSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_leftLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rightLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static void NewProp_useDirectionZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionZ;
		static void NewProp_useDirectionY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionY;
		static void NewProp_useDirectionX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useDirectionX;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, Center), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband = { "deadband", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, deadband), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed = { "leftLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevelIncreaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed = { "rightLevelIncreaseSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevelIncreaseSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel = { "leftLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, leftLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel = { "rightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, rightLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ = { "useDirectionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY = { "useDirectionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->useDirectionX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX = { "useDirectionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, ConditionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectConditionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_deadband,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevelIncreaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevelIncreaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_leftLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_rightLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_useDirectionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectCondition", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectCondition_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 Length;
			int32 Delay;
			float Level;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectConstant", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectConstant_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackEffectPeriodicType PeriodicType;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 Length;
			int32 Delay;
			int32 Period;
			float magnitude;
			int32 Offset;
			int32 phase;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_phase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_magnitude;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Period;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PeriodicType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PeriodicType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase = { "phase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, phase), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude = { "magnitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, magnitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, Period), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType = { "PeriodicType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, PeriodicType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackEffectPeriodicType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_phase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_magnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_PeriodicType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectPeriodic", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectPeriodic_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics
	{
		struct SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			ESimpleControllerForceFeedbackDirectionType directionType;
			int32 directionX;
			int32 directionY;
			int32 directionZ;
			int32 Length;
			int32 Delay;
			float startLevel;
			float endLevel;
			int32 attackLength;
			float attackLevel;
			int32 fadeLength;
			float fadeLevel;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fadeLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fadeLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_attackLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_attackLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_endLevel;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startLevel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionZ;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionX;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directionType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel = { "fadeLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength = { "fadeLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, fadeLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel = { "attackLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength = { "attackLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, attackLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel = { "endLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, endLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel = { "startLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, startLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX = { "directionX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType = { "directionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, directionType), Z_Construct_UEnum_SimpleController_ESimpleControllerForceFeedbackDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_fadeLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_attackLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_endLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_startLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_directionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_successful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "createForceFeedbackEffectRamp", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventcreateForceFeedbackEffectRamp_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms
		{
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "destroyForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdestroyForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceAttachedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceAttachedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms
		{
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "deviceDetachedEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdeviceDetachedEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms
		{
			int32 directionalPadValue;
			ESimpleControllerDirectionalPad Direction;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, Direction), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectionalPad, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms, directionalPadValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::NewProp_directionalPadValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directinalPadValueToDirection", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectinalPadValueToDirection_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics
	{
		struct SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms
		{
			FString DeviceID;
			int32 directionalPadValue;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_directionalPadValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_directionalPadValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue = { "directionalPadValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, directionalPadValue), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_directionalPadValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "directionalPadEventDelegate", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventdirectionalPadEventDelegate_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms
		{
			FString DeviceID;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceID", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceID_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics
	{
		struct SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms
		{
			int32 deviceIndex;
			bool found;
			FSimpleControllerDevice ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms*)Obj)->found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "findControllerByDeviceIndex", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventfindControllerByDeviceIndex_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics
	{
		struct SimpleControllerBPLibrary_eventgetConnectedControllers_Parms
		{
			TArray<FSimpleControllerDevice> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetConnectedControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getConnectedControllers", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetConnectedControllers_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics
	{
		struct SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms
		{
			USimpleControllerBPLibrary* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms, ReturnValue), Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "getSimpleControllerTarget", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventgetSimpleControllerTarget_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics
	{
		struct SimpleControllerBPLibrary_eventinitController_Parms
		{
			float refreshRateButtonsAndAxis;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_refreshRateButtonsAndAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRateButtonsAndAxis = { "refreshRateButtonsAndAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinitController_Parms, refreshRateButtonsAndAxis), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::NewProp_refreshRateButtonsAndAxis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "initController", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventinitController_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_initController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_initController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics
	{
		struct SimpleControllerBPLibrary_eventinvertAxis_Parms
		{
			int32 deviceIndex;
			int32 axisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinvertAxis_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventinvertAxis_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "invertAxis", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventinvertAxis_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventloadMapping_Parms
		{
			ESimpleControllerDirectoryType directoryType;
			int32 deviceIndex;
			FString fileNameWithPath;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileNameWithPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileNameWithPath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventloadMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventloadMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath = { "fileNameWithPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, fileNameWithPath), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventloadMapping_Parms, directoryType), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_fileNameWithPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::NewProp_directoryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "loadMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventloadMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "OnButtonDownEvent", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventOnButtonDownEvent_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics
	{
		struct SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms
		{
			FString DeviceID;
			int32 buttonID;
			int32 deviceIndex;
			FSimpleControllerDevice device;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_device_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deviceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_device_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_device_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_device_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_deviceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms, deviceIndex), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_deviceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_deviceIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_buttonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms, buttonID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_buttonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_buttonID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_DeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms, DeviceID), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_DeviceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_buttonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::NewProp_DeviceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "OnButtonUpEvent", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventOnButtonUpEvent_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllAxisInverting", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllAxisInverting_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllAxisToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllAxisToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms
		{
			int32 deviceIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAllButtonsToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAllButtonsToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAxisInverting_Parms
		{
			int32 deviceIndex;
			int32 axisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_axisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_axisID = { "axisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisInverting_Parms, axisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisInverting_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_axisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAxisInverting", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAxisInverting_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms
		{
			int32 deviceIndex;
			int32 oldAxisID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldAxisID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_oldAxisID = { "oldAxisID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms, oldAxisID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_oldAxisID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetAxisToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetAxisToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms
		{
			int32 deviceIndex;
			int32 oldButtonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_oldButtonID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_oldButtonID = { "oldButtonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms, oldButtonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_oldButtonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::NewProp_deviceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "resetButtonToDefaultMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventresetButtonToDefaultMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics
	{
		struct SimpleControllerBPLibrary_eventrumble_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerDevice device;
			float strengthSmallMotor;
			float strengthLargeMotor;
			int32 lengthInMilliseconds;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lengthInMilliseconds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strengthLargeMotor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_strengthSmallMotor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds = { "lengthInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, lengthInMilliseconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor = { "strengthLargeMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthLargeMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor = { "strengthSmallMotor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, strengthSmallMotor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventrumble_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventrumble_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventrumble_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_lengthInMilliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthLargeMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_strengthSmallMotor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_device,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "rumble", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventrumble_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_rumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_rumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics
	{
		struct SimpleControllerBPLibrary_eventsaveMapping_Parms
		{
			ESimpleControllerDirectoryType directoryType;
			int32 deviceIndex;
			FString fileNameWithPath;
			bool createDirectory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_createDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_createDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fileNameWithPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_fileNameWithPath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_deviceIndex;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_directoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_directoryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsaveMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventsaveMapping_Parms*)Obj)->createDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory = { "createDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath = { "fileNameWithPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, fileNameWithPath), METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_deviceIndex = { "deviceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, deviceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType = { "directoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsaveMapping_Parms, directoryType), Z_Construct_UEnum_SimpleController_ESimpleControllerDirectoryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_createDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_fileNameWithPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_deviceIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::NewProp_directoryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "saveMapping", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventsaveMapping_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics
	{
		struct SimpleControllerBPLibrary_eventsimpleRumble_Parms
		{
			FSimpleControllerDevice device;
			int32 low_runble;
			int32 high_rumble;
			int32 Duration;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_high_rumble;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_low_runble;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_device;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsimpleRumble_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_high_rumble = { "high_rumble", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsimpleRumble_Parms, high_rumble), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_low_runble = { "low_runble", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsimpleRumble_Parms, low_runble), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_device = { "device", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventsimpleRumble_Parms, device), Z_Construct_UScriptStruct_FSimpleControllerDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_high_rumble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_low_runble,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::NewProp_device,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "simpleRumble", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventsimpleRumble_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "stopController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_stopController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_stopController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics
	{
		struct SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms
		{
			bool successful;
			FString errorMessage;
			FSimpleControllerForceFeedbackEffect ForceFeedbackEffect;
			int32 iterations;
			FSimpleControllerForceFeedbackEffect ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iterations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_successful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_successful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, ReturnValue), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations = { "iterations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, iterations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, ForceFeedbackEffect), Z_Construct_UScriptStruct_FSimpleControllerForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms, errorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit(void* Obj)
	{
		((SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms*)Obj)->successful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful = { "successful", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_errorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::NewProp_successful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleControllerBPLibrary, nullptr, "uploadAndRunForceFeedbackEffect", nullptr, nullptr, sizeof(SimpleControllerBPLibrary_eventuploadAndRunForceFeedbackEffect_Parms), Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary_NoRegister()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USimpleControllerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ondeviceDetachedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceDetachedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ondeviceAttachedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ondeviceAttachedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onaxisMovedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onaxisMovedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onBallMovedEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onBallMovedEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onDirectionalPadEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onDirectionalPadEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onButtonUpEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonUpEventDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onButtonDownEventDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onButtonDownEventDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleControllerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_axisMovedEventDelegate, "axisMovedEventDelegate" }, // 3047957728
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, "axisMovedEventDelegate__DelegateSignature" }, // 101476683
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_ballMovedEventDelegate, "ballMovedEventDelegate" }, // 3815248000
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, "ballMovedEventDelegate__DelegateSignature" }, // 1684617840
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceForceFeedbackInfo, "breakDeviceForceFeedbackInfo" }, // 3218270446
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakDeviceInfo, "breakDeviceInfo" }, // 2135805661
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_breakForceFeedbackEffect, "breakForceFeedbackEffect" }, // 2760552141
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonDownEventDelegate, "buttonDownEventDelegate" }, // 3803532433
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, "buttonDownEventDelegate__DelegateSignature" }, // 2659625771
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonIDToButton, "buttonIDToButton" }, // 4287775671
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_buttonUpEventDelegate, "buttonUpEventDelegate" }, // 84566813
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, "buttonUpEventDelegate__DelegateSignature" }, // 2691017448
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_changeAxisMapping, "changeAxisMapping" }, // 1395909471
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_changeButtonMapping, "changeButtonMapping" }, // 4139919878
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectCondition, "createForceFeedbackEffectCondition" }, // 2705547822
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectConstant, "createForceFeedbackEffectConstant" }, // 4283370298
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectPeriodic, "createForceFeedbackEffectPeriodic" }, // 1299894079
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_createForceFeedbackEffectRamp, "createForceFeedbackEffectRamp" }, // 2431955126
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_destroyForceFeedbackEffect, "destroyForceFeedbackEffect" }, // 1581192126
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate, "deviceAttachedEventDelegate" }, // 2215279372
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, "deviceAttachedEventDelegate__DelegateSignature" }, // 555736324
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate, "deviceDetachedEventDelegate" }, // 1961619043
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, "deviceDetachedEventDelegate__DelegateSignature" }, // 2029011155
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directinalPadValueToDirection, "directinalPadValueToDirection" }, // 1034878788
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_directionalPadEventDelegate, "directionalPadEventDelegate" }, // 2812186431
		{ &Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, "directionalPadEventDelegate__DelegateSignature" }, // 2214093604
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceID, "findControllerByDeviceID" }, // 1653293525
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_findControllerByDeviceIndex, "findControllerByDeviceIndex" }, // 3471460891
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getConnectedControllers, "getConnectedControllers" }, // 1150006920
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_getSimpleControllerTarget, "getSimpleControllerTarget" }, // 3982227608
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_initController, "initController" }, // 2826222123
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_invertAxis, "invertAxis" }, // 3593343723
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_loadMapping, "loadMapping" }, // 3763852079
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonDownEvent, "OnButtonDownEvent" }, // 3063133503
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_OnButtonUpEvent, "OnButtonUpEvent" }, // 2630158283
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisInverting, "resetAllAxisInverting" }, // 2938721913
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllAxisToDefaultMapping, "resetAllAxisToDefaultMapping" }, // 2141502564
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAllButtonsToDefaultMapping, "resetAllButtonsToDefaultMapping" }, // 3360014010
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisInverting, "resetAxisInverting" }, // 2859177490
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetAxisToDefaultMapping, "resetAxisToDefaultMapping" }, // 1192786931
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_resetButtonToDefaultMapping, "resetButtonToDefaultMapping" }, // 406882193
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_rumble, "rumble" }, // 3506751266
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_saveMapping, "saveMapping" }, // 873389504
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_simpleRumble, "simpleRumble" }, // 2831447867
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_stopController, "stopController" }, // 3869087925
		{ &Z_Construct_UFunction_USimpleControllerBPLibrary_uploadAndRunForceFeedbackEffect, "uploadAndRunForceFeedbackEffect" }, // 2113579871
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SimpleControllerBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate = { "ondeviceDetachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceDetachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceDetachedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate = { "ondeviceAttachedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, ondeviceAttachedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_deviceAttachedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate = { "onaxisMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onaxisMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_axisMovedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate = { "onBallMovedEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onBallMovedEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_ballMovedEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate = { "onDirectionalPadEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onDirectionalPadEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_directionalPadEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate = { "onButtonUpEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonUpEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonUpEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SimpleControllerBPLibrary" },
		{ "ModuleRelativePath", "Public/SimpleControllerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate = { "onButtonDownEventDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USimpleControllerBPLibrary, onButtonDownEventDelegate), Z_Construct_UDelegateFunction_USimpleControllerBPLibrary_buttonDownEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceDetachedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_ondeviceAttachedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onaxisMovedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onBallMovedEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onDirectionalPadEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonUpEventDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleControllerBPLibrary_Statics::NewProp_onButtonDownEventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleControllerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleControllerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams = {
		&USimpleControllerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleControllerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleControllerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleControllerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleControllerBPLibrary, 1198450613);
	template<> SIMPLECONTROLLER_API UClass* StaticClass<USimpleControllerBPLibrary>()
	{
		return USimpleControllerBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleControllerBPLibrary(Z_Construct_UClass_USimpleControllerBPLibrary, &USimpleControllerBPLibrary::StaticClass, TEXT("/Script/SimpleController"), TEXT("USimpleControllerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleControllerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
