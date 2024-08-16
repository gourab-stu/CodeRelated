#include <iostream>
#include "../../Array.cpp"

class QuickSort {
    int partition(int arr[], int lower, int higher) {
        int left, right, temp, pivot, flag;
        pivot = left = lower;
        right = higher;
        flag = 0;
        while(flag != 1) {
            while((arr[pivot] <= arr[right]) && (pivot != right)) {
                right--;
            }
            if(pivot == right)
                flag = 1;
            else if(arr[pivot] > arr[right]) {
                std::swap(arr[pivot], arr[right]);
                pivot = right;
            }
            if(flag != 1) {
                while((arr[pivot] >= arr[left]) && (pivot != left)) {
                    left++;
                }
                if(pivot == left)
                    flag = 1;
                else if(arr[pivot] < arr[left]) {
                    std::swap(arr[pivot], arr[left]);
                    pivot = left;
                }
            }
        }
        return pivot;
    }

public:
    void quickSort(int arr[], int lower, int higher) {
        int pivot;
        if(lower < higher) {
            pivot = partition(arr, lower, higher);
            quickSort(arr, lower, (pivot - 1));
            quickSort(arr, (pivot + 1), higher);
        }
    }
};

int main() {
    QuickSort ob;
    int length;
    std::cout << "Enter the number of elements: ";
    std::cin >> length;
    int* array = new int[length];
    std::cout << "Enter " << length << " array elements" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> array[i];
    }
    ob.quickSort(array, 0, (length - 1));
    std::cout << "sorted array" << std::endl;
    display(array, length);
    return 0;
}