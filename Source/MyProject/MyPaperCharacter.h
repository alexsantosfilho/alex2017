// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PaperCharacter.h"
#include "MyPaperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMyPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:

	AMyPaperCharacter();

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInpuntComponent) override;

private:

	UPROPERTY(EditAnywhere)
		USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere)
		UCameraComponent* Camera;


	UPROPERTY(EditAnywhere)
		class UPaperFlipbook* Idle;

	UPROPERTY(EditAnywhere)
		class UPaperFlipbook* Walking;


	void Move(float Value);


	
	
	
	
};
