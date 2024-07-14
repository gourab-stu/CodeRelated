#include<iostream>
#include<chrono>

struct node {
    int data;
    struct node *link;
};


class Sort {
    long long comparison = 0;
public:
    void randomInput(long arr[], long size) {
        time_t t1;
        srand((unsigned)time(&t1));
        for(int i = 0; i < size; i++)
            arr[i] = rand();
    }

    // Function to sort an array using Bubble Sort mechanism
    long long BubbleSort(long arr[], long size) {
        long flag;
        for(int i = 0; i <= (size - 2); i++) {
            flag = 0;
            for(int j = 0; j <= (size - i - 2); j++) {
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
        for(int i = 0; i < (size - 1); i++) {
            int index = i, temp;
            for(int j = i + 1; j < size; j++) {
                if(arr[j] < arr[index]) {
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
        for(int i = -1; i < (size - 1); i++) {
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

    // Function to sort an array using Radix Sort mechanism (implemented using Linked List)
    long long RadixSortLinkedList(long a[], long n) {
        long long i, j = 1, k, r, step, count = 0, max = a[0];
        for (i = 1; i < n; i++) {
            if (max < a[i]) {
                max = a[i];
            }
        }
        while (max > 0) {
            max /= 10;
            count += 1;
        }
        for (step = 1; step <= count; step++, j *= 10) {
            node *p[10];
            for (i = 0; i < 10; i++) {
                p[i] = new node;
                p[i]->link = nullptr;
            }
            for(i = 0; i < n; i++) {
                r = (a[i] / j) % 10;
                node *temp = p[r];
                while (temp->link != nullptr) {
                    temp = temp->link;
                }
                node *temp1 = new node;
                temp1->data = a[i];
                temp1->link = nullptr;
                temp->link = temp1;
            }
            k = 0;
            for (i = 0; i < 10; i++) {
                node *temp = p[i]->link;
                while (temp != nullptr) {
                    a[k++] = temp->data;
                    temp = temp->link;
                }
            }
        }
        return count;
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

    // Function to merge two sorted arrays
    void merge(long arr[], long low, long mid, long high) {
        long lengthl = (mid - low) + 1, lengthr = (high - mid), l, r, index;
        long *left = new long[lengthl], *right = new long[lengthr];
        for(long i = 0, j = low; j <= mid; i++, j++)
            left[i] = arr[j];
        for(long i = 0, j = (mid + 1); j <= high; i++, j++)
            right[i] = arr[j];
        l = 0;
        r = 0;
        index = low;
        while((l < lengthl) && (r < lengthr)) {
            if(left[l] <= right[r]) {
                arr[index] = left[l];
                l++;
                index++;
                comparison++;
            } else {
                arr[index] = right[r];
                r++;
                index++;
                comparison++;
            }
        }
        while(l < lengthl) {
            arr[index] = left[l];
            l++;
            index++;
            comparison++;
        }
        while(r < lengthr) {
            arr[index] = right[r];
            r++;
            index++;
            comparison++;
        }
        delete[] left;
        delete[] right;
    }

    // Function to sort an array using Merge Sort mechanism
    long long MergeSort(long arr[], long low, long high) {
        if(low < high) {
            long mid = (low + high) / 2;
            MergeSort(arr, low, mid);
            MergeSort(arr, (mid + 1), high);
            merge(arr, low, mid, high);
        }
        return comparison;
    }

    // Function to sort an array using Counting Sort mechanism
    long long CountingSort(long input[], long length) {
        long long max = -99999, min = 99999, count = 0, i;
        for (i = 0; i < length; i++, count++) {
            if (input[i] > max) {
                max = input[i];
            }
            if (input[i] < min) {
                min = input[i];
            }
        }
        long long countingArrayLength = max - min + 1;
        long long countingArray[countingArrayLength], sorted[length];
        for (i = 0; i < countingArrayLength; i++, count++) {
            countingArray[i] = 0;
        }
        for (i = 0; i < length; i++, count++) {
            countingArray[input[i] - min]++;
        }
        for (i = 1; i < countingArrayLength; i++, count++) {
            countingArray[i] = countingArray[i] + countingArray[i - 1];
        }
        for (i = 0; i < length; i++, count++) {
            sorted[--countingArray[input[i] - min]] = input[i];
        }
        for (i = 0; i < length; i++) {
            input[i] = sorted[i];
        }
        return count;
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

    // MergeSort
    ob.copy(org, temp, size);
    auto start_time6 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Merge sort is: " << ob.MergeSort(temp, 0, (size - 1)) << std::endl;
    auto end_time6 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration6 = end_time6 - start_time6;
    double runtime_seconds6 = duration6.count();
    std::cout << "\n[Done] exited in " << runtime_seconds6 << " seconds" << std::endl;

    // RadixSortLinkedList
    ob.copy(org, temp, size);
    auto start_time7 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Radix sort using Linked List is: " << ob.RadixSortLinkedList(temp, size) << std::endl;
    auto end_time7 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration7 = end_time7 - start_time7;
    double runtime_seconds7 = duration7.count();
    std::cout << "\n[Done] exited in " << runtime_seconds7 << " seconds" << std::endl;

    // CountingSort
    ob.copy(org, temp, size);
    auto start_time8 = std::chrono::high_resolution_clock::now();
    std::cout << "\nNumber of comparison in Radix sort using Linked List is: " << ob.CountingSort(temp, size) << std::endl;
    auto end_time8 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration8 = end_time8 - start_time8;
    double runtime_seconds8 = duration8.count();
    std::cout << "\n[Done] exited in " << runtime_seconds8 << " seconds" << std::endl;
    
    return 0;
}
