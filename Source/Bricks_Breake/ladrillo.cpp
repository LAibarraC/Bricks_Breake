// Fill out your copyright notice in the Description page of Project Settings.


#include "ladrillo.h"

// Sets default values
Aladrillo::Aladrillo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ancho = 2.3;
	largo = 4.0;
	color = "naranja";
	forma = "rectangulo";
}

void Aladrillo::crearladrillos()
{
	cout << "se creo un ladrillo";
}

// Called when the game starts or when spawned
void Aladrillo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aladrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

