// draw a rectangle with 4 user input points as (a, b), (c, b), (c, d), (a, d)
#include<graphics.h>

void main() {
    int gd = DETECT, gm, i;
    int x[4], y[4];
    clrscr();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter 4 points like this:- \na,b\nc,b\nc,d\na,d \nand press enter after each point : \n");
    for (i = 0; i < 4; i++) {
        scanf("%d,%d", &x[i], &y[i]);
    }
    if ((y[0] != y[1]) || (x[1] != x[2]) || (y[2] != y[3]) || (x[3] != x[0])) {
        printf("drawing rectangle is not possible");
        getch();
        return;
    }
    for (i = x[0]; i <= x[1] ; i++) {
        putpixel(i, y[0], WHITE);
    }
    for (i = y[1]; i <= y[2] ; i++) {
        putpixel(x[1], i, WHITE);
    }
    for (i = x[3]; i <= x[2] ; i++) {
        putpixel(i, y[3], WHITE);
    }
    for (i = y[0]; i <= y[3] ; i++) {
        putpixel(x[0], i, WHITE);
    }
    getch();
    closegraph();
}