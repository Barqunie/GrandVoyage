// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/GVBaseCharacter.h"
#include "GVBasePlayerCharacter.generated.h"



class UCameraComponent;
//class UInputAction;
//struct FInputActionValue;
//class UInputComponent;
/**
 * 
 */
UCLASS()
class GRANDVOYAGE_API AGVBasePlayerCharacter : public AGVBaseCharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;
	


protected:

	///** Jump Input Action */
	//UPROPERTY(EditAnywhere, Category = "Input")
	//UInputAction* JumpAction;

	///** Move Input Action */
	//UPROPERTY(EditAnywhere, Category = "Input")
	//UInputAction* MoveAction;

	///** Look Input Action */
	//UPROPERTY(EditAnywhere, Category = "Input")
	//class UInputAction* LookAction;

	///** Mouse Look Input Action */
	//UPROPERTY(EditAnywhere, Category = "Input")
	//class UInputAction* MouseLookAction;

	///** Called from Input Actions for movement input */
	//void MoveInput(const FInputActionValue& Value);

	///** Called from Input Actions for looking input */
	//void LookInput(const FInputActionValue& Value);

	///** Handles aim inputs from either controls or UI interfaces */
	//UFUNCTION(BlueprintCallable, Category = "Input")
	//virtual void DoAim(float Yaw, float Pitch);

	///** Handles move inputs from either controls or UI interfaces */
	//UFUNCTION(BlueprintCallable, Category = "Input")
	//virtual void DoMove(float Right, float Forward);

	///** Handles jump start inputs from either controls or UI interfaces */
	//UFUNCTION(BlueprintCallable, Category = "Input")
	//virtual void DoJumpStart();

	///** Handles jump end inputs from either controls or UI interfaces */
	//UFUNCTION(BlueprintCallable, Category = "Input")
	//virtual void DoJumpEnd();



public:
	AGVBasePlayerCharacter();

};
