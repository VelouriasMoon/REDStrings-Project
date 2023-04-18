/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : Platform
* File     : CriWarePlatform.h
*
****************************************************************************/
#pragma once

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
#include "CriWareMemory.h"

//---------------------------------------------------------
// Platform specific module interfaces
//---------------------------------------------------------

class ICriWarePlatformAtom {
protected:
	virtual ~ICriWarePlatformAtom() {}
public:
	virtual void InitializeAtomLibrary() {}
	virtual void FinalizeAtomLibrary() {}
};

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */

class FCriWarePlatform
{
public:
#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#else	/* </cri_delete_if_LE> */
	FCriWarePlatform() : IAtom(nullptr) {}
#endif

	FORCEINLINE void RegisterPlatformAtomInterface(ICriWarePlatformAtom* AtomInterface) {
		IAtom = AtomInterface;
	}
	FORCEINLINE void UnregisterPlatformAtomInterface() { IAtom = nullptr; }
	FORCEINLINE ICriWarePlatformAtom* Atom() { return IAtom; }
private:
	ICriWarePlatformAtom* IAtom;

#if !defined(CRIWARE_UE4_LE)	/* <cri_delete_if_LE> */
#endif	/* </cri_delete_if_LE> */
};
