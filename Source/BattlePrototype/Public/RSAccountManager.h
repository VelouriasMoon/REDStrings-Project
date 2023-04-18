#pragma once
#include "CoreMinimal.h"
#include "ECheckAccountFlag.h"
#include "ManagerInterface.h"
#include "OnXboxChangeAccountDelegateDelegate.h"
#include "OnXboxConnectFromInvalidIndexDelegateDelegate.h"
#include "OnXboxCuttingAccountDelegateDelegate.h"
#include "OnXboxFirstConnectDelegateDelegate.h"
#include "OnXboxReconnectAccountDelegateDelegate.h"
#include "RSTickableManagerBase.h"
#include "RSAccountManager.generated.h"

class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSAccountManager : public URSTickableManagerBase, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_UserAccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_AssumedDefaultUserAccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFirstButtonPushCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFirstCheckSuccessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInvalidPairingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DelayCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugInvalidXB1ProfileCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugTickOutputLog;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxFirstConnectDelegate XboxFirstConnectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxChangeAccountDelegate XboxChangeAccountEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxCuttingAccountDelegate XboxCuttingAccountEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxReconnectAccountDelegate XboxReconnectAccountEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXboxConnectFromInvalidIndexDelegate XboxConnectFromInvalidIndexEvent;
    
    URSAccountManager();
    UFUNCTION(BlueprintCallable)
    bool UpdateUserAccountID();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateController();
    
    UFUNCTION(BlueprintCallable)
    void Test_XboxOneGetUserID();
    
    UFUNCTION(BlueprintCallable)
    void SetCheckAccountInvalidBitFlag(ECheckAccountFlag Flag, const bool IsInvalid);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveAllController(const int32 _ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetAccount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestFirstSignIn();
    
    UFUNCTION(BlueprintCallable)
    void OutputLocalPlayerInfo();
    
    UFUNCTION(BlueprintCallable)
    void OutputDebugInfo();
    
    UFUNCTION(BlueprintCallable)
    void OutputControllerInfo();
    
    UFUNCTION(BlueprintCallable)
    void OutputAllLoginProfileID();
    
    UFUNCTION(BlueprintCallable)
    bool OpenLoginUI(bool IsFirst);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFirstConnect(const FString& AccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnAccountReconnect(const FString& AccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnAccountCutting(const FString& AccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnAccountConnectFromInvalidIndex(int32 ControllerId, const FString& AccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnAccountChange(const FString& PrevAccountId, const FString& NowAccountId);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetLocalPlayerUserInfo();
    
    UFUNCTION(BlueprintCallable)
    FString GetLocalPlayerUserID();
    
    UFUNCTION(BlueprintCallable)
    FString GetLocalPlayerProfileID(const int32 _LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalPlayerControllerID();
    
    UFUNCTION(BlueprintCallable)
    FString GetControllerProfileID(const int32 _ControllerId);
    
    UFUNCTION(BlueprintCallable)
    bool FirstCheckUserAccount();
    
    UFUNCTION(BlueprintCallable)
    bool FirstButtonPushCheck();
    
    
    // Fix for true pure virtual functions not being implemented
};

