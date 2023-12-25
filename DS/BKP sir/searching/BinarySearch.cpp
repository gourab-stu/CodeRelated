#include <iostream>

int arr[100];
int size;

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

int binarySearch(int searchValue) {
    int low = 0, high = size - 1, mid, searchResults = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == searchValue) 
            searchResults++;
        else {
            if (searchValue < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    return searchResults;
}

int main() {
    int value, count;
    input();
    std::cout << "Enter the value to search: ";
    std::cin >> value;
    count = binarySearch(value);
    std::cout << count << " search results found" << std::endl;
    return 0;
}