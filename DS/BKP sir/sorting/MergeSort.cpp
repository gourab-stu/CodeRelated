#include<iostream>

void randomInput(int arr[], long size) {
    time_t t;
    srand((unsigned)time(&t));
    for(long i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

void display(int arr[], long size) {
    std::cout << "[ ";
    for(long i = 0; i < size; i++) {
        std::cout << arr[i];
        if(i < (size - 1))
            std::cout << ", ";
    }
    std::cout << " ]\n";
}

void merge(int arr[], long low, long mid, long high) {
    long lengthl = (mid - low) + 1, lengthr = (high - mid), l, r, index;
    int *left = new int[lengthl], *right = new int[lengthr];
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
        } else {
            arr[index] = right[r];
            r++;
            index++;
        }
    }
    while(l < lengthl) {
        arr[index] = left[l];
        l++;
        index++;
    }
    while(r < lengthr) {
        arr[index] = right[r];
        r++;
        index++;
    }
    delete[] left;
    delete[] right;
}

void MergeSort(int arr[], long low, long high) {
    if(low < high) {
        long mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, (mid + 1), high);
        merge(arr, low, mid, high);
    }
}

int main() {
    long size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int *arr = new int[size];
    randomInput(arr, size);
    std::cout << "The array is\n";
    display(arr, size);
    MergeSort(arr, 0, (size - 1));
    std::cout << "After sorting the array is\n";
    display(arr, size);
    delete[] arr;
    return 0;
}