// Fill out your copyright notice in the Description page of Project Settings.


#include "God.h"

// Sets default values
AGod::AGod()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGod::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGod::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward" ,this, &AGod::MoveForward);
	PlayerInputComponent->BindAxis("Strafe" ,this, &AGod::MoveRight);


	//Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGod::MoveForward(float amount)
{
	if(Controller && amount)
	{
		FVector fwd = GetActorForwardVector();
		// we call AddMovementInput to actually move the
		// player by `amount` in the `fwd` direction
		AddMovementInput(fwd, amount);

	}
}


void AGod::MoveRight(float amount)
{
	if(Controller && amount)
	{
		FVector right = GetActorRightVector();
		AddMovementInput(right,amount);
	}
}

