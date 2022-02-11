// Fill out your copyright notice in the Description page of Project Settings.


#include "DGrappleHook.h"

#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values
ADGrappleHook::ADGrappleHook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("RootComponent");
	
	GrappleHookMesh = CreateDefaultSubobject<UStaticMeshComponent>("GrappleHookMesh");
	GrappleHookMesh->SetupAttachment(RootComponent);

	PhysicsHandleGrabTransform = CreateDefaultSubobject<USceneComponent>("PhysicsHandleGrabTransform");
	PhysicsHandleGrabTransform->SetupAttachment(RootComponent);
	
	GrappleHookPhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>("GrappleGunPhysicsHandle");
}

// Called when the game starts or when spawned
void ADGrappleHook::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADGrappleHook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

