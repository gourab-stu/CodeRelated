// Bresenham's line drawing algorithm
#include<graphics.h>

void main() {
    int gd = DETECT, gm;
    int x[2], y[2], dx, dy, p, i, j;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter 1st point like this:- a,b: ");
    scanf("%d,%d", &x[0], &y[0]);
    printf("Enter 2nd point like this:- a,b: ");
    scanf("%d,%d", &x[1], &y[1]);
    dx = x[1] - x[0];
    dy = y[1] - y[0];
    i = x[0];
    j = y[0];
    p = 2 * dy - dx;
    putpixel(i, j, YELLOW);
    while(i <= x[1]) {
        if (p < 0) {
            putpixel(i++, j, YELLOW);
            p += 2 * dy;
        } else {
            putpixel(i++, j++, YELLOW);
            p += 2 * dy - 2 * dx;
        }
    }
    getch();
    closegraph();
}