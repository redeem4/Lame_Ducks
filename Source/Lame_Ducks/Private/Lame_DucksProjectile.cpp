// Fill out your copyright notice in the Description page of Project Settings.

#include "Lame_Ducks.h"
#include "Lame_DucksProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
ALame_DucksProjectile::ALame_DucksProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALame_DucksProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALame_DucksProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

