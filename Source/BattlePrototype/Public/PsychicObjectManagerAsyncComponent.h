#pragma once
#include "CoreMinimal.h"
#include "RSAsyncTaskActorComponent.h"
#include "PsychicObjectManagerAsyncComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPsychicObjectManagerAsyncComponent : public URSAsyncTaskActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncTack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickControlEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickControlPrevAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickControlTickAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickControlDistanceSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickControlActorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TickControlChangeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBrainField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderCheckEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderCheckPrevAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRenderCheckTickAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPrintTickControl;
    
public:
    UPsychicObjectManagerAsyncComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerPos();
    
private:
    UFUNCTION(BlueprintCallable)
    void TickControlTickAsync();
    
    UFUNCTION(BlueprintCallable)
    void TickControlPrevAsync();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTickReference(const FString& refName, bool Flag);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTickControlParameter(float activeDistance, int32 actorNumPerFrame, int32 changeNumPerFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetTickControlEnable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetTickControlBrainField(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCheckEnable(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCheckActor(bool Flag, AActor* pActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void RenderCheckTickAsync();
    
    UFUNCTION(BlueprintCallable)
    void RenderCheckPrevAsync();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetRenderCheckActorListLen();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetRenderCheckActor(int32 Index);
    
};

