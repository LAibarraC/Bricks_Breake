// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "ladrillo.h"
#include "ladrillometalico.generated.h"
/**
 * 
 */
UCLASS()
class BRICKS_BREAKE_API Aladrillometalico : public Aladrillo
{
	GENERATED_BODY()
private:
	string color;
	string tipometal;
	int posicion;
public:
	Aladrillometalico(int ancho,int largo);


	void indestructible();
	void adorno();
};
