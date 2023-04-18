#pragma once
#include "CoreMinimal.h"
#include "CharacterHPEventInfo.h"
#include "ECharacterEventType.h"
#include "OnCharacterHPEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintAuthorityOnly, BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCharacterHPEvent, AActor*, Actor, ECharacterEventType, EventType, FCharacterHPEventInfo&, eventInfo);

