#pragma once
#include "CoreMinimal.h"
#include "ENpcAnimationKind.h"
#include "NpcCommonInterface.h"
#include "NpcIconOffsetInfo.h"
#include "NpcSkeletalMeshActor.h"
#include "Templates/SubclassOf.h"
#include "NpcTownPeopleBase.generated.h"

class UActorComponent;
class UAnimInstance;
class UDataTable;
class URSNpcAnimInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcTownPeopleBase : public ANpcSkeletalMeshActor, public INpcCommonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAnimationKind FirstAnimationKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAtPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IconOffsetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNpcIconOffsetInfo> IconOffsetDataInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCullingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseTick;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSNpcAnimInstance> AnimationBP;
    
public:
    ANpcTownPeopleBase();
    UFUNCTION(BlueprintCallable)
    void SetupGround();
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtPlayer(bool IsLookAt);
    
    UFUNCTION(BlueprintCallable)
    void SetCulling(bool Culling);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UActorComponent* GetLookAtComponent() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHeadHeight();
    
    UFUNCTION(BlueprintCallable)
    bool CheckCulling();
    
    
    // Fix for true pure virtual functions not being implemented
};

