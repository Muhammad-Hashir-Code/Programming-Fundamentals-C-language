#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TRANSACTIONS 100
#define MAX_LENGTH 100
void sort_string(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

typedef struct {
    char *transactions[MAX_TRANSACTIONS];
    int size;
} Group;

int main() {
    char *transactions[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = sizeof(transactions) / sizeof(transactions[0]);

    Group groups[MAX_TRANSACTIONS];
    int group_count = 0;

    for (int i = 0; i < n; i++) {
        char sorted[MAX_LENGTH];
        strcpy(sorted, transactions[i]);
        sort_string(sorted);

        int found_group = 0;
        for (int j = 0; j < group_count; j++) {
            char sorted_group[MAX_LENGTH];
            strcpy(sorted_group, groups[j].transactions[0]);
            sort_string(sorted_group);

            if (strcmp(sorted, sorted_group) == 0) {
                groups[j].transactions[groups[j].size++] = transactions[i];
                found_group = 1;
                break;
            }
        }

        if (!found_group) {
            groups[group_count].transactions[0] = transactions[i];
            groups[group_count].size = 1;
            group_count++;
        }
    }

    printf("Grouped Transactions:\n");
    for (int i = 0; i < group_count; i++) {
        printf("[");
        for (int j = 0; j < groups[i].size; j++) {
            printf("%s", groups[i].transactions[j]);
            if (j < groups[i].size - 1) printf(", ");
        }
        printf("]\n");
    }

    return 0;
}

