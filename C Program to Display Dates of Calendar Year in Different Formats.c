#include <stdio.h>
#include <time.h>

int is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && is_leap_year(year)) return 29;
    return days[month - 1];
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    
    for (int month = 1; month <= 12; month++) {
        for (int day = 1; day <= days_in_month(month, year); day++) {
            printf("%02d/%02d/%04d | %02d-%02d-%04d | %04d-%02d-%02d\n",
                   month, day, year, day, month, year, year, month, day);
        }
    }
    return 0;
}