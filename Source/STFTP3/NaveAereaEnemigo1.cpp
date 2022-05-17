// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAereaEnemigo1.h"
#include "Proyectil.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ANaveAereaEnemigo1::ANaveAereaEnemigo1()
{
	MoveSpeed = 210.f;
	Energy = 100.0f;
	
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

void ANaveAereaEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	timer();
}

void ANaveAereaEnemigo1::Tick(float DeltaSeconds)
{
	// Find movement direction
	const int ForwardValue = randX;
	const int RightValue = randY;


	if (ForwardValue != 0.0f || RightValue != 0.0f) {

		if (ForwardValue != FireForwardValue) {
			FireForwardValue = ForwardValue;
		}

		if (RightValue != FireRightValue) {
			FireRightValue = RightValue;
		}
	}

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
	if (fmod(round(GetWorld()->GetTimeSeconds()),3)==0) {
		UE_LOG(LogTemp, Warning, TEXT("TiempoW: %f"),tiempoUltimaAparicion );
		timer();
		Fire();
	}
}

void ANaveAereaEnemigo1::timer()
{
	randX = FMath::RandRange(-1, 1);
	randY = FMath::RandRange(-1, 1);
	tiempoUltimaAparicion = GetWorld()->GetTimeSeconds();
}

void ANaveAereaEnemigo1::FireShot(FVector FireDirection)
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
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANaveAereaEnemigo1::ShotTimerExpired, FireRate);
		bCanFire = false;
	}
}

void ANaveAereaEnemigo1::Fire()
{
	bCanFire = true;
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f).GetClampedToMaxSize(1.0f);
	FireShot(FireDirection);
}

void ANaveAereaEnemigo1::ShotTimerExpired()
{
	bCanFire = true;
}


