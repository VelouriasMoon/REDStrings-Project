#pragma once
#include "CoreMinimal.h"
#include "ASAnimInstance.h"
#include "RSAjitoAnimInstanceInterface.h"
#include "RSAjitoAnimBaseInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BATTLEPROTOTYPE_API URSAjitoAnimBaseInstance : public UASAnimInstance, public IRSAjitoAnimInstanceInterface {
    GENERATED_BODY()
public:
    URSAjitoAnimBaseInstance();
    
    // Fix for true pure virtual functions not being implemented
};

