// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HttpActor.generated.h"


//USTRUCT()
//struct FResponse
//{
//	UPROPERTY()
//	FString RoomName;
//	UPROPERTY()
//	bool bYes;
//};
//
//TArray<FResponse> Responses;

UCLASS()
class PYRAMID_STORY_API AHttpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHttpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//UFUNCTION()
	//void OnMyClickSendPost();

	//UFUNCTION()
	//void OnMyClickSend();

	UPROPERTY()
	TMap<FString, FString> arr;
	TArray<FString> order;

	//FString ServerURL = "https://192.168.1.18:8080/result";
	//FString Key = "";



};
