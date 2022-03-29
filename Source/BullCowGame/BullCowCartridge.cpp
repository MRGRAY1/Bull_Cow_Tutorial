// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    FString WelcomeStr1 = TEXT("Welcome to Bull Cows.");
    FString WelcomeStr2 = TEXT("Please enter your guess.");
    PrintLine(WelcomeStr1);
    PrintLine(WelcomeStr2);
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("cake");
}