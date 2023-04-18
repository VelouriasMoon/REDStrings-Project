#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "Math/Vector4.h"
#include "Blueprint/UserWidget.h"
#include "REDUserTextWidget.generated.h"

class UImage;
class UObject;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UREDUserTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UREDUserTextWidget();
    UFUNCTION(BlueprintCallable)
    void setStringSlotVersion(int32 StringIndex, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void setString(int32 StringIndex, const FString& String, bool bIsAnalyzeTag);
    
    UFUNCTION(BlueprintCallable)
    void setApplyGeometryScale(bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void resetString();
    
    UFUNCTION(BlueprintCallable)
    void moveAll(int32 StringIndex, float fMoveX, float fMoveY);
    
    UFUNCTION(BlueprintCallable)
    void initializeStringForKeyGuide(int32 StringIndex, int32 guideNum, UTextBlock* baseTextBlock, UImage* baseIconFont);
    
    UFUNCTION(BlueprintCallable)
    void initializeString(int32 StringIndex, UTextBlock* baseTextBlock, int32 textBlockNum, UImage* baseIconFont, int32 iconFontNum, bool isUseRuby);
    
    UFUNCTION(BlueprintCallable)
    void getTextRectLight(int32 StringIndex, FVector4& rect);
    
    UFUNCTION(BlueprintCallable)
    void getTextRect(int32 StringIndex, FVector4& rect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* getRootWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getGeometryScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D getDefaultViewportSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextBlock* getBaseTextBlock(int32 StringIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void destroy(int32 StringIndex);
    
    UFUNCTION(BlueprintCallable)
    void clearString(int32 StringIndex);
    
    UFUNCTION(BlueprintCallable)
    void changeRubyProperty(int32 StringIndex, float rubySizeRate, float rubyAdjustY);
    
    UFUNCTION(BlueprintCallable)
    void changeFont(int32 StringIndex, UObject* Font);
    
    UFUNCTION(BlueprintCallable)
    void applyTextFormatFromBase(int32 StringIndex);
    
};

