// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Lame_Ducks.h"
#include "Lame_DucksGameMode.h"
#include "Lame_DucksPlayerController.h"
#include "Lame_DucksCharacter.h"

ALame_DucksGameMode::ALame_DucksGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALame_DucksPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}