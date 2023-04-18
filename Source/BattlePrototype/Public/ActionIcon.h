#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ActionIconSupportParam.h"
#include "EActionIconMode.h"
#include "EActionIconSubQuestState.h"
#include "EActionIconType.h"
#include "ActionIcon.generated.h"

class AActionIcon;
class UBoxComponent;
class UPrimitiveComponent;
class UUIActionIcon;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AActionIcon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionIcon* PairActionIconActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconSubQuestState ActionIconSubQuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActionIconSubQuestActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIActionIcon* UIActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionIcon* PairActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverlapEventInvalidFlag;
    
public:
    AActionIcon();
    UFUNCTION(BlueprintCallable)
    void UpdateActionIconState();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldPositionOffset(const FVector& NewWorldPositionOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(const bool Flag, const bool UpdateState);
    
    UFUNCTION(BlueprintCallable)
    void SetSubQuestState(EActionIconSubQuestState State, bool subquestActive);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlapEventInvalidFlag(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetLockIconMode(bool isLock);
    
    UFUNCTION(BlueprintCallable)
    void setIconType(EActionIconType NewActionIconType, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleFlag(bool bBattle);
    
    UFUNCTION(BlueprintCallable)
    void SetActionIconSupportParam(const FActionIconSupportParam& ActionIconSupportParam);
    
    UFUNCTION(BlueprintCallable)
    void SetActionCollisionEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SafeSetIconMode(EActionIconMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void RestoreVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnReActivate();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionAbleIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActionIconSubQuestState GetSubQuestState() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOverlapEventInvalidFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActionIconType GetIconType() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckVisibleIcon(AActor* Actor);
    
};

