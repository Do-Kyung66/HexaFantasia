// Copyright © 2025 DoKyung HEO


#include "Player/HexaFantasiaPlayer.h"

// Sets default values
AHexaFantasiaPlayer::AHexaFantasiaPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHexaFantasiaPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHexaFantasiaPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHexaFantasiaPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

