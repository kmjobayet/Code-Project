#include <stdio.h>

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to remove: ");
    scanf("%d", &key);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];
        }
    }
    printf("Array after removal: ");
    for (int i = 0; i < j; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}