// Fill out your copyright notice in the Description page of Project Settings.


#include "Select2.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"


void USelect2::NativeConstruct()
{
	Super::NativeConstruct();

	select2_1->OnClicked.AddDynamic(this, &USelect2::ButtonClicked);
	select2_2->OnClicked.AddDynamic(this, &USelect2::ButtonClicked2);
	select2_3->OnClicked.AddDynamic(this, &USelect2::ButtonClicked2);
}

void USelect2::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select2_1"), FString("투탕카멘의 가면"));
	(HttpActor->order).Add(TEXT("select2_1"));
}

void USelect2::ButtonClicked2()
{	
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select2_2"), FString("클레오파트라의 동전"));
	(HttpActor->order).Add(TEXT("select2_2"));
}

void USelect2::ButtonClicked3()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("select2_3"), FString("쿠푸의 태양선 조각상"));
	(HttpActor->order).Add(TEXT("select2_3"));
}
