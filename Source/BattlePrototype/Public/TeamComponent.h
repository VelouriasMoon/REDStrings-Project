#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TeamKind.h"
#include "TeamComponent.generated.h"

class AActor;
class UTeamComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UTeamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TeamKind OwnKind;
    
    UTeamComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRival(const UTeamComponent* Opponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMob() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriend(const UTeamComponent* Opponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTeamComponent* GetTeamComponentFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void CopyTeamParameterFrom(UTeamComponent* Other);
    
    UFUNCTION(BlueprintCallable)
    static void CopyTeamParameterBetweenActor(AActor* From, AActor* To);
    
};

