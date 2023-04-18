#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EActionIconType.h"
#include "ERSGamepadInputName.h"
#include "EUI_UV_BUtton_N1.h"
#include "E_SASIconStatus.h"
#include "E_SASKindNative.h"
#include "REDWidgetBPLibrary.generated.h"

class ARSHUDBase;
class UImage;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDWidgetBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UREDWidgetBPLibrary();
    UFUNCTION(BlueprintCallable)
    static void UISetThumbnailIconSas(UImage* Image, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIGetIdIconSasStatus(E_SASKindNative sas, E_SASIconStatus Status);
    
    UFUNCTION(BlueprintCallable)
    static int32 UIGetIdIconSas(E_SASKindNative sas);
    
    UFUNCTION(BlueprintCallable)
    static void UI_SetThumbnail_Action(UImage* Image, EActionIconType Index, bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    static void UI_SetColorAction(UImage* Image, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIconGamePadM(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIconGamePadL(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIconBaseGamePad(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIcon(UObject* WorldContextObject, UImage* Image, EUI_UV_BUtton_N1 Button);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ARSHUDBase* GetRSHudBase(UObject* WorldContextObject);
    
};

