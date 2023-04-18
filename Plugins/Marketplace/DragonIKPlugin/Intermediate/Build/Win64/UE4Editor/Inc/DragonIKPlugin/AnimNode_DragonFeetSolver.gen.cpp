// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DragonIKPlugin/Public/AnimNode_DragonFeetSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_DragonFeetSolver() {}
// Cross Module References
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver();
	UPackage* Z_Construct_UPackage__Script_DragonIKPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin();
	DRAGONIKPLUGIN_API UEnum* Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin();
	DRAGONIKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDragonData_MultiInput();
// End Cross Module References
class UScriptStruct* FAnimNode_DragonFeetSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DRAGONIKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver, Z_Construct_UPackage__Script_DragonIKPlugin(), TEXT("AnimNode_DragonFeetSolver"), sizeof(FAnimNode_DragonFeetSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Hash());
	}
	return Singleton;
}
template<> DRAGONIKPLUGIN_API UScriptStruct* StaticStruct<FAnimNode_DragonFeetSolver>()
{
	return FAnimNode_DragonFeetSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_DragonFeetSolver(FAnimNode_DragonFeetSolver::StaticStruct, TEXT("/Script/DragonIKPlugin"), TEXT("AnimNode_DragonFeetSolver"), false, nullptr, nullptr);
static struct FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonFeetSolver
{
	FScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonFeetSolver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_DragonFeetSolver")),new UScriptStruct::TCppStructOps<FAnimNode_DragonFeetSolver>);
	}
} ScriptStruct_DragonIKPlugin_StaticRegisterNativesFAnimNode_DragonFeetSolver;
	struct Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_direction_vector_CS_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_character_direction_vector_CS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_Roll_MetaData[];
#endif
		static void NewProp_Enable_Roll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_Pitch_MetaData[];
#endif
		static void NewProp_Enable_Pitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_Lerp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Location_Lerp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_show_trace_in_game_MetaData[];
#endif
		static void NewProp_show_trace_in_game_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show_trace_in_game;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Should_Rotate_Feet_MetaData[];
#endif
		static void NewProp_Should_Rotate_Feet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Should_Rotate_Feet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ignore_Location_Lerping_MetaData[];
#endif
		static void NewProp_Ignore_Location_Lerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ignore_Location_Lerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ignore_Lerping_MetaData[];
#endif
		static void NewProp_Ignore_Lerping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ignore_Lerping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_line_trace_upper_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_line_trace_upper_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_line_trace_down_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_line_trace_down_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugEffectorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugEffectorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trace_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trace_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_feet_rotation_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_feet_rotation_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shift_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shift_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enable_solver_MetaData[];
#endif
		static void NewProp_enable_solver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable_solver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_automatic_leg_make_MetaData[];
#endif
		static void NewProp_automatic_leg_make_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_automatic_leg_make;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rot_interp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rot_interp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rot_interp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_loc_interp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_loc_interp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_loc_interp_type_Underlying;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ik_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ik_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ik_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragon_input_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dragon_input_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_DragonFeetSolver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_character_direction_vector_CS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_character_direction_vector_CS = { "character_direction_vector_CS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, character_direction_vector_CS), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_character_direction_vector_CS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_character_direction_vector_CS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->Enable_Roll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll = { "Enable_Roll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->Enable_Pitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch = { "Enable_Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Location_Lerp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Location_Lerp_Speed = { "Location_Lerp_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, Location_Lerp_Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Location_Lerp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Location_Lerp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->show_trace_in_game = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game = { "show_trace_in_game", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->Should_Rotate_Feet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet = { "Should_Rotate_Feet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->Ignore_Location_Lerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping = { "Ignore_Location_Lerping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->Ignore_Lerping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping = { "Ignore_Lerping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_upper_height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_upper_height = { "line_trace_upper_height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, line_trace_upper_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_upper_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_upper_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_down_height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_down_height = { "line_trace_down_height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, line_trace_down_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_down_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_down_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_DebugEffectorTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_DebugEffectorTransform = { "DebugEffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, DebugEffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_DebugEffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_DebugEffectorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ActualAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Channel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Channel = { "Trace_Channel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, Trace_Channel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_feet_rotation_speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_feet_rotation_speed = { "feet_rotation_speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, feet_rotation_speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_feet_rotation_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_feet_rotation_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_shift_speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_shift_speed = { "shift_speed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, shift_speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_shift_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_shift_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->enable_solver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver = { "enable_solver", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make_SetBit(void* Obj)
	{
		((FAnimNode_DragonFeetSolver*)Obj)->automatic_leg_make = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make = { "automatic_leg_make", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_DragonFeetSolver), &Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ComponentPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type = { "rot_interp_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, rot_interp_type), Z_Construct_UEnum_DragonIKPlugin_EInterpoRotation_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type = { "loc_interp_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, loc_interp_type), Z_Construct_UEnum_DragonIKPlugin_EInterpoLocation_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Radius = { "Trace_Radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, Trace_Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type = { "trace_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, trace_type), Z_Construct_UEnum_DragonIKPlugin_EIKTrace_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type = { "ik_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, ik_type), Z_Construct_UEnum_DragonIKPlugin_EIK_Type_Plugin, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_dragon_input_data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimNode_DragonFeetSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_DragonFeetSolver.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_dragon_input_data = { "dragon_input_data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_DragonFeetSolver, dragon_input_data), Z_Construct_UScriptStruct_FDragonData_MultiInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_dragon_input_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_dragon_input_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_character_direction_vector_CS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Enable_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Location_Lerp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_show_trace_in_game,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Should_Rotate_Feet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Location_Lerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Ignore_Lerping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_upper_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_line_trace_down_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_DebugEffectorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ActualAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_LODThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_feet_rotation_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_shift_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_enable_solver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_automatic_leg_make,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ComponentPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_rot_interp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_loc_interp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_Trace_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_trace_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_ik_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::NewProp_dragon_input_data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DragonIKPlugin,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_DragonFeetSolver",
		sizeof(FAnimNode_DragonFeetSolver),
		alignof(FAnimNode_DragonFeetSolver),
		Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DragonIKPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_DragonFeetSolver"), sizeof(FAnimNode_DragonFeetSolver), Get_Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver_Hash() { return 3668715889U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
