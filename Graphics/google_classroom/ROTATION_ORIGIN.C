// Rotation of a point with respect to origin
#include<stdio.h>
#include<math.h>

#define MAX 10

double toRad(int deg) {
    return (M_PI / 180.0) * (double)deg;
}

int round(double num) {
    return (num - (int)num >= 0.5) ? (int)(num + 1.0) : (int)num;
}

void multiplyMatrices(int m1, int n1, double matrix1[MAX][MAX], int m2, int n2, int matrix2[MAX][MAX], int result[MAX][MAX]) {
    int i, j, k;
    if (n1 != m2) {
        printf("Multiplication not possible!\n");
        return;
    }
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            result[i][j] = 0;
            for (k = 0; k < n1; k++) {
                result[i][j] = round(result[i][j] + matrix1[i][k] * (double)matrix2[k][j]);
            }
        }
    }
}

void main() {
    int deg;
    int point[MAX][MAX], rotated_point[MAX][MAX];
    double rotation_matrix[MAX][MAX];
    clrscr();
    printf("Enter the point: x,y: ");
    scanf("%d,%d", &point[0][0], &point[1][0]);
    point[2][0] = 1;
    printf("Enter the degree of rotation: ");
    scanf("%d", &deg);
    rotation_matrix[0][0] = cos(toRad(deg));
    rotation_matrix[0][1] = (-1.0) * sin(toRad(deg));
    rotation_matrix[0][2] = 0.0;
    rotation_matrix[1][0] = sin(toRad(deg));
    rotation_matrix[1][1] = cos(toRad(deg));
    rotation_matrix[1][2] = 0.0;
    rotation_matrix[2][0] = 0.0;
    rotation_matrix[2][1] = 0.0;
    rotation_matrix[2][2] = 1.0;
    multiplyMatrices(3, 3, rotation_matrix, 3, 1, point, rotated_point);
    printf("Rotated point is: %d,%d", rotated_point[0][0], rotated_point[1][0]);
    getch();
}
