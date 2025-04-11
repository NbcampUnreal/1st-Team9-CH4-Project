// Fill out your copyright notice in the Description page of Project Settings.


#include "SEMenuGameState.h"

#include "Net/UnrealNetwork.h"

void ASEMenuGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASEMenuGameState, StockAmount);
	DOREPLIFETIME(ASEMenuGameState, MinuteTimer);
}
