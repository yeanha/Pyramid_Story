// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest4.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest4::NativeConstruct()
{
	Super::NativeConstruct();

	Answer2_1->OnClicked.AddDynamic(this, &UQuest4::ButtonClicked);
	Answer2_2->OnClicked.AddDynamic(this, &UQuest4::ButtonClicked2);

}

void UQuest4::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_1"), FString("1.로마군 정복"));
	(HttpActor->order).Add(TEXT("Answer2_1"));
}

void UQuest4::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_2"), FString("2.기자 피라미드 건설"));
	(HttpActor->order).Add(TEXT("Answer2_2"));
}
