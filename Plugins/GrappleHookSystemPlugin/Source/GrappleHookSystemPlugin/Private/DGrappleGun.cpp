// Fill out your copyright notice in the Description page of Project Settings.


#include "DGrappleGun.h"

#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"
#include "GenericPlatform/GenericPlatformCrashContext.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values
ADGrappleGun::ADGrappleGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GrappleGunMesh = CreateDefaultSubobject<USkeletalMeshComponent>("GrappleGunMesh");

	PhysicsHandleGrabTransform = CreateDefaultSubobject<UArrowComponent>("GrappleHookIdleTransform");
	PhysicsHandleGrabTransform->SetupAttachment(GrappleGunMesh, GrappleHookSocket);

	GrappleGunPhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>("GrappleGunPhysicsHandle");
}

// Called when the game starts or when spawned
void ADGrappleGun::BeginPlay()
{
	Super::BeginPlay();

	SpawnGrappleHook();
}

// Called every frame
void ADGrappleGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsGrappleHookAttached)
	{
		GrappleGunPhysicsHandle->SetTargetLocationAndRotation(PhysicsHandleGrabTransform->GetComponentLocation(), PhysicsHandleGrabTransform->GetComponentRotation());
		DrawDebugSphere(GetWorld(), PhysicsHandleGrabTransform->GetComponentLocation(), 3, 16, FColor::Red);
	}
}

void ADGrappleGun::AttachSelfToParent(USceneComponent* InParent, FName InSocketName)
{
	if (GrappleGunMesh)
	{
		if (!GrappleGunMesh->AttachToComponent(InParent, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), InSocketName))
		{
			GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Red, FString("Fail to attach GrappleGunMesh to " + InParent->GetName() + " in " + this->GetClass()->GetName()));
		}	
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Red, FString("Expecting an object in GrappleGunMesh in " + this->GetClass()->GetName()));
	}
}

void ADGrappleGun::SpawnGrappleHook()
{
	if (GrappleHookClass)
	{
		//Get the grapple hook sockets transform
		if (!GrappleGunMesh->DoesSocketExist(GrappleHookSocket))
		{
			GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Red, FString("Invalid socket defined in " +
				this->GetClass()->GetName() + ", could not spawn grapple hook."));
			return;
		}

		FTransform SpawnTM = GrappleGunMesh->GetSocketTransform(GrappleHookSocket);	

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		GrappleHook = GetWorld()->SpawnActor<AActor>(GrappleHookClass, SpawnTM, SpawnParams);

		if (GrappleHook)
		{
			GrappleHook->AttachToComponent(GrappleGunMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), GrappleHookSocket);	
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Red, FString("Grapple hook could not successfully spawn in " +
				this->GetClass()->GetName()));
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Red, FString("Expected an actor class for Grapple Hook in "
			+ this->GetClass()->GetName()));
	}
}

