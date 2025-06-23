#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256 
void calculateFrequency(char *slogan) {
    int freq[MAX_CHAR] = {0}; 

    for (int i = 0; slogan[i] != '\0'; i++) {
        freq[(int)slogan[i]]++;
    }

    printf("Character frequencies for \"%s\":\n", slogan);
    printf("{");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d", (char)i, freq[i]);
            int next_char_found = 0;
            for (int j = i + 1; j < MAX_CHAR; j++) {
                if (freq[j] > 0) {
                    next_char_found = 1;
                    break;
                }
            }
            if (next_char_found) {
                printf(", ");
            }
        }
    }
    printf("}\n");
}

int main() {
    char *slogans[] = {"buy now", "save big", "limited offer"};
    int num_slogans = sizeof(slogans) / sizeof(slogans[0]);

    for (int i = 0; i < num_slogans; i++) {
        calculateFrequency(slogans[i]);
    }

    return 0;
}

