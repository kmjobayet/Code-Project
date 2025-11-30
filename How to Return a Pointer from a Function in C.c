#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    return arr;  // Returning dynamically allocated pointer
}

int main() {
    int* ptr = createArray(5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);  // Free memory to avoid leak
    return 0;
}