// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NewBattleRoyaleGameMode.h"
#include "NewBattleRoyaleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANewBattleRoyaleGameMode::ANewBattleRoyaleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
