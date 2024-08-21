// Fill out your copyright notice in the Description page of Project Settings.


#include "Select3.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void USelect3::NativeConstruct()
{
	Super::NativeConstruct();

	select3_1->OnClicked.AddDynamic(this, &USelect3::ButtonClicked);
	select3_2->OnClicked.AddDynamic(this, &USelect3::ButtonClicked2);



}

void USelect3::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select3_1"), FString("관을 열까?"));
	(HttpActor->order).Add(TEXT("select3_1"));




	//for (int i = 0; i < HttpActor->order.Num(); i++)
	//{
	//	FString select = HttpActor->arr.Find( HttpActor->order[i]);
	//}
}

void USelect3::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select3_2"), FString("그냥 갈까?"));
	(HttpActor->order).Add(TEXT("select3_2"));
}
