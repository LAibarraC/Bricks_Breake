// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "paleta.generated.h"
UCLASS()
class BRICKS_BREAKE_API Apaleta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Apaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	string color;
	int velocidad;
	int posicion;
public:
	Apaleta(string color, int velocidad, int posicion);


	void moverse();

};
