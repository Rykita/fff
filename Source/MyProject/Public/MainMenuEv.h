// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuEv.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MYPROJECT_API UMainMenuEvents : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Enter Game Callback", Keywords = ""), Category = "Main Menu Events")
	void EnterGame();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Exit Game Callback", Keywords = ""), Category = "Main Menu Events")
	void ExitGame();
};
