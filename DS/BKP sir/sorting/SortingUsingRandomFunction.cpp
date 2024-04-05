#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>
#include "/home/gourab/CodeRelated/DS/BKP sir/sorting/QuickSort.cpp"

class Sort {
    long long comparison = 0;
public:
    void randomInput(long arr[], long size) {
        time_t t1;
        srand((unsigned)time(&t1));
        if(size == 0)
            exit(0);
        for(int i = 0; i < size; i++)
            arr[i] = rand();
    }

    // Function to sort an array using Bubble Sort mechanism
    long long BubbleSort(long arr[], long size) {
        for(int i = 0; i <= (size - 2); i++) {
            for(int j = 0; j <= (size - i - 2); j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
                comparison++;
            }
        }
        return comparison;
    }

    // Function to sort an array using Selection Sort mechanism
    long long SelectionSort(long arr[], long size) {
        long long comparison = 0;
        for(int i = 0; i <= (size - 2); i++) {
            int index = i, temp;
            for(int j = i + 1; j <= (size - 1); j++) {
                if (arr[j] < arr[index]) {
                    index = j;
                }
                comparison++;
            }
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
        }
        return comparison;
    }

    // Function to sort an array using Insertion Sort mechanism
    long long InsertionSort(long arr[], long size) {
        long comparison = 0;
        arr[-1] = -999;
        for(int i = -1; i < size; i++) {
            int j = i, next = arr[j + 1];
            while(arr[j] > next) {
                arr[j + 1] = arr[j];
                j--;
                comparison++;
            }
            arr[j + 1] = next;
        }
        return comparison;
    }

    // Function to sort an array using Radix Sort mechanism
    long long RadixSort(long arr[], long size) {
        long long comparison = 0;
        int i = 1, j = 10, count = 0, max = arr[0], k, index, n1, n2;
        for(int i = 1; i < size; i++) {
            if(max < arr[i]) {
                max = arr[i];
            }
        }
        while(max > 0) {
            max = max / 10;
            count++;
        }
        for(k = 1; k <= count; k++) {
            int arr2D[10][size];
            for(int row = 0; row < 10; row++) {
                for(int column = 0; column < size; column++) {
                    arr2D[row][column] = __INT_MAX__;
                }
            }
            for(index = 0; index < size; index++) {
                int temp1 = 0;
                n1 = arr[index] % j;
                n2 = n1 / i;
                while((arr2D[n2][temp1] != __INT_MAX__) && (temp1 < 10)) {
                    temp1++;
                }
                arr2D[n2][temp1] = arr[index];
            }
            int temp2 = 0;
            for(int row = 0; row < 10; row++) {
                for(int column = 0; column < size; column++) {
                    if(arr2D[row][column] != __INT_MAX__) {
                        arr[temp2] = arr2D[row][column];
                        temp2++;
                    }
                }
            }
            i = i * 10;
            j = j * 10;
            comparison++;
        }
        return comparison++;
    }
    
    // Function to adjust the pivot element in its appropriate position
    long partition(long arr[], long lower, long higher) {
        long left, right, temp, pivot, flag;
        pivot = left = lower;
        right = higher;
        flag = 0;
        while(flag != 1) {
            while((arr[pivot] <= arr[right]) && (pivot != right)) {
                comparison++;
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
                    comparison++;
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

    // Function to sort an array using Quick Sort mechanism
    long long QuickSort(long arr[], long lower, long higher) {
        int pivot;
        if(lower < higher) {
            pivot = partition(arr, lower, higher);
            QuickSort(arr, lower, pivot);
            QuickSort(arr, (pivot + 1), higher);
        }
        return comparison;
    }
    
    // Function to copy the 1st array to the 2nd array 
    void copy(long original[], long copied[], long size) {
        for(long long i = 0; i < 100; i++) {
            copied[i] = original[i];
        }
        comparison = 0;
    }
};

int main() {
    Sort ob;
    long size;
    std::cout << "Enter the number of inputs: ";
    std::cin >> size;
    long* org = new long[size];
    long* temp = new long[size];
    ob.randomInput(org, size);
    
    // BubbleSort
    ob.copy(org, temp, size);
    auto start_time1 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Bubble sort is: " << ob.BubbleSort(temp, size) << std::endl;
    auto end_time1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration1 = end_time1 - start_time1;
    double runtime_seconds1 = duration1.count();
    std::cout << "\n[Done] exited in " << runtime_seconds1 << " seconds" << std::endl;
    
    // SelectionSort
    ob.copy(org, temp, size);
    auto start_time2 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Selection sort is: " << ob.SelectionSort(temp, size) << std::endl;
    auto end_time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end_time2 - start_time2;
    double runtime_seconds2 = duration2.count();
    std::cout << "\n[Done] exited in " << runtime_seconds2 << " seconds" << std::endl;
    
    // InsertionSort
    ob.copy(org, temp, size);
    auto start_time3 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Insertion sort is: " << ob.InsertionSort(temp, size) << std::endl;
    auto end_time3 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration3 = end_time3 - start_time3;
    double runtime_seconds3 = duration3.count();
    std::cout << "\n[Done] exited in " << runtime_seconds3 << " seconds" << std::endl;

    // RadixSort
    ob.copy(org, temp, size);
    auto start_time4 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Radix sort is: " << ob.RadixSort(temp, size) << std::endl;
    auto end_time4 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration4 = end_time4 - start_time4;
    double runtime_seconds4 = duration4.count();
    std::cout << "\n[Done] exited in " << runtime_seconds4 << " seconds" << std::endl;

    // QuickSort
    ob.copy(org, temp, size);
    auto start_time5 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Quick sort is: " << ob.QuickSort(temp, 0, (size - 1)) << std::endl;
    auto end_time5 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration5 = end_time5 - start_time5;
    double runtime_seconds5 = duration5.count();
    std::cout << "\n[Done] exited in " << runtime_seconds5 << " seconds" << std::endl;

    return 0;
}
