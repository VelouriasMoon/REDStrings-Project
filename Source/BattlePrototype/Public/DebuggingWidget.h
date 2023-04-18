#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebuggingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDebuggingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebuggingWidget();
};

