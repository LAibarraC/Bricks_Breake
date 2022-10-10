// Fill out your copyright notice in the Description page of Project Settings.


#include "balon.h"

// Sets default values
Abalon::Abalon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Abalon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Abalon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

Abalon::Abalon(int velocidad, string forma, int movimientox, int movimientoy, int vida)
{
}

void Abalon::romperladrillos()
{
}

void Abalon::rebotar()
{
}

