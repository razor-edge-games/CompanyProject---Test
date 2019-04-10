// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawnTest_001.h"

// Sets default values
AMyPawnTest_001::AMyPawnTest_001()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawnTest_001::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnTest_001::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawnTest_001::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

