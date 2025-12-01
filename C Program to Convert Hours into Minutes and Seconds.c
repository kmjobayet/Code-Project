#include <stdio.h>

int main() {
    float hours;
    printf("Enter hours: ");
    scanf("%f", &hours);
    
    if (hours < 0) {
        printf("Invalid input. Hours must be non-negative.\n");
        return 1;
    }
    
    float minutes = hours * 60;
    float seconds = hours * 3600;
    
    printf("%.2f hours = %.2f minutes = %.2f seconds\n", hours, minutes, seconds);
    return 0;
}