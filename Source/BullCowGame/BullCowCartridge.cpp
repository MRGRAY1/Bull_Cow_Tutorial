// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull Cows."));
    PrintLine(TEXT("Guess the 4 leter word!"));   //Remove Magic Number
    PrintLine(TEXT("Please enter your guess..."));
    HiddenWord = TEXT("CAKE");

    //Set Lives
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(Input);
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You won!"));
    }
    else
    {
        PrintLine(TEXT("Try Again."));

        Lives--;
    }
}