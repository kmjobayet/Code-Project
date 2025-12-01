#include <stdio.h>

int main() {
    int hours, minutes;
    printf("Enter hours (0-23): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);
    
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("Invalid time input.\n");
        return 1;
    }
    
    char period[3] = "AM";
    if (hours >= 12) {
        period[0] = 'P';
        if (hours > 12) hours -= 12;
    } else if (hours == 0) {
        hours = 12;
    }
    
    printf("Formatted time: %d:%02d %s\n", hours, minutes, period);
    return 0;
}