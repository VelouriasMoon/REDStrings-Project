/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Backward Compatibility for UE4 API
 * File     : CriWareBackwardCompatible.h
 *
 ****************************************************************************/

 /* 多重定義防止 */
#pragma once
#include "CoreUObject/Public/UObject/UnrealType.h"
#include "Runtime/Launch/Resources/Version.h"

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
namespace CriUEProperty {
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	using FProperty = ::FProperty;
	using FDelegateProperty = ::FDelegateProperty;

	template <class T>
	typename TEnableIf<TIsDerivedFrom<T, FField>::IsDerived, T*>::Type FindFProperty(const UStruct* Owner, FName FieldName) { return ::FindFProperty<T>(Owner, FieldName); }
#else
	class FProperty : public UProperty {
		// Constructors.
		FProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : UProperty(ObjectInitializer) {}
		FProperty(ECppProperty, int32 InOffset, EPropertyFlags InFlags) : UProperty(EC_CppProperty, InOffset, InFlags) {}
		FProperty(const FObjectInitializer& ObjectInitializer, ECppProperty, int32 InOffset, EPropertyFlags InFlags) : UProperty(ObjectInitializer, EC_CppProperty, InOffset, InFlags) {}
	};

	class FDelegateProperty : public UDelegateProperty {
		FDelegateProperty(ECppProperty, int32 InOffset, EPropertyFlags InFlags, UFunction* InSignatureFunction = NULL)
			: UDelegateProperty(EC_CppProperty, InOffset, InFlags, InSignatureFunction)
		{
		}

		FDelegateProperty(const FObjectInitializer& ObjectInitializer, ECppProperty, int32 InOffset, EPropertyFlags InFlags, UFunction* InSignatureFunction = NULL)
			: UDelegateProperty(ObjectInitializer, EC_CppProperty, InOffset, InFlags , InSignatureFunction)
		{
		}
	};

	template <class T>
	T* FindFProperty(const UStruct* Owner, FName FieldName) { return ::FindField<T>(Owner, FieldName); }
#endif
}

/* --- end of file --- */
