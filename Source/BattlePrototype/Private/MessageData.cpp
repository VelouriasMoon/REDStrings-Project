#include "MessageData.h"

class UDataTable;

void UMessageData::RegisterDataTable(UDataTable* _datatable, const FString& _path) {
}

bool UMessageData::LoadDataTable(const FString& _path) {
    return false;
}

bool UMessageData::GetMessageFromIndex(FMessageDataCell& MessageDataCell, int32 _index) {
    return false;
}

bool UMessageData::GetMessage(FMessageDataCell& MessageDataCell, FName ID) {
    return false;
}

UMessageData::UMessageData() {
}

