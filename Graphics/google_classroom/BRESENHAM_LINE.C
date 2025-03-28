// Bresenham's line drawing algorithm
#include<graphics.h>

void bresenham(int x1, int y1, int x2, int y2) {
    int dx, dy, p, i, j;
    dx = x2 - x1;
    dy = y2 - y1;
    i = x1;
    j = y1;
    p = 2 * dy - dx;
    putpixel(i, j, YELLOW);
    while(i <= x2) {
        if (p < 0) {
            putpixel(i++, j, YELLOW);
            p += 2 * dy;
        } else {
            putpixel(i++, j++, YELLOW);
            p += 2 * dy - 2 * dx;
        }
    }
}

void main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter 1st point like this:- a,b: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter 2nd point like this:- a,b: ");
    scanf("%d,%d", &x2, &y2);
    bresenham(x1, y1, x2, y2);
    getch();
    closegraph();
}