// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCharacter() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacter_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacter();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_AASCharacterBase();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ACTIONSYSTEM_API UEnum* Z_Construct_UEnum_ActionSystem_EDamageState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ACTIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FASTakeHitInfo();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AASCharacter::execClientNotifyHit)
	{
		P_GET_OBJECT(AASCharacter,Z_Param_OtherCharacter);
		P_GET_STRUCT(FHitResult,Z_Param_Impact);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShotDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientNotifyHit_Validate(Z_Param_OtherCharacter,Z_Param_Impact,Z_Param_DamageTypeClass,Z_Param_Damage,Z_Param_ShotDirection))
		{
			RPC_ValidateFailed(TEXT("ClientNotifyHit_Validate"));
			return;
		}
		P_THIS->ClientNotifyHit_Implementation(Z_Param_OtherCharacter,Z_Param_Impact,Z_Param_DamageTypeClass,Z_Param_Damage,Z_Param_ShotDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execClientTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FDamageEvent,Z_Param_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientTakeDamage_Validate(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("ClientTakeDamage_Validate"));
			return;
		}
		P_THIS->ClientTakeDamage_Implementation(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execClientTakePointDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FPointDamageEvent,Z_Param_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientTakePointDamage_Validate(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("ClientTakePointDamage_Validate"));
			return;
		}
		P_THIS->ClientTakePointDamage_Implementation(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execJumpDamageState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpDamageState(EDamageState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execOnAttackOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnAttackOverlap(Z_Param_MyComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execOnRep_LastTakeHitInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LastTakeHitInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execServerNotifyHit)
	{
		P_GET_OBJECT(AASCharacter,Z_Param_OtherCharacter);
		P_GET_STRUCT(FHitResult,Z_Param_Impact);
		P_GET_OBJECT(UClass,Z_Param_DamageTypeClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_ShotDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyHit_Validate(Z_Param_OtherCharacter,Z_Param_Impact,Z_Param_DamageTypeClass,Z_Param_Damage,Z_Param_ShotDirection))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyHit_Validate"));
			return;
		}
		P_THIS->ServerNotifyHit_Implementation(Z_Param_OtherCharacter,Z_Param_Impact,Z_Param_DamageTypeClass,Z_Param_Damage,Z_Param_ShotDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execServerTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FDamageEvent,Z_Param_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTakeDamage_Validate(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("ServerTakeDamage_Validate"));
			return;
		}
		P_THIS->ServerTakeDamage_Implementation(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASCharacter::execServerTakePointDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_STRUCT(FPointDamageEvent,Z_Param_DamageEvent);
		P_GET_OBJECT(AController,Z_Param_EventInstigator);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerTakePointDamage_Validate(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("ServerTakePointDamage_Validate"));
			return;
		}
		P_THIS->ServerTakePointDamage_Implementation(Z_Param_Damage,Z_Param_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	static FName NAME_AASCharacter_ClientNotifyHit = FName(TEXT("ClientNotifyHit"));
	void AASCharacter::ClientNotifyHit(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection)
	{
		ASCharacter_eventClientNotifyHit_Parms Parms;
		Parms.OtherCharacter=OtherCharacter;
		Parms.Impact=Impact;
		Parms.DamageTypeClass=DamageTypeClass;
		Parms.Damage=Damage;
		Parms.ShotDirection=ShotDirection;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ClientNotifyHit),&Parms);
	}
	static FName NAME_AASCharacter_ClientTakeDamage = FName(TEXT("ClientTakeDamage"));
	void AASCharacter::ClientTakeDamage(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		ASCharacter_eventClientTakeDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageEvent=DamageEvent;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ClientTakeDamage),&Parms);
	}
	static FName NAME_AASCharacter_ClientTakePointDamage = FName(TEXT("ClientTakePointDamage"));
	void AASCharacter::ClientTakePointDamage(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		ASCharacter_eventClientTakePointDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageEvent=DamageEvent;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ClientTakePointDamage),&Parms);
	}
	static FName NAME_AASCharacter_ServerNotifyHit = FName(TEXT("ServerNotifyHit"));
	void AASCharacter::ServerNotifyHit(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection)
	{
		ASCharacter_eventServerNotifyHit_Parms Parms;
		Parms.OtherCharacter=OtherCharacter;
		Parms.Impact=Impact;
		Parms.DamageTypeClass=DamageTypeClass;
		Parms.Damage=Damage;
		Parms.ShotDirection=ShotDirection;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ServerNotifyHit),&Parms);
	}
	static FName NAME_AASCharacter_ServerTakeDamage = FName(TEXT("ServerTakeDamage"));
	void AASCharacter::ServerTakeDamage(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		ASCharacter_eventServerTakeDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageEvent=DamageEvent;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ServerTakeDamage),&Parms);
	}
	static FName NAME_AASCharacter_ServerTakePointDamage = FName(TEXT("ServerTakePointDamage"));
	void AASCharacter::ServerTakePointDamage(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser)
	{
		ASCharacter_eventServerTakePointDamage_Parms Parms;
		Parms.Damage=Damage;
		Parms.DamageEvent=DamageEvent;
		Parms.EventInstigator=EventInstigator;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_AASCharacter_ServerTakePointDamage),&Parms);
	}
	void AASCharacter::StaticRegisterNativesAASCharacter()
	{
		UClass* Class = AASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientNotifyHit", &AASCharacter::execClientNotifyHit },
			{ "ClientTakeDamage", &AASCharacter::execClientTakeDamage },
			{ "ClientTakePointDamage", &AASCharacter::execClientTakePointDamage },
			{ "JumpDamageState", &AASCharacter::execJumpDamageState },
			{ "OnAttackOverlap", &AASCharacter::execOnAttackOverlap },
			{ "OnRep_LastTakeHitInfo", &AASCharacter::execOnRep_LastTakeHitInfo },
			{ "ServerNotifyHit", &AASCharacter::execServerNotifyHit },
			{ "ServerTakeDamage", &AASCharacter::execServerTakeDamage },
			{ "ServerTakePointDamage", &AASCharacter::execServerTakePointDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientNotifyHit_Parms, ShotDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientNotifyHit_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientNotifyHit_Parms, DamageTypeClass), Z_Construct_UClass_UASDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientNotifyHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Impact_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_OtherCharacter = { "OtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientNotifyHit_Parms, OtherCharacter), Z_Construct_UClass_AASCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_ShotDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::NewProp_OtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ClientNotifyHit", nullptr, nullptr, sizeof(ASCharacter_eventClientNotifyHit_Parms), Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ClientNotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ClientNotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ClientTakeDamage", nullptr, nullptr, sizeof(ASCharacter_eventClientTakeDamage_Parms), Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ClientTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ClientTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakePointDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakePointDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventClientTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ClientTakePointDamage", nullptr, nullptr, sizeof(ASCharacter_eventClientTakePointDamage_Parms), Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x85020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ClientTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ClientTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics
	{
		struct ASCharacter_eventJumpDamageState_Parms
		{
			TEnumAsByte<EDamageState> State;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventJumpDamageState_Parms, State), Z_Construct_UEnum_ActionSystem_EDamageState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "JumpDamageState", nullptr, nullptr, sizeof(ASCharacter_eventJumpDamageState_Parms), Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_JumpDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_JumpDamageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics
	{
		struct ASCharacter_eventOnAttackOverlap_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FHitResult SweepResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASCharacter_eventOnAttackOverlap_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCharacter_eventOnAttackOverlap_Parms), &Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventOnAttackOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_SweepResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventOnAttackOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventOnAttackOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventOnAttackOverlap_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "OnAttackOverlap", nullptr, nullptr, sizeof(ASCharacter_eventOnAttackOverlap_Parms), Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_OnAttackOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_OnAttackOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "OnRep_LastTakeHitInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impact_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impact;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerNotifyHit_Parms, ShotDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerNotifyHit_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerNotifyHit_Parms, DamageTypeClass), Z_Construct_UClass_UASDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Impact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerNotifyHit_Parms, Impact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Impact_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Impact_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_OtherCharacter = { "OtherCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerNotifyHit_Parms, OtherCharacter), Z_Construct_UClass_AASCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_ShotDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_DamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_Impact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::NewProp_OtherCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ServerNotifyHit", nullptr, nullptr, sizeof(ASCharacter_eventServerNotifyHit_Parms), Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ServerNotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ServerNotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakeDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ServerTakeDamage", nullptr, nullptr, sizeof(ASCharacter_eventServerTakeDamage_Parms), Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ServerTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ServerTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakePointDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakePointDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FPointDamageEvent, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageEvent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCharacter_eventServerTakePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_EventInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_DamageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASCharacter, nullptr, "ServerTakePointDamage", nullptr, nullptr, sizeof(ASCharacter_eventServerTakePointDamage_Parms), Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASCharacter_ServerTakePointDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AASCharacter_ServerTakePointDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AASCharacter_NoRegister()
	{
		return AASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTakeHitInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTakeHitInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AASCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AASCharacter_ClientNotifyHit, "ClientNotifyHit" }, // 3475192297
		{ &Z_Construct_UFunction_AASCharacter_ClientTakeDamage, "ClientTakeDamage" }, // 459056052
		{ &Z_Construct_UFunction_AASCharacter_ClientTakePointDamage, "ClientTakePointDamage" }, // 880092845
		{ &Z_Construct_UFunction_AASCharacter_JumpDamageState, "JumpDamageState" }, // 1301734085
		{ &Z_Construct_UFunction_AASCharacter_OnAttackOverlap, "OnAttackOverlap" }, // 564155022
		{ &Z_Construct_UFunction_AASCharacter_OnRep_LastTakeHitInfo, "OnRep_LastTakeHitInfo" }, // 2280019010
		{ &Z_Construct_UFunction_AASCharacter_ServerNotifyHit, "ServerNotifyHit" }, // 853534924
		{ &Z_Construct_UFunction_AASCharacter_ServerTakeDamage, "ServerTakeDamage" }, // 1762962001
		{ &Z_Construct_UFunction_AASCharacter_ServerTakePointDamage, "ServerTakePointDamage" }, // 1216270093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ASCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASCharacter_Statics::NewProp_LastTakeHitInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ASCharacter" },
		{ "ModuleRelativePath", "Public/ASCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AASCharacter_Statics::NewProp_LastTakeHitInfo = { "LastTakeHitInfo", "OnRep_LastTakeHitInfo", (EPropertyFlags)0x0020088100002025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASCharacter, LastTakeHitInfo), Z_Construct_UScriptStruct_FASTakeHitInfo, METADATA_PARAMS(Z_Construct_UClass_AASCharacter_Statics::NewProp_LastTakeHitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacter_Statics::NewProp_LastTakeHitInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASCharacter_Statics::NewProp_LastTakeHitInfo,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AASCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UASCollisionInterface_NoRegister, (int32)VTABLE_OFFSET(AASCharacter, IASCollisionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AASCharacter_Statics::ClassParams = {
		&AASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AASCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AASCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AASCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AASCharacter, 3362999872);
	template<> ACTIONSYSTEM_API UClass* StaticClass<AASCharacter>()
	{
		return AASCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AASCharacter(Z_Construct_UClass_AASCharacter, &AASCharacter::StaticClass, TEXT("/Script/ActionSystem"), TEXT("AASCharacter"), false, nullptr, nullptr, nullptr);

	void AASCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LastTakeHitInfo(TEXT("LastTakeHitInfo"));

		const bool bIsValid = true
			&& Name_LastTakeHitInfo == ClassReps[(int32)ENetFields_Private::LastTakeHitInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AASCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
