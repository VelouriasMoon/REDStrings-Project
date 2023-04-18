/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2020 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : Runtime sub modules listener.
 * File     : CriWareRuntimeSubModules.cpp
 *
 ****************************************************************************/

#include "CriWareRuntimeSubModules.h"

//~ FCriWareRuntimeSubModules implementation

void FCriWareRuntimeSubModules::OnPreInitializeLibraries()
{
	for (int i = 0; i < ISubModules.Num(); i++)
	{ 
		ISubModules[i]->PreInitializeLibraries();
	}
}

void FCriWareRuntimeSubModules::OnPostInitializeLibraries()
{
	for (int i = 0; i < ISubModules.Num(); i++)
	{
		ISubModules[i]->PostInitializeLibraries();
	}
}

void FCriWareRuntimeSubModules::OnPreFinalizeLibraries()
{
	for (int i = 0; i < ISubModules.Num(); i++)
	{
		ISubModules[i]->PreFinalizeLibraries();
	}
}

void FCriWareRuntimeSubModules::OnPostFinalizeLibraries()
{
	for (int i = 0; i < ISubModules.Num(); i++)
	{
		ISubModules[i]->PostFinalizeLibraries();
	}
}
