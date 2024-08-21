// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest1.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMID_STORY_API UQuest1 : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer1_1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer1_2;

	virtual void NativeConstruct();

public:
	void ButtonClicked();

	void ButtonClicked2();
	
};
