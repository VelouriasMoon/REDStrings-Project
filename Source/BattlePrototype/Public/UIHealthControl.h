#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "UIBase.h"
#include "UIHealthControl.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIHealthControl : public UUIBase {
    GENERATED_BODY()
public:
    UUIHealthControl();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTextHP(UTextBlock* textMaxHP, UTextBlock* textCurrentHP);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBar(UImage* Base, UImage* Override, UImage* base_add);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerName(EPlayerID CharaID, UTextBlock* text);
    
    UFUNCTION(BlueprintCallable)
    void SetNotHealAnimationFlag(bool IsNotAnimation);
    
    UFUNCTION(BlueprintCallable)
    void setIconType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void SetIconDraw(int32 Index, bool IsDraw);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon2(UImage* Icon, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon1(UImage* Icon, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIcon(int32 Index, UImage* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetHpDirect(float Max, float current);
    
    UFUNCTION(BlueprintCallable)
    void SetHp(float Max, float current);
    
    UFUNCTION(BlueprintCallable)
    void ResetFlagFirstSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsUnlockPlayerChara(EPlayerID CharaID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBadStateNum() const;
    
};

