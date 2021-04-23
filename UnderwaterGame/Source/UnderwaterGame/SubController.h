// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SubController.generated.h"

UCLASS()
class UNDERWATERGAME_API ASubController : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	class USpringArmComponent* BoomArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, meta = (AllowPrivateAccess = "true"))
	float turnRate;

public:
	// Sets default values for this character's properties
	ASubController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	/// <summary>
	/// Movement controller for forward and back movement
	/// </summary>
	/// <param name="value"></param>
	void MoveForwardBack(float value);

	/// <summary>
	/// Movement controller for right and left movement
	/// </summary>
	/// <param name="value"></param>
	void MoveRightLeft(float value);

	/// <summary>
	/// Movement controller for turning the player
	/// </summary>
	/// <param name="rate"></param>
	void TurnAtRate(float rate);

	// Movement controller for ascending and descending
	void MoveUpDown(float value);

	// Variable declarations

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
