#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EDiscoverIconType.h"
#include "EDiscoverType.h"
#include "UIBase.h"
#include "UIDiscover.generated.h"

class AActor;
class UOverlay;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIDiscover : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_EmActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EmPosData;
    
public:
    UUIDiscover();
    UFUNCTION(BlueprintCallable)
    void UpdateStateDiscover(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePosDiscover();
    
    UFUNCTION(BlueprintCallable)
    void Start(EDiscoverType Type, AActor* EmActor);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxTimer(float Timer);
    
    UFUNCTION(BlueprintCallable)
    void SetDiscoverIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDiscoverIcon(EDiscoverIconType Type);
    
    UFUNCTION(BlueprintCallable)
    void InitializeData(UOverlay* FrameData);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_discover, UWidgetAnimation* in_discover, UWidgetAnimation* out_discover, UWidgetAnimation* default_undiscover, UWidgetAnimation* in_undiscover, UWidgetAnimation* out_undiscover, UWidgetAnimation* default_undiscoverOver, UWidgetAnimation* out_undiscoverOver);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDiscoverIndex();
    
    UFUNCTION(BlueprintCallable)
    void ForceVisible(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseDead();
    
    UFUNCTION(BlueprintCallable)
    void ForceClose();
    
};

