// Fill out your copyright notice in the Description page of Project Settings.


#include "Rayo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ARayo::ARayo()
{
	ProjectileMovement->InitialSpeed = 4000.f;
	ProjectileMovement->MaxSpeed = 4000.f;
	InitialLifeSpan = 0.5f;

}
