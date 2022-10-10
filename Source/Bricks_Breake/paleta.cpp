// Fill out your copyright notice in the Description page of Project Settings.


#include "paleta.h"

// Sets default values
Apaleta::Apaleta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Apaleta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Apaleta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

Apaleta::Apaleta(string color, int velocidad, int posicion)
{
}

void Apaleta::moverse()
{
}

