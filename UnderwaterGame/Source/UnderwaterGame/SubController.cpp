// Fill out your copyright notice in the Description page of Project Settings.


#include "SubController.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ASubController::ASubController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoomArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera boom"));
	BoomArm->SetupAttachment(RootComponent);
	BoomArm->TargetArmLength = 300.0f;
	BoomArm->bUsePawnControlRotation = true;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(BoomArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0, 540, 0);

	// Setting default values for public variables
	turnRate = 50.0f;

}

// Called when the game starts or when spawned
void ASubController::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASubController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForwardBack", this, &ASubController::MoveForwardBack);
	PlayerInputComponent->BindAxis("MoveRightLeft", this, &ASubController::MoveRightLeft);
	PlayerInputComponent->BindAxis("AscendDescend", this, &ASubController::MoveUpDown);
	PlayerInputComponent->BindAxis("Turn", this, &ASubController::TurnAtRate);
}

void ASubController::MoveForwardBack(float value)
{

}

void ASubController::MoveRightLeft(float value)
{

}

void ASubController::TurnAtRate(float rate)
{
	AddControllerYawInput(rate * GetWorld()->GetDeltaSeconds() * turnRate)
}

void ASubController::MoveUpDown(float value)
{

}

// Called every frame
void ASubController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASubController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

