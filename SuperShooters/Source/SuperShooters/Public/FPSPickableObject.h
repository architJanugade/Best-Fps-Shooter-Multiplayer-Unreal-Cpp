// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSPickableObject.generated.h"


class USphereComponent;

UCLASS()
class SUPERSHOOTERS_API AFPSPickableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSPickableObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere , Category ="Components")
	UStaticMeshComponent* meshComp;

	UPROPERTY(VisibleAnywhere, Category ="Components")
	USphereComponent* sphereComp;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	

};
