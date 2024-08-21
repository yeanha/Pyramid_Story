// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest7.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest7::NativeConstruct()
{
	Super::NativeConstruct();

	Answer3_1->OnClicked.AddDynamic(this, &UQuest7::ButtonClicked);
	Answer3_2->OnClicked.AddDynamic(this, &UQuest7::ButtonClicked2);
}

void UQuest7::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer3_1"), FString("1.하워드 카터"));
	(HttpActor->order).Add(TEXT("Answer3_1"));
}

void UQuest7::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer3_2"), FString("2.존 윌킨스"));
	(HttpActor->order).Add(TEXT("Answer3_2"));
}
