// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnderwaterGameGameMode.h"
#include "UnderwaterGameHUD.h"
#include "UnderwaterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnderwaterGameGameMode::AUnderwaterGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnderwaterGameHUD::StaticClass();
}
