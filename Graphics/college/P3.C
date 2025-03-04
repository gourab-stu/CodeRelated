#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
    int gd = DETECT, gm;
    int i;
    int x[4], y[4];
    clrscr();
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    for (i = 0; i < 4; i++) {
	printf("Enter a point like this a,b : ");
	scanf("%d,%d", &x[i], &y[i]);
    }
    for (i = x[0]; i < x[1] ; i++) {
	putpixel(i, y[0], WHITE);
    }
    for (i = x[1]
    printf("Enter another point like this a,b : ");
    scanf("%d,%d", &x2, &y2);
    m = (float)(y2 - y1) / (float)(x2 - x1);
    printf("m = %f", m);
    getch();
    closegraph();
    return 0;
}