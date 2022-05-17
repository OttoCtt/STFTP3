// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAcuatica.h"
#include "NaveAcuaticaEnemigo1.generated.h"

/**
 * 
 */
UCLASS()
class STFTP3_API ANaveAcuaticaEnemigo1 : public ANaveAcuatica
{
	GENERATED_BODY()

		ANaveAcuaticaEnemigo1();

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
