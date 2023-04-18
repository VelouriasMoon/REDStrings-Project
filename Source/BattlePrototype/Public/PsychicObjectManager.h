#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EPsychicObjectID.h"
#include "EPsychicObjectSizeType.h"
#include "ManagerInterface.h"
#include "PsychicObjectFocusResult.h"
#include "PsychicObjectListInfo.h"
#include "PsychicObjectManager.generated.h"

class UPsychicObjectSearchComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API APsychicObjectManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_M;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_XL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_XXL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_Swing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSizeListSkipSwingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> PsychicObjectClassList_Unknown;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPsychicObjectListInfo> PsychicObjectListByLevel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchDistanceMinEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchCheckTraceEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchDistanceMinNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchCheckTraceNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FocusParamDistList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FocusParamDistPointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FocusParamAngleList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> FocusParamAnglePointList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispSearchNpc;
    
    APsychicObjectManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterPsychicObject(AActor* PsyObjActor);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterMapGimmick(AActor* pActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSearchFocus(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchComponent(UPsychicObjectSearchComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectTownSetting(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectRegisterSkip(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectMaterialValueDither(bool bRestore, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectMaterialDitherParameterOnce(bool bChkOnce, float applyRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectMaterialDitherParameter(bool bChkDist, float applyRadius);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPsychicObjectListEventC(bool bStart, bool bTick, bool bVisibility);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetNpcSearchDistanceMin(float Dist);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFocusSearchPause(bool Flag, FName TagName, bool bResetResult);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusSearchEnable(bool Flag, FName TagName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFocusParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemySearchID(EPsychicObjectID searchId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetEnablePsychicObjectRegister(const FString& refName, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetDuelPoleType(bool bDuelType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SearchNpcPsychicObject(bool bUnqObj, bool bEnemy, FVector chkPos, FPsychicObjectFocusResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void SearchFocusPsychicObject(FVector chkPos, FVector chkDir, FPsychicObjectFocusResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void SearchEnemyPsychicObject(bool bUnqObj, FVector chkPos, FPsychicObjectFocusResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetPsychicObjectArrangeTransform();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetNpcObject(bool bUnqObj, bool bEnemy);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPsychicObject(AActor* PsyObjActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMapGimmick(AActor* pActor, float DistMin);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSetSearchComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusSearchPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusSearchEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsFloatObjectExist();
    
    UFUNCTION(BlueprintCallable)
    UClass* GetRandomSwingTypeObjectRegisterClass();
    
    UFUNCTION(BlueprintCallable)
    UClass* GetRandomPsychicObjectRegisterClass(EPsychicObjectSizeType objSize);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPsychicObjectRegisterNum();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetPsychicObjectRegisterActor(int32 idx);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPsychicObjectNumByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPsychicObjectListByLevelName(const FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetNpcObject(bool bUnqObj, bool bEnemy);
    
    UFUNCTION(BlueprintCallable)
    void GetFocusPsychicObject(FPsychicObjectFocusResult& Result);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEnemyObject(bool bUnqObj);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<EPsychicObjectSizeType> GetAvailableRegisterSizeArray(int32 Len, TArray<EPsychicObjectSizeType> requestSize);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintString(const FString& logString);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintRegisterInfo();
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintPsychicObjectSizeList();
    
    UFUNCTION(BlueprintCallable)
    void DebugMultiSphereTraceForObject(TArray<FHitResult>& resultList, FVector posS, FVector Pose, float Radius, bool bDbDraw, bool bDbPrint);
    
    UFUNCTION(BlueprintCallable)
    void DebugLog(const FString& logString);
    
    UFUNCTION(BlueprintCallable)
    void DebugCheckPsychicObjectSizeListNum();
    
    UFUNCTION(BlueprintCallable)
    void ClearPsychicObjectList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckNpcObject(bool bUnqObj, bool bEnemy, bool chkCapture, bool chkAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckEnemyObject(bool bUnqObj, bool chkCapture, bool chkAttack);
    
    
    // Fix for true pure virtual functions not being implemented
};

