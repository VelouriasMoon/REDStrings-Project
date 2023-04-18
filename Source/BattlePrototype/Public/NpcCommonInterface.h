#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Internationalization/Text.h"
#include "ENpcAnimationKind.h"
#include "NpcCommonInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UNpcCommonInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API INpcCommonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDrawMessageFacial(const FString& messageLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ETextGender GetNpcMeshGenderType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetChangePeopleDataHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeAnimation(ENpcAnimationKind AnimKind);
    
};

