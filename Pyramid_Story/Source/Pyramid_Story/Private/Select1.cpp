// Fill out your copyright notice in the Description page of Project Settings.


#include "Select1.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void USelect1::NativeConstruct()
{
	Super::NativeConstruct();

	select1->OnClicked.AddDynamic(this, &USelect1::ButtonClicked);
	select2->OnClicked.AddDynamic(this, &USelect1::ButtonClicked2);


}

void USelect1::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	HttpActor->arr.Add("select1", "손전등");
	HttpActor->order.Add(TEXT("select1"));
}

void USelect1::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select2"), FString("횃불"));
	(HttpActor->order).Add(TEXT("select2"));
}

