// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "DGrappleGun.generated.h"

class UArrowComponent;
class UPhysicsHandleComponent;
class ADGrappleHook;
UCLASS()
class GRAPPLEHOOKSYSTEMPLUGIN_API ADGrappleGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADGrappleGun();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* GrappleGunMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<AActor> GrappleHookClass;

	UPROPERTY()
	AActor* GrappleHook;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FName GrappleHookSocket;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UPhysicsHandleComponent* GrappleGunPhysicsHandle;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UArrowComponent* PhysicsHandleGrabTransform;

	UPROPERTY()
	bool bIsGrappleHookAttached = false;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnGrappleHook();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AttachSelfToParent(USceneComponent* InParent,  FName InSocketName = NAME_None);

};
