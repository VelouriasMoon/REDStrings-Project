#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EHelpTutorial.h"
#include "HelpDBDataCell.h"
#include "HelpListSortParam.h"
#include "MiniHelpRowDataCell.h"
#include "TutorialDBDataCell.h"
#include "HelpTutorialData.generated.h"

class UHelpTutorialDBAsset;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UHelpTutorialData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHelpTutorialDBAsset* helptutorialDataAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHelpListSortParam> helpSortList_;
    
public:
    UHelpTutorialData();
    UFUNCTION(BlueprintCallable)
    bool LoadDataAsset(const FString& dtPath);
    
    UFUNCTION(BlueprintCallable)
    bool GetTutorialDataIndexFromAsset(FName TutorialID, int32& DataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetTutorialDataCellFromAsset(FName TutorialID, FTutorialDBDataCell& returnCell);
    
    UFUNCTION(BlueprintCallable)
    void GetTutorialDataAsset(TMap<FName, FTutorialDBDataCell>& returnTutorialMap);
    
    UFUNCTION(BlueprintCallable)
    bool GetMiniHelpDataIndexFromAsset(EHelpTutorial helpID, int32& DataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetMiniHelpDataCellFromAsset(EHelpTutorial helpID, FMiniHelpRowDataCell& returnCell);
    
    UFUNCTION(BlueprintCallable)
    void GetMiniHelpDataAsset(TMap<EHelpTutorial, FMiniHelpRowDataCell>& returnMiniHelpMap);
    
    UFUNCTION(BlueprintCallable)
    UHelpTutorialDBAsset* GetHelpTutorialDataAsset();
    
    UFUNCTION(BlueprintCallable)
    bool GetHelpDataIndexFromAsset(EHelpTutorial helpID, int32& DataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetHelpDataCellFromAsset(EHelpTutorial helpID, FHelpDBDataCell& returnCell);
    
    UFUNCTION(BlueprintCallable)
    void GetHelpDataAsset(TMap<EHelpTutorial, FHelpDBDataCell>& returnHelpMap);
    
};

