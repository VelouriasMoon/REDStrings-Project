#include "BP_UI_SceneMap.h"
#include "Templates/SubclassOf.h"

class AActor;
class AEventManager;
class ANpcTownPeople;
class ASceneManager;
class AStaticMeshActor;
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class USceneCaptureComponent2D;

void ABP_UI_SceneMap::UpdateMinimapCalc() {
}

void ABP_UI_SceneMap::UpdateMaterialCalc(float Rate, bool Update) {
}

void ABP_UI_SceneMap::UpdateDetailmapCalc() {
}

void ABP_UI_SceneMap::StartMinimapBrainField() {
}


void ABP_UI_SceneMap::SetWantsTraceRequest(AActor* Actor, bool Flag) {
}

void ABP_UI_SceneMap::SetVisionSimulator(bool Flag) {
}

void ABP_UI_SceneMap::SetSubModel() {
}

void ABP_UI_SceneMap::SetProgressNo(int32 Progress) {
}

void ABP_UI_SceneMap::SetMapHeight(float Height) {
}

void ABP_UI_SceneMap::SetMapGradation(float Gradation) {
}

void ABP_UI_SceneMap::SetIconUpdateFlag(bool Flag) {
}

void ABP_UI_SceneMap::SetDetailMapData(FUIDetaileMapCheckData Data, int32 initareano) {
}

void ABP_UI_SceneMap::SetCurrentIndex(int32 Index) {
}

void ABP_UI_SceneMap::SetChapterNoIndex(int32 no) {
}

void ABP_UI_SceneMap::SetBrainField(bool Flag) {
}

void ABP_UI_SceneMap::SceneCaptureCameraInit(USceneCaptureComponent2D* pCamera) {
}


void ABP_UI_SceneMap::PsychicObjUpdate() {
}

void ABP_UI_SceneMap::PsychicObjInit(UInstancedStaticMeshComponent* InstancedMesh, float Square) {
}

void ABP_UI_SceneMap::PlayerFootIconUpdate() {
}

void ABP_UI_SceneMap::PlayerFootIconInit(UInstancedStaticMeshComponent* InstancedMesh) {
}

void ABP_UI_SceneMap::OnEnemyListUpdate() {
}

void ABP_UI_SceneMap::NpcPlayerUpdate() {
}

void ABP_UI_SceneMap::NpcPlayerInit(UInstancedStaticMeshComponent* InstancedMesh) {
}

bool ABP_UI_SceneMap::isVisionSimulator() {
    return false;
}

bool ABP_UI_SceneMap::isCheckProg(FUIDetaileMapCheckCoreData Data) {
    return false;
}

bool ABP_UI_SceneMap::isCheckFlag(FUIDetaileMapCheckCoreData Data) {
    return false;
}

bool ABP_UI_SceneMap::IsBrainField() {
    return false;
}

bool ABP_UI_SceneMap::IsAysncLocation() {
    return false;
}


void ABP_UI_SceneMap::InstanceObjInit(UInstancedStaticMeshComponent* mainquest, UInstancedStaticMeshComponent* subquestActive, UInstancedStaticMeshComponent* subquestCompActive, UInstancedStaticMeshComponent* boudsquest) {
}

void ABP_UI_SceneMap::InitializePlayerFootIconArray() {
}

void ABP_UI_SceneMap::InitializeMaterialNative() {
}

ASceneManager* ABP_UI_SceneMap::GetSceneManager() {
    return NULL;
}

float ABP_UI_SceneMap::GetRotateCamera() {
    return 0.0f;
}

float ABP_UI_SceneMap::GetRateData(FVector inputpos) {
    return 0.0f;
}

QuestProgressState ABP_UI_SceneMap::GetQuestInfoState(const FName& questId) {
    return QuestProgressState::qpNotOpen;
}

TArray<ANpcTownPeople*> ABP_UI_SceneMap::getMinimapNpcList() {
    return TArray<ANpcTownPeople*>();
}

TSubclassOf<AStaticMeshActor> ABP_UI_SceneMap::getMeshClassRefalence(const FString& Path) {
    return NULL;
}

UMaterialInstanceDynamic* ABP_UI_SceneMap::getMaterialInstanceNative(EUIMapIconNative iconTypeNatice) {
    return NULL;
}

FVector ABP_UI_SceneMap::GetLineTraceActorLocation() {
    return FVector{};
}

UInstancedStaticMeshComponent* ABP_UI_SceneMap::GetInstanceMeshSubQuestCompActive() {
    return NULL;
}

UInstancedStaticMeshComponent* ABP_UI_SceneMap::GetInstanceMeshSubQuestActive() {
    return NULL;
}

UInstancedStaticMeshComponent* ABP_UI_SceneMap::GetInstanceMeshMainQuest() {
    return NULL;
}

