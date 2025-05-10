// Rotation of a point about a reference point
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX 10

double toRad(int deg) {
    return (M_PI / 180.0) * (double)deg;
}

int round(double num) {
    return (num - (int)num >= 0.5) ? (int)(num + 1.0) : (int)num;
}

void multiplyMatrices(int m1, int n1, int matrix1[MAX][MAX], int m2, int n2, int matrix2[MAX][MAX], int result[MAX][MAX]) {
    int i, j, k;
    if (n1 != m2) {
        printf("Multiplication not possible!\n");
        return;
    }
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void translatePoint(int point[MAX][MAX], int dx, int dy, int translatedPoint[MAX][MAX]) {
    int translation_matrix[MAX][MAX];
    translation_matrix[0][0] = 1;
    translation_matrix[0][1] = 0;
    translation_matrix[0][2] = dx;
    translation_matrix[1][0] = 0;
    translation_matrix[1][1] = 1;
    translation_matrix[1][2] = dy;
    translation_matrix[2][0] = 0;
    translation_matrix[2][1] = 0;
    translation_matrix[2][2] = 1;
    multiplyMatrices(3, 3, translation_matrix, 3, 1, point, translatedPoint);
}

void rotatePoint(int point[MAX][MAX], int deg, int rotatedPoint[MAX][MAX]) {
    int rotation_matrix[MAX][MAX];
    rotation_matrix[0][0] = cos(toRad(deg));
    rotation_matrix[0][1] = (-1.0) * sin(toRad(deg));
    rotation_matrix[0][2] = 0.0;
    rotation_matrix[1][0] = sin(toRad(deg));
    rotation_matrix[1][1] = cos(toRad(deg));
    rotation_matrix[1][2] = 0.0;
    rotation_matrix[2][0] = 0.0;
    rotation_matrix[2][1] = 0.0;
    rotation_matrix[2][2] = 1.0;
    multiplyMatrices(3, 3, rotation_matrix, 3, 1, point, rotatedPoint);
}

void main() {
    int deg;
    int point[MAX][MAX], refPoint[MAX][MAX], rotatedPoint[MAX][MAX], temp1[MAX][MAX], temp2[MAX][MAX];
    clrscr();
    printf("Enter a point: x,y = ");
    scanf("%d,%d", &point[0][0], &point[1][0]);
    point[2][0] = 1;
    printf("Enter reference point: x,y = ");
    scanf("%d,%d", &refPoint[0][0], &refPoint[1][0]);
    refPoint[2][0] = 1;
    printf("Enter the degree of rotation: ");
    scanf("%d", &deg);
    // translate to origin 
    translatePoint(point, (-1) * refPoint[0][0], (-1) * refPoint[1][0], temp1);
    // rotate point 
    rotatePoint(temp1, deg, temp2);
    // retranslate 
    translatePoint(temp2, refPoint[0][0], refPoint[1][0], rotatedPoint);
    printf("Rotated point is: %d,%d", rotatedPoint[0][0], rotatedPoint[1][0]);
    getch();
}
