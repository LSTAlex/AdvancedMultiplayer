// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AdvancedMultiplayerHUD.generated.h"

UCLASS()
class AAdvancedMultiplayerHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAdvancedMultiplayerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

