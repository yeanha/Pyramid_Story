// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HttpActor.generated.h"


USTRUCT()
struct FResponse
{
	UPROPERTY()
	FString RoomName;
	UPROPERTY()
	bool bYes;
};

TArray<FResponse> Responses;

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

	// 인터페이스를 위한 UI
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UUserWidget> SelectUIFactory1;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UUserWidget> SelectUIFactory2;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UUserWidget> SelectUIFactory3;

	UPROPERTY()
	class UHttpWidget* HttpUI;


	// 선택지3를 눌렀을때 서버로 정보 보내기
	void RequestSelect3(FString url);

	// 웹이미지를 백엔드 서버에서 수신
	void OnResGetWebImageFromServer(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);


};
