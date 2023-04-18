#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "CharacterInfo.h"
#include "CharactersParameterBasic.h"
#include "CharactersParameterManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UCharactersParameterManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterInfo> m_characterInfoList;
    
public:
    UCharactersParameterManager();
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterInfo(const AActor* Actor, FCharactersParameterBasic charaParam);
    
};

