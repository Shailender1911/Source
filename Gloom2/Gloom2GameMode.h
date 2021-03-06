// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "Gloom2GameMode.generated.h"


UCLASS(minimalapi)
class AGloom2GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AGloom2GameMode();

	void PostLogin(APlayerController *NewPlayer) override;

	bool ShouldSpawnAtStartSpot(AController *Player) override { return false; };

	virtual AActor *ChoosePlayerStart(AController* Player);

	virtual bool IsSpawnpointAllowed(APlayerStart* SpawnPoint, AController *Player) const;

	void UpdateTeamCount(AController *Player);

protected:
	UPROPERTY()
		int32 numTeamH = 0;
	UPROPERTY()
		int32 numTeamA = 0;
	UPROPERTY()
		int32 numTeamS = 0;

};



