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

void SelectionSort() {
    for (int i = 0; i <= (size - 2); i++) {
        int index = i, temp;
        for (int j = i + 1; j <= (size - 1); j++)
            if (arr[j] < arr[index])
                index = j;
        temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;
    }
}

void display() {
    std::cout << "After sorting in ascending order the array is" << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

int main() {
    input();
    SelectionSort();
    display();
    return 0;
}