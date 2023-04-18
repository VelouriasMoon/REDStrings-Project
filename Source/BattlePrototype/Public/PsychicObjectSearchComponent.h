#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "PsychicObjectEvaluateData.h"
#include "PsychicObjectSearchInterface.h"
#include "RSAsyncTaskActorComponent.h"
#include "UpdateSeachObjectDelegate.h"
#include "PsychicObjectSearchComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPsychicObjectSearchComponent : public URSAsyncTaskActorComponent, public IPsychicObjectSearchInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateSeachObject DispatchUpdateSearchObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FocusParamDistList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FocusParamDistPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FocusParamAngleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FocusParamAnglePointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PsychicFieldObjectNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PsychicFieldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPrintPsychicFieldSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSyncProc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchProc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugDispSearchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugDispTraceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchEnpc;
    
public:
    UPsychicObjectSearchComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterMapGimmick(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SortBySize(TArray<AActor*> ActorList, bool bAscend);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SortByDistance(TArray<AActor*> ActorList, AActor* pTargetActor, bool bAscend, bool bIgnoreZ, bool bSearchPos, FVector checkPos, float searchRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicFieldParameter(float Radius, int32 objNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSearchScoreParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSearchHeightParameter(float heightMin, float heightMax);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSearchEnable(bool Flag, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    void SetEnpcSearchParameter(float radiusMin);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SearchPsychicFieldTarget(FVector SearchPos, AActor* pTargetActor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SearchPsychicFieldObject();
    
    UFUNCTION(BlueprintCallable)
    void SearchEnpcPsychicObject(FVector chkPos, FPsychicObjectEvaluateData& Result);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapGimmick(AActor* pActor, float DistMin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusSearchEnable();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSearchResultUnq();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSearchResultNrl();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEnpcPsychicObject();
    
    UFUNCTION(BlueprintCallable)
    void DebugDispFocusSearchProc(FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckEnpcPsychicObject(bool chkCapture, bool chkAttack);
    
    
    // Fix for true pure virtual functions not being implemented
};

