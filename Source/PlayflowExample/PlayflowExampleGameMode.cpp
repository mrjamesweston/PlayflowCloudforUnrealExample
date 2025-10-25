// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayflowExampleGameMode.h"
#include "PlayflowExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayflowExampleGameMode::APlayflowExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
