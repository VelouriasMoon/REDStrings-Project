#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM(BlueprintType)
enum class EItemCategory : uint8 {
    Invalid,
    BattleItem,
    Weapon,
    Accessory,
    MaterialEN,
    MaterialLC,
    Base,
    KeyItem,
    Costume,
    Attachment_BackHead,
    Attachment_FrontHead,
    Attachment_Head,
    Attachment_Eye,
    Attachment_Ear,
    Attachment_Mouth,
    Attachment_Face,
    Attachment_FrontBody,
    Attachment_BackBody,
    Attachment_Arm,
    Attachment_Leg,
    Food,
    Num,
    Attachment = 0x9,
    EItemCategory_MAX = 0x16,
};

