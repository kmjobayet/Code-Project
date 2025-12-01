#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    time_t now;
    struct tm *local;
    
    for (int i = 0; i < 10; i++) {  // Run for 10 seconds as a demo
        now = time(NULL);
        local = localtime(&now);
        printf("\r%02d:%02d:%02d", local->tm_hour, local->tm_min, local->tm_sec);
        fflush(stdout);  // Ensure immediate output
        sleep(1);  // Wait 1 second
    }
    printf("\n");
    return 0;
}