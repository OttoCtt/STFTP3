// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "NaveAereaEnemigo1.generated.h"

/**
 * 
 */
UCLASS()
class STFTP3_API ANaveAereaEnemigo1 : public ANaveAerea
{
	GENERATED_BODY()
		
public:
	ANaveAereaEnemigo1();

	virtual void Tick(float DeltaSeconds) override;
	float randX = 0.f;
	float randY = 0.f;
	float tiempoUltimaAparicion;
	float tiemporetraso = 3.f;
	void timer();

	FVector GunOffset;
	float FireRate;

	void FireShot(FVector FireDirection);
	void ShotTimerExpired();
	void Fire();
protected:
	virtual void BeginPlay() override;
private:
	float FireForwardValue;
	float FireRightValue;

	//Controla cuando se puede disparar
	uint32 bCanFire : 1;
	//Maneja el tiempo en el que la bala desaparece
	FTimerHandle TimerHandle_ShotTimerExpired;
};
