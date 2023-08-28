// Copyright Epic Games, Inc. All Rights Reserved.

#include "SuperShootersGameMode.h"
#include "SuperShootersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASuperShootersGameMode::ASuperShootersGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Characters/BP_SuperGod"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
