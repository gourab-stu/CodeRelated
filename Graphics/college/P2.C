#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
    int gd = DETECT, gm, x;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    for (x = 10; x <= 80; x++) {
	putpixel(x, 10, 6);
    }
    getch();
    closegraph();
    return 0;
}