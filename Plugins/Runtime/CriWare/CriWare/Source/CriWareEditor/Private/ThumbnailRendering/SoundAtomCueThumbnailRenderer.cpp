/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2015-2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Thumbnail renderer for SoundAtomCue assets.
 * File     : SoundAtomCueThumbnailRenderer.cpp
 *
 ****************************************************************************/

#include "ThumbnailRendering/SoundAtomCueThumbnailRenderer.h"
#include "CanvasItem.h"
#include "SoundAtomCue.h"
#include "SoundAtomCueSheet.h"
#include "AtomWavePlayer.h"
#include "CriWarePreviewer.h"
#include "CriWareApi.h"


USoundAtomCueThumbnailRenderer::USoundAtomCueThumbnailRenderer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool USoundAtomCueThumbnailRenderer::CanVisualizeAsset(UObject* Object)
{
	USoundAtomCue* AtomCue = Cast<USoundAtomCue>(Object);
	if (!AtomCue)
	{
		return false;
	}
	return true;
}

void USoundAtomCueThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget*, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	USoundAtomCue* SoundAtomCue = Cast<USoundAtomCue>(Object);
	if (SoundAtomCue != nullptr && SoundAtomCue->Validate())
	{
		if (SoundAtomCue->RawSnapshot.GetBulkDataSize() > 0)
		{
			SoundAtomCue->bNeedsThumbnailGeneration = false;

			// Canvas line item to draw with
			FCanvasLineItem LineItem;
			LineItem.SetColor(SoundAtomCue->CueColor);

			uint16* RawWaveData = (uint16*)SoundAtomCue->RawSnapshot.Lock(LOCK_READ_ONLY);
			int32 RawDataSize = SoundAtomCue->RawSnapshot.GetBulkDataSize();

			// Compute the scaled y-value used to render the channel data
			const float SampleYScale = Height / (2.f * 32767 * SoundAtomCue->RawSnapshotNumChannels);

			// Sample count
			const uint32 NumChannels = SoundAtomCue->RawSnapshotNumChannels;
			const uint32 TotalFrameCount = 512; // actually fixed to 512
			const uint32 TotalSampleCount = TotalFrameCount * NumChannels;
			const uint32 FramesPerPixel = TotalFrameCount / Width;
			const float FrameScale = (float)TotalFrameCount / Width;

			// Get the sample data of this file
			const int16* SamplePtr = reinterpret_cast<const int16*>(RawWaveData);

			// Render each channel separately so outer loop is the sound wave channel index.
			// Note: for multi-channel files this will always be 1-channel (mono).
			for (uint32 ChannelIndex = 0; ChannelIndex < NumChannels; ++ChannelIndex)
			{
				// Reset the current frame count as we're starting from the beginning of the file to
				// render the channel data
				uint32 CurrentFrameCount = 0;

				// Loop through each pixel (in x direction)
				for (uint32 PixelIndex = 0; PixelIndex < Width; ++PixelIndex)
				{
					// reset the sample sum and num samples in pixel for each pixel
					int64 SampleSum = 0;
					int32 NumSamplesInPixel = 0;

					if (FramesPerPixel > 0)
					{
						// resampling

						// Loop through all pixels in this x-frame, sum all audio data. Track total frames rendered to avoid writing past buffer boundary
						for (uint32 PixelFrameIndex = 0; PixelFrameIndex < FramesPerPixel && CurrentFrameCount < TotalFrameCount; ++PixelFrameIndex)
						{
							// Get the sample value of the wave file
							const uint32 SampleIndex = CurrentFrameCount * NumChannels + ChannelIndex;
							check(SampleIndex < TotalSampleCount);
							int16 SampleValue = SamplePtr[SampleIndex];

							// Sum the sample value with the running sum
							SampleSum += FMath::Abs(SampleValue);

							// Track the number of samples we're actually summing to get an accurate average
							++NumSamplesInPixel;

							// Increment the frame after processing channels
							++CurrentFrameCount;
						}
					}
					else
					{
						// interpolation to nearest

						// Get the sample value of the wave file
						const uint32 SampleIndex = (uint32)(CurrentFrameCount * FrameScale) * NumChannels + ChannelIndex;
						check(SampleIndex < TotalSampleCount);
						int16 SampleValue = SamplePtr[SampleIndex];

						// copy the sample value
						SampleSum = FMath::Abs(SampleValue);

						// Only one sample is added per pixel
						NumSamplesInPixel = 1;

						// Increment the frame after processing channels
						++CurrentFrameCount;
					}

					// If we actually added any audio data in this pixel
					if (NumSamplesInPixel > 0)
					{
						const float AverageSampleValue = (float)SampleSum / NumSamplesInPixel;
						const float AverageSampleValueScaled = AverageSampleValue * SampleYScale;

						// Don't try to draw anything if the audio data was too quiet
						if (AverageSampleValueScaled > 0.001f)
						{
							// Draw vertical line mirrored around x-axis for channel equal to average sample value height
							const float YCenter = Y + ((2 * ChannelIndex) + 1) * Height / (2.f * NumChannels);
							LineItem.Draw(Canvas, FVector2D(X + PixelIndex, YCenter - AverageSampleValueScaled), FVector2D(X + PixelIndex, YCenter + AverageSampleValueScaled));
						}
					}
				}
			}

			SoundAtomCue->RawSnapshot.Unlock();
		}

		// overlays
		FString TypeChars = TEXT("");
		switch (SoundAtomCue->FirstWaveInfo.Format) {
		case EAtomFormat::ADX: TypeChars = TEXT("ADX"); break;
		case EAtomFormat::HCA: TypeChars = TEXT("HCA"); break;
		case EAtomFormat::HCAMX: TypeChars = TEXT("HCA-MX"); break;
		case EAtomFormat::AIFF: TypeChars = TEXT("AIFF"); break;
		case EAtomFormat::Wave: TypeChars = TEXT("Wave"); break;
		case EAtomFormat::RawPCM: TypeChars = TEXT("Raw"); break;
		case EAtomFormat::Vibration: TypeChars = TEXT("Haptic"); break;
		case EAtomFormat::AudioBuffer: TypeChars = TEXT("Buffer"); break;
		case EAtomFormat::Instrument: TypeChars = TEXT("Synth"); break;
		case EAtomFormat::Hardware1: TypeChars = TEXT("HW1"); break;
		case EAtomFormat::Hardware2: TypeChars = TEXT("HW2"); break;
		}

		int32 TypeWidth = 0;
		int32 TypeHeight = 0;
		StringSize(GEngine->GetLargeFont(), TypeWidth, TypeHeight, *TypeChars);
		float PaddingX = Width / 128.0f;
		float PaddingY = Height / 128.0f;
		float ScaleX = Width / 64.0f; //Text is 1/64'th of the size of the thumbnails
		float ScaleY = Height / 64.0f;
		// Type/Time overlay
		FCanvasTextItem TextItem(FVector2D(Width - PaddingX - TypeWidth * ScaleX, Height - PaddingY - TypeHeight * ScaleY), FText::FromString(TypeChars), GEngine->GetLargeFont(), FLinearColor::White);
		TextItem.EnableShadow(FLinearColor::Black);
		TextItem.Scale = FVector2D(ScaleX, ScaleY);
		TextItem.Draw(Canvas);
	}
}

bool USoundAtomCueThumbnailRenderer::AllowsRealtimeThumbnails(UObject* Object) const
{
	USoundAtomCue* SoundAtomCue = Cast<USoundAtomCue>(Object);
	if (SoundAtomCue)
	{
		return SoundAtomCue->bNeedsThumbnailGeneration;
	}
	return false;
}
