// Fill out your copyright notice in the Description page of Project Settings.


#include "Tabla.h"

// Sets default values
ATabla::ATabla()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	nivel++;
	contador = 0;
	nombrenivel = "inicio";
}

void ATabla::visualizarenpantalla()
{

}

// Called when the game starts or when spawned
void ATabla::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATabla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

