#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int player;
int computerScore = 0, playerScore = 0;

int main() {
    char computer[3][10] = {
        "rock",
        "scissors",
        "paper"
    };

    printf("Coded by: Kaizer Andri Baynosa\n");
    printf("[0] Rock\n");
    printf("[1] Scissors\n");
    printf("[2] Paper\n");
    printf("[3] Exit\n");

    // Use time() to seed the random number generator
    srand(time(0));

    // Utilizing a while to keep the game running
    while (1) {
        // Pick a weapon at random from the Array
        int randomComputerWeapon = rand() % 3;
        
        // Get the player-chosen weapon
        printf("Choose your weapon: ");
        scanf("%d", &player);
        
        // Check if the player's chosen weapon is equal to the computer weapon that was a random choice by the computer
        if (player == randomComputerWeapon) {
            printf("Tie!\n");
        }
        // Check if the player has chosen rock and check if the computer has chosen paper, the condition is true
        else if ((player == 0) && (randomComputerWeapon == 2)) {
            printf("Computer wins!\n");
            computerScore++;
        }
        // Check if the player has chosen rock and check if the computer has chosen scissors, the condition is true
        else if ((player == 0) && (randomComputerWeapon == 1)) {
            printf("Player wins!\n");
            playerScore++;
        }
        // Check if the player has chosen scissors and check if the computer has chosen paper, the condition is true
        else if ((player == 1) && (randomComputerWeapon == 2)) {
            printf("Player wins!\n");
            playerScore++;
        }
        // Check if the player has chosen scissors and check if the computer has chosen rock, the condition is true
        else if ((player == 1) && (randomComputerWeapon == 0)) {
            printf("Computer wins!\n");
            computerScore++;
        }
        // Check if the player has chosen paper and check if the computer has chosen rock, the condition is true
        else if ((player == 2) && (randomComputerWeapon == 0)) {
            printf("Player wins!\n");
            playerScore++;
        }
        // Check if the player has chosen paper and check if the computer has chosen scissors, the condition is true
        else if ((player == 2) && (randomComputerWeapon == 1)) {
            printf("Computer wins!\n");
            computerScore++;
        }
        // Check if the player has chosen Exit
        else if (player == 3) {
            break;
        }
        else {
            printf("Invalid input. Please enter a valid number.\n");
        }
        // Print the scores after each round
        printf("Player: %d Computer: %d\n", playerScore, computerScore);
    }
    return 0;
}
