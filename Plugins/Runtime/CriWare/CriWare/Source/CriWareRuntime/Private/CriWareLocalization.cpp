/****************************************************************************
*
* CRI Middleware SDK
*
* Copyright (c) 2013-2018 CRI Middleware Co., Ltd.
*
* Library  : CRIWARE plugin for Unreal Engine 4
* Module   : CriWareLocalization for Atom
* File     : CriWareLocalization.cpp
*
****************************************************************************/

#include "CriWareLocalization.h" 

#include "CriWareRuntimePrivatePCH.h"
#include "CriWareUEBackwardCompatibility.h"

#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "Internationalization/Internationalization.h"
#include "Internationalization/Culture.h"
#include "../Launch/Resources/Version.h"
#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION < 11
#include "JsonInternationalizationArchiveSerializer.h"
#include "JsonInternationalizationManifestSerializer.h"
#endif

#if CRIWARE_ENABLE_LOCALIZATION
FCriWareLocalization::FCriWareLocalization()
{
	/* Load localized resources binary */
	FInternationalization& I18N = FInternationalization::Get();
	const FString CultureToLoad = I18N.GetCurrentCulture()->GetName();

	FString LocPath = TEXT("Plugins/Runtime/CriWare/CriWare/Content/Localization");
	FString SourcePath = FPaths::Combine(*(FPaths::ProjectDir()), LocPath);
	if (!FPaths::DirectoryExists(SourcePath)) {
		SourcePath = FPaths::Combine(*(FPaths::EngineDir()), LocPath);
	}
	FString ResourcePath = SourcePath / *(CultureToLoad) / TEXT("CriWare.locres");

	if (IFileManager::Get().FileExists(*ResourcePath)) {
		FTextLocalizationManager::Get().UpdateFromLocalizationResource(ResourcePath);
	}
	else {
		const FString NativeCultureToLoad = I18N.GetCurrentCulture()->GetTwoLetterISOLanguageName();
		ResourcePath = SourcePath / *(NativeCultureToLoad) / TEXT("CriWare.locres");
		if (IFileManager::Get().FileExists(*ResourcePath)) {
			FTextLocalizationManager::Get().UpdateFromLocalizationResource(ResourcePath);
		}
		else if (NativeCultureToLoad.Equals("en") == false) { // try english
			ResourcePath = SourcePath / TEXT("en/CriWare.locres");
			if (IFileManager::Get().FileExists(*ResourcePath)) {
				FTextLocalizationManager::Get().UpdateFromLocalizationResource(ResourcePath);
			}
		}
	}

	bResourcesLoaded = true;
}

FCriWareLocalization& FCriWareLocalization::GetLocalizationResources()
{
	static FCriWareLocalization* LazySingleton = new FCriWareLocalization();
	return *LazySingleton;
}

#if WITH_EDITOR
void FCriWareLocalization::LocalizeClassFromUStructDeclaration(UStruct* InStruct, const TCHAR* InNamespace, bool bUseStructPrefixInKey /* = false*/)
{
	if (!bResourcesLoaded) {
		return; 
	}

	FString Prefix;
	if (bUseStructPrefixInKey) {
		Prefix = InStruct->GetName().AppendChar('.');
	}

	// UClass
	{
		// DisplayName
		FText DisplayName = CRI_NSLOCTEXT(InNamespace, *InStruct->GetName(), *InStruct->GetDisplayNameText().ToString());
		InStruct->SetMetaData(TEXT("DisplayName"), *DisplayName.ToString());

		// ToolTip
		FText ToolTip = CRI_NSLOCTEXT(InNamespace, *InStruct->GetName().Append(TEXT("Tooltip")), *InStruct->GetToolTipText().ToString());
		InStruct->SetMetaData(TEXT("ToolTip"), *ToolTip.ToString());
	}
	// UProperties
	for (TFieldIterator<CriUEProperty::FProperty> PropIt(InStruct); PropIt; ++PropIt) {
		CriUEProperty::FProperty* Property = *PropIt;

		FString Key = Property->GetNameCPP();
		if (bUseStructPrefixInKey) {
			Key = Prefix.Append(Key);
		}

		// DisplayName
		FText DisplayName = CRI_NSLOCTEXT(InNamespace, *Key, *Property->GetDisplayNameText().ToString());
		Property->SetMetaData(TEXT("DisplayName"), *DisplayName.ToString());

		// ToolTip
		FText ToolTip = CRI_NSLOCTEXT(InNamespace, *Key.Append(TEXT("Tooltip")), *Property->GetToolTipText().ToString());
		Property->SetMetaData(TEXT("ToolTip"), *ToolTip.ToString());
	}
	// UFunctions
	for (TFieldIterator<UFunction> FuncIt(InStruct); FuncIt; ++FuncIt) {
		UFunction* Function = *FuncIt;

		FString Key = Function->GetName();
		if (bUseStructPrefixInKey) {
			Key = Prefix.Append(Key);
		}

		// DisplayName - disabled - No need to rename a function between C++ API and Blueprint actually.
		//FText DisplayName = CRI_NSLOCTEXT(InNamespace, *Key, *Function->GetDisplayNameText().ToString());
		//Function->SetMetaData(TEXT("DisplayName"), *DisplayName.ToString());

		// ToolTip
		FText ToolTip = CRI_NSLOCTEXT(InNamespace, *Key.Append(TEXT("()")), *Function->GetToolTipText().ToString());
		Function->SetMetaData(TEXT("ToolTip"), *ToolTip.ToString());
	}
}
#endif

#endif // CRIWARE_ENABLE_LOCALIZATION
