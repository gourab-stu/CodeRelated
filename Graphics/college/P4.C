#include<graphics.h>

void main() {
    int gd = DETECT, gm, x1, y1, x2, y2;
    float m, x, y, dx, dy;
    initgraph(&gd, &gm, "C://TC//BGI");
    printf("Enter a point like this a,b: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter another point like this a,b: ");
    scanf("%d,%d", &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    m = dy / dx;
    if (m < 1) {
	for (x = x1, y = y1; x <= x2; x++, y += m) {
	    putpixel(x, y, WHITE);
	}
    } else {
	for (x = x1, y = y1; y <= y2; x += 1.0 / m, y++) {
	    putpixel(x, y, WHITE);
	}
    }
    getch();
    closegraph();
}