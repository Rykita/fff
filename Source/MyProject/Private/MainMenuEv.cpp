// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuEv.h"




void UMainMenuEvents::EnterGame()
{
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("/Game/Devroom"), TRAVEL_Absolute);
}

void UMainMenuEvents::ExitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, false);
}

