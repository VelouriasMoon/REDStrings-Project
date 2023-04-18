/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Thumbnail renderer for SoundAtomCue assets.
 * File     : SoundAtomCueThumbnailRenderer.h
 *
 ****************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "ThumbnailRendering/ThumbnailRenderer.h"
#include "../Launch/Resources/Version.h"

#include "SoundAtomCueThumbnailRenderer.generated.h"

class FCanvas;
class FRenderTarget;
class USoundAtomCue;
class UAtomWavePlayer;

/**
 * This thumbnail renderer generates a render of a waveform from an atom cue.
 */
UCLASS()
class USoundAtomCueThumbnailRenderer : public UThumbnailRenderer
{
	GENERATED_UCLASS_BODY()

	//~ Begin UThumbnailRenderer Object
	virtual bool CanVisualizeAsset(UObject* Object);
#if	ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 25
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily) override;
#else
	virtual void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* Viewport, FCanvas* Canvas) override { Draw(Object, X, Y, Width, Height, Viewport, Canvas, false); };
	void Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily);
#endif
	virtual bool AllowsRealtimeThumbnails(UObject* Object) const override;
	//~ End UThumbnailRenderer Object
};
