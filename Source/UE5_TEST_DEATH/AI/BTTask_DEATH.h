// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BTTask_AIBase.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_DEATH.generated.h"

/**
 * 
 */
UCLASS()
class UE5_TEST_DEATH_API UBTTask_DEATH : public UBTTask_AIBase
{
	GENERATED_BODY()

protected:

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DelataSeconds);
};
