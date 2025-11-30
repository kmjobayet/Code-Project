#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Average: %.2f\n", sum / n);
    return 0;
}