#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// Function to display the grid
void display_grid(char grid[SIZE][SIZE]) {
    printf("\nGrid:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    char grid[SIZE][SIZE] = {
        {' ', ' ', 'I', 'X', ' '},
        {' ', 'X', ' ', ' ', ' '},
        {'I', ' ', 'X', 'X', ' '},
        {' ', ' ', ' ', 'I', 'X'},
        {' ', 'X', ' ', ' ', 'P'}
    };

    int playerRow = 4, playerCol = 4; // Starting position of the player
    int itemsCollected = 0;
    char move;

    printf("Welcome to the Adventure Game!\n");

    while (1) {
        display_grid(grid);

        // Display instructions and current score
        printf("Items collected: %d\n", itemsCollected);
        printf("Enter your move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &move);

        int newRow = playerRow, newCol = playerCol;

        // Determine new position based on the input
        switch (move) {
            case 'W':
            case 'w': newRow = playerRow - 1; break; // Move up
            case 'S':
            case 's': newRow = playerRow + 1; break; // Move down
            case 'A':
            case 'a': newCol = playerCol - 1; break; // Move left
            case 'D':
            case 'd': newCol = playerCol + 1; break; // Move right
            case 'Q':
            case 'q': printf("Game Over! You collected %d items.\n", itemsCollected);
                      return 0; // Exit the game
            default: printf("Invalid move! Please try again.\n"); continue;
        }

        // Check if the new position is within bounds
        if (newRow < 0 || newRow >= SIZE || newCol < 0 || newCol >= SIZE) {
            printf("You can't move outside the grid! Try a different move.\n");
            continue;
        }

        // Check if the new position is an obstacle
        if (grid[newRow][newCol] == 'X') {
            printf("You can't move into an obstacle! Try a different move.\n");
            continue;
        }

        // Move the player to the new position
        if (grid[newRow][newCol] == 'I') {
            printf("You found an item!\n");
            itemsCollected++;
        }

        // Clear previous position
        grid[playerRow][playerCol] = ' ';

        // Update player position
        playerRow = newRow;
        playerCol = newCol;
        grid[playerRow][playerCol] = 'P';
    }

    return 0;
}

