// Copyright (c) CRI Middleware Co., Ltd.

#include "AssetTypeActions_Atom3dRegion.h"
#include "Atom3dRegion.h"

UClass* FAssetTypeActions_Atom3dRegion::GetSupportedClass() const
{
	return UAtom3dRegion::StaticClass();
}
