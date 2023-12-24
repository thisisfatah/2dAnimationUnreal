// Fill out your copyright notice in the Description page of Project Settings.


#include "PopupBookCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"

void APopupBookCharacter::BeginPlay()
{
	Super::BeginPlay();
	ScaleChara = GetSprite()->GetRelativeScale3D();
}

void APopupBookCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &APopupBookCharacter::MoveForward);
	PlayerInputComponent->BindAction("Jump", IE_Pressed,this, &APopupBookCharacter::Jump);
}

void APopupBookCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APopupBookCharacter::MoveForward(float Value)
{
	if (GetCharacterMovement()->IsFalling())
	{
		return;
	}

	AddMovementInput(GetActorForwardVector(), Value);

	if (Value == -1)
	{
		GetSprite()->SetRelativeScale3D(FVector(-ScaleChara.X, ScaleChara.Y, ScaleChara.Z));
	}
	else if (Value == 1)
	{
		GetSprite()->SetRelativeScale3D(FVector(ScaleChara.X, ScaleChara.Y, ScaleChara.Z));
	}
}

void APopupBookCharacter::Jump()
{
	Super::Jump();
}
