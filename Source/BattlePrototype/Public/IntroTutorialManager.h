#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHelpTutorial.h"
#include "EIntroTutorialType.h"
#include "OnSuccessTutorialInputDelegate.h"
#include "IntroTutorialManager.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AIntroTutorialManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessTutorialInput OnSuccessInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> SEArray;
    
public:
    AIntroTutorialManager();
    UFUNCTION(BlueprintCallable)
    void StopDispMiniTipsAll();
    
    UFUNCTION(BlueprintCallable)
    bool StartTutorial(EIntroTutorialType Type);
    
    UFUNCTION(BlueprintCallable)
    void StartDispMiniTips(EHelpTutorial TutorialID, FName guideID, float minDispTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetTutrialPKGaugeRecovery(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestrictPlayerSpecialAttack(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestrictPlayerPsychic(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestrictPlayerLaunchAttack(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RestrictPlayerAttack(bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveEnemysNoDead(int32 GroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_StepInAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_SpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_PsychicCombo();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Psychic();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Lockon();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_LaunchAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Jump();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Dodge();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Dash();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_ChangeLockon();
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialSuccess_Attack();
    
    UFUNCTION(BlueprintCallable)
    bool EndTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EndIntroTutorial();
    
    UFUNCTION(BlueprintCallable)
    void EndDispMiniTips(EHelpTutorial TutorialID, bool forceStop);
    
    UFUNCTION(BlueprintCallable)
    void EndDispCurrentMiniTips(bool forceStop);
    
    UFUNCTION(BlueprintCallable)
    void DisplaySuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BeginIntroTutorial();
    
};

