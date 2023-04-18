#pragma once
#include "CoreMinimal.h"
#include "EventManager.h"
//-FallbackName=Vector
#include "GameFramework/Actor.h"
#include "EUIMapIconNative.h"
#include "OnMinimapChangeFloorDelegate.h"
#include "QuestProgressState.h"
#include "Templates/SubclassOf.h"
#include "UIDetaileMapCheckCoreData.h"
#include "UIDetaileMapCheckData.h"
#include "UIDetaileMapFloorData.h"
#include "BP_UI_SceneMap.generated.h"

class ABP_SM_MapModel_Base;
class AEnemyManager;
class AEventManager;
class ANpcTownPeople;
class APawn;
class APlayerCameraManager;
class APlayerManager;
class APsychicObjectManager;
class ARSCharacterBase;
class ARSHUDBase;
class ASceneManager;
class AStaticMeshActor;
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class URSGameInstance;
class USceneCaptureComponent2D;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ABP_UI_SceneMap : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObjectIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCameraPers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewModeCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewModeViewLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewModeZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapGradationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapHeightValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FootPrintSpanNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FootPrintSpanExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FootPrintSpanMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FootPrintStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraOrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotateCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraRollBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScaleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCameraRotateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDetailMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPerspective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AreaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FloorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFloorPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAreaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFloorMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFloorSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentFloorBonds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChapterNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ProgressNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapFloorData> m_FloorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinimapChangeFloor m_OnMinimapChangeFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> m_MaterialIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_MaterialDynamicIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimapDistanceSquareEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABP_SM_MapModel_Base* m_SM_MapModel_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_MeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDetaileMapCheckData m_DetailMapData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_AsyncLineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* Instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEnemyManager* EnemyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEventManager* EventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* ObjectInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* NpcPlInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* EnemyInstancedMeshNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* EnemyInstancedMesh0630;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* FootInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* MainQuestInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* SubQuestActiveInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* SubQuestCompActiveInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* BoudsQuestInstancedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APsychicObjectManager* PsychicObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerManager* PlayerManager;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARSCharacterBase>> PlayerCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> m_EnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_PlPosDataListNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_PlPosDataListExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pHudBase;
    
public:
    ABP_UI_SceneMap();
    UFUNCTION(BlueprintCallable)
    void UpdateMinimapCalc();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMaterialCalc(float Rate, bool Update);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDetailmapCalc();
    
    UFUNCTION(BlueprintCallable)
    void StartMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetWantsTraceRequest(AActor* Actor, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetVisionSimulator(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSubModel();
    
    UFUNCTION(BlueprintCallable)
    void SetProgressNo(int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetMapHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    void SetMapGradation(float Gradation);
    
    UFUNCTION(BlueprintCallable)
    void SetIconUpdateFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDetailMapData(FUIDetaileMapCheckData Data, int32 initareano);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetChapterNoIndex(int32 no);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainField(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SceneCaptureCameraInit(USceneCaptureComponent2D* pCamera);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool QuestIconInit_Native();
    
    UFUNCTION(BlueprintCallable)
    void PsychicObjUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PsychicObjInit(UInstancedStaticMeshComponent* InstancedMesh, float Square);
    
    UFUNCTION(BlueprintCallable)
    void PlayerFootIconUpdate();
    
    UFUNCTION(BlueprintCallable)
    void PlayerFootIconInit(UInstancedStaticMeshComponent* InstancedMesh);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyListUpdate();
    
    UFUNCTION(BlueprintCallable)
    void NpcPlayerUpdate();
    
    UFUNCTION(BlueprintCallable)
    void NpcPlayerInit(UInstancedStaticMeshComponent* InstancedMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isVisionSimulator();
    
    UFUNCTION(BlueprintCallable)
    bool isCheckProg(FUIDetaileMapCheckCoreData Data);
    
    UFUNCTION(BlueprintCallable)
    bool isCheckFlag(FUIDetaileMapCheckCoreData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainField();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAysncLocation();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool isActorTick();
    
    UFUNCTION(BlueprintCallable)
    void InstanceObjInit(UInstancedStaticMeshComponent* mainquest, UInstancedStaticMeshComponent* subquestActive, UInstancedStaticMeshComponent* subquestCompActive, UInstancedStaticMeshComponent* boudsquest);
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerFootIconArray();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMaterialNative();
    
    UFUNCTION(BlueprintCallable)
    ASceneManager* GetSceneManager();
    
    UFUNCTION(BlueprintCallable)
    float GetRotateCamera();
    
    UFUNCTION(BlueprintCallable)
    float GetRateData(FVector inputpos);
    
    UFUNCTION(BlueprintCallable)
    QuestProgressState GetQuestInfoState(const FName& questId);
    
    UFUNCTION(BlueprintCallable)
    TArray<ANpcTownPeople*> getMinimapNpcList();
    
protected:
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AStaticMeshActor> getMeshClassRefalence(const FString& Path);
    
public:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* getMaterialInstanceNative(EUIMapIconNative iconTypeNatice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLineTraceActorLocation();
    
    UFUNCTION(BlueprintCallable)
    UInstancedStaticMeshComponent* GetInstanceMeshSubQuestCompActive();
    
    UFUNCTION(BlueprintCallable)
    UInstancedStaticMeshComponent* GetInstanceMeshSubQuestActive();
    
    UFUNCTION(BlueprintCallable)
    UInstancedStaticMeshComponent* GetInstanceMeshMainQuest();
    
    UFUNCTION(BlueprintCallable)
    UInstancedStaticMeshComponent* GetInstanceMeshBondsQuest();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* GetIconAdjustVector(TSubclassOf<AActor> ActorClass, FName findName);
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetGimmickActorName(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFloorIndexCore2(float floorrate, bool detail);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFloorIndexCore(float floorrate);
    
    UFUNCTION(BlueprintCallable)
    AEventManager* GetEventManager();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFloorSub();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFloorPlayer();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFloorMain();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFloorBonds();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentAreaPlayer();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraRollBase();
    
    UFUNCTION(BlueprintCallable)
    float GetCameraRoll();
    
    UFUNCTION(BlueprintCallable)
    int32 getAreaMax(FName AssetClass, FName AssetDataPath);
    
    UFUNCTION(BlueprintCallable)
    void EnemyIconUpdate();
    
    UFUNCTION(BlueprintCallable)
    void EnemyIconInit(UInstancedStaticMeshComponent* InstancedMeshNormal, UInstancedStaticMeshComponent* InstancedMesh0630, float Square);
    
    UFUNCTION(BlueprintCallable)
    void EndMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool End();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool DebugUpdateIcon();
    
    UFUNCTION(BlueprintCallable)
    void CameraUpdateMinimapPerspective();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CameraSetPerspectiveNative(bool isperspective);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Camera_UpdateDetailMap();
    
    UFUNCTION(BlueprintCallable)
    FVector CalcMapIconLocation(EUIMapIconNative Type, FVector inputLocation, float addZ);
    
    UFUNCTION(BlueprintCallable)
    void BgModelLoadPreviousAreaNative(int32& Area, int32& Lc);
    
    UFUNCTION(BlueprintCallable)
    void BgModelLoadNextAreaNative(int32& Area, int32& Lc);
    
};

