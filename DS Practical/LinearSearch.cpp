#include<iostream>

int arr[100], size, value;

void input() {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    for(int i = 0; i < size; i++) {
        std::cout << "Enter value no " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void LinearSearch() {
    for(int i = 0; i < size; i++) {
        if(arr[i] == value) {
            std::cout << "Search value found" << std::endl;
            return;
        }
    }
    std::cout << "Search value not found" << std::endl;
}

int main() {
    input();
    if(size != 0) {
        std::cout << "Enter the value to search: ";
        std::cin >> value;
        LinearSearch();
    }
    std::cout << "End of program" << std::endl;
    return 0;
}