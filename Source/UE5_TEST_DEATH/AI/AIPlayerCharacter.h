// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Global/GlobalCharacter.h"
#include "AIEnum.h"
#include "AIPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class UE5_TEST_DEATH_API AAIPlayerCharacter : public AGlobalCharacter
{
	GENERATED_BODY()
	
public:
	AAIPlayerCharacter();

	void AttackAction();
	void JumpAction();

	//void WeaponChange();

	void MoveRight(float Val);
	void MoveForward(float Val);
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	//UFUNCTION(BlueprintCallable)
	//void AttUp(class UInvenItemData* _Data);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WeaponMesh;

	// 블루프린트
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStaticMesh*> WeaponArrays;

protected:
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void BeginPlay() override;

private:

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	void Tick(float _Delta) override;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TMap<AIAniState, class UAnimMontage*> MapAnimation;

	UFUNCTION()
	void MontageEnd(UAnimMontage* Anim, bool _Inter);

	UFUNCTION()
	void AnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	//UFUNCTION()
	//void AnimNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	float Speed = 1000.0f;

	int Att = 10;
};
