// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASState_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASState_BlueprintBase() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASState_BlueprintBase_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASState_BlueprintBase();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASState_Base();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UASState_BlueprintBase::execGetAnimTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASState_BlueprintBase::execGetAnimTimeLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimTimeLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASState_BlueprintBase::execSetBlendSpaceInput)
	{
		P_GET_STRUCT(FVector,Z_Param_NewBlendInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendSpaceInput(Z_Param_NewBlendInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASState_BlueprintBase::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_NewRate);
		P_NATIVE_END;
	}
	static FName NAME_UASState_BlueprintBase_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
	void UASState_BlueprintBase::ReceiveBeginPlay(UAnimInstance* AnimInstance)
	{
		ASState_BlueprintBase_eventReceiveBeginPlay_Parms Parms;
		Parms.AnimInstance=AnimInstance;
		ProcessEvent(FindFunctionChecked(NAME_UASState_BlueprintBase_ReceiveBeginPlay),&Parms);
	}
	static FName NAME_UASState_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UASState_BlueprintBase::ReceiveTick(float DeltaTime, UAnimInstance* AnimInstance)
	{
		ASState_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.AnimInstance=AnimInstance;
		ProcessEvent(FindFunctionChecked(NAME_UASState_BlueprintBase_ReceiveTick),&Parms);
	}
	void UASState_BlueprintBase::StaticRegisterNativesUASState_BlueprintBase()
	{
		UClass* Class = UASState_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimTime", &UASState_BlueprintBase::execGetAnimTime },
			{ "GetAnimTimeLength", &UASState_BlueprintBase::execGetAnimTimeLength },
			{ "SetBlendSpaceInput", &UASState_BlueprintBase::execSetBlendSpaceInput },
			{ "SetPlayRate", &UASState_BlueprintBase::execSetPlayRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics
	{
		struct ASState_BlueprintBase_eventGetAnimTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventGetAnimTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "GetAnimTime", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventGetAnimTime_Parms), Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics
	{
		struct ASState_BlueprintBase_eventGetAnimTimeLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventGetAnimTimeLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "GetAnimTimeLength", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventGetAnimTimeLength_Parms), Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventReceiveBeginPlay_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "ReceiveBeginPlay", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventReceiveBeginPlay_Parms), Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventReceiveTick_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::NewProp_AnimInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventReceiveTick_Parms), Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics
	{
		struct ASState_BlueprintBase_eventSetBlendSpaceInput_Parms
		{
			FVector NewBlendInput;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBlendInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::NewProp_NewBlendInput = { "NewBlendInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventSetBlendSpaceInput_Parms, NewBlendInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::NewProp_NewBlendInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "SetBlendSpaceInput", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventSetBlendSpaceInput_Parms), Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics
	{
		struct ASState_BlueprintBase_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASState_BlueprintBase_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASState_BlueprintBase, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(ASState_BlueprintBase_eventSetPlayRate_Parms), Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASState_BlueprintBase_NoRegister()
	{
		return UASState_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UASState_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASState_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UASState_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASState_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTime, "GetAnimTime" }, // 765314904
		{ &Z_Construct_UFunction_UASState_BlueprintBase_GetAnimTimeLength, "GetAnimTimeLength" }, // 869935863
		{ &Z_Construct_UFunction_UASState_BlueprintBase_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 441828845
		{ &Z_Construct_UFunction_UASState_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 316937536
		{ &Z_Construct_UFunction_UASState_BlueprintBase_SetBlendSpaceInput, "SetBlendSpaceInput" }, // 3850593601
		{ &Z_Construct_UFunction_UASState_BlueprintBase_SetPlayRate, "SetPlayRate" }, // 3616639889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASState_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ASState_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASState_BlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASState_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASState_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASState_BlueprintBase_Statics::ClassParams = {
		&UASState_BlueprintBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASState_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASState_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASState_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASState_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASState_BlueprintBase, 3684279255);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASState_BlueprintBase>()
	{
		return UASState_BlueprintBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASState_BlueprintBase(Z_Construct_UClass_UASState_BlueprintBase, &UASState_BlueprintBase::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASState_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASState_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
