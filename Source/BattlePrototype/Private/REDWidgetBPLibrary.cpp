#include "REDWidgetBPLibrary.h"

class ARSHUDBase;
class UImage;
class UObject;

void UREDWidgetBPLibrary::UISetThumbnailIconSas(UImage* Image, int32 ID) {
}

int32 UREDWidgetBPLibrary::UIGetIdIconSasStatus(E_SASKindNative sas, E_SASIconStatus Status) {
    return 0;
}

int32 UREDWidgetBPLibrary::UIGetIdIconSas(E_SASKindNative sas) {
    return 0;
}

void UREDWidgetBPLibrary::UI_SetThumbnail_Action(UImage* Image, EActionIconType Index, bool IsActive) {
}

void UREDWidgetBPLibrary::UI_SetColorAction(UImage* Image, int32 Index) {
}

void UREDWidgetBPLibrary::SetIconGamePadM(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button) {
}

void UREDWidgetBPLibrary::SetIconGamePadL(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button) {
}

void UREDWidgetBPLibrary::SetIconBaseGamePad(UObject* WorldContextObject, UImage* Image, ERSGamepadInputName Button) {
}

void UREDWidgetBPLibrary::SetIcon(UObject* WorldContextObject, UImage* Image, EUI_UV_BUtton_N1 Button) {
}

ARSHUDBase* UREDWidgetBPLibrary::GetRSHudBase(UObject* WorldContextObject) {
    return NULL;
}

UREDWidgetBPLibrary::UREDWidgetBPLibrary() {
}

