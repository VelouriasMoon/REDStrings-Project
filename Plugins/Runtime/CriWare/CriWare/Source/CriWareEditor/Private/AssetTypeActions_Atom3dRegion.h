// Copyright (c) CRI Middleware Co., Ltd.

 /* 多重定義防止 */
#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_Atom3dRegion : public FAssetTypeActions_Base
{
public:
	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_Atom3dRegion", "Atom 3d Region"); }
	virtual FColor GetTypeColor() const override { return FColor(51, 255, 153); }
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override { return EAssetTypeCategories::Sounds; }
};

