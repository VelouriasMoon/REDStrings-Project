#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "Engine/EngineTypes.h"
#include "BoolVector.h"
#include "ERSParticleSystemAttachRotationOffMode.h"
#include "ESequencerDilationOwner.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_RSPlayParticleEffect.generated.h"

class UParticleComponentListManager;
class URSParticleSystemComponentBase;

UCLASS(Blueprintable, CollapseCategories)
class BATTLEPROTOTYPE_API UAnimNotify_RSPlayParticleEffect : public UAnimNotify_PlayParticleEffect {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleComponentListManager* ParticleComponentManager;
    
    UAnimNotify_RSPlayParticleEffect();
};

