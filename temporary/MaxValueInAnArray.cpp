#include <iostream>

int arr[10], size;

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

int maxValueInArray(int arr[]) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max])
            max = i;
    }
    return max;
}

int main() {
    input();
    std::cout << "Max value in the array is: " << arr[maxValueInArray(arr)] << std::endl;
    return 0;
}