#pragma once

#include "CriWareEditorSettings.generated.h"

UCLASS(config = Editor, defaultconfig)
class UCriWareEditorSettings : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Please use options from ACB file importer window."))
	bool EnableEconomicTickWhenImportingCueSheet_DEPRECATED;

	UPROPERTY(meta = (DeprecatedProperty, DeprecationMessage = "Please use options from ACB file importer window."))
	bool EnableCullingWhenImportingCueSheet_DEPRECATED;
};
