#include<stdio.h>
#include<conio.h>

int main() {
    int x1, y1, x2, y2;
    float m;
    clrscr();
    printf("Enter a point like this a,b : ");
    scanf("%d,%d", &x1, &y1);
    printf("Enter another point like this a,b : ");
    scanf("%d,%d", &x2, &y2);
    m = (float)(y2 - y1) / (float)(x2 - x1);
    printf("m = %f", m);
    getch();
    return 0;
}