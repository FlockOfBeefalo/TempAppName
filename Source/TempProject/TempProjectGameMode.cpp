// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TempProjectGameMode.h"
#include "TempProjectCharacter.h"

ATempProjectGameMode::ATempProjectGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATempProjectCharacter::StaticClass();	
}
