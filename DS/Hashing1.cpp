#include <iostream>

int size;

int maxValueInArray(int arr[]) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[max])
            max = i;
    }
    return max;
}

int numberOfDigits(int num) {
    int n = num, r, count = 0;
    while (n > 0) {
        r = n % 10;
        count++;
        n = n / 10;
    }
    return count;
}

int power(int p) {
    if (p == 1)
        return 10;
    else
        return 10 * power(--p);
}

int* hash1(int arr[]) {
    int newSize = power(numberOfDigits(maxValueInArray(arr))), newArr[newSize], r;
    for (int i = 0; i < newSize; i++) 
        newArr[i] = 0;
    for (int i = 0; i < size; i++) {
        r = arr[i] % newSize;
        newArr[r] = arr[i];
    }
    size = newSize;
    return newArr;
}

int main() {
    int arr[size];
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    if (size == 0) 
        exit(0);
    for (int i = 0; i < size; i++) {
        std::cout << "Enter data no " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
    int* a = hash1(arr);
    std::cout << "After hashing the array is" << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << "arr[" << i << "] = " << a[i] << std::endl;
    return 0;
}