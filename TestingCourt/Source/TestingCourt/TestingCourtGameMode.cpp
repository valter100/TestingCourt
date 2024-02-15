// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestingCourtGameMode.h"
#include "TestingCourtCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestingCourtGameMode::ATestingCourtGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
