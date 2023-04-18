#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BrainMessageContentData.h"
#include "BrainMessageDBDataCell.h"
#include "BrainMessageRowDataCell.h"
#include "BrainMessageDBAsset.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBrainMessageDBAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBrainMessageDBDataCell> brainMessageDBMap_;
    
    UBrainMessageDBAsset();
private:
    UFUNCTION(BlueprintCallable)
    void ConvertArray(FBrainMessageContentData& bMesData, FBrainMessageRowDataCell rowCell);
    
public:
    UFUNCTION(BlueprintCallable)
    void Convert();
    
};

