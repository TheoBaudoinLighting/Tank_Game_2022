// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AISphere.generated.h"

UCLASS()
class TANK_GAME_2022_API AAISphere : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAISphere();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SphereTest;

	UPROPERTY(EditAnywhere)
		//float Speed;
		FVector Rand;
		//UMaterialInstanceDynamic* LightMaterial;


	UFUNCTION(BlueprintCallable)
		UMaterialInstanceDynamic* oLightFunction( FLinearColor RandColor,float& Speed);




};
