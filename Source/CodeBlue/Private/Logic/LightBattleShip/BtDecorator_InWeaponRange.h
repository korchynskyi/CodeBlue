// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BtDecorator_InWeaponRange.generated.h"

/**
 * 
 */
UCLASS()
class UBtDecorator_InWeaponRange : public UBTDecorator
{
	GENERATED_BODY()
	
public:

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
	
};
