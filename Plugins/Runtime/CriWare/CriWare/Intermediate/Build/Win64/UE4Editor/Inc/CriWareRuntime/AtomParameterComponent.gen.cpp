// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomParameterComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomParameterComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
// End Cross Module References
	void UAtomParameterComponent::StaticRegisterNativesUAtomParameterComponent()
	{
	}
	UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister()
	{
		return UAtomParameterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomParameterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomParameterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "CRIWARE Common" },
		{ "DisplayName", "Atom Parameter" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD" },
		{ "IncludePath", "AtomParameterComponent.h" },
		{ "ModuleRelativePath", "Classes/AtomParameterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Atom Parameter Component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "ModuleRelativePath", "Classes/AtomParameterComponent.h" },
		{ "ToolTip", "A 3D sound source that belongs to the same region as the transceiver is output from that transceiver." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomParameterComponent, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData[] = {
		{ "Category", "AtomParameter" },
		{ "ModuleRelativePath", "Classes/AtomParameterComponent.h" },
		{ "ToolTip", "AtomSoundObject." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtomParameterComponent, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomParameterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomParameterComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams = {
		&UAtomParameterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomParameterComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomParameterComponent, 4239969018);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomParameterComponent>()
	{
		return UAtomParameterComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomParameterComponent(Z_Construct_UClass_UAtomParameterComponent, &UAtomParameterComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomParameterComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomParameterComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
