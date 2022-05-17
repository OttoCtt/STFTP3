// Fill out your copyright notice in the Description page of Project Settings.


#include "Misil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AMisil::AMisil()
{
	ProjectileMovement->InitialSpeed = 750.f;
	ProjectileMovement->MaxSpeed = 750.f;
	InitialLifeSpan = 5.f;
}
