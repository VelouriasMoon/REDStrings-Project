#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EChromaticAberrationType.h"
#include "UIChromaticAberration.generated.h"

class UImage;
class UMaterialInstanceDynamic;
class URetainerBox;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UUIChromaticAberration : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* RetainerBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChromaticAberrationType Type;
    
public:
    UUIChromaticAberration();
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void Setup(URetainerBox* InRetainerBox, UImage* ImageRed, UImage* ImageGreen, UImage* ImageBlue);
    
};

