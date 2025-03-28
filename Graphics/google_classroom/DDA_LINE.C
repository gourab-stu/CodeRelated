// DDA line drawing algorithm
#include<graphics.h>

int round(float num) {
    return (num >= 0) ? (int)(num + 0.5) : (int)(num - 0.5);
}

void DDA_line(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1, dy = y2 - y1, i;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    float xInc = (float)dx / steps;
    float yInc = (float)dy / steps;
    float x = x1, y = y1;
    for(i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xInc;
        y += yInc;
    }
}

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("Enter the first point x1, y1: ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter the second point x2, y2: ");
    scanf("%d,%d", &x2, &y2);
    DDA_line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}