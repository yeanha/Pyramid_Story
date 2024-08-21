// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest5.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest5::NativeConstruct()
{
	Super::NativeConstruct();

	Answer2_3->OnClicked.AddDynamic(this, &UQuest5::ButtonClicked);
	Answer2_4->OnClicked.AddDynamic(this, &UQuest5::ButtonClicked2);
}

void UQuest5::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_3"), FString("1.고대 세계 7대 불가사의 중 하나"));
	(HttpActor->order).Add(TEXT("Answer2_3"));
}

void UQuest5::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_4"), FString("2.가장 오래된 신전"));
	(HttpActor->order).Add(TEXT("Answer2_4"));
}
