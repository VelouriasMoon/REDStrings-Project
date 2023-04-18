#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "MovieSceneObjectBindingID.h"
#include "Templates/SubclassOf.h"
#include "RSLevelSequenceActor.generated.h"

class AActor;
class ASequencerParticle;
class UMovieSceneSequence;
class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ARSLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetupParticleBinding(TArray<FMovieSceneObjectBindingID> BindingIDList, TArray<ASequencerParticle*> ParticleList);
    
    UFUNCTION(BlueprintCallable)
    void SetShotSequence(UMovieSceneSequence* Sequence, FText ShotName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackHead();
    
    UFUNCTION(BlueprintCallable)
    float SetEventSkipEndTimeForEventName(FName SkipName, FName EventName, bool& IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetBindingByObject(FMovieSceneObjectBindingID Binding, const TArray<UObject*>& Objects, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationSlotNameToInString(FName SlotName, const FString& inString, const FString& ExclusionInString);
    
    UFUNCTION(BlueprintCallable)
    int32 SetActiveFromShotName(FText ShotName, bool IsActive, bool IsContainName);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCameraCutSection(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void RestartParticle(TArray<FMovieSceneObjectBindingID> BindingIDList, TArray<ASequencerParticle*> ParticleList);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIsActiveSectionForShotName(FText ShotName);
    
    UFUNCTION(BlueprintCallable)
    void GetSequenceObjectBindingIDListFromClassAndMatchTexts(TSubclassOf<AActor> ObjClass, const TArray<FText>& PerfectMatchTexts, const TArray<FText>& SuffixTexts, TArray<FMovieSceneObjectBindingID>& OutMatchBindingIDList, TArray<FString>& OutMatchNameList, bool& IsFind);
    
    UFUNCTION(BlueprintCallable)
    void GetSequenceObjectBindingIDListFromClass(TSubclassOf<AActor> ObjClass, TArray<FMovieSceneObjectBindingID>& OutBindingIDList, TArray<FString>& OutNameList, bool& IsFind);
    
    UFUNCTION(BlueprintCallable)
    void GetSequenceObjectBindingIDList(TArray<FText> ObjNames, TArray<FName> ObjTags, TArray<FMovieSceneObjectBindingID>& OutBindingIDList, bool& IsFind);
    
    UFUNCTION(BlueprintCallable)
    FMovieSceneObjectBindingID GetSequenceObjectBindingID(FText ObjName, TArray<FName> ObjTags, bool& IsFind);
    
    UFUNCTION(BlueprintCallable)
    void GetSequenceInSpawnedObjectList(TArray<UObject*>& SpawnedObjects);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetSequenceInSpawnedActorListFromClass(TSubclassOf<AActor> ObjClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetSequenceInSpawnedActorList();
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipInnerSequenceFromTagNames(TArray<FName> TagNames);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipInnerSequenceFromBinding(TArray<FMovieSceneObjectBindingID> ObjBindings);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipInnerSequenceALL();
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipInnerSequence(TArray<FText> ObjNames);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipExternalFromTagNames(TArray<FName> TagNames);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipExternalFromBinding(TArray<FMovieSceneObjectBindingID> ObjBindings);
    
    UFUNCTION(BlueprintCallable)
    void ChangeForceOwnerShipExternal(TArray<FText> ObjNames);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnableTemplateTag(TArray<FName> AddTags);
    
};

