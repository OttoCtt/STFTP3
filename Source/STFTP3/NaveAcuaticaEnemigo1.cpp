// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveAcuaticaEnemigo1.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

ANaveAcuaticaEnemigo1::ANaveAcuaticaEnemigo1()
{
	MoveSpeed = 210.f;
	Energy = 100.0f;
}

void ANaveAcuaticaEnemigo1::Tick(float DeltaSeconds)
{
	// Find movement direction
	const int ForwardValue = randX;
	const int RightValue = randY;

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
	if (fmod(round(GetWorld()->GetTimeSeconds()), 3) == 0) {
		timer();
	}
}

void ANaveAcuaticaEnemigo1::timer()
{
	randX = FMath::RandRange(-1, 1);
	randY = FMath::RandRange(-1, 1);
	tiempoUltimaAparicion = GetWorld()->GetTimeSeconds();
}

void ANaveAcuaticaEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	timer();
}
