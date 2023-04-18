#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "EGameOverResult.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "GameMainManager.generated.h"

class URSSaveGame;
class USaveLoadScreenParamManager;
class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AGameMainManager : public AActor, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_pSaveDataCapturePicture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pAutoSaveLoadScreenParamManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoSaveIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_AutoSavePlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAutoSaveEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAsyncAutoSaveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSSaveGame* m_AsyncAutoSaveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isForceAutoSaveEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isForceAutoSaveDisable;
    
public:
    AGameMainManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGameoverFlow(EGameOverResult resultType);
    
    UFUNCTION(BlueprintCallable)
    void SetSaveDataCapturePicture(UTexture2D* pCapturePic);
    
    UFUNCTION(BlueprintCallable)
    void SetIsForceAutoSaveEnable(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsForceAutoSaveDisable(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAutoSaveEnable(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SaveRetryDataExec();
    
    UFUNCTION(BlueprintCallable)
    bool LoadRetryDataExec();
    
    UFUNCTION(BlueprintCallable)
    bool LoadRetryBattleSimulatorDataExec();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceAutoSaveEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceAutoSaveDisable();
    
    UFUNCTION(BlueprintCallable)
    bool IsAutoSaveEnable();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetSaveDataCapturePicture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextureRenderTarget2D* GetSaveDataCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DoSaveDataCapture();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* ConvertTextureRenderTarget2DtoTexture2D(UTextureRenderTarget2D* pSrcRenderTex);
    
    UFUNCTION(BlueprintCallable)
    bool AutoSaveExec();
    
private:
    UFUNCTION(BlueprintCallable)
    bool AsyncAutoSaveExec();
    
    
    // Fix for true pure virtual functions not being implemented
};

