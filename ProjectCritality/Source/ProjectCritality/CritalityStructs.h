// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CritalityStructs.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FPlayerCrumb {
    GENERATED_BODY()
    // Player ID
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString i;
    // Nickname
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString n;
    // Critter ID
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString c;
    // X position
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float x;
    // Y Position
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float y;
    // Rotation
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float r;
};