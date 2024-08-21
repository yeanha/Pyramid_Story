// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest2.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMID_STORY_API UQuest2 : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer1_3;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* Answer1_4;

	virtual void NativeConstruct();

public:
	void ButtonClicked();

	void ButtonClicked2();
	
};
