// Copyright (c) CRI Middleware Co., Ltd.

#include "Atom3dRegionFactory.h"
#include "Atom3dRegion.h"


#define LOCTEXT_NAMESPACE "Atom3dRegionFactory"


UAtom3dRegionFactory::UAtom3dRegionFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UAtom3dRegion::StaticClass();
	bCreateNew = true;
	bEditorImport = false;
	bEditAfterNew = true;
}

bool UAtom3dRegionFactory::DoesSupportClass(UClass* Class)
{
	return (Class == UAtom3dRegion::StaticClass());
}

UClass* UAtom3dRegionFactory::ResolveSupportedClass()
{
	return UAtom3dRegion::StaticClass();
}

UObject* UAtom3dRegionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UAtom3dRegion* SoundAtom3dRegionObj = NewObject<UAtom3dRegion>(InParent, Name, Flags);
	return SoundAtom3dRegionObj;
}


#undef LOCTEXT_NAMESPACE
