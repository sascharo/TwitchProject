// Copyright Epic Games, Inc. All Rights Reserved.

#include "TwitchProjectGameMode.h"
#include "TwitchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwitchProjectGameMode::ATwitchProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
