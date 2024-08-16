#include <iostream>
#include "../../Array.cpp"

class QuickSortCormen {
    int partition(int arr[], int low, int high) {
        int x, i, j;
        x = arr[high];
        i = low - 1;
        for (j = low; j < high; j++) {
            if (arr[j] <= x) {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

public:
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, (pivot - 1));
            quickSort(arr, (pivot + 1), high);
        }
    }
};

int main() {
    QuickSortCormen ob;
    int length;
    std::cout << "Enter the number of elements: ";
    std::cin >> length;
    int* array = new int[length];
    randomInput(array, length);
    std::cout << "Input array" << std::endl;
    display(array, length);
    ob.quickSort(array, 0, (length - 1));
    std::cout << "Output array" << std::endl;
    display(array, length);
    return 0;
}