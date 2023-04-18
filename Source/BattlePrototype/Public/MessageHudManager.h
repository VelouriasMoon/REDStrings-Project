#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Internationalization/Text.h"
#include "ManagerInterface.h"
#include "MessageDataCell.h"
#include "MessageHudManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AMessageHudManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_swapTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextGender m_textGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_pluralTagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ordinalTagArray;
    
public:
    AMessageHudManager();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SkipMessage() const;
    
    UFUNCTION(BlueprintCallable)
    void setSwapTagArray(const TArray<FString>& StringArray);
    
    UFUNCTION(BlueprintCallable)
    void setSwapTag(int32 Index, const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void setPluralTagArray(const TArray<int32>& valueArray);
    
    UFUNCTION(BlueprintCallable)
    void setPluralTag(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void setOrdinalTagArray(const TArray<int32>& valueArray);
    
    UFUNCTION(BlueprintCallable)
    void setOrdinalTag(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool setMessageTableName(const FString& messageTableName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void setGenderTag(const ETextGender& textGender);
    
    UFUNCTION(BlueprintCallable)
    void PreLoadAllVoice(const FString& messageTableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETextGender getTextGender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> getSwapTagArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> getPluralTagArray() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> getOrdinalTagArray() const;
    
    UFUNCTION(BlueprintCallable)
    bool getMessageTableName(FString& messageTableName, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void GetMessageFromLabel(FString& Message, const FString& messageLabel, const FString& messageTable);
    
    UFUNCTION(BlueprintCallable)
    void GetMessageDataCellFromLabel(FMessageDataCell& MessageDataCell, const FString& messageLabel, const FString& messageTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastChoiceResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChoiceResult(int32 MessageIndex) const;
    
    UFUNCTION(BlueprintCallable)
    int32 DrawMessage(int32 windowType, const FString& messageTableName, const FString& messageLabel, FName RipSyncBoardJointID, bool skipable, float DrawSecond, bool isSkipVoiceEnd, bool IsVoiceOnlyMessage, bool isWaitMode);
    
    UFUNCTION(BlueprintCallable)
    void clearAllTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEndMessage(int32 MessageIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckEndAllMessage(bool FlagCheckClose) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

