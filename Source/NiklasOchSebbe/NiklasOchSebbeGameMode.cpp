// Copyright Epic Games, Inc. All Rights Reserved.

#include "NiklasOchSebbeGameMode.h"
#include "NiklasOchSebbeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANiklasOchSebbeGameMode::ANiklasOchSebbeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
