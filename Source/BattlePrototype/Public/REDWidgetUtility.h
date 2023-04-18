#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Math/Vector2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlayerID.h"
#include "Templates/SubclassOf.h"
#include "REDWidgetUtility.generated.h"

class UHorizontalBox;
class UImage;
class UInvalidationBox;
class UObject;
class UOverlay;
class USpacer;
class UTextBlock;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDWidgetUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UREDWidgetUtility();
    UFUNCTION(BlueprintCallable)
    static void SetCurrentLocationAreaName(const UObject* WorldObject, int32 LocationNo, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectWorldToScreen2(const UObject* WorldContextObject, const FVector& WorldPosition, FVector2D& ScreenPosition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool isYuitoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isSpoiler(const UObject* WorldContextObject, const FName& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isPlayingVisionSimulator(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isManualDrive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isEnableNexusDrive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isEnableKarenEpisode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool isEnableCrashVision(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetViewportOffset(const UObject* WorldContextObject, FVector2D absolutePosition, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetScreenOffsetReverse(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetScreenOffset(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRelativePositionVector2D(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRelativePosition(UWidget* Widget, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EPlayerID getMainPlayerID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UInvalidationBox* GetFirstInvalidationBox(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void GetDesiredSizeWithPrepass(UWidget* Widget, float& Width, float& Height);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAbsoluteScreenOfffset(const UObject* WorldContextObject, FVector2D baseOffset, FVector2D& calcOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAbsolutePositionVector2D(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAbsolutePosition(UWidget* Widget, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateWidgetRED(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, UPARAM(Ref) UUserWidget*& Output);
    
    UFUNCTION(BlueprintCallable)
    static void CopyTextBlockProperty(UTextBlock* Source, UTextBlock* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void CopySpacerProperty(USpacer* Source, USpacer* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void CopySlotProperty(UWidget* Source, UWidget* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void CopyOverlayProperty(UOverlay* Source, UOverlay* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void CopyImageProperty(UImage* Source, UImage* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void CopyHorizontalBoxProperty(UHorizontalBox* Source, UHorizontalBox* Dest);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertImagePathPlatformName(UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertButtonIconPlatform(UImage* Image);
    
    UFUNCTION(BlueprintCallable)
    static void ClearFontAtlas();
    
};

