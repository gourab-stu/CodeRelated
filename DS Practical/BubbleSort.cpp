#include<iostream>

int arr[100], size;

void input() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if (size == 0)
        exit(0);
    for (int i = 0; i < size; i++) {
        std::cout << "Enter value no " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void BubbleSort() {
    for(int i = 0; i <= (size - 2); i++) {
        for(int j = 0; j <= (size - i - 2); j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display() {
    std::cout << "After sorting in ascending order the array is" << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

int main() {
    input();
    BubbleSort();
    display();
    return 0;
}