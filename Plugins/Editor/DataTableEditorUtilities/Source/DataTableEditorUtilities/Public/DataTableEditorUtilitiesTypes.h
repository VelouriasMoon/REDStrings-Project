//==========================================================================//
// Copyright Elhoussine Mehnik (ue4resources@gmail.com). All Rights Reserved.
//================== http://unrealengineresources.com/ =====================//

#pragma once

#include "CoreMinimal.h"
#include "DataTableEditorUtilitiesTypes.generated.h"

UENUM(BlueprintType)
enum class EDataTableRowInsertPosition : uint8
{
	Above,
	Below,
};


UENUM(BlueprintType)
enum class EDataTableRowMoveDirection : uint8
{
	Up,
	Down,
};