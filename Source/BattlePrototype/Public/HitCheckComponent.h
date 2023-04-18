#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "HCAttackCollisionInfo.h"
#include "HCCollisionCommonInfo.h"
#include "HCHitEffectInfo.h"
#include "HCHitResult.h"
#include "HCSkillCommonInfo.h"
#include "HCSkillExtraType.h"
#include "HitCheckComponent.generated.h"

class AActor;
class UAnimSequenceBase;
class UHitCheckComponent;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UHitCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCallCheckHitInTick;
    
    UHitCheckComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveFixedCollision(USceneComponent* SceneComp);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttackCollision(UObject* Notify, AActor* Owner, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNoDamagePartFromHCHitResult(const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFixedCollisionInterceptAble(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void InterceptFixedCollisionDataEnemy(USceneComponent* SceneComp, AActor* NewAttackOwner, const FHCCollisionCommonInfo& refInterceptCommon, const FHCSkillCommonInfo& refInterceptSkill);
    
    UFUNCTION(BlueprintCallable)
    void InterceptFixedCollisionData(USceneComponent* SceneComp, AActor* NewAttackOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHitCheckComponent* GetHitCheckComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFixedCollisionNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFixedCollisionCapsule(int32 Index, FVector& outStartLocation, FVector& outEndLocation, float& OutRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFixedCollisionAttackSource(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFixedCollisionAttacker(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackCollisionNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAttackCollisionCapsule(int32 Index, FVector& outStartLocation, FVector& outEndLocation, float& OutRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAttackCollisionAttacker(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void CheckHit(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool CheckFixedCollisionSkillExtraType(int32 Index, HCSkillExtraType CheckExtraType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckAttackCollisionSkillExtraType(int32 Index, HCSkillExtraType CheckExtraType);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreJustDodgeFixedCollisionData(USceneComponent* SceneComp);
    
    UFUNCTION(BlueprintCallable)
    void AddFixedCollisionBySceneCompSkill(AActor* Owner, USceneComponent* SceneComp, float Radius, float HalfHeight, const FHCCollisionCommonInfo& commonInfo, const FHCSkillCommonInfo& skill, const FHCHitEffectInfo& effectInfo, AActor* attackOwner, float limitHeight);
    
    UFUNCTION(BlueprintCallable)
    void AddFixedCollisionByPrimitiveSkill(AActor* Owner, UPrimitiveComponent* Primitive, const FHCCollisionCommonInfo& commonInfo, const FHCSkillCommonInfo& skill, const FHCHitEffectInfo& effectInfo, AActor* attackOwner, float limitHeight);
    
    UFUNCTION(BlueprintCallable)
    void AddAttackCollision(UObject* Notify, AActor* Owner, UAnimSequenceBase* Animation, const FHCAttackCollisionInfo& AttackCollisionInfo, UMeshComponent* OtherMesh);
    
};

