// Copyright (c) 2018 CRI Middleware Co., Ltd.

#include "Atom3dRegion.h"
#include "CriWareLocalization.h"

#define LOCTEXT_NAMESPACE "Atom3dRegion"

// Custom serialization version for Atom3dRegion asset
struct FAtom3dRegionVersion
{
	enum Type
	{
		// Before any version changes were made in the plugin
		BeforeCustomVersionWasAdded = 0,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1,
	};

	// The GUID for this custom version number
	static const FGuid GUID;
};

const FGuid FAtom3dRegionVersion::GUID(0x90A8E81A, 0x01A14ABC, 0xA5C27C9E, 0x01F6FED1);
// Register the custom version with core
FCustomVersionRegistration GAtom3dRegionVersion(FAtom3dRegionVersion::GUID, FAtom3dRegionVersion::LatestVersion, TEXT("Atom3dRegionVersion"));

UAtom3dRegionHandle::UAtom3dRegionHandle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		return;
	}
}

CriAtomEx3dRegionHn UAtom3dRegionHandle::GetRawHandle()
{
	if (RawHandle != NULL) {
		return RawHandle;
	}
	RawHandle = criAtomEx3dRegion_Create(nullptr, nullptr, 0);
	check(RawHandle);
	return RawHandle;
}

void UAtom3dRegionHandle::PostInitProperties()
{
	Super::PostInitProperties();
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* CDO の場合は何もしない */
		return;
	}
	if (RawHandle != NULL) {
		criAtomEx3dRegion_Destroy(RawHandle);
		RawHandle = NULL;
	}
}


void UAtom3dRegionHandle::BeginDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* CDO の場合は何もしない */
		Super::BeginDestroy();
		return;
	}
	if (RawHandle != nullptr) {
		/* リソースの解放 */
		criAtomEx3dRegion_Destroy(RawHandle);
	}
	Super::BeginDestroy();
}

UAtom3dRegion::UAtom3dRegion(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, Handle(nullptr)
#if WITH_EDITORONLY_DATA
	, Color(FColor(255, 255, 255))
#endif // WITH_EDITORONLY_DATA
{
#if WITH_EDITOR
	// Localization of unreal properties metadata with LOCTEXT markups and reflection
	CRI_LOCCLASS(GetClass());
#endif
}

void UAtom3dRegion::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	/* アセットバージョンの使用を通知 */
	Ar.UsingCustomVersion(FAtom3dRegionVersion::GUID);
}

void UAtom3dRegion::PostInitProperties()
{
	Super::PostInitProperties();
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* CDO の場合は何もしない */
		return;
	}
	// Handle への参照を手放す (解放は GC 任せ)
	Handle = nullptr;
}

void UAtom3dRegion::BeginDestroy()
{
	if (HasAnyFlags(RF_ClassDefaultObject)) {
		/* CDO の場合は何もしない */
		Super::BeginDestroy();
		return;
	}
	OnRegionHandleChanged.Clear();
	Super::BeginDestroy();
}

UAtom3dRegionHandle* UAtom3dRegion::GetHandle()
{
	if (IsValid(Handle)) {
		return Handle;
	}
	/* Handle は動的に生成する。事前に保持する静的データではないので注意 */
	Handle = NewObject<UAtom3dRegionHandle>(
		this,
		MakeUniqueObjectName(this, UAtom3dRegionHandle::StaticClass())
		);
	check(Handle);
	return Handle;
}

#if WITH_EDITOR
void UAtom3dRegion::EndPIE()
{
	// Handle への参照を手放す (解放は GC 任せ)
	Handle = nullptr;
}
#endif // WITH_EDITOR

#undef LOCTEXT_NAMESPACE
