#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "GenericPlatform/GenericWindow.h"
#include "EAttackAutoLockOn.h"
#include "ECameraAfterMoveType.h"
#include "EChangeableControllerKey.h"
#include "EEventMessageAutoPlay.h"
#include "EFPSType.h"
#include "EGradualQuality.h"
#include "ELockonActionType.h"
#include "EOptionAAQuality.h"
#include "EOptionCameraPitch.h"
#include "EOptionCameraYaw.h"
#include "EOptionControllerVibration.h"
#include "EOptionDisplayEnemyDamage.h"
#include "EOptionMinimapDisplay.h"
#include "EOptionMinimapRotation.h"
#include "EOptionMinimapScaling.h"
#include "EOptionSoundOutput.h"
#include "ERSGamepadInputName.h"
#include "ETargetAutoChange.h"
#include "ETargetCameraTrace.h"
#include "ETextLanguage.h"
#include "HCGameDifficulty.h"
#include "ScreenResolutionSetting.h"
#include "OptionParam.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UOptionParam : public UObject {
    GENERATED_BODY()
public:
    UOptionParam();
    UFUNCTION(BlueprintCallable)
    void SetWindowModeImmediate(const TEnumAsByte<EWindowMode::Type>& windowMode, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetWindowMode(const TEnumAsByte<EWindowMode::Type>& windowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceVolume(uint8 Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceLanguage(ETextLanguage Type);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVerticalSyncImmediate(bool useVert, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetUseVerticalSync(bool useVert);
    
    UFUNCTION(BlueprintCallable)
    void SetUseBrainCrash(bool SetValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQualityImmediate(const EGradualQuality& textureAuality, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQuality(const EGradualQuality& textureQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCameraTraceImmediate(ETargetCameraTrace Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCameraTrace(ETargetCameraTrace Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetAutoChangeImmediate(ETargetAutoChange Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetAutoChange(ETargetAutoChange Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundOutput(EOptionSoundOutput Type);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQualityImmediate(const EGradualQuality& shadowQuality, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowQuality(const EGradualQuality& shadowQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetSeVolume(uint8 Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolutionImmediate(const FScreenResolutionSetting& ScreenResolution, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolutionFromUserSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetScreenResolution(const FScreenResolutionSetting& ScreenResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenBrightness(float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetPostQualityImmediate(const EGradualQuality& postQuality, bool isApply);
    
    UFUNCTION(BlueprintCallable)
    void SetPostQuality(const EGradualQuality& postQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetOldScreenResolution(const FScreenResolutionSetting& ScreenResolution);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapScaling(EOptionMinimapScaling Type);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapRotation(EOptionMinimapRotation Type);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimapDisplay(EOptionMinimapDisplay Type);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonActionTypeImmediate(ELockonActionType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonActionType(ELockonActionType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSTypeImmediate(const EFPSType fpsType);
    
    UFUNCTION(BlueprintCallable)
    void SetFPSType(const EFPSType& fpsType);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMessageAutoPlayImmediate(EEventMessageAutoPlay Type);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMessageAutoPlay(EEventMessageAutoPlay Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayLanguageImmediate(ETextLanguage Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayLanguage(ETextLanguage Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayEnemyDamage(EOptionDisplayEnemyDamage Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(HCGameDifficulty Type);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAllGraphic(bool isConstruct, bool setUeDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAllController();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAllConfig();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAll(bool isConstruct, bool setUeDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerVibration(EOptionControllerVibration Type);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerParamValue(EChangeableControllerKey targetKey, ERSGamepadInputName newKey);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraYaw(EOptionCameraYaw Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSpeed(uint8 speedType);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPitch(EOptionCameraPitch Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAfterMoveTypeImmediate(ECameraAfterMoveType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraAfterMoveType(ECameraAfterMoveType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMVolume(uint8 Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackAutoLockOnImmediate(EAttackAutoLockOn Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackAutoLockOn(EAttackAutoLockOn Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQualityImmediate(const EOptionAAQuality& antiAliasingQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetAntiAliasingQuality(const EOptionAAQuality& antiAliasingQuality);
    
    UFUNCTION(BlueprintCallable)
    void ReflectParamImmediate();
    
    UFUNCTION(BlueprintCallable)
    void ReflectParamAllGraphic();
    
    UFUNCTION(BlueprintCallable)
    void ReflectParamAllConfig();
    
    UFUNCTION(BlueprintCallable)
    void ReflectParamAll();
    
    UFUNCTION(BlueprintCallable)
    bool ReflectControllerParam();
    
    UFUNCTION(BlueprintCallable)
    void InitData(URSGameInstance* gameInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EWindowMode::Type> GetWindowMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetVoiceVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextLanguage GetVoiceLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseVerticalSync() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGradualQuality GetTextureQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETargetAutoChange GetTargetAutoChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionSoundOutput GetSoundOutput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGradualQuality GetShadowQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSeVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETargetCameraTrace GetSetTargetCameraTrace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScreenResolutionSetting GetScreenResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScreenBrightness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGradualQuality GetPostQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FScreenResolutionSetting GetOldScreenResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionMinimapScaling GetMinimapScaling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionMinimapRotation GetMinimapRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionMinimapDisplay GetMinimapDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELockonActionType GetLockonActionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFPSType GetFPSType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEventMessageAutoPlay GetEventMessageAutoPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextLanguage GetDisplayLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionDisplayEnemyDamage GetDisplayEnemyDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    HCGameDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionControllerVibration GetControllerVibration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSGamepadInputName GetControllerParamValue(EChangeableControllerKey targetKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERSGamepadInputName GetControllerDefaultKey(EChangeableControllerKey targetKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionCameraYaw GetCameraYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetCameraSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionCameraPitch GetCameraPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraAfterMoveType GetCameraAfterMoveType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetBgmVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAttackAutoLockOn GetAttackAutoLockOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionAAQuality GetAntiAliasingQuality() const;
    
};

