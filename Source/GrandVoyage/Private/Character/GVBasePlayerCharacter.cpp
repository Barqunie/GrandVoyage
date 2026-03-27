// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GVBasePlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"

AGVBasePlayerCharacter::AGVBasePlayerCharacter()
{
	// Create the Camera Component	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(GetMesh());

	bUseControllerRotationYaw = false;
	CameraComponent->bUsePawnControlRotation = false;

}



