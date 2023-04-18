#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MeshTriangleData.h"
#include "RSMeshDataProviderFL.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class CASCADEEXTENSIONPLUGIN_API URSMeshDataProviderFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSMeshDataProviderFL();
    UFUNCTION(BlueprintCallable)
    static void GetStaticMeshProviderTriangleData(UPARAM(Ref) FMeshTriangleData& OutTriangleData, UStaticMesh* StaticMesh, int32 lodIndex, int32 SectionIndex, FVector Scale3D);
    
};

