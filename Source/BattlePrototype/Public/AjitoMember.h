#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ActionManagerInterface.h"
#include "EActionIconType.h"
#include "EPlayerID.h"
#include "NpcIconOffsetInfo.h"
#include "Templates/SubclassOf.h"
#include "AjitoMember.generated.h"

class AActionIcon;
class AMakeEventActor;
class UBoxComponent;
class UCapsuleComponent;
class UChildActorComponent;
class UDataTable;
class URSAjitoAnimInstance;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAjitoMember : public AActor, public IActionManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_storeSkeletalMeshTransform;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaceNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExclusivePlaceNoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WithPlaceNoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLookAtPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CharacterCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* MakeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverlappingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionIconCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAvalableAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionIcon* ActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActionIconWorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetIconOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSAjitoAnimInstance> AnimClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URSAjitoAnimInstance> AnimationBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IconOffsetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNpcIconOffsetInfo> IconOffsetDataInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeTransitionToTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeTransitionToIdle;
    
    AAjitoMember();
    UFUNCTION(BlueprintCallable)
    void WaitTransitionToTalk(float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void WaitTransitionToIdle(float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTargetIconOffsetZ();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateActionIcon();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetIconOffsetZ(float HeadHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetNowDitherValue(float DitherValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIconOffsetPreset(FName RawName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAttachmentVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetAjitoMemberMaterialScalarParameter(const FName ParameterName, const float ParameterValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActionIcoVisible(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetActionIconType(EActionIconType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestTalkStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestTalkEnd();
    
    UFUNCTION(BlueprintCallable)
    void PresentEventStart();
    
    UFUNCTION(BlueprintCallable)
    void PresentEventEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitTransitionToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitTransitionToIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsTalkEnablePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsReadyToTalk() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActiveMakeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNowDitherValue();
    
    UFUNCTION(BlueprintCallable)
    float GetHeadHeight();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllOmActors();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaitTransitionToTalk();
    
    UFUNCTION(BlueprintCallable)
    void ClearWaitTransitionToIdle();
    
    UFUNCTION(BlueprintCallable)
    void AdjustIconOffsetByHeadHeightForce(float HeadHeight);
    
    UFUNCTION(BlueprintCallable)
    void AdjustIconOffsetByHeadHeight();
    
    
    // Fix for true pure virtual functions not being implemented
};

