#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIBrainMessage.generated.h"

class UREDScrollBox;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIBrainMessage : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagReplyBondsEpisode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagReplyTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagReplyClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlagMouseInput;
    
public:
    UUIBrainMessage();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateThreadTitleNative(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool updateBrainMessageMouseSE();
    
    UFUNCTION(BlueprintCallable)
    void updateBrainMessageMouseFocus();
    
    UFUNCTION(BlueprintCallable)
    void stopMessageScrollSE();
    
    UFUNCTION(BlueprintCallable)
    void SetOldScrollOffset(float Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetFlagEnableClose(bool isPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultThread(FName threadID);
    
    UFUNCTION(BlueprintCallable)
    void ResetReplyBondsEpisodeFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDefaultThread();
    
    UFUNCTION(BlueprintCallable)
    void playMessageScrollSE();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool isUpdateBrainThreadMouseFocus(int32& cursorIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplyClose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplyBondsEpisode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isLockInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitListMessageNative(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InitializeList(UREDScrollBox* ScrollBox, UREDScrollBox* scrollboxMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlagEnableClose() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void clearLockInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ClearCurrentNewFlagNative(int32 Index, UUserWidget* Widget);
    
};

