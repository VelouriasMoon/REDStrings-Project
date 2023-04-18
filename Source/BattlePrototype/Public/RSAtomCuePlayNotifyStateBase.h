#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RSAtomCuePlayNotifyStateBase.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BATTLEPROTOTYPE_API URSAtomCuePlayNotifyStateBase : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* m_pSound;
    
    URSAtomCuePlayNotifyStateBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    void OnSetEditorSound(USoundAtomCue* Sound) const;
    
};

