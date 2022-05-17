// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomba.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABomba::ABomba()
{
	ProjectileMovement->InitialSpeed = 0.f;
	ProjectileMovement->MaxSpeed = 0.f;
	InitialLifeSpan = 8.f;
}
