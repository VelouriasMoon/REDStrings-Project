/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Runtime sub modules listener.
 * File     : CriWareRuntimeSubModules.h
 *
 ****************************************************************************/

#pragma once

#include "Containers/Array.h"

/** Interface for CriWareRuntime sub modules and expansions. */
class ICriWareRuntimeSubModule
{
protected:
	virtual ~ICriWareRuntimeSubModule() {}

public:
	/** Override this to initialize stuff before criware runtime initializes Cri native libraries. */
	virtual void PreInitializeLibraries() {}

	/** Override this to initialize stuff after criware runtime initializes Cri native libraries. */
	virtual void PostInitializeLibraries() {}

	/** Override this to finalize stuff before criware runtime finalizes Cri native libraries. */
	virtual void PreFinalizeLibraries() {}

	/** Override this to finalize stuff after criware runtime finalizes Cri native libraries. */
	virtual void PostFinalizeLibraries() {}
};

/** Management class for CriWareRuntime sub modules and expansions. */
class FCriWareRuntimeSubModules
{
	friend class UCriWareInitializer;

public:
	/** Register a sub module to receive initalization/finalization events from CriWareRuntime module. */
	FORCEINLINE void RegisterSubModule(ICriWareRuntimeSubModule* CriWareInterface) {
		ISubModules.Add(CriWareInterface);
	}

	/** Unregister a sub module to stop to receive initalization/finalization events from CriWareRuntime module. */
	FORCEINLINE void UnregisterSubModule(ICriWareRuntimeSubModule* CriWareInterface) {
		ISubModules.Remove(CriWareInterface);
	}

private:
	void OnPreInitializeLibraries();
	void OnPostInitializeLibraries();
	void OnPreFinalizeLibraries();
	void OnPostFinalizeLibraries();

private:
	TArray<ICriWareRuntimeSubModule*> ISubModules;
};
