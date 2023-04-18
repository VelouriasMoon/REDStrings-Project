#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RSAtomCuePlayNotifyBase.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories)
class BATTLEPROTOTYPE_API URSAtomCuePlayNotifyBase : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_pSound;
    
    URSAtomCuePlayNotifyBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    void OnSetEditorSound(USoundAtomCue* Sound) const;
    
};

