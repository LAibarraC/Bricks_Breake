// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "balon.generated.h"
UCLASS()
class BRICKS_BREAKE_API Abalon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Abalon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	int velocidad;
	string forma;
	int movimientox;
	int movimientoy;
	int vida;

public:
	Abalon(int velocidad, string forma, int movimientox, int movimientoy, int vida);


	void romperladrillos();

	void rebotar();
};
