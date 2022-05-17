// Fill out your copyright notice in the Description page of Project Settings.


#include "Bala.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABala::ABala()
{

	ProjectileMovement->InitialSpeed = 1450.f;
	ProjectileMovement->MaxSpeed = 1450.f;
	InitialLifeSpan = 1.f;

}
