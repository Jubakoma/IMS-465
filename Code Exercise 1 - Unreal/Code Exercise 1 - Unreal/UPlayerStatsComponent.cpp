#include "PlayerStatsComponent.h"

virtual void PostInitializeComponents() override;  
{
Super::BeginPlay();
MaxHealth = 100.0f;

}

UPlayerStatsComponent::UPlayerStatsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


void UPlayerStatsComponent::BeginPlay()
{
	
	CurrentHealth = MaxHealth;
	UE_LOG(LogTemp, Warning, TEXT("[PlayerStats] MaxHealth initialized to %f"), MaxHealth);
}