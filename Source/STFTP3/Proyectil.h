// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

class UStaticMeshComponent;
class UProjectileMovementComponent;

UCLASS()
class STFTP3_API AProyectil : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnyWhere, BluePrintreadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* ProjectileMesh;
	
public:	
	// Sets default values for this actor's properties
	AProyectil();

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		class UProjectileMovementComponent* ProjectileMovement;
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	FORCEINLINE UStaticMeshComponent* GetProjectilMesh() const { return ProjectileMesh; }
	//Devuelve ProjectileMovement subobject
	FORCEINLINE UProjectileMovementComponent* GetProjectilMovement() const { return ProjectileMovement; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
