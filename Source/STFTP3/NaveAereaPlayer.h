// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveAerea.h"
#include "NaveAereaPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
/**
 * 
 */
UCLASS()
class STFTP3_API ANaveAereaPlayer : public ANaveAerea
{
	GENERATED_BODY()
	
	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* CameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USpringArmComponent* CameraBoom;
public:
	ANaveAereaPlayer();

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	//Prijectile Function
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;
	UPROPERTY(Category = Camera, EditAnywhere, BlueprintReadWrite)
		float FireRate;
	//Fire a shot in the specified direction
	void FireShot(FVector FireDirection);
	void FireShot1(FVector FireDirection);
	void FireShot2(FVector FireDirection);
	void FireShot3(FVector FireDirection);
	void FireShot4(FVector FireDirection);

	//Tiempo en el que expira la bala
	void ShotTimerExpired();

	void Fire();
	void Fire1();
	void Fire2();
	void Fire3();
	void Fire4();

private:

	float FireForwardValue;
	float FireRightValue;

	//Controla cuando se puede disparar
	uint32 bCanFire : 1;
	//Maneja el tiempo en el que la bala desaparece
	FTimerHandle TimerHandle_ShotTimerExpired;
};
