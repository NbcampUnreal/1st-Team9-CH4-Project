// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SELobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class STARFISTEXPRESS_API ASELobbyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ASELobbyGameMode();

	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="PlayerNo", meta=(AllowPrivateAccess=true))
	TArray<int32> PlayerNoPool;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	int MaxPlayerCount;
	
	UFUNCTION(BlueprintCallable, Category="PlayerNo")
	bool GetPlayerNo(int32& OutPlayerNo);

	UFUNCTION(BlueprintCallable, Category="PlayerNo")
	void ReturnPlayerNo(int32 PlayerNo);
};
