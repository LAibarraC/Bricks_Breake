// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "ladrillo.h"
#include "ladrilloOro.generated.h"
/**
 * 
 */
UCLASS()
class BRICKS_BREAKE_API AladrilloOro : public Aladrillo
{
	GENERATED_BODY()
private:
	string color;
	int volorpuntaje;
	int posicion;

public:
	AladrilloOro(int dureza);


	void otorgamaspuntaje();
};
