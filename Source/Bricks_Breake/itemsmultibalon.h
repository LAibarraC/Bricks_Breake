// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
using namespace std;
#include "CoreMinimal.h"
#include "Items.h"
#include "itemsmultibalon.generated.h"
/**
 * 
 */
UCLASS()
class BRICKS_BREAKE_API Aitemsmultibalon : public AItems
{
	GENERATED_BODY()
	
private:
	string forma;
	int multiplicar;
	int posicion;

public:
	Aitemsmultibalon();


	void multiplicarbalon();
};
