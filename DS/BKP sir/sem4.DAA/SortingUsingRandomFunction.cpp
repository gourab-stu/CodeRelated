#include<iostream>

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
        long comparison = 0;
        int flag;
        for(long i = 0; i < (size - 1); i++) {
            flag = 0;
            for(long j = 0; j < (size - i - 1); j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    flag++;
                }
                comparison++;
            }
            if(flag == 0)
                break;
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
    
    // Function to copy the 1st array to the 2nd array 
    void copy(long original[], long copied[], long size) {
        for(long long i = 0; i < 100; i++) {
            copied[i] = original[i];
        }
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
    std::cout << "Number of comparison in Bubble sort is: " << ob.BubbleSort(temp, size) << std::endl;
    
    // SelectionSort
    ob.copy(org, temp, size);
    std::cout << "Number of comparison in Selection sort is: " << ob.SelectionSort(temp, size) << std::endl;
    
    // InsertionSort
    ob.copy(org, temp, size);
    std::cout << "Number of comparison in Insertion sort is: " << ob.InsertionSort(temp, size) << std::endl;

    return 0;
}
