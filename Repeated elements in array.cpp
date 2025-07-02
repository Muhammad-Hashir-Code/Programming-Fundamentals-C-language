#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
void findDuplicates(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);
    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            printf("Duplicate found: %d\n", arr[i]);
        }
    }
}
int main() {
    int arr[] = {3, 5, 2, 3, 7,7,8,5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicates(arr, size);
    return 0;
}

