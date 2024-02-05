#include<iostream>

int arr[100], size;

void input() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if(size == 0)
        exit(0);
    for(int i = 0; i < size; i++) {
        std::cout << "Enter value no " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void InsertionSort() {
    for(int i = 1; i <= (size - 1); i++) {
        int nextElement = arr[i], j = i - 1;
        while((j >= 0) && (arr[j] > nextElement)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = nextElement;
    }
}

void display() {
    std::cout << "After sorting in ascending order the array is" << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

int main() {
    input();
    InsertionSort();
    display();
    return 0;
}