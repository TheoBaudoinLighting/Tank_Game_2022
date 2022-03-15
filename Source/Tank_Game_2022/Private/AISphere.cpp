// Fill out your copyright notice in the Description page of Project Settings.


#include "AISphere.h"



// Sets default values
AAISphere::AAISphere()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SphereTest = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Test"));






}







// Called when the game starts or when spawned
void AAISphere::BeginPlay()
{
	Super::BeginPlay();

	Rand = FVector(FMath::FRandRange(-1, 1), FMath::FRandRange(-1, 1), FMath::FRandRange(-1, 1));
	
	//RandColor = FLinearColor(FMath::FRandRange(0, 1), FMath::FRandRange(0, 1), FMath::FRandRange(0, 1));
	LightMaterial = UMaterialInstanceDynamic::Create(SphereTest->GetMaterial(0), this);
	SphereTest->SetMaterial(0, LightMaterial);
}

UMaterialInstanceDynamic* AAISphere::oLightFunction(FLinearColor RandColor, float& Speed)
{
	LightMaterial->SetVectorParameterValue("Color", RandColor);


	UE_LOG(LogTemp, Warning, TEXT("Test Erreur"));


	return LightMaterial; //Bug ici
	
}




// Called every frame
void AAISphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//AddActorLocalOffset(Rand * Speed);

}

