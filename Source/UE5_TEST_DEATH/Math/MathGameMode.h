// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MathGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UE5_TEST_DEATH_API AMathGameMode : public AGameMode
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;
	
};
