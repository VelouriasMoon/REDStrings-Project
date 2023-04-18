#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "DamagePointKind.h"
#include "DamagePopupDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_NineParams(FDamagePopupDelegate, FVector, Location, int32, Damage, float, crashDamage, DamagePointKind, kind, bool, isCritical, bool, isWeakhit, bool, isStealthCritical, bool, isBrainCrash, AActor*, attackActor);

