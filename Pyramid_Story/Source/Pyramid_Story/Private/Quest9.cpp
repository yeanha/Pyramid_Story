// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest9.h"
#include "components/Button.h"
#include "HttpActor.h"
#include "Kismet/GameplayStatics.h"

void UQuest9::NativeConstruct()
{
	Super::NativeConstruct();

	Answer3_5->OnClicked.AddDynamic( this , &UQuest9::ButtonClicked );
	Answer3_6->OnClicked.AddDynamic( this , &UQuest9::ButtonClicked2 );
}

void UQuest9::ButtonClicked()
{
	auto* HttpActor = Cast<AHttpActor>( UGameplayStatics::GetActorOfClass( GetWorld() , AHttpActor::StaticClass() ) );
	(HttpActor->arr).Add( FString( "Answer3_5" ), FString( "1.무덤이 도굴되지 않고 거의 완벽하게 보존되었기 때문에" ) );
	(HttpActor->order).Add( TEXT( "Answer3_5" ) );
}

void UQuest9::ButtonClicked2()
{
	auto* HttpActor = Cast<AHttpActor>( UGameplayStatics::GetActorOfClass( GetWorld() , AHttpActor::StaticClass() ) );
	(HttpActor->arr).Add( FString( "Answer3_6" ) , FString( "2.어린 나이에 왕위에 올랐기 때문에" ) );
	(HttpActor->order).Add( TEXT( "Answer3_6" ) );
}
