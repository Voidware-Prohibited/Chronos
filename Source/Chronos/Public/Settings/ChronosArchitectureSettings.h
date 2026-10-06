// MIT

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ChronosArchitectureSettings.generated.h"

/**
 * 
 */
UCLASS(config = Chronos, DefaultConfig)
class CHRONOS_API UChronosArchitectureSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UChronosArchitectureSettings();
	
	// True = Integrate with Abraxas, False = Local Mode
	UPROPERTY(Config, EditAnywhere, Category = "Architecture")
	bool bAbraxasIntegration {false};

	UPROPERTY(Config, EditAnywhere, Category = "Architecture")
	FString AbraxasAddress;

	UPROPERTY(Config, EditAnywhere, Category = "Architecture|Abraxas")
	FString AbraxasApiKey;

#if WITH_EDITOR
	virtual FName GetCategoryName() const override { return TEXT("Plugins"); }
	virtual FText GetSectionText() const override { return NSLOCTEXT("Chronos", "ChronosSectionText", "Chronos Settings"); }
	virtual FText GetSectionDescription() const override { return NSLOCTEXT("Chronos", "ChronosSectionDesc", "Configure Chronos Architecture Settings"); }
#endif
};