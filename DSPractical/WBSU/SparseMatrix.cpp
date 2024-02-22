#include<iostream>

int main() {
    int a[10][10], b[10][3], row, col, count = 0, i, j, k = 1;
    std::cout << "Enter total number of rows: ";
    std::cin >> row;
    std::cout << "Enter total number of columns: ";
    std::cin >> col;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            std::cout << "a[" << i << "][" << j << "] = ";
            std::cin >> a[i][j];
        }
    }
    std::cout << "The matrix is\n";
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++)
            std::cout << a[i][j] << "\t";
        std::cout << "\n";
    }
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            if(a[i][j] != 0)
                count++;
    b[0][0] = row;
    b[0][1] = col;
    b[0][2] = count;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(a[i][j] != 0) {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }
    std::cout << "The output matrix is\n";
    for(i = 0; i < (count + 1); i++) {
        for(j = 0; j < 3; j++)
            std::cout << b[i][j] << "\t";
        std::cout << "\n";
    }
    return 0;
}