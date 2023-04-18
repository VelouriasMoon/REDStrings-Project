// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASSMStateMachineInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASSMStateMachineInterface() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateMachineInterface_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASSMStateMachineInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
// End Cross Module References
	void IASSMStateMachineInterface::AddResetSecondRate()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddResetSecondRate instead.");
	}
	bool IASSMStateMachineInterface::GetAndUpdateContinuousSameDamageReaction()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAndUpdateContinuousSameDamageReaction instead.");
		ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IASSMStateMachineInterface::IsNeedResetStateMachine(float ElapsedTime, float ResetSecond)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsNeedResetStateMachine instead.");
		ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms Parms;
		return Parms.ReturnValue;
	}
	void IASSMStateMachineInterface::UpdatePreviousElapsedTime(float ElapsedTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePreviousElapsedTime instead.");
	}
	void UASSMStateMachineInterface::StaticRegisterNativesUASSMStateMachineInterface()
	{
	}
	struct Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMStateMachineInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMStateMachineInterface, nullptr, "AddResetSecondRate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms), &Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMStateMachineInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMStateMachineInterface, nullptr, "GetAndUpdateContinuousSameDamageReaction", nullptr, nullptr, sizeof(ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms), Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetSecond;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms), &Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ResetSecond = { "ResetSecond", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms, ResetSecond), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms, ElapsedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ResetSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::NewProp_ElapsedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMStateMachineInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMStateMachineInterface, nullptr, "IsNeedResetStateMachine", nullptr, nullptr, sizeof(ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms), Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSMStateMachineInterface_eventUpdatePreviousElapsedTime_Parms, ElapsedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::NewProp_ElapsedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASSMStateMachineInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASSMStateMachineInterface, nullptr, "UpdatePreviousElapsedTime", nullptr, nullptr, sizeof(ASSMStateMachineInterface_eventUpdatePreviousElapsedTime_Parms), Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASSMStateMachineInterface_NoRegister()
	{
		return UASSMStateMachineInterface::StaticClass();
	}
	struct Z_Construct_UClass_UASSMStateMachineInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASSMStateMachineInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASSMStateMachineInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASSMStateMachineInterface_AddResetSecondRate, "AddResetSecondRate" }, // 2425247498
		{ &Z_Construct_UFunction_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction, "GetAndUpdateContinuousSameDamageReaction" }, // 2734279448
		{ &Z_Construct_UFunction_UASSMStateMachineInterface_IsNeedResetStateMachine, "IsNeedResetStateMachine" }, // 1882962815
		{ &Z_Construct_UFunction_UASSMStateMachineInterface_UpdatePreviousElapsedTime, "UpdatePreviousElapsedTime" }, // 1079500899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASSMStateMachineInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASSMStateMachineInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASSMStateMachineInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IASSMStateMachineInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASSMStateMachineInterface_Statics::ClassParams = {
		&UASSMStateMachineInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UASSMStateMachineInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASSMStateMachineInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASSMStateMachineInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASSMStateMachineInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASSMStateMachineInterface, 3142274401);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASSMStateMachineInterface>()
	{
		return UASSMStateMachineInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASSMStateMachineInterface(Z_Construct_UClass_UASSMStateMachineInterface, &UASSMStateMachineInterface::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASSMStateMachineInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASSMStateMachineInterface);
	static FName NAME_UASSMStateMachineInterface_AddResetSecondRate = FName(TEXT("AddResetSecondRate"));
	void IASSMStateMachineInterface::Execute_AddResetSecondRate(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMStateMachineInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UASSMStateMachineInterface_AddResetSecondRate);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction = FName(TEXT("GetAndUpdateContinuousSameDamageReaction"));
	bool IASSMStateMachineInterface::Execute_GetAndUpdateContinuousSameDamageReaction(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMStateMachineInterface::StaticClass()));
		ASSMStateMachineInterface_eventGetAndUpdateContinuousSameDamageReaction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMStateMachineInterface_GetAndUpdateContinuousSameDamageReaction);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UASSMStateMachineInterface_IsNeedResetStateMachine = FName(TEXT("IsNeedResetStateMachine"));
	bool IASSMStateMachineInterface::Execute_IsNeedResetStateMachine(UObject* O, float ElapsedTime, float ResetSecond)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMStateMachineInterface::StaticClass()));
		ASSMStateMachineInterface_eventIsNeedResetStateMachine_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMStateMachineInterface_IsNeedResetStateMachine);
		if (Func)
		{
			Parms.ElapsedTime=ElapsedTime;
			Parms.ResetSecond=ResetSecond;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UASSMStateMachineInterface_UpdatePreviousElapsedTime = FName(TEXT("UpdatePreviousElapsedTime"));
	void IASSMStateMachineInterface::Execute_UpdatePreviousElapsedTime(UObject* O, float ElapsedTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASSMStateMachineInterface::StaticClass()));
		ASSMStateMachineInterface_eventUpdatePreviousElapsedTime_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASSMStateMachineInterface_UpdatePreviousElapsedTime);
		if (Func)
		{
			Parms.ElapsedTime=ElapsedTime;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
