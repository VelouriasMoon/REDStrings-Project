#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "EUIMinmapDistanceIcon.h"
#include "Templates/SubclassOf.h"
#include "UIBase.h"
#include "UIMiniMap.generated.h"

class ABP_UI_SceneMap;
class APlayerController;
class ARSHUDBase;
class UImage;
class UObject;
class UOverlay;
class UUIMiniBondsQuestGoal;
class UUIMiniMainQuestGoal;
class UUIMiniSubQuestGoal;
class UUIMinimapDistance;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIMiniMap : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConfigMiniMapDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConfigMiniMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConfigMiniMapRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABP_UI_SceneMap* m_ParentSceneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMiniMainQuestGoal* m_MainQuestGoalWidgete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMiniSubQuestGoal* m_SubQuestGoalWidgete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIMiniBondsQuestGoal* m_BondsQuestGoalWidgete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_VectorCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_VectorNorthRadios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_VectorQuestIconRadios;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugFlagNative;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSHUDBase* m_pHudBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUIMinimapDistance*> m_MinimapDistanceData;
    
public:
    UUIMiniMap();
    UFUNCTION(BlueprintCallable)
    void UpdateStateMinimap(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateConfigSetting();
    
    UFUNCTION(BlueprintCallable)
    void StartMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    bool SetWidgetPlayerThumbnail(const UObject* WorldContextObject, UImage* Image, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    bool SetWidgetCameraThumbnail(const UObject* WorldContextObject, UImage* Image, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetThumbnail(int32 Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceSetting(EUIMinmapDistanceIcon icontype);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDirectionDestSubQuest(FName subquestTitle, FName SubQuestID, bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionDestNative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetDirectionDest();
    
    UFUNCTION(BlueprintCallable)
    void SetBrainField(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ReleaseMapSetting();
    
    UFUNCTION(BlueprintCallable)
    void OpenMinimap();
    
    UFUNCTION(BlueprintCallable)
    void OnAfterChangeProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MinimapMaterialBrainfield(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool MapOpenListSetting(int32 AreaNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitIcon_Etc_Native();
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerWidget(UUserWidget* widgetcamera, UUserWidget* widgetplayer);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNorthWidget(UUserWidget* widgetnorthring, UUserWidget* widgetnorthicon, UUserWidget* widgetnorthstring);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMinimapDistance(UUIMinimapDistance* Distance, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMinimap(UOverlay* allset);
    
    UFUNCTION(BlueprintCallable)
    void InitializeImage(UImage* imagecamera, UImage* imageplayer);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDirectionImage(UImage* imagemain, UImage* imagekizuna);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAnime(UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_, UWidgetAnimation* out_noise, UWidgetAnimation* in_noise, UWidgetAnimation* default_noise);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<ABP_UI_SceneMap> getMinimapRefalence(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugFlagNative();
    
    UFUNCTION(BlueprintCallable)
    void GetActiveSubquest(FName& subquestName, FName& SubQuestID, bool& Flag);
    
    UFUNCTION(BlueprintCallable)
    void ForceLoadMap();
    
    UFUNCTION(BlueprintCallable)
    void EndMinimapBrainField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateMapSetting();
    
    UFUNCTION(BlueprintCallable)
    void CloseMinimap();
    
};

