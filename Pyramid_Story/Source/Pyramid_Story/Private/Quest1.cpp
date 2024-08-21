// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest1.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest1::NativeConstruct()
{
	Super::NativeConstruct();

	Answer1_1->OnClicked.AddDynamic(this, &UQuest1::ButtonClicked);
	Answer1_2->OnClicked.AddDynamic(this, &UQuest1::ButtonClicked2);

}

void UQuest1::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_1"), FString("1.이집트"));
	(HttpActor->order).Add(TEXT("Answer1_1"));
}

void UQuest1::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_2"), FString("2.로마"));
	(HttpActor->order).Add(TEXT("Answer1_2"));
}
