#include "UIChromaticAberration.h"

class UImage;
class URetainerBox;

void UUIChromaticAberration::Update() {
}

void UUIChromaticAberration::Setup(URetainerBox* InRetainerBox, UImage* ImageRed, UImage* ImageGreen, UImage* ImageBlue) {
}

UUIChromaticAberration::UUIChromaticAberration() {
    this->RetainerBox = NULL;
    this->Material = NULL;
    this->Type = EChromaticAberrationType::CA_RGB;
}

