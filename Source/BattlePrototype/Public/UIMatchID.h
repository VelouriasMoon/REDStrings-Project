#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIMatchID.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMatchID : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreShuffleSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffuleSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShuffuleIntervalSeconds;
    
public:
    UUIMatchID();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(const FName CharaID, const FName armyCodeMessageID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textID, UTextBlock* textName);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

