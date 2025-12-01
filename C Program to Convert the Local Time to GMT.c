#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    struct tm *gmt = gmtime(&now);
    
    printf("Local Time: %s", asctime(local));
    printf("GMT Time: %s", asctime(gmt));
    return 0;
}