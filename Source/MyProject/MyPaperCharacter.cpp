// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "MyPaperCharacter.h"
#include "PaperFlipbookComponent.h"


AMyPaperCharacter::AMyPaperCharacter() {

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SetupAttachment(RootComponent);


	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->ProjectionMode = ECameraProjectionMode::Orthographic;
	Camera->OrthoWidth = 2048.0f;
	Camera->SetupAttachment(CameraBoom);


}

void AMyPaperCharacter::BeginPlay() {
	Super::BeginPlay();

	GetSprite()->SetFlipbook(Idle);
}

void AMyPaperCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move", this, &AMyPaperCharacter::Move);

}

void AMyPaperCharacter::Move(float Value) {
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);

}




