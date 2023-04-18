/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Sound Atom Cue Factory
* File     : SoundAtomCueFactory.cpp
*
****************************************************************************/

#include "SoundAtomCueFactory.h"
#include "SoundAtomCue.h"


#define LOCTEXT_NAMESPACE "SoundAtomCueFactory"


USoundAtomCueFactory::USoundAtomCueFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = USoundAtomCue::StaticClass();
	bCreateNew = true;
	bEditorImport = false;
	bEditAfterNew = true;
}

UObject* USoundAtomCueFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<USoundAtomCue>(InParent, Name, Flags);
}


#undef LOCTEXT_NAMESPACE
