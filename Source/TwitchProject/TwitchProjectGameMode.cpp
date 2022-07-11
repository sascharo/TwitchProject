#include "TwitchProjectGameMode.h"
#include "TwitchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwitchProjectGameMode::ATwitchProjectGameMode()
{
	// set default pawn class to our Blueprinted Mutant character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonMutant"));
	
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
