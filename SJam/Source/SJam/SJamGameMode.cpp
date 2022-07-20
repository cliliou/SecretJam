// Copyright Epic Games, Inc. All Rights Reserved.

#include "SJamGameMode.h"
#include "SJamPlayerController.h"
#include "SJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASJamGameMode::ASJamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASJamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}