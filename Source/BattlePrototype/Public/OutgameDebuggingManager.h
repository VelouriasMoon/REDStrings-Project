#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EOutgameDebuggingPage.h"
#include "ManagerInterface.h"
#include "OnReadyOutgameDebuggingDelegate.h"
#include "OutgameDebuggingManager.generated.h"

class ADebuggingItemBase;
class AOutgameDebuggingManager;
class UDebuggingWidget;
class UObject;
class UOutgameDebuggingStartupObject;
class UUserWidget;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AOutgameDebuggingManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyOutgameDebugging OnReadyDebugging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOutgameDebuggingPage Page;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DebuggingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDebuggingWidget*> DebuggingTreeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOutgameDebuggingStartupObject* StartupObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugAutoInputDelayTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDispRevision;
    
public:
    AOutgameDebuggingManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromItem(EOutgameDebuggingPage InPage, ADebuggingItemBase* InItem);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterChildFromHashName(EOutgameDebuggingPage InPage, const FText& InHashName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageUI(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageSystem(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageSound(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageScene(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageRender(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPagePlayer(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageParty(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageEvent(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageEnemy(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageBattle(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickPageAjito(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StartWindow();
    
    UFUNCTION(BlueprintCallable)
    void SetPage(EOutgameDebuggingPage InPage);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDispRevisions(bool isDisp);
    
    UFUNCTION(BlueprintCallable)
    ADebuggingItemBase* SearchItem(EOutgameDebuggingPage InPage, const FText& InHashName, bool InIgnoreCase);
    
    UFUNCTION(BlueprintCallable)
    void SaveDebuggingParameter();
    
    UFUNCTION(BlueprintCallable)
    void ResetDebuggingParameter();
    
    UFUNCTION(BlueprintCallable)
    void RegisterChild(EOutgameDebuggingPage InPage, ADebuggingItemBase* InItem);
    
    UFUNCTION(BlueprintCallable)
    void LoadDebuggingParameter(bool IsBroadcast);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRevisionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebuggingText(const FString& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AOutgameDebuggingManager* GetDebuggingManagerInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FinishWindow();
    
    UFUNCTION(BlueprintCallable)
    void ExportDebuggingItemText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageRender();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPagePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPageAjito();
    
    UFUNCTION(BlueprintCallable)
    void Dump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugIsDispRevisions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageRender();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPagePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPageAjito();
    
    
    // Fix for true pure virtual functions not being implemented
};

