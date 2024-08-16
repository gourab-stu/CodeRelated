#include <iostream>

void randomInput(long arr[], long size) {
    time_t t1;
    srand((unsigned)time(&t1));
    for(long i = 0; i < size; i++) {
        arr[i] = rand();
    }
}

void randomInput(int arr[], int size) {
    time_t t1;
    srand((unsigned)time(&t1));
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
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