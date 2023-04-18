#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIShopGetContents.generated.h"

class UImage;
class UREDScrollBox;
class UREDScrollBoxSimple;
class URSSaveGame;
class USaveLoadScreenParamManager;
class USpacer;
class UTextBlock;
class UUIShop;
class UUIShopChoice;
class UUIShopGetSubListIndex;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIShopGetContents : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D ListElementSizeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ListOffsetSizeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* ListIndexClassMain;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIShopGetSubListIndex> m_pSubItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUIShopGetSubListIndex*> m_uiSubItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_pSaveSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pSaveLoadSystemParamManager;
    
public:
    UUIShopGetContents();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
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
    void InitializeThis(UREDScrollBox* scrollBoxMain, UREDScrollBoxSimple* scrollBoxSub, UUIShopGetSubListIndex* uiSubListIndex, UTextBlock* textListTitle, UImage* imageSubBaseLine, USpacer* spacerDescription);
    
    UFUNCTION(BlueprintCallable)
    void InitializeFromShop(UUIShop* UIShop, UUIShopChoice* uiChoice);
    
};

