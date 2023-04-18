// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleController/Public/SimpleControllerDevice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleControllerDevice() {}
// Cross Module References
	SIMPLECONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice();
	UPackage* Z_Construct_UPackage__Script_SimpleController();
// End Cross Module References
class UScriptStruct* FSimpleControllerDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLECONTROLLER_API uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleControllerDevice, Z_Construct_UPackage__Script_SimpleController(), TEXT("SimpleControllerDevice"), sizeof(FSimpleControllerDevice), Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash());
	}
	return Singleton;
}
template<> SIMPLECONTROLLER_API UScriptStruct* StaticStruct<FSimpleControllerDevice>()
{
	return FSimpleControllerDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleControllerDevice(FSimpleControllerDevice::StaticStruct, TEXT("/Script/SimpleController"), TEXT("SimpleControllerDevice"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice
{
	FScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleControllerDevice")),new UScriptStruct::TCppStructOps<FSimpleControllerDevice>);
	}
} ScriptStruct_SimpleController_StaticRegisterNativesFSimpleControllerDevice;
	struct Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleControllerDevice.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleControllerDevice>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleController,
		nullptr,
		&NewStructOps,
		"SimpleControllerDevice",
		sizeof(FSimpleControllerDevice),
		alignof(FSimpleControllerDevice),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleControllerDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleController();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleControllerDevice"), sizeof(FSimpleControllerDevice), Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleControllerDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleControllerDevice_Hash() { return 1557419213U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
