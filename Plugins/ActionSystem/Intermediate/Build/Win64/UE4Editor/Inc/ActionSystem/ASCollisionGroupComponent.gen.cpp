// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASCollisionGroupComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCollisionGroupComponent() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionGroupComponent_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionGroupComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UASCollisionGroupComponent::execOnAttackBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackBeginOverlap(Z_Param_MyComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCollisionGroupComponent::execOnAttackEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackEndOverlap(Z_Param_MyComp,Z_Param_OtherActor,Z_Param_OtherComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCollisionGroupComponent::execSetActiveCollision)
	{
		P_GET_UBOOL(Z_Param_Active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveCollision(Z_Param_Active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCollisionGroupComponent::execStartAttack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_hitCount);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HitInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAttack(Z_Param_hitCount,Z_Param_HitInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UASCollisionGroupComponent::execStopAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAttack();
		P_NATIVE_END;
	}
	void UASCollisionGroupComponent::StaticRegisterNativesUASCollisionGroupComponent()
	{
		UClass* Class = UASCollisionGroupComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackBeginOverlap", &UASCollisionGroupComponent::execOnAttackBeginOverlap },
			{ "OnAttackEndOverlap", &UASCollisionGroupComponent::execOnAttackEndOverlap },
			{ "SetActiveCollision", &UASCollisionGroupComponent::execSetActiveCollision },
			{ "StartAttack", &UASCollisionGroupComponent::execStartAttack },
			{ "StopAttack", &UASCollisionGroupComponent::execStopAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics
	{
		struct ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionGroupComponent, nullptr, "OnAttackBeginOverlap", nullptr, nullptr, sizeof(ASCollisionGroupComponent_eventOnAttackBeginOverlap_Parms), Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics
	{
		struct ASCollisionGroupComponent_eventOnAttackEndOverlap_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventOnAttackEndOverlap_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionGroupComponent, nullptr, "OnAttackEndOverlap", nullptr, nullptr, sizeof(ASCollisionGroupComponent_eventOnAttackEndOverlap_Parms), Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics
	{
		struct ASCollisionGroupComponent_eventSetActiveCollision_Parms
		{
			bool Active;
		};
		static void NewProp_Active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((ASCollisionGroupComponent_eventSetActiveCollision_Parms*)Obj)->Active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCollisionGroupComponent_eventSetActiveCollision_Parms), &Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::NewProp_Active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::NewProp_Active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionGroupComponent, nullptr, "SetActiveCollision", nullptr, nullptr, sizeof(ASCollisionGroupComponent_eventSetActiveCollision_Parms), Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics
	{
		struct ASCollisionGroupComponent_eventStartAttack_Parms
		{
			int32 hitCount;
			float HitInterval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitInterval;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_hitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::NewProp_HitInterval = { "HitInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventStartAttack_Parms, HitInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::NewProp_hitCount = { "hitCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionGroupComponent_eventStartAttack_Parms, hitCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::NewProp_HitInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::NewProp_hitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionGroupComponent, nullptr, "StartAttack", nullptr, nullptr, sizeof(ASCollisionGroupComponent_eventStartAttack_Parms), Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionGroupComponent, nullptr, "StopAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASCollisionGroupComponent_NoRegister()
	{
		return UASCollisionGroupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UASCollisionGroupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASCollisionGroupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASCollisionGroupComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackBeginOverlap, "OnAttackBeginOverlap" }, // 341914481
		{ &Z_Construct_UFunction_UASCollisionGroupComponent_OnAttackEndOverlap, "OnAttackEndOverlap" }, // 4254156793
		{ &Z_Construct_UFunction_UASCollisionGroupComponent_SetActiveCollision, "SetActiveCollision" }, // 812648396
		{ &Z_Construct_UFunction_UASCollisionGroupComponent_StartAttack, "StartAttack" }, // 4022493955
		{ &Z_Construct_UFunction_UASCollisionGroupComponent_StopAttack, "StopAttack" }, // 4228965621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASCollisionGroupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ASCollisionGroupComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASCollisionGroupComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASCollisionGroupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UASCollisionGroupComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASCollisionGroupComponent_Statics::ClassParams = {
		&UASCollisionGroupComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UASCollisionGroupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASCollisionGroupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASCollisionGroupComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASCollisionGroupComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASCollisionGroupComponent, 3538606083);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASCollisionGroupComponent>()
	{
		return UASCollisionGroupComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASCollisionGroupComponent(Z_Construct_UClass_UASCollisionGroupComponent, &UASCollisionGroupComponent::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASCollisionGroupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASCollisionGroupComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
