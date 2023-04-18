#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerCopyInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UPlayerCopyInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IPlayerCopyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayerCopy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsExistPlayerCopy();
    
};

