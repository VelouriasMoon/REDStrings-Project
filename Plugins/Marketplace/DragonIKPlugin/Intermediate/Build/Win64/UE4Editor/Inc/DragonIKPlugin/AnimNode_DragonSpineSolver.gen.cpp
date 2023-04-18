// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/AnimNode_DragonSpineSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DragonSpineSolver() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
// End Cross Module References
class UScriptStruct* FAnimNode_DragonSpineSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGONIKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("AnimNode_DragonSpineSolver"), sizeof(FAnimNode_DragonSpineSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Hash());
	}
	return Singleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_DragonSpineSolver>()
{
	return FAnimNode_DragonSpineSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_DragonSpineSolver(FAnimNode_DragonSpineSolver::StaticStruct, TEXT("/Script/DragonIKPlugin"), TEXT("AnimNode_DragonSpineSolver"), false, nullptr, nullptr);
static struct FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonSpineSolver
{
	FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonSpineSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_DragonSpineSolver")),new UScriptStruct::TCppStructOps<FAnimNode_DragonSpineSolver>);
	}
} ScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonSpineSolver;
	struct Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayLineTrace_MetaData[];
#endif
		static void NewProp_DisplayLineTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisplayLineTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minimum_Feet_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Minimum_Feet_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maximum_Feet_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Maximum_Feet_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_is_snake_MetaData[];
#endif
		static void NewProp_is_snake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_snake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snake_Joint_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Snake_Joint_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spine_Feet_Connect_MetaData[];
#endif
		static void NewProp_Spine_Feet_Connect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Spine_Feet_Connect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverReferencePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SolverReferencePose;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SolverReferencePose_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Forward_Direction_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Forward_Direction_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_direction_vector_CS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_character_direction_vector_CS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overall_PostSolved_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Overall_PostSolved_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Only_Root_Solve_MetaData[];
#endif
		static void NewProp_Only_Root_Solve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Only_Root_Solve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_accurate_feet_placement_MetaData[];
#endif
		static void NewProp_accurate_feet_placement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_accurate_feet_placement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_Activation_MetaData[];
#endif
		static void NewProp_Force_Activation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Force_Activation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_Fake_Pelvis_Rotations_MetaData[];
#endif
		static void NewProp_Use_Fake_Pelvis_Rotations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_Fake_Pelvis_Rotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_Fake_Chest_Rotations_MetaData[];
#endif
		static void NewProp_Use_Fake_Chest_Rotations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_Fake_Chest_Rotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enable_solver_MetaData[];
#endif
		static void NewProp_enable_solver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable_solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEffectorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugEffectorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_ForwardRotation_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chest_ForwardRotation_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_ForwardRotation_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pelvis_ForwardRotation_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_Influence_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chest_Influence_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_Lerp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation_Lerp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_Lerp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Location_Lerp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Use_Automatic_Fabrik_Selection_MetaData[];
#endif
		static void NewProp_Use_Automatic_Fabrik_Selection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Use_Automatic_Fabrik_Selection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_power_between_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation_power_between;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maximum_Dip_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Maximum_Dip_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_virtual_leg_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_virtual_leg_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_Rotation_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Body_Rotation_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pelvis_Base_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pelvis_Base_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_Base_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chest_Base_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_Slanted_Height_Down_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chest_Slanted_Height_Down_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chest_Slanted_Height_Up_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Chest_Slanted_Height_Up_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Calculation_To_RefPose_MetaData[];
#endif
		static void NewProp_Calculation_To_RefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Calculation_To_RefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reverse_fabrik_MetaData[];
#endif
		static void NewProp_reverse_fabrik_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_reverse_fabrik;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slanted_Height_Down_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slanted_Height_Down_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slanted_Height_Up_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slanted_Height_Up_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_line_trace_upper_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_line_trace_upper_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_line_trace_downward_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_line_trace_downward_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ignore_Lerping_MetaData[];
#endif
		static void NewProp_Ignore_Lerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ignore_Lerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotate_Around_Translate_MetaData[];
