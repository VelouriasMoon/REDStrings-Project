// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMTransitionNodeInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMTransitionNodeInterface() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNodeInterface_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNodeInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMTransitionNode_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASTransition_Base_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IASSMTransitionNodeInterface::execMakeRulesShareable)
	{
		P_GET_OBJECT(UASSMTransitionNode,Z_Param_Caller);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Remap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MakeRulesShareable_Implementation(Z_Param_Caller,Z_Param_Out_Remap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IASSMTransitionNodeInterface::execPropagateRulesSettings)
	{
		P_GET_OBJECT(UASSMTransitionNode,Z_Param_Caller);
		P_GET_PROPERTY(FIntProperty,Z_Param_SharedRulesIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PropagateRulesSettings_Implementation(Z_Param_Caller,Z_Param_SharedRulesIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IASSMTransitionNodeInterface::execTransferSharedCustomRules)
	{
		P_GET_OBJECT(UASSMTransitionNode,Z_Param_Caller);
		P_GET_OBJECT(UASTransition_Base,Z_Param_Custom);
		P_GET_PROPERTY(FIntProperty,Z_Param_SharedRulesIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransferSharedCustomRules_Implementation(Z_Param_Caller,Z_Param_Custom,Z_Param_SharedRulesIdx);
		P_NATIVE_END;
	}
	void IASSMTransitionNodeInterface::MakeRulesShareable(UASSMTransitionNode* Caller, TArray<int32>& Remap)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MakeRulesShareable instead.");
	}
	void IASSMTransitionNodeInterface::PropagateRulesSettings(UASSMTransitionNode* Caller, int32 SharedRulesIdx)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PropagateRulesSettings instead.");
	}
	bool IASSMTransitionNodeInterface::TransferSharedCustomRules(UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TransferSharedCustomRules instead.");
		ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms Parms;
		return Parms.ReturnValue;
	}
	void UASSMTransitionNodeInterface::StaticRegisterNativesUASSMTransitionNodeInterface()
	{
		UClass* Class = UASSMTransitionNodeInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeRulesShareable", &IASSMTransitionNodeInterface::execMakeRulesShareable },
			{ "PropagateRulesSettings", &IASSMTransitionNodeInterface::execPropagateRulesSettings },
			{ "TransferSharedCustomRules", &IASSMTransitionNodeInterface::execTransferSharedCustomRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Remap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Remap_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Remap = { "Remap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventMakeRulesShareable_Parms, Remap), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Remap_Inner = { "Remap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventMakeRulesShareable_Parms, Caller), Z_Construct_UClass_UASSMTransitionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Remap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Remap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMTransitionNodeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMTransitionNodeInterface, nullptr, "MakeRulesShareable", nullptr, nullptr, sizeof(ASSMTransitionNodeInterface_eventMakeRulesShareable_Parms), Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SharedRulesIdx;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::NewProp_SharedRulesIdx = { "SharedRulesIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventPropagateRulesSettings_Parms, SharedRulesIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventPropagateRulesSettings_Parms, Caller), Z_Construct_UClass_UASSMTransitionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::NewProp_SharedRulesIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMTransitionNodeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMTransitionNodeInterface, nullptr, "PropagateRulesSettings", nullptr, nullptr, sizeof(ASSMTransitionNodeInterface_eventPropagateRulesSettings_Parms), Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SharedRulesIdx;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Custom;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms), &Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_SharedRulesIdx = { "SharedRulesIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms, SharedRulesIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_Custom = { "Custom", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms, Custom), Z_Construct_UClass_UASTransition_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms, Caller), Z_Construct_UClass_UASSMTransitionNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_SharedRulesIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_Custom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMTransitionNodeInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMTransitionNodeInterface, nullptr, "TransferSharedCustomRules", nullptr, nullptr, sizeof(ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms), Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASSMTransitionNodeInterface_NoRegister()
	{
		return UASSMTransitionNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UASSMTransitionNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASSMTransitionNodeInterface_MakeRulesShareable, "MakeRulesShareable" }, // 1118821771
		{ &Z_Construct_UFunction_UASSMTransitionNodeInterface_PropagateRulesSettings, "PropagateRulesSettings" }, // 3975787258
		{ &Z_Construct_UFunction_UASSMTransitionNodeInterface_TransferSharedCustomRules, "TransferSharedCustomRules" }, // 2018964564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMTransitionNodeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IASSMTransitionNodeInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::ClassParams = {
		&UASSMTransitionNodeInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMTransitionNodeInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMTransitionNodeInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMTransitionNodeInterface, 2427628866);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMTransitionNodeInterface>()
	{
		return UASSMTransitionNodeInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMTransitionNodeInterface(Z_Construct_UClass_UASSMTransitionNodeInterface, &UASSMTransitionNodeInterface::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMTransitionNodeInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMTransitionNodeInterface);
	static FName NAME_UASSMTransitionNodeInterface_MakeRulesShareable = FName(TEXT("MakeRulesShareable"));
	void IASSMTransitionNodeInterface::Execute_MakeRulesShareable(UObject* O, UASSMTransitionNode* Caller, TArray<int32>& Remap)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMTransitionNodeInterface::StaticClass()));
		ASSMTransitionNodeInterface_eventMakeRulesShareable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMTransitionNodeInterface_MakeRulesShareable);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.Remap=Remap;
			O->ProcessEvent(Func, &Parms);
			Remap=Parms.Remap;
		}
		else if (auto I = (IASSMTransitionNodeInterface*)(O->GetNativeInterfaceAddress(UASSMTransitionNodeInterface::StaticClass())))
		{
			I->MakeRulesShareable_Implementation(Caller,Remap);
		}
	}
	static FName NAME_UASSMTransitionNodeInterface_PropagateRulesSettings = FName(TEXT("PropagateRulesSettings"));
	void IASSMTransitionNodeInterface::Execute_PropagateRulesSettings(UObject* O, UASSMTransitionNode* Caller, int32 SharedRulesIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMTransitionNodeInterface::StaticClass()));
		ASSMTransitionNodeInterface_eventPropagateRulesSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMTransitionNodeInterface_PropagateRulesSettings);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.SharedRulesIdx=SharedRulesIdx;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IASSMTransitionNodeInterface*)(O->GetNativeInterfaceAddress(UASSMTransitionNodeInterface::StaticClass())))
		{
			I->PropagateRulesSettings_Implementation(Caller,SharedRulesIdx);
		}
	}
	static FName NAME_UASSMTransitionNodeInterface_TransferSharedCustomRules = FName(TEXT("TransferSharedCustomRules"));
	bool IASSMTransitionNodeInterface::Execute_TransferSharedCustomRules(UObject* O, UASSMTransitionNode* Caller, UASTransition_Base* Custom, int32 SharedRulesIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMTransitionNodeInterface::StaticClass()));
		ASSMTransitionNodeInterface_eventTransferSharedCustomRules_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMTransitionNodeInterface_TransferSharedCustomRules);
		if (Func)
		{
			Parms.Caller=Caller;
			Parms.Custom=Custom;
			Parms.SharedRulesIdx=SharedRulesIdx;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IASSMTransitionNodeInterface*)(O->GetNativeInterfaceAddress(UASSMTransitionNodeInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TransferSharedCustomRules_Implementation(Caller,Custom,SharedRulesIdx);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
