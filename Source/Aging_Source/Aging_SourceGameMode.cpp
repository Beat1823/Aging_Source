// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Aging_Source.h"
#include "Aging_SourceGameMode.h"

AAging_SourceGameMode::AAging_SourceGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FObjectFinder<UClass> PlayerPawnBPClass(TEXT("Class'/Game/Blueprints/MyCharacter.MyCharacter_C'"));
	if (PlayerPawnBPClass.Object != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Object;
	}
}
