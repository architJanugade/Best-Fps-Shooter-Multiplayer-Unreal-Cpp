// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SuperGod.generated.h"


UENUM()
enum MovementState
{
	Crouching UMETA(DisplayName = "Crouching"),
	Walking UMETA(DisplayName = "Walking"),
	Sprinting UMETA(DisplayName = "Sprinting"),
	Sliding UMETA(DisplayName = "Sliding")
};

class UCameraComponent;

UCLASS()
class SUPERSHOOTERS_API ASuperGod : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		UCameraComponent* FirstPersonCameraComponent;
	
	UPROPERTY(VisibleAnywhere)
		bool isCrouching;

	UPROPERTY(EditAnywhere)
		FVector Crouchposition;

	UPROPERTY(EditAnywhere)
		float forwardVelocityTreshhold;

	UPROPERTY(VisibleAnywhere)
		bool isSliding;

	UPROPERTY(EditAnywhere)
		float slideDistance;

	FVector originalPos;

	float SlideDuration = 2.0f; // The duration in seconds for which the slide will occur.
	float SlideTimer = 0.0f; // A timer to keep track of how long we've been sliding.
	float SlideFriction = 0.5f; // A value between 0 and 1 that will reduce the sliding speed. Lower values will make the slide stop more quickly.

	UPROPERTY(EditAnywhere)
		float SlidingSpeedMultiplier;

	UPROPERTY(EditAnywhere)
		TEnumAsByte<MovementState> currentMovementState;


public:
	// Sets default values for this character's properties
	ASuperGod();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	void Crouch();

	void CancelCrouch();

	void ChangeMovemenmtState(MovementState _state);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
