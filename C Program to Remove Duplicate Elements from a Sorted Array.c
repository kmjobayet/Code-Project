#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements (sorted array): ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}