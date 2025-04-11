// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SEMenuGameState.generated.h"

/**
 * 
 */
UCLASS()
class STARFISTEXPRESS_API ASEMenuGameState : public AGameState
{
	GENERATED_BODY()
	
public:
	void GetLifetimeReplicatedProps( TArray< FLifetimeProperty > & OutLifetimeProps ) const;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_GameStateChanged", Category = "CharacterSelect | GameMode")
	int32 StockAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_GameStateChanged", Category = "CharacterSelect | GameMode")
	int32 MinuteTimer;

	UFUNCTION(BlueprintImplementableEvent)
	void OnRep_GameStateChanged();
};
