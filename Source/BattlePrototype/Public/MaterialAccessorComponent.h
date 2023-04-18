#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "EMaterialAccessorSetupID.h"
#include "MACSlotParameter.h"
#include "MACVariableFloat.h"
#include "MACVariableVector.h"
#include "MaterialAccessorComponent.generated.h"

class UMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UMaterialAccessorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> AppendMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRestoreOverrideParamters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMACSlotParameter> MaterialList;
    
public:
    UMaterialAccessorComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMateiral();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibleMaterialAllLODs(bool Show, int32 SlotHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterByVariable(UPARAM(Ref) FMACVariableVector& Variable, EMaterialAccessorSetupID SetupID);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterByRegister(const TArray<FVector>& Variables, const TArray<EMaterialAccessorSetupID>& SetupIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(EMaterialAccessorSetupID SetupID, FLinearColor Value, FLinearColor DefaultValue, FName ParameterName, int32 SlotHandle);
    
    UFUNCTION(BlueprintCallable)
    int32 SetupMaterialBySlotName(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(UTexture* Texture, FName ParameterName, int32 SlotHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterByVariable(UPARAM(Ref) FMACVariableFloat& Variable, EMaterialAccessorSetupID SetupID);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterByRegister(const TArray<float>& Variables, const TArray<EMaterialAccessorSetupID>& SetupIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameter(EMaterialAccessorSetupID SetupID, float Value, float DefaultValue, FName ParameterName, int32 SlotHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetExcludeRestoreOverrideParameters(TArray<FName> ParameterNames);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAppendMesh(const TArray<UMeshComponent*>& InAppedMeshes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestoreParameter();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterVectorParameters(const TArray<FMACVariableVector>& Variables);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScalarParameters(const TArray<FMACVariableFloat>& Variables);
    
public:
    UFUNCTION(BlueprintCallable)
    void ManualRestoreOverrideParametersBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetDefaultVectorParameterByVariable(UPARAM(Ref) FMACVariableVector& Variable);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultVectorParameterALL(FName ParameterName, FLinearColor& OutParameters);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultVectorParameter(TArray<int32> SearchSlots, FName ParameterName, FLinearColor& OutParameters);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultScalarParameterByVariable(UPARAM(Ref) FMACVariableFloat& Variable);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultScalarParameterALL(FName ParameterName, float& OutParameters);
    
    UFUNCTION(BlueprintCallable)
    void GetDefaultScalarParameter(TArray<int32> SearchSlots, FName ParameterName, float& OutParameters);
    
    UFUNCTION(BlueprintCallable)
    void AddColorByRate(float SumValue, FLinearColor BaseColor, float Rate, FLinearColor SourceColor, FLinearColor& OutColor);
    
};

