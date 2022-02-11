// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DGrappleHook.generated.h"

UCLASS()
class GRAPPLEHOOKSYSTEMPLUGIN_API ADGrappleHook : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADGrappleHook();

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* GrappleHookMesh;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
