#include "TwitchProjectGameMode.h"
#include "TwitchProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwitchProjectGameMode::ATwitchProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonMutant"));
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
