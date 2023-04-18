#pragma once
#include "CoreMinimal.h"
//#include "AssetRegistry/AssetData.h"
#include "GameFramework/Actor.h"
#include "ActorReferenceInfo.h"
#include "ManagerInterface.h"
#include "Templates/SubclassOf.h"
#include "ModelViewerBase.generated.h"

class ACameraActor;
class ANpcBase;
class ANpcSkeletalMeshActor;
class ARSCharacterBase;
class UObject;
class USaveGame;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AModelViewerBase : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* _modelViewerCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARSCharacterBase* _modelViewerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANpcBase* _modelViewerPlayerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANpcSkeletalMeshActor* _modelViewerSkeletalNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARSCharacterBase>> characterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 selectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* _PlayingMotionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _PlayingMotionAssetLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorReferenceInfo> ActorReferenceInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharacterNametList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetData> AnimationAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FaceNameList;
    
    AModelViewerBase();
    UFUNCTION(BlueprintCallable)
    void SpawnCharacter(const int32 CharacterIndex);
    
    UFUNCTION(BlueprintCallable)
    void SortAssetDatalist(TArray<FAssetData>& AssetDataList);
    
    UFUNCTION(BlueprintCallable)
    void SetModelViewerCamera(ACameraActor* CameraActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFaceComboBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterComboBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimationComboBox();
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimation(UObject* MotionAsset, const bool isReplay, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable)
    bool PauseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSelectCharacter(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool ModelViewerSave(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    USaveGame* ModelViewerLoad(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadCharacterRequest(const bool isReload);
    
    UFUNCTION(BlueprintCallable)
    void LoadCharacter(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayAnimationMontage();
    
    UFUNCTION(BlueprintCallable)
    void InitializePlayerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSelectFaceComboboxIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSelectCharacterComboboxIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ARSCharacterBase> GetSelectCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSelectAnimationComboboxIndex();
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<ARSCharacterBase> GetRSCharacterBase(const FString& assetPath);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<ANpcSkeletalMeshActor> GetNpcSkeletalMeshActor(const FString& assetPath);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<ANpcBase> GetNpcBase(const FString& assetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANpcSkeletalMeshActor* GetModelViewerSkeletalNpc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANpcBase* GetModelViewerPlayerNpc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSCharacterBase* GetModelViewerPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* GetModelViewerCamera();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxAnimationTime();
    
    UFUNCTION(BlueprintCallable)
    static void GetFolderNameListByPath(TArray<FString>& FolderNameList, const FString& SearchFolderPathFromContents);
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugDrawMotionInfo();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentAnimationTime();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentAnimationFrame(const int32 digit);
    
    UFUNCTION(BlueprintCallable)
    FString GetActorReferenceToString(TSoftClassPtr<AActor> charaActor);
    
    UFUNCTION(BlueprintCallable)
    FString GetActorReferencePackageName(TSoftClassPtr<AActor> charaActor);
    
    UFUNCTION(BlueprintCallable)
    FString GetActorReferenceAssetName(TSoftClassPtr<AActor> charaActor);
    
    UFUNCTION(BlueprintCallable)
    void Debug_CreateModelViewerSkeletalNpc(TSubclassOf<ANpcSkeletalMeshActor> characterBP, const FString& playerStartName);
    
    UFUNCTION(BlueprintCallable)
    void Debug_CreateModelViewerCharacterNpc(TSubclassOf<ANpcBase> characterBP, const FString& playerStartName);
    
    UFUNCTION(BlueprintCallable)
    void Debug_CreateModelViewerCharacter(TSubclassOf<ARSCharacterBase> characterBP, const FString& playerStartName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateFaceNameList(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    void CreateCharacterFileList();
    
    UFUNCTION(BlueprintCallable)
    void CreateAnimationFileList(FName CharacterIdentifier, FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    static int32 CompareFName(FName Param1, FName Param2);
    
    UFUNCTION(BlueprintCallable)
    bool CompareAssetPath(const FString& ModelBPDisplayName, const FString& AnimationPath);
    
    UFUNCTION(BlueprintCallable)
    void ChangePrevIndex();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextIndex();
    
    UFUNCTION(BlueprintCallable)
    void AddCharacter(TArray<TSubclassOf<ARSCharacterBase>> List);
    
    UFUNCTION(BlueprintCallable)
    void AddActorReferenceInfo(TSoftClassPtr<AActor> charaActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

