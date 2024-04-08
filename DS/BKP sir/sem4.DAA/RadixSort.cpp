#include<iostream>

void randomInput(int arr[], int size) {
    time_t t1;
    srand((unsigned)time(&t1));
    for(int i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

void display(int arr[], long size) {
    std::cout << "[ ";
    for(long i = 0; i < size; i++) {
        std::cout << arr[i];
        if(i < (size - 1))
            std::cout << ", ";
    }
    std::cout << " ]\n";
}

int RadixSort(int arr[], int size) {
    int i = 1, j = 10, count = 0, max = arr[0], k, index, n1, n2, comparison = 0;
    int temp[size], arr2D[size][size];
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
        for(int t = 0; t < size; t++) {
            temp[t] = 0;
        }
        for(index = 0; index < size; index++) {
            int temp1 = 0;
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
        comparison++;
    }
    return comparison;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];
    randomInput(arr, size);
    std::cout << "The array is\n";
    display(arr, size);
    std::cout << "Number of comparisons in Selection Sort is " << RadixSort(arr, size) << std::endl;
    std::cout << "The sorted array is\n";
    display(arr, size);
    delete[] arr;
    return 0;
}