// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAereaPlayer.h"
#include "Proyectil.h"
#include "Bala.h"
#include "Rayo.h"
#include "Misil.h"
#include "Bomba.h"

#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ANaveAereaPlayer::ANaveAereaPlayer()
{
	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when ship does
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;	// Camera does not rotate relative to arm

	//Movement
	MoveSpeed = 500.0f;
	//Energia
	Energy = 100.0f;
	//Arma
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = false;

	FireForwardValue = 1.0f;
	FireRightValue = 0.0f;

	const FVector MoveDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);

	const FRotator FireRotation = MoveDirection.Rotation();
	// Spawn projectile at an offset from this pawn
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

}

void ANaveAereaPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	//Teclas para el disparo
	InputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ANaveAereaPlayer::Fire);
	InputComponent->BindAction(TEXT("Bala"), IE_Pressed, this, &ANaveAereaPlayer::Fire1);
	InputComponent->BindAction(TEXT("Rayo"), IE_Pressed, this, &ANaveAereaPlayer::Fire2);
	InputComponent->BindAction(TEXT("Misil"), IE_Pressed, this, &ANaveAereaPlayer::Fire3);
	InputComponent->BindAction(TEXT("Bomba"), IE_Pressed, this, &ANaveAereaPlayer::Fire4);
}

void ANaveAereaPlayer::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	if (ForwardValue != 0.0f || RightValue != 0.0f) {

		if (ForwardValue != FireForwardValue) {
			FireForwardValue = ForwardValue;
		}

		if (RightValue != FireRightValue) {
			FireRightValue = RightValue;
		}
	}
	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

}

void ANaveAereaPlayer::Fire()
{
	bCanFire = true;
	// Create fire direction vector
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	//const FVector FireDirection = GetActorLocation();
	// Try and fire a shot
	FireShot(FireDirection);
}

void ANaveAereaPlayer::Fire1()
{
	bCanFire = true;
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	FireShot1(FireDirection);
}

void ANaveAereaPlayer::Fire2()
{
	bCanFire = true;
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	FireShot2(FireDirection);
}

void ANaveAereaPlayer::Fire3()
{
	bCanFire = true;
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	FireShot3(FireDirection);
}

void ANaveAereaPlayer::Fire4()
{
	bCanFire = true;
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	FireShot4(FireDirection);
}

void ANaveAereaPlayer::FireShot(FVector FireDirection)
{
	//Si esta bien para disparar otra vez
	if (bCanFire == true) {
		//Si estamos presionando fuego en una direccion
		const FRotator FireRotation = FireDirection.Rotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
		UWorld* const World = GetWorld();
		if (World != nullptr) {
			//spawn the projectile
			World->SpawnActor<AProyectil>(SpawnLocation, FireRotation);
		}
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaPlayer::ShotTimerExpired, FireRate);
		bCanFire = false;
	}
}

void ANaveAereaPlayer::FireShot1(FVector FireDirection)
{
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//spawn the projectile
		World->SpawnActor<ABala>(SpawnLocation, FireRotation);
	}
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaPlayer::ShotTimerExpired, FireRate);
	bCanFire = false;
}

void ANaveAereaPlayer::FireShot2(FVector FireDirection)
{
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//spawn the projectile
		World->SpawnActor<ARayo>(SpawnLocation, FireRotation);
	}
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaPlayer::ShotTimerExpired, FireRate);
	bCanFire = false;
}

void ANaveAereaPlayer::FireShot3(FVector FireDirection)
{
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//spawn the projectile
		World->SpawnActor<AMisil>(SpawnLocation, FireRotation);
	}
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaPlayer::ShotTimerExpired, FireRate);
	bCanFire = false;
}

void ANaveAereaPlayer::FireShot4(FVector FireDirection)
{
	const FRotator FireRotation = FireDirection.Rotation();
	const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		//spawn the projectile
		World->SpawnActor<ABomba>(SpawnLocation, FireRotation);
	}
	World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaPlayer::ShotTimerExpired, FireRate);
	bCanFire = false;
}

void ANaveAereaPlayer::ShotTimerExpired()
{
	bCanFire = true;
}

