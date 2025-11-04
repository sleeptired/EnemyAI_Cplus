// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemyAI_CplusGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AEnemyAI_CplusGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AEnemyAI_CplusGameMode();
};



