#include <iostream>

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

void binarySearch(int searchValue) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == searchValue) {
            std::cout << "Search value found" << std::endl;
            return;
        } else {
            if (searchValue < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    std::cout << "Search value not found" << std::endl;
}

int main() {
    int value;
    input();
    std::cout << "Enter the value to search: ";
    std::cin >> value;
    binarySearch(value);
    return 0;
}