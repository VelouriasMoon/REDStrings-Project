// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/AtomSoundObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundObject() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomSoundObject::StaticRegisterNativesUAtomSoundObject()
	{
	}
	UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister()
	{
		return UAtomSoundObject::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSoundObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCategoryCueLimitScope_MetaData[];
#endif
		static void NewProp_EnableCategoryCueLimitScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCategoryCueLimitScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableVoiceLimitScope_MetaData[];
#endif
		static void NewProp_EnableVoiceLimitScope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableVoiceLimitScope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSoundObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSoundObject.h" },
		{ "ModuleRelativePath", "Classes/AtomSoundObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AtomSoundObject class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/AtomSoundObject.h" },
		{ "ToolTip", "Enable category Cue limit scope." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_SetBit(void* Obj)
	{
		((UAtomSoundObject*)Obj)->EnableCategoryCueLimitScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope = { "EnableCategoryCueLimitScope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomSoundObject), &Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/AtomSoundObject.h" },
		{ "ToolTip", "Enable voice limit scope." },
	};
#endif
	void Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_SetBit(void* Obj)
	{
		((UAtomSoundObject*)Obj)->EnableVoiceLimitScope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope = { "EnableVoiceLimitScope", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAtomSoundObject), &Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableCategoryCueLimitScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomSoundObject_Statics::NewProp_EnableVoiceLimitScope,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSoundObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSoundObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomSoundObject_Statics::ClassParams = {
		&UAtomSoundObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomSoundObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSoundObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSoundObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomSoundObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomSoundObject, 425373012);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomSoundObject>()
	{
		return UAtomSoundObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomSoundObject(Z_Construct_UClass_UAtomSoundObject, &UAtomSoundObject::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomSoundObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSoundObject);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtomSoundObject)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
