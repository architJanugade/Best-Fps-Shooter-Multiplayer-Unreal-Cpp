// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSPickableObject.h"
#include "Components/SphereComponent.h"

// Sets default values
AFPSPickableObject::AFPSPickableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	RootComponent = meshComp;
	meshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);


	//sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("MySphere"));
	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("MyShpere"));
	sphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	sphereComp->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	sphereComp->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn , ECR_Overlap);
	sphereComp->SetupAttachment(meshComp);

}

// Called when the game starts or when spawned
void AFPSPickableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPSPickableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSPickableObject::NotifyActorBeginOverlap(AActor* OtherActor)
{
	
}

