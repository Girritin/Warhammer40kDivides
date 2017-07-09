// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Warhammer40kDividesHUD.generated.h"

UCLASS()
class AWarhammer40kDividesHUD : public AHUD
{
	GENERATED_BODY()

public:
	AWarhammer40kDividesHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

