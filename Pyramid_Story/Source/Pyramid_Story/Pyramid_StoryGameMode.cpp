// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pyramid_StoryGameMode.h"
#include "Pyramid_StoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

APyramid_StoryGameMode::APyramid_StoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
