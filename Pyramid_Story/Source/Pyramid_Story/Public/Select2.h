// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Select2.generated.h"

/**
 * 
 */
UCLASS()
class PYRAMID_STORY_API USelect2 : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* select2_1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* select2_2;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* select2_3;

	virtual void NativeConstruct();


public:
	void ButtonClicked();

	void ButtonClicked2();

	void ButtonClicked3();

};
