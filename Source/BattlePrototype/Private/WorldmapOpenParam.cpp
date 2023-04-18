#include "WorldmapOpenParam.h"

bool UWorldmapOpenParam::SetLocationSelectable(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAllArea) {
    return false;
}

void UWorldmapOpenParam::SetLocationNotSelectableAll_FromBF(bool isNotSelectable) {
}

void UWorldmapOpenParam::SetLocationNotSelectableAll(bool isNotSelectable) {
}

void UWorldmapOpenParam::SetLocationNotSelectable(int32 LocationNo, bool isNotSelectable) {
}

bool UWorldmapOpenParam::SetLocationNewOpened(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isNewOpened, bool isAllArea) {
    return false;
}

bool UWorldmapOpenParam::OpenLocation(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable) {
    return false;
}

bool UWorldmapOpenParam::IsLocationSelectable(int32 LocationNo, int32 AreaNo, int32 PortalNo) {
    return false;
}

bool UWorldmapOpenParam::IsLocationNotSelectableAll() {
    return false;
}

bool UWorldmapOpenParam::IsLocationNotSelectable(int32 LocationNo) {
    return false;
}

bool UWorldmapOpenParam::IsLocationNewOpened(int32 LocationNo, int32 AreaNo, int32 PortalNo) {
    return false;
}

bool UWorldmapOpenParam::GetOpenedList(TArray<FWorldmapOpenLCParam>& openedList) {
    return false;
}

bool UWorldmapOpenParam::GetLocationNotSelectableAll_FromBF() {
    return false;
}

bool UWorldmapOpenParam::CloseLocation(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isAllArea) {
    return false;
}

void UWorldmapOpenParam::ClearAll() {
}

void UWorldmapOpenParam::CheckOpenFromProgressID(int32 ProgressId, bool checkNearly) {
}

UWorldmapOpenParam::UWorldmapOpenParam() {
    this->notSelectableAll = false;
}

