// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/SESingleModeSubsystem.h"

USESingleModeSubsystem::USESingleModeSubsystem()
{
	
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
	MaxLevel = LevelDataTableNames.Num();

	if (LevelDataTableNames.Num() >= 1)
	{
		static const FString ContextString(TEXT("USESingleModeSubsystem->InvalidRowName"));
		if (FLevelInfo* SingleLevelInfo = LevelDataTable->FindRow<FLevelInfo>(LevelDataTableNames[0], ContextString))
		{
			CurrentLevelInfo = *SingleLevelInfo;
		}
	}
}

int32 USESingleModeSubsystem::GetCurrentLevel()
{
	return CurrentLevelInfo.Level;
}

FLevelInfo USESingleModeSubsystem::GetCurrentSingleLevelInfo()
{
	return CurrentLevelInfo;
}
