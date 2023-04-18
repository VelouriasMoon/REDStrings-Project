/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Previewer
 * File     : CriWarePreviewer.h
 *
 ****************************************************************************/

#pragma once

#include "AtomPreviewer.h"

#include "CriWarePreviewer.generated.h"

class USoundAtomCue;
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

// TODO: use same class UCriWareEditor instancied by the module (that is obviously a singleton)
// that wiil hold settings, previewer objects, and any editor transient sub objects!

UCLASS(transient)
class UCriWarePreviewer : public UObject
{
public:
	GENERATED_BODY()

public:
	// Audio
	TUniquePtr<FAtomPreviewer> AtomPreviewer;

	/* <cri_delete_if_LE> */
	/* </cri_delete_if_LE> */

public:
	/* エディタプレビュー用 */
	void PlayPreviewSound(USoundAtomCue* Sound);
	bool IsPreviewSoundPlaying(USoundAtomCue* Sound);
	void StopPreviewSound();
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

public:
	void Init();
	void Shutdown();

	// UObject interface
	virtual void BeginDestroy() override;
	virtual void FinishDestroy() override;
	// ~ end of UObejct

public:
	UPROPERTY()
	UWorld* PreviewWorld;
	
	UPROPERTY()
	AActor* PreviewActor;
};

/** The editor object. */
extern class UCriWarePreviewer* GCriWarePreviewer;

/* --- end of file --- */
