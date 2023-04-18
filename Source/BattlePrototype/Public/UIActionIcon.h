#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "EActionIconSubQuestState.h"
#include "UIBase.h"
#include "UIActionIcon.generated.h"

class AActor;
class UImage;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIActionIcon : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D baseOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UUIActionIcon();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void setSubQuestStateDetail(EActionIconSubQuestState State, bool isQuestActive, bool IsActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultNone, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDecision, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animIn2, UWidgetAnimation* animOut2, UWidgetAnimation* animSelect_Progress, UWidgetAnimation* animSelectIn_Progress, UWidgetAnimation* animSelectOut_Progress, UWidgetAnimation* animIn2_Progress, UWidgetAnimation* animOut2_Progress, UWidgetAnimation* animSelect_Bonds, UWidgetAnimation* animSelectIn_Bonds, UWidgetAnimation* animSelectOut_Bonds, UWidgetAnimation* animIn2_Bonds, UWidgetAnimation* animOut2_Bonds, UImage* imageIcon, UImage* imageFrame1, UImage* imageFrame6Add, UImage* imageNo, UImage* imageNoAdd);
    
};

