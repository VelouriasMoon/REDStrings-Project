// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SASCableAnim/Public/SCAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCAnimInstance() {}
// Cross Module References
	SASCABLEANIM_API UClass* Z_Construct_UClass_USCAnimInstance_NoRegister();
	SASCABLEANIM_API UClass* Z_Construct_UClass_USCAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_SASCableAnim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SASCABLEANIM_API UClass* Z_Construct_UClass_USCAnimationDataAsset_NoRegister();
	SASCABLEANIM_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimParts();
// End Cross Module References
	DEFINE_FUNCTION(USCAnimInstance::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCAnimInstance::execSaveToBeforeFrameSocketLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveToBeforeFrameSocketLocations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCAnimInstance::execSetSASCodeSocketWorldLocations)
	{
		P_GET_TMAP_REF(FName,FTransform,Z_Param_Out_locations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSASCodeSocketWorldLocations(Z_Param_Out_locations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USCAnimInstance::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void USCAnimInstance::StaticRegisterNativesUSCAnimInstance()
	{
		UClass* Class = USCAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &USCAnimInstance::execInit },
			{ "SaveToBeforeFrameSocketLocations", &USCAnimInstance::execSaveToBeforeFrameSocketLocations },
			{ "SetSASCodeSocketWorldLocations", &USCAnimInstance::execSetSASCodeSocketWorldLocations },
			{ "Update", &USCAnimInstance::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USCAnimInstance_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCAnimInstance_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCAnimInstance_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCAnimInstance, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCAnimInstance_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCAnimInstance_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCAnimInstance_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCAnimInstance, nullptr, "SaveToBeforeFrameSocketLocations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics
	{
		struct SCAnimInstance_eventSetSASCodeSocketWorldLocations_Parms
		{
			TMap<FName,FTransform> locations;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_locations;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_locations_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locations_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations = { "locations", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCAnimInstance_eventSetSASCodeSocketWorldLocations_Parms, locations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_Key_KeyProp = { "locations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_ValueProp = { "locations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::NewProp_locations_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCAnimInstance, nullptr, "SetSASCodeSocketWorldLocations", nullptr, nullptr, sizeof(SCAnimInstance_eventSetSASCodeSocketWorldLocations_Parms), Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USCAnimInstance_Update_Statics
	{
		struct SCAnimInstance_eventUpdate_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USCAnimInstance_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SCAnimInstance_eventUpdate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USCAnimInstance_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USCAnimInstance_Update_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USCAnimInstance_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USCAnimInstance_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USCAnimInstance, nullptr, "Update", nullptr, nullptr, sizeof(SCAnimInstance_eventUpdate_Parms), Z_Construct_UFunction_USCAnimInstance_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USCAnimInstance_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USCAnimInstance_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USCAnimInstance_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USCAnimInstance_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USCAnimInstance_NoRegister()
	{
		return USCAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USCAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animDataAsset__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_animDataAsset_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_physicsIdlingSec__MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_physicsIdlingSec_;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneAnimPartsArray__MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneAnimPartsArray_;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boneAnimPartsArray__Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SASCodeSocketWorldLocations__MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SASCodeSocketWorldLocations_;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SASCodeSocketWorldLocations__Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SASCodeSocketWorldLocations__ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SASCableAnim,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USCAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USCAnimInstance_Init, "Init" }, // 3988518536
		{ &Z_Construct_UFunction_USCAnimInstance_SaveToBeforeFrameSocketLocations, "SaveToBeforeFrameSocketLocations" }, // 4006899145
		{ &Z_Construct_UFunction_USCAnimInstance_SetSASCodeSocketWorldLocations, "SetSASCodeSocketWorldLocations" }, // 3965266463
		{ &Z_Construct_UFunction_USCAnimInstance_Update, "Update" }, // 1553828153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "SCAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCAnimInstance_Statics::NewProp_animDataAsset__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCAnimInstance" },
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_animDataAsset_ = { "animDataAsset_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCAnimInstance, animDataAsset_), Z_Construct_UClass_USCAnimationDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_animDataAsset__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_animDataAsset__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCAnimInstance_Statics::NewProp_physicsIdlingSec__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCAnimInstance" },
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_physicsIdlingSec_ = { "physicsIdlingSec_", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCAnimInstance, physicsIdlingSec_), METADATA_PARAMS(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_physicsIdlingSec__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_physicsIdlingSec__MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCAnimInstance" },
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray_ = { "boneAnimPartsArray_", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCAnimInstance, boneAnimPartsArray_), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray__MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray__Inner = { "boneAnimPartsArray_", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneAnimParts, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SCAnimInstance" },
		{ "ModuleRelativePath", "Public/SCAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations_ = { "SASCodeSocketWorldLocations_", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCAnimInstance, SASCodeSocketWorldLocations_), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__Key_KeyProp = { "SASCodeSocketWorldLocations__Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__ValueProp = { "SASCodeSocketWorldLocations_", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_animDataAsset_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_physicsIdlingSec_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_boneAnimPartsArray__Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations_,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCAnimInstance_Statics::NewProp_SASCodeSocketWorldLocations__ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USCAnimInstance_Statics::ClassParams = {
		&USCAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USCAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USCAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USCAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USCAnimInstance, 1249929420);
	template<> SASCABLEANIM_API UClass* StaticClass<USCAnimInstance>()
	{
		return USCAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USCAnimInstance(Z_Construct_UClass_USCAnimInstance, &USCAnimInstance::StaticClass, TEXT("/Script/SASCableAnim"), TEXT("USCAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
