/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2013-2016 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : CriWareRuntime Module Implementation
* File     : CriWareRuntimeModule.cpp
*
****************************************************************************/

#include "CriWareRuntimePrivatePCH.h"
#include "ICriWareRuntime.h"
#include "HAL/PlatformFilemanager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"


/**
* CriWareRuntime module implementation (private)
*/

class FCriWareRuntimeModule : public ICriWareRuntime
{
public:
	
	//~ Start of IModuleInterface
	
	virtual void StartupModule() override
	{
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
	}

	virtual void ShutdownModule() override
	{
	}

	//~ End of IModuleInterface
};

IMPLEMENT_MODULE(FCriWareRuntimeModule, CriWareRuntime);
