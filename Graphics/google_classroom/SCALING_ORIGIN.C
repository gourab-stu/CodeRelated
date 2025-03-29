// Scaling of a point with respect to origin
#include<stdio.h>
#include<conio.h>

#define MAX 10

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

void main() {
    int sx, sy;
    int point[MAX][MAX], scaling_matrix[MAX][MAX], scaled_point[MAX][MAX];
    clrscr();
    printf("Enter a point: x,y = ");
    scanf("%d,%d", &point[0][0], &point[1][0]);
    point[2][0] = 1;
    printf("Enter sx: ");
    scanf("%d", &sx);
    printf("Enter sy: ");
    scanf("%d", &sy);
    scaling_matrix[0][0] = sx;
    scaling_matrix[0][1] = 0;
    scaling_matrix[0][2] = 0;
    scaling_matrix[1][0] = 0;
    scaling_matrix[1][1] = sy;
    scaling_matrix[1][2] = 0;
    scaling_matrix[2][0] = 0;
    scaling_matrix[2][1] = 0;
    scaling_matrix[2][2] = 1;
    multiplyMatrices(3, 3, scaling_matrix, 3, 1, point, scaled_point);
    printf("Scaled point is: %d,%d", scaled_point[0][0], scaled_point[1][0]);
    getch();
}
