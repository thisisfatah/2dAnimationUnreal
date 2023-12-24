// Copyright Epic Games, Inc. All Rights Reserved.

#include "PopupBookPrototypeGameMode.h"
#include "PopupBookPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

APopupBookPrototypeGameMode::APopupBookPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
