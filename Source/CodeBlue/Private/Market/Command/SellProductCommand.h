// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "MarketCommand.h"

/**
 * 
 */
class SellProductCommand : public MarketCommand
{
public:
	SellProductCommand(const int32 productid, const float price, const int32 num,
		const int32 userid, const int32 depotid);
	virtual ~SellProductCommand();
	virtual void Execute() override;
private:
	int32 ProductId;
	float Price;
	int32 Num;
	int32 UserId;
	int32 DepotId;
};
