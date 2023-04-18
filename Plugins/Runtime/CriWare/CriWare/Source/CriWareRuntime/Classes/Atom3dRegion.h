// Copyright (c) 2018 CRI Middleware Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CriWareApi.h"
#include "Atom3dRegion.generated.h"


UCLASS(BlueprintType, meta = (ToolTip = "UAtom3dRegionHandle class."))
class CRIWARERUNTIME_API UAtom3dRegionHandle : public UObject
{
	GENERATED_BODY()
public:
	UAtom3dRegionHandle(const FObjectInitializer& ObjectInitializer);

	// Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	// End UObject interface.

	CriAtomEx3dRegionHn GetRawHandle();

private:
	CriAtomEx3dRegionHn RawHandle;
};


/**
 * 
 */
UCLASS(editinlinenew, BlueprintType, meta = (ToolTip = "UAtom3dRegion class."))
class CRIWARERUNTIME_API UAtom3dRegion : public UObject
{
	GENERATED_BODY()
public:

	// リージョンのハンドルが変更された場合に呼び出される
	DECLARE_MULTICAST_DELEGATE(FOnRegionHandleChanged);
	FOnRegionHandleChanged OnRegionHandleChanged;

	UAtom3dRegion(const FObjectInitializer& ObjectInitializer);

	virtual void Serialize(FArchive& Ar) override;

	// Begin UObject interface.
	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;
	// End UObject interface.

	UFUNCTION(BlueprintCallable, Category = "Atom3dRegion")
	UAtom3dRegionHandle* GetHandle();

	UFUNCTION(BlueprintCallable, Category = "Atom3dRegion")
	void SetHandle(UAtom3dRegionHandle* InHandle)
	{
		Handle = InHandle;
		OnRegionHandleChanged.Broadcast();
	};


private:
	UPROPERTY(Transient)
	UAtom3dRegionHandle* Handle;


#if WITH_EDITORONLY_DATA
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dRegion")
	FColor Color;
#endif // WITH_EDITORONLY_DATA

#if WITH_EDITOR
public:
	// PIE終了時に呼ばれる
	void EndPIE();
#endif
};
