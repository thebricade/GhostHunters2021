// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Receipt.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class GGJPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

private:
	bool bIsMouseHold;
	class AReceipt* CurrentReceipt;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void OnMouseHoldBegin();

	void OnMouseHold();

	void OnMouseHoldEnd();
};
