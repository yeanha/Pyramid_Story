// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Select1.generated.h"


/**
 * 
 */
UCLASS()
class PYRAMID_STORY_API USelect1 : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* select1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* select2;

	virtual void NativeConstruct();
	

public:
	void ButtonClicked();

	void ButtonClicked2();

};
