#pragma once
	
#include "Engine/DataTable.h"
#include "LevelInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLevelInfo : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LevelName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AIName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* AITexture;
};
