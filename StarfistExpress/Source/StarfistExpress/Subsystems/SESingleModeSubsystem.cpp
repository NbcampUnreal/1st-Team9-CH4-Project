// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/SESingleModeSubsystem.h"

USESingleModeSubsystem::USESingleModeSubsystem()
{
	CurrentTableIndex = 0;
}

bool USESingleModeSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	TArray<UClass*> ChildClasses;
	GetDerivedClasses(GetClass(), ChildClasses, false);
	return (ChildClasses.Num() == 0); // 자식 클래스가 없는 경우 생성 (= 블루프린트 클래스만 생성)
}

void USESingleModeSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	checkf(LevelDataTable, TEXT("Check LevelDataTable is valid in SingleModeSubsystem."));
	
	LevelDataTableNames = LevelDataTable->GetRowNames();
	MaxTableIndex = LevelDataTableNames.Num() - 1;
	UpdateCurrentLevelInfo();
}

void USESingleModeSubsystem::UpdateCurrentLevelInfo()
{
	if (LevelDataTableNames.Num() >= 1)
	{
		static const FString ContextString(TEXT("USESingleModeSubsystem->InvalidRowName"));
		if (FLevelInfo* SingleLevelInfo = LevelDataTable->FindRow<FLevelInfo>(LevelDataTableNames[CurrentTableIndex], ContextString))
		{
			CurrentLevelInfo = *SingleLevelInfo;
		}	
	}
}

void USESingleModeSubsystem::MoveNextLevel()
{
	if (CanMoveNextLevel() == false)
		return;

	++CurrentTableIndex;
	UpdateCurrentLevelInfo();
}

bool USESingleModeSubsystem::CanMoveNextLevel()
{
	if (LevelDataTable == nullptr)
		return false;

	if (IsMaxLevel() == true)
		return false;

	return true;
}

bool USESingleModeSubsystem::IsMaxLevel()
{
	return CurrentTableIndex >= MaxTableIndex; 
}

void USESingleModeSubsystem::InitializeLevelInfo()
{
	CurrentTableIndex = 0;
	UpdateCurrentLevelInfo();
}

int32 USESingleModeSubsystem::GetCurrentLevel()
{
	return CurrentLevelInfo.Level;
}

FName USESingleModeSubsystem::GetCurrentLevelName()
{
	return CurrentLevelInfo.LevelName;
}

int32 USESingleModeSubsystem::GetRewardCoins()
{
	return CurrentLevelInfo.RewardCoins;
}

FLevelInfo USESingleModeSubsystem::GetCurrentLevelInfo()
{
	return CurrentLevelInfo;
}

