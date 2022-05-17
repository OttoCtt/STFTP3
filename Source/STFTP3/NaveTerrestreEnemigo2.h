// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveTerrestre.h"
#include "NaveTerrestreEnemigo2.generated.h"

/**
 * 
 */
UCLASS()
class STFTP3_API ANaveTerrestreEnemigo2 : public ANaveTerrestre
{
	GENERATED_BODY()

		ANaveTerrestreEnemigo2();

public:
	virtual void Tick(float DeltaSeconds) override;
	float randX = 0.f;
	float randY = 0.f;
	float tiempoUltimaAparicion;
	float tiemporetraso = 3.f;
	void timer();
private:
	virtual void BeginPlay() override;
};
