#pragma once
#include "CoreMinimal.h"
#include "DebuggingItemBase.h"
#include "OnChangedImageImageDelegate.h"
#include "OnChangedIndexImageDelegate.h"
#include "DebuggingItemImage.generated.h"

class UTexture;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ADebuggingItemImage : public ADebuggingItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedImageImage OnChangedImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedIndexImage OnChangedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> StringArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    ADebuggingItemImage();
    UFUNCTION(BlueprintCallable)
    void SetStringIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetImage(UTexture* Texture);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyRightFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyLeftFunc(const ADebuggingItemBase* InItem, bool IsRepeat, int32 InSpeed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStringIndex() const;
    
};

