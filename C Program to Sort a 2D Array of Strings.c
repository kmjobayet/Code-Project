#include <stdio.h>
#include <string.h>

void sortStrings(char* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    char* arr[] = {"banana", "apple", "cherry", "date"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortStrings(arr, n);
    printf("Sorted strings: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    return 0;
}