// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpActor.h"

// Sets default values
AHttpActor::AHttpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHttpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}


//void AHttpActor::OnMyClickSend()
//{
//	// HttpActor에게 보내기
//	FString fullURL = FString::Printf(TEXT("%s?serviceKey=%s&pageNo=%s&numOfRows=%s"), *URL, *Key, *EditPageNo->GetText().ToString(), *EditNumOfRows->GetText().ToString());
//
//	UE_LOG(LogTemp, Warning, TEXT("%s"), *fullURL);
//
//	HttpActor->ReqNewBookInfo(fullURL);
//}

//void AHttpActor::OnMyClickSendPost()
//{
//	TMap<FString, FString> selectData;
//
//
//	FString json = UJsonParseLib::MakeJson(selectData);
//
//	
//}




