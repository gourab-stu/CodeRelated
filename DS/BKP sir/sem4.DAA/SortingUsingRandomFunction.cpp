#include<iostream>
#include<chrono>
#include<cstdlib>
#include<ctime>

class Sort {
    long size;
    long arr[100], original[100];

public:
    void input() {
        time_t t1;
        srand((unsigned)time(&t1));
        // std::cout << "Enter the number of inputs: ";
        // std::cin >> size;
        size = rand() % 1000;
        std::cout << "Number of inputs is: " << size << std::endl;
        if(size == 0)
            exit(0);
        for(int i = 0; i < size; i++) {
            std::cout << i << " out of " << size << " passed\n";
            original[i] = rand() % 1000;
        }
    }

    // Function to sort an array using Bubble Sort mechanism
    long BubbleSort() {
        long comparison = 0;
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
    long SelectionSort() {
        long comparison = 0;
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
    long InsertionSort() {
        long comparison = 0;
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

        // for(long i = 1; i <= (size - 1); i++) {
        //     long nextElement = arr[i], j = i - 1;
        //     while((j >= 0) && (arr[j] > nextElement)) {
        //         arr[j + 1] = arr[j];
        //         j--;
        //         comparison = comparison + 1;
        //     }
        //     arr[j + 1] = nextElement;
        // }

        // long i, j, temp;  
        // for (long i = 1; i < n; i++) {  
        //     temp = arr[i];  
        //     j = i - 1;  
        //     while(j>=0 && temp <= a[j]) { /* Move the elements greater than temp to one position ahead from their current position*/      
        //         a[j+1] = a[j];     
        //         j = j-1;    
        //     }    
        //     a[j+1] = temp;    
        // } 
    
    void copy() {
        for(long i = 0; i < 100; i++) {
            arr[i] = original[i];
        }
    }
};

int main() {
    // const double picoToSec = (1E - 12);
    using picoseconds = std::chrono::duration<long long, std::pico>;
    constexpr auto N = 10000;
    auto t0 = std::chrono::steady_clock::now();
    Sort ob;
    long comparison;
    ob.input();
    
    // BubbleSort
    ob.copy();
    comparison = ob.BubbleSort();
    std::cout << "Number of comparison in Bubble sort is: " << comparison << std::endl;
    
    // SelectionSort
    ob.copy();
    comparison = ob.SelectionSort();
    std::cout << "Number of comparison in Selection sort is: " << comparison << std::endl;
    
    // InsertionSort
    ob.copy();
    comparison = ob.InsertionSort();
    std::cout << "Number of comparison in Insertion sort is: " << comparison << std::endl;

    auto t1 = std::chrono::steady_clock::now();
    auto d = picoseconds(t1 - t0);
    /*long */double count = (d.count() /* 1000000000*/);
    std::cout << "Time elapsed: " << count * 0.000000000001 << " second" << std::endl;
    return 0;
}
