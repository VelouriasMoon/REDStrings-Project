#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "ActionManagerInterface.h"
#include "EActionIconSubQuestState.h"
#include "EActionIconType.h"
#include "EGimmickObjectStatus.h"
#include "Templates/SubclassOf.h"
#include "GimmickActionBase.generated.h"

class AActionIcon;
class AGimmickObjectBase;
class AMakeEventActor;
class UBoxComponent;
class UChildActorComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGimmickActionBase : public AActor, public IActionManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActionEnableWhileOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActionEnableWhileClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActionIcon* ActionIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EventBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> OnActionMakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* OnActionMakeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> OnExitMakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* OnExitMakeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActionIconWorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconSubQuestState ActionIconSubQuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGimmickObjectBase* TargetGimmickObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseActionIcon;
    
public:
    AGimmickActionBase();
    UFUNCTION(BlueprintCallable)
    void UpdateActionEnable(EGimmickObjectStatus Status);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetActionIconVisible(bool Visible);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsActionEnable();
    
    UFUNCTION(BlueprintCallable)
    void DisableAction();
    
    UFUNCTION(BlueprintCallable)
    bool CallOpenEventToGimmickObject();
    
    UFUNCTION(BlueprintCallable)
    bool CallCloseEventToGimmickObject();
    
    
    // Fix for true pure virtual functions not being implemented
};

