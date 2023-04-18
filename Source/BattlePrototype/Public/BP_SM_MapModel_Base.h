#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Engine/StaticMeshActor.h"
#include "UIDetaileMapFloorData.h"
#include "UIDetaileMapSubAreaCenterPosition.h"
#include "UIMapFloorAdjustData.h"
#include "BP_SM_MapModel_Base.generated.h"

class UCapsuleComponent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API ABP_SM_MapModel_Base : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDetaileMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float playerrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapGradationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIconScaleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIconDetail_ZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimapOnlyIconGradationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MinimapOnlyIconGradationValueFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_MaterialDynamicMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_MaterialDynamicDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_SubMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIMapFloorAdjustData> PGAdjuster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pgAdjusterFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PgHeightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pgIconHeightFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCenterOffsetProc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIDetaileMapSubAreaCenterPosition> m_AreaCenterPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FloorWidthDataCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FloorWidthIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_FloorWidthData;
    
public:
    ABP_SM_MapModel_Base();
    UFUNCTION(BlueprintCallable)
    void SetVisionSimulator(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetSubModelVisible(FName SubName, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(bool Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerRate(float NewPlayerrate);
    
    UFUNCTION(BlueprintCallable)
    void SetPersSwitch(bool pers);
    
    UFUNCTION(BlueprintCallable)
    void SetGradationValue(float Gradation);
    
    UFUNCTION(BlueprintCallable)
    void SetFloorPGAdjuster(TArray<FUIMapFloorAdjustData> Update);
    
    UFUNCTION(BlueprintCallable)
    void SetFloorIndextoGame(int32 floorindex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetFloorIndex(int32 floorindex);
    
    UFUNCTION(BlueprintCallable)
    void SetDetaileMap(bool detaileMap);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainField(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MaterialUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isVisionSimulator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isPgIconHeightFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isMinimapOnlyIconGradationValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isCenterOffsetProc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isAdjusterFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetZoomMin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetZoomMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetPgIconHeightFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimapOnlyIconGradationValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimapGradationValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMapIconScaleRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMapIconDetail_ZOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUIMapFloorAdjustData> GetFloorPGAdjuster();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFloorIndextoGameWidthNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetFloorIndextoGameWidthFlag();
    
    UFUNCTION(BlueprintCallable)
    float GetFloorIndextoGameWidthData(int32 floorindex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFloorIndextoGameWidth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FUIDetaileMapFloorData> GetFloorData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetDirectionRotate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCapsuleComponent* GetCollisitonData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIDetaileMapSubAreaCenterPosition> GetAreaCenterPosArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAreaCenterPos();
    
    UFUNCTION(BlueprintCallable)
    void CalcMaterialUpDateParam(float RateHeight, float Width);
    
};

