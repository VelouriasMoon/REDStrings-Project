#include "DebugSaveDataListWindow.h"
#include "SaveLoadScreenParamManager.h"

void ADebugSaveDataListWindow::LoadDebugSaveData(const FString& Filename) {
}

void ADebugSaveDataListWindow::DoNewGame() {
}

ADebugSaveDataListWindow::ADebugSaveDataListWindow() {
    this->m_pDebugDebugSaveLoadScreenParamManager = CreateDefaultSubobject<USaveLoadScreenParamManager>(TEXT("SaveLoadScreenParamManager4"));
}

