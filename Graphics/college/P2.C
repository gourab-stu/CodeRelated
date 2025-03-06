// draw a line with the points (10, 10) and (10, 80)
#include<graphics.h>

void main() {
    int gd = DETECT, gm, x;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    for (x = 10; x <= 80; x++) {
        putpixel(x, 10, 6);
    }
    getch();
    closegraph();
}