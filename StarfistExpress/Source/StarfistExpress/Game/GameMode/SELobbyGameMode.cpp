// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/GameMode/SELobbyGameMode.h"

ASELobbyGameMode::ASELobbyGameMode()
{
	MaxPlayerCount = 4;

	PlayerNoPool = TArray<int32>({0,1,2,3});
}

void ASELobbyGameMode::BeginPlay()
{
	Super::BeginPlay();
}

bool ASELobbyGameMode::GetPlayerNo(int32& OutPlayerNo)
{
	if (PlayerNoPool.Num() < 1)
		return false;
	
	OutPlayerNo = PlayerNoPool.HeapTop();
	PlayerNoPool.HeapPop(OutPlayerNo);
	return true;
}

void ASELobbyGameMode::ReturnPlayerNo(int32 PlayerNo)
{
	if (PlayerNoPool.Num() > MaxPlayerCount)
		return;
	
	PlayerNoPool.HeapPush(PlayerNo);
}
