// Copyright Epic Games, Inc. All Rights Reserved.

#include "TPPSuperGameGameMode.h"
#include "TPPSuperGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATPPSuperGameGameMode::ATPPSuperGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
