// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest6.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest6::NativeConstruct()
{
	Super::NativeConstruct();

	Answer2_5->OnClicked.AddDynamic(this, &UQuest6::ButtonClicked);
	Answer2_6->OnClicked.AddDynamic(this, &UQuest6::ButtonClicked2);
}

void UQuest6::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_5"), FString("1.약 10년"));
	(HttpActor->order).Add(TEXT("Answer2_5"));
}

void UQuest6::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHttpActor::StaticClass()));
	(HttpActor->arr).Add(FString("Answer2_6"), FString("2.약 20년"));
	(HttpActor->order).Add(TEXT("Answer2_6"));
}
