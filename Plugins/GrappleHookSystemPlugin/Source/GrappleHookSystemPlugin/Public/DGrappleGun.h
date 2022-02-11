// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DGrappleGun.generated.h"

class ADGrappleHook;
UCLASS()
class GRAPPLEHOOKSYSTEMPLUGIN_API ADGrappleGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADGrappleGun();

protected:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* GrappleGunMesh;

	UPROPERTY(EditDefaultsOnly)
	ADGrappleHook* GrappleHook;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
