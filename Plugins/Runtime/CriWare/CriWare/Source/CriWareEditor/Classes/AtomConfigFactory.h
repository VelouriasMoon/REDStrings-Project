/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Factory of Atom Config File
 * File     : AtomConfigFactory.h
 *
 ****************************************************************************/

#pragma once

#include "Factories/Factory.h"
#include "EditorReimportHandler.h"

#include "AtomConfigFactory.generated.h"


UCLASS(hidecategories=Object)
class UAtomConfigFactory : public UFactory, public FReimportHandler
{
	GENERATED_BODY()

public:
	UAtomConfigFactory(const FObjectInitializer& ObjectInitializer);

	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateBinary(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, const TCHAR* Type, const uint8*& Buffer, const uint8* BufferEnd, FFeedbackContext* Warn) override;
	//~ End UFactory Interface

	//~ Begin FReimportHandler interface
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames) override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;
	virtual EReimportResult::Type Reimport(UObject* Obj) override;
	//~ End FReimportHandler interface

	//~ Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	//~ End  UObject interface

private:
	/* アクションが登録済みかどうか */
	static bool bIsActionRegistered;
};

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/* --- end of file --- */
