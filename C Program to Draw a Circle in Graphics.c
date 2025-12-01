#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");  // Adjust path as needed
    
    circle(200, 200, 100);  // Draw circle at (200,200) with radius 100
    
    getch();
    closegraph();
    return 0;
}