#include<iostream>

class Matrix {
    int row, col, count = 0, i, j, k = 1;
public:
    int  a[10][10], b[10][10];
    // takes the inputs of the matrix
    void input() {
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
    }
    // counts the total number of non-zero elements
    void totalNonZero() {
        for(i = 0; i < row; i++)
            for(j = 0; j < col; j++)
                if(a[i][j] != 0)
                    count++;
    }
    // converts the entire matrix into sparse matrix
    void toSparseMatrix() {
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
    }
    // displays the matrix
    void display(int arr[10][10]) {
        std::cout << "The matrix is\n";
        for(i = 0; i < (count + 1); i++) {
            for(j = 0; j < 3; j++)
                std::cout << arr[i][j] << "\t";
            std::cout << "\n";
        }
    }
};

int main() {
    Matrix ob;
    ob.input();
    ob.display(ob.a);
    ob.toSparseMatrix();
    std::cout << "After converting to sparse matrix\n";
    ob.display(ob.b);
    return 0;
}