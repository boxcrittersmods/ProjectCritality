// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PosCoversion.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTCRITALITY_API UPosCoversion : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
private:
	static constexpr float POS_RATIO = -90.f / 312.5f;
public:
	UFUNCTION(BlueprintCallable)
	static FVector BoxCrittersToUnreal(FVector2D bcPos) {
		
		FVector2D pos = bcPos / POS_RATIO;
		GEngine->AddOnScreenDebugMessage(-1, 99.f, FColor::Orange, bcPos.ToString() +TEXT(" BC=>UE ")+pos.ToString());
		return FVector(pos.X, pos.Y, 0.f);
	}

	UFUNCTION(BlueprintCallable)
	static FVector2D UnrealToBoxCritters(FVector pos) {
		FVector bcPos = pos * POS_RATIO;
		GEngine->AddOnScreenDebugMessage(-1, 99.f, FColor::Orange, pos.ToString() + TEXT(" UE=>BC ") + bcPos.ToString());
		return FVector2D(bcPos.X, bcPos.Y);
	}
};
