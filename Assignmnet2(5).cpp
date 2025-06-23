#include <stdio.h>
void print_horizontal_histogram(int values[], int count) {
    printf("Horizontal Histogram:\n");
    for (int i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void print_vertical_histogram(int values[], int count) {
    printf("Vertical Histogram:\n");
    int max_value = values[0];
    for (int i = 1; i < count; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }
    for (int i = max_value; i > 0; i--) {
        for (int j = 0; j < count; j++) {
            if (values[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < count; i++) {
        printf("==");
    }
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", i + 1);
    }
    printf("\n");
}

int main() {
    int values[] = {3, 5, 1, 4};
    int count = sizeof(values) / sizeof(values[0]);

    print_horizontal_histogram(values, count);
    print_vertical_histogram(values, count);

    return 0;
}

