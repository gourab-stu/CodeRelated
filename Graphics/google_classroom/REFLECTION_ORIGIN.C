// Reflection of a point with respect to origin
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
    int i, j;
    int point[MAX][MAX], reflection_matrix[MAX][MAX], reflected_point[MAX][MAX];
    clrscr();
    printf("Enter a point: x,y = ");
    scanf("%d,%d", &point[0][0], &point[1][0]);
    point[2][0] = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) reflection_matrix[i][j] = 1;
            else reflection_matrix[i][j] = 0;
        }
    }
    reflection_matrix[1][1] = (-1);
    multiplyMatrices(3, 3, reflection_matrix, 3, 1, point, reflected_point);
    printf("Reflected point about x-axis is: %d,%d\n", reflected_point[0][0], reflected_point[1][0]);
    reflection_matrix[0][0] = (-1);
    reflection_matrix[1][1] = 1;
    multiplyMatrices(3, 3, reflection_matrix, 3, 1, point, reflected_point);
    printf("Reflected point about y-axis is: %d,%d\n", reflected_point[0][0], reflected_point[1][0]);
    reflection_matrix[0][0] = (-1);
    reflection_matrix[1][1] = (-1);
    multiplyMatrices(3, 3, reflection_matrix, 3, 1, point, reflected_point);
    printf("Reflected point about xy-plain is: %d,%d\n", reflected_point[0][0], reflected_point[1][0]);
    getch();
}
