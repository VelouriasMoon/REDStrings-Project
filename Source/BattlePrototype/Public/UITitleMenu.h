#pragma once
#include "CoreMinimal.h"
#include "OnEventCursorSelectStartDelegate.h"
#include "UIBase.h"
#include "UITitleMenu.generated.h"

class AMessageHudManager;
class APlayerController;
class ARSHUDBase;
class ARSTitleManager;
class UDatabaseManager;
class UImage;
class UTextBlock;
class UUIGamerTag;
class UUIScarletLogo;
class UUITitleMenuParts;
class UUserParamManager;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUITitleMenu : public UUIBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventCursorSelectStart m_OnEventCursorSelectStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIGamerTag* TitleUserTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserParamManager* UserParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDatabaseManager* DatabaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSTitleManager* m_pTitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMessageHudManager* MessageHudManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_pPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pHudBase;
    
public:
    UUITitleMenu();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(bool isStartMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* ptitlemanager);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleLogoWidget(UUIScarletLogo* titlelogowidget);
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenLogoBP();
    
    UFUNCTION(BlueprintCallable)
    void OpenFirstPressMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isFirstDecideCheck();
    
    UFUNCTION(BlueprintCallable)
    void InitializeXboxOne(UTextBlock* UserName);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTitleParts(int32 Index, UUITitleMenuParts* titleparts);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTitleLogo(UImage* titlelogoimage);
    
    UFUNCTION(BlueprintCallable)
    void InitializeText(UTextBlock* pressstart, UTextBlock* titlever, UTextBlock* titlecopyright);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* _press_start_out_first, UWidgetAnimation* _press_start_in_first, UWidgetAnimation* _press_start_default_first, UWidgetAnimation* _press_start_out, UWidgetAnimation* _press_start_in, UWidgetAnimation* _press_start_default_none, UWidgetAnimation* _press_start_default_, UWidgetAnimation* _start_menu_in, UWidgetAnimation* _start_menu_default, UWidgetAnimation* _start_menu_decision, UWidgetAnimation* _change_press_start, UWidgetAnimation* _start_menu_select_in);
    
    UFUNCTION(BlueprintCallable)
    bool GetMoviePlayFlag();
    
};

