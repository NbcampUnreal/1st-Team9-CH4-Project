#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SETempCharacter.generated.h"

UCLASS()
class STARFISTEXPRESS_API ASETempCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASETempCharacter();

protected:
	UPROPERTY()
	AActor* SpawnActor;

	FTransform SpawnActorTransform;
	
	UFUNCTION(BlueprintCallable)
	AActor* SpawnActorDeferred(UClass* ActorClass, const FTransform& SpawnTransform, AActor* ActorOwner, APawn* InstigatorPawn);

	UFUNCTION(BlueprintCallable)
	void FinishSpawnActor();
};
