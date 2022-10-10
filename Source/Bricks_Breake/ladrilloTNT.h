// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "ladrillo.h"
#include "ladrilloTNT.generated.h"
/**
 * 
 */
UCLASS()
class BRICKS_BREAKE_API AladrilloTNT : public Aladrillo
{
	GENERATED_BODY()
private:
	string color;
	string forma;
	int radioexplocion;
	int posicion;
	int impacto;
public:
	AladrilloTNT();
	void explotar();
	void destruirladrillo();
};
