#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "UserData.h"
#include "UserDataAccessor.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UUserDataAccessor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserData UserData;
    
public:
    UUserDataAccessor();
};

