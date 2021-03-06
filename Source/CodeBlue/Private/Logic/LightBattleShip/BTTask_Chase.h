// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Chase.generated.h"

class AShipPawnBase;
struct FBTChaseMemory
{
	AShipPawnBase *Target;
	AShipPawnBase *SelfShip;
	float WeaponRange;
};
/**
 * 
 */
UCLASS()
class UBTTask_Chase : public UBTTaskNode
{
	GENERATED_UCLASS_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
public:
	/** size of instance memory */
	virtual uint16 GetInstanceMemorySize() const override;
protected:

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	
};
