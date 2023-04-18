#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIDetailMap.generated.h"

class ABP_UI_SceneMap;
class ARSHUDBase;
class UREDOverlay;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIDetailMap : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABP_UI_SceneMap* m_ParentSceneMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pHudBase;
    
public:
    UUIDetailMap();
    UFUNCTION(BlueprintCallable)
    void UpdateStateDetailMap(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TextFixDataDetailMap(int32 LocationNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReleaseDetailMap();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMouseRectWidget(UREDOverlay* pc_pg1_1, UREDOverlay* pc_pg1_2, UREDOverlay* pc_pg2_2, UREDOverlay* pc_pg2_1);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDetailMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitializeDataDetailMap();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_, UWidgetAnimation* iconinfoin, UWidgetAnimation* iconinfoout, UWidgetAnimation* default_iconinfo_none);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABP_UI_SceneMap> getDetaileMapRefalence(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateDetailMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ControlDetailMap(int32 SubState);
    
};

