// Copyright Epic Games, Inc. All Rights Reserved.

#include "IT_TestGameMode.h"
#include "IT_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIT_TestGameMode::AIT_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
