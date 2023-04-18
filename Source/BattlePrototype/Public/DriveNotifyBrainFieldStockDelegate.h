#pragma once
#include "CoreMinimal.h"
#include "DriveNotifyBrainFieldStockDelegate.generated.h"

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDriveNotifyBrainFieldStock, int32, StockNum, bool, bItemUse, bool, bNoEffect);

