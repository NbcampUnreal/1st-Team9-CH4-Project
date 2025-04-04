// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/LevelInfo.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SESingleModeSubsystem.generated.h"

class UDataTable;

/**
 * 
 */
UCLASS(blueprintable)
class STARFISTEXPRESS_API USESingleModeSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	USESingleModeSubsystem();

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
/* Level */
protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Level")
	int32 MaxTableIndex;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level")
	TObjectPtr<UDataTable> LevelDataTable;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Level")
	FLevelInfo CurrentLevelInfo;
	
	int32 CurrentTableIndex;
	TArray<FName> LevelDataTableNames;

	UFUNCTION(BlueprintCallable, Category = "Level")
	void MoveNextLevel();

	UFUNCTION(BlueprintCallable, Category = "Level")
	bool IsMaxLevel();

	UFUNCTION(BlueprintCallable, Category = "Level")
	void InitializeLevelInfo();
	
	UFUNCTION(BlueprintPure, Category = "LevelInfo")
	int32 GetCurrentLevel();

	UFUNCTION(BlueprintPure, Category = "LevelInfo")
	FName GetCurrentLevelName();

	UFUNCTION(BlueprintPure, Category = "LevelInfo")
	int32 GetRewardCoins();
	
	UFUNCTION(BlueprintPure, Category = "LevelInfo")
	FLevelInfo GetCurrentLevelInfo();

private:
	void UpdateCurrentLevelInfo();
	bool CanMoveNextLevel();
};