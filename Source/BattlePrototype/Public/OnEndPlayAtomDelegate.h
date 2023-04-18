#pragma once
#include "CoreMinimal.h"
#include "OnEndPlayAtomDelegate.generated.h"

class URSAtomComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnEndPlayAtom, URSAtomComponentBase*, AtomComp);

