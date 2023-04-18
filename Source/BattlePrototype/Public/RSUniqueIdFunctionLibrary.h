#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSUniqueIdFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSUniqueIdFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSUniqueIdFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static FName UniqueNameFromId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static int32 UniqueIdFromName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWeaponFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWeaponFromUniqueId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerFromUniqueId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemFromUniqueId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsENPCFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsENPCFromUniqueId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnemyFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnemyFromUniqueId(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterFromUniqueName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterFromUniqueId(int32 ID);
    
};

