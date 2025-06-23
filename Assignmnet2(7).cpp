#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define ROWS 6
#define COLS 5
void populate_array(char arr[ROWS][COLS], int last_row[COLS]) {
    srand(time(0)); 
    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = 'A' + (rand() % 26); 
        }
    }
    for (int j = 0; j < COLS; j++) {
        arr[ROWS - 1][j] = '0' + last_row[j];
    }
}

void print_array(char arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}

int search_string(char arr[ROWS][COLS], char *str) {
    int len = strlen(str);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <= COLS - len; j++) {
            int k;
            for (k = 0; k < len; k++) {
                if (arr[i][j + k] != str[k]) break;
            }
            if (k == len) return 1; 
        }
    }
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i <= ROWS - len; i++) {
            int k;
            for (k = 0; k < len; k++) {
                if (arr[i + k][j] != str[k]) break;
            }
            if (k == len) return 1; 
        }
    }

    return 0; 
}

int main() {
    char arr[ROWS][COLS];
    int score = 0;
    int last_row[COLS] = {0, 3, 0, 3, 8}; 

    while (1) {
        populate_array(arr, last_row);
        print_array(arr);

        char search_str[100];
        printf("Enter string to search (or 'END' to stop): ");
        scanf("%s", search_str);

        if (strcmp(search_str, "END") == 0) {
            printf("Exiting program.\n");
            break;
        }

        for (int i = 0; search_str[i]; i++) {
            search_str[i] = toupper(search_str[i]);
        }
        if (search_string(arr, search_str)) {
            score++;
            printf("%s is present. Score: %d\n", search_str, score);
        } else {
            score--;
            printf("%s is not present. Score: %d\n", search_str, score);
        }
    }

    return 0;
}

