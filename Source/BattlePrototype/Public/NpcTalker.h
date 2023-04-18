#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EActionIconSubQuestState.h"
#include "EActionIconType.h"
#include "NpcBase.h"
#include "Templates/SubclassOf.h"
#include "NpcTalker.generated.h"

class AMakeEventActor;
class UBoxComponent;
class UChildActorComponent;
class UREDLuaScriptComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ANpcTalker : public ANpcBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_messageTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShowBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UREDLuaScriptComponent* m_pLuaScriptComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> m_MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* m_makeEventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* m_pChildActionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_actionIconWorldPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconType m_actionIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionIconSubQuestState m_actionIconSubQuestState;
    
public:
    ANpcTalker();
    UFUNCTION(BlueprintCallable)
    void setMessageTableName(const FString& TableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString getMessageTableName() const;
    
};

