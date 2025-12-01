#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    
    printf("Current Date and Time: %s", asctime(local));
    return 0;
}