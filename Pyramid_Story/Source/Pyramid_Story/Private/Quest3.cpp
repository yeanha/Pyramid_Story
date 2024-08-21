// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest3.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest3::NativeConstruct()
{
	Super::NativeConstruct();

	Answer1_5->OnClicked.AddDynamic(this, &UQuest3::ButtonClicked);
	Answer1_6->OnClicked.AddDynamic(this, &UQuest3::ButtonClicked2);
}

void UQuest3::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_5"), FString("1.로마군에 의해 처형"));
	(HttpActor->order).Add(TEXT("Answer1_5"));
}

void UQuest3::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer1_6"), FString("2.코브라에 물려 자살"));
	(HttpActor->order).Add(TEXT("Answer1_6"));
}
