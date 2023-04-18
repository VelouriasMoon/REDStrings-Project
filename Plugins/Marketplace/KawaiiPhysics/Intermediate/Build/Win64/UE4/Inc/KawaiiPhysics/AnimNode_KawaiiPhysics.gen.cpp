// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KawaiiPhysics() {}
// Cross Module References
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* ECollisionLimitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionLimitType"));
		}
		return Singleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>()
	{
		return ECollisionLimitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionLimitType(ECollisionLimitType_StaticEnum, TEXT("/Script/KawaiiPhysics"), TEXT("ECollisionLimitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Hash() { return 2044039779U; }
	UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionLimitType"), 0, Get_Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionLimitType::None", (int64)ECollisionLimitType::None },
				{ "ECollisionLimitType::Spherical", (int64)ECollisionLimitType::Spherical },
				{ "ECollisionLimitType::Capsule", (int64)ECollisionLimitType::Capsule },
				{ "ECollisionLimitType::Planar", (int64)ECollisionLimitType::Planar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Capsule.Name", "ECollisionLimitType::Capsule" },
				{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
				{ "None.Name", "ECollisionLimitType::None" },
				{ "Planar.Name", "ECollisionLimitType::Planar" },
				{ "Spherical.Name", "ECollisionLimitType::Spherical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
				nullptr,
				"ECollisionLimitType",
				"ECollisionLimitType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBoneForwardAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EBoneForwardAxis"));
		}
		return Singleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>()
	{
		return EBoneForwardAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBoneForwardAxis(EBoneForwardAxis_StaticEnum, TEXT("/Script/KawaiiPhysics"), TEXT("EBoneForwardAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Hash() { return 2078927158U; }
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBoneForwardAxis"), 0, Get_Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBoneForwardAxis::X_Positive", (int64)EBoneForwardAxis::X_Positive },
				{ "EBoneForwardAxis::X_Negative", (int64)EBoneForwardAxis::X_Negative },
				{ "EBoneForwardAxis::Y_Positive", (int64)EBoneForwardAxis::Y_Positive },
				{ "EBoneForwardAxis::Y_Negative", (int64)EBoneForwardAxis::Y_Negative },
				{ "EBoneForwardAxis::Z_Positive", (int64)EBoneForwardAxis::Z_Positive },
				{ "EBoneForwardAxis::Z_Negative", (int64)EBoneForwardAxis::Z_Negative },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
				{ "X_Negative.Name", "EBoneForwardAxis::X_Negative" },
				{ "X_Positive.Name", "EBoneForwardAxis::X_Positive" },
				{ "Y_Negative.Name", "EBoneForwardAxis::Y_Negative" },
				{ "Y_Positive.Name", "EBoneForwardAxis::Y_Positive" },
				{ "Z_Negative.Name", "EBoneForwardAxis::Z_Negative" },
				{ "Z_Positive.Name", "EBoneForwardAxis::Z_Positive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
				nullptr,
				"EBoneForwardAxis",
				"EBoneForwardAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlanarConstraint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EPlanarConstraint"));
		}
		return Singleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>()
	{
		return EPlanarConstraint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlanarConstraint(EPlanarConstraint_StaticEnum, TEXT("/Script/KawaiiPhysics"), TEXT("EPlanarConstraint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Hash() { return 1024313190U; }
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlanarConstraint"), 0, Get_Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlanarConstraint::None", (int64)EPlanarConstraint::None },
				{ "EPlanarConstraint::X", (int64)EPlanarConstraint::X },
				{ "EPlanarConstraint::Y", (int64)EPlanarConstraint::Y },
				{ "EPlanarConstraint::Z", (int64)EPlanarConstraint::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
				{ "None.Name", "EPlanarConstraint::None" },
				{ "X.Name", "EPlanarConstraint::X" },
				{ "Y.Name", "EPlanarConstraint::Y" },
				{ "Z.Name", "EPlanarConstraint::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
				nullptr,
				"EPlanarConstraint",
				"EPlanarConstraint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_KawaiiPhysics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("AnimNode_KawaiiPhysics"), sizeof(FAnimNode_KawaiiPhysics), Get_Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FAnimNode_KawaiiPhysics>()
{
	return FAnimNode_KawaiiPhysics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_KawaiiPhysics(FAnimNode_KawaiiPhysics::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("AnimNode_KawaiiPhysics"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFAnimNode_KawaiiPhysics
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFAnimNode_KawaiiPhysics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_KawaiiPhysics")),new UScriptStruct::TCppStructOps<FAnimNode_KawaiiPhysics>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFAnimNode_KawaiiPhysics;
	struct Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditing_MetaData[];
#endif
		static void NewProp_bEditing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditing;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitPhysicsSettings_MetaData[];
#endif
		static void NewProp_bInitPhysicsSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitPhysicsSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreSkelCompTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreSkelCompTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalBoneLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalBoneLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifyBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifyBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifyBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[];
#endif
		static void NewProp_bEnableWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitsDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LimitsDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanarConstraint_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlanarConstraint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlanarConstraint_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneForwardAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneForwardAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyBoneLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DummyBoneLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePhysicsSettingsInGame_MetaData[];
#endif
		static void NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePhysicsSettingsInGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitAngleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LimitAngleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadiusCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StiffnessCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldDampingRotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldDampingLocationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DampingCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DampingCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideTargetFramerate_MetaData[];
#endif
		static void NewProp_OverrideTargetFramerate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideTargetFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExcludeBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KawaiiPhysics>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bEditing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing = { "bEditing", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bInitPhysicsSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings = { "bInitPhysicsSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform = { "PreSkelCompTransform", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PreSkelCompTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength = { "TotalBoneLength", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TotalBoneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones = { "ModifyBones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ModifyBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner = { "ModifyBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Scale to apply to calculated wind velocities in the solver */" },
		{ "DisplayAfter", "bEnableWind" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale to apply to calculated wind velocities in the solver" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WindScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Whether or not wind is enabled for the bodies in this simulation */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether or not wind is enabled for the bodies in this simulation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bEnableWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "ExternalForce" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/** If the rotation amount of one frame exceeds the threshold, ignore the rotation  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If the rotation amount of one frame exceeds the threshold, ignore the rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportRotationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/** If the movement amount of one frame exceeds the threshold, ignore the movement  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If the movement amount of one frame exceeds the threshold, ignore the movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportDistanceThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset = { "LimitsDataAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitsDataAsset), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData[] = {
		{ "Category", "Advanced Physics Settings" },
		{ "Comment", "/** Fix the bone on the specified plane  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Fix the bone on the specified plane" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint = { "PlanarConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarConstraint), Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData[] = {
		{ "Category", "DummyBone" },
		{ "Comment", "/** Bone forward direction */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Bone forward direction" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis = { "BoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneForwardAxis), Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData[] = {
		{ "Category", "DummyBone" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Add a dummy bone to the end bone if it's above 0. It affects end bone rotation. For example, it rotates well if it is short */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Add a dummy bone to the end bone if it's above 0. It affects end bone rotation. For example, it rotates well if it is short" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength = { "DummyBoneLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DummyBoneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData[] = {
		{ "Category", "Advanced Physics Settings" },
		{ "Comment", "/** Flag to update each frame physical parameter. Disable to improve performance */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Flag to update each frame physical parameter. Disable to improve performance" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bUpdatePhysicsSettingsInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame = { "bUpdatePhysicsSettingsInGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve = { "LimitAngleCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitAngleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve = { "RadiusCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RadiusCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve = { "StiffnessCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, StiffnessCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve = { "WorldDampingRotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve = { "WorldDampingLocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve = { "DampingCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DampingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Settings for control of physical behavior */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for control of physical behavior" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData[] = {
		{ "Category", "TargetFramerate" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->OverrideTargetFramerate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate = { "OverrideTargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData[] = {
		{ "Category", "TargetFramerate" },
		{ "EditCondition", "OverrideTargetFramerate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate = { "TargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TargetFramerate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData[] = {
		{ "Category", "ModifyTarget" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones = { "ExcludeBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ExcludeBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner = { "ExcludeBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "ModifyTarget" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KawaiiPhysics",
		sizeof(FAnimNode_KawaiiPhysics),
		alignof(FAnimNode_KawaiiPhysics),
		Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_KawaiiPhysics"), sizeof(FAnimNode_KawaiiPhysics), Get_Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Hash() { return 3644887954U; }
class UScriptStruct* FKawaiiPhysicsModifyBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsModifyBone"), sizeof(FKawaiiPhysicsModifyBone), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsModifyBone>()
{
	return FKawaiiPhysicsModifyBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKawaiiPhysicsModifyBone(FKawaiiPhysicsModifyBone::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("KawaiiPhysicsModifyBone"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsModifyBone
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsModifyBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KawaiiPhysicsModifyBone")),new UScriptStruct::TCppStructOps<FKawaiiPhysicsModifyBone>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsModifyBone;
	struct Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDummy_MetaData[];
#endif
		static void NewProp_bDummy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDummy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthFromRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LengthFromRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrevLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildIndexs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildIndexs;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ChildIndexs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsModifyBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit(void* Obj)
	{
		((FKawaiiPhysicsModifyBone*)Obj)->bDummy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy = { "bDummy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKawaiiPhysicsModifyBone), &Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot = { "LengthFromRoot", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, LengthFromRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale = { "PoseScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation = { "PoseRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation = { "PoseLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation = { "PrevRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation = { "PrevLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs = { "ChildIndexs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ChildIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_Inner = { "ChildIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, BoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysicsModifyBone",
		sizeof(FKawaiiPhysicsModifyBone),
		alignof(FKawaiiPhysicsModifyBone),
		Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KawaiiPhysicsModifyBone"), sizeof(FKawaiiPhysicsModifyBone), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Hash() { return 475182674U; }
class UScriptStruct* FKawaiiPhysicsSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSettings"), sizeof(FKawaiiPhysicsSettings), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSettings>()
{
	return FKawaiiPhysicsSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKawaiiPhysicsSettings(FKawaiiPhysicsSettings::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("KawaiiPhysicsSettings"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KawaiiPhysicsSettings")),new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFKawaiiPhysicsSettings;
	struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldDampingRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldDampingLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle = { "LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, LimitAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation = { "WorldDampingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation = { "WorldDampingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKawaiiPhysicsSettings, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysicsSettings",
		sizeof(FKawaiiPhysicsSettings),
		alignof(FKawaiiPhysicsSettings),
		Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KawaiiPhysicsSettings"), sizeof(FKawaiiPhysicsSettings), Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Hash() { return 796350285U; }
class UScriptStruct* FPlanarLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FPlanarLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimit"), sizeof(FPlanarLimit), Get_Z_Construct_UScriptStruct_FPlanarLimit_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimit>()
{
	return FPlanarLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlanarLimit(FPlanarLimit::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("PlanarLimit"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimit
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlanarLimit")),new UScriptStruct::TCppStructOps<FPlanarLimit>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFPlanarLimit;
	struct Z_Construct_UScriptStruct_FPlanarLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlanarLimit, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"PlanarLimit",
		sizeof(FPlanarLimit),
		alignof(FPlanarLimit),
		Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlanarLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlanarLimit"), sizeof(FPlanarLimit), Get_Z_Construct_UScriptStruct_FPlanarLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlanarLimit_Hash() { return 2687128811U; }
class UScriptStruct* FCapsuleLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimit"), sizeof(FCapsuleLimit), Get_Z_Construct_UScriptStruct_FCapsuleLimit_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimit>()
{
	return FCapsuleLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapsuleLimit(FCapsuleLimit::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("CapsuleLimit"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimit
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapsuleLimit")),new UScriptStruct::TCppStructOps<FCapsuleLimit>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFCapsuleLimit;
	struct Z_Construct_UScriptStruct_FCapsuleLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimit, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCapsuleLimit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"CapsuleLimit",
		sizeof(FCapsuleLimit),
		alignof(FCapsuleLimit),
		Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapsuleLimit"), sizeof(FCapsuleLimit), Get_Z_Construct_UScriptStruct_FCapsuleLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapsuleLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapsuleLimit_Hash() { return 3210743141U; }
class UScriptStruct* FSphericalLimit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FSphericalLimit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimit"), sizeof(FSphericalLimit), Get_Z_Construct_UScriptStruct_FSphericalLimit_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimit>()
{
	return FSphericalLimit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphericalLimit(FSphericalLimit::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("SphericalLimit"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimit
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SphericalLimit")),new UScriptStruct::TCppStructOps<FSphericalLimit>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFSphericalLimit;
	struct Z_Construct_UScriptStruct_FSphericalLimit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphericalLimit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"SphericalLimit",
		sizeof(FSphericalLimit),
		alignof(FSphericalLimit),
		Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphericalLimit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphericalLimit"), sizeof(FSphericalLimit), Get_Z_Construct_UScriptStruct_FSphericalLimit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphericalLimit_Hash() { return 3306989791U; }
class UScriptStruct* FCollisionLimitBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KAWAIIPHYSICS_API uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitBase, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitBase"), sizeof(FCollisionLimitBase), Get_Z_Construct_UScriptStruct_FCollisionLimitBase_Hash());
	}
	return Singleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitBase>()
{
	return FCollisionLimitBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionLimitBase(FCollisionLimitBase::StaticStruct, TEXT("/Script/KawaiiPhysics"), TEXT("CollisionLimitBase"), false, nullptr, nullptr);
static struct FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitBase
{
	FScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionLimitBase")),new UScriptStruct::TCppStructOps<FCollisionLimitBase>);
	}
} ScriptStruct_KawaiiPhysics_StaticRegisterNativesFCollisionLimitBase;
	struct Z_Construct_UScriptStruct_FCollisionLimitBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFromDataAsset_MetaData[];
#endif
		static void NewProp_bFromDataAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromDataAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitBase>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, Type), Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Debug" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_SetBit(void* Obj)
	{
		((FCollisionLimitBase*)Obj)->bFromDataAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset = { "bFromDataAsset", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCollisionLimitBase), &Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "Comment", "/** Bone to attach the sphere to */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Bone to attach the sphere to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCollisionLimitBase, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"CollisionLimitBase",
		sizeof(FCollisionLimitBase),
		alignof(FCollisionLimitBase),
		Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KawaiiPhysics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionLimitBase"), sizeof(FCollisionLimitBase), Get_Z_Construct_UScriptStruct_FCollisionLimitBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionLimitBase_Hash() { return 974081561U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
