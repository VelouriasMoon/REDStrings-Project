#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "EEventPlMaterialType.h"
#include "RSActorSystemBase.h"
#include "EventCaptureActorBase.generated.h"

class ACharacter;
class UCurveFloat;
class ULevelSequence;
class UMaterialInterface;
class UPrimitiveComponent;
class URSParticleSystemComponentBase;
class URSSceneCaptureComponent2D;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AEventCaptureActorBase : public ARSActorSystemBase {
    GENERATED_BODY()
public:
    AEventCaptureActorBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StoreSequencerInGameTransform(ULevelSequence* Sequnece, float SequencePosition);
    
    UFUNCTION(BlueprintCallable)
    void SetupHighResDOF(URSSceneCaptureComponent2D* SceneCapture, float ScaleX);
    
    UFUNCTION(BlueprintCallable)
    void SetupAlphaSortNative2(ACharacter* ChildStaticPl, URSParticleSystemComponentBase* CurrentFrameParticle, URSParticleSystemComponentBase* CurrentFrameTelepathyParticle, URSParticleSystemComponentBase* CurrentFrameOverTelepathyParticle);
    
    UFUNCTION(BlueprintCallable)
    void SetupAlphaSortNative(int32 Priority, const TArray<UPrimitiveComponent*>& BackTargetPrimitiveComps, const TArray<UPrimitiveComponent*>& TargetPrimitiveComps, const TArray<UPrimitiveComponent*>& FrontTargetPrimitiveComps, USkeletalMeshComponent* ChildMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectScale(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectMove(const FVector2D& Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SequenceScale(float Time, float Start, float End, UCurveFloat* Curve, bool Loop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SequenceMove(float Time, const FVector2D& Start, const FVector2D& End, UCurveFloat* Curve, bool Loop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SequenceAlpha(float Time, float Start, float End, UCurveFloat* Curve, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void CheckPlMaterialType(ACharacter* ChildStaticPl, EEventPlMaterialType& Type, bool& Change);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlMaterial(ACharacter* ChildStaticPl, UMaterialInterface* Source, EEventPlMaterialType Type);
    
};

