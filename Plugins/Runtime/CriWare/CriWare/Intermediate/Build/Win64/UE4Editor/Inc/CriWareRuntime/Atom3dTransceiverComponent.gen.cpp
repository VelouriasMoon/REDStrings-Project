// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/Atom3dTransceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dTransceiverComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDrawSphereComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAtom3dSourceBaseComponent::execSetRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_InRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_InRegion);
		P_NATIVE_END;
	}
	void UAtom3dSourceBaseComponent::StaticRegisterNativesUAtom3dSourceBaseComponent()
	{
		UClass* Class = UAtom3dSourceBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRegion", &UAtom3dSourceBaseComponent::execSetRegion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics
	{
		struct Atom3dSourceBaseComponent_eventSetRegion_Parms
		{
			UAtom3dRegion* InRegion;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRegion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion = { "InRegion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Atom3dSourceBaseComponent_eventSetRegion_Parms, InRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Atom3dSource" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dSourceBaseComponent, nullptr, "SetRegion", nullptr, nullptr, sizeof(Atom3dSourceBaseComponent_eventSetRegion_Parms), Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComopnentForOutputInteriorPanEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComopnentForOutputInteriorPanEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComopnentForOutputInteriorPanDisabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComopnentForOutputInteriorPanDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponentForOutputAttenuationDistanceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponentForOutputAttenuationDistanceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponentForOutputAttenuationDistanceMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponentForOutputAttenuationDistanceMin;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugStringsForDetailsVisible_MetaData[];
#endif
		static void NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugStringsForDetailsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDistanceAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultDistanceAisacControls;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultDistanceAisacControls_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInteriorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultInteriorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultSourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxAttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxAttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMinAttenuationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMinAttenuationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAttenuationDistanceDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputVolumeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultOutputVolumeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion, "SetRegion" }, // 1533215255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "CRIWARE Common" },
		{ "Comment", "/**\n * 3D\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n * \xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xaf Atom 3d Transcever \xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81""CRIWARE\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe3\x81\x93\xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x82\x92\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n * \xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf Atom 3d Transcever \xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x82\x92\xe4\xbb\x8b\xe3\x81\x97\xe3\x81\xa6\xe3\x80\x81\xe9\x96\x93\xe6\x8e\xa5\xe7\x9a\x84\xe3\x81\xab\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xae\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbb\xe3\x82\xb9\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Atom3dTransceiverComponent.h" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "3D\xe9\x9f\xb3\xe6\xba\x90\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xaf Atom 3d Transcever \xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\x99\xe3\x81\x8c\xe3\x80\x81""CRIWARE\xe3\x83\xa6\xe3\x83\xbc\xe3\x82\xb6\xe3\x81\x8c\xe3\x81\x93\xe3\x81\xae\xe3\x83\x99\xe3\x83\xbc\xe3\x82\xb9\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x82\x92\xe7\x9b\xb4\xe6\x8e\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x81\x93\xe3\x81\xa8\xe3\x81\xaf\xe3\x81\x82\xe3\x82\x8a\xe3\x81\xbe\xe3\x81\x9b\xe3\x82\x93\xe3\x80\x82\n\xe5\x9f\xba\xe6\x9c\xac\xe7\x9a\x84\xe3\x81\xab\xe3\x81\xaf Atom 3d Transcever \xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x82\x92\xe4\xbb\x8b\xe3\x81\x97\xe3\x81\xa6\xe3\x80\x81\xe9\x96\x93\xe6\x8e\xa5\xe7\x9a\x84\xe3\x81\xab\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xae\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xab\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbb\xe3\x82\xb9\xe3\x81\x97\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanEnabled_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize interior distance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanEnabled = { "SphereComopnentForOutputInteriorPanEnabled", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, SphereComopnentForOutputInteriorPanEnabled), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanDisabled_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize transceiver radius." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanDisabled = { "SphereComopnentForOutputInteriorPanDisabled", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, SphereComopnentForOutputInteriorPanDisabled), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMax_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize maximum attenuation distance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMax = { "SphereComponentForOutputAttenuationDistanceMax", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, SphereComponentForOutputAttenuationDistanceMax), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMin_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize minimum attenuation distance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMin = { "SphereComponentForOutputAttenuationDistanceMin", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, SphereComponentForOutputAttenuationDistanceMin), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMin_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData[] = {
		{ "Category", "Atom3dSource|Details" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Show detail information in running." },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsDebugStringsForDetailsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible = { "bIsDebugStringsForDetailsVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[] = {
		{ "Category", "Atom3dSource|Aisac|Listener Based" },
		{ "DisplayName", "Elevation Angle Aisac Contorl" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Aisac control names linked to the elevation angle of the output point with respect to the listener." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "Category", "Atom3dSource|Aisac|Listener Based" },
		{ "DisplayName", "Azimuth Angle Aisac Contorl" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Aisac control names linked to the azimuth of the output point with respect to the listener." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[] = {
		{ "Category", "Atom3dSource|Aisac|Output Based" },
		{ "DisplayName", "Elevation Angle Aisac Contorl" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Aisac control names linked to the elevation angle of the listener with respect to the output point." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "Category", "Atom3dSource|Aisac|Output Based" },
		{ "DisplayName", "Azimuth Angle Aisac Contorl" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Aisac control names linked to the azimuth of the listener with respect to the output point." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData[] = {
		{ "Category", "Atom3dSource|Aisac" },
		{ "DisplayName", "Distance Aisac Contorl" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Aisac control names linked to distance decay between minimum and maximum distances." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultDistanceAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData[] = {
		{ "Category", "Atom3dSource|OutputInteriorPan" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Interior Distance" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Within the range of 3d source radius to interior distance, interior panning is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance = { "DefaultInteriorDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultInteriorDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData[] = {
		{ "Category", "Atom3dSource|OutputInteriorPan" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Source Radius" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Within this distance from the 3d source location, all speakers will play audio at the same volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius = { "DefaultSourceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultSourceRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[] = {
		{ "Category", "Atom3dSource|OutputInteriorPan" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Show debug sheres for visualization of Output-Interior-Pan-Field." },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsOutputInteriorPanFieldDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible = { "bIsOutputInteriorPanFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData[] = {
		{ "Category", "Atom3dSource|Attenuation" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Distance" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "The distance to the minimum volume." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance = { "DefaultMaxAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMaxAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData[] = {
		{ "Category", "Atom3dSource|Attenuation" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Min Distance" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "The distance at which the volume will not get any louder." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance = { "DefaultMinAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMinAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[] = {
		{ "Category", "Atom3dSource|Attenuation" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Show debug sheres for Min/Max attenuation distance visualization." },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsAttenuationDistanceDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible = { "bIsAttenuationDistanceDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData[] = {
		{ "Category", "Atom3dSource|Region" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Atom 3d Sound Region" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion = { "DefaultRegion", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData[] = {
		{ "Category", "Atom3dSource" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Output Volume Scale" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sets the volume of the 3D sound source." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale = { "DefaultOutputVolumeScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputVolumeScale), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComopnentForOutputInteriorPanDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_SphereComponentForOutputAttenuationDistanceMin,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dSourceBaseComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams = {
		&UAtom3dSourceBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dSourceBaseComponent, 408927916);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dSourceBaseComponent>()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dSourceBaseComponent(Z_Construct_UClass_UAtom3dSourceBaseComponent, &UAtom3dSourceBaseComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtom3dSourceBaseComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dSourceBaseComponent);
	void UAtom3dTransceiverComponent::StaticRegisterNativesUAtom3dTransceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dTransceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComopnentForInputCrossfadeEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComopnentForInputCrossfadeEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComopnentForInputCrossfadeDisabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComopnentForInputCrossfadeDisabled;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCrossfadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCrossfadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDirectAudioRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDirectAudioRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputCrossfadeFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGlobalAisacs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultGlobalAisacs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultGlobalAisacs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtom3dSourceBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Atom 3d Transcever \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\n *\n * Atom 3d Source \xe3\x81\xa8\xe5\x85\xb1\xe9\x80\x9a\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe3\x82\x84\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe5\x9f\xba\xe5\xba\x95\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9 UAtom3dAudioObjectComponent \xe5\x81\xb4\xe3\x81\xab\xe6\x8c\x81\xe3\x81\x9f\xe3\x81\x9b\xe3\x81\xa6\xe3\x81\x82\xe3\x82\x8b\xe3\x80\x82\n * \xe5\x9f\xba\xe5\xba\x95\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4 Source \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c Atom 3d \xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xaa\xe3\x83\xa2\xe3\x83\xbc\xe3\x83\x95\xe3\x82\xa3\xe3\x82\xba\xe3\x83\xa0\xe8\xa1\xa8\xe7\x8f\xbe\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8a\xe3\x80\x81\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\xaf Transceiver \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe7\xa2\xba\xe4\xbf\x9d\xe3\x81\x99\xe3\x82\x8b\xe3\x80\x82\n * \xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\xaf Atom 3d Source \xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b Atom 3d Transceiver \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\xae\xe5\xb7\xae\xe5\x88\x86\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe5\xae\x9a\xe7\xbe\xa9\xe3\x81\x97\xe3\x80\x81\n * Source \xe3\x81\xab\xe8\xa7\xa6\xe3\x82\x8c\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf Atom 3d Transcenver \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x83\x80\xe3\x82\xa6\xe3\x83\xb3\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x80\x82\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Atom3dTransceiverComponent.h" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Atom 3d Transcever \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe5\x8b\x95\xe4\xbd\x9c\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb3\xe3\x83\xb3\xe3\x83\x9d\xe3\x83\xbc\xe3\x83\x8d\xe3\x83\xb3\xe3\x83\x88\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\n\nAtom 3d Source \xe3\x81\xa8\xe5\x85\xb1\xe9\x80\x9a\xe3\x81\xae\xe5\x87\xa6\xe7\x90\x86\xe3\x82\x84\xe3\x83\x87\xe3\x83\xbc\xe3\x82\xbf\xe3\x81\xaf\xe5\x9f\xba\xe5\xba\x95\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9 UAtom3dAudioObjectComponent \xe5\x81\xb4\xe3\x81\xab\xe6\x8c\x81\xe3\x81\x9f\xe3\x81\x9b\xe3\x81\xa6\xe3\x81\x82\xe3\x82\x8b\xe3\x80\x82\n\xe5\x9f\xba\xe5\xba\x95\xe3\x81\x8c\xe6\x8c\x81\xe3\x81\xa4 Source \xe3\x83\x9d\xe3\x82\xa4\xe3\x83\xb3\xe3\x82\xbf\xe3\x81\x8c Atom 3d \xe9\x9f\xb3\xe6\xba\x90\xe3\x81\xae\xe3\x83\x9d\xe3\x83\xaa\xe3\x83\xa2\xe3\x83\xbc\xe3\x83\x95\xe3\x82\xa3\xe3\x82\xba\xe3\x83\xa0\xe8\xa1\xa8\xe7\x8f\xbe\xe3\x81\xa7\xe3\x81\x82\xe3\x82\x8a\xe3\x80\x81\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\xaf Transceiver \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x83\xa1\xe3\x83\xa2\xe3\x83\xaa\xe7\xa2\xba\xe4\xbf\x9d\xe3\x81\x99\xe3\x82\x8b\xe3\x80\x82\n\xe6\x9c\xac\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe3\x81\xa7\xe3\x81\xaf Atom 3d Source \xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b Atom 3d Transceiver \xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x81\xae\xe5\xb7\xae\xe5\x88\x86\xe6\xa9\x9f\xe8\x83\xbd\xe3\x81\xae\xe3\x81\xbf\xe3\x82\x92\xe5\xae\x9a\xe7\xbe\xa9\xe3\x81\x97\xe3\x80\x81\nSource \xe3\x81\xab\xe8\xa7\xa6\xe3\x82\x8c\xe3\x82\x8b\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf Atom 3d Transcenver \xe3\x82\xaa\xe3\x83\x96\xe3\x82\xb8\xe3\x82\xa7\xe3\x82\xaf\xe3\x83\x88\xe3\x81\xa8\xe3\x81\x97\xe3\x81\xa6\xe3\x83\x80\xe3\x82\xa6\xe3\x83\xb3\xe3\x82\xad\xe3\x83\xa3\xe3\x82\xb9\xe3\x83\x88\xe3\x81\x97\xe3\x81\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe3\x81\x99\xe3\x82\x8b\xe3\x80\x82" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeEnabled_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize interior distance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeEnabled = { "SphereComopnentForInputCrossfadeEnabled", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, SphereComopnentForInputCrossfadeEnabled), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeDisabled_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Sphere Component to visualize transceiver radius." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeDisabled = { "SphereComopnentForInputCrossfadeDisabled", nullptr, (EPropertyFlags)0x0020080800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, SphereComopnentForInputCrossfadeDisabled), Z_Construct_UClass_UDrawSphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeDisabled_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData[] = {
		{ "Category", "Atom3dTransceiver|InputCrossFade" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Default Crossfade Distance" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Within the range of direct audio radius to crossfade distance, the audio output crossfades between the 3d sound source and the transceiver." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance = { "DefaultCrossfadeDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultCrossfadeDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData[] = {
		{ "Category", "Atom3dTransceiver|InputCrossFade" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Default Direct Audio Radius" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Within this distance from the 3d source location, the audio is played directly from the 3d sound source." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius = { "DefaultDirectAudioRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultDirectAudioRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[] = {
		{ "Category", "Atom3dTransceiver|InputCrossFade" },
		{ "DisplayName", "Visible" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "Show debug sheres for visualization of Input-Crossfade-Field." },
	};
#endif
	void Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dTransceiverComponent*)Obj)->bIsInputCrossfadeFieldDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible = { "bIsInputCrossfadeFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dTransceiverComponent), &Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData[] = {
		{ "Category", "Atom3dTransceiver|Aisac" },
		{ "DisplayName", "Grobal Aisac" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "You need to set the AISAC control value." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultGlobalAisacs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData[] = {
		{ "Category", "Atom3dTransceiver" },
		{ "Comment", "/**\n\x09* \xe3\x83\x88\xe3\x83\xa9\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x90\xe3\x81\xae\xe5\x85\xa5\xe5\x8a\x9b\xe5\xba\xa7\xe6\xa8\x99\xe3\x81\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x82\x92\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\x09* \xe6\x9c\xaa\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xaeUAtom3dTransceiverComponent\xe3\x81\xae\xe5\xba\xa7\xe6\xa8\x99\xe3\x81\xa8\xe5\x90\x91\xe3\x81\x8d\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Atom3dTransceiverComponent.h" },
		{ "ToolTip", "\xe3\x83\x88\xe3\x83\xa9\xe3\x83\xb3\xe3\x82\xb7\xe3\x83\xbc\xe3\x83\x90\xe3\x81\xae\xe5\x85\xa5\xe5\x8a\x9b\xe5\xba\xa7\xe6\xa8\x99\xe3\x81\xa8\xe6\x96\xb9\xe5\x90\x91\xe3\x82\x92\xe4\xb8\x8e\xe3\x81\x88\xe3\x82\x8b\xe3\x82\xa2\xe3\x82\xaf\xe3\x82\xbf\xe3\x83\xbc\xe3\x81\xa7\xe3\x81\x99\xe3\x80\x82\n\xe6\x9c\xaa\xe6\x8c\x87\xe5\xae\x9a\xe3\x81\xae\xe5\xa0\xb4\xe5\x90\x88\xe3\x81\xaf\xe3\x81\x93\xe3\x81\xaeUAtom3dTransceiverComponent\xe3\x81\xae\xe5\xba\xa7\xe6\xa8\x99\xe3\x81\xa8\xe5\x90\x91\xe3\x81\x8d\xe3\x81\x8c\xe8\xa8\xad\xe5\xae\x9a\xe3\x81\x95\xe3\x82\x8c\xe3\x81\xbe\xe3\x81\x99\xe3\x80\x82" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint = { "InputPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, InputPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_SphereComopnentForInputCrossfadeDisabled,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dTransceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams = {
		&UAtom3dTransceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dTransceiverComponent, 315346261);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dTransceiverComponent>()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dTransceiverComponent(Z_Construct_UClass_UAtom3dTransceiverComponent, &UAtom3dTransceiverComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtom3dTransceiverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dTransceiverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
