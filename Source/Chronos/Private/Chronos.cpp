// Copyright Epic Games, Inc. All Rights Reserved.

#include "Chronos.h"
#include "Utility/ChronosLog.h"

#if WITH_EDITOR
#include "MessageLogModule.h"
#endif

#define LOCTEXT_NAMESPACE "FChronosModule"

void FChronosModule::StartupModule()
{
	IModuleInterface::StartupModule();

#if WITH_EDITOR
	auto& MessageLog{FModuleManager::LoadModuleChecked<FMessageLogModule>(FName{TEXTVIEW("MessageLog")})};

	FMessageLogInitializationOptions MessageLogOptions;
	MessageLogOptions.bShowFilters = true;
	MessageLogOptions.bAllowClear = true;
	MessageLogOptions.bDiscardDuplicates = true;

	MessageLog.RegisterLogListing(ChronosLog::MessageLogName, LOCTEXT("MessageLogLabel", "Chronos"), MessageLogOptions);
#endif
}

void FChronosModule::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChronosModule, Chronos)