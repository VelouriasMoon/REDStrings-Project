#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "ASTakeHitInfo.generated.h"

class AASCharacter;
class AActor;

USTRUCT(BlueprintType)
struct FASTakeHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActualDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DamageTypeClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AASCharacter> PawnInstigator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageEventClassID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKilled: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnsureReplicationByte;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageEvent GeneralDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointDamageEvent PointDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadialDamageEvent RadialDamageEvent;
    
public:
    ACTIONSYSTEM_API FASTakeHitInfo();
};

