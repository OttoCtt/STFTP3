// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "NaveAereaEnemigo2.generated.h"

/**
 * 
 */
UCLASS()
class STFTP3_API ANaveAereaEnemigo2 : public ANaveAerea
{
	GENERATED_BODY()

		ANaveAereaEnemigo2();
public:
	virtual void Tick(float DeltaSeconds) override;
	float randX = 0.f;
	float randY = 0.f;
	float tiempoUltimaAparicion;
	float tiemporetraso = 3.f;
	void timer();
protected:
	virtual void BeginPlay() override;
};
