// Copyright © 2025 DoKyung HEO

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HexaFantasiaPlayer.generated.h"

UCLASS()
class HEXAFANTASIA_API AHexaFantasiaPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHexaFantasiaPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
