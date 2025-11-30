#include <stdio.h>

int findLargest(int* arr, int size) {
    int max = *arr;  // Dereference first element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {  // Pointer arithmetic
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Largest element: %d\n", findLargest(arr, size));
    return 0;
}