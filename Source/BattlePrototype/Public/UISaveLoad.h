#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "ESaveLoad.h"
#include "ESaveLoadSubType.h"
#include "OnEventInitializeStartDelegate.h"
#include "OnEventSaveLoadSelectStartDelegate.h"
#include "UIBase.h"
#include "UISaveLoad.generated.h"

class ARSHUDBase;
class ARSTitleManager;
class UCanvasPanel;
class UREDScrollBox;
class URSSaveGame;
class USaveLoadScreenParamManager;
class UUIGuide;
class UUISaveLoadChoice;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUISaveLoad : public UUIBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventInitializeStart m_OnEventInitializeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventSaveLoadSelectStart m_OnEventSelectStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pAutoSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* scrollBoxParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUISaveLoadChoice* m_SaveLoadChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pRSHudBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTitleManager* m_pTitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGuide* uGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LastAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_info_Win_out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_info_Win_in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_info_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_in;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_default_none;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anime_default_;
    
public:
    UUISaveLoad();
    UFUNCTION(BlueprintCallable)
    void UpdateStateSaveLoad(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(ESaveLoad modeType, ESaveLoadSubType subModeType);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* ptitlemanager);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUpdateElement(int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListUnFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocusMouse(int32 isMouseScroll, int32 Index, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ListFocus(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    bool isSavedError();
    
    UFUNCTION(BlueprintCallable)
    bool isSaved();
    
    UFUNCTION(BlueprintCallable)
    bool isClearChara(int32 slotNo, bool& yuito, bool& kasane);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSaveLoad(UUIGuide* NewUGuide, UUISaveLoadChoice* SaveLoadChoice);
    
    UFUNCTION(BlueprintCallable)
    void InitializeList(UCanvasPanel* NewScrollBoxParent, UREDScrollBox* NewScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* info_Win_out, UWidgetAnimation* info_Win_in, UWidgetAnimation* info_Win, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_);
    
    UFUNCTION(BlueprintCallable)
    ESaveLoadSubType GetCurrentSubMode();
    
    UFUNCTION(BlueprintCallable)
    ESaveLoad GetCurrentMode();
    
};

