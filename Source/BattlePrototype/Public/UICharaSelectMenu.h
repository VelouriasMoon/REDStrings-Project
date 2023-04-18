#pragma once
#include "CoreMinimal.h"
#include "ECharaSelectType.h"
#include "OnEventCharaSelectStartDelegate.h"
#include "UIBase.h"
#include "UICharaSelectMenu.generated.h"

class ARSTitleManager;
class UBorder;
class UDatabaseManager;
class UREDImage;
class UTextBlock;
class UUICharaSelectParts;
class UUIGuide;
class UUserParamManager;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUICharaSelectMenu : public UUIBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventCharaSelectStart m_OnEventSelectStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSTitleManager* m_pTitleManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUserParamManager* UserParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDatabaseManager* DatabaseManager;
    
public:
    UUICharaSelectMenu();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Start(ECharaSelectType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleManager(ARSTitleManager* ptitlemanager);
    
    UFUNCTION(BlueprintCallable)
    void SetScenarioCrear(bool yuito, bool kasane);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterOutLine(int32 cursorIndex);
    
    UFUNCTION(BlueprintCallable)
    void InitializeParts(int32 Index, UUICharaSelectParts* charaparts);
    
    UFUNCTION(BlueprintCallable)
    void InitializeCharaSelect(UUIGuide* uGuide, UTextBlock* charaselectguide, UTextBlock* charatext, UTextBlock* CharaName, UTextBlock* characlear, UBorder* clearborder, UREDImage* mouse_yuito_hit, UREDImage* mouse_kasane_hit, UREDImage* mouse_yuito_hit2, UREDImage* mouse_kasane_hit2);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* in_anime, UWidgetAnimation* default_anime, UWidgetAnimation* default_none_anime, UWidgetAnimation* out_anime, UWidgetAnimation* in_yuito_anime, UWidgetAnimation* default_yuito_anime, UWidgetAnimation* decision_yuito_anime, UWidgetAnimation* out_yuito_anime, UWidgetAnimation* in_kasane_anime, UWidgetAnimation* default_kasane_anime, UWidgetAnimation* decision_kasane_anime, UWidgetAnimation* on_kasane_anime);
    
    UFUNCTION(BlueprintCallable)
    bool GetDecideScenario();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursor();
    
};

