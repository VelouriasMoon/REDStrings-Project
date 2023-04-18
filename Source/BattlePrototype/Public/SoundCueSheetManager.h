#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SoundCueSheet.h"
#include "SoundCueSheetManager.generated.h"

class USoundAtomCue;
class USoundAtomCueSheet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API USoundCueSheetManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoundCueSheet> DynamicCueSheet;
    
public:
    USoundCueSheetManager();
    UFUNCTION(BlueprintCallable)
    bool UnregisterFromSoftRef(TSoftObjectPtr<USoundAtomCueSheet> SheetSoftRef);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterFromPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    bool Unregister(USoundAtomCueSheet* Sheet);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterFromSoftRef(TSoftObjectPtr<USoundAtomCueSheet> SheetSoftRef);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterFromPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    bool Register(USoundAtomCueSheet* Sheet);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* GetCueSheetByName(const FString& CueSheetName);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByLoadedCueSheetFromString(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCue* GetAtomCueByLoadedCueSheet(TSoftObjectPtr<USoundAtomCue> AtomCueSoftRef, TSoftObjectPtr<USoundAtomCueSheet> PreferenceCueSheetSoftRef);
    
};

