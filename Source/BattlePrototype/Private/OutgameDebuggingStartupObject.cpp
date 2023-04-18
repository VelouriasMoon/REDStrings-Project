#include "OutgameDebuggingStartupObject.h"

class ADebuggingItemBool;
class ADebuggingItemEvent;
class ADebuggingItemStringArray;

void UOutgameDebuggingStartupObject::OnUseMouseCursor(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemMaximumProgressDisplayThatHasBeenReached(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemForcedChangeOfExecutionResultReport(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemFastFlowSkip(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemDummyBuffer(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemDataCorrupt(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemChangeZeroEpClearFlag(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSystemChangeClearFlag(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnSavedataUpload(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnSavedataDownload(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnSavedataDelete(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnReloadLevel(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnOpenPhotoMode(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnForcedChangeOfExecutionResultReportList(const ADebuggingItemStringArray* Item) {
}

void UOutgameDebuggingStartupObject::OnExecuteLoadLevel(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnDrawUIBaseProperty(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnDrawInactiveUIBaseProperty(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnDispUserTag(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnDispTitleMainUI(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnDispMouseRectangle(const ADebuggingItemBool* Item) {
}

void UOutgameDebuggingStartupObject::OnCosmosWebManagerHttpLastErrorCodeLog(const ADebuggingItemEvent* Item) {
}

void UOutgameDebuggingStartupObject::OnChangeLoadLevel(const ADebuggingItemStringArray* Item) {
}

void UOutgameDebuggingStartupObject::OnActivityReleaseAccordingToTheMaximumProgressThatHasBeenReached(const ADebuggingItemEvent* Item) {
}

UOutgameDebuggingStartupObject::UOutgameDebuggingStartupObject() {
    this->m_pDebugSystemSaveLoadScreenParamManager = NULL;
}

