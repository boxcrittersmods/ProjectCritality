// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

#include "CritalityStructs.h"

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CritalityInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTCRITALITY_API UCritalityInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName startingLevel;

	//Components
	/*UPROPERTY(BlueprintReadWrite)
	USocketIOClientComponent* socket;*/

	//Widgets
	UPROPERTY(BlueprintReadWrite)
	UUserWidget* mainMenuWB;
	UPROPERTY(BlueprintReadWrite)
	UUserWidget* loadingScren_WB;

	//BoxCritters
	FString serverURL;
	FString ID;
	FString username;
	FLoginCrumb loginCrumb;

	UCritalityInstance();

	virtual void Init();
	virtual void Shutdown();

	/*UFUNCTION(BlueprintCallable)
	void ShowMainMenu();
	UFUNCTION(BlueprintCallable)
	void ShowMainMenuVR();
	UFUNCTION(BlueprintCallable)
	void ShowLoadingScreen();

	UFUNCTION(BlueprintCallable)
	void ConnectToServer(FString serverURL, FString username, FString ticket);
	void SIOConnected(FString sessionId, bool isReconnection);
	void SIOFail();

	//Socket Emiting
	UFUNCTION(BlueprintCallable)
	void Login();
	UFUNCTION(BlueprintCallable)
	void MoveTo(FVector worldPos);
	UFUNCTION(BlueprintCallable)
	void Message(FString message);
	UFUNCTION(BlueprintCallable)
	void Emote(FString message);*/

};
