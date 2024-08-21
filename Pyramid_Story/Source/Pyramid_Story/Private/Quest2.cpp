// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest2.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest2::NativeConstruct()
{
	Super::NativeConstruct();

	Answer1_3->OnClicked.AddDynamic(this, &UQuest2::ButtonClicked);
	Answer1_4->OnClicked.AddDynamic(this, &UQuest2::ButtonClicked2);
}

void UQuest2::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_3"), FString("1.이집트의 독립을 지키기 위해"));
	(HttpActor->order).Add(TEXT("Answer1_3"));
}

void UQuest2::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_4"), FString("2.로마의 영토를 확장하기 위해"));
	(HttpActor->order).Add(TEXT("Answer1_4"));
}
