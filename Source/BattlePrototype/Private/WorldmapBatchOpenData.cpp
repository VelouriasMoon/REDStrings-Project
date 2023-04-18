#include "WorldmapBatchOpenData.h"

bool UWorldmapBatchOpenData::UnloadDataTable() {
    return false;
}

bool UWorldmapBatchOpenData::LoadDataTable() {
    return false;
}

bool UWorldmapBatchOpenData::IsValidResource() {
    return false;
}

int32 UWorldmapBatchOpenData::GetMainLocationIDFromSublocationID(int32 subLocationID) {
    return 0;
}

UWorldmapBatchOpenData::UWorldmapBatchOpenData() {
    this->RefCheckTableM = NULL;
    this->RefCheckTableF = NULL;
}

