#include<iostream>

void randomInput(int arr[], int size) {
    time_t t;
    srand((unsigned)time(&t));
    for(int i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

void display(int arr[], int size) {
    std::cout << "[ ";
    for(int i = 0; i < size; i++) {
        std::cout << arr[i];
        if(i < (size - 1))
            std::cout << ", ";
    }
    std::cout << " ]\n";
}

int SelectionSort(int arr[], int size) {
    int comparison = 0;
    for(int i = 0; i < (size - 1); i++) {
        int index = i, temp;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[index])
                index = j;
            comparison++;
        }
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
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
    std::cout << "Number of comparisons in Selection Sort is " << SelectionSort(arr, size) << std::endl;
    std::cout << "The sorted array is\n";
    display(arr, size);
    return 0;
}