#endif
		static void NewProp_Rotate_Around_Translate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Rotate_Around_Translate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dip_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dip_multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trace_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Trace_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trace_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_trace_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_trace_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trace_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trace_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shift_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shift_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragon_input_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dragon_input_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DragonSpineSolver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->DisplayLineTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace = { "DisplayLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Minimum_Feet_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Minimum_Feet_Distance = { "Minimum_Feet_Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Minimum_Feet_Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Minimum_Feet_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Minimum_Feet_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Feet_Distance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Feet_Distance = { "Maximum_Feet_Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Maximum_Feet_Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Feet_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Feet_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->is_snake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake = { "is_snake", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Snake_Joint_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Snake_Joint_Speed = { "Snake_Joint_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Snake_Joint_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Snake_Joint_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Snake_Joint_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Spine_Feet_Connect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect = { "Spine_Feet_Connect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose = { "SolverReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, SolverReferencePose), Z_Construct_UEnum_DragonIKPlugin_ERefPosePluginEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Forward_Direction_Vector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Forward_Direction_Vector = { "Forward_Direction_Vector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Forward_Direction_Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Forward_Direction_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Forward_Direction_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_character_direction_vector_CS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_character_direction_vector_CS = { "character_direction_vector_CS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, character_direction_vector_CS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_character_direction_vector_CS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_character_direction_vector_CS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Overall_PostSolved_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Overall_PostSolved_Offset = { "Overall_PostSolved_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Overall_PostSolved_Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Overall_PostSolved_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Overall_PostSolved_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Only_Root_Solve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve = { "Only_Root_Solve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->accurate_feet_placement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement = { "accurate_feet_placement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Force_Activation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation = { "Force_Activation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Use_Fake_Pelvis_Rotations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations = { "Use_Fake_Pelvis_Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Use_Fake_Chest_Rotations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations = { "Use_Fake_Chest_Rotations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->enable_solver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver = { "enable_solver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DebugEffectorTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DebugEffectorTransform = { "DebugEffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, DebugEffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DebugEffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DebugEffectorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_ForwardRotation_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_ForwardRotation_Intensity = { "Chest_ForwardRotation_Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Chest_ForwardRotation_Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_ForwardRotation_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_ForwardRotation_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_ForwardRotation_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_ForwardRotation_Intensity = { "Pelvis_ForwardRotation_Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Pelvis_ForwardRotation_Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_ForwardRotation_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_ForwardRotation_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Influence_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Influence_Alpha = { "Chest_Influence_Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Chest_Influence_Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Influence_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Influence_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotation_Lerp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotation_Lerp_Speed = { "Rotation_Lerp_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Rotation_Lerp_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotation_Lerp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotation_Lerp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Location_Lerp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Location_Lerp_Speed = { "Location_Lerp_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Location_Lerp_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Location_Lerp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Location_Lerp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Use_Automatic_Fabrik_Selection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection = { "Use_Automatic_Fabrik_Selection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_rotation_power_between_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_rotation_power_between = { "rotation_power_between", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, rotation_power_between), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_rotation_power_between_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_rotation_power_between_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Dip_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Dip_Height = { "Maximum_Dip_Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Maximum_Dip_Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Dip_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Dip_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_virtual_leg_width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_virtual_leg_width = { "virtual_leg_width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, virtual_leg_width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_virtual_leg_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_virtual_leg_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Body_Rotation_Intensity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Body_Rotation_Intensity = { "Body_Rotation_Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Body_Rotation_Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Body_Rotation_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Body_Rotation_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_Base_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_Base_Offset = { "Pelvis_Base_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Pelvis_Base_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_Base_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_Base_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Base_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Base_Offset = { "Chest_Base_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Chest_Base_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Base_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Base_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Down_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Down_Offset = { "Chest_Slanted_Height_Down_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Chest_Slanted_Height_Down_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Down_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Down_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Up_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Up_Offset = { "Chest_Slanted_Height_Up_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Chest_Slanted_Height_Up_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Up_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Up_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Calculation_To_RefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose = { "Calculation_To_RefPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->reverse_fabrik = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik = { "reverse_fabrik", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Down_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Down_Offset = { "Slanted_Height_Down_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Slanted_Height_Down_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Down_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Down_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Up_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Up_Offset = { "Slanted_Height_Up_Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Slanted_Height_Up_Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Up_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Up_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_upper_height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_upper_height = { "line_trace_upper_height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, line_trace_upper_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_upper_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_upper_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_downward_height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_downward_height = { "line_trace_downward_height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, line_trace_downward_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_downward_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_downward_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ActualAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Ignore_Lerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping = { "Ignore_Lerping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate_SetBit(void* Obj)
	{
		((FAnimNode_DragonSpineSolver*)Obj)->Rotate_Around_Translate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate = { "Rotate_Around_Translate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonSpineSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dip_multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dip_multiplier = { "dip_multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, dip_multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dip_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dip_multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Radius = { "Trace_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Trace_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type = { "trace_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, trace_type), Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Channel = { "Trace_Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Trace_Channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_shift_speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_shift_speed = { "shift_speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, shift_speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_shift_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_shift_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ComponentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumRoll = { "MinimumRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, MinimumRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumRoll = { "MaximumRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, MaximumRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumPitch = { "MinimumPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, MinimumPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumPitch = { "MaximumPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, MaximumPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Precision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dragon_input_data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonSpineSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonSpineSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dragon_input_data = { "dragon_input_data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonSpineSolver, dragon_input_data), Z_Construct_UScriptStruct_FDragonData_MultiInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dragon_input_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dragon_input_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DisplayLineTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Minimum_Feet_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Feet_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_is_snake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Snake_Joint_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Spine_Feet_Connect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_SolverReferencePose_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Forward_Direction_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_character_direction_vector_CS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Overall_PostSolved_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Only_Root_Solve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_accurate_feet_placement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Force_Activation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Pelvis_Rotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Fake_Chest_Rotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_enable_solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_DebugEffectorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_ForwardRotation_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_ForwardRotation_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Influence_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotation_Lerp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Location_Lerp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Use_Automatic_Fabrik_Selection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_rotation_power_between,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Maximum_Dip_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_virtual_leg_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Body_Rotation_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Pelvis_Base_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Base_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Down_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Chest_Slanted_Height_Up_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Calculation_To_RefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_reverse_fabrik,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Down_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Slanted_Height_Up_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_upper_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_line_trace_downward_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ActualAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Ignore_Lerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Rotate_Around_Translate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dip_multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_trace_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Trace_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_shift_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_ComponentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MinimumPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_MaximumPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_Precision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::NewProp_dragon_input_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_DragonSpineSolver",
		sizeof(FAnimNode_DragonSpineSolver),
		alignof(FAnimNode_DragonSpineSolver),
		Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_DragonSpineSolver"), sizeof(FAnimNode_DragonSpineSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonSpineSolver_Hash() { return 138959161U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
