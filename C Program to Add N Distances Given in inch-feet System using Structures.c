#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    int n;
    printf("Enter the number of distances to add: ");
    scanf("%d", &n);

    struct Distance distances[n];
    struct Distance total = {0, 0};  // Initialize total to 0

    // Input distances
    for (int i = 0; i < n; i++) {
        printf("Enter distance %d (feet inches): ", i + 1);
        scanf("%d %d", &distances[i].feet, &distances[i].inches);
    }

    // Add all distances
    for (int i = 0; i < n; i++) {
        total.feet += distances[i].feet;
        total.inches += distances[i].inches;

        // Handle carry-over: 12 inches = 1 foot
        if (total.inches >= 12) {
            total.feet += total.inches / 12;
            total.inches %= 12;
        }
    }

    // Display total distance
    printf("\nTotal Distance: %d feet %d inches\n", total.feet, total.inches);

    return 0;
}