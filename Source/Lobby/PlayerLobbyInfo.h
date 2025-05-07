// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "UObject/Object.h"
#include "PlayerLobbyInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLobbyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LobbyData")
	APlayerController* PC;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LobbyData")
	FText PlayerName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LobbyData")
	bool bReady = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LobbyData")
	APlayerState* PlayerState;
	
};
