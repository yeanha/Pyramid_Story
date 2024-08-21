// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest8.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest8::NativeConstruct()
{
	Super::NativeConstruct();

	Answer3_3->OnClicked.AddDynamic( this , &UQuest8::ButtonClicked );
	Answer3_4->OnClicked.AddDynamic( this , &UQuest8::ButtonClicked2 );
}

void UQuest8::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>( UGameplayStatics::GetActorOfClass( GetWorld() , AHttpActor::StaticClass() ) );
	(HttpActor->arr).Add( FString( "Answer3_3" ) , FString( "1.무덤이 소년의 것으로 오인되었기 때문에" ) );
	(HttpActor->order).Add( TEXT( "Answer3_3" ) );
}

void UQuest8::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>( UGameplayStatics::GetActorOfClass( GetWorld() , AHttpActor::StaticClass() ) );
	(HttpActor->arr).Add( FString( "Answer3_4" ) , FString( "2.어린 나이에 왕위에 올랐기 때문에 " ) );
	(HttpActor->order).Add( TEXT( "Answer3_4" ) );
}
