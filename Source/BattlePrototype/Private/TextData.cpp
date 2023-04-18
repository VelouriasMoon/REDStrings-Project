#include "TextData.h"

bool UTextData::LoadResource(const FString& FilePath) {
    return false;
}

FString UTextData::GetText(FName ID, bool& Founded) {
    return TEXT("");
}

UTextData::UTextData() {
    this->RefTextTable = NULL;
}

