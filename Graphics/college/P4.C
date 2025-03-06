// DDA
#include<graphics.h>

void main() {
    int gd = DETECT, gm;
    int x[2], y[2];
    float m, i, j, dx, dy;
    initgraph(&gd, &gm, "C://TC//BGI");
    printf("Enter a point like this a,b: ");
    scanf("%d,%d", &x[0], &y[0]);
    printf("Enter another point like this a,b: ");
    scanf("%d,%d", &x[1], &y[1]);
    dx = x[1] - x[0];
    dy = y[1] - y[0];
    m = dy / dx;
    i = x[0];
    j = y[0];
    if (m < 1) {
        while (i <= x[1]) {
            putpixel(i, j, WHITE);
            i++;
            j += m;
        }
    } else {
        while (j <= y[1]) {
            putpixel(i, j, WHITE);
            i += 1.0 / m;
            j++;
        }
    }
    getch();
    closegraph();
}