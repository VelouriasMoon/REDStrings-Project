#pragma once
#include "CoreMinimal.h"
#include "UIBase.h"
#include "UIConfigController.generated.h"

class UREDScrollBoxSimple;
class UUIConfigControllerSelect;
class UUIConfigControllerSelectMulti;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BATTLEPROTOTYPE_API UUIConfigController : public UUIBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeight;
    
public:
    UUIConfigController();
    UFUNCTION(BlueprintCallable)
    void UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void InitializeThis(UWidgetAnimation* animDefault, UREDScrollBoxSimple* ScrollBox, UUIConfigControllerSelectMulti* indexAttack, UUIConfigControllerSelectMulti* indexJump, UUIConfigControllerSelectMulti* indexStep_Dash, UUIConfigControllerSelectMulti* indexSpecialAttack, UUIConfigControllerSelectMulti* indexSAS_Menu_OpenClose, UUIConfigControllerSelectMulti* indexCV_Menu_OpenClose, UUIConfigControllerSelectMulti* indexPsychokinesis_Low, UUIConfigControllerSelectMulti* indexPsychokinesis_High, UUIConfigControllerSelectMulti* indexAutoTargetSwitching, UUIConfigControllerSelectMulti* indexSAS_CV_PageSwitch, UUIConfigControllerSelect* indexMoveFront, UUIConfigControllerSelect* indexMoveBack, UUIConfigControllerSelect* indexMoveLeft, UUIConfigControllerSelect* indexMoveRight, UUIConfigControllerSelect* indexAction, UUIConfigControllerSelect* indexAction2, UUIConfigControllerSelect* indexPsychicField, UUIConfigControllerSelect* indexAssaultVision, UUIConfigControllerSelect* indexExecuteBrainDrive, UUIConfigControllerSelect* indexCameraUp, UUIConfigControllerSelect* indexCameraDown, UUIConfigControllerSelect* indexCameraLeft, UUIConfigControllerSelect* indexCameraRight, UUIConfigControllerSelect* indexLockOn, UUIConfigControllerSelect* indexExecuteSAS1, UUIConfigControllerSelect* indexExecuteSAS2, UUIConfigControllerSelect* indexExecuteSAS3, UUIConfigControllerSelect* indexExecuteSAS4, UUIConfigControllerSelect* indexStopSAS, UUIConfigControllerSelect* indexExecuteCV1, UUIConfigControllerSelect* indexExecuteCV2, UUIConfigControllerSelect* indexExecuteCV3, UUIConfigControllerSelect* indexExecuteCV4, UUIConfigControllerSelect* indexItemSelectL, UUIConfigControllerSelect* indexItemSelectR, UUIConfigControllerSelect* indexUseItem, UUIConfigControllerSelect* indexCampMenu, UUIConfigControllerSelect* indexDetailMap, UUIConfigControllerSelect* indexWorldMap, UUIConfigControllerSelect* indexBrainMessage, UUIConfigControllerSelect* indexPhotoMode);
    
};

