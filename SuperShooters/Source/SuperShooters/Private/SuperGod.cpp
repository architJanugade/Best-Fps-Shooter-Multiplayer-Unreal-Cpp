// Fill out your copyright notice in the Description page of Project Settings.


#include "SuperGod.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ASuperGod::ASuperGod()
{
	bIsCrouched = false;
	isSliding = false;
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	originalPos = FVector(-39.56f, 1.75f, 64.f);
	FirstPersonCameraComponent->SetRelativeLocation(originalPos); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

// Called when the game starts or when spawned
void ASuperGod::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperGod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isSliding)
	{
		SlideTimer += DeltaTime;

		if (SlideTimer >= SlideDuration)
		{
			CancelCrouch();
		}
	}
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, GetVelocity().ToString());

}

void ASuperGod::MoveForward(float Value)
{
	if (Value != 0.0f)
	{		// add movement in that direction
		/*const FRotator Rotation = Controller->GetControlRotation();
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);

		if (isSliding)
		{
			float FrictionMultiplier = FMath::Clamp(1.0f - (SlideTimer / SlideDuration) * SlideFriction, 0.0f, 1.0f);
			AddMovementInput(Direction, Value * SlidingSpeedMultiplier * FrictionMultiplier);
		}
		else
		{*/
		if(!isSliding)
			AddMovementInput(GetActorForwardVector(), Value);
		if(isSliding)
			AddMovementInput(GetVelocity() * SlidingSpeedMultiplier, 1);
		//	AddMovementInput(Direction, Value);
		//}
	}
}

void ASuperGod::MoveRight(float Value)
{
	if (Value != 0.0f && GetCharacterMovement())
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);


		//GetCharacterMovement()->AddForce(GetActorRightVector() * forceValue * GetWorld()->DeltaTimeSeconds);

	}
}
void ASuperGod::Crouch()
{
	if (!bIsCrouched && GetVelocity() == FVector(0.0, 0.0, 0.0))
	{
		bIsCrouched = true;
		FirstPersonCameraComponent->SetRelativeLocation(Crouchposition);
	}
	else if (!bIsCrouched && !isSliding && GetVelocity().Length() >= forwardVelocityTreshhold)
	{
		bIsCrouched = true;
		isSliding = true;
		SlideTimer = 0.0;
		FirstPersonCameraComponent->SetRelativeLocation(Crouchposition);

		
	}
}


void ASuperGod::CancelCrouch()
{
	
		bIsCrouched = false;
		if (isSliding)
		{
			isSliding = false;
		}
		FirstPersonCameraComponent->SetRelativeLocation(originalPos);
	
}


// Called to bind functionality to input
void ASuperGod::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASuperGod::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASuperGod::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);

	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ASuperGod::Crouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ASuperGod::CancelCrouch);


}

