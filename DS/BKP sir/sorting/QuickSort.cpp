#include<iostream>
#include<cstdlib>
#include<ctime>

class cl {
public:
    void swap(long &a, long &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    void randomInput(long arr[], long size) {
        time_t t1;
        srand((unsigned)time(&t1));
        for(int i = 0; i < size; i++) 
            arr[i] = rand() % 100;
    }

    long partition(long arr[], long lower, long higher) {
        long left, right, temp, pivot, flag;
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

    void QuickSort(long arr[], long lower, long higher) {
        int pivot;
        if(lower < higher) {
            pivot = partition(arr, lower, higher);
            QuickSort(arr, lower, pivot);
            QuickSort(arr, (pivot + 1), higher);
        }
    }

    void display(long arr[], long size) {
        std::cout << "[ ";
        for(long i = 0; i < size; i++) {
            std::cout << arr[i];
            if(i == (size - 1))
                std::cout << " ]" << std::endl;
            else
                std::cout << ", ";
        }
    }
};

int main() {
    cl ob;
    long size;
    std::cout << "Enter the size of random inputs: ";
    std::cin >> size;
    long* input = new long[size];
    ob.randomInput(input, size);
    std::cout << "The array is\n";
    ob.display(input, size);
    ob.QuickSort(input, 0, (size - 1));
    std::cout << "The sorted array is\n";
    ob.display(input, size);
    delete[] input;
    return 0;
}