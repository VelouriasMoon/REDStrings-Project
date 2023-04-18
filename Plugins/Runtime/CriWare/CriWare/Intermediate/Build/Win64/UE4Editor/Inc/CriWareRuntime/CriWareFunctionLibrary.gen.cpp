// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Classes/CriWareFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static UEnum* ECriWareSpeakerSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriWareSpeakerSystem"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareSpeakerSystem>()
	{
		return ECriWareSpeakerSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECriWareSpeakerSystem(ECriWareSpeakerSystem_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("ECriWareSpeakerSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Hash() { return 167142409U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECriWareSpeakerSystem"), 0, Get_Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECriWareSpeakerSystem::Surround5Point1", (int64)ECriWareSpeakerSystem::Surround5Point1 },
				{ "ECriWareSpeakerSystem::Surround7Point1", (int64)ECriWareSpeakerSystem::Surround7Point1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/***************************************************************************\n *      \xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\n *      Prototype Classes\n ***************************************************************************/" },
				{ "ModuleRelativePath", "Classes/CriWareFunctionLibrary.h" },
				{ "Surround5Point1.Name", "ECriWareSpeakerSystem::Surround5Point1" },
				{ "Surround7Point1.Comment", "/** 5.1ch */" },
				{ "Surround7Point1.Name", "ECriWareSpeakerSystem::Surround7Point1" },
				{ "Surround7Point1.ToolTip", "5.1ch" },
				{ "ToolTip", "\xe3\x82\xaf\xe3\x83\xa9\xe3\x82\xb9\xe5\xae\xa3\xe8\xa8\x80\nPrototype Classes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"ECriWareSpeakerSystem",
				"ECriWareSpeakerSystem",
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
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectorName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LabelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(Z_Param_SelectorName,Z_Param_LabelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetGameVariableByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetGameVariableByName(Z_Param_GameVariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetSpeakerAngleArray)
	{
		P_GET_ENUM(ECriWareSpeakerSystem,Z_Param_SpeakerSystem);
		P_GET_TARRAY_REF(float,Z_Param_Out_Angles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetSpeakerAngleArray(ECriWareSpeakerSystem(Z_Param_SpeakerSystem),Z_Param_Out_Angles);
		P_NATIVE_END;
	}
	void UCriWareFunctionLibrary::StaticRegisterNativesUCriWareFunctionLibrary()
	{
		UClass* Class = UCriWareFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetGameVariableByName", &UCriWareFunctionLibrary::execSetGameVariableByName },
			{ "SetGlobalLabelToSelectorByName", &UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName },
			{ "SetSpeakerAngleArray", &UCriWareFunctionLibrary::execSetSpeakerAngleArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics
	{
		struct CriWareFunctionLibrary_eventSetGameVariableByName_Parms
		{
			FString GameVariableName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, GameVariableName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWareFunctionLibrary" },
		{ "Comment", "/* \xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Classes/CriWareFunctionLibrary.h" },
		{ "ToolTip", "\xe3\x82\xb2\xe3\x83\xbc\xe3\x83\xa0\xe5\xa4\x89\xe6\x95\xb0\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetGameVariableByName", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetGameVariableByName_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics
	{
		struct CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms
		{
			FString SelectorName;
			FString LabelName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LabelName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName = { "LabelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, LabelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, SelectorName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWareFunctionLibrary" },
		{ "Comment", "/* \xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb0\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x90\xe3\x83\xab\xe5\x8f\x82\xe7\x85\xa7\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Classes/CriWareFunctionLibrary.h" },
		{ "ToolTip", "\xe3\x82\xbb\xe3\x83\xac\xe3\x82\xaf\xe3\x82\xbf\xe3\x81\xab\xe5\xaf\xbe\xe3\x81\x99\xe3\x82\x8b\xe3\x82\xb0\xe3\x83\xad\xe3\x83\xbc\xe3\x83\x90\xe3\x83\xab\xe5\x8f\x82\xe7\x85\xa7\xe3\x83\xa9\xe3\x83\x99\xe3\x83\xab\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetGlobalLabelToSelectorByName", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics
	{
		struct CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms
		{
			ECriWareSpeakerSystem SpeakerSystem;
			TArray<float> Angles;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Angles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angles_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeakerSystem;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerSystem_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles = { "Angles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms, Angles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_Inner = { "Angles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem = { "SpeakerSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms, SpeakerSystem), Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "CriWareFunctionLibrary" },
		{ "Comment", "/* \xe3\x82\xb9\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xab\xe3\x83\xbc\xe8\xa7\x92\xe5\xba\xa6\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a */" },
		{ "ModuleRelativePath", "Classes/CriWareFunctionLibrary.h" },
		{ "ToolTip", "\xe3\x82\xb9\xe3\x83\x94\xe3\x83\xbc\xe3\x82\xab\xe3\x83\xbc\xe8\xa7\x92\xe5\xba\xa6\xe3\x81\xae\xe8\xa8\xad\xe5\xae\x9a" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetSpeakerAngleArray", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName, "SetGameVariableByName" }, // 3004251187
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName, "SetGlobalLabelToSelectorByName" }, // 2337818857
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray, "SetSpeakerAngleArray" }, // 1295951860
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CriWareFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/CriWareFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareFunctionLibrary_Statics::ClassParams = {
		&UCriWareFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareFunctionLibrary, 302290215);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareFunctionLibrary>()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareFunctionLibrary(Z_Construct_UClass_UCriWareFunctionLibrary, &UCriWareFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
