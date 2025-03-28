// Midpoint circle drawing algorithm
#include<graphics.h>
#include<math.h>

void midpoint_circle(int a, int b, int radius) {
    int x, y;
    double p;
    x = 0;
    y = radius;
    p = pow(((double)x + 1.0), 2) + pow(((double)y - 0.5), 2) - pow((double)radius, 2);
    while (x <= y) {
        if (p < 0.0) {
            p = p + 2.0 * (double)x + 3.0;
        } else {
            y--;
            p = p + 2.0 * (double)x - 2.0 * (double)y + 5.0;
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
    midpoint_circle(x, y, r);
    getch();
    closegraph();
}