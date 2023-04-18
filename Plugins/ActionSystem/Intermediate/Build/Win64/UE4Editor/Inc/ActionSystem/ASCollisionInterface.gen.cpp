// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionSystem/Public/ASCollisionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASCollisionInterface() {}
// Cross Module References
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionInterface_NoRegister();
	ACTIONSYSTEM_API UClass* Z_Construct_UClass_UASCollisionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ActionSystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IASCollisionInterface::execOnAttackOverlapCallback)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnAttackOverlapCallback_Implementation(Z_Param_MyComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	bool IASCollisionInterface::OnAttackOverlapCallback(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAttackOverlapCallback instead.");
		ASCollisionInterface_eventOnAttackOverlapCallback_Parms Parms;
		return Parms.ReturnValue;
	}
	void UASCollisionInterface::StaticRegisterNativesUASCollisionInterface()
	{
		UClass* Class = UASCollisionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackOverlapCallback", &IASCollisionInterface::execOnAttackOverlapCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics
	{
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
	void Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASCollisionInterface_eventOnAttackOverlapCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASCollisionInterface_eventOnAttackOverlapCallback_Parms), &Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionInterface_eventOnAttackOverlapCallback_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_SweepResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionInterface_eventOnAttackOverlapCallback_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionInterface_eventOnAttackOverlapCallback_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASCollisionInterface_eventOnAttackOverlapCallback_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::NewProp_MyComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ASCollisionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UASCollisionInterface, nullptr, "OnAttackOverlapCallback", nullptr, nullptr, sizeof(ASCollisionInterface_eventOnAttackOverlapCallback_Parms), Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UASCollisionInterface_NoRegister()
	{
		return UASCollisionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UASCollisionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UASCollisionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UASCollisionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UASCollisionInterface_OnAttackOverlapCallback, "OnAttackOverlapCallback" }, // 3154726031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UASCollisionInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ASCollisionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UASCollisionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IASCollisionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UASCollisionInterface_Statics::ClassParams = {
		&UASCollisionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UASCollisionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UASCollisionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UASCollisionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UASCollisionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UASCollisionInterface, 991982728);
	template<> ACTIONSYSTEM_API UClass* StaticClass<UASCollisionInterface>()
	{
		return UASCollisionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UASCollisionInterface(Z_Construct_UClass_UASCollisionInterface, &UASCollisionInterface::StaticClass, TEXT("/Script/ActionSystem"), TEXT("UASCollisionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UASCollisionInterface);
	static FName NAME_UASCollisionInterface_OnAttackOverlapCallback = FName(TEXT("OnAttackOverlapCallback"));
	bool IASCollisionInterface::Execute_OnAttackOverlapCallback(UObject* O, UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult const& SweepResult)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UASCollisionInterface::StaticClass()));
		ASCollisionInterface_eventOnAttackOverlapCallback_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UASCollisionInterface_OnAttackOverlapCallback);
		if (Func)
		{
			Parms.MyComp=MyComp;
			Parms.OtherActor=OtherActor;
			Parms.OtherComp=OtherComp;
			Parms.SweepResult=SweepResult;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IASCollisionInterface*)(O->GetNativeInterfaceAddress(UASCollisionInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnAttackOverlapCallback_Implementation(MyComp,OtherActor,OtherComp,SweepResult);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
