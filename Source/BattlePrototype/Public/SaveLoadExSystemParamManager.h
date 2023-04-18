#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "EAttackDirOrtho.h"
#include "EAttackDirOrthoLockon.h"
#include "ECameraDistance.h"
#include "ELetterSize.h"
#include "ESASCutin.h"
#include "ManagerInterface.h"
#include "Patch01Param.h"
#include "Patch03Param.h"
#include "PatchParam_DLC01.h"
#include "PatchParam_DLC02.h"
#include "PatchParam_DLC03.h"
#include "PatchParam_DLC04.h"
#include "RSSaveGameInterface.h"
#include "SaveLoadExSystemParamManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API USaveLoadExSystemParamManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_AdditionalSystemSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatch01Param Patch01Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatch03Param Patch03Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatchParam_DLC01 patchDLC01Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatchParam_DLC02 patchDLC02Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatchParam_DLC03 patchDLC03Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPatchParam_DLC04 patchDLC04Param;
    
public:
    USaveLoadExSystemParamManager();
    UFUNCTION(BlueprintCallable)
    void SetSASCutin(ESASCutin Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLetterSize(ELetterSize Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSpeedLockon(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraDistance(ECameraDistance Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBehindCameraSpeed(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackDirOrthoLockon(EAttackDirOrthoLockon Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackDirOrtho(EAttackDirOrtho Value);
    
    UFUNCTION(BlueprintCallable)
    ESASCutin GetSASCutin();
    
    UFUNCTION(BlueprintCallable)
    ELetterSize GetLetterSize();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetCameraSpeedLockon();
    
    UFUNCTION(BlueprintCallable)
    ECameraDistance GetCameraDistance();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetBehindCameraSpeed();
    
    UFUNCTION(BlueprintCallable)
    EAttackDirOrthoLockon GetAttackDirOrthoLockon();
    
    UFUNCTION(BlueprintCallable)
    EAttackDirOrtho GetAttackDirOrtho();
    
    
    // Fix for true pure virtual functions not being implemented
};

