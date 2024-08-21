// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest7.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMID_STORY_API UQuest7 : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer3_1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer3_2;

	virtual void NativeConstruct();

public:
	void ButtonClicked();

	void ButtonClicked2();
	
};
