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
	int32 MaxLevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level")
	TObjectPtr<UDataTable> LevelDataTable;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Level")
	FLevelInfo CurrentLevelInfo;
	
	TArray<FName> LevelDataTableNames;

	UFUNCTION(BlueprintCallable, Category = "Level")
	int32 GetCurrentLevel();

	UFUNCTION(BlueprintCallable, Category = "Level")
	FLevelInfo GetCurrentSingleLevelInfo();
};