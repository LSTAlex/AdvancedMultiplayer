// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvancedMultiplayerGameMode.h"
#include "AdvancedMultiplayerHUD.h"
#include "AdvancedMultiplayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAdvancedMultiplayerGameMode::AAdvancedMultiplayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAdvancedMultiplayerHUD::StaticClass();
}
