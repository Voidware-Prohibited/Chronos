#pragma once

#include "ChronosTypes.generated.h"

USTRUCT(BlueprintType)
struct CHRONOS_API FChronosWeekDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	int Days;

	bool operator==(const FChronosWeekDefinition& other) const
	{
		return (other.Days == Days);
	}
};

USTRUCT(BlueprintType)
struct CHRONOS_API FChronosMonthDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	FChronosWeekDefinition Weeks;

	bool operator==(const FChronosMonthDefinition& other) const
	{
		return (other.Weeks == Weeks);
	}
};

USTRUCT(BlueprintType)
struct CHRONOS_API FChronosYearDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (AllowPrivateAccess))
	TArray<FChronosMonthDefinition> Months;


	bool operator==(const FChronosYearDefinition& other) const
	{
		return (other.Months == Months);
	}
};

UCLASS(Blueprintable, BlueprintType)
class CHRONOS_API UChronosYearDefinitionDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Features")
	FChronosYearDefinition Years;
};