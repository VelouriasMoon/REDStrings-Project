#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIBrainTalk.generated.h"

class UAtomComponent;
class UImage;
class UMaterialInstanceConstant;
class UTextBlock;
class UTexture;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBrainTalk : public UUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isVoicePlayWait;
    
public:
    UUIBrainTalk();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopBrainTalkVoice();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetupTextSize();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsVoicePlayWait(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBugMode(bool isBug);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainTalkMessage(int32 characterId, int32 ExpressionID, const FString& Message, UAtomComponent* NewVoice, float DrawSecond, const bool isReserve);
    
    UFUNCTION(BlueprintCallable)
    void PlayBrainTalkVoice();
    
    UFUNCTION(BlueprintCallable)
    void PauseBrainTalkVoice(const bool IsPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsEndTalk(bool& IsEnd);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animDefault2, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textBrainTalk, UImage* iconFont, UImage* faceB, UMaterialInstanceConstant* materialFontNormal, UMaterialInstanceConstant* materialFontNoize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture* GetFaceTexture(int32 Index);
    
};

