#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#include "Engine/EngineTypes.h"
#include "BoolVector.h"
#include "ERSParticleSystemAttachRotationOffMode.h"
#include "ESequencerDilationOwner.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_RSTimedParticleSystem.generated.h"

class URSParticleSystemComponentBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BATTLEPROTOTYPE_API UAnimNotifyState_RSTimedParticleSystem : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSParticleSystemComponentBase> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Ignore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ScaleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAttachLocation::Type> LocationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OptionSeeThrough;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRegistToChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInterruptTelepo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector SocketLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector SocketRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSParticleSystemAttachRotationOffMode SocketRotationOffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolVector SocketScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequencerDilationOwner DilationOwner;
    
    UAnimNotifyState_RSTimedParticleSystem();
};

