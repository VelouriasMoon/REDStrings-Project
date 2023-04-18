#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "ActionManagerInterface.h"
#include "EActionIconSubQuestState.h"
#include "EActionIconType.h"
#include "NpcTownPeopleBase.h"
#include "QuestProgressState.h"
#include "RSNpcTownPeopleTickDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "NpcTownPeople.generated.h"

class AActor;
class AMakeEventActor;
class UAnimMontage;
class UBoxComponent;
class UChildActorComponent;
class URSNpcAnimInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcTownPeople : public ANpcTownPeopleBase, public IActionManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSNpcTownPeopleTickDelegate DispatchTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSubQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SubQuestIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleStartInSubQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VisibleAfterSubQuestCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    QuestProgressState SubQuestStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSNpcAnimInstance* NpcABPNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* RipSyncAnimMontageNative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BaseFacialAnimMontageNative;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MakeEventActorBPPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* MakeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActionIcon2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActionIconWorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconSubQuestState ActionIconSubQuestState;
    
public:
    ANpcTownPeople();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSubQuestStatus();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSubQuestId();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSubQuestActionIcon();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRipSyncNative();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterTownPeopleAction();
    
    UFUNCTION(BlueprintCallable)
    void TurnToPlayer(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void StopRipSyncMontageNative();
    
    UFUNCTION(BlueprintCallable)
    void StartRipSyncMontageNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartEventActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndEventActor(AActor* DestroyedMakeEventActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTalkEnablePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDefaultRipSyncType();
    
protected:
    UFUNCTION(BlueprintCallable)
    QuestProgressState GetSubQuestProgress(int32 subQuestNumber);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetActionIconWorldPositionOffset();
    
    UFUNCTION(BlueprintCallable)
    void AdjustIconOffsetByHeadHeight();
    
    
    // Fix for true pure virtual functions not being implemented
};

