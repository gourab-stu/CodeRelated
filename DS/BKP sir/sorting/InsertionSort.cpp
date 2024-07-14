#include<iostream>

class InsertionSort {
public:
    void randomInput(int arr[], int size) {
        time_t t1;
        srand((unsigned)time(&t1));
        for(int i = 0; i < size; i++)
            arr[i] = rand() % 1000;
    }

    void insertionSort(int arr[], int size) {
        arr[-1] = -999;
        for(int i = -1; i < (size - 1); i++) {
            int j = i, next = arr[j + 1];
            while(arr[j] > next) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = next;
        }
    }

    void display(int arr[], int n) {
        std::cout << "[ ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i];
            if (i < (n - 1))
                std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }
};

int main() {
    InsertionSort ob;
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];
    ob.randomInput(arr, size);
    std::cout << "The array is" << std::endl;
    ob.display(arr, size);
    ob.insertionSort(arr, size);
    std::cout << "The sorted array is" << std::endl;
    ob.display(arr, size);
    return 0;
}
