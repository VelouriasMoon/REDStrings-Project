// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomListenerFocusPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPoint() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomListenerFocusPoint::StaticRegisterNativesUAtomListenerFocusPoint()
	{
	}
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	struct Z_Construct_UClass_UAtomListenerFocusPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionFocusLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionFocusLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFocusLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFocusLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera Common" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "AtomListenerFocusPoint.h" },
		{ "ModuleRelativePath", "Classes/AtomListenerFocusPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AtomListenerFocusPoint class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AtomListenerFocusPoint.h" },
		{ "ToolTip", "Direction focus level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel = { "DirectionFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomListenerFocusPoint, DirectionFocusLevel), METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData[] = {
		{ "Category", "Atom" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AtomListenerFocusPoint.h" },
		{ "ToolTip", "Distance focus level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel = { "DistanceFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomListenerFocusPoint, DistanceFocusLevel), METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomListenerFocusPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomListenerFocusPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams = {
		&UAtomListenerFocusPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomListenerFocusPoint, 3546731011);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomListenerFocusPoint>()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomListenerFocusPoint(Z_Construct_UClass_UAtomListenerFocusPoint, &UAtomListenerFocusPoint::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomListenerFocusPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomListenerFocusPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
