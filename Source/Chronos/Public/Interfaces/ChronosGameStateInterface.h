#pragma once

#include "NativeGameplayTags.h"
#include "Components/ChronosGameStateComponent.h"
#include "ChronosGameStateInterface.generated.h"

UINTERFACE(Blueprintable)
class UChronosGameStateInterface : public UInterface {
	GENERATED_BODY()
};

class CHRONOS_API IChronosGameStateInterface {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Chronos Game State Interface")
	TSoftObjectPtr<UChronosGameStateComponent> GetChronosGameStateComponent();
};