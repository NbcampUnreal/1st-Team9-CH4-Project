// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/SETempCharacter.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ASETempCharacter::ASETempCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

AActor* ASETempCharacter::SpawnActorDeferred(UClass* ActorClass, const FTransform& SpawnTransform, AActor* ActorOwner, APawn* InstigatorPawn)
{
	if (GetWorld() == nullptr)
		return nullptr;

	SpawnActorTransform = SpawnTransform;
	SpawnActor = GetWorld()->SpawnActorDeferred<AActor>(ActorClass, SpawnTransform, ActorOwner, InstigatorPawn);

	return SpawnActor;
}

void ASETempCharacter::FinishSpawnActor()
{
	UGameplayStatics::FinishSpawningActor(SpawnActor, SpawnActorTransform);
}