UInstancedStaticMeshComponent* ABP_UI_SceneMap::GetInstanceMeshBondsQuest() {
    return NULL;
}


FName ABP_UI_SceneMap::GetGimmickActorName(AActor* Actor) {
    return NAME_None;
}

int32 ABP_UI_SceneMap::GetFloorIndexCore2(float floorrate, bool detail) {
    return 0;
}

int32 ABP_UI_SceneMap::GetFloorIndexCore(float floorrate) {
    return 0;
}

AEventManager* ABP_UI_SceneMap::GetEventManager() {
    return NULL;
}

int32 ABP_UI_SceneMap::GetCurrentFloorSub() {
    return 0;
}

int32 ABP_UI_SceneMap::GetCurrentFloorPlayer() {
    return 0;
}

int32 ABP_UI_SceneMap::GetCurrentFloorMain() {
    return 0;
}

int32 ABP_UI_SceneMap::GetCurrentFloorBonds() {
    return 0;
}

int32 ABP_UI_SceneMap::GetCurrentAreaPlayer() {
    return 0;
}

float ABP_UI_SceneMap::GetCameraRollBase() {
    return 0.0f;
}

float ABP_UI_SceneMap::GetCameraRoll() {
    return 0.0f;
}

int32 ABP_UI_SceneMap::getAreaMax(FName AssetClass, FName AssetDataPath) {
    return 0;
}

void ABP_UI_SceneMap::EnemyIconUpdate() {
}

void ABP_UI_SceneMap::EnemyIconInit(UInstancedStaticMeshComponent* InstancedMeshNormal, UInstancedStaticMeshComponent* InstancedMesh0630, float Square) {
}

void ABP_UI_SceneMap::EndMinimapBrainField() {
}



void ABP_UI_SceneMap::CameraUpdateMinimapPerspective() {
}



FVector ABP_UI_SceneMap::CalcMapIconLocation(EUIMapIconNative Type, FVector inputLocation, float addZ) {
    return FVector{};
}

void ABP_UI_SceneMap::BgModelLoadPreviousAreaNative(int32& Area, int32& Lc) {
}

void ABP_UI_SceneMap::BgModelLoadNextAreaNative(int32& Area, int32& Lc) {
}

ABP_UI_SceneMap::ABP_UI_SceneMap() {
    this->DebugCameraPers = true;
    this->ViewModeZoom = 0.00f;
    this->MapGradationValue = 0.00f;
    this->MapHeightValue = 0.00f;
    this->m_FootPrintSpanNormal = 400.00f;
    this->m_FootPrintSpanExtent = 400.00f;
    this->m_FootPrintSpanMax = 15.00f;
    this->m_FootPrintStop = false;
    this->m_CameraHeight = 0.00f;
    this->m_CameraOrthoWidth = 0.00f;
    this->m_CameraRotatePitch = -90.00f;
    this->m_RotateCamera = 0.00f;
    this->m_CameraRoll = 0.00f;
    this->m_CameraRollBase = 0.00f;
    this->isScaleFlag = false;
    this->isCameraRotateFlag = false;
    this->IsDetailMap = false;
    this->m_IsPerspective = false;
    this->m_AreaMax = 0;
    this->m_FloorMax = 0;
    this->m_CurrentFloor = 0;
    this->m_CurrentArea = 0;
    this->m_CurrentLevel = 0;
    this->CurrentFloorPlayer = 0;
    this->CurrentAreaPlayer = 0;
    this->CurrentFloorMain = 0;
    this->CurrentFloorSub = 0;
    this->CurrentFloorBonds = 0;
    this->m_CurrentIndex = 0;
    this->m_ChapterNo = 0;
    this->m_ProgressNo = 0;
    this->m_minimapDistanceSquareEnemy = 8850.00f;
    this->m_SM_MapModel_Base = NULL;
    this->m_AsyncLineActor = NULL;
    this->Instance = NULL;
    this->EnemyManager = NULL;
    this->CameraManager = NULL;
    this->EventManager = NULL;
    this->CaptureCamera = NULL;
    this->m_player = NULL;
    this->ObjectInstancedMesh = NULL;
    this->NpcPlInstancedMesh = NULL;
    this->EnemyInstancedMeshNormal = NULL;
    this->EnemyInstancedMesh0630 = NULL;
    this->FootInstancedMesh = NULL;
    this->MainQuestInstancedMesh = NULL;
    this->SubQuestActiveInstancedMesh = NULL;
    this->SubQuestCompActiveInstancedMesh = NULL;
    this->BoudsQuestInstancedMesh = NULL;
    this->PsychicObjectManager = NULL;
    this->PlayerManager = NULL;
    this->m_pHudBase = NULL;
}

