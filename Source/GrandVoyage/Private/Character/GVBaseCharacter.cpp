// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GVBaseCharacter.h"

// Sets default values
AGVBaseCharacter::AGVBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGVBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGVBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGVBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

