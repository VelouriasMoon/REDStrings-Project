#include "PresentInfoParam.h"

bool UPresentInfoParam::UpdatePresentInfo(EPlayerID sendCharId, EPlayerID recvCharID, FName ItemId) {
    return false;
}

void UPresentInfoParam::Reset() {
}

bool UPresentInfoParam::IsPresentedFirstTime(EPlayerID sendCharId, EPlayerID recvCharID, FName ItemId, bool& IsFirstTime) {
    return false;
}

void UPresentInfoParam::GetPresentInfoList(EPlayerID sendCharId, EPlayerID recvCharID, TArray<FPresentInfoData>& getList, bool includeEvent) {
}

UPresentInfoParam::UPresentInfoParam() {
    this->GameInstance = NULL;
}

