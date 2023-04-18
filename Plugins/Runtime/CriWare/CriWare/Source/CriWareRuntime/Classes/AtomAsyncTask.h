// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

/*=============================================================================
	AudioThread.h: Rendering thread definitions.
=============================================================================*/

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "Async/TaskGraphInterfaces.h"
#include "HAL/Runnable.h"
#include "Containers/Queue.h"
#include "SoundAtomCue.h"
#include "AtomAudioVolumeHandler.h"

////////////////////////////////////
// Audio thread API
////////////////////////////////////

class FAtomAsyncTask : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FAtomAsyncTask>;

public:
	FAtomAsyncTask(TFunction<void()> InWork)
		: Work(InWork)
	{
	}

	void DoWork()
	{
		// コンストラクタで指定された関数を実行
		Work();
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FAtomAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

private:
	TFunction<void()> Work;
};
