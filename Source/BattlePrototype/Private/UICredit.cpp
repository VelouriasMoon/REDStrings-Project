#include "UICredit.h"

class UImage;
class UOverlay;
class UREDTextBlock;
class USpacer;

void UUICredit::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUICredit::InitializeThis(UOverlay* overlayParent) {
}

void UUICredit::InitializeStaffNameQuad(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaffLeft1, UREDTextBlock* textStaffLeft2, UREDTextBlock* textStaffRight1, UREDTextBlock* textStaffRight2) {
}

void UUICredit::InitializeStaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2) {
}

void UUICredit::InitializeStaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* TextBlock) {
}

void UUICredit::InitializeSpace_StaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2) {
}

void UUICredit::InitializeSpace_StaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textStaff) {
}

void UUICredit::InitializeOfficial_StaffNameDouble(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition, UREDTextBlock* textStaff1, UREDTextBlock* textStaff2) {
}

void UUICredit::InitializeOfficial_StaffNameCombo(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition1, UREDTextBlock* textStaff1, UREDTextBlock* textPosition2, UREDTextBlock* textStaff2) {
}

void UUICredit::InitializeOfficial_StaffName(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* textPosition, UREDTextBlock* textStaff) {
}

void UUICredit::InitializeLogo(UOverlay* Overlay, USpacer* Spacer, UImage* imageLogo) {
}

void UUICredit::InitializeCorporateName_Official(UOverlay* Overlay, USpacer* Spacer, UREDTextBlock* TextBlock) {
}

UUICredit::UUICredit() {
    this->TextData = NULL;
    this->TextureLogos[0] = NULL;
    this->TextureLogos[1] = NULL;
}

