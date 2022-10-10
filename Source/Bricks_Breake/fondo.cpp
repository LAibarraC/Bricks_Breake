// Fill out your copyright notice in the Description page of Project Settings.


#include "fondo.h"

// Sets default values
Afondo::Afondo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//mostrar imagenes en cada nivel
}

void Afondo::visualizarenpantalla()
{
	//mostrar
}

// Called when the game starts or when spawned
void Afondo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Afondo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

