#include<stdio.h>

int size, arr[100];

int input() {
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        printf("Enter value no %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
}

void RadixSort() {
    int i = 1, j = 10, count = 0, max = arr[0], k, index, n1, n2;
    for(int i = 1; i < size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    while(max > 0) {
        max = max / 10;
        count++;
    }
    for(k = 1; k <= count; k++) {
        int arr2D[10][size];
        for(int row = 0; row < 10; row++) {
            for(int column = 0; column < size; column++) {
                arr2D[row][column] = __INT_MAX__;
            }
        }
        for(index = 0; index < size; index++) {
            int temp1 = 0;
            n1 = arr[index] % j;
            n2 = n1 / i;
            while((arr2D[n2][temp1] != __INT_MAX__) && (temp1 < 10)) {
                temp1++;
            }
            arr2D[n2][temp1] = arr[index];
        }
        int temp2 = 0;
        for(int row = 0; row < 10; row++) {
            for(int column = 0; column < size; column++) {
                if(arr2D[row][column] != __INT_MAX__) {
                    arr[temp2] = arr2D[row][column];
                    temp2++;
                }
            }
        }
        i = i * 10;
        j = j * 10;
    }
}

void display() {
    printf("[ ");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i < (size-1))
            printf(", ");
    }
    printf(" ]\n");
}

int main() {
    input();
    RadixSort();
    printf("After radix sort the array is\n");
    display();
    return 0;
}