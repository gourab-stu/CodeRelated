// Bresenham circle drawing algorithm
#include<graphics.h>
#include<math.h>

void bresenham_circle(int a, int b, int radius) {
    int x, y;
    double d;
    x = 0;
    y = radius;
    d = 3.0 - 2.0 * (double)radius;
    while (x <= y) {
        if (d < 0.0) {
            d = d + 4.0 * (double)x + 6.0;
        } else {
            y--;
            d = d + 4.0 * ((double)x - (double)y) + 10.0;
        }
        putpixel((a + x), (b + y), YELLOW);
        putpixel((a + x), (b - y), YELLOW);
        putpixel((a - x), (b + y), YELLOW);
        putpixel((a - x), (b - y), YELLOW);
        putpixel((a + y), (b + x), YELLOW);
        putpixel((a + y), (b - x), YELLOW);
        putpixel((a - y), (b + x), YELLOW);
        putpixel((a - y), (b - x), YELLOW);
        x++;
    }
}

void main() {
    int gd = DETECT, gm;
    int r, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    printf("Enter the center of the circle: x, y: ");
    scanf("%d,%d", &x, &y);
    bresenham_circle(x, y, r);
    getch();
    closegraph();
}