#include "BSPManager.h"

class AActor;
class ABSPBlockVolume;
class ABSPPortalBase;

void ABSPManager::UpdateBSPAttenuation_Native(const float DeltaSeconds, const bool isPlayerInBlock, TArray<ABSPBlockVolume*> areaBlocks, TArray<ABSPBlockVolume*> BlockWithPlayer, const int32 BlockUpdateID, const float MaxSoundDistance) {
}

void ABSPManager::UpdateAllAtomBSPAttenuation_Native() {
}

void ABSPManager::OnBlockHitFunc(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void ABSPManager::OnBlockEndOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

void ABSPManager::OnBlockBeginOverlapFunc(AActor* OverlappedActor, AActor* OtherActor) {
}

ABSPBlockVolume* ABSPManager::IsPosInAnyBlock_Native(TArray<ABSPBlockVolume*> areaBlocks, FVector Pos) {
    return NULL;
}

void ABSPManager::GetSoundAttenuationRate_Native(TArray<ABSPBlockVolume*> areaBlocks, FVector Pos, bool isPlayerInBlock, float& AttenuationRate, ABSPBlockVolume*& bLock) {
}


void ABSPManager::CalcBSPAttenuationFirstFromPlayer_Native(ABSPBlockVolume* pFromBSPVolume, TArray<ABSPPortalBase*> Portals, const FVector BasePos, const int32 BlockUpdateID, const float MaxSoundDistance) {
}

ABSPManager::ABSPManager() {
}

