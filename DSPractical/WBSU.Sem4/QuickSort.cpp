#include<iostream>

class QuickSort {
public:
    void swap(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

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

    void quickSort(int arr[], int lower, int higher) {
        int pivot;
        if(lower < higher) {
            pivot = partition(arr, lower, higher);
            quickSort(arr, lower, pivot);
            quickSort(arr, (pivot + 1), higher);
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
    ob.display(array, length);
    return 0;
}