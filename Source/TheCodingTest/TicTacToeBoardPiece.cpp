// Fill out your copyright notice in the Description page of Project Settings.


#include "TicTacToeBoardPiece.h"
#include "Components/PointLightComponent.h"

// Sets default values
ATicTacToeBoardPiece::ATicTacToeBoardPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Glow = CreateDefaultSubobject<UPointLightComponent>(TEXT("Glow"));
	RootComponent = Glow;
	//Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	//Mesh->SetupAttachment(GetRootComponent());

	bReplicates = true;
}

// Called when the game starts or when spawned
void ATicTacToeBoardPiece::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATicTacToeBoardPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

