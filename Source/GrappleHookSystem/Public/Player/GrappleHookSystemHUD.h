// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GrappleHookSystemHUD.generated.h"

UCLASS()
class AGrappleHookSystemHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGrappleHookSystemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

