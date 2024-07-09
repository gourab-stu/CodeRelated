#include<iostream>

class RadixSort {
public:
    void radixSort(int arr[], int size) {
        int i = 1, j = 10, count = 0, max = arr[0], k, index, n1, n2;
        int temp[10], arr2D[10][size];
        for(int t = 1; t < size; t++) {
            if(max < arr[t]) {
                max = arr[t];
            }
        }
        while(max > 0) {
            max = max / 10;
            count++;
        }
        for(k = 1; k <= count; k++) {
            for(int t = 0; t < 10; t++) {
                temp[t] = 0;
            }
            for(index = 0; index < size; index++) {
                n1 = arr[index] % j;
                n2 = n1 / i;
                arr2D[n2][temp[n2]] = arr[index];
                temp[n2]++;
            }
            int temp1 = 0;
            for(int row = 0; row < 10; row++) {
                for(int column = 0; column < temp[row]; column++) {
                    arr[temp1] = arr2D[row][column];
                    temp1++;
                }
            }
            i = i * 10;
            j = j * 10;
        }
    }

    void display(int array[], int length) {
        std::cout << "[ ";
        for (int i = 0; i < length; i++) {
            std::cout << array[i];
            if (i != (length - 1))
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
};

int main() {
    RadixSort ob;
    int length;
    std::cout << "Enter the number of elements: ";
    std::cin >> length;
    int* array = new int[length];
    std::cout << "Enter " << length << " array elements" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> array[i];
    }
    ob.radixSort(array, length);
    std::cout << "sorted array" << std::endl;
    ob.display(array, length);
    return 0;
}