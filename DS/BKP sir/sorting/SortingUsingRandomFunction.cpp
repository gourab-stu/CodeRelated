#include<iostream>
#include<cstdlib>
#include<ctime>
#include<chrono>

class Sort {
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
        long long comparison = 0;
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
        long long comparison = 0;
        for(int i = 1; i <= (size - 1); i++) {
            int nextElement = arr[i], j = i - 1;
            while((j >= 0) && (arr[j] > nextElement)) {
                arr[j + 1] = arr[j];
                j--;
                comparison++;
            }
            arr[j + 1] = nextElement;
            comparison++;
        }
        return comparison;
    }

    // Function to find the maximum value in an array
    int maxInTheArray(long arr[], long size) {
        int max = arr[0];
        for(int i = 1; i < size; i++)
            if(max < arr[i])
                max = arr[i];
        return max;
    }

    // Function to find the number of digits of a number
    int numberOfDigits(int n) {
        int count = 0;
        while(n > 0) {
            n = n / 10;
            count++;
        }
        return count;
    }

    // Function to sort an array using Radix Sort mechanism
    long long RadixSort(long arr[], long size) {
        long long comparison = 0;
        int i = 1, j = 10, count = numberOfDigits(maxInTheArray(arr, size)), k, index, n1, n2;
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
    
    // Function to copy the 1st array to the 2nd array 
    void copy(long original[], long copied[], long size) {
        for(long long i = 0; i < 100; i++) {
            copied[i] = original[i];
        }
    }

};

int main() {
    Sort ob;
    long size = 50000;
    // std::cout << "Enter the number of inputs: ";
    // std::cin >> size;
    long* org = new long[size];
    long* temp = new long[size];
    ob.randomInput(org, size);
    
    // BubbleSort
    auto start_time1 = std::chrono::high_resolution_clock::now();
    ob.copy(org, temp, size);
    std::cout << "\nNumber of comparison in Bubble sort is: " << ob.BubbleSort(temp, size) << std::endl;
    auto end_time1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration1 = end_time1 - start_time1;
    double runtime_seconds1 = duration1.count();
    std::cout << "\n[Done] exited in " << runtime_seconds1 << " seconds" << std::endl;
    
    // SelectionSort
    auto start_time2 = std::chrono::high_resolution_clock::now();
    ob.copy(org, temp, size);
    std::cout << "\nNumber of comparison in Selection sort is: " << ob.SelectionSort(temp, size) << std::endl;
    auto end_time2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end_time2 - start_time2;
    double runtime_seconds2 = duration2.count();
    std::cout << "\n[Done] exited in " << runtime_seconds2 << " seconds" << std::endl;
    
    // InsertionSort
    auto start_time3 = std::chrono::high_resolution_clock::now();
    ob.copy(org, temp, size);
    std::cout << "\nNumber of comparison in Insertion sort is: " << ob.InsertionSort(temp, size) << std::endl;
    auto end_time3 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration3 = end_time3 - start_time3;
    double runtime_seconds3 = duration3.count();
    std::cout << "\n[Done] exited in " << runtime_seconds3 << " seconds" << std::endl;

    // RadixSort
    auto start_time4 = std::chrono::high_resolution_clock::now();
    ob.copy(org, temp, size);
    std::cout << "\nNumber of comparison in Radix sort is: " << ob.RadixSort(temp, size) << std::endl;
    auto end_time4 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration4 = end_time4 - start_time4;
    double runtime_seconds4 = duration4.count();
    std::cout << "\n[Done] exited in " << runtime_seconds4 << " seconds" << std::endl;

    return 0;
}
