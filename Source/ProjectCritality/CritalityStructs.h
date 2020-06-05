// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CritalityStructs.generated.h"

USTRUCT(BlueprintType)
struct FLoginCrumb {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString playerId;
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString critterId;
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString nickname;
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> inventory;
};

USTRUCT(BlueprintType)
struct FMessageCrumb {
    GENERATED_BODY()

    // Player ID
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString i;
    // Message
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m;
};

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


USTRUCT(BlueprintType)
struct FMoveCrumb {
    GENERATED_BODY()
    // Player ID
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString i;
    // X position
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        float x;
    // Y Position
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        float y;
};

USTRUCT(BlueprintType)
struct FRoomCrumb {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RoomId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TArray<FPlayerCrumb> PlayerCrumbs;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
};