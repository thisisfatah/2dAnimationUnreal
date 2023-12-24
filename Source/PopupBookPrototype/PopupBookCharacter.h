// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <PaperZD/Public/PaperZDCharacter.h>
#include "PopupBookCharacter.generated.h"

/**
 * 
 */
UCLASS()
class POPUPBOOKPROTOTYPE_API APopupBookCharacter : public APaperZDCharacter
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;

public:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float DeltaTime);

protected:
	void MoveForward(float Value);

	virtual void Jump();

protected:
	FVector ScaleChara;
};